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
     BOTTOM_ = 303,
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
     DOWN_ = 361,
     DS9_ = 362,
     EDIT_ = 363,
     ECLIPTIC_ = 364,
     ELEVATION_ = 365,
     ELLIPTIC_ = 366,
     ELLIPSE_ = 367,
     ELLIPSEANNULUS_ = 368,
     END_ = 369,
     ENVI_ = 370,
     EPANDA_ = 371,
     EPSILON_ = 372,
     EQUATORIAL_ = 373,
     ERASE_ = 374,
     EXT_ = 375,
     FADE_ = 376,
     FACTOR_ = 377,
     FALSE_ = 378,
     FILE_ = 379,
     FILL_ = 380,
     FILTER_ = 381,
     FIRST_ = 382,
     FIT_ = 383,
     FITS_ = 384,
     FITSY_ = 385,
     FIXED_ = 386,
     FK4_ = 387,
     FK5_ = 388,
     FONT_ = 389,
     FORMAT_ = 390,
     FOOTPRINT_ = 391,
     FROM_ = 392,
     FRONT_ = 393,
     FULL_ = 394,
     FUNCTION_ = 395,
     GALACTIC_ = 396,
     GAUSSIAN_ = 397,
     GET_ = 398,
     GLOBAL_ = 399,
     GRAPHICS_ = 400,
     GRAY_ = 401,
     GRID_ = 402,
     GZ_ = 403,
     HANDLE_ = 404,
     HAS_ = 405,
     HEAD_ = 406,
     HEADER_ = 407,
     HEIGHT_ = 408,
     HIDE_ = 409,
     HIGHLITE_ = 410,
     HISTEQU_ = 411,
     HISTOGRAM_ = 412,
     HORIZONTAL_ = 413,
     HSV_ = 414,
     HLS_ = 415,
     ICRS_ = 416,
     ID_ = 417,
     IIS_ = 418,
     IMAGE_ = 419,
     INCLUDE_ = 420,
     INCR_ = 421,
     INFO_ = 422,
     ITERATION_ = 423,
     IRAF_ = 424,
     IRAFMIN_ = 425,
     J2000_ = 426,
     KEY_ = 427,
     KEYWORD_ = 428,
     LABEL_ = 429,
     LAYER_ = 430,
     LAYERNO_ = 431,
     LAST_ = 432,
     LENGTH_ = 433,
     LEVEL_ = 434,
     LIGHTEN_ = 435,
     LITTLE_ = 436,
     LITTLEENDIAN_ = 437,
     LINE_ = 438,
     LINEAR_ = 439,
     LIST_ = 440,
     LOAD_ = 441,
     LOCAL_ = 442,
     LOG_ = 443,
     MACOSX_ = 444,
     MAGNIFIER_ = 445,
     MATCH_ = 446,
     MAP_ = 447,
     MARK_ = 448,
     MARKER_ = 449,
     MASK_ = 450,
     MEDIAN_ = 451,
     MESSAGE_ = 452,
     METHOD_ = 453,
     MINMAX_ = 454,
     MINOR_ = 455,
     MIP_ = 456,
     MMAP_ = 457,
     MMAPINCR_ = 458,
     MOSAIC_ = 459,
     MODE_ = 460,
     MOTION_ = 461,
     MULTICOLOR_ = 462,
     MOVE_ = 463,
     NAME_ = 464,
     NAN_ = 465,
     NATIVE_ = 466,
     NAXES_ = 467,
     NEW_ = 468,
     NEXT_ = 469,
     NO_ = 470,
     NONE_ = 471,
     NONNAN_ = 472,
     NONZERO_ = 473,
     NOW_ = 474,
     NRRD_ = 475,
     NUMBER_ = 476,
     OBJECT_ = 477,
     OFF_ = 478,
     ON_ = 479,
     ONLY_ = 480,
     OPTION_ = 481,
     ORIENT_ = 482,
     PAN_ = 483,
     PANNER_ = 484,
     PARSER_ = 485,
     PASTE_ = 486,
     PERF_ = 487,
     PHOTO_ = 488,
     PHYSICAL_ = 489,
     PIXEL_ = 490,
     PLOT2D_ = 491,
     PLOT3D_ = 492,
     POINT_ = 493,
     POINTER_ = 494,
     POLYGON_ = 495,
     POSTSCRIPT_ = 496,
     POW_ = 497,
     PRECISION_ = 498,
     PRINT_ = 499,
     PRESERVE_ = 500,
     PROJECTION_ = 501,
     PROPERTY_ = 502,
     PUBLICATION_ = 503,
     PROS_ = 504,
     QUERY_ = 505,
     RADIAL_ = 506,
     RADIUS_ = 507,
     RANGE_ = 508,
     REGION_ = 509,
     REPLACE_ = 510,
     RESAMPLE_ = 511,
     RESCAN_ = 512,
     RESET_ = 513,
     RESOLUTION_ = 514,
     RGB_ = 515,
     ROOT_ = 516,
     ROTATE_ = 517,
     RULER_ = 518,
     SAMPLE_ = 519,
     SAOIMAGE_ = 520,
     SAOTNG_ = 521,
     SAVE_ = 522,
     SCALE_ = 523,
     SCAN_ = 524,
     SCIENTIFIC_ = 525,
     SCOPE_ = 526,
     SCREEN_ = 527,
     SEGMENT_ = 528,
     SELECT_ = 529,
     SET_ = 530,
     SEXAGESIMAL_ = 531,
     SHAPE_ = 532,
     SHARED_ = 533,
     SHIFT_ = 534,
     SHMID_ = 535,
     SHOW_ = 536,
     SIGMA_ = 537,
     SINH_ = 538,
     SIZE_ = 539,
     SLICE_ = 540,
     SMMAP_ = 541,
     SMOOTH_ = 542,
     SOCKET_ = 543,
     SOCKETGZ_ = 544,
     SOURCE_ = 545,
     SQRT_ = 546,
     SQUARED_ = 547,
     SSHARED_ = 548,
     STATS_ = 549,
     STATUS_ = 550,
     SUM_ = 551,
     SYNC_ = 552,
     SYSTEM_ = 553,
     TABLE_ = 554,
     TAG_ = 555,
     TEMPLATE_ = 556,
     TEXT_ = 557,
     THREADS_ = 558,
     THREED_ = 559,
     THRESHOLD_ = 560,
     THICK_ = 561,
     TOP_ = 562,
     TRANSPARENCY_ = 563,
     TO_ = 564,
     TOGGLE_ = 565,
     TOPHAT_ = 566,
     TRUE_ = 567,
     TYPE_ = 568,
     UNDO_ = 569,
     UNHIGHLITE_ = 570,
     UNLOAD_ = 571,
     UNSELECT_ = 572,
     UPDATE_ = 573,
     UP_ = 574,
     USER_ = 575,
     VALUE_ = 576,
     VAR_ = 577,
     VIEW_ = 578,
     VECTOR_ = 579,
     VERSION_ = 580,
     VERTEX_ = 581,
     VERTICAL_ = 582,
     WARP_ = 583,
     WCS_ = 584,
     WCSA_ = 585,
     WCSB_ = 586,
     WCSC_ = 587,
     WCSD_ = 588,
     WCSE_ = 589,
     WCSF_ = 590,
     WCSG_ = 591,
     WCSH_ = 592,
     WCSI_ = 593,
     WCSJ_ = 594,
     WCSK_ = 595,
     WCSL_ = 596,
     WCSM_ = 597,
     WCSN_ = 598,
     WCSO_ = 599,
     WCSP_ = 600,
     WCSQ_ = 601,
     WCSR_ = 602,
     WCSS_ = 603,
     WCST_ = 604,
     WCSU_ = 605,
     WCSV_ = 606,
     WCSW_ = 607,
     WCSX_ = 608,
     WCSY_ = 609,
     WCSZ_ = 610,
     WCS0_ = 611,
     WFPC2_ = 612,
     WIDTH_ = 613,
     WIN32_ = 614,
     XML_ = 615,
     XY_ = 616,
     YES_ = 617,
     ZERO_ = 618,
     ZMAX_ = 619,
     ZSCALE_ = 620,
     ZOOM_ = 621
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
#define BOTTOM_ 303
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
#define DOWN_ 361
#define DS9_ 362
#define EDIT_ 363
#define ECLIPTIC_ 364
#define ELEVATION_ 365
#define ELLIPTIC_ 366
#define ELLIPSE_ 367
#define ELLIPSEANNULUS_ 368
#define END_ 369
#define ENVI_ 370
#define EPANDA_ 371
#define EPSILON_ 372
#define EQUATORIAL_ 373
#define ERASE_ 374
#define EXT_ 375
#define FADE_ 376
#define FACTOR_ 377
#define FALSE_ 378
#define FILE_ 379
#define FILL_ 380
#define FILTER_ 381
#define FIRST_ 382
#define FIT_ 383
#define FITS_ 384
#define FITSY_ 385
#define FIXED_ 386
#define FK4_ 387
#define FK5_ 388
#define FONT_ 389
#define FORMAT_ 390
#define FOOTPRINT_ 391
#define FROM_ 392
#define FRONT_ 393
#define FULL_ 394
#define FUNCTION_ 395
#define GALACTIC_ 396
#define GAUSSIAN_ 397
#define GET_ 398
#define GLOBAL_ 399
#define GRAPHICS_ 400
#define GRAY_ 401
#define GRID_ 402
#define GZ_ 403
#define HANDLE_ 404
#define HAS_ 405
#define HEAD_ 406
#define HEADER_ 407
#define HEIGHT_ 408
#define HIDE_ 409
#define HIGHLITE_ 410
#define HISTEQU_ 411
#define HISTOGRAM_ 412
#define HORIZONTAL_ 413
#define HSV_ 414
#define HLS_ 415
#define ICRS_ 416
#define ID_ 417
#define IIS_ 418
#define IMAGE_ 419
#define INCLUDE_ 420
#define INCR_ 421
#define INFO_ 422
#define ITERATION_ 423
#define IRAF_ 424
#define IRAFMIN_ 425
#define J2000_ 426
#define KEY_ 427
#define KEYWORD_ 428
#define LABEL_ 429
#define LAYER_ 430
#define LAYERNO_ 431
#define LAST_ 432
#define LENGTH_ 433
#define LEVEL_ 434
#define LIGHTEN_ 435
#define LITTLE_ 436
#define LITTLEENDIAN_ 437
#define LINE_ 438
#define LINEAR_ 439
#define LIST_ 440
#define LOAD_ 441
#define LOCAL_ 442
#define LOG_ 443
#define MACOSX_ 444
#define MAGNIFIER_ 445
#define MATCH_ 446
#define MAP_ 447
#define MARK_ 448
#define MARKER_ 449
#define MASK_ 450
#define MEDIAN_ 451
#define MESSAGE_ 452
#define METHOD_ 453
#define MINMAX_ 454
#define MINOR_ 455
#define MIP_ 456
#define MMAP_ 457
#define MMAPINCR_ 458
#define MOSAIC_ 459
#define MODE_ 460
#define MOTION_ 461
#define MULTICOLOR_ 462
#define MOVE_ 463
#define NAME_ 464
#define NAN_ 465
#define NATIVE_ 466
#define NAXES_ 467
#define NEW_ 468
#define NEXT_ 469
#define NO_ 470
#define NONE_ 471
#define NONNAN_ 472
#define NONZERO_ 473
#define NOW_ 474
#define NRRD_ 475
#define NUMBER_ 476
#define OBJECT_ 477
#define OFF_ 478
#define ON_ 479
#define ONLY_ 480
#define OPTION_ 481
#define ORIENT_ 482
#define PAN_ 483
#define PANNER_ 484
#define PARSER_ 485
#define PASTE_ 486
#define PERF_ 487
#define PHOTO_ 488
#define PHYSICAL_ 489
#define PIXEL_ 490
#define PLOT2D_ 491
#define PLOT3D_ 492
#define POINT_ 493
#define POINTER_ 494
#define POLYGON_ 495
#define POSTSCRIPT_ 496
#define POW_ 497
#define PRECISION_ 498
#define PRINT_ 499
#define PRESERVE_ 500
#define PROJECTION_ 501
#define PROPERTY_ 502
#define PUBLICATION_ 503
#define PROS_ 504
#define QUERY_ 505
#define RADIAL_ 506
#define RADIUS_ 507
#define RANGE_ 508
#define REGION_ 509
#define REPLACE_ 510
#define RESAMPLE_ 511
#define RESCAN_ 512
#define RESET_ 513
#define RESOLUTION_ 514
#define RGB_ 515
#define ROOT_ 516
#define ROTATE_ 517
#define RULER_ 518
#define SAMPLE_ 519
#define SAOIMAGE_ 520
#define SAOTNG_ 521
#define SAVE_ 522
#define SCALE_ 523
#define SCAN_ 524
#define SCIENTIFIC_ 525
#define SCOPE_ 526
#define SCREEN_ 527
#define SEGMENT_ 528
#define SELECT_ 529
#define SET_ 530
#define SEXAGESIMAL_ 531
#define SHAPE_ 532
#define SHARED_ 533
#define SHIFT_ 534
#define SHMID_ 535
#define SHOW_ 536
#define SIGMA_ 537
#define SINH_ 538
#define SIZE_ 539
#define SLICE_ 540
#define SMMAP_ 541
#define SMOOTH_ 542
#define SOCKET_ 543
#define SOCKETGZ_ 544
#define SOURCE_ 545
#define SQRT_ 546
#define SQUARED_ 547
#define SSHARED_ 548
#define STATS_ 549
#define STATUS_ 550
#define SUM_ 551
#define SYNC_ 552
#define SYSTEM_ 553
#define TABLE_ 554
#define TAG_ 555
#define TEMPLATE_ 556
#define TEXT_ 557
#define THREADS_ 558
#define THREED_ 559
#define THRESHOLD_ 560
#define THICK_ 561
#define TOP_ 562
#define TRANSPARENCY_ 563
#define TO_ 564
#define TOGGLE_ 565
#define TOPHAT_ 566
#define TRUE_ 567
#define TYPE_ 568
#define UNDO_ 569
#define UNHIGHLITE_ 570
#define UNLOAD_ 571
#define UNSELECT_ 572
#define UPDATE_ 573
#define UP_ 574
#define USER_ 575
#define VALUE_ 576
#define VAR_ 577
#define VIEW_ 578
#define VECTOR_ 579
#define VERSION_ 580
#define VERTEX_ 581
#define VERTICAL_ 582
#define WARP_ 583
#define WCS_ 584
#define WCSA_ 585
#define WCSB_ 586
#define WCSC_ 587
#define WCSD_ 588
#define WCSE_ 589
#define WCSF_ 590
#define WCSG_ 591
#define WCSH_ 592
#define WCSI_ 593
#define WCSJ_ 594
#define WCSK_ 595
#define WCSL_ 596
#define WCSM_ 597
#define WCSN_ 598
#define WCSO_ 599
#define WCSP_ 600
#define WCSQ_ 601
#define WCSR_ 602
#define WCSS_ 603
#define WCST_ 604
#define WCSU_ 605
#define WCSV_ 606
#define WCSW_ 607
#define WCSX_ 608
#define WCSY_ 609
#define WCSZ_ 610
#define WCS0_ 611
#define WFPC2_ 612
#define WIDTH_ 613
#define WIN32_ 614
#define XML_ 615
#define XY_ 616
#define YES_ 617
#define ZERO_ 618
#define ZMAX_ 619
#define ZSCALE_ 620
#define ZOOM_ 621




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
static Coord::SkyFrame currentSky = Coord::ICRS;

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
#line 889 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 902 "frame/parser.C"

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
#define YYFINAL  398
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5936

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  371
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  237
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1371
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3018

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   621

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
       2,   370,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   368,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   369,   367,
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
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    13,    17,    20,    22,    24,
      27,    31,    34,    37,    40,    43,    46,    49,    52,    55,
      58,    61,    64,    67,    69,    72,    76,    79,    82,    85,
      89,    92,    95,    98,   101,   105,   108,   111,   114,   118,
     121,   124,   127,   130,   133,   136,   138,   142,   145,   148,
     151,   153,   156,   159,   162,   164,   167,   169,   172,   175,
     178,   181,   183,   185,   187,   190,   193,   196,   199,   202,
     205,   208,   211,   214,   217,   219,   221,   223,   225,   227,
     229,   231,   233,   235,   236,   239,   242,   244,   246,   247,
     249,   251,   253,   255,   257,   259,   261,   264,   267,   270,
     273,   275,   277,   279,   281,   283,   285,   287,   289,   291,
     293,   295,   297,   299,   301,   303,   305,   307,   309,   311,
     313,   315,   317,   319,   321,   323,   325,   327,   329,   331,
     333,   335,   337,   339,   341,   343,   344,   346,   348,   350,
     352,   354,   355,   357,   359,   361,   363,   365,   367,   369,
     371,   373,   375,   377,   379,   381,   383,   385,   387,   389,
     390,   392,   394,   396,   398,   400,   402,   404,   405,   407,
     409,   410,   412,   414,   416,   417,   419,   421,   422,   424,
     426,   427,   429,   431,   432,   434,   436,   438,   440,   442,
     444,   446,   447,   449,   451,   453,   455,   457,   459,   461,
     462,   464,   466,   468,   469,   471,   473,   475,   477,   479,
     482,   485,   488,   491,   494,   497,   500,   503,   506,   508,
     511,   513,   516,   518,   521,   524,   531,   534,   539,   542,
     545,   548,   552,   555,   558,   560,   563,   565,   568,   573,
     579,   582,   586,   592,   599,   601,   603,   605,   613,   625,
     634,   647,   649,   652,   655,   657,   659,   662,   665,   668,
     671,   675,   679,   682,   685,   687,   689,   691,   693,   695,
     697,   699,   702,   705,   708,   710,   714,   717,   720,   723,
     729,   739,   749,   759,   767,   769,   772,   774,   780,   790,
     800,   810,   818,   820,   823,   826,   829,   832,   835,   838,
     852,   866,   879,   892,   894,   895,   897,   899,   904,   911,
     913,   915,   917,   919,   921,   923,   925,   927,   929,   934,
     938,   943,   944,   951,   960,   963,   967,   971,   975,   976,
     981,   986,   991,   996,  1000,  1004,  1006,  1010,  1016,  1021,
    1026,  1030,  1033,  1034,  1036,  1038,  1040,  1042,  1044,  1048,
    1049,  1052,  1055,  1058,  1061,  1064,  1067,  1070,  1073,  1076,
    1079,  1082,  1085,  1088,  1091,  1093,  1096,  1099,  1102,  1107,
    1111,  1114,  1117,  1120,  1123,  1126,  1128,  1132,  1135,  1138,
    1141,  1144,  1146,  1149,  1158,  1161,  1163,  1166,  1168,  1171,
    1173,  1178,  1182,  1185,  1187,  1195,  1204,  1212,  1221,  1223,
    1225,  1227,  1230,  1232,  1234,  1237,  1239,  1240,  1243,  1246,
    1248,  1249,  1252,  1255,  1257,  1259,  1262,  1265,  1268,  1270,
    1272,  1274,  1276,  1278,  1280,  1281,  1283,  1286,  1288,  1293,
    1299,  1300,  1303,  1305,  1311,  1314,  1317,  1319,  1321,  1323,
    1326,  1328,  1331,  1333,  1335,  1336,  1338,  1340,  1341,  1343,
    1349,  1356,  1360,  1367,  1371,  1373,  1377,  1379,  1381,  1383,
    1387,  1394,  1402,  1408,  1411,  1413,  1419,  1424,  1426,  1430,
    1431,  1433,  1436,  1438,  1443,  1445,  1448,  1450,  1453,  1457,
    1460,  1462,  1465,  1467,  1472,  1475,  1477,  1479,  1483,  1485,
    1488,  1492,  1495,  1496,  1498,  1500,  1505,  1508,  1509,  1511,
    1515,  1520,  1525,  1526,  1528,  1530,  1532,  1534,  1537,  1540,
    1543,  1546,  1548,  1550,  1552,  1554,  1556,  1558,  1560,  1561,
    1563,  1565,  1567,  1569,  1571,  1573,  1575,  1577,  1579,  1581,
    1583,  1585,  1587,  1589,  1592,  1594,  1597,  1599,  1602,  1605,
    1608,  1611,  1613,  1615,  1617,  1618,  1620,  1621,  1623,  1624,
    1626,  1627,  1629,  1630,  1633,  1636,  1637,  1639,  1642,  1644,
    1651,  1657,  1659,  1661,  1663,  1666,  1669,  1672,  1674,  1676,
    1678,  1680,  1683,  1685,  1687,  1689,  1692,  1694,  1696,  1698,
    1701,  1704,  1707,  1708,  1710,  1711,  1713,  1715,  1717,  1719,
    1721,  1723,  1725,  1727,  1730,  1733,  1736,  1738,  1741,  1745,
    1747,  1750,  1753,  1758,  1764,  1766,  1777,  1779,  1782,  1786,
    1790,  1793,  1796,  1799,  1802,  1805,  1808,  1811,  1816,  1821,
    1826,  1830,  1834,  1840,  1845,  1850,  1855,  1859,  1863,  1867,
    1871,  1875,  1879,  1882,  1885,  1890,  1894,  1898,  1902,  1906,
    1911,  1916,  1921,  1926,  1932,  1937,  1944,  1952,  1957,  1962,
    1968,  1971,  1975,  1979,  1983,  1987,  1991,  1995,  1999,  2002,
    2006,  2010,  2014,  2018,  2023,  2027,  2033,  2040,  2044,  2048,
    2053,  2057,  2061,  2065,  2069,  2073,  2079,  2083,  2087,  2092,
    2096,  2099,  2102,  2104,  2108,  2113,  2118,  2123,  2128,  2133,
    2140,  2145,  2150,  2156,  2161,  2166,  2171,  2176,  2182,  2187,
    2194,  2202,  2207,  2212,  2218,  2224,  2230,  2236,  2242,  2248,
    2256,  2262,  2268,  2275,  2280,  2285,  2290,  2295,  2300,  2307,
    2312,  2317,  2323,  2329,  2335,  2341,  2347,  2354,  2360,  2368,
    2377,  2383,  2389,  2396,  2400,  2404,  2408,  2412,  2417,  2421,
    2427,  2434,  2438,  2442,  2447,  2451,  2455,  2459,  2463,  2467,
    2473,  2477,  2481,  2486,  2491,  2496,  2500,  2506,  2511,  2516,
    2519,  2523,  2530,  2537,  2539,  2541,  2543,  2546,  2549,  2552,
    2556,  2560,  2563,  2576,  2579,  2582,  2584,  2588,  2593,  2596,
    2597,  2601,  2603,  2606,  2609,  2612,  2615,  2618,  2623,  2628,
    2633,  2637,  2642,  2648,  2657,  2664,  2674,  2681,  2689,  2700,
    2712,  2725,  2735,  2741,  2748,  2752,  2758,  2764,  2771,  2777,
    2782,  2792,  2803,  2815,  2825,  2832,  2839,  2846,  2853,  2860,
    2867,  2874,  2881,  2888,  2896,  2904,  2907,  2912,  2917,  2922,
    2927,  2933,  2938,  2943,  2949,  2955,  2959,  2964,  2969,  2974,
    2982,  2992,  2999,  3010,  3022,  3035,  3045,  3049,  3052,  3056,
    3062,  3070,  3075,  3079,  3083,  3090,  3098,  3106,  3111,  3116,
    3126,  3131,  3135,  3140,  3148,  3156,  3159,  3163,  3167,  3171,
    3176,  3179,  3182,  3187,  3198,  3202,  3204,  3208,  3211,  3214,
    3217,  3220,  3224,  3230,  3235,  3241,  3244,  3247,  3250,  3253,
    3257,  3260,  3263,  3266,  3270,  3273,  3277,  3282,  3286,  3290,
    3297,  3302,  3305,  3309,  3312,  3315,  3320,  3324,  3328,  3331,
    3335,  3337,  3340,  3342,  3345,  3348,  3351,  3353,  3355,  3357,
    3359,  3362,  3364,  3367,  3370,  3372,  3375,  3378,  3380,  3383,
    3385,  3387,  3389,  3391,  3393,  3395,  3397,  3399,  3400,  3402,
    3405,  3408,  3411,  3415,  3421,  3429,  3437,  3444,  3451,  3458,
    3465,  3471,  3478,  3485,  3492,  3499,  3506,  3513,  3520,  3532,
    3540,  3548,  3556,  3566,  3576,  3587,  3600,  3613,  3616,  3619,
    3623,  3628,  3633,  3638,  3639,  3641,  3643,  3648,  3653,  3655,
    3657,  3659,  3661,  3663,  3665,  3667,  3669,  3672,  3674,  3676,
    3678,  3682,  3686,  3695,  3702,  3713,  3721,  3729,  3735,  3738,
    3741,  3745,  3750,  3756,  3762,  3768,  3772,  3777,  3783,  3789,
    3795,  3801,  3804,  3808,  3812,  3818,  3822,  3826,  3830,  3835,
    3841,  3847,  3853,  3859,  3863,  3868,  3874,  3880,  3883,  3886,
    3890,  3896,  3903,  3910,  3914,  3918,  3925,  3931,  3937,  3940,
    3944,  3948,  3954,  3961,  3965,  3968,  3971,  3975,  3978,  3982,
    3985,  3989,  3995,  4002,  4005,  4008,  4011,  4013,  4018,  4023,
    4025,  4028,  4031,  4034,  4037,  4040,  4043,  4046,  4050,  4053,
    4057,  4060,  4064,  4066,  4068,  4070,  4072,  4074,  4075,  4078,
    4079,  4082,  4083,  4085,  4086,  4087,  4089,  4091,  4093,  4095,
    4097,  4105,  4114,  4117,  4124,  4127,  4134,  4137,  4141,  4144,
    4146,  4148,  4152,  4156,  4158,  4163,  4166,  4168,  4172,  4176,
    4181,  4185,  4189,  4193,  4195,  4197,  4199,  4201,  4203,  4205,
    4207,  4209,  4211,  4213,  4215,  4217,  4219,  4221,  4223,  4226,
    4227,  4228,  4231,  4238,  4246,  4249,  4251,  4255,  4257,  4261,
    4263,  4265,  4267,  4270,  4273,  4275,  4279,  4280,  4281,  4284,
    4287,  4289,  4293,  4299,  4300,  4302,  4304,  4307,  4310,  4314,
    4317,  4321,  4324,  4328,  4330,  4333,  4335,  4338,  4340,  4343,
    4345,  4348,  4350,  4353,  4355,  4358,  4360,  4363,  4365,  4368,
    4371,  4375,  4378,  4381,  4384,  4387,  4389,  4391,  4393,  4395,
    4400,  4403,  4407,  4411,  4414,  4418,  4421,  4424,  4427,  4431,
    4435,  4439,  4442,  4446,  4448,  4452,  4456,  4458,  4461,  4464,
    4467,  4470,  4480,  4487,  4489,  4491,  4493,  4495,  4498,  4501,
    4505,  4509,  4511,  4514,  4518,  4522,  4524,  4527,  4529,  4531,
    4533,  4535,  4537,  4540,  4543,  4548,  4551,  4554,  4557,  4562,
    4565,  4568,  4571,  4576,  4578,  4581,  4584,  4587,  4591,  4593,
    4595,  4597,  4600,  4603,  4606,  4609,  4612,  4616,  4620,  4624,
    4628,  4632,  4636,  4638,  4641,  4644,  4647,  4651,  4654,  4658,
    4662,  4666,  4670,  4674,  4678,  4681,  4684,  4687,  4690,  4693,
    4696,  4699,  4702,  4705,  4708,  4711,  4714,  4717,  4720,  4724,
    4728,  4732,  4735,  4738,  4741,  4745,  4749,  4753,  4756,  4759,
    4762,  4765,  4768,  4771,  4775,  4779,  4783,  4786,  4789,  4792,
    4795,  4798,  4801,  4805,  4809,  4813,  4816,  4819,  4822,  4825,
    4828,  4831,  4834,  4837,  4840,  4844,  4848,  4852,  4857,  4864,
    4867,  4869,  4871,  4873,  4875,  4877,  4878,  4884,  4886,  4893,
    4897,  4899,  4902,  4905,  4908,  4912,  4916,  4919,  4922,  4925,
    4928,  4931,  4934,  4938,  4941,  4944,  4948,  4950,  4954,  4959,
    4962,  4964,  4967,  4973,  4980,  4987,  4990,  4992,  4995,  4998,
    5004,  5011
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     372,     0,    -1,    98,   374,    -1,    43,   406,    -1,    40,
      67,     5,    -1,    40,    67,   375,    -1,    46,   411,    -1,
      60,    -1,    65,    -1,    66,   413,    -1,    68,   300,     5,
      -1,    69,   418,    -1,    70,   420,    -1,    78,   421,    -1,
      85,   430,    -1,    87,   432,    -1,    88,   433,    -1,    97,
     375,    -1,   121,   435,    -1,   130,   436,    -1,   143,   437,
      -1,   147,   486,    -1,   150,   489,    -1,   154,    -1,   155,
     375,    -1,   155,    67,     5,    -1,   159,   572,    -1,   160,
     571,    -1,   163,   495,    -1,   169,    15,     4,    -1,   186,
     498,    -1,   189,   516,    -1,   190,   517,    -1,   191,   518,
      -1,   194,   534,   519,    -1,   195,   555,    -1,   175,   554,
      -1,   207,   570,    -1,   210,    67,     5,    -1,   227,   556,
      -1,   228,   557,    -1,   229,   560,    -1,   250,    89,    -1,
     243,   562,    -1,   241,   561,    -1,   258,    -1,   254,   534,
     564,    -1,   260,   569,    -1,   262,   573,    -1,   267,   575,
      -1,   281,    -1,   287,   596,    -1,   303,     4,    -1,   304,
     401,    -1,   316,    -1,   318,   598,    -1,   325,    -1,   328,
     600,    -1,   329,   601,    -1,   359,   605,    -1,   366,   606,
      -1,     3,    -1,     4,    -1,   375,    -1,   204,   375,    -1,
     230,   375,    -1,   232,   375,    -1,   329,   375,    -1,    43,
     375,    -1,    46,   375,    -1,    77,   375,    -1,    85,   375,
      -1,   148,   375,    -1,   260,   375,    -1,     4,    -1,   362,
      -1,   367,    -1,   224,    -1,   312,    -1,   215,    -1,   368,
      -1,   223,    -1,   123,    -1,    -1,   261,    37,    -1,   139,
      37,    -1,   261,    -1,   139,    -1,    -1,   378,    -1,   373,
      -1,     6,    -1,     7,    -1,     8,    -1,     9,    -1,    10,
      -1,   379,   379,    -1,   380,   381,    -1,   381,   381,    -1,
     373,   373,    -1,   164,    -1,   234,    -1,   103,    -1,    18,
      -1,   384,    -1,   329,    -1,   330,    -1,   331,    -1,   332,
      -1,   333,    -1,   334,    -1,   335,    -1,   336,    -1,   337,
      -1,   338,    -1,   339,    -1,   340,    -1,   341,    -1,   342,
      -1,   343,    -1,   344,    -1,   345,    -1,   346,    -1,   347,
      -1,   348,    -1,   349,    -1,   350,    -1,   351,    -1,   352,
      -1,   353,    -1,   354,    -1,   355,    -1,   356,    -1,    57,
      -1,   229,    -1,    -1,   363,    -1,   218,    -1,   210,    -1,
     217,    -1,   253,    -1,    -1,   290,    -1,   272,    -1,    92,
      -1,   180,    -1,   184,    -1,   188,    -1,   242,    -1,   291,
      -1,   292,    -1,    27,    -1,   283,    -1,   156,    -1,    29,
      -1,   269,    -1,   264,    -1,    96,    -1,   170,    -1,    -1,
     132,    -1,    34,    -1,   133,    -1,   171,    -1,   161,    -1,
     141,    -1,   109,    -1,    -1,    99,    -1,   276,    -1,    -1,
      99,    -1,    23,    -1,    24,    -1,    -1,   280,    -1,   172,
      -1,    -1,    16,    -1,   166,    -1,    -1,   164,    -1,   195,
      -1,    -1,    63,    -1,    49,    -1,   104,    -1,    86,    -1,
     369,    -1,    26,    -1,    52,    -1,    -1,     4,    -1,    83,
      -1,   157,    -1,   236,    -1,   237,    -1,   251,    -1,   294,
      -1,    -1,    31,    -1,   296,    -1,   196,    -1,    -1,   211,
      -1,    41,    -1,    42,    -1,   181,    -1,   182,    -1,   323,
     405,    -1,    47,   402,    -1,    75,   403,    -1,   155,   404,
      -1,   198,   567,    -1,    36,   568,    -1,   268,   373,    -1,
     297,     4,    -1,   305,   373,    -1,   375,    -1,    67,     5,
      -1,   375,    -1,    67,     5,    -1,   375,    -1,    67,     5,
      -1,   373,   373,    -1,   238,   373,   373,   373,   373,   373,
      -1,    11,   407,    -1,    72,     5,     5,     5,    -1,   102,
       4,    -1,   122,   408,    -1,   140,   409,    -1,    54,   284,
       4,    -1,   309,   410,    -1,   126,     5,    -1,    60,    -1,
     373,   373,    -1,   373,    -1,   373,   373,    -1,   373,    11,
     373,   373,    -1,   373,   373,    11,   373,   373,    -1,   309,
     373,    -1,   309,   373,   373,    -1,   309,   373,    11,   373,
     373,    -1,   309,   373,   373,    11,   373,   373,    -1,    31,
      -1,   296,    -1,   128,    -1,   373,   373,    11,    60,     5,
       5,     5,    -1,   373,   373,     4,   373,   373,    11,    60,
       5,     5,     5,     5,    -1,   373,   373,    11,   373,   373,
       5,     5,     5,    -1,   373,   373,     4,   373,   373,    11,
     373,   373,     5,     5,     5,     5,    -1,   373,    -1,   373,
     373,    -1,   309,   412,    -1,   128,    -1,   373,    -1,   373,
     373,    -1,   271,   414,    -1,   205,   415,    -1,   199,   416,
      -1,   320,   373,   373,    -1,   320,   210,   210,    -1,   365,
     417,    -1,   245,   375,    -1,   144,    -1,   187,    -1,   373,
      -1,   199,    -1,   365,    -1,   364,    -1,   320,    -1,     4,
     389,    -1,   205,   389,    -1,   264,     4,    -1,   257,    -1,
     373,     4,     4,    -1,    79,   373,    -1,   264,     4,    -1,
     183,     4,    -1,     4,   373,   373,     4,     4,    -1,   260,
     373,   373,   373,   373,   373,   373,     4,     4,    -1,   159,
     373,   373,   373,   373,   373,   373,     4,     4,    -1,   160,
     373,   373,   373,   373,   373,   373,     4,     4,    -1,   207,
       4,     4,     5,     5,     5,     4,    -1,    39,    -1,   206,
     419,    -1,   114,    -1,     4,   373,   373,     4,     4,    -1,
     260,   373,   373,   373,   373,   373,   373,     4,     4,    -1,
     159,   373,   373,   373,   373,   373,   373,     4,     4,    -1,
     160,   373,   373,   373,   373,   373,   373,     4,     4,    -1,
     207,     4,     4,     5,     5,     5,     4,    -1,   388,    -1,
     188,   373,    -1,    84,   422,    -1,   101,   423,    -1,   186,
     424,    -1,   231,   428,    -1,   267,   429,    -1,     5,     4,
       4,   427,     4,     4,   388,   373,   425,   426,   373,   373,
       5,    -1,     5,     4,     4,   427,     4,     4,   388,   373,
     373,   426,   373,   373,     5,    -1,     5,     4,     4,   427,
       4,     4,   388,   373,   425,   373,   373,     5,    -1,     5,
       4,     4,   427,     4,     4,   388,   373,   373,   373,   373,
       5,    -1,   240,    -1,    -1,    30,    -1,     5,    -1,     5,
       5,     4,   375,    -1,     5,     4,   375,     5,   383,   390,
      -1,   199,    -1,   365,    -1,   364,    -1,   320,    -1,   144,
      -1,   187,    -1,   287,    -1,    46,    -1,     5,    -1,     5,
       5,     4,   375,    -1,     5,   383,   390,    -1,    30,     5,
     383,   390,    -1,    -1,   373,   373,   373,   373,   383,   390,
      -1,    60,   382,   383,   390,   373,   373,   383,   392,    -1,
     304,   431,    -1,    39,   373,   373,    -1,   206,   373,   373,
      -1,   114,   373,   373,    -1,    -1,   373,   373,   383,   390,
      -1,    39,   373,   373,     4,    -1,   206,   373,   373,     4,
      -1,   114,   373,   373,     4,    -1,   385,   373,   373,    -1,
     383,   390,   382,    -1,   375,    -1,   328,   373,   373,    -1,
      39,   206,   385,   373,   373,    -1,   206,   385,   373,   373,
      -1,    39,   206,   383,   382,    -1,   206,   383,   382,    -1,
      32,     4,    -1,    -1,    31,    -1,   296,    -1,   196,    -1,
     373,    -1,    65,    -1,   150,   120,     5,    -1,    -1,    40,
      67,    -1,    43,   440,    -1,    46,   442,    -1,    66,   443,
      -1,    69,   447,    -1,    68,   446,    -1,    70,   449,    -1,
      78,   451,    -1,    80,   454,    -1,    85,   455,    -1,    87,
     456,    -1,    89,   458,    -1,    88,   457,    -1,    95,   459,
      -1,    97,    -1,   129,   463,    -1,   147,   469,    -1,   155,
      67,    -1,   157,     5,     5,     4,    -1,   158,    90,   438,
      -1,   159,   477,    -1,   160,   476,    -1,   163,   461,    -1,
     167,   460,    -1,   169,    15,    -1,   199,    -1,   194,   534,
     528,    -1,   195,   471,    -1,   175,   470,    -1,   207,   475,
      -1,   210,    67,    -1,   227,    -1,   228,   473,    -1,   235,
     299,   385,   373,   373,     4,     4,     5,    -1,   260,   474,
      -1,   262,    -1,   287,   478,    -1,   303,    -1,   304,   479,
      -1,   313,    -1,   321,   385,   373,   373,    -1,   327,    90,
     439,    -1,   329,   484,    -1,   366,    -1,     5,     5,   373,
     373,   385,     4,   434,    -1,     5,     5,   373,   373,   383,
     390,     4,   434,    -1,     5,     5,   373,   373,   385,     4,
     434,    -1,     5,     5,   373,   373,   383,   390,     4,   434,
      -1,   102,    -1,   122,    -1,   140,    -1,    54,   284,    -1,
      89,    -1,   126,    -1,    72,   441,    -1,   185,    -1,    -1,
     199,     5,    -1,   105,     5,    -1,   122,    -1,    -1,   425,
     426,    -1,   373,   426,    -1,   271,    -1,   205,    -1,   199,
     444,    -1,   320,   179,    -1,   365,   445,    -1,   245,    -1,
     205,    -1,   264,    -1,    79,    -1,   264,    -1,   183,    -1,
      -1,   300,    -1,   179,   448,    -1,     4,    -1,     4,   385,
     373,   373,    -1,     4,   373,   373,   388,   373,    -1,    -1,
     179,   450,    -1,   188,    -1,     4,   373,   373,   388,   373,
      -1,   383,   390,    -1,    66,   452,    -1,    67,    -1,    93,
      -1,   179,    -1,   221,   179,    -1,   198,    -1,    70,   453,
      -1,   287,    -1,   358,    -1,    -1,   205,    -1,   271,    -1,
      -1,   188,    -1,   373,   373,   383,   390,   391,    -1,   385,
     373,   373,   383,   390,   391,    -1,   383,   390,   391,    -1,
      60,   383,   390,   391,   383,   392,    -1,   304,   383,   390,
      -1,   385,    -1,   383,   390,   391,    -1,   295,    -1,    32,
      -1,   385,    -1,   383,   390,   391,    -1,   383,   390,   382,
     373,   373,     5,    -1,     4,   383,   390,   382,   373,   373,
       5,    -1,   385,   373,   373,     4,     4,    -1,     5,   376,
      -1,    66,    -1,   385,   373,   373,     5,   376,    -1,     4,
       4,     4,     4,    -1,    89,    -1,   124,   209,   462,    -1,
      -1,     4,    -1,   373,   373,    -1,   212,    -1,    60,   383,
     390,   391,    -1,    82,    -1,   102,   466,    -1,    44,    -1,
     120,   464,    -1,   124,   209,   467,    -1,   152,   465,    -1,
     153,    -1,   222,   209,    -1,   284,    -1,   284,   383,   390,
     392,    -1,   285,   468,    -1,   358,    -1,     4,    -1,   385,
     373,   373,    -1,     4,    -1,   173,     5,    -1,     4,   173,
       5,    -1,   329,     4,    -1,    -1,     4,    -1,   376,    -1,
     376,   385,   373,   373,    -1,   376,     4,    -1,    -1,     4,
      -1,   137,   164,   383,    -1,   137,   164,     4,   383,    -1,
     309,   164,   373,   383,    -1,    -1,   226,    -1,   322,    -1,
      82,    -1,   176,    -1,    67,   472,    -1,    45,   472,    -1,
     308,   472,    -1,   323,   472,    -1,    67,    -1,   193,    -1,
     253,    -1,   298,    -1,   308,    -1,    82,    -1,    45,    -1,
      -1,     4,    -1,   245,    -1,    62,    -1,   298,    -1,   323,
      -1,   298,    -1,    62,    -1,   298,    -1,   323,    -1,    62,
      -1,   298,    -1,   323,    -1,   140,    -1,   252,    -1,   252,
     200,    -1,   282,    -1,   282,   200,    -1,    20,    -1,   323,
     483,    -1,    47,   480,    -1,    75,   481,    -1,   155,   482,
      -1,   198,    -1,    36,    -1,   268,    -1,    -1,    67,    -1,
      -1,    67,    -1,    -1,    67,    -1,    -1,   238,    -1,    -1,
      15,   485,    -1,   209,   384,    -1,    -1,   239,    -1,    84,
     487,    -1,   101,    -1,   383,   390,   391,   488,     5,     5,
      -1,   383,   390,   391,   488,     5,    -1,    19,    -1,   248,
      -1,    18,    -1,    40,    67,    -1,    43,   490,    -1,    78,
     491,    -1,    85,    -1,    96,    -1,    97,    -1,   103,    -1,
     129,   492,    -1,   147,    -1,   163,    -1,   170,    -1,   194,
     493,    -1,   234,    -1,   164,    -1,   287,    -1,   298,   383,
      -1,   329,   494,    -1,    73,     5,    -1,    -1,    30,    -1,
      -1,    43,    -1,    88,    -1,   204,    -1,   155,    -1,   274,
      -1,   231,    -1,   314,    -1,   383,    -1,    59,   383,    -1,
     118,   383,    -1,   184,   383,    -1,    17,    -1,   304,   383,
      -1,   213,     4,     4,    -1,   119,    -1,   197,     5,    -1,
      89,   497,    -1,   275,   124,   209,   496,    -1,   275,     4,
       4,     4,     4,    -1,   318,    -1,   329,   373,   373,   373,
     373,   373,   373,   373,   373,     4,    -1,     5,    -1,     5,
       4,    -1,     4,     4,    57,    -1,     4,     4,   383,    -1,
     205,   375,    -1,    25,   499,    -1,   115,   501,    -1,   129,
     502,    -1,   166,   515,    -1,   220,   513,    -1,   233,   514,
      -1,     5,    13,     5,   395,    -1,     5,    14,     5,   395,
      -1,     5,    62,     5,   395,    -1,     5,   202,   395,    -1,
       5,   203,   395,    -1,     5,   278,   393,     4,   395,    -1,
       5,   288,     4,   395,    -1,     5,   289,     4,   395,    -1,
       5,   322,     5,   395,    -1,   260,    88,   500,    -1,   160,
      88,   500,    -1,   159,    88,   500,    -1,     5,    13,     5,
      -1,     5,    14,     5,    -1,     5,    62,     5,    -1,     5,
     202,    -1,     5,   203,    -1,     5,   278,   393,     4,    -1,
       5,   288,     4,    -1,     5,   289,     4,    -1,     5,   322,
       5,    -1,     5,     5,   286,    -1,     5,    13,     5,   395,
      -1,     5,    14,     5,   395,    -1,     5,    62,     5,   395,
      -1,     5,   202,   394,   395,    -1,     5,     5,   286,   394,
     395,    -1,     5,   203,   394,   395,    -1,     5,   278,   393,
       4,   394,   395,    -1,     5,   293,   393,     4,     4,   394,
     395,    -1,     5,   288,     4,   395,    -1,     5,   289,     4,
     395,    -1,     5,   322,     5,   394,   395,    -1,   285,   503,
      -1,   120,    88,   504,    -1,   260,   164,   512,    -1,   260,
      88,   511,    -1,   160,   164,   512,    -1,   160,    88,   511,
      -1,   159,   164,   512,    -1,   159,    88,   511,    -1,   204,
     505,    -1,     5,    13,     5,    -1,     5,    14,     5,    -1,
       5,    62,     5,    -1,     5,   202,   394,    -1,     5,     5,
     286,   394,    -1,     5,   203,   394,    -1,     5,   278,   393,
       4,   394,    -1,     5,   293,   393,     4,     4,   394,    -1,
       5,   288,     4,    -1,     5,   289,     4,    -1,     5,   322,
       5,   394,    -1,     5,    13,     5,    -1,     5,    14,     5,
      -1,     5,    62,     5,    -1,     5,   202,   394,    -1,     5,
     203,   394,    -1,     5,   278,   393,     4,   394,    -1,     5,
     288,     4,    -1,     5,   289,     4,    -1,     5,   322,     5,
     394,    -1,   164,   169,   506,    -1,   169,   507,    -1,   164,
     508,    -1,   510,    -1,   164,   357,   509,    -1,     5,    13,
       5,   395,    -1,     5,    14,     5,   395,    -1,     5,    62,
       5,   395,    -1,     5,   202,   394,   395,    -1,     5,   203,
     394,   395,    -1,     5,   278,   393,     4,   394,   395,    -1,
       5,   288,     4,   395,    -1,     5,   289,     4,   395,    -1,
       5,   322,     5,   394,   395,    -1,     5,    13,     5,   395,
      -1,     5,    14,     5,   395,    -1,     5,    62,     5,   395,
      -1,     5,   202,   394,   395,    -1,     5,     5,   286,   394,
     395,    -1,     5,   203,   394,   395,    -1,     5,   278,   393,
       4,   394,   395,    -1,     5,   293,   393,     4,     4,   394,
     395,    -1,     5,   288,     4,   395,    -1,     5,   289,     4,
     395,    -1,     5,   322,     5,   394,   395,    -1,   384,     5,
      13,     5,   395,    -1,   384,     5,    14,     5,   395,    -1,
     384,     5,    62,     5,   395,    -1,   384,     5,   202,   394,
     395,    -1,   384,     5,   203,   394,   395,    -1,   384,     5,
     278,   393,     4,   394,   395,    -1,   384,     5,   288,     4,
     395,    -1,   384,     5,   289,     4,   395,    -1,   384,     5,
     322,     5,   394,   395,    -1,     5,    13,     5,   395,    -1,
       5,    14,     5,   395,    -1,     5,    62,     5,   395,    -1,
       5,   202,   394,   395,    -1,     5,   203,   394,   395,    -1,
       5,   278,   393,     4,   394,   395,    -1,     5,   288,     4,
     395,    -1,     5,   289,     4,   395,    -1,     5,   322,     5,
     394,   395,    -1,   384,     5,    13,     5,   395,    -1,   384,
       5,    14,     5,   395,    -1,   384,     5,    62,     5,   395,
      -1,   384,     5,   202,   394,   395,    -1,   384,     5,     5,
     286,   394,   395,    -1,   384,     5,   203,   394,   395,    -1,
     384,     5,   278,   393,     4,   394,   395,    -1,   384,     5,
     293,   393,     4,     4,   394,   395,    -1,   384,     5,   288,
       4,   395,    -1,   384,     5,   289,     4,   395,    -1,   384,
       5,   322,     5,   394,   395,    -1,     5,    13,     5,    -1,
       5,    14,     5,    -1,     5,    62,     5,    -1,     5,   202,
     394,    -1,     5,     5,   286,   394,    -1,     5,   203,   394,
      -1,     5,   278,   393,     4,   394,    -1,     5,   293,   393,
       4,     4,   394,    -1,     5,   288,     4,    -1,     5,   289,
       4,    -1,     5,   322,     5,   394,    -1,     5,    13,     5,
      -1,     5,    14,     5,    -1,     5,    62,     5,    -1,     5,
     202,   394,    -1,     5,   203,   394,    -1,     5,   278,   393,
       4,   394,    -1,     5,   288,     4,    -1,     5,   289,     4,
      -1,     5,   322,     5,   394,    -1,     5,    13,     5,   395,
      -1,     5,    62,     5,   395,    -1,     5,   202,   395,    -1,
       5,   278,   393,     4,   395,    -1,     5,   288,     4,   395,
      -1,     5,   322,     5,   395,    -1,     5,     5,    -1,   285,
       5,     5,    -1,    95,     4,     4,     4,     4,     4,    -1,
     199,     4,     4,     4,     4,     4,    -1,   114,    -1,   244,
      -1,   375,    -1,   145,   375,    -1,    89,   375,    -1,    67,
       5,    -1,     5,     4,     4,    -1,   318,   373,   373,    -1,
     366,   373,    -1,     5,     5,   384,   390,     5,     5,   384,
     390,   373,   384,   392,     5,    -1,    61,   522,    -1,    67,
       5,    -1,    81,    -1,    74,   527,     5,    -1,    74,   527,
     322,     5,    -1,    76,   101,    -1,    -1,    84,   520,   523,
      -1,    90,    -1,   101,   525,    -1,   108,   526,    -1,   117,
       4,    -1,   134,     5,    -1,   155,    16,    -1,   155,   225,
     373,   373,    -1,   155,   310,   373,   373,    -1,     4,    19,
     398,   375,    -1,     4,    20,   378,    -1,     4,    20,   378,
     385,    -1,     4,    20,   378,   383,   390,    -1,     4,    21,
     252,   373,   373,     4,   383,   392,    -1,     4,    21,   252,
       5,   383,   392,    -1,     4,    50,   252,   373,   373,   373,
       4,   383,   392,    -1,     4,    50,   252,     5,   383,   392,
      -1,     4,    49,   252,   373,   373,   383,   392,    -1,     4,
      53,   108,   378,   378,     4,   373,   373,   373,     4,    -1,
       4,    53,   108,   378,   378,     4,   373,   373,   373,     4,
     385,    -1,     4,    53,   108,   378,   378,     4,   373,   373,
     373,     4,   383,   390,    -1,     4,    53,   108,     5,     5,
     383,   390,   383,   392,    -1,     4,    56,   521,     5,     5,
      -1,     4,    63,   252,   373,   383,   392,    -1,     4,    67,
       5,    -1,     4,    75,    26,   375,   375,    -1,     4,    75,
     174,     5,     5,    -1,     4,    75,   252,   373,   383,   392,
      -1,     4,    75,   298,   383,   390,    -1,     4,    76,   144,
     375,    -1,     4,    83,   108,   378,   378,     4,   373,   373,
       4,    -1,     4,    83,   108,   378,   378,     4,   373,   373,
       4,   385,    -1,     4,    83,   108,   378,   378,     4,   373,
     373,     4,   383,   390,    -1,     4,    83,   108,     5,     5,
     383,   390,   383,   392,    -1,     4,    84,    21,   252,   373,
     373,    -1,     4,    84,    50,   252,   373,   373,    -1,     4,
      84,    53,    20,   373,   373,    -1,     4,    84,    53,   252,
     373,   373,    -1,     4,    84,   113,   252,   373,   373,    -1,
       4,    84,   116,    20,   373,   373,    -1,     4,    84,   116,
     252,   373,   373,    -1,     4,    84,    83,    20,   373,   373,
      -1,     4,    84,    83,   252,   373,   373,    -1,     4,    84,
     240,   326,     4,   373,   373,    -1,     4,    84,   273,   326,
       4,   373,   373,    -1,     4,   101,    -1,     4,   101,    21,
       4,    -1,     4,   101,    50,     4,    -1,     4,   101,    53,
       4,    -1,     4,   101,   113,     4,    -1,     4,   101,    56,
     521,     5,    -1,     4,   101,   116,     4,    -1,     4,   101,
      83,     4,    -1,     4,   101,   240,   326,     4,    -1,     4,
     101,   273,   326,     4,    -1,     4,   101,   300,    -1,     4,
     101,   300,     5,    -1,     4,   101,   300,     4,    -1,     4,
     108,    39,     4,    -1,     4,   112,   252,   373,   373,   383,
     392,    -1,     4,   113,   252,   373,   373,   373,     4,   383,
     392,    -1,     4,   113,   252,     5,   383,   392,    -1,     4,
     116,   108,   378,   378,     4,   373,   373,   373,     4,    -1,
       4,   116,   108,   378,   378,     4,   373,   373,   373,     4,
     385,    -1,     4,   116,   108,   378,   378,     4,   373,   373,
     373,     4,   383,   390,    -1,     4,   116,   108,     5,     5,
     383,   390,   383,   392,    -1,     4,   134,     5,    -1,     4,
     155,    -1,     4,   155,   225,    -1,     4,   183,    26,   375,
     375,    -1,     4,   183,   238,   383,   390,   382,   382,    -1,
       4,   208,   373,   373,    -1,     4,   208,   138,    -1,     4,
     208,    35,    -1,     4,   208,   309,   383,   390,   382,    -1,
       4,   240,   258,   373,   373,   383,   392,    -1,     4,   273,
     258,   373,   373,   383,   392,    -1,     4,   238,   277,   396,
      -1,     4,   238,   284,     4,    -1,     4,   246,   383,   390,
     382,   382,   373,   383,   392,    -1,     4,   247,   540,   375,
      -1,     4,   262,    39,    -1,     4,   263,   135,     5,    -1,
       4,   263,   238,   383,   390,   382,   382,    -1,     4,   263,
     298,   383,   390,   383,   392,    -1,     4,   274,    -1,     4,
     274,   225,    -1,     4,   300,     5,    -1,     4,   302,     5,
      -1,     4,   302,   262,   375,    -1,     4,   315,    -1,     4,
     317,    -1,     4,   324,    26,   375,    -1,     4,   324,   238,
     383,   390,   382,   383,   392,   373,   378,    -1,     4,   358,
       4,    -1,   172,    -1,   172,   373,   373,    -1,   185,   535,
      -1,   186,   536,    -1,   208,   537,    -1,   245,   375,    -1,
     247,   540,   375,    -1,   247,   540,   375,   373,   373,    -1,
     262,    39,   373,   373,    -1,   262,   206,   373,   373,     4,
      -1,   262,   114,    -1,   267,   544,    -1,   274,   545,    -1,
     281,   546,    -1,     5,    67,     5,    -1,     5,    81,    -1,
       5,   101,    -1,     5,    90,    -1,     5,   134,     5,    -1,
       5,   155,    -1,     5,   155,   225,    -1,     5,   208,   373,
     373,    -1,     5,   208,   138,    -1,     5,   208,    35,    -1,
       5,   208,   309,   383,   390,   382,    -1,     5,   247,   540,
     375,    -1,     5,   274,    -1,     5,   274,   225,    -1,     5,
     315,    -1,     5,   317,    -1,   300,   108,     5,     5,    -1,
     300,   101,     5,    -1,   300,   101,    16,    -1,   300,     5,
      -1,   300,   318,     5,    -1,   231,    -1,   231,   383,    -1,
     314,    -1,   315,    16,    -1,   317,    16,    -1,   358,     4,
      -1,   274,    -1,   317,    -1,   155,    -1,   315,    -1,    39,
     208,    -1,   208,    -1,   114,   208,    -1,    39,   108,    -1,
     108,    -1,   114,   108,    -1,    39,   262,    -1,   262,    -1,
     114,   262,    -1,   101,    -1,   302,    -1,    67,    -1,   358,
      -1,   247,    -1,   134,    -1,   172,    -1,   318,    -1,    -1,
       4,    -1,    29,   375,    -1,   252,   373,    -1,   168,     4,
      -1,   226,     4,   373,    -1,    63,   373,   373,   373,   541,
      -1,   112,   373,   373,   373,   373,   377,   541,    -1,    49,
     373,   373,   373,   373,   377,   541,    -1,   240,   373,   373,
     373,   373,   541,    -1,   273,   373,   373,   373,   373,   541,
      -1,   183,   373,   373,   373,   373,   541,    -1,   324,   373,
     373,   373,   373,   541,    -1,   302,   373,   373,   377,   541,
      -1,    63,   238,   373,   373,   397,   541,    -1,    49,   238,
     373,   373,   397,   541,    -1,   104,   238,   373,   373,   397,
     541,    -1,    86,   238,   373,   373,   397,   541,    -1,   369,
     238,   373,   373,   397,   541,    -1,    26,   238,   373,   373,
     397,   541,    -1,    52,   238,   373,   373,   397,   541,    -1,
     263,   373,   373,   373,   373,   383,   390,   383,   392,     5,
     541,    -1,    75,   373,   373,   373,   383,   390,   541,    -1,
     246,   373,   373,   373,   373,   373,   541,    -1,    21,   373,
     373,   373,   373,     4,   541,    -1,   113,   373,   373,   373,
     373,   373,     4,   377,   541,    -1,    50,   373,   373,   373,
     373,   373,     4,   377,   541,    -1,    83,   373,   373,   378,
     378,     4,   373,   373,     4,   541,    -1,   116,   373,   373,
     378,   378,     4,   373,   373,   373,     4,   377,   541,    -1,
      53,   373,   373,   378,   378,     4,   373,   373,   373,     4,
     377,   541,    -1,    76,   541,    -1,   301,   524,    -1,     5,
     373,   373,    -1,   322,     5,   373,   373,    -1,   373,   373,
     322,     5,    -1,     5,   383,   390,   382,    -1,    -1,   274,
      -1,    16,    -1,    39,   373,   373,     4,    -1,   206,   373,
     373,     4,    -1,   114,    -1,   107,    -1,   360,    -1,    64,
      -1,   266,    -1,   265,    -1,   249,    -1,   361,    -1,    61,
     529,    -1,    67,    -1,   134,    -1,   117,    -1,   149,   373,
     373,    -1,   162,   373,   373,    -1,     4,    19,    83,     5,
       5,     5,   383,     4,    -1,     4,    19,   157,     5,     5,
       4,    -1,     4,    19,   236,     5,     5,     5,     5,   383,
     390,   399,    -1,     4,    19,   237,     5,     5,   383,   399,
      -1,     4,    19,   251,     5,     5,     5,   383,    -1,     4,
      19,   294,   383,   390,    -1,   162,    16,    -1,     4,    20,
      -1,     4,    20,   385,    -1,     4,    20,   383,   390,    -1,
       4,    21,   252,   383,   392,    -1,     4,    50,   252,   383,
     392,    -1,     4,    49,   252,   383,   392,    -1,     4,    53,
      20,    -1,     4,    53,    20,   385,    -1,     4,    53,    20,
     383,   390,    -1,     4,    53,   252,   383,   392,    -1,     4,
      60,   383,   390,   391,    -1,     4,    63,   252,   383,   392,
      -1,     4,    67,    -1,     4,    75,    26,    -1,     4,    75,
     174,    -1,     4,    75,   252,   383,   392,    -1,     4,    75,
     298,    -1,     4,    76,   144,    -1,     4,    83,    20,    -1,
       4,    83,    20,   385,    -1,     4,    83,    20,   383,   390,
      -1,     4,    83,   252,   383,   392,    -1,     4,   112,   252,
     383,   392,    -1,     4,   113,   252,   383,   392,    -1,     4,
     116,    20,    -1,     4,   116,    20,   385,    -1,     4,   116,
      20,   383,   390,    -1,     4,   116,   252,   383,   392,    -1,
       4,   134,    -1,     4,   155,    -1,     4,   183,    26,    -1,
       4,   183,   178,   383,   392,    -1,     4,   183,   238,   383,
     390,   391,    -1,     4,   192,   178,   373,   383,   392,    -1,
       4,   238,   277,    -1,     4,   238,   284,    -1,     4,   246,
     238,   383,   390,   391,    -1,     4,   246,   178,   383,   392,
      -1,     4,   246,   306,   383,   392,    -1,     4,   247,    -1,
       4,   247,   540,    -1,     4,   263,   135,    -1,     4,   263,
     178,   383,   392,    -1,     4,   263,   238,   383,   390,   391,
      -1,     4,   263,   298,    -1,     4,   274,    -1,     4,   300,
      -1,     4,   300,     4,    -1,     4,   302,    -1,     4,   302,
     262,    -1,     4,   313,    -1,     4,   324,    26,    -1,     4,
     324,   178,   383,   392,    -1,     4,   324,   238,   383,   390,
     391,    -1,     4,   358,    -1,   155,   530,    -1,   155,   221,
      -1,   221,    -1,   240,   273,   373,   373,    -1,   273,   273,
     373,   373,    -1,   245,    -1,   247,   540,    -1,   274,   531,
      -1,   274,   221,    -1,   281,   532,    -1,     5,    67,    -1,
       5,   134,    -1,     5,   162,    -1,     5,   247,   540,    -1,
       5,   300,    -1,     5,   300,   221,    -1,   300,    16,    -1,
     300,   100,   209,    -1,   358,    -1,    29,    -1,   252,    -1,
     168,    -1,   226,    -1,    -1,   373,   373,    -1,    -1,   373,
     373,    -1,    -1,   302,    -1,    -1,    -1,   239,    -1,   254,
      -1,   320,    -1,    58,    -1,   136,    -1,   527,   383,   390,
     391,   375,   542,   549,    -1,   274,   527,   383,   390,   391,
     375,   542,   549,    -1,   527,     5,    -1,   527,     5,     4,
       5,   383,   390,    -1,   527,     4,    -1,   527,     4,     4,
       5,   383,   390,    -1,   129,     5,    -1,   129,     5,     5,
      -1,   373,   373,    -1,   138,    -1,    35,    -1,    39,   373,
     373,    -1,   206,   373,   373,    -1,   114,    -1,   309,   383,
     390,   382,    -1,   538,   539,    -1,   539,    -1,   540,   370,
     375,    -1,    67,   370,     5,    -1,    94,   370,     4,     4,
      -1,   358,   370,     4,    -1,   134,   370,     5,    -1,   302,
     370,     5,    -1,   552,    -1,   553,    -1,   216,    -1,   274,
      -1,   155,    -1,    93,    -1,   131,    -1,   108,    -1,   208,
      -1,   262,    -1,   101,    -1,   165,    -1,   290,    -1,   125,
      -1,   533,    -1,   533,   538,    -1,    -1,    -1,   543,   547,
      -1,     5,   527,   383,   390,   391,   375,    -1,   274,     5,
     527,   383,   390,   391,   375,    -1,   301,     5,    -1,    16,
      -1,   225,   373,   373,    -1,   310,    -1,   310,   373,   373,
      -1,   127,    -1,   177,    -1,   375,    -1,   302,   375,    -1,
     547,   548,    -1,   548,    -1,   540,   370,   375,    -1,    -1,
      -1,   550,   551,    -1,   551,   552,    -1,   552,    -1,   300,
     370,     5,    -1,    56,   370,   521,     5,     5,    -1,    -1,
      84,    -1,     4,    -1,   176,     4,    -1,    67,     5,    -1,
       4,    67,     5,    -1,    45,   387,    -1,     4,    45,   387,
      -1,   308,   373,    -1,     4,   308,   373,    -1,   281,    -1,
       4,   281,    -1,   154,    -1,     4,   154,    -1,   101,    -1,
       4,   101,    -1,   319,    -1,     4,   319,    -1,   106,    -1,
       4,   106,    -1,   307,    -1,     4,   307,    -1,    48,    -1,
       4,    48,    -1,    65,    -1,    67,     5,    -1,   193,   386,
      -1,   253,   373,   373,    -1,   298,   383,    -1,   308,   373,
      -1,    45,   387,    -1,   193,     4,    -1,   369,    -1,   367,
      -1,   361,    -1,   216,    -1,   373,   373,   373,   373,    -1,
     373,   373,    -1,   385,   373,   373,    -1,   383,   390,   382,
      -1,   309,   558,    -1,    38,   373,   373,    -1,   206,   559,
      -1,   245,   375,    -1,   373,   373,    -1,   385,   373,   373,
      -1,   383,   390,   382,    -1,    39,   373,   373,    -1,   373,
     373,    -1,   114,   373,   373,    -1,   375,    -1,   329,   384,
     390,    -1,     5,     4,     4,    -1,   318,    -1,    71,   563,
      -1,   179,     4,    -1,   259,     4,    -1,   268,   373,    -1,
       4,     4,     4,     4,     4,     4,     4,     4,     4,    -1,
       4,     4,     4,     4,     4,     4,    -1,    55,    -1,   146,
      -1,   260,    -1,    91,    -1,   155,   565,    -1,   274,   566,
      -1,    39,   373,   373,    -1,   206,   373,   373,    -1,   114,
      -1,   279,   114,    -1,    39,   373,   373,    -1,   206,   373,
     373,    -1,   114,    -1,   279,   114,    -1,   201,    -1,    12,
      -1,   216,    -1,    33,    -1,   110,    -1,    62,     5,    -1,
     298,   383,    -1,   323,     4,     4,     4,    -1,   298,   383,
      -1,    62,     5,    -1,   298,   383,    -1,   323,     4,     4,
       4,    -1,    62,     5,    -1,    62,   321,    -1,   298,   383,
      -1,   323,     4,     4,     4,    -1,   373,    -1,   373,    99,
      -1,   206,   574,    -1,   309,   373,    -1,   309,   373,    99,
      -1,    39,    -1,   373,    -1,   114,    -1,    25,   576,    -1,
     129,   577,    -1,   220,   594,    -1,   115,   595,    -1,   233,
       5,    -1,   124,     5,   400,    -1,    62,     5,   400,    -1,
     288,     4,   400,    -1,   260,    88,   584,    -1,   160,    88,
     587,    -1,   159,    88,   590,    -1,   578,    -1,   164,   578,
      -1,   299,   579,    -1,   285,   580,    -1,   120,    88,   581,
      -1,   204,   582,    -1,   260,   164,   585,    -1,   260,    88,
     586,    -1,   160,   164,   588,    -1,   160,    88,   589,    -1,
     159,   164,   591,    -1,   159,    88,   592,    -1,   256,   593,
      -1,   124,     5,    -1,    62,     5,    -1,   288,     4,    -1,
     124,     5,    -1,    62,     5,    -1,   288,     4,    -1,   124,
       5,    -1,    62,     5,    -1,   288,     4,    -1,   124,     5,
      -1,    62,     5,    -1,   288,     4,    -1,   164,   583,    -1,
     124,     5,     4,    -1,    62,     5,     4,    -1,   288,     4,
       4,    -1,   124,     5,    -1,    62,     5,    -1,   288,     4,
      -1,   124,     5,   400,    -1,    62,     5,   400,    -1,   288,
       4,   400,    -1,   124,     5,    -1,    62,     5,    -1,   288,
       4,    -1,   124,     5,    -1,    62,     5,    -1,   288,     4,
      -1,   124,     5,   400,    -1,    62,     5,   400,    -1,   288,
       4,   400,    -1,   124,     5,    -1,    62,     5,    -1,   288,
       4,    -1,   124,     5,    -1,    62,     5,    -1,   288,     4,
      -1,   124,     5,   400,    -1,    62,     5,   400,    -1,   288,
       4,   400,    -1,   124,     5,    -1,    62,     5,    -1,   288,
       4,    -1,   124,     5,    -1,    62,     5,    -1,   288,     4,
      -1,   124,     5,    -1,    62,     5,    -1,   288,     4,    -1,
     124,     5,   400,    -1,    62,     5,   400,    -1,   288,     4,
     400,    -1,   124,     5,     5,   400,    -1,   597,     4,     4,
     373,   373,   378,    -1,   597,     4,    -1,   101,    -1,    51,
      -1,   311,    -1,   142,    -1,   111,    -1,    -1,     4,   373,
     373,   373,   373,    -1,   219,    -1,   219,     4,   373,   373,
     373,   373,    -1,   129,   285,   599,    -1,     4,    -1,     4,
       4,    -1,   373,   383,    -1,   373,   373,    -1,   309,   373,
     373,    -1,   384,   390,   391,    -1,    15,   604,    -1,   258,
       4,    -1,   255,   603,    -1,    22,   602,    -1,     4,     4,
      -1,     4,     5,    -1,   302,     4,     5,    -1,     4,     4,
      -1,     4,     5,    -1,   302,     4,     5,    -1,     4,    -1,
       4,   384,   390,    -1,   309,     4,   384,   390,    -1,   239,
      65,    -1,   244,    -1,   373,   373,    -1,   373,   373,    11,
     373,   373,    -1,   373,   373,    11,   385,   373,   373,    -1,
     373,   373,    11,   383,   390,   382,    -1,   309,   607,    -1,
     128,    -1,   128,   373,    -1,   373,   373,    -1,   373,   373,
      11,   373,   373,    -1,   373,   373,    11,   385,   373,   373,
      -1,   373,   373,    11,   383,   390,   382,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   476,   476,   477,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,   537,   538,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   554,   556,   557,   558,   559,   561,
     562,   563,   564,   567,   568,   569,   570,   571,   574,   575,
     578,   579,   580,   583,   586,   589,   592,   604,   611,   618,
     626,   627,   628,   629,   630,   633,   634,   635,   636,   637,
     638,   639,   640,   641,   642,   643,   644,   645,   646,   647,
     648,   649,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   659,   660,   663,   664,   667,   668,   669,   670,   671,
     672,   675,   676,   677,   678,   679,   682,   683,   684,   685,
     686,   687,   688,   689,   692,   693,   694,   695,   696,   699,
     700,   701,   702,   703,   704,   705,   706,   709,   710,   711,
     714,   715,   716,   717,   720,   721,   722,   725,   726,   727,
     730,   731,   732,   735,   736,   737,   738,   739,   740,   741,
     742,   745,   746,   749,   750,   751,   752,   753,   754,   757,
     758,   759,   760,   763,   764,   765,   766,   767,   768,   771,
     772,   773,   774,   775,   776,   777,   778,   779,   783,   784,
     787,   788,   791,   792,   795,   796,   800,   801,   802,   803,
     804,   805,   806,   807,   810,   811,   814,   815,   816,   818,
     820,   821,   822,   824,   828,   829,   832,   833,   835,   838,
     840,   846,   847,   848,   851,   852,   853,   856,   857,   858,
     859,   860,   861,   862,   868,   869,   872,   873,   874,   875,
     876,   879,   880,   881,   882,   885,   886,   891,   896,   903,
     905,   907,   909,   911,   913,   914,   915,   918,   920,   922,
     924,   926,   929,   930,   933,   934,   935,   936,   937,   940,
     943,   946,   952,   958,   961,   962,   965,   966,   967,   974,
     975,   976,   977,   980,   981,   984,   985,   988,   989,   992,
     994,   998,   999,  1002,  1004,  1005,  1006,  1007,  1010,  1011,
    1013,  1014,  1015,  1018,  1020,  1022,  1023,  1025,  1027,  1029,
    1031,  1035,  1038,  1039,  1040,  1041,  1044,  1045,  1048,  1051,
    1052,  1053,  1054,  1055,  1056,  1057,  1058,  1059,  1060,  1061,
    1062,  1063,  1064,  1065,  1066,  1067,  1068,  1069,  1070,  1071,
    1072,  1073,  1074,  1075,  1076,  1077,  1078,  1079,  1080,  1081,
    1082,  1083,  1084,  1085,  1087,  1088,  1089,  1090,  1091,  1092,
    1093,  1095,  1096,  1097,  1100,  1102,  1106,  1108,  1112,  1113,
    1114,  1115,  1116,  1117,  1118,  1119,  1122,  1123,  1124,  1127,
    1130,  1131,  1133,  1135,  1136,  1137,  1138,  1139,  1140,  1147,
    1148,  1151,  1152,  1153,  1156,  1157,  1160,  1163,  1164,  1166,
    1170,  1171,  1172,  1175,  1179,  1181,  1182,  1183,  1184,  1185,
    1186,  1187,  1188,  1189,  1192,  1193,  1194,  1197,  1198,  1201,
    1203,  1211,  1213,  1215,  1219,  1220,  1222,  1225,  1228,  1229,
    1233,  1235,  1238,  1243,  1244,  1245,  1249,  1250,  1251,  1254,
    1255,  1256,  1259,  1260,  1262,  1263,  1264,  1265,  1266,  1267,
    1268,  1269,  1270,  1271,  1273,  1274,  1277,  1278,  1281,  1282,
    1283,  1284,  1287,  1288,  1291,  1293,  1296,  1300,  1301,  1302,
    1304,  1306,  1310,  1311,  1312,  1315,  1316,  1317,  1318,  1319,
    1320,  1323,  1324,  1325,  1326,  1327,  1328,  1329,  1332,  1333,
    1336,  1339,  1340,  1341,  1344,  1347,  1348,  1349,  1352,  1353,
    1354,  1357,  1358,  1359,  1360,  1361,  1362,  1365,  1366,  1367,
    1368,  1369,  1370,  1371,  1374,  1375,  1378,  1379,  1382,  1383,
    1386,  1387,  1390,  1391,  1392,  1395,  1396,  1399,  1400,  1403,
    1406,  1414,  1415,  1418,  1419,  1420,  1421,  1422,  1423,  1424,
    1425,  1426,  1427,  1428,  1429,  1430,  1431,  1432,  1433,  1434,
    1435,  1438,  1441,  1442,  1445,  1446,  1447,  1448,  1451,  1452,
    1453,  1454,  1457,  1458,  1459,  1460,  1461,  1462,  1465,  1466,
    1467,  1468,  1469,  1470,  1472,  1473,  1478,  1479,  1482,  1484,
    1486,  1489,  1490,  1491,  1492,  1493,  1494,  1497,  1499,  1501,
    1503,  1504,  1506,  1508,  1510,  1512,  1514,  1515,  1516,  1519,
    1520,  1521,  1522,  1523,  1524,  1526,  1527,  1528,  1531,  1534,
    1536,  1538,  1540,  1542,  1544,  1546,  1548,  1551,  1553,  1555,
    1557,  1558,  1559,  1560,  1561,  1562,  1563,  1564,  1565,  1568,
    1569,  1570,  1571,  1572,  1573,  1574,  1576,  1578,  1579,  1580,
    1583,  1584,  1585,  1586,  1587,  1588,  1590,  1591,  1592,  1595,
    1596,  1597,  1598,  1599,  1602,  1605,  1608,  1611,  1614,  1617,
    1620,  1623,  1626,  1631,  1634,  1637,  1640,  1643,  1646,  1649,
    1652,  1655,  1658,  1661,  1666,  1669,  1672,  1675,  1678,  1681,
    1684,  1687,  1690,  1695,  1697,  1699,  1701,  1703,  1705,  1710,
    1712,  1714,  1718,  1721,  1724,  1727,  1730,  1733,  1736,  1739,
    1742,  1745,  1748,  1753,  1754,  1755,  1756,  1757,  1758,  1759,
    1761,  1763,  1764,  1765,  1768,  1769,  1770,  1771,  1772,  1773,
    1775,  1776,  1777,  1780,  1782,  1784,  1785,  1787,  1789,  1793,
    1794,  1797,  1798,  1799,  1802,  1805,  1806,  1807,  1808,  1809,
    1810,  1811,  1814,  1822,  1823,  1824,  1825,  1827,  1829,  1830,
    1830,  1831,  1832,  1833,  1834,  1835,  1837,  1838,  1840,  1843,
    1846,  1847,  1848,  1851,  1854,  1857,  1861,  1864,  1867,  1870,
    1874,  1879,  1884,  1886,  1888,  1889,  1891,  1893,  1895,  1897,
    1898,  1900,  1902,  1906,  1911,  1913,  1915,  1917,  1919,  1921,
    1923,  1925,  1927,  1929,  1931,  1934,  1935,  1937,  1939,  1940,
    1942,  1944,  1945,  1946,  1948,  1950,  1951,  1952,  1954,  1955,
    1958,  1962,  1965,  1968,  1972,  1977,  1983,  1984,  1985,  1987,
    1988,  1992,  1994,  1995,  1996,  1999,  2002,  2005,  2007,  2009,
    2014,  2017,  2018,  2019,  2022,  2026,  2027,  2029,  2030,  2031,
    2033,  2034,  2036,  2037,  2042,  2044,  2045,  2047,  2048,  2049,
    2050,  2051,  2052,  2054,  2056,  2058,  2059,  2060,  2062,  2064,
    2065,  2066,  2067,  2068,  2069,  2070,  2071,  2072,  2073,  2074,
    2076,  2078,  2079,  2080,  2081,  2083,  2084,  2085,  2086,  2087,
    2089,  2090,  2091,  2092,  2093,  2094,  2097,  2098,  2099,  2100,
    2101,  2102,  2103,  2104,  2105,  2106,  2107,  2108,  2109,  2110,
    2111,  2112,  2113,  2114,  2115,  2116,  2117,  2120,  2121,  2122,
    2123,  2124,  2125,  2133,  2140,  2149,  2158,  2165,  2172,  2180,
    2188,  2195,  2200,  2205,  2210,  2215,  2220,  2225,  2231,  2241,
    2251,  2261,  2268,  2278,  2288,  2297,  2309,  2322,  2327,  2330,
    2332,  2334,  2339,  2343,  2344,  2345,  2351,  2353,  2355,  2358,
    2359,  2360,  2361,  2362,  2363,  2364,  2367,  2368,  2369,  2370,
    2371,  2372,  2374,  2376,  2378,  2380,  2382,  2384,  2387,  2388,
    2389,  2390,  2392,  2395,  2397,  2399,  2400,  2401,  2403,  2406,
    2409,  2411,  2412,  2413,  2414,  2416,  2417,  2418,  2419,  2420,
    2422,  2424,  2426,  2429,  2430,  2431,  2433,  2436,  2437,  2438,
    2439,  2441,  2444,  2448,  2449,  2450,  2453,  2456,  2458,  2459,
    2460,  2461,  2463,  2466,  2467,  2469,  2470,  2471,  2472,  2473,
    2475,  2476,  2478,  2481,  2482,  2483,  2484,  2485,  2487,  2489,
    2490,  2491,  2492,  2494,  2496,  2497,  2498,  2499,  2500,  2501,
    2503,  2504,  2506,  2509,  2510,  2511,  2512,  2515,  2516,  2519,
    2520,  2523,  2524,  2527,  2540,  2541,  2545,  2546,  2550,  2551,
    2554,  2558,  2564,  2566,  2569,  2571,  2574,  2576,  2580,  2581,
    2582,  2583,  2584,  2585,  2586,  2590,  2591,  2594,  2595,  2596,
    2597,  2598,  2599,  2600,  2601,  2604,  2605,  2606,  2607,  2608,
    2609,  2610,  2611,  2612,  2613,  2614,  2615,  2618,  2619,  2622,
    2623,  2623,  2626,  2628,  2630,  2633,  2634,  2635,  2636,  2637,
    2638,  2641,  2642,  2645,  2646,  2649,  2653,  2654,  2654,  2657,
    2658,  2661,  2664,  2668,  2669,  2670,  2671,  2672,  2673,  2674,
    2675,  2676,  2677,  2678,  2679,  2680,  2681,  2682,  2683,  2684,
    2685,  2686,  2687,  2688,  2689,  2690,  2691,  2694,  2695,  2696,
    2697,  2698,  2699,  2700,  2701,  2707,  2708,  2709,  2710,  2713,
    2715,  2716,  2721,  2723,  2724,  2725,  2726,  2729,  2730,  2735,
    2739,  2740,  2741,  2744,  2745,  2750,  2751,  2754,  2756,  2757,
    2758,  2763,  2765,  2771,  2772,  2773,  2774,  2777,  2778,  2781,
    2783,  2785,  2786,  2789,  2791,  2792,  2793,  2796,  2797,  2800,
    2801,  2802,  2805,  2806,  2807,  2810,  2814,  2815,  2816,  2819,
    2820,  2821,  2822,  2825,  2826,  2827,  2828,  2829,  2832,  2833,
    2834,  2837,  2838,  2839,  2840,  2841,  2844,  2846,  2848,  2850,
    2851,  2852,  2855,  2856,  2857,  2858,  2859,  2860,  2861,  2862,
    2863,  2864,  2865,  2866,  2867,  2870,  2871,  2872,  2875,  2876,
    2877,  2880,  2881,  2882,  2885,  2886,  2887,  2890,  2891,  2892,
    2893,  2896,  2897,  2898,  2901,  2903,  2905,  2909,  2910,  2911,
    2914,  2915,  2916,  2919,  2921,  2923,  2927,  2928,  2929,  2932,
    2933,  2934,  2937,  2939,  2941,  2945,  2946,  2947,  2950,  2951,
    2952,  2955,  2956,  2957,  2960,  2962,  2964,  2968,  2972,  2974,
    2979,  2982,  2983,  2984,  2985,  2988,  2989,  2992,  2994,  2996,
    2999,  3000,  3001,  3004,  3005,  3008,  3010,  3011,  3012,  3013,
    3016,  3017,  3018,  3021,  3022,  3023,  3026,  3027,  3032,  3034,
    3037,  3044,  3045,  3047,  3052,  3054,  3057,  3058,  3059,  3060,
    3062,  3067
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
  "BORDER_", "BOTTOM_", "BOX_", "BOXANNULUS_", "BOXCAR_", "BOXCIRCLE_",
  "BPANDA_", "BUFFER_", "BW_", "CALLBACK_", "CANVAS_", "CATALOG_",
  "CELESTIAL_", "CENTER_", "CENTROID_", "CHANNEL_", "CIRCLE_", "CIAO_",
  "CLEAR_", "CLIP_", "COLOR_", "COLORBAR_", "COLORMAP_", "COLORSCALE_",
  "COLORSPACE_", "COLS_", "COLUMN_", "COMMAND_", "COMPASS_", "COMPOSITE_",
  "COMPRESS_", "CONTOUR_", "CONTRAST_", "COORDINATES_", "COPY_", "COUNT_",
  "CPANDA_", "CREATE_", "CROP_", "CROSS_", "CROSSHAIR_", "CUBE_",
  "CURSOR_", "CUT_", "CMYK_", "DARKEN_", "DASH_", "DASHLIST_", "DATA_",
  "DATAMIN_", "DATASEC_", "DEBUG_", "DEGREES_", "DEFAULT_", "DELETE_",
  "DEPTH_", "DETECTOR_", "DIAMOND_", "DIM_", "DOWN_", "DS9_", "EDIT_",
  "ECLIPTIC_", "ELEVATION_", "ELLIPTIC_", "ELLIPSE_", "ELLIPSEANNULUS_",
  "END_", "ENVI_", "EPANDA_", "EPSILON_", "EQUATORIAL_", "ERASE_", "EXT_",
  "FADE_", "FACTOR_", "FALSE_", "FILE_", "FILL_", "FILTER_", "FIRST_",
  "FIT_", "FITS_", "FITSY_", "FIXED_", "FK4_", "FK5_", "FONT_", "FORMAT_",
  "FOOTPRINT_", "FROM_", "FRONT_", "FULL_", "FUNCTION_", "GALACTIC_",
  "GAUSSIAN_", "GET_", "GLOBAL_", "GRAPHICS_", "GRAY_", "GRID_", "GZ_",
  "HANDLE_", "HAS_", "HEAD_", "HEADER_", "HEIGHT_", "HIDE_", "HIGHLITE_",
  "HISTEQU_", "HISTOGRAM_", "HORIZONTAL_", "HSV_", "HLS_", "ICRS_", "ID_",
  "IIS_", "IMAGE_", "INCLUDE_", "INCR_", "INFO_", "ITERATION_", "IRAF_",
  "IRAFMIN_", "J2000_", "KEY_", "KEYWORD_", "LABEL_", "LAYER_", "LAYERNO_",
  "LAST_", "LENGTH_", "LEVEL_", "LIGHTEN_", "LITTLE_", "LITTLEENDIAN_",
  "LINE_", "LINEAR_", "LIST_", "LOAD_", "LOCAL_", "LOG_", "MACOSX_",
  "MAGNIFIER_", "MATCH_", "MAP_", "MARK_", "MARKER_", "MASK_", "MEDIAN_",
  "MESSAGE_", "METHOD_", "MINMAX_", "MINOR_", "MIP_", "MMAP_", "MMAPINCR_",
  "MOSAIC_", "MODE_", "MOTION_", "MULTICOLOR_", "MOVE_", "NAME_", "NAN_",
  "NATIVE_", "NAXES_", "NEW_", "NEXT_", "NO_", "NONE_", "NONNAN_",
  "NONZERO_", "NOW_", "NRRD_", "NUMBER_", "OBJECT_", "OFF_", "ON_",
  "ONLY_", "OPTION_", "ORIENT_", "PAN_", "PANNER_", "PARSER_", "PASTE_",
  "PERF_", "PHOTO_", "PHYSICAL_", "PIXEL_", "PLOT2D_", "PLOT3D_", "POINT_",
  "POINTER_", "POLYGON_", "POSTSCRIPT_", "POW_", "PRECISION_", "PRINT_",
  "PRESERVE_", "PROJECTION_", "PROPERTY_", "PUBLICATION_", "PROS_",
  "QUERY_", "RADIAL_", "RADIUS_", "RANGE_", "REGION_", "REPLACE_",
  "RESAMPLE_", "RESCAN_", "RESET_", "RESOLUTION_", "RGB_", "ROOT_",
  "ROTATE_", "RULER_", "SAMPLE_", "SAOIMAGE_", "SAOTNG_", "SAVE_",
  "SCALE_", "SCAN_", "SCIENTIFIC_", "SCOPE_", "SCREEN_", "SEGMENT_",
  "SELECT_", "SET_", "SEXAGESIMAL_", "SHAPE_", "SHARED_", "SHIFT_",
  "SHMID_", "SHOW_", "SIGMA_", "SINH_", "SIZE_", "SLICE_", "SMMAP_",
  "SMOOTH_", "SOCKET_", "SOCKETGZ_", "SOURCE_", "SQRT_", "SQUARED_",
  "SSHARED_", "STATS_", "STATUS_", "SUM_", "SYNC_", "SYSTEM_", "TABLE_",
  "TAG_", "TEMPLATE_", "TEXT_", "THREADS_", "THREED_", "THRESHOLD_",
  "THICK_", "TOP_", "TRANSPARENCY_", "TO_", "TOGGLE_", "TOPHAT_", "TRUE_",
  "TYPE_", "UNDO_", "UNHIGHLITE_", "UNLOAD_", "UNSELECT_", "UPDATE_",
  "UP_", "USER_", "VALUE_", "VAR_", "VIEW_", "VECTOR_", "VERSION_",
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
  "getFitsDepth", "getFitsFileName", "getFitsSlice", "getGrid", "getLayer",
  "getMask", "layerRef", "getPan", "getRGB", "getMultiColor", "getHLS",
  "getHSV", "getSmooth", "getThreed", "getThreedBorder",
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
  "tags", "tag", "callback", "layer", "mask", "orient", "pan", "panTo",
  "panMotion", "panner", "postscript", "precision", "pscolorspace",
  "region", "regionHighlite", "regionSelect", "renderMethod",
  "renderBackground", "rgb", "multicolor", "hls", "hsv", "rotate",
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
     615,   616,   617,   618,   619,   620,   621,    89,    78,    88,
      61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   371,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   373,   373,   374,   374,   374,   374,   374,   374,   374,
     374,   374,   374,   374,   375,   375,   375,   375,   375,   375,
     375,   375,   375,   376,   376,   376,   376,   376,   377,   377,
     378,   378,   378,   379,   380,   381,   382,   382,   382,   382,
     383,   383,   383,   383,   383,   384,   384,   384,   384,   384,
     384,   384,   384,   384,   384,   384,   384,   384,   384,   384,
     384,   384,   384,   384,   384,   384,   384,   384,   384,   384,
     384,   384,   384,   385,   385,   386,   386,   386,   386,   386,
     386,   387,   387,   387,   387,   387,   388,   388,   388,   388,
     388,   388,   388,   388,   389,   389,   389,   389,   389,   390,
     390,   390,   390,   390,   390,   390,   390,   391,   391,   391,
     392,   392,   392,   392,   393,   393,   393,   394,   394,   394,
     395,   395,   395,   396,   396,   396,   396,   396,   396,   396,
     396,   397,   397,   398,   398,   398,   398,   398,   398,   399,
     399,   399,   399,   400,   400,   400,   400,   400,   400,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   402,   402,
     403,   403,   404,   404,   405,   405,   406,   406,   406,   406,
     406,   406,   406,   406,   407,   407,   408,   408,   408,   408,
     408,   408,   408,   408,   409,   409,   410,   410,   410,   410,
     410,   411,   411,   411,   412,   412,   412,   413,   413,   413,
     413,   413,   413,   413,   414,   414,   415,   415,   415,   415,
     415,   416,   416,   416,   416,   417,   417,   417,   417,   418,
     418,   418,   418,   418,   418,   418,   418,   419,   419,   419,
     419,   419,   420,   420,   421,   421,   421,   421,   421,   422,
     422,   422,   422,   422,   423,   423,   424,   424,   424,   425,
     425,   425,   425,   426,   426,   427,   427,   428,   428,   429,
     429,   430,   430,   430,   430,   430,   430,   430,   431,   431,
     431,   431,   431,   432,   432,   432,   432,   432,   432,   432,
     432,   433,   434,   434,   434,   434,   435,   435,   436,   437,
     437,   437,   437,   437,   437,   437,   437,   437,   437,   437,
     437,   437,   437,   437,   437,   437,   437,   437,   437,   437,
     437,   437,   437,   437,   437,   437,   437,   437,   437,   437,
     437,   437,   437,   437,   437,   437,   437,   437,   437,   437,
     437,   437,   437,   437,   438,   438,   439,   439,   440,   440,
     440,   440,   440,   440,   440,   440,   441,   441,   441,   442,
     443,   443,   443,   443,   443,   443,   443,   443,   443,   444,
     444,   445,   445,   445,   446,   446,   447,   448,   448,   448,
     449,   449,   449,   450,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   452,   452,   452,   453,   453,   454,
     454,   455,   455,   455,   456,   456,   456,   457,   458,   458,
     459,   459,   459,   460,   460,   460,   461,   461,   461,   462,
     462,   462,   463,   463,   463,   463,   463,   463,   463,   463,
     463,   463,   463,   463,   463,   463,   464,   464,   465,   465,
     465,   465,   466,   466,   467,   467,   467,   468,   468,   468,
     468,   468,   469,   469,   469,   470,   470,   470,   470,   470,
     470,   471,   471,   471,   471,   471,   471,   471,   472,   472,
     473,   474,   474,   474,   475,   476,   476,   476,   477,   477,
     477,   478,   478,   478,   478,   478,   478,   479,   479,   479,
     479,   479,   479,   479,   480,   480,   481,   481,   482,   482,
     483,   483,   484,   484,   484,   485,   485,   486,   486,   487,
     487,   488,   488,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   490,   491,   491,   492,   492,   492,   492,   493,   493,
     493,   493,   494,   494,   494,   494,   494,   494,   495,   495,
     495,   495,   495,   495,   495,   495,   496,   496,   497,   497,
     497,   498,   498,   498,   498,   498,   498,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   501,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   505,
     505,   505,   505,   505,   506,   506,   506,   506,   506,   506,
     506,   506,   506,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   512,   512,   512,   512,   512,   512,
     512,   512,   512,   513,   513,   513,   513,   513,   513,   514,
     514,   515,   515,   515,   516,   517,   517,   517,   517,   517,
     517,   517,   518,   519,   519,   519,   519,   519,   519,   520,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   521,   521,   522,   522,   522,
     522,   522,   522,   523,   523,   523,   523,   523,   523,   523,
     523,   523,   523,   523,   523,   523,   523,   523,   523,   523,
     523,   523,   523,   523,   523,   523,   523,   523,   523,   524,
     524,   524,   524,   525,   525,   525,   526,   526,   526,   527,
     527,   527,   527,   527,   527,   527,   528,   528,   528,   528,
     528,   528,   528,   528,   528,   528,   528,   528,   528,   528,
     528,   528,   528,   528,   528,   528,   528,   528,   528,   528,
     528,   528,   528,   528,   528,   528,   528,   528,   528,   528,
     528,   528,   528,   528,   528,   528,   528,   528,   528,   528,
     528,   528,   528,   528,   528,   528,   528,   528,   528,   528,
     528,   528,   528,   528,   528,   528,   528,   528,   528,   528,
     528,   528,   528,   528,   528,   528,   528,   528,   528,   528,
     528,   528,   528,   528,   528,   528,   528,   528,   528,   528,
     528,   528,   528,   529,   529,   529,   529,   530,   530,   531,
     531,   532,   532,   533,   534,   534,   534,   534,   534,   534,
     535,   535,   536,   536,   536,   536,   536,   536,   537,   537,
     537,   537,   537,   537,   537,   538,   538,   539,   539,   539,
     539,   539,   539,   539,   539,   540,   540,   540,   540,   540,
     540,   540,   540,   540,   540,   540,   540,   541,   541,   542,
     543,   542,   544,   544,   544,   545,   545,   545,   545,   545,
     545,   546,   546,   547,   547,   548,   549,   550,   549,   551,
     551,   552,   553,   554,   554,   554,   554,   554,   554,   554,
     554,   554,   554,   554,   554,   554,   554,   554,   554,   554,
     554,   554,   554,   554,   554,   554,   554,   555,   555,   555,
     555,   555,   555,   555,   555,   556,   556,   556,   556,   557,
     557,   557,   557,   557,   557,   557,   557,   558,   558,   558,
     559,   559,   559,   560,   560,   560,   560,   561,   561,   561,
     561,   562,   562,   563,   563,   563,   563,   564,   564,   565,
     565,   565,   565,   566,   566,   566,   566,   567,   567,   568,
     568,   568,   569,   569,   569,   570,   571,   571,   571,   572,
     572,   572,   572,   573,   573,   573,   573,   573,   574,   574,
     574,   575,   575,   575,   575,   575,   576,   576,   576,   576,
     576,   576,   577,   577,   577,   577,   577,   577,   577,   577,
     577,   577,   577,   577,   577,   578,   578,   578,   579,   579,
     579,   580,   580,   580,   581,   581,   581,   582,   582,   582,
     582,   583,   583,   583,   584,   584,   584,   585,   585,   585,
     586,   586,   586,   587,   587,   587,   588,   588,   588,   589,
     589,   589,   590,   590,   590,   591,   591,   591,   592,   592,
     592,   593,   593,   593,   594,   594,   594,   595,   596,   596,
     596,   597,   597,   597,   597,   598,   598,   598,   598,   598,
     599,   599,   599,   600,   600,   601,   601,   601,   601,   601,
     602,   602,   602,   603,   603,   603,   604,   604,   604,   604,
     605,   606,   606,   606,   606,   606,   607,   607,   607,   607,
     607,   607
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     3,     2,     1,     1,     2,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     2,     3,     2,     2,     2,     3,
       2,     2,     2,     2,     3,     2,     2,     2,     3,     2,
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
       9,     9,     9,     7,     1,     2,     1,     5,     9,     9,
       9,     7,     1,     2,     2,     2,     2,     2,     2,    13,
      13,    12,    12,     1,     0,     1,     1,     4,     6,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       4,     0,     6,     8,     2,     3,     3,     3,     0,     4,
       4,     4,     4,     3,     3,     1,     3,     5,     4,     4,
       3,     2,     0,     1,     1,     1,     1,     1,     3,     0,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     2,     2,     2,     4,     3,
       2,     2,     2,     2,     2,     1,     3,     2,     2,     2,
       2,     1,     2,     8,     2,     1,     2,     1,     2,     1,
       4,     3,     2,     1,     7,     8,     7,     8,     1,     1,
       1,     2,     1,     1,     2,     1,     0,     2,     2,     1,
       0,     2,     2,     1,     1,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     0,     1,     2,     1,     4,     5,
       0,     2,     1,     5,     2,     2,     1,     1,     1,     2,
       1,     2,     1,     1,     0,     1,     1,     0,     1,     5,
       6,     3,     6,     3,     1,     3,     1,     1,     1,     3,
       6,     7,     5,     2,     1,     5,     4,     1,     3,     0,
       1,     2,     1,     4,     1,     2,     1,     2,     3,     2,
       1,     2,     1,     4,     2,     1,     1,     3,     1,     2,
       3,     2,     0,     1,     1,     4,     2,     0,     1,     3,
       4,     4,     0,     1,     1,     1,     1,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     1,     2,     2,     2,
       2,     1,     1,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     2,     2,     0,     1,     2,     1,     6,
       5,     1,     1,     1,     2,     2,     2,     1,     1,     1,
       1,     2,     1,     1,     1,     2,     1,     1,     1,     2,
       2,     2,     0,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     1,     2,     3,     1,
       2,     2,     4,     5,     1,    10,     1,     2,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     4,     4,     4,
       3,     3,     5,     4,     4,     4,     3,     3,     3,     3,
       3,     3,     2,     2,     4,     3,     3,     3,     3,     4,
       4,     4,     4,     5,     4,     6,     7,     4,     4,     5,
       2,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     3,     3,     4,     3,     5,     6,     3,     3,     4,
       3,     3,     3,     3,     3,     5,     3,     3,     4,     3,
       2,     2,     1,     3,     4,     4,     4,     4,     4,     6,
       4,     4,     5,     4,     4,     4,     4,     5,     4,     6,
       7,     4,     4,     5,     5,     5,     5,     5,     5,     7,
       5,     5,     6,     4,     4,     4,     4,     4,     6,     4,
       4,     5,     5,     5,     5,     5,     6,     5,     7,     8,
       5,     5,     6,     3,     3,     3,     3,     4,     3,     5,
       6,     3,     3,     4,     3,     3,     3,     3,     3,     5,
       3,     3,     4,     4,     4,     3,     5,     4,     4,     2,
       3,     6,     6,     1,     1,     1,     2,     2,     2,     3,
       3,     2,    12,     2,     2,     1,     3,     4,     2,     0,
       3,     1,     2,     2,     2,     2,     2,     4,     4,     4,
       3,     4,     5,     8,     6,     9,     6,     7,    10,    11,
      12,     9,     5,     6,     3,     5,     5,     6,     5,     4,
       9,    10,    11,     9,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     7,     7,     2,     4,     4,     4,     4,
       5,     4,     4,     5,     5,     3,     4,     4,     4,     7,
       9,     6,    10,    11,    12,     9,     3,     2,     3,     5,
       7,     4,     3,     3,     6,     7,     7,     4,     4,     9,
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
       3,     4,     5,     5,     5,     3,     4,     5,     5,     5,
       5,     2,     3,     3,     5,     3,     3,     3,     4,     5,
       5,     5,     5,     3,     4,     5,     5,     2,     2,     3,
       5,     6,     6,     3,     3,     6,     5,     5,     2,     3,
       3,     5,     6,     3,     2,     2,     3,     2,     3,     2,
       3,     5,     6,     2,     2,     2,     1,     4,     4,     1,
       2,     2,     2,     2,     2,     2,     2,     3,     2,     3,
       2,     3,     1,     1,     1,     1,     1,     0,     2,     0,
       2,     0,     1,     0,     0,     1,     1,     1,     1,     1,
       7,     8,     2,     6,     2,     6,     2,     3,     2,     1,
       1,     3,     3,     1,     4,     2,     1,     3,     3,     4,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     0,
       0,     2,     6,     7,     2,     1,     3,     1,     3,     1,
       1,     1,     2,     2,     1,     3,     0,     0,     2,     2,
       1,     3,     5,     0,     1,     1,     2,     2,     3,     2,
       3,     2,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     2,
       3,     2,     2,     2,     2,     1,     1,     1,     1,     4,
       2,     3,     3,     2,     3,     2,     2,     2,     3,     3,
       3,     2,     3,     1,     3,     3,     1,     2,     2,     2,
       2,     9,     6,     1,     1,     1,     1,     2,     2,     3,
       3,     1,     2,     3,     3,     1,     2,     1,     1,     1,
       1,     1,     2,     2,     4,     2,     2,     2,     4,     2,
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
       0,   321,     0,     0,     0,     0,     0,     0,   349,     0,
       0,    23,     0,     0,     0,     0,     0,  1153,     0,     0,
       0,     0,  1084,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1084,    45,     0,     0,     0,    50,     0,     0,
       0,    54,  1335,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     3,    61,
      62,     0,   251,     6,     0,     0,     0,     0,     0,     0,
       9,     0,     0,   284,   286,     0,     0,     0,     0,     0,
      11,   151,   153,   146,   147,   148,   152,   149,   150,   292,
      12,     0,   304,     0,     0,     0,    13,     0,     0,     0,
       0,   328,     0,    14,    74,   103,     0,   133,   102,    82,
     100,     0,    79,    81,    77,   134,   101,    78,     0,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,    75,    76,    80,
     335,   159,   104,     0,    15,     0,    16,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,    63,
     347,   346,    18,     0,    19,     0,     0,     0,   410,   424,
       0,   430,     0,     0,     0,     0,     0,     0,     0,   364,
       0,   502,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1084,     0,   375,     0,     0,   381,     0,     0,     0,
     385,     0,   387,     0,   389,     0,     0,   552,   393,    20,
       0,   558,    21,   563,     0,     0,   582,   567,   568,   569,
     570,   584,   572,   573,   577,   574,     0,   576,   578,     0,
       0,    22,     0,    24,     0,     0,     0,    26,     0,     0,
       0,    27,     0,   599,     0,     0,     0,   604,     0,    28,
       0,  1155,   141,  1175,     0,  1154,  1167,  1171,  1165,     0,
    1163,  1173,     0,  1169,    36,     0,     0,     0,     0,     0,
       0,    30,   764,    31,     0,     0,     0,     0,     0,     0,
     765,    32,     0,    33,  1088,  1089,  1085,  1086,  1087,     0,
     141,  1177,     0,   135,     0,     0,     0,    35,     0,    37,
       0,  1188,  1187,  1186,  1185,    39,     0,     0,     0,     0,
       0,   159,     0,    40,     0,  1206,     0,  1203,    41,     0,
       0,     0,     0,    44,     0,    43,    42,     0,     0,     0,
       0,    47,     0,     0,  1243,    48,     0,     0,     0,     0,
       0,    49,  1331,  1330,  1334,  1333,  1332,    51,     0,    52,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    53,
       0,     0,  1337,    55,     0,     0,    57,     0,     0,     0,
       0,   159,    58,  1360,    59,     0,     0,    60,     1,     4,
       5,   234,     0,   226,     0,     0,   228,     0,   236,   229,
     233,   244,   245,   230,   246,     0,   232,   254,   255,   253,
     252,     0,     0,   274,     0,   259,   267,   270,   269,   268,
     266,   258,   263,   264,   265,   257,     0,     0,     0,     0,
       0,     0,   262,    10,     0,     0,     0,     0,     0,     0,
       0,     0,   285,     0,     0,   293,     0,   303,   294,   305,
     295,   306,   296,   317,   297,     0,     0,   298,     0,    93,
      94,    95,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   324,     0,     0,     0,     0,     0,   161,
     166,   160,   162,   165,   164,   163,     0,     0,   341,    68,
      69,    70,    71,    72,    64,    65,    66,    73,    67,     0,
     350,     0,   406,   402,   398,   399,   403,   400,   405,   351,
     409,   352,   309,   414,   418,   413,   312,   311,   310,     0,
       0,   353,   425,   355,     0,   354,     0,   432,   356,   444,
     436,   447,   437,   438,   440,     0,   442,   443,   159,   357,
       0,     0,   358,     0,     0,   159,   359,   456,   159,   454,
     360,   457,   362,   159,   458,   361,     0,   159,     0,   363,
     476,     0,   474,   492,     0,     0,     0,   480,   472,     0,
     482,   497,   485,   365,   503,   504,   366,   367,     0,     0,
     528,   529,   530,   370,   525,   526,   527,   371,     0,   467,
       0,   372,    83,   464,     0,   373,   374,   518,   518,   505,
     506,   518,   518,   378,     0,   517,   511,   516,   512,   513,
     514,   515,   377,   524,   379,   380,   520,   382,     0,   521,
     522,   523,   384,   536,   531,   532,   534,   386,   542,   544,
     546,   548,   541,   543,   550,   388,     0,     0,   555,     0,
     392,   159,   557,   564,     0,   565,   583,   566,   585,   586,
     587,   571,   588,   590,   589,   591,   575,   579,   596,     0,
       0,     0,     0,   592,   580,    25,  1239,  1240,  1241,     0,
    1236,  1237,     0,     0,     0,   601,   600,     0,     0,     0,
       0,    29,   141,  1176,     0,  1168,  1172,  1166,  1164,  1174,
       0,  1170,   144,   145,   143,   142,  1159,  1157,  1156,  1161,
       0,     0,     0,     0,   611,     0,   612,     0,     0,     0,
       0,     0,     0,     0,   613,     0,   763,     0,   614,     0,
     615,     0,     0,   616,     0,   768,   767,   766,     0,   771,
       0,     0,     0,   937,     0,     0,     0,   775,   779,   781,
     973,     0,     0,     0,     0,   875,     0,     0,     0,   910,
       0,     0,     0,     0,     0,     0,     0,   912,     0,     0,
       0,    34,  1183,  1178,  1184,   138,   139,   137,   140,   136,
    1179,     0,  1181,  1182,  1235,    38,     0,     0,     0,     0,
    1195,  1196,     0,   159,     0,  1193,  1190,     0,     0,     0,
     159,  1213,  1216,  1214,  1215,  1207,  1208,  1209,  1210,     0,
       0,     0,    46,  1232,  1233,     0,  1248,  1250,  1249,  1245,
    1246,  1244,     0,     0,     0,     0,     0,     0,  1251,     0,
    1254,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1252,  1262,     0,     0,     0,  1253,  1255,
    1329,  1230,  1231,  1229,   214,     0,   218,   210,     0,   220,
     211,     0,   222,   212,  1228,  1227,   213,   215,   216,   217,
       0,     0,   209,     0,     0,     0,     0,  1343,  1356,     0,
       0,  1346,     0,     0,  1349,     0,     0,  1348,  1347,   167,
    1366,     0,  1365,  1361,   235,   231,     0,   240,     0,   237,
       0,   256,   154,   157,   158,   156,   155,   271,   272,   273,
     261,   260,   276,   278,   277,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     159,     0,   325,    99,    96,    97,    98,   159,   327,   326,
       0,     0,     0,     0,     0,     0,     0,   340,     0,   336,
     334,   333,   348,   401,     0,     0,   404,   419,   420,   415,
     416,   421,   423,   422,   417,   313,   314,   412,   411,   427,
     426,     0,   431,   445,   446,   435,   448,   441,   439,   434,
       0,     0,   159,   159,   167,   167,   167,   159,     0,     0,
     159,   493,   475,   486,     0,   477,    83,   488,     0,     0,
     479,   481,   159,   498,     0,     0,   484,     0,     0,   369,
       0,   469,    87,    86,   463,     0,   519,   508,   507,   509,
     510,     0,     0,     0,   987,   989,   988,     0,  1077,     0,
    1056,     0,  1059,     0,     0,  1079,  1081,     0,  1072,   376,
       0,   533,   535,   545,   538,   547,   539,   549,   540,   551,
     537,     0,     0,   391,   556,   553,   554,   167,   581,   593,
     594,   595,   597,     0,     0,     0,   610,   598,     0,     0,
       0,  1160,  1158,  1162,     0,     0,     0,   180,   180,   174,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   177,   177,   174,     0,     0,   174,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   658,   682,     0,     0,
       0,   650,     0,     0,     0,     0,   180,   174,     0,     0,
     759,     0,   769,   770,   159,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   825,     0,
       0,     0,     0,     0,   847,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   865,     0,     0,   870,   871,     0,
       0,     0,   890,   892,   891,     0,   894,     0,     0,   901,
     903,   904,   938,     0,     0,     0,     0,   773,   774,   981,
     979,   984,   983,   982,   980,   985,     0,   778,     0,   975,
     974,   782,     0,   978,     0,   783,   784,   785,   786,     0,
       0,     0,     0,     0,   877,     0,     0,   878,  1100,     0,
    1103,  1099,     0,     0,     0,   879,   911,   880,  1118,  1123,
    1120,  1126,  1119,  1117,  1124,  1121,  1115,  1122,  1116,  1125,
       0,     0,   885,     0,     0,     0,     0,   886,  1135,  1139,
    1140,     0,  1137,   887,     0,  1141,   888,   908,     0,     0,
       0,   913,   914,   915,  1180,  1194,     0,     0,  1201,  1197,
       0,     0,     0,  1192,  1191,  1205,  1204,     0,     0,  1221,
       0,     0,  1217,     0,  1225,     0,     0,  1218,     0,  1247,
     203,   203,     0,     0,     0,   203,     0,  1276,     0,  1275,
       0,     0,     0,     0,  1263,     0,     0,     0,     0,  1267,
       0,     0,     0,  1274,     0,     0,     0,     0,     0,  1265,
    1277,     0,     0,     0,  1264,   203,   203,   203,     0,   219,
     221,   223,     0,   224,     0,    62,     0,  1339,     0,  1344,
     159,  1359,     0,  1350,  1351,     0,  1353,  1354,     0,   168,
     169,  1345,  1367,  1368,     0,   227,     0,   241,     0,     0,
       0,     0,   275,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   319,   159,     0,
       0,     0,     0,   159,     0,   339,     0,   338,   408,   407,
       0,     0,     0,   159,     0,   167,   453,   451,   455,   459,
       0,     0,     0,   167,     0,   494,   478,     0,   489,   491,
     170,     0,     0,   368,     0,     0,    62,     0,   468,    85,
      84,     0,     0,   999,     0,     0,     0,     0,     0,     0,
    1011,     0,     0,     0,     0,     0,     0,  1027,  1028,     0,
       0,     0,     0,  1038,     0,  1044,  1045,  1047,  1049,     0,
    1053,  1064,  1065,  1066,     0,  1068,  1073,  1075,  1076,  1074,
     986,     0,  1055,     0,  1054,   998,     0,     0,  1060,     0,
    1062,     0,  1061,  1082,  1063,  1070,     0,     0,   390,     0,
       0,  1242,  1238,   608,   609,     0,   606,   602,     0,   180,
     180,   180,   181,   182,   620,   621,   176,   175,     0,   180,
     180,   180,     0,   628,   627,   626,   638,   177,   180,   180,
     180,   178,   179,   180,   180,     0,   180,   180,     0,   177,
       0,   651,     0,   657,     0,   656,   655,   654,     0,     0,
       0,   681,     0,   680,     0,   653,   652,     0,     0,     0,
       0,   177,   177,   174,     0,     0,   174,     0,     0,     0,
     180,   180,   755,     0,   180,   180,   760,     0,   193,   194,
     195,   196,   197,   198,     0,    91,    92,    90,   790,     0,
       0,     0,     0,     0,   931,   929,   924,     0,   934,   918,
     935,   921,   933,   927,   916,   930,   919,   917,   936,   932,
       0,     0,   804,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   835,     0,     0,     0,
       0,   846,   848,     0,     0,   853,   852,     0,     0,   183,
       0,     0,   159,     0,   861,     0,     0,     0,     0,   866,
     867,   868,     0,     0,     0,   874,   889,   893,   895,   898,
     897,     0,     0,     0,   902,   939,   941,     0,   940,   776,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1083,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   780,     0,     0,     0,     0,
     876,     0,   159,  1096,  1094,  1092,     0,     0,   159,  1098,
     881,     0,     0,     0,     0,  1134,     0,     0,  1142,   906,
     907,     0,   909,  1200,  1202,  1199,  1198,  1189,     0,     0,
       0,  1222,     0,     0,  1226,  1234,   205,   206,   207,   208,
     204,  1257,  1256,     0,     0,     0,  1261,     0,     0,     0,
    1260,     0,     0,     0,  1259,  1258,   203,     0,     0,     0,
    1266,     0,     0,     0,  1273,     0,     0,     0,  1272,     0,
       0,     0,  1271,     0,     0,     0,  1270,     0,     0,     0,
       0,     0,  1287,     0,  1322,  1321,  1323,     0,     0,     0,
    1269,     0,     0,     0,  1268,  1282,  1281,  1283,  1279,  1278,
    1280,  1325,  1324,  1326,     0,     0,     0,  1341,  1342,     0,
    1357,   159,  1352,  1355,     0,     0,   159,     0,     0,     0,
     238,     0,     0,     0,     0,   279,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   316,   315,     0,     0,   307,
     318,   320,     0,   330,   332,   331,   329,   159,   337,     0,
       0,     0,   167,   159,     0,     0,     0,     0,   473,   487,
     496,     0,   490,   172,   173,   171,   483,     0,   499,     0,
       0,   466,   471,    83,     0,     0,     0,     0,     0,     0,
     159,  1000,     0,     0,     0,  1005,     0,   159,     0,  1012,
    1013,     0,  1015,  1016,  1017,     0,     0,     0,  1023,     0,
    1029,     0,     0,     0,  1033,  1034,     0,     0,     0,  1039,
    1040,     0,     0,  1043,  1046,  1048,  1050,     0,     0,  1067,
    1069,   990,  1078,   991,     0,     0,  1080,  1071,     0,     0,
     561,   562,     0,   603,   607,     0,   617,   618,   619,   180,
     623,   624,   625,     0,     0,     0,   632,   633,   174,     0,
       0,     0,   180,   639,   640,   641,   642,   644,   177,   647,
     648,     0,   180,     0,     0,     0,   177,   177,   174,     0,
       0,     0,     0,     0,     0,     0,   177,   177,   174,     0,
       0,   174,     0,     0,     0,     0,   177,   177,   174,     0,
       0,     0,     0,   679,     0,   683,     0,     0,     0,     0,
       0,   177,   177,   174,     0,     0,   174,     0,     0,     0,
       0,     0,   177,   177,   174,     0,     0,   174,     0,   177,
     659,   660,   661,   662,   664,     0,   667,   668,     0,   177,
       0,     0,   753,   754,   180,   757,   758,     0,   789,   159,
     791,     0,     0,     0,     0,     0,     0,     0,   923,   920,
     926,   925,   922,   928,     0,     0,     0,     0,     0,   159,
     809,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   826,   827,   828,     0,   832,   829,
     831,     0,     0,   837,   836,   838,     0,     0,     0,     0,
       0,     0,   159,   159,   851,   189,   185,   190,   184,   187,
     186,   188,   857,   858,     0,     0,   860,   862,   159,   159,
       0,   869,   872,   159,   159,   896,   900,   942,   777,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1127,
     967,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   968,     0,     0,     0,     0,
       0,   787,   788,   159,   167,  1097,     0,     0,  1101,  1102,
       0,     0,   883,     0,   159,     0,  1136,  1138,   905,     0,
    1219,  1220,  1223,  1224,   203,   203,   203,   203,   203,   203,
     203,   203,   203,  1327,  1285,  1284,  1286,  1319,  1318,  1320,
    1316,  1315,  1317,  1310,  1309,  1311,  1307,  1306,  1308,  1289,
    1288,  1292,  1291,  1293,  1290,  1301,  1300,  1302,  1298,  1297,
    1299,     0,     0,  1336,     0,  1358,     0,   159,     0,  1362,
       0,     0,   242,     0,   239,     0,     0,     0,     0,     0,
     287,     0,     0,     0,     0,     0,     0,     0,   159,     0,
     322,   147,     0,   428,     0,   449,   167,   170,     0,     0,
     462,     0,   500,   501,     0,   465,     0,     0,     0,     0,
       0,   159,  1001,   170,   170,   170,   159,  1006,   170,   167,
     170,   170,   159,  1018,   170,   170,   170,   159,  1024,   170,
     170,   159,     0,   170,   159,   170,   170,   159,   170,   159,
    1057,  1058,     0,     0,   560,     0,   622,   629,   630,   631,
       0,   635,   636,   637,   643,   180,   177,   649,   670,   671,
     672,   673,   674,     0,   676,   677,   177,   177,   733,   734,
     735,   736,   738,     0,   741,   742,     0,   177,   744,   745,
     746,   747,   748,     0,   750,   751,   177,     0,     0,     0,
     177,   177,   174,     0,     0,     0,     0,     0,     0,   177,
     177,   174,     0,     0,     0,     0,     0,     0,   177,   177,
     174,     0,     0,     0,   177,   180,   180,   180,   180,   180,
       0,   180,   180,     0,   177,   177,   180,   180,   180,   180,
     180,     0,   180,   180,     0,   177,   663,   177,     0,   669,
       0,     0,   756,     0,   792,   170,     0,     0,   170,     0,
       0,     0,   802,   170,   805,   806,   170,   808,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   830,   833,   834,     0,   170,     0,     0,     0,   849,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1128,  1106,     0,  1113,
    1114,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   159,     0,     0,    88,     0,     0,   976,
     977,   167,     0,     0,     0,  1104,   882,   884,   167,   159,
    1212,  1313,  1312,  1314,  1304,  1303,  1305,  1295,  1294,  1296,
    1328,     0,  1338,  1369,     0,     0,  1364,  1363,   243,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   283,     0,
       0,   308,   170,   429,   433,   450,   452,     0,   460,   495,
     159,     0,     0,     0,     0,     0,     0,   997,  1002,  1004,
    1003,  1007,  1008,  1009,  1010,  1014,  1019,  1020,  1021,  1022,
    1025,  1026,  1030,   167,   170,  1036,   167,  1037,  1041,   167,
    1051,   167,     0,   159,     0,   559,     0,   634,   645,   180,
     177,   678,   737,   177,     0,   743,   177,   752,   180,   180,
     180,   180,   180,     0,   180,   180,   177,   180,   180,   180,
     180,   180,     0,   180,   180,   177,   180,   180,   180,   180,
     180,     0,   180,   180,   177,   180,   693,   694,   695,   696,
     698,   177,   701,   702,     0,   180,   180,   722,   723,   724,
     725,   727,   177,   730,   731,     0,   180,   665,   177,   761,
     762,   159,   794,     0,   170,   796,     0,   159,     0,   803,
     807,   159,     0,   814,   815,   816,   817,   821,   822,   818,
     819,   820,     0,     0,   170,   841,     0,   159,     0,     0,
     854,   170,     0,     0,   170,   170,     0,   899,     0,   191,
     191,     0,     0,   191,     0,   191,  1083,     0,     0,     0,
       0,     0,     0,     0,     0,  1105,     0,     0,   191,   191,
       0,     0,     0,     0,     0,     0,     0,     0,   969,     0,
       0,     0,  1083,    89,     0,   191,     0,  1130,   159,   159,
       0,   167,     0,   225,  1371,  1370,     0,     0,   247,     0,
       0,     0,     0,     0,   291,     0,     0,     0,   323,   461,
       0,   342,     0,   993,     0,   199,     0,  1031,  1032,  1035,
    1042,  1052,   383,     0,   342,     0,   646,   675,   739,   177,
     749,   684,   685,   686,   687,   688,   177,   690,   691,   180,
     713,   714,   715,   716,   717,   177,   719,   720,   180,   704,
     705,   706,   707,   708,   177,   710,   711,   180,   697,   180,
     177,   703,   726,   180,   177,   732,   666,     0,   170,   797,
       0,     0,     0,     0,     0,   823,   824,   839,     0,     0,
       0,   850,   855,     0,   863,   864,   856,   170,     0,   192,
    1083,  1083,    88,     0,  1083,     0,  1083,   943,   159,     0,
    1108,     0,  1111,  1151,  1112,  1110,  1107,     0,  1083,  1083,
      88,     0,     0,  1083,  1083,     0,     0,  1083,   972,   970,
     971,   950,  1083,  1083,  1130,  1146,     0,  1095,  1093,  1132,
       0,     0,     0,     0,   249,   281,   282,     0,     0,     0,
     280,     0,   342,   343,   345,   344,   394,     0,     0,   200,
     202,   201,   995,   996,   342,   396,     0,   740,   180,   692,
     180,   721,   180,   712,   699,   180,   728,   180,     0,   793,
     170,   170,     0,   170,     0,   170,   170,     0,   170,     0,
    1083,   956,   952,  1083,     0,   957,     0,   951,  1083,     0,
    1109,     0,   954,   953,  1083,     0,     0,   948,   946,  1083,
     159,   947,   949,   955,  1146,  1090,     0,     0,  1131,  1144,
    1133,  1211,     0,     0,   289,   290,   288,   309,   312,   310,
       0,     0,   395,   992,   159,   397,   605,   689,   718,   709,
     700,   729,   170,   795,   801,     0,   813,   810,   840,   845,
       0,   859,     0,   961,   945,    88,     0,   959,  1152,     0,
     944,    88,     0,   960,     0,  1091,  1148,  1150,     0,  1143,
       0,     0,     0,     0,     0,     0,   199,     0,   798,   159,
     811,   842,   873,  1083,     0,     0,  1083,     0,   170,  1149,
    1145,   248,     0,     0,     0,     0,     0,   994,   772,   159,
     799,   812,   159,   843,   963,     0,  1083,   962,     0,     0,
     250,   302,     0,   301,     0,   800,   844,    88,   964,    88,
    1083,   300,   299,  1083,  1083,   958,   966,   965
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    58,  1557,   178,   160,  1014,  2682,  2683,   473,   474,
     475,   476,   161,   162,   163,   780,   706,    99,   907,   496,
    1341,  1846,  1488,  1503,  1484,  2082,  2790,  1554,  2852,  1721,
     379,   857,   860,   863,   872,    68,   403,   409,   413,   416,
      73,   419,    80,   435,   431,   425,   442,    90,   452,   100,
     106,   458,   460,   462,   530,   967,  1817,   464,   467,   113,
     483,   164,   166,  2846,   182,   184,   229,  1009,  1053,   519,
     956,   521,   531,   959,   964,   533,   535,   970,   538,   972,
     549,   975,   977,   552,   556,   560,   562,   565,   569,   605,
     601,  1408,   583,   995,  1000,   992,  1396,  1006,   586,   613,
     622,  1017,   627,   632,   624,   597,   593,   637,   645,  1044,
    1046,  1048,  1050,   650,  1055,   232,   652,  1912,   251,   655,
     657,   661,   666,   674,   269,  1477,   685,   291,   714,  1493,
     716,   724,  1111,  1511,  1106,  1973,  1523,  1521,  1975,  1107,
    1513,  1515,   730,   733,   728,   293,   301,   303,   771,  1188,
    1580,  1177,  1675,  2125,  1191,  1195,  1186,  1039,  1450,  1454,
    1462,  1464,  2109,   309,  1204,  1207,  1215,  2436,  2437,  2438,
    2110,  2825,  2826,  1237,  1243,  1246,  2908,  2909,  2905,  2906,
    2956,  2439,  2440,   284,   317,   325,   333,   795,   790,   338,
     343,   345,   805,   812,  1272,  1277,   866,   854,   351,   319,
     261,   257,   355,   819,   361,   828,   843,   844,  1314,  1309,
    1740,  1299,  1762,  1734,  1774,  1770,  1730,  1756,  1752,  1726,
    1748,  1744,  1303,   848,   830,   367,   368,   383,  1327,   386,
     392,   884,   887,   881,   394,   397,   892
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2758
static const yytype_int16 yypact[] =
{
    5365,    88,   642,    46, -2758, -2758,  1125,  -202,  1475,   885,
    1226,   164,   283,   139,   215,  1928,   664,    41,  5570,    86,
    1681, -2758,    59,   168,   223,   611,   192,    44,  1199,   -55,
     143,   216,   508,   595,    -9,   406,  1015,  1189,    91,   774,
     520,   451,   508, -2758,   228,    21,  1079, -2758,   122,   580,
    1433, -2758,   512, -2758,    70,  4134,   306,   113,   606,   174,
    1010,   325,   637,   654,   115,   690,    72,   570, -2758, -2758,
   -2758,   671,  1201, -2758,   585,    36,   215,    -6,   590,   266,
   -2758,   711,  1201, -2758, -2758,  1201,  1201,   559,   678,  1201,
   -2758, -2758, -2758, -2758,  1201, -2758, -2758, -2758, -2758, -2758,
   -2758,    96,   662,   717,   729,   509, -2758,  1201,  1507,  1201,
    1201,   978,  1201, -2758, -2758, -2758,   566, -2758, -2758, -2758,
   -2758,  4854, -2758, -2758, -2758, -2758, -2758, -2758,  1201, -2758,
   -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
   -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
   -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
   -2758,  1442, -2758,  1201, -2758,   783, -2758, -2758,   215,   215,
     215,   215,   215,   215,   215,   215,   215,   215, -2758, -2758,
   -2758, -2758, -2758,   703, -2758,   758,  1700,   709,    23,   535,
     660,    65,  4478,   675,  4907,  4699,   809,  4854,  4170, -2758,
     621,   -72,   777,   842,   819,   237,   255,   117,   598,   910,
     405,   508,  1108, -2758,   652,   903, -2758,   716,   697,   354,
   -2758,   188, -2758,    94, -2758,   592,   908,   186, -2758, -2758,
    4979, -2758, -2758, -2758,   955,   967,  1038, -2758, -2758, -2758,
   -2758,   616, -2758, -2758, -2758, -2758,  1163, -2758, -2758,  4979,
    4257, -2758,  1041, -2758,    14,  4979,  1072, -2758,  1093,  4979,
    1083, -2758,   258, -2758,  1100,  1115,   575, -2758,  1201, -2758,
    1126,  1155,   -14, -2758,  1131, -2758, -2758, -2758, -2758,  1145,
   -2758, -2758,  1201, -2758, -2758,   431,  1136,   776,    58,  1158,
      80, -2758, -2758, -2758,  1153,  1161,   215,   215,  1201,  1201,
   -2758, -2758,  1166, -2758, -2758, -2758, -2758, -2758, -2758,  3028,
     -14, -2758,  1169,    28,  1201,  4979,  1201, -2758,  4979, -2758,
    1205, -2758, -2758, -2758, -2758, -2758,  1201,  1303,   215,  3422,
    1201,  1442,  1201, -2758,  1219, -2758,  3389, -2758, -2758,    38,
    1228,  1236,  1201, -2758,  1239, -2758, -2758,   -65,  1220,  4979,
    1245, -2758,  1328,  1201,  1156, -2758,   741,  1127,  1930,   483,
    1257, -2758, -2758, -2758, -2758, -2758, -2758, -2758,  1260, -2758,
     682,   208,   344,   448,    76,  1201,  1262,  1201,   119, -2758,
    1201,   988,  1271, -2758,  1201,  1201, -2758,    12,    31,    39,
    1273,  1442, -2758, -2758, -2758,  1016,  1201, -2758, -2758, -2758,
   -2758, -2758,  1201, -2758,  1280,  1286, -2758,  1201,  1129, -2758,
   -2758, -2758, -2758, -2758, -2758,  1201, -2758, -2758,  1201, -2758,
   -2758,   628,   628, -2758,  1283, -2758, -2758, -2758, -2758, -2758,
   -2758, -2758, -2758, -2758, -2758, -2758,  1090,  1201,  1201,  1289,
    1293,  1298, -2758, -2758,  1201,  1201,  1201,  1201,  1201,  1201,
    1307,  1201, -2758,  1312,  1201, -2758,  1322, -2758, -2758, -2758,
   -2758,  1230, -2758,  1324, -2758,  4979,  1344, -2758,  1201, -2758,
   -2758, -2758,  1201,  1348,  1362,  1362,  4979,  1201,  1201,  1201,
    1201,  1201,  1201, -2758,  1201,  4854,  1507,  1201,  1201, -2758,
   -2758, -2758, -2758, -2758, -2758, -2758,  1507,  1201, -2758, -2758,
   -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,  1376,
   -2758,  1099,     5, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
   -2758, -2758,   -62, -2758, -2758, -2758,  1224, -2758,   937,   400,
     400, -2758, -2758, -2758,  1396, -2758,  1403, -2758, -2758,   -91,
   -2758,  1232, -2758, -2758, -2758,  1235, -2758, -2758,  1442, -2758,
    1201,  1201, -2758,  4979,  4979,  1442, -2758, -2758,  1442, -2758,
   -2758, -2758, -2758,  1442, -2758, -2758,  4979,  1442,  1201, -2758,
   -2758,  4979, -2758,  1420,    83,  1218,    13, -2758, -2758,  1237,
    4979,    37, -2758, -2758, -2758, -2758, -2758, -2758,  1428,  1430,
   -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,  1437, -2758,
    1242, -2758,    19, -2758,  1201, -2758, -2758,  1456,  1456, -2758,
   -2758,  1456,  1456, -2758,  1005, -2758, -2758, -2758, -2758, -2758,
   -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,   592, -2758,
   -2758, -2758, -2758, -2758, -2758,  1265,  1291, -2758, -2758,  1415,
    1419,  1439, -2758, -2758,  1266, -2758,  1201,  1468,  1256,  3389,
   -2758,  1442, -2758, -2758,  1504, -2758, -2758, -2758, -2758, -2758,
   -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,  4979,
    4979,  4979,  4979, -2758, -2758, -2758, -2758, -2758, -2758,  1508,
   -2758, -2758,  1546,  1557,   215, -2758, -2758,  1558,  1559,  1363,
    1201, -2758,   -14, -2758,  1568, -2758, -2758, -2758, -2758, -2758,
    1201, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
     894,  1489,  1491,  1492, -2758,  1576, -2758,    15,  1497,   141,
     497,  5008,   867,  1579, -2758,  1582, -2758,  1583, -2758,    32,
   -2758,  1595,  1596, -2758,  1598, -2758, -2758, -2758,  1201, -2758,
    3389,  4818,  1686,   801,  1602,   491,  1509, -2758, -2758, -2758,
      99,   799,  1604,  1606,    84,  1201,   493,   825,   153,  4979,
     215,  2617,   963,    79,     6,   381,    26, -2758,  1593,  1600,
    1608, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
   -2758,  1201, -2758, -2758, -2758, -2758,  1201,  1201,  1201,  1201,
   -2758, -2758,  1201,  1442,  1201, -2758,  1201,  1507,  1201,  1613,
    1442, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,  1615,
     474,   571, -2758, -2758, -2758,  1616, -2758, -2758, -2758, -2758,
    1522, -2758,  1618,  1619,  1539,  1540,  1541,  1626, -2758,  1627,
   -2758,  1628,  1548,  1632,   875,   879,   546,   398,   586,   911,
     677,  1634,   742, -2758, -2758,  1636,  1637,  1639, -2758, -2758,
    1642, -2758, -2758, -2758, -2758,  1644, -2758, -2758,  1647, -2758,
   -2758,  1651, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
    1201,  1201, -2758,  1201,  1319,  1201,  1201, -2758,  3389,  1594,
    1654, -2758,  1385,  1667, -2758,  1393,  1668, -2758, -2758,   429,
    1201,  1201, -2758,  1669, -2758, -2758,  1673,  1382,  1201,  1674,
     148, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
   -2758, -2758, -2758, -2758, -2758,  1682,  1687,  1201,  1201,  1201,
    1201,  1201,  1688,  1201,  1685,  1201,  1691,   215,  1692,  1693,
    1442,  4979, -2758, -2758, -2758, -2758, -2758,  1442, -2758, -2758,
    1201,  1201,  1201,  4979,  1201,  1507,  1201, -2758,  1201, -2758,
   -2758, -2758, -2758, -2758,  1695,  1697, -2758, -2758, -2758, -2758,
   -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,   675,
   -2758,  1201, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
    4979,  1201,  1442,  1442,   429,   429,   429,  1442,  1507,  1201,
    1442, -2758, -2758, -2758,  1201, -2758,    19,  1506,  1699,  1694,
   -2758, -2758,  1442, -2758,  1547,  1549, -2758,  1701,  1703, -2758,
    1710,  1406,  1680,  1689, -2758,  1201, -2758, -2758, -2758, -2758,
   -2758,  4603,   532,   855, -2758, -2758, -2758,  1201,   515,   734,
   -2758,  1446, -2758,  2617,  1449,   530,  1423,   161, -2758, -2758,
    1201, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
   -2758,  1201,  1722, -2758, -2758, -2758, -2758,   429, -2758, -2758,
   -2758, -2758, -2758,  1728,  1735,  5048, -2758, -2758,  1736,  1737,
    1201, -2758, -2758, -2758,  1738,  1739,  1740,   900,   900,   -40,
    1742,  1743,  1744,  1745,  1745,  1745,  1455,  1462,  1746,  1752,
    1755,   120,   120,   -40,  1757,  1758,   -40,  1759,  1760,  1763,
    1764,  1763,  1764,  5571,  1765,  1766, -2758, -2758,  1763,  1764,
     487, -2758,  1769,  1770,  1774,  1775,   900,   -40,  1771,  1783,
   -2758,  1788, -2758, -2758,  1442,   753,  1464,  1545,  1553,  1556,
    1705,   863,  1564,  1809,    20,  1677,  1709,  1221,  1702,  1784,
    1572,  1573,  1721,  1825,  1610,   199,    67,   545,  1581,  4979,
    2617,  1792,   -38,  1584,  1612,  1838,    57, -2758, -2758,   226,
    1842,  1843, -2758, -2758, -2758,  1844,  1625,   109,  2617,  1629,
   -2758, -2758, -2758,   215,  1848,  1849,  1201, -2758, -2758, -2758,
   -2758, -2758, -2758, -2758, -2758, -2758,    10, -2758,  2571, -2758,
   -2758, -2758,  1201, -2758,  1201, -2758, -2758, -2758, -2758,  1201,
    1201,  1201,   491,  4979, -2758,  1850,  1484, -2758, -2758,  1201,
   -2758, -2758,  1201,  4979,  1201, -2758, -2758, -2758, -2758, -2758,
   -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
     215,  1201, -2758,  1201,   491,  1851,  1852, -2758, -2758, -2758,
   -2758,  1201,  1201, -2758,   215, -2758, -2758, -2758,   553,  1853,
    1854, -2758, -2758, -2758, -2758, -2758,  1201,  1201, -2758, -2758,
    1507,  1201,  1201, -2758, -2758, -2758, -2758,  1857,  1201, -2758,
    1201,  1748, -2758,  1201, -2758,  1201,  1749, -2758,  1860, -2758,
    1087,  1087,   775,   823,   828,  1087,  1861, -2758,   864, -2758,
     871,   882,   914,   930, -2758,  1862,  1863,   931,  1865, -2758,
    1867,  1873,  1875, -2758,   932,   941,  1876,  1877,  1880, -2758,
   -2758,  1881,  1882,  1884, -2758,  1087,  1087,  1087,  1201, -2758,
   -2758, -2758,  1201, -2758,  1201,   552,  4979, -2758,  1201, -2758,
    1442, -2758,  3389, -2758, -2758,  1885, -2758, -2758,  1886, -2758,
   -2758, -2758, -2758,  1878,  3422, -2758,  1201,  1887,  1201,  1201,
    1201,  1085, -2758,  1889,  1201,  1201,  1891,  1201,  1201,  1892,
    1201,  1894,  1201,    74,  1895,   215,   215, -2758,  1442,  1201,
    1899,  1900,  1901,  1442,  4979, -2758,  1201, -2758, -2758, -2758,
    1201,  1201,  1201,  1442,  4979,   429, -2758, -2758, -2758, -2758,
    1507,  1201,  1903,   429,  1201,   504, -2758,  1905, -2758, -2758,
     138,  3866,  1201, -2758,  1201,  1904,  1911,  1201, -2758, -2758,
   -2758,  1908,  1193,  4854,  1662,  1664,  1666,   126,  4979,  1670,
   -2758,   245,  1777,   131,  1671,  1672,   173, -2758, -2758,   469,
    1741,   723,   -43,  2617,  1082, -2758,  1921,  1603, -2758,   576,
   -2758, -2758, -2758, -2758,  2617,  1715, -2758, -2758, -2758, -2758,
   -2758,  1201, -2758,  1201, -2758, -2758,  1201,  1201, -2758,  1201,
   -2758,  1201, -2758, -2758, -2758, -2758,  1717,  1201, -2758,  1201,
      11, -2758, -2758, -2758, -2758,  1933,  1936, -2758,  1201,   900,
     900,   900, -2758, -2758, -2758, -2758, -2758, -2758,  1937,   900,
     900,   900,   959, -2758, -2758, -2758, -2758,   120,   900,   900,
     900, -2758, -2758,   900,   900,  1939,   900,   900,  1940,   120,
    1080, -2758,   518, -2758,  1086, -2758, -2758, -2758,  1941,  1944,
    1947, -2758,   524, -2758,   756, -2758, -2758,  1659,  1948,  1951,
    1952,   120,   120,   -40,  1954,  1955,   -40,  1956,  1958,  1959,
     900,   900, -2758,  1960,   900,   900, -2758,  1961, -2758, -2758,
   -2758, -2758, -2758, -2758,   215, -2758, -2758, -2758,  4854,  1210,
    1201,  1435,  1562,   446, -2758, -2758, -2758,   820, -2758, -2758,
   -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
    1962,  1201, -2758,   215,  1964,  1201,  4979,   215,  1587,  1713,
    1718,   176,   177,  1720,   219,  1650,  1652,  1969,  1973,  1976,
     863,  1977,  1978,  1979,  1658,  1660,  1496,  1981,  1201,  1544,
    1592, -2758, -2758,   215,  4979, -2758, -2758,  4979,  1201,    -5,
    1983,  1201,  1442,   215, -2758,  1984,  4979,  4979,  1201, -2758,
   -2758, -2758,   215,   215,  4979, -2758, -2758, -2758, -2758, -2758,
   -2758,  4979,  1201,   215, -2758, -2758, -2758,  1201, -2758, -2758,
    1985,  1201,  1750,   172,  1201,  1753,  1201,   252,  1201, -2758,
    1201,  1761,  1762,  1201,  1201,  1201,  1201,  1201,  1201,  1201,
    1201,    62,  1201,  1201,  1768, -2758,  1201,  1201,  1201,  1201,
   -2758,  4979,  1442,  1988,  1991,  1992,  1201,  1201,  1442, -2758,
    1201,  1201,  1201,  4979,   491, -2758,  1201,  1201, -2758, -2758,
   -2758,  1993, -2758, -2758, -2758, -2758, -2758, -2758,  2000,  1201,
    1201, -2758,  1201,  1201, -2758, -2758, -2758, -2758, -2758, -2758,
   -2758, -2758, -2758,  2002,  2004,  2007, -2758,  2009,  2010,  2008,
   -2758,  2011,  2012,  2014, -2758, -2758,  1087,  2019,  2020,  2022,
   -2758,  2024,  2025,  2023, -2758,  2026,  2027,  2029, -2758,  2030,
    2031,  2033, -2758,  2034,  2044,  2051, -2758,  2052,  2053,  2054,
    2055,  2057, -2758,  2058, -2758, -2758, -2758,  2059,  2062,  2064,
   -2758,  2065,  2066,  2068, -2758, -2758, -2758, -2758, -2758, -2758,
   -2758, -2758, -2758, -2758,  1201,  1201,  1201, -2758, -2758,  1201,
   -2758,  1442, -2758, -2758,  3422,  1201,  1442,  1201,  1201,  1201,
   -2758,  1201,  1201,  2069,  1201, -2758,  1201,  1201,  2071,  1201,
    1201,  2072,  1201,  2073,  1201, -2758, -2758,  2075,  4979, -2758,
   -2758, -2758,  1201, -2758, -2758, -2758, -2758,  1442, -2758,   896,
    1201,   896,   429,  1442,  4979,  1201,  1201,  2076, -2758, -2758,
   -2758,  1201, -2758, -2758, -2758, -2758, -2758,  4979, -2758,  4979,
    1201, -2758, -2758,    19,  2078,  2079,  2080,  2081,  2083,  4979,
    1442, -2758,  4979,  4979,  4979,  4854,  4979,  1442,  4979, -2758,
   -2758,  4979, -2758, -2758,  4854,  4979,  4979,  4979,  4854,  4979,
   -2758,  4979,  4979,  1201, -2758, -2758,  4979,  4979,  4979, -2758,
   -2758,  4979,  4979, -2758, -2758, -2758, -2758,  4979,  4979, -2758,
   -2758, -2758, -2758, -2758,  1201,  1201, -2758, -2758,  2087,  1201,
   -2758, -2758,  2088, -2758, -2758,  1201, -2758, -2758, -2758,   900,
   -2758, -2758, -2758,  2090,  2101,  2102, -2758, -2758,   -40,  2116,
    2118,  2121,   900, -2758, -2758, -2758, -2758, -2758,   120, -2758,
   -2758,  2123,   900,  2124,  2125,  2126,   120,   120,   -40,  2129,
    2131,  2134,  1772,  2135,  2136,  2137,   120,   120,   -40,  2132,
    2141,   -40,  2142,  2144,  2145,  2148,   120,   120,   -40,  2150,
    2152,  2154,  1133, -2758,  1137, -2758,  1282,  1787,  2157,  2158,
    2161,   120,   120,   -40,  2153,  2163,   -40,  2164,  1806,  2165,
    2166,  2168,   120,   120,   -40,  2170,  2171,   -40,  2172,   120,
   -2758, -2758, -2758, -2758, -2758,  2174, -2758, -2758,  2175,   120,
    2177,  2178, -2758, -2758,   900, -2758, -2758,  2179, -2758,  1442,
   -2758,  4979,  1201,  1201,  4979,  1201,  2180,  1464, -2758, -2758,
   -2758, -2758, -2758, -2758,  2182,  4979,   215,  2187,  4979,  1442,
   -2758,  2189,  1464,  1201,  1201,  1201,  1201,  1201,  1201,  1201,
    1201,  1201,  2192,  2195, -2758, -2758, -2758,  2196, -2758, -2758,
   -2758,  2198,  2199, -2758, -2758, -2758,  1201,  4979,  1201,  2202,
    1464,   215,  1442,  1442, -2758, -2758, -2758, -2758, -2758, -2758,
   -2758, -2758, -2758, -2758,  1201,  1507, -2758, -2758,  1442,  1442,
    1201, -2758, -2758,  1442,  1442, -2758, -2758, -2758, -2758,  1201,
    1201,  1201,  1201,  1201,  1201,  1201,  1201,  1201,  1201,  2342,
   -2758,  1201,  1201,  1201,  1201,  1201,  1201,  1201,  1201,  1201,
    1201,  1201,  3776,  2205,  1201, -2758,  1201,  1201,  1201,  2200,
    2208, -2758, -2758,  1442,   429, -2758,  2209,  2212, -2758, -2758,
    1507,  1201, -2758,  2216,  1442,  4979, -2758, -2758, -2758,  2218,
   -2758, -2758, -2758, -2758,  1087,  1087,  1087,  1087,  1087,  1087,
    1087,  1087,  1087, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
   -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
   -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
   -2758,  1464,  1201, -2758,  1201, -2758,  1201,  1442,  1201, -2758,
    1507,  1201, -2758,  1201, -2758,  2117,  2219,  2221,  1201,  1201,
   -2758,  1201,  1201,  2222,  1201,  2226,  1201,  2227,  1442,  4979,
   -2758, -2758,  1201, -2758,  1201, -2758,   429,   138,  1201,  2229,
   -2758,  1201, -2758, -2758,  4854, -2758,  2230,  2231,  2232,  2233,
    2234,  1442, -2758,   138,   138,   138,  1442, -2758,   138,   429,
     138,   138,  1442, -2758,   138,   138,   138,  1442, -2758,   138,
     138,  1442,  4979,   138,  1442,   138,   138,  1442,   138,  1442,
   -2758, -2758,  2238,  4854,  2239,  1201, -2758, -2758, -2758, -2758,
    2242, -2758, -2758, -2758, -2758,   900,   120, -2758, -2758, -2758,
   -2758, -2758, -2758,  2243, -2758, -2758,   120,   120, -2758, -2758,
   -2758, -2758, -2758,  2244, -2758, -2758,  2245,   120, -2758, -2758,
   -2758, -2758, -2758,  2247, -2758, -2758,   120,  2248,  2249,  2250,
     120,   120,   -40,  2252,  2254,  2255,  2256,  2257,  2258,   120,
     120,   -40,  2260,  2261,  2262,  2263,  2264,  2266,   120,   120,
     -40,  2269,  2271,  2272,   120,   900,   900,   900,   900,   900,
    2274,   900,   900,  2275,   120,   120,   900,   900,   900,   900,
     900,  2276,   900,   900,  2277,   120, -2758,   120,  2278, -2758,
    2279,  2280, -2758,  3389, -2758,   138,  2281,  4979,   138,  1201,
    4979,  2282, -2758,   138, -2758, -2758,   138, -2758,  4979,  2283,
    1201,  1201,  1201,  1201,  1201,  1201,  1201,  1201,  1201,  1201,
    1201, -2758, -2758, -2758,  4979,   138,  1201,  4979,  2284, -2758,
    1507,  1507,  4979,  1507,  1507,  4979,  4979,  1507,  1507,  1201,
    1201,  1201,  1201,  1201,  1201,  1464,  1201,  1201,  1201,  1776,
    1798,  1813,  1896,  1906,  1919,  1922,  2342, -2758,  1923, -2758,
   -2758,  1464,  1201,  1201,  1201,  1201,  1464,  1201,  1201,  1201,
    1201,  1201,  1201,  1442,  1201,  1712,  1464,  1201,  1201, -2758,
   -2758,   429,   215,  4979,  4979, -2758, -2758, -2758,   429,  1442,
    2290, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
   -2758,  1201, -2758, -2758,  1507,  1201, -2758, -2758, -2758,  1152,
    2292,  2293,  2295,  2297,  1201,  1201,  2299,  1201, -2758,  2300,
     896, -2758,   138, -2758, -2758, -2758, -2758,  2301, -2758, -2758,
    1442,  2303,  2306,  2304,  2307,  4979,  2308, -2758, -2758, -2758,
   -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
   -2758, -2758, -2758,   429,   138, -2758,   429, -2758, -2758,   429,
   -2758,   429,  2309,  1442,  2311, -2758,  1201, -2758, -2758,   900,
     120, -2758, -2758,   120,  2312, -2758,   120, -2758,   900,   900,
     900,   900,   900,  2313,   900,   900,   120,   900,   900,   900,
     900,   900,  2314,   900,   900,   120,   900,   900,   900,   900,
     900,  2318,   900,   900,   120,   900, -2758, -2758, -2758, -2758,
   -2758,   120, -2758, -2758,  2319,   900,   900, -2758, -2758, -2758,
   -2758, -2758,   120, -2758, -2758,  2320,   900, -2758,   120, -2758,
   -2758,  1442, -2758,  4979,   138, -2758,  2321,  1442,  1201, -2758,
   -2758,  1442,  1201, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
   -2758, -2758,  1201,  1201,   138, -2758,  2322,  1442,  1201,  1507,
   -2758,   138,  1201,  1507,   138,   138,  4979, -2758,  1201,  2323,
    2323,  1201,  1201,  2323,  1464,  2323, -2758,  4979,   863,  2324,
    2327,  2328,  2329,  2330,  2332, -2758,   215,  1464,  2323,  2323,
    1201,  1201,  1464,  1201,  1201,  1201,  1201,  1201, -2758,  1507,
    1201,  2333, -2758, -2758,  1201,  2323,   215,    60,  1442,  1442,
     215,   429,  2335, -2758, -2758, -2758,  2336,  1201, -2758,  2337,
    2339,  2340,  2341,  2343, -2758,  2348,  2349,  1201, -2758, -2758,
    2352,   106,  4979, -2758,  2353,   111,  4979, -2758, -2758, -2758,
   -2758, -2758, -2758,  2356,   106,  1201, -2758, -2758, -2758,   120,
   -2758, -2758, -2758, -2758, -2758, -2758,   120, -2758, -2758,   900,
   -2758, -2758, -2758, -2758, -2758,   120, -2758, -2758,   900, -2758,
   -2758, -2758, -2758, -2758,   120, -2758, -2758,   900, -2758,   900,
     120, -2758, -2758,   900,   120, -2758, -2758,  1201,   138, -2758,
    4979,  4979,  1201,  4979,  1201, -2758, -2758, -2758,  4979,  4979,
    1201, -2758, -2758,  4979, -2758, -2758, -2758,   138,  2357, -2758,
   -2758, -2758,  1464,  1201, -2758,  2359, -2758, -2758,  1442,  2360,
   -2758,  2362, -2758, -2758, -2758, -2758, -2758,  2363, -2758, -2758,
    1464,  1201,  2364, -2758, -2758,  1201,  4979, -2758, -2758, -2758,
   -2758, -2758, -2758, -2758,    60,  1943,  2617, -2758, -2758, -2758,
     215,  2365,  2366,  2367, -2758, -2758, -2758,  2369,  2373,  2374,
   -2758,    49,   106, -2758, -2758, -2758, -2758,  2375,  4979, -2758,
   -2758, -2758, -2758, -2758,   106, -2758,  2376, -2758,   900, -2758,
     900, -2758,   900, -2758, -2758,   900, -2758,   900,  3389, -2758,
     138,   138,  1201,   138,  2377,   138,   138,  1201,   138,  1201,
   -2758, -2758, -2758, -2758,  2378, -2758,  1201, -2758, -2758,  2379,
   -2758,  1201, -2758, -2758, -2758,  2381,  1201, -2758, -2758, -2758,
    1442, -2758, -2758, -2758,  1943, -2758,  2005,  1967,  2617, -2758,
   -2758, -2758,  2397,  2399, -2758, -2758, -2758, -2758, -2758, -2758,
     971,   971, -2758, -2758,  1442, -2758, -2758, -2758, -2758, -2758,
   -2758, -2758,   138, -2758, -2758,  2382, -2758,  4854, -2758, -2758,
    2401, -2758,  1464, -2758, -2758,  1464,  1201, -2758, -2758,  1201,
   -2758,  1464,  1201, -2758,  4979, -2758,  2005, -2758,   215, -2758,
    2407,  2408,  1201,  1201,  1201,  1201,   111,  2417,  4854,  1442,
   -2758,  4854, -2758, -2758,  1201,  2402, -2758,  1201,   138, -2758,
   -2758, -2758,  2421,  2422,  1201,  2423,  1201, -2758, -2758,  1442,
   -2758, -2758,  1442, -2758, -2758,  2425, -2758, -2758,  2426,  2427,
   -2758, -2758,  2428, -2758,  2429, -2758, -2758,  1464, -2758,  1464,
   -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2758, -2758,    -3, -2758,   687,  -984, -1502, -1108,  1565, -2758,
    1078,  -463,  1679,   -52,    18, -2758,  -296, -1824,  1801,  1372,
    -821, -1142, -1037,  1069,  1675, -2758, -1172, -2758,  -897, -1279,
   -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
   -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
   -2758, -2758, -2758, -2758,  -513,  -521, -2758, -2758, -2758, -2758,
   -2758, -2758, -2758, -2600, -2758, -2758, -2758, -2758, -2758, -2758,
   -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
   -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
   -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
   -2758,   523, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
   -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
   -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,   470,
   -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
     -51,   -23, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
   -1596, -2758, -2758, -2758, -2758, -2758,  -746, -2758, -2758, -2758,
   -2758, -2758, -2758,    89, -2758, -2758, -2758, -2758,  -104,  -760,
    -281,  -484, -2758, -2758, -2758, -2758, -2758,  -562,  -547, -2758,
   -2758, -2757, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
   -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
   -2758, -2758, -2758, -2758, -2758, -2758, -2758,  1528, -2758, -2758,
   -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
   -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758, -2758,
   -2758, -2758, -2758, -2758, -2758, -2758, -2758
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1341
static const yytype_int16 yytable[] =
{
      72,  1230,  1722,   391,  2057,  2222,  1735,  2224,   112,   968,
    1203,  1206,  1395,   181,   772,  1649,   878,   997,  1558,   676,
    1087,  2075,  1238,   947,    69,    70,    69,    70,  1088,  1089,
    1910,  1247,   774,   950,   330,   882,  1781,  1782,  1783,    69,
      70,  1003,   354,   885,  2076,  1114,  1583,  2077,   271,    69,
      70,   385,    69,    70,   396,   332,  1505,   402,  2078,  1508,
   -1129,   408,  1631,   114,   415,    69,    70,  2122,   418,   420,
      69,    70,   430,    69,    70,   437,   441,  1090,   702,   444,
    1543,  2079,   445,   446,  1234,   731,   454,   993,   864,   272,
     810,   455,   273,   801,  1115,   114,   334,  1625,    81,  2080,
    1198,   456,  1615,   411,   468,   472,   477,   478,   482,   484,
     954,   274,    69,    70,   973,  1189,    69,    70,    69,    70,
    1815,   598,    69,    70,  2855,   488,   252,  1248,   275,   802,
     638,   347,  1486,  1239,  1249,  1886,  1501,  2843,   433,   487,
     117,   639,  2849,   957,  1639,   276,  1865,   114,   294,  2957,
     277,  1874,  1350,   725,   584,    59,    69,    70,  1012,  1351,
     497,  1843,  1844,  1387,  1388,  1389,   703,    69,    70,   640,
     230,   165,   726,   362,  1004,    69,    70,  1465,   114,   399,
     974,   434,   119,  1240,   803,   529,   998,   231,  1208,   292,
     550,   183,  1209,  1878,  1584,  1887,  2045,  2047,   278,  2979,
    1626,   648,   958,   107,   955,  1616,   599,   270,   633,   811,
     295,   551,   114,   559,   119,   564,   568,  1091,  1092,   114,
     279,   302,   522,   363,   108,  1613,   604,   352,   523,  1099,
     254,  1241,   296,   364,  1116,   426,  1470,  1845,   775,  2050,
    1487,   600,  2922,   646,   536,   776,   777,  1640,  2917,   641,
     585,   879,  1633,   537,  2925,    69,    70,   727,   704,  1911,
    1627,  1466,   683,  1888,   365,   690,   119,  1210,   524,    69,
      70,  1869,  1585,  1458,   122,   855,   705,   865,   109,   709,
    1013,   778,   123,   124,   800,   258,  1502,   114,   297,   318,
     348,  1211,   642,  1093,   525,   738,   739,   119,   804,   590,
     614,   115,  2844,  1094,  1095,  1100,   122,  2850,  1096,  1199,
    1117,   781,   125,   783,   123,   124,  1242,   594,  1586,  1632,
    1118,   880,   116,   786,   789,   280,   792,   796,   634,   798,
     353,   119,  1650,   883,  1263,   677,   457,  1097,   119,   808,
     117,   886,   999,   526,  1250,   438,  1005,   794,   114,   818,
     820,   281,   282,  1235,  1119,    71,   427,   870,   122,  1212,
   -1129,  1816,   643,   283,  2081,   732,   123,   124,   412,  2918,
     110,   127,   867,  1190,   869,   871,  1617,   873,  1866,   384,
    1236,   876,   877,  1875,  2123,   114,   118,   527,   528,   122,
    1623,   779,   891,   893,  1200,   649,  1071,   123,   124,   894,
     428,   429,  2845,   127,   897,   899,   119,  2851,  1643,   335,
    2101,   858,   900,   527,  2919,   901,   629,   644,  1641,  1870,
     336,   157,   395,   122,   407,  1879,   158,   159,  2046,  2048,
     122,   123,   124,   366,   911,   912,   710,  1614,   123,   124,
     635,   916,   917,   918,   919,   920,   921,   120,   923,   439,
     607,   925,   114,   157,  2027,   127,  1681,  2163,   158,   159,
    1295,   298,  1213,   684,  1634,   932,   255,   119,   111,   933,
     636,  2051,   608,   320,   938,   939,   940,   941,   942,   943,
    2042,   944,  1375,   472,   948,   949,   127,   609,  1693,   121,
    2106,   256,  1527,   472,   951,  1880,  2005,  1871,   122,  2008,
    1528,  1529,  2070,   946,   119,   157,   123,   124,  1840,   299,
     158,   159,   125,  1268,   465,   861,   380,   126,    69,    70,
     127,   259,  1296,  1952,   344,  1391,   349,   127,  1339,  1977,
     440,  1953,  1954,    69,    70,   591,   157,  1978,  1979,   466,
     346,   158,   159,  1872,   965,   845,   260,   980,   981,  1530,
     393,   350, -1340,   595,  2028,  1179,  1787,  1179,  1699,   122,
     592,   117,  1297,   447,  1834,   989,   304,   123,   124,  1700,
     157,   119,  1838,    69,    70,   158,   159,   157,   596,   688,
    1955,   610,   158,   159,   369,  1101,  1980,   966,  1269,   421,
     711,   712,   994,    69,    70,   127,   122,  1056,  1180,  1441,
    1180,  1015,  1896,   602,   123,   124,   398,   846,   831,   404,
    1273,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     310,   381,   405,  1051,   305,   157,  1040,  1881,  1300,   117,
     158,   159,   630,    60,  2029,   117,   127,   902,   406,   658,
     311,  1102,   312,   122,   603,   570,  1442,    69,    70,  1105,
     833,   123,   124,  1889,    69,    70,  2707,   631,    69,    70,
    1270,   571,   453,  1244,  1899,  1274,  1298,  1070,  1124,  1531,
    1532,   713,   459,   127,  1443,   410,    61,  1073,   414,   689,
     262,   167,   179,   572,   659,  1340,   157,  1882,  2030,   253,
    1301,   158,   159,   611,    62,   851,   443,   300,   448,   449,
    1956,  1957,   461,   573,   903,   337,  1981,  1982,   612,   180,
     263,   382,   117,   125,   463,  1123,  1452,    69,    70,  1306,
    1181,   574,  1181,   157,    63,   575,   400,   306,   158,   159,
    1455,  1460,  1201,  1271,  1897,  1214,  1182,  1183,  1182,  1183,
     127,  1988,   307,   432,    64,  1533,   450,  1202,    65,  1989,
    1990,   847,   485,   576,   577,  1534,  1535,  1275,  1254,  1444,
    1536,   717,    66,  1255,  1256,  1257,  1258,   498,   313,  1259,
     422,  1261,   852,  1262,   472,  1264,  1958,  1705,   904,   417,
     436,  1307,  1983,   822,  1311,  1172,  1959,  1960,   264,  1537,
     157,  1961,  1984,  1985,  1898,   158,   159,  1986,  1991,   451,
     660,   125,  1619,   509,   265,   510,  1330,   125,   308,  1620,
    1173,   520,  1445,   578,   841,   532,  1548,  1723,  1192,   534,
    1962,   561,   423,   579,   587,   339,  1987,   588,   314,   424,
    1276,  1184,  1185,  1184,  1185,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   823,  1312,  1322,  1323,  2235,
    1324,  1326,  1328,  1329,  1302,  2471,  2472,  2473,  2474,  2475,
    2476,  2477,  2478,  2479,  1446,  1727,   266,  1342,  1343,  1179,
    1731,  2280,   905,   315,  1347,  1348,   718,   906,   853,  1724,
     824,   825,  1563,   316,   125,   580,   581,  1074,  1075,   589,
    1549,  2293,    91,  1193,  1354,  1355,  1356,  1357,  1358,  2381,
    1360,  2303,  1362,    91,  2306,   606,  1737,  1835,  2031,   267,
    1564,  2313,  1180,  1741,  2389,   719,   720,  1370,  1371,  1372,
     268,  1374,   472,  1376,  1745,  1377,  2350,  1728,  2145,  2353,
     623,    67,  1732,   340,  1205,  1108,  1076,  2361,  1992,  1993,
    2364,   626,  2408,  1290,  1565,  1308,  1380,  1292,  1382,  1174,
     625,  1566,  1923,  1924,    69,    70,  1749,  1567,  1384,   582,
     721,    69,    70,   736,   737,   472,  1392,  1381,  1738,  1550,
    1551,  1394,  1753,  1759,  1767,  1742,   628,  1568,   647,  1304,
    1884,   826,  1231,  1771,  1552,  1194,  1746,  1885,  1407,  1021,
    1022,  2225,  1411,    69,    70,   791,   961,   479,  1569,    69,
      70,  1925,   653,  1447,  1451,  1453,  1456,  1175,  2032,   827,
    1313,  1109,  1461,   341,  1994,  1570,   722,  1467,  1750,  1291,
     654,    92,   342,  1293,  1995,  1996,   675,  1553,  1468,  1997,
    1516,  1520,    92,  1176,  1754,  1760,  1768,  1525,   856,   859,
     862,   723,  2799,  1725,  1482,  1772,  1023,  1478,   656,    93,
     401,  1571,  1024,    94,  1181,  1305,   679,  1232,  1998,  1517,
      93,  1448,  2033,  2480,  2221,  2506,  1526,   682,    69,    70,
    1182,  1183,   480,  1943,  1944,  1483,  1077,  1078,   680,  1963,
    1964,  2518,  2519,  2520,   356,   686,  2522,  1449,  2524,  2525,
    1572,  1729,  2527,  2528,  2529,   965,  1733,  2531,  2532,   687,
     962,  2535,  1025,  2537,  2538,  1573,  2540,    95,  1716,  1717,
     691,  1018,    69,    70,  1019,  1020,   707,  1574,    95,  1026,
     898,   715,  1945,  1618,   890,  1803,  2317,  2318,  1965,   708,
    2326,  2327,  1739,   615,  1027,    69,    70,   734,   966,  1743,
    1028,  1926,  1927,   729,  1642,  1575,   735,  1029,    96,  1233,
    1747,   740,  1079,  1648,   773,   616,    97,    98,  1576,    96,
    1577,  1578,  1080,  1081,   481,  1184,  1185,    97,    98,  1676,
     617,  1677,    69,    70,   357,  2319,  1678,  1679,  1680,  2328,
     692,   963,  1751,   693,    69,    70,  1686,   115,   358,  1687,
     785,  1689,  2696,    69,    70,  2021,  1082,  1890,  1755,  1761,
    1769,  1579,   694,   799,   285,   813,  1030,   326,  1691,  1773,
    1692,   321,   806,  2612,   927,   928,  2615,  1928,  1696,  1697,
     807,  2619,  1589,   809,  2620,  1031,   117,  1929,  1930,   815,
    1032,   829,  1033,  1703,  1704,   821,   695,   472,  1706,  1707,
    1891,   696,   849,  2635,   850,  1709,   868,  1710,  1718,  1719,
    1712,  1590,  1713,   874,  1591,   875,  1854,   888,  1034,  1035,
    1791,  1931,  1946,  1947,   895,  2563,  1036,   909,  1966,  1967,
    2883,   896,   118,   913,  2572,  2335,  2336,   914,  1720,   359,
     910,   618,   915,  2581,  1592,  1037,    69,    70,  2894,   697,
     101,   922,   360,  2462,   286,  1784,   924,  2654,   662,  1785,
    1892,  1786,    69,  1325,    74,  1789,   926,   102,   287,   929,
      75,    69,    70,  2667,  1593,  2320,  2321,  1594,  2672,  2329,
    2330,  1795,   787,  1798,  2337,  1800,  1801,  1802,  1804,   931,
    1855,  1806,  1807,   120,  1809,  1810,   469,  1812,  1948,  1814,
    2708,   619,  1797,  1038,  1968,   288,  1822,   816,  1949,  1950,
      76,  1066,   471,  1828,  1969,  1970,   322,  1829,  1830,  1831,
    1893,   952,   323,   953,   324,    69,    70,   472,  1836,  1333,
    1334,  1839,  2718,  1346,   663,   327,    77,  1336,  1337,  1849,
     969,  1850,  1951,   960,  1852,  2505,   620,   971,  1971,    69,
    1406,  2322,   103,  1841,   978,  2331,   621,   788,   125,   289,
     976,  2323,  2324,   126,   991,  2332,  2333,   996,  2523,  1856,
    1857,  1861,   290,  1007,   328,  1008,   698,   664,    69,    70,
    2024,  1010,   817,  2973,  1858,    78,  1001,  1217,  1901,  2976,
    1902,  1011,  1245,  1903,  1904,  2325,  1905,   104,  1906,  2334,
    1016,  1595,   699,   700,  1908,  1041,  1909,    69,    70,   370,
    1555,  1556,  2769,  1052,   701,  1915,   489,   665,  2791,    82,
     371,  2794,  1043,  2796,  2338,  2339,  1045,  1859,  1684,  1685,
      79,  1042,  2777,   105,  1596,  1054,  2808,  2809,   329,  2782,
    2063,  2064,  2785,  2786,  1049,  3013,  1047,  3014,   372,  1058,
      69,    70,  1063,  2823,    83,   469,   470,   471,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,  2795,    69,    70,  2067,
    1064,   490,   935,   936,  1494,  1495,  2022,  2023,  2025,  2807,
    2340,  1065,  1067,  1068,  2812,    69,    70,  2026,  1555,  1556,
    2341,  2342,  1069,  1072,   491,   492,  2020,  1083,  2035,  1084,
    1085,  1086,  2038,   493,  1110,  1098,  1112,  1113,   373,    84,
      69,    70,  2041,  1555,  1556,    69,    70,  2069,  1555,  1556,
    1120,  1121,  1122,   494,  2343,  2066,  2068,  1178,  1196,  1251,
    1187,  1197,  1253,   495,  1364,  2074,  1252,  1265,  2084,  1267,
    1278,  1279,  2413,  1280,  1281,  2090,  2869,  1282,  1283,  1284,
    1285,   374,  1286,  1287,    85,    86,  1288,  1289,  1310,  2095,
    2686,  1315,  1316,  1317,  2097,  2879,  1318,  2690,  2099,  1319,
    2102,  2103,  1320,  2105,  2107,  2108,  1321,  2111,  1332,  1331,
    2114,  2115,  2116,  2117,  2118,  2119,  2120,  2121,  2124,  2126,
    2127,  1335,  1338,  2129,  2130,  2131,  2132,  2465,  1345,  1397,
    1344,    87,    88,  2138,  2139,  1349,  1352,  2141,  2142,  2143,
    1361,  1353,  1359,  2146,  2147,  1363,  1365,  1366,  1399,   233,
    1378,   375,  1379,   797,  1398,  1403,  2150,  2151,  1404,  2152,
    2153,  1401,  2717,  1402,  1405,  2719,   331,  1409,  2720,  1457,
    2721,   234,  1459,  1597,   235,  1463,  1410,  1469,  2933,  2934,
     376,  2936,  1471,  2938,  2939,    89,  2941,  2486,   377,  1472,
    1475,  1496,  1476,  1479,  1480,  1481,  1489,  1490,  1497,  1491,
    1492,  1498,  1598,  1161,   511,  1599,   378,  1499,  1600,   236,
    1500,  1506,  1507,   889,  1509,  1510,   237,  1162,  1512,  1514,
    1522,  1524,   512,  1538,  1539,  1544,  1163,   238,   239,  1540,
    1541,  2191,  2192,  2193,   240,  1601,  2194,  1164,  1545,   513,
    2967,  2196,  2199,  1546,  2201,  2202,  2203,  1559,  2204,  2205,
     486,  2207,   514,  2208,  2209,  1560,  2211,  2212,  1561,  2214,
     241,  2216,  2198,  1562,  1582,  1602,  1581,  1588,  1603,  2219,
    1165,  1587,   515,  1607,  1608,  1609,   516,  2223,   242,  1610,
    1611,  1624,  2228,  2229,  2972,  1612,  2999,  1629,  2231,  1621,
     517,  1166,  1628,  1630,   243,   244,  1635,  2234,  1636,  1637,
    1638,   245,  1646,  1647,  1644,  1683,  1694,  1695,  1701,  1702,
    1645,  1708,  1711,  1714,  1715,  1895,  1736,  1757,  1758,  1763,
    2830,   548,  1764,   555,   558,   246,   563,   567,  1765,  1766,
    2262,  1775,  1776,  2247,  1777,   518,  1778,  1779,  1780,  1794,
    1792,  1793,  2253,  1805,  1167,  1808,  2258,  1811,  1799,  1813,
    1818,  2270,  2271,  1823,  1824,  1825,  2273,  1837,  1851,   651,
    1842,  -470,  2275,  1853,  1862,   247,  1863,  1690,  1864,  1883,
     979,  1873,  1868,  1876,  1877,  1894,  1907,   984,   667,   673,
     985,  1698,   114,  1168,   678,   986,  1900,  1913,   681,   988,
    1914,  1919,  1604,  1938,  1941,  1999,  1972,  2639,  2640,  1974,
    2642,  2643,  1976,  2000,  2646,  2647,  2001,  2002,  2006,  2007,
    1169,  2009,  2010,  2011,  2014,  2043,  2017,  2034,   248,  2037,
    2044,   168,  2049,  2054,   169,  1605,  2052,  2055,  2053,   249,
    2056,  2058,  2059,  2060,  2061,  2065,  2062,  2083,  2100,  2087,
    2098,  2104,   831,  2135,   782,  2136,  2137,   784,  2148,  2112,
    2113,  1170,  1606,  1171,  2149,   170,  2128,  2154,   793,  2155,
     250,  2156,  2159,   171,  2157,  2158,  2160,  2161,  2162,  2376,
    2377,  2694,  2379,  1057,  2164,  2165,  2166,  2169,   814,  2167,
    2168,  2170,  2171,  2172,  2681,  2173,  2174,  2175,   934,  2176,
    2390,  2391,  2392,  2393,  2394,  2395,  2396,  2397,  2398,  2177,
     832,   119,  1819,  1820,   833,  2178,  2179,  2180,  2297,  2181,
    2182,  2183,  2184,  2404,  2185,  2406,  2907,  2186,  2187,  2987,
    2188,  2189,  2190,  2344,  2206,  2210,   172,  2213,  2215,  2217,
    2230,  2412,   472,  2236,  2237,  2238,  2239,  2416,  2240,   834,
     835,  2272,  2355,  2274,   836,  2277,  2419,  2420,  2421,  2422,
    2423,  2424,  2425,  2426,  2427,  2428,  2278,  2279,  2441,  2442,
    2443,  2444,  2445,  2446,  2447,  2448,  2449,  2450,  2451,  2452,
    2281,  2455,  2282,  2456,  2457,  2458,  2283,  2286,  2489,  2288,
    2289,  2290,   173,  2294,   837,  2295,  2304,   472,  2466,  2296,
    2298,  2299,  2300,   122,   930,  2305,  2658,  2307,  2907,  2308,
    2309,   123,   124,  2310,  2314,   937,  2315,  2351,   174,  2316,
     175,  1504,  2345,  2346,   945,  1260,  2347,  2352,  2659,  2354,
    2356,  2357,  1266,  2358,  2362,  2363,  2781,  2365,  2367,  2368,
    2784,  2370,  2371,  2660,  2373,  2380,   838,  2382,   176,  2481,
     839,  2482,  2385,  2483,  2388,  2485,  2399,   472,  2487,  2400,
    2488,  2401,  2402,  2403,  2459,  2492,  2493,  2407,  2494,  2495,
    2454,  2497,  2460,  2499,  2463,   840,  2818,  2464,   841,  2503,
    2467,  2504,  2470,   908,  2490,  2507,  2491,  2496,  2509,   842,
    2498,  2500,   982,   983,  2508,  2512,  2513,  2514,  2515,  2516,
     127,  2018,  2542, -1147,  2545,   987,  2547,  2550,  2553,  2554,
     990,  2556,  2511,  2558,  2559,  2560,  2564,   177,  2565,  1002,
    2566,  2567,  2568,  2569,  2573,  2574,  2661,  2575,  2576,  2577,
    2036,  2578,  2546,  2582,  2040,  2583,  2662,  2584,  2591,  2594,
    2602,  2605,  2608,  2609,  2610,  2613,  2618,  2622,  2638,  2663,
     157,  2544,  2664,  2666,  2692,   158,   159,  2698,  2699,  2700,
    2071,  2701,  1367,  2704,  2706,  2433,  2709,  2711,  2713,  1369,
    2086,  2712,  2714,  2716,  2722,  2724,  2729,  2736,  2745,  2091,
    2092,  2611,  2754,  2760,  2764,  2770,  2778,  2789,  2921,  2800,
    2096,  2801,  2665,  2802,  2803,  2804,  2805,  2958,  2820,  2831,
    2904,  2832,  2834,  2835,  2836,  2837,  2959,  2838,  1059,  1060,
    1061,  1062,  2839,  2840,  1385,  1386,  2842,  2955,  2848,  1390,
    2854,  2880,  1393,  2886,  1294,  2889,  2890,  2891,  2896,  2911,
       0,  2912,  2913,  2914,  1400,  2797,  2616,  2915,  2916,  2923,
    2926,  2937,  2945,     0,  2948,  2951,  2968,  2623,  2624,  2625,
    2626,  2627,  2628,  2629,  2630,  2631,  2632,  2633,  2429,  2963,
    2965,  2821,  2960,  2636,  2961,  2971,  2996,   472,   472,  2430,
     472,   472,  2981,  2982,   472,   472,  2648,  2649,  2650,  2651,
    2652,  2653,  2988,  2655,  2656,  2657,  3000,  3001,  3003,  3007,
    3009,     0,  3010,  3011,  3012,  1218,  2431,     0,  1216,  2668,
    2669,  2670,  2671,  1219,  2673,  2674,  2675,  2676,  2677,  2678,
    1220,  2680,     0,     0,  2684,  2685,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1221,     0,     0,
       0,     0,     0,  1222,     0,     0,  2432,     0,  2693,     0,
       0,   472,  2695,     0,     0,     0,  2697,     0,     0,     0,
       0,  2702,  2703,     0,  2705,     0,  1547,  1223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1224,     0,  2881,
    2882,     0,     0,  2885,     0,  2887,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2892,  2893,     0,
       0,     0,  2897,  2898,     0,     0,  2901,     0,     0,     0,
       0,  2902,  2903,  2725,     0,     0,     0,     0,     0,     0,
    1225,     0,     0,     0,     0,     0,     0,     0,  1226,     0,
       0,     0,     0,     0,     0,     0,  1932,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1942,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1651,     0,     0,     0,     0,  1652,     0,  2943,
    2003,  2004,  2944,     0,  1227,     0,     0,  2947,     0,     0,
    1368,     0,     0,  2950,     0,  2772,  1228,     0,  2953,  2774,
    1653,  1654,  1373,  1655,  1656,     0,     0,     0,     0,  2775,
    2776,     0,  1229,     0,  1657,  2780,   472,     0,     0,  2783,
     472,     0,  2433,     0,  2434,  2788,  1658,  1659,  2792,  2793,
       0,     0,     0,     0,  1660,     0,     0,  1661,     0,  1383,
       0,     0,     0,     0,     0,     0,     0,  2810,  2811,     0,
    2813,  2814,  2815,  2816,  2817,  1662,   472,  2819,     0,     0,
       0,  2822,     0,  1663,  1664,     0,     0,  1665,     0,     0,
       0,     0,  2994,     0,  2833,  2997,     0,     0,     0,     0,
    2435,     0,  1790,     0,  2841,     0,     0,     0,     0,     0,
    1218,     0,     0,     0,     0,  3008,     0,     0,  1219,     0,
       0,     0,  2856,  2384,     0,  1220,     0,     0,     0,  3015,
       0,     0,  3016,  3017,     0,     0,     0,     0,     0,     0,
    1821,     0,  1221,     0,  1474,  1826,     0,     0,  1222,     0,
       0,     0,     0,  1485,  1666,  1832,     0,     0,  2409,     0,
       0,     0,     0,     0,  2868,     0,     0,     0,     0,  2872,
       0,  2874,  1223,     0,     0,     0,     0,  2877,     0,     0,
       0,     0,  1224,     0,     0,     0,     0,     0,     0,     0,
    2884,  1542,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2895,     0,
       0,  1667,  2899,     0,     0,     0,  2932,  1668,     0,     0,
       0,     0,     0,     0,     0,  1225,     0,     0,  1622,     0,
       0,     0,     0,  1226,  1669,     0,     0,     0,  2920,     0,
       0,     0,     0,     0,  1670,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2935,
       0,     0,  1671,  1672,  2940,     0,  2942,     0,     0,  1227,
       0,     0,  1682,  2946,     0,     0,     0,     0,  2949,     0,
       0,  1228,  1688,  2952,     0,  1673,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1229,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2962,  2964,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1674,     0,     0,  2974,     0,     0,  2975,     0,     0,  2977,
       0,     0,     0,     0,     0,  2970,     0,     0,     0,  2983,
    2984,  2985,  2986,     0,     0,     0,     0,     0,     0,     0,
       0,  2995,     0,     0,  2998,     0,     0,     0,     0,     0,
       0,  3002,     0,  3004,     0,     0,  2990,     0,     0,  2993,
       0,     0,     0,     0,  2085,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1788,     0,  2285,     0,     0,
       0,     0,     0,     0,     0,  2291,  2292,     0,     0,     0,
       0,     0,     0,  1796,     0,  2301,  2302,     0,     0,     0,
       0,     0,   741,   742,     0,  2311,  2312,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2348,  2349,     0,  1827,  2134,     0,     0,     0,     0,     0,
    2140,  2359,  2360,  1833,     0,     0,     0,     0,  2366,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2369,     0,
    1848,     0,     0,     0,     0,     0,     0,     0,     0,   743,
       0,     0,  1860,     0,     0,   744,     0,  1867,     0,     0,
       0,     0,   745,     0,   746,     0,     0,     0,     0,   747,
       0,     0,   748,     0,     0,     0,     0,     0,   749,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   750,
       0,     0,     0,     0,     0,     0,   751,     0,     0,     0,
       0,     0,     0,     0,     0,   752,     0,     0,     0,  2687,
       0,     0,     0,     0,  1916,  1917,  1918,     0,     0,     0,
       0,     0,   753,  2195,  1920,  1921,  1922,     0,  2200,     0,
       0,     0,     0,  1933,  1934,  1935,     0,     0,  1936,  1937,
       0,  1939,  1940,   754,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2220,
     755,     0,     0,     0,     0,  2226,     0,     0,     0,     0,
       0,     0,     0,   756,   757,  2012,  2013,     0,     0,  2015,
    2016,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2242,     0,     0,     0,   758,  2019,     0,  2249,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   759,
       0,     0,     0,     0,     0,  2039,     0,     0,     0,     0,
       0,     0,     0,   760,     0,   761,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     762,     0,     0,  2072,     0,   763,  2073,     0,     0,     0,
       0,     0,   764,     0,     0,  2088,  2089,     0,     0,   765,
       0,     0,     0,  2093,     0,     0,     0,     0,     0,     0,
    2094,     0,     0,     0,     0,     0,     0,     0,   766,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   767,   768,     0,   769,     0,     0,     0,     0,
       0,     0,     0,  2806,     0,  2549,     0,     0,     0,     0,
    2133,     0,     0,     0,     0,  2551,  2552,     0,     0,     0,
       0,     0,  2144,  2824,     0,     0,  2555,  2829,     0,     0,
       0,     0,     0,     0,     0,  2557,   770,     0,     0,  2561,
    2562,  2374,     0,     0,     0,     0,     0,     0,  2570,  2571,
       0,     0,     0,     0,     0,     0,     0,  2579,  2580,     0,
       0,  2387,     0,  2585,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2595,  2596,    69,    70,     0,     0,     0,
       0,     0,     0,     0,  2606,     0,  2607,     0,     0,     0,
     115,     0,     0,     0,  2410,  2411,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2414,  2415,     0,     0,     0,  2417,  2418,     0,     0,     0,
       0,     0,     0,  2197,     0,     0,     0,     0,     0,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2218,     0,     0,
       0,     0,     0,     0,     0,  2461,     0,     0,     0,     0,
       0,     0,     0,  2227,     0,     0,  2468,  2910,     0,     0,
       0,     0,     0,     0,     0,   118,  2232,     0,  2233,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2241,     0,
       0,  2243,  2244,  2245,  2246,  2248,     0,  2250,     0,     0,
    2251,     0,     0,  2252,  2254,  2255,  2256,  2257,  2259,     0,
    2260,  2261,     0,     0,     0,  2263,  2264,  2265,     0,  2484,
    2266,  2267,     0,     0,     0,     0,  2268,  2269,     0,     0,
       0,     0,     0,     0,     0,     0,   120,     0,     0,     0,
    2501,     0,     0,     0,  2276,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2284,     0,     0,
       0,     0,     0,  2517,     0,     0,     0,  2287,  2521,  2727,
       0,     0,  2728,     0,  2526,  2730,     0,     0,     0,  2530,
       0,     0,     0,  2533,     0,  2739,  2536,     0,     0,  2539,
       0,  2541,     0,     0,  2748,  2980,     0,     0,     0,     0,
       0,   125,     0,  2757,     0,     0,   126,     0,     0,     0,
    2759,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2763,     0,     0,     0,     0,     0,  2766,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2372,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2375,     0,     0,  2378,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2383,     0,     0,  2386,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,  2405,     0,     0,     0,
       0,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,    69,
      70,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   115,     0,     0,     0,  2857,     0,
       0,  2453,     0,     0,     0,  2858,     0,     0,     0,     0,
       0,     0,     0,     0,  2860,     0,     0,     0,     0,     0,
       0,     0,     0,  2862,  2469,  2679,     0,     0,     0,  2865,
       0,     0,     0,  2867,     0,     0,     0,     0,     0,     0,
       0,  2691,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1847,     0,     0,     0,     0,     0,     0,     0,     0,   118,
       0,     0,  2710,     0,   115,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2502,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2510,     0,  2723,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     120,  2534,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2543,     0,     0,     0,     0,     0,     0,     0,
    2548,     0,     0,     0,     0,     0,     0,     0,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2767,     0,     0,     0,     0,     0,  2771,
       0,     0,     0,  2773,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2779,
     126,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2586,  2587,  2588,  2589,  2590,     0,  2592,  2593,     0,     0,
     120,  2597,  2598,  2599,  2600,  2601,     0,  2603,  2604,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2614,     0,     0,  2617,
    2827,  2828,     0,     0,     0,     0,     0,  2621,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2634,     0,     0,  2637,     0,     0,     0,
       0,  2641,     0,     0,  2644,  2645,     0,     0,     0,     0,
     126,     0,     0,     0,     0,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2688,  2689,     0,     0,     0,     0,     0,   387,
       0,     0,     0,     0,     0,     0,   388,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2888,     0,     0,     0,   566,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   115,     0,
       0,     0,     0,     0,  2715,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,     0,  2726,     0,     0,   117,     0,     0,
       0,     0,     0,  2731,  2732,  2733,  2734,  2735,     0,  2737,
    2738,     0,  2740,  2741,  2742,  2743,  2744,     0,  2746,  2747,
       0,  2749,  2750,  2751,  2752,  2753,     0,  2755,  2756,     0,
    2758,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2761,  2762,  2954,   118,   668,   115,     0,     0,     0,     0,
       0,  2765,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2768,     0,     0,     0,  2966,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   669,     0,     0,     0,
       0,     0,     0,     0,     0,  2787,     0,     0,     0,     0,
       0,     0,     0,     0,   120,     0,  2798,     0,     0,     0,
       0,  2991,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     118,  3005,     0,     0,  3006,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   670,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   389,
       0,  2847,   390,     0,     0,  2853,     0,     0,     0,   125,
       0,     0,     0,     0,   126,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2859,     0,     0,     0,     0,     0,
       0,   120,     0,  2861,     0,     0,     0,     0,     0,     0,
       0,     0,  2863,     0,  2864,     0,     0,     0,  2866,     0,
       0,   671,     0,     0,     0,     0,     0,     0,     0,  2870,
    2871,     0,  2873,     0,     0,     0,     0,  2875,  2876,     0,
       0,     0,  2878,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   126,     0,     0,     0,  2900,   115,     0,     0,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,  2924,     0,     0,
       0,     0,     0,  2927,     0,  2928,     0,  2929,     0,     0,
    2930,     0,  2931,     0,   539,   540,     0,     0,   541,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   672,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   542,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,     0,     0,     0,     0,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,     0,     0,  2969,     0,     0,     0,
       0,     0,  1412,  1413,  1414,     0,     0,     0,     0,     0,
       0,     0,     0,  2978,     0,     0,     0,     0,     0,     0,
       0,     0,   120,     0,     0,     0,     0,  2989,     0,     0,
    2992,     0,  1415,  1416,     0,     0,  1417,   543,     0,     0,
       0,     0,     0,  1418,     0,     0,  1419,     0,     0,     0,
    1420,     0,     0,     0,     0,     0,   544,     0,  1421,  1422,
       0,     0,     0,     0,     0,     0,  1423,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   545,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   126,     0,     0,  1424,  1425,   115,     0,  1426,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1427,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   117,     0,  1428,     0,
       0,     0,     0,     0,     0,   546,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1429,     0,     0,     0,
       0,     0,     0,     0,     0,  1430,     0,     0,     0,     0,
       0,     0,   118,     0,     0,     0,     0,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,     0,   547,  1125,  1126,  1127,
       0,  1431,     0,     0,     0,     0,     0,     0,     0,  1432,
    1433,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   120,     0,     0,  1434,  1128,  1129,     0,
       0,  1130,   115,     0,  1131,     0,     0,  1435,     0,     0,
       0,  1132,     0,     0,     0,  1133,     0,     0,     0,     0,
       0,     0,     0,  1134,  1135,     0,     0,     0,     0,     0,
       0,  1136,  1137,  1436,     0,  1437,     0,     0,     0,     0,
       0,   117,     0,     0,     0,     0,  1438,     0,     0,  1138,
       0,     0,     0,     0,     0,   115,  1139,  1439,   125,     0,
    1140,  1141,     0,   126,  1142,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1143,     0,     0,     0,     0,   118,     0,     0,
       0,  1440,     0,     0,     0,     0,     0,   553,     0,     0,
       0,     0,     0,  1144,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   557,     0,     0,   115,     0,     0,
       0,  1145,     0,     0,     0,     0,     0,     0,     0,     0,
     118,     0,     0,     0,     0,     0,     0,     0,   120,     0,
       0,     0,     0,     0,     0,     0,  1146,     0,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,  1147,     0,  1148,     0,
       0,     0,     0,     0,  1149,  1150,   115,     0,     0,     0,
       0,   120,     0,     0,     0,     0,     0,     0,     0,     0,
    1151,  1152,   118,   125,     0,     0,     0,     0,   126,     0,
       0,  1153,  1154,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1473,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1155,     0,
    1156,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1157,     0,  1158,     0,     0,     0,     0,
       0,   126,  1159,   120,     0,     0,     0,     0,     0,     0,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1103,     0,     0,     0,  1160,  1104,     0,     0,
       0,     0,     0,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   554,   120,   126,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   126,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,     1,     0,     0,     2,     0,
       0,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     0,     0,     0,     0,
       5,     6,     0,     7,     8,     9,     0,     0,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
      11,     0,    12,    13,     0,     0,     0,     0,     0,     0,
       0,     0,    14,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    16,     0,     0,     0,
       0,     0,     0,     0,     0,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18,     0,
       0,     0,    19,     0,     0,    20,     0,     0,     0,    21,
      22,     0,     0,     0,    23,    24,     0,     0,    25,     0,
       0,     0,     0,     0,    26,     0,     0,     0,     0,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,    29,    30,    31,     0,     0,    32,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    34,     0,     0,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    36,    37,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,     0,    40,     0,
     185,     0,     0,   186,     0,    41,   187,     0,     0,    42,
       0,     0,     0,    43,     0,    44,     0,    45,     0,     0,
       0,     0,    46,     0,     0,     0,   188,     0,   189,   190,
     191,     0,     0,     0,     0,     0,    47,     0,   192,     0,
     193,     0,    48,     0,     0,   194,     0,   195,   196,   197,
       0,     0,     0,     0,     0,   198,     0,   199,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,    52,     0,     0,     0,     0,     0,     0,
      53,     0,     0,    54,    55,     0,     0,     0,     0,   200,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   201,     0,     0,
       0,     0,     0,     0,    56,   202,     0,   203,   204,   205,
     206,    57,     0,   207,     0,     0,     0,   208,     0,   209,
    1518,     0,     0,     0,     0,   210,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   211,   212,     0,     0,     0,   213,
       0,     0,     0,     0,     0,     0,     0,   214,     0,     0,
     215,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   216,   217,     0,
       0,     0,     0,     0,     0,   218,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     219,     0,   220,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   221,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   222,   223,     0,     0,     0,     0,     0,
       0,     0,     0,   224,     0,     0,     0,     0,     0,     0,
       0,   225,     0,     0,     0,     0,     0,   226,     0,   227,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,  1519,     0,
       0,     0,     0,     0,     0,     0,   228
};

static const yytype_int16 yycheck[] =
{
       3,   761,  1281,    55,  1600,  1829,  1285,  1831,    11,   530,
     756,   757,   996,    16,   310,     5,     4,     4,  1126,     5,
       5,    26,    16,   486,     3,     4,     3,     4,    13,    14,
      19,     5,     4,   496,    37,     4,  1315,  1316,  1317,     3,
       4,     4,    45,     4,    49,    13,    26,    52,     4,     3,
       4,    54,     3,     4,    57,    37,  1093,    60,    63,  1096,
       0,    64,     5,     4,    67,     3,     4,     5,    71,    72,
       3,     4,    75,     3,     4,    78,    79,    62,    92,    82,
    1117,    86,    85,    86,     5,     5,    89,     4,    12,    45,
     155,    94,    48,    55,    62,     4,     5,   135,   300,   104,
      16,     5,    35,    31,   107,   108,   109,   110,   111,   112,
     105,    67,     3,     4,   205,    16,     3,     4,     3,     4,
      46,     4,     3,     4,  2724,   128,    67,   101,    84,    91,
      36,    42,   172,   127,   108,   178,    16,    31,   144,   121,
      57,    47,    31,   205,    35,   101,    20,     4,     5,  2906,
     106,    20,     4,    95,   226,    67,     3,     4,   139,    11,
     163,    23,    24,   984,   985,   986,   180,     3,     4,    75,
      84,    32,   114,    51,   137,     3,     4,    16,     4,     5,
     271,   187,   123,   177,   146,   188,   173,   101,    35,   244,
     193,   150,    39,    20,   174,   238,    20,    20,   154,  2956,
     238,    15,   264,    39,   199,   138,    89,    15,    20,   274,
      67,   193,     4,   195,   123,   197,   198,   202,   203,     4,
     176,     5,   199,   101,    60,    26,   208,   206,   205,    88,
      62,   225,    89,   111,   202,   199,  1057,    99,   210,    20,
     280,   124,  2842,   225,   179,   217,   218,   138,   199,   155,
     322,   239,    26,   188,  2854,     3,     4,   199,   272,   248,
     298,   100,     4,   306,   142,   268,   123,   114,   245,     3,
       4,    26,   252,  1033,   215,    67,   290,   201,   114,   282,
     261,   253,   223,   224,   336,    62,   166,     4,   145,   298,
      62,   138,   198,   278,   271,   298,   299,   123,   260,    62,
     211,    18,   196,   288,   289,   164,   215,   196,   293,   225,
     278,   314,   229,   316,   223,   224,   310,    62,   298,   262,
     288,   309,    39,   326,   327,   281,   329,   330,   140,   332,
     309,   123,   322,   302,   797,   321,   240,   322,   123,   342,
      57,   302,   329,   320,   318,    79,   309,   329,     4,   352,
     353,   307,   308,   274,   322,   309,   320,   238,   215,   206,
     300,   287,   268,   319,   369,   285,   223,   224,   296,   320,
     206,   312,   375,   274,   377,   378,   309,   380,   252,   309,
     301,   384,   385,   252,   322,     4,   103,   364,   365,   215,
    1150,   363,   395,   396,   310,   209,   692,   223,   224,   402,
     364,   365,   296,   312,   407,   408,   123,   296,  1168,   318,
     238,    67,   415,   364,   365,   418,    62,   323,   309,   174,
     329,   362,   309,   215,   309,   252,   367,   368,   252,   252,
     215,   223,   224,   311,   437,   438,     5,   238,   223,   224,
     252,   444,   445,   446,   447,   448,   449,   164,   451,   183,
      45,   454,     4,   362,  1562,   312,  1202,  1736,   367,   368,
      62,   318,   309,   205,   238,   468,   298,   123,   304,   472,
     282,   252,    67,    67,   477,   478,   479,   480,   481,   482,
    1588,   484,   945,   486,   487,   488,   312,    82,  1234,   206,
     238,   323,     5,   496,   497,    26,  1533,   252,   215,  1536,
      13,    14,  1610,   485,   123,   362,   223,   224,     4,   366,
     367,   368,   229,    39,     5,    67,     4,   234,     3,     4,
     312,   298,   124,     5,     4,   988,   298,   312,    99,     5,
     264,    13,    14,     3,     4,   298,   362,    13,    14,    30,
      89,   367,   368,   298,   144,    62,   323,   550,   551,    62,
     244,   323,     0,   298,   108,    64,     4,    64,     5,   215,
     323,    57,   164,     4,  1385,   568,    58,   223,   224,    16,
     362,   123,  1393,     3,     4,   367,   368,   362,   323,     4,
      62,   176,   367,   368,     4,    88,    62,   187,   114,     4,
     159,   160,   574,     3,     4,   312,   215,   649,   107,    67,
     107,   604,    26,     5,   223,   224,     0,   124,    62,   284,
      39,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
      45,   129,     5,   646,   136,   362,   628,   178,    62,    57,
     367,   368,   298,    11,   208,    57,   312,    29,     4,    43,
      65,   164,    67,   215,    66,    44,   134,     3,     4,   721,
     124,   223,   224,  1433,     3,     4,  2500,   323,     3,     4,
     206,    60,     4,   302,  1444,   114,   288,   690,   740,   202,
     203,   260,    30,   312,   162,     5,    54,   700,   128,   124,
      89,    14,    15,    82,    88,   276,   362,   238,   262,    22,
     124,   367,   368,   308,    72,    33,     5,    30,   159,   160,
     202,   203,     5,   102,    96,    38,   202,   203,   323,    65,
     119,   219,    57,   229,     5,   738,   221,     3,     4,    62,
     249,   120,   249,   362,   102,   124,    59,   239,   367,   368,
      16,   221,   755,   279,   178,   758,   265,   266,   265,   266,
     312,     5,   254,    76,   122,   278,   207,   274,   126,    13,
      14,   288,   206,   152,   153,   288,   289,   206,   781,   247,
     293,     5,   140,   786,   787,   788,   789,     4,   193,   792,
     205,   794,   110,   796,   797,   798,   278,  1260,   170,   128,
     210,   124,   278,    62,    62,     4,   288,   289,   197,   322,
     362,   293,   288,   289,   238,   367,   368,   293,    62,   260,
     204,   229,   277,   120,   213,    67,   878,   229,   320,   284,
      29,   122,   300,   212,   288,   300,    83,    62,    39,   179,
     322,    32,   257,   222,    67,    71,   322,     5,   253,   264,
     279,   360,   361,   360,   361,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   124,   124,   870,   871,  1853,
     873,   874,   875,   876,   288,  2154,  2155,  2156,  2157,  2158,
    2159,  2160,  2161,  2162,    29,    62,   275,   890,   891,    64,
      62,  1928,   264,   298,   897,   898,   120,   269,   216,   124,
     159,   160,    39,   308,   229,   284,   285,    13,    14,    90,
     157,  1948,    27,   114,   917,   918,   919,   920,   921,  2027,
     923,  1958,   925,    27,  1961,    15,    62,  1390,   108,   318,
      67,  1968,   107,    62,  2042,   159,   160,   940,   941,   942,
     329,   944,   945,   946,    62,   948,  1983,   124,  1694,  1986,
     298,   309,   124,   179,   129,    88,    62,  1994,   202,   203,
    1997,   245,  2070,    88,   101,   288,   969,    88,   971,   168,
      67,   108,    13,    14,     3,     4,    62,   114,   981,   358,
     204,     3,     4,   296,   297,   988,   989,   969,   124,   236,
     237,   994,    62,    62,    62,   124,   299,   134,    90,    88,
     277,   260,    39,    62,   251,   206,   124,   284,  1011,     4,
       5,  1832,  1015,     3,     4,   328,    79,    39,   155,     3,
       4,    62,    67,   168,  1027,  1028,  1029,   226,   208,   288,
     288,   164,  1035,   259,   278,   172,   260,  1040,   124,   164,
      73,   156,   268,   164,   288,   289,     5,   294,  1051,   293,
    1101,  1103,   156,   252,   124,   124,   124,  1108,   371,   372,
     373,   285,  2658,   288,   164,   124,    61,  1070,    30,   184,
      60,   208,    67,   188,   249,   164,     4,   114,   322,  1102,
     184,   226,   262,  2191,   188,  2227,  1109,     4,     3,     4,
     265,   266,   114,    13,    14,   195,   202,   203,     5,    13,
      14,  2243,  2244,  2245,    25,     5,  2248,   252,  2250,  2251,
     247,   288,  2254,  2255,  2256,   144,   288,  2259,  2260,     4,
     183,  2263,   117,  2265,  2266,   262,  2268,   242,    41,    42,
       4,   608,     3,     4,   611,   612,     5,   274,   242,   134,
      11,     5,    62,  1146,   128,    60,    13,    14,    62,     4,
      13,    14,   288,    45,   149,     3,     4,     4,   187,   288,
     155,   202,   203,     5,  1167,   302,     5,   162,   283,   206,
     288,     5,   278,  1176,     5,    67,   291,   292,   315,   283,
     317,   318,   288,   289,   206,   360,   361,   291,   292,  1192,
      82,  1194,     3,     4,   115,    62,  1199,  1200,  1201,    62,
      45,   264,   288,    48,     3,     4,  1209,    18,   129,  1212,
       5,  1214,    60,     3,     4,     5,   322,   135,   288,   288,
     288,   358,    67,     4,    25,     5,   221,    38,  1231,   288,
    1233,   216,     4,  2375,     4,     5,  2378,   278,  1241,  1242,
       4,  2383,    21,     4,  2386,   240,    57,   288,   289,     4,
     245,   124,   247,  1256,  1257,    99,   101,  1260,  1261,  1262,
     178,   106,     5,  2405,     4,  1268,     4,  1270,   181,   182,
    1273,    50,  1275,   285,    53,     4,    83,     4,   273,   274,
    1332,   322,   202,   203,     4,  2322,   281,     4,   202,   203,
    2792,     5,   103,     4,  2331,    13,    14,     4,   211,   220,
     210,   193,     4,  2340,    83,   300,     3,     4,  2810,   154,
      84,     4,   233,  2134,   115,  1318,     4,  2425,   155,  1322,
     238,  1324,     3,     4,   199,  1328,     4,   101,   129,     5,
     205,     3,     4,  2441,   113,   202,   203,   116,  2446,   202,
     203,  1344,    39,  1346,    62,  1348,  1349,  1350,  1351,     5,
     157,  1354,  1355,   164,  1357,  1358,     8,  1360,   278,  1362,
    2502,   253,  1344,   358,   278,   166,  1369,    39,   288,   289,
     245,   684,    10,  1376,   288,   289,   361,  1380,  1381,  1382,
     298,     5,   367,   284,   369,     3,     4,  1390,  1391,     4,
       5,  1394,  2534,    11,   231,   206,   271,     4,     5,  1402,
       4,  1404,   322,   179,  1407,  2226,   298,     4,   322,     3,
       4,   278,   186,  1395,   179,   278,   308,   114,   229,   220,
     188,   288,   289,   234,     4,   288,   289,   209,  2249,   236,
     237,  1413,   233,     5,   245,     5,   281,   274,     3,     4,
       5,     4,   114,  2945,   251,   320,   209,   760,  1451,  2951,
    1453,   209,   765,  1456,  1457,   322,  1459,   231,  1461,   322,
       4,   240,   307,   308,  1467,   200,  1469,     3,     4,    36,
       6,     7,  2614,     5,   319,  1478,    34,   314,  2650,     4,
      47,  2653,    67,  2655,   202,   203,    67,   294,     4,     5,
     365,   200,  2634,   267,   273,   239,  2668,  2669,   309,  2641,
       4,     5,  2644,  2645,   238,  3007,    67,  3009,    75,     5,
       3,     4,     4,  2685,    39,     8,     9,    10,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,  2654,     3,     4,     5,
       4,   109,   474,   475,  1084,  1085,  1559,  1560,  1561,  2667,
     278,     4,     4,     4,  2672,     3,     4,     5,     6,     7,
     288,   289,   209,     5,   132,   133,  1558,    88,  1581,    88,
      88,     5,  1585,   141,     5,    88,     4,     4,   155,   114,
       3,     4,     5,     6,     7,     3,     4,     5,     6,     7,
       5,     5,     4,   161,   322,  1608,  1609,     5,     4,    16,
     101,     5,     4,   171,   927,  1618,    16,     4,  1621,     4,
       4,    99,  2085,     5,     5,  1628,  2768,    88,    88,    88,
       4,   198,     5,     5,   159,   160,    88,     5,     4,  1642,
    2461,     5,     5,     4,  1647,  2787,     4,  2468,  1651,     5,
    1653,  1654,     5,  1656,  1657,  1658,     5,  1660,     4,    65,
    1663,  1664,  1665,  1666,  1667,  1668,  1669,  1670,  1671,  1672,
    1673,     4,     4,  1676,  1677,  1678,  1679,  2140,     5,   173,
      11,   206,   207,  1686,  1687,    11,     4,  1690,  1691,  1692,
       5,     4,     4,  1696,  1697,     4,     4,     4,     4,    18,
       5,   268,     5,   331,     5,     4,  1709,  1710,     5,  1712,
    1713,   164,  2533,   164,     4,  2536,    37,    37,  2539,   273,
    2541,    40,   273,    21,    43,   302,    37,     5,  2870,  2871,
     297,  2873,     4,  2875,  2876,   260,  2878,  2200,   305,     4,
       4,   286,     5,     5,     5,     5,     4,     4,   286,     5,
       5,     5,    50,    67,    54,    53,   323,     5,    56,    78,
       5,     4,     4,   391,     5,     5,    85,    81,     5,     5,
       5,     5,    72,     4,     4,     4,    90,    96,    97,     5,
       5,  1784,  1785,  1786,   103,    83,  1789,   101,     5,    89,
    2932,  1794,  1795,     5,  1797,  1798,  1799,   252,  1801,  1802,
     121,  1804,   102,  1806,  1807,   252,  1809,  1810,   252,  1812,
     129,  1814,  1794,   108,     5,   113,   252,   108,   116,  1822,
     134,   144,   122,    39,   252,   252,   126,  1830,   147,   108,
       5,    39,  1835,  1836,  2942,   225,  2978,   225,  1841,   258,
     140,   155,   258,     5,   163,   164,     4,  1850,     5,     5,
     225,   170,     4,     4,   225,     5,     5,     5,     5,     5,
    1173,     4,   114,   114,     4,   262,     5,     5,     5,     4,
    2691,   192,     5,   194,   195,   194,   197,   198,     5,     4,
    1883,     5,     5,  1865,     4,   185,     5,     5,     4,    11,
       5,     5,  1874,     4,   208,     4,  1878,     5,    11,     5,
       5,  1904,  1905,     4,     4,     4,  1909,     4,     4,   230,
       5,     0,  1915,     5,   252,   234,   252,  1230,   252,   178,
     548,   144,   252,   252,   252,     4,   209,   555,   249,   250,
     558,  1244,     4,   247,   255,   563,   221,     4,   259,   567,
       4,     4,   240,     4,     4,   286,     5,  2410,  2411,     5,
    2413,  2414,     5,     5,  2417,  2418,     5,     5,     4,     4,
     274,     5,     4,     4,     4,   252,     5,     5,   287,     5,
     252,    43,   252,     4,    46,   273,   326,     4,   326,   298,
       4,     4,     4,     4,   326,     4,   326,     4,   238,     5,
       5,   238,    62,     5,   315,     4,     4,   318,     5,   238,
     238,   315,   300,   317,     4,    77,   238,     5,   329,     5,
     329,     4,     4,    85,     5,     5,     5,     5,     4,  2022,
    2023,  2484,  2025,   651,     5,     5,     4,     4,   349,     5,
       5,     5,     5,     4,   322,     5,     5,     4,   473,     5,
    2043,  2044,  2045,  2046,  2047,  2048,  2049,  2050,  2051,     5,
     120,   123,  1365,  1366,   124,     4,     4,     4,   286,     5,
       5,     4,     4,  2066,     5,  2068,  2826,     5,     4,  2966,
       5,     5,     4,   286,     5,     4,   148,     5,     5,     4,
       4,  2084,  2085,     5,     5,     5,     5,  2090,     5,   159,
     160,     4,   286,     5,   164,     5,  2099,  2100,  2101,  2102,
    2103,  2104,  2105,  2106,  2107,  2108,     5,     5,  2111,  2112,
    2113,  2114,  2115,  2116,  2117,  2118,  2119,  2120,  2121,  2122,
       4,  2124,     4,  2126,  2127,  2128,     5,     4,    11,     5,
       5,     5,   204,     4,   204,     4,     4,  2140,  2141,     5,
       5,     5,     5,   215,   465,     4,   370,     5,  2908,     5,
       5,   223,   224,     5,     4,   476,     4,     4,   230,     5,
     232,  1092,     5,     5,   485,   793,     5,     4,   370,     5,
       5,     5,   800,     5,     4,     4,  2639,     5,     4,     4,
    2643,     4,     4,   370,     5,     5,   256,     5,   260,  2192,
     260,  2194,     5,  2196,     5,  2198,     4,  2200,  2201,     4,
    2203,     5,     4,     4,     4,  2208,  2209,     5,  2211,  2212,
       5,  2214,     4,  2216,     5,   285,  2679,     5,   288,  2222,
       4,  2224,     4,   422,     5,  2228,     5,     5,  2231,   299,
       4,     4,   553,   554,     5,     5,     5,     5,     5,     5,
     312,  1554,     4,   300,     5,   566,     4,     4,     4,     4,
     571,     4,  2234,     5,     5,     5,     4,   329,     4,   580,
       5,     5,     5,     5,     4,     4,   370,     5,     5,     5,
    1583,     5,  2275,     4,  1587,     4,   370,     5,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,   370,
     362,  2273,   370,   370,     4,   367,   368,     5,     5,     4,
    1613,     4,   930,     4,     4,   300,     5,     4,     4,   937,
    1623,     5,     5,     5,     5,     4,     4,     4,     4,  1632,
    1633,  2373,     4,     4,     4,     4,     4,     4,  2841,     5,
    1643,     4,  2436,     5,     5,     5,     4,   370,     5,     4,
    2824,     5,     5,     4,     4,     4,  2908,     4,   669,   670,
     671,   672,     4,     4,   982,   983,     4,  2904,     5,   987,
       4,     4,   990,     4,   836,     5,     4,     4,     4,     4,
      -1,     5,     5,     4,  1002,  2656,  2379,     4,     4,     4,
       4,     4,     4,    -1,     5,     4,     4,  2390,  2391,  2392,
    2393,  2394,  2395,  2396,  2397,  2398,  2399,  2400,    56,  2920,
    2921,  2682,     5,  2406,     5,     4,     4,  2410,  2411,    67,
    2413,  2414,     5,     5,  2417,  2418,  2419,  2420,  2421,  2422,
    2423,  2424,     5,  2426,  2427,  2428,     5,     5,     5,     4,
       4,    -1,     5,     5,     5,    93,    94,    -1,   759,  2442,
    2443,  2444,  2445,   101,  2447,  2448,  2449,  2450,  2451,  2452,
     108,  2454,    -1,    -1,  2457,  2458,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,
      -1,    -1,    -1,   131,    -1,    -1,   134,    -1,  2481,    -1,
      -1,  2484,  2485,    -1,    -1,    -1,  2489,    -1,    -1,    -1,
      -1,  2494,  2495,    -1,  2497,    -1,  1124,   155,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,  2790,
    2791,    -1,    -1,  2794,    -1,  2796,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2808,  2809,    -1,
      -1,    -1,  2813,  2814,    -1,    -1,  2817,    -1,    -1,    -1,
      -1,  2822,  2823,  2546,    -1,    -1,    -1,    -1,    -1,    -1,
     208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   216,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1497,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1509,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    26,    -1,  2880,
    1531,  1532,  2883,    -1,   262,    -1,    -1,  2888,    -1,    -1,
     931,    -1,    -1,  2894,    -1,  2618,   274,    -1,  2899,  2622,
      49,    50,   943,    52,    53,    -1,    -1,    -1,    -1,  2632,
    2633,    -1,   290,    -1,    63,  2638,  2639,    -1,    -1,  2642,
    2643,    -1,   300,    -1,   302,  2648,    75,    76,  2651,  2652,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    86,    -1,   980,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2670,  2671,    -1,
    2673,  2674,  2675,  2676,  2677,   104,  2679,  2680,    -1,    -1,
      -1,  2684,    -1,   112,   113,    -1,    -1,   116,    -1,    -1,
      -1,    -1,  2973,    -1,  2697,  2976,    -1,    -1,    -1,    -1,
     358,    -1,  1330,    -1,  2707,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    -1,  2996,    -1,    -1,   101,    -1,
      -1,    -1,  2725,  2036,    -1,   108,    -1,    -1,    -1,  3010,
      -1,    -1,  3013,  3014,    -1,    -1,    -1,    -1,    -1,    -1,
    1368,    -1,   125,    -1,  1065,  1373,    -1,    -1,   131,    -1,
      -1,    -1,    -1,  1078,   183,  1383,    -1,    -1,  2071,    -1,
      -1,    -1,    -1,    -1,  2767,    -1,    -1,    -1,    -1,  2772,
      -1,  2774,   155,    -1,    -1,    -1,    -1,  2780,    -1,    -1,
      -1,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2793,  1116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2811,    -1,
      -1,   240,  2815,    -1,    -1,    -1,  2868,   246,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   208,    -1,    -1,  1149,    -1,
      -1,    -1,    -1,   216,   263,    -1,    -1,    -1,  2841,    -1,
      -1,    -1,    -1,    -1,   273,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2872,
      -1,    -1,   301,   302,  2877,    -1,  2879,    -1,    -1,   262,
      -1,    -1,  1203,  2886,    -1,    -1,    -1,    -1,  2891,    -1,
      -1,   274,  1213,  2896,    -1,   324,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   290,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2920,  2921,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     369,    -1,    -1,  2946,    -1,    -1,  2949,    -1,    -1,  2952,
      -1,    -1,    -1,    -1,    -1,  2937,    -1,    -1,    -1,  2962,
    2963,  2964,  2965,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2974,    -1,    -1,  2977,    -1,    -1,    -1,    -1,    -1,
      -1,  2984,    -1,  2986,    -1,    -1,  2968,    -1,    -1,  2971,
      -1,    -1,    -1,    -1,  1622,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1326,    -1,  1938,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1946,  1947,    -1,    -1,    -1,
      -1,    -1,    -1,  1344,    -1,  1956,  1957,    -1,    -1,    -1,
      -1,    -1,     4,     5,    -1,  1966,  1967,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1981,  1982,    -1,  1374,  1682,    -1,    -1,    -1,    -1,    -1,
    1688,  1992,  1993,  1384,    -1,    -1,    -1,    -1,  1999,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2009,    -1,
    1401,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    -1,  1413,    -1,    -1,    67,    -1,  1418,    -1,    -1,
      -1,    -1,    74,    -1,    76,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
      -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,    -1,  2462,
      -1,    -1,    -1,    -1,  1479,  1480,  1481,    -1,    -1,    -1,
      -1,    -1,   134,  1791,  1489,  1490,  1491,    -1,  1796,    -1,
      -1,    -1,    -1,  1498,  1499,  1500,    -1,    -1,  1503,  1504,
      -1,  1506,  1507,   155,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1827,
     172,    -1,    -1,    -1,    -1,  1833,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   185,   186,  1540,  1541,    -1,    -1,  1544,
    1545,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1860,    -1,    -1,    -1,   208,  1558,    -1,  1867,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
      -1,    -1,    -1,    -1,    -1,  1586,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   245,    -1,   247,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     262,    -1,    -1,  1614,    -1,   267,  1617,    -1,    -1,    -1,
      -1,    -1,   274,    -1,    -1,  1626,  1627,    -1,    -1,   281,
      -1,    -1,    -1,  1634,    -1,    -1,    -1,    -1,    -1,    -1,
    1641,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   300,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   314,   315,    -1,   317,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2666,    -1,  2286,    -1,    -1,    -1,    -1,
    1681,    -1,    -1,    -1,    -1,  2296,  2297,    -1,    -1,    -1,
      -1,    -1,  1693,  2686,    -1,    -1,  2307,  2690,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2316,   358,    -1,    -1,  2320,
    2321,  2019,    -1,    -1,    -1,    -1,    -1,    -1,  2329,  2330,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2338,  2339,    -1,
      -1,  2039,    -1,  2344,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2354,  2355,     3,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2365,    -1,  2367,    -1,    -1,    -1,
      18,    -1,    -1,    -1,  2072,  2073,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2088,  2089,    -1,    -1,    -1,  2093,  2094,    -1,    -1,    -1,
      -1,    -1,    -1,  1794,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1818,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2133,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1834,    -1,    -1,  2144,  2830,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   103,  1847,    -1,  1849,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1859,    -1,
      -1,  1862,  1863,  1864,  1865,  1866,    -1,  1868,    -1,    -1,
    1871,    -1,    -1,  1874,  1875,  1876,  1877,  1878,  1879,    -1,
    1881,  1882,    -1,    -1,    -1,  1886,  1887,  1888,    -1,  2197,
    1891,  1892,    -1,    -1,    -1,    -1,  1897,  1898,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,    -1,
    2218,    -1,    -1,    -1,  1919,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1932,    -1,    -1,
      -1,    -1,    -1,  2241,    -1,    -1,    -1,  1942,  2246,  2550,
      -1,    -1,  2553,    -1,  2252,  2556,    -1,    -1,    -1,  2257,
      -1,    -1,    -1,  2261,    -1,  2566,  2264,    -1,    -1,  2267,
      -1,  2269,    -1,    -1,  2575,  2958,    -1,    -1,    -1,    -1,
      -1,   229,    -1,  2584,    -1,    -1,   234,    -1,    -1,    -1,
    2591,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2602,    -1,    -1,    -1,    -1,    -1,  2608,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2014,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2021,    -1,    -1,  2024,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2035,    -1,    -1,  2038,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,  2067,    -1,    -1,    -1,
      -1,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,     3,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,  2729,    -1,
      -1,  2122,    -1,    -1,    -1,  2736,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2745,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2754,  2145,  2453,    -1,    -1,    -1,  2760,
      -1,    -1,    -1,  2764,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2469,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,
      -1,    -1,  2510,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2219,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2234,    -1,  2543,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     164,  2262,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2273,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2611,    -1,    -1,    -1,    -1,    -1,  2617,
      -1,    -1,    -1,  2621,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2637,
     234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2345,  2346,  2347,  2348,  2349,    -1,  2351,  2352,    -1,    -1,
     164,  2356,  2357,  2358,  2359,  2360,    -1,  2362,  2363,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2377,    -1,    -1,  2380,
    2688,  2689,    -1,    -1,    -1,    -1,    -1,  2388,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2404,    -1,    -1,  2407,    -1,    -1,    -1,
      -1,  2412,    -1,    -1,  2415,  2416,    -1,    -1,    -1,    -1,
     234,    -1,    -1,    -1,    -1,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2463,  2464,    -1,    -1,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2798,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    -1,  2515,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,    -1,  2549,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,  2558,  2559,  2560,  2561,  2562,    -1,  2564,
    2565,    -1,  2567,  2568,  2569,  2570,  2571,    -1,  2573,  2574,
      -1,  2576,  2577,  2578,  2579,  2580,    -1,  2582,  2583,    -1,
    2585,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2595,  2596,  2900,   103,    17,    18,    -1,    -1,    -1,    -1,
      -1,  2606,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2613,    -1,    -1,    -1,  2924,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2646,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   164,    -1,  2657,    -1,    -1,    -1,
      -1,  2969,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     103,  2989,    -1,    -1,  2992,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   255,
      -1,  2712,   258,    -1,    -1,  2716,    -1,    -1,    -1,   229,
      -1,    -1,    -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2739,    -1,    -1,    -1,    -1,    -1,
      -1,   164,    -1,  2748,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2757,    -1,  2759,    -1,    -1,    -1,  2763,    -1,
      -1,   184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2770,
    2771,    -1,  2773,    -1,    -1,    -1,    -1,  2778,  2779,    -1,
      -1,    -1,  2783,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   234,    -1,    -1,    -1,  2816,    18,    -1,    -1,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,  2848,    -1,    -1,
      -1,    -1,    -1,  2858,    -1,  2860,    -1,  2862,    -1,    -1,
    2865,    -1,  2867,    -1,    66,    67,    -1,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   304,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    -1,    -1,    -1,    -1,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,    -1,    -1,  2937,    -1,    -1,    -1,
      -1,    -1,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2954,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   164,    -1,    -1,    -1,    -1,  2968,    -1,    -1,
    2971,    -1,    49,    50,    -1,    -1,    53,   179,    -1,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    63,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,   198,    -1,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   234,    -1,    -1,   112,   113,    18,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,   155,    -1,
      -1,    -1,    -1,    -1,    -1,   287,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   192,    -1,    -1,    -1,    -1,
      -1,    -1,   103,    -1,    -1,    -1,    -1,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,    -1,   358,    19,    20,    21,
      -1,   238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,
     247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   164,    -1,    -1,   263,    49,    50,    -1,
      -1,    53,    18,    -1,    56,    -1,    -1,   274,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    84,   300,    -1,   302,    -1,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,   313,    -1,    -1,   101,
      -1,    -1,    -1,    -1,    -1,    18,   108,   324,   229,    -1,
     112,   113,    -1,   234,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,    -1,    -1,    -1,    -1,   103,    -1,    -1,
      -1,   358,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   295,    -1,    -1,    18,    -1,    -1,
      -1,   183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   208,    -1,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   238,    -1,   240,    -1,
      -1,    -1,    -1,    -1,   246,   247,    18,    -1,    -1,    -1,
      -1,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     262,   263,   103,   229,    -1,    -1,    -1,    -1,   234,    -1,
      -1,   273,   274,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   300,    -1,
     302,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   315,    -1,   317,    -1,    -1,    -1,    -1,
      -1,   234,   324,   164,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   164,    -1,    -1,    -1,   358,   169,    -1,    -1,
      -1,    -1,    -1,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   304,   164,   234,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,    -1,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,    40,    -1,    -1,    43,    -1,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   130,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,    -1,
      -1,    -1,   147,    -1,    -1,   150,    -1,    -1,    -1,   154,
     155,    -1,    -1,    -1,   159,   160,    -1,    -1,   163,    -1,
      -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,    -1,    -1,
     175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   186,    -1,    -1,   189,   190,   191,    -1,    -1,   194,
     195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   207,    -1,    -1,   210,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   227,   228,   229,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   241,    -1,   243,    -1,
      40,    -1,    -1,    43,    -1,   250,    46,    -1,    -1,   254,
      -1,    -1,    -1,   258,    -1,   260,    -1,   262,    -1,    -1,
      -1,    -1,   267,    -1,    -1,    -1,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,   281,    -1,    78,    -1,
      80,    -1,   287,    -1,    -1,    85,    -1,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,    95,    -1,    97,   303,   304,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   316,    -1,   318,    -1,    -1,    -1,    -1,    -1,    -1,
     325,    -1,    -1,   328,   329,    -1,    -1,    -1,    -1,   129,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,    -1,    -1,   359,   155,    -1,   157,   158,   159,
     160,   366,    -1,   163,    -1,    -1,    -1,   167,    -1,   169,
     169,    -1,    -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   194,   195,    -1,    -1,    -1,   199,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,
     210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   227,   228,    -1,
      -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     260,    -1,   262,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   287,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   303,   304,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   313,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   321,    -1,    -1,    -1,    -1,    -1,   327,    -1,   329,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   366
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    40,    43,    46,    60,    65,    66,    68,    69,    70,
      78,    85,    87,    88,    97,    98,   121,   130,   143,   147,
     150,   154,   155,   159,   160,   163,   169,   175,   186,   189,
     190,   191,   194,   195,   207,   210,   227,   228,   229,   241,
     243,   250,   254,   258,   260,   262,   267,   281,   287,   303,
     304,   316,   318,   325,   328,   329,   359,   366,   372,    67,
      11,    54,    72,   102,   122,   126,   140,   309,   406,     3,
       4,   309,   373,   411,   199,   205,   245,   271,   320,   365,
     413,   300,     4,    39,   114,   159,   160,   206,   207,   260,
     418,    27,   156,   184,   188,   242,   283,   291,   292,   388,
     420,    84,   101,   186,   231,   267,   421,    39,    60,   114,
     206,   304,   373,   430,     4,    18,    39,    57,   103,   123,
     164,   206,   215,   223,   224,   229,   234,   312,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   362,   367,   368,
     375,   383,   384,   385,   432,    32,   433,   375,    43,    46,
      77,    85,   148,   204,   230,   232,   260,   329,   374,   375,
      65,   373,   435,   150,   436,    40,    43,    46,    66,    68,
      69,    70,    78,    80,    85,    87,    88,    89,    95,    97,
     129,   147,   155,   157,   158,   159,   160,   163,   167,   169,
     175,   194,   195,   199,   207,   210,   227,   228,   235,   260,
     262,   287,   303,   304,   313,   321,   327,   329,   366,   437,
      84,   101,   486,    18,    40,    43,    78,    85,    96,    97,
     103,   129,   147,   163,   164,   170,   194,   234,   287,   298,
     329,   489,    67,   375,    62,   298,   323,   572,    62,   298,
     323,   571,    89,   119,   197,   213,   275,   318,   329,   495,
      15,     4,    45,    48,    67,    84,   101,   106,   154,   176,
     281,   307,   308,   319,   554,    25,   115,   129,   166,   220,
     233,   498,   244,   516,     5,    67,    89,   145,   318,   366,
     375,   517,     5,   518,    58,   136,   239,   254,   320,   534,
      45,    65,    67,   193,   253,   298,   308,   555,   298,   570,
      67,   216,   361,   367,   369,   556,    38,   206,   245,   309,
     373,   383,   385,   557,     5,   318,   329,   375,   560,    71,
     179,   259,   268,   561,     4,   562,    89,   534,    62,   298,
     323,   569,   206,   309,   373,   573,    25,   115,   129,   220,
     233,   575,    51,   101,   111,   142,   311,   596,   597,     4,
      36,    47,    75,   155,   198,   268,   297,   305,   323,   401,
       4,   129,   219,   598,   309,   373,   600,    15,    22,   255,
     258,   384,   601,   244,   605,   309,   373,   606,     0,     5,
     375,    60,   373,   407,   284,     5,     4,   309,   373,   408,
       5,    31,   296,   409,   128,   373,   410,   128,   373,   412,
     373,     4,   205,   257,   264,   416,   199,   320,   364,   365,
     373,   415,   375,   144,   187,   414,   210,   373,    79,   183,
     264,   373,   417,     5,   373,   373,   373,     4,   159,   160,
     207,   260,   419,     4,   373,   373,     5,   240,   422,    30,
     423,     5,   424,     5,   428,     5,    30,   429,   373,     8,
       9,    10,   373,   379,   380,   381,   382,   373,   373,    39,
     114,   206,   373,   431,   373,   206,   383,   385,   373,    34,
     109,   132,   133,   141,   161,   171,   390,   373,     4,   375,
     375,   375,   375,   375,   375,   375,   375,   375,   375,   120,
      67,    54,    72,    89,   102,   122,   126,   140,   185,   440,
     122,   442,   199,   205,   245,   271,   320,   364,   365,   373,
     425,   443,   300,   446,   179,   447,   179,   188,   449,    66,
      67,    70,    93,   179,   198,   221,   287,   358,   383,   451,
     373,   385,   454,    60,   304,   383,   455,   295,   383,   385,
     456,    32,   457,   383,   385,   458,     4,   383,   385,   459,
      44,    60,    82,   102,   120,   124,   152,   153,   212,   222,
     284,   285,   358,   463,   226,   322,   469,    67,     5,    90,
      62,   298,   323,   477,    62,   298,   323,   476,     4,    89,
     124,   461,     5,    66,   385,   460,    15,    45,    67,    82,
     176,   308,   323,   470,   534,    45,    67,    82,   193,   253,
     298,   308,   471,   298,   475,    67,   245,   473,   299,    62,
     298,   323,   474,    20,   140,   252,   282,   478,    36,    47,
      75,   155,   198,   268,   323,   479,   385,    90,    15,   209,
     484,   383,   487,    67,    73,   490,    30,   491,    43,    88,
     204,   492,   155,   231,   274,   314,   493,   383,    17,    59,
     118,   184,   304,   383,   494,     5,     5,   321,   383,     4,
       5,   383,     4,     4,   205,   497,     5,     4,     4,   124,
     373,     4,    45,    48,    67,   101,   106,   154,   281,   307,
     308,   319,    92,   180,   272,   290,   387,     5,     4,   373,
       5,   159,   160,   260,   499,     5,   501,     5,   120,   159,
     160,   204,   260,   285,   502,    95,   114,   199,   515,     5,
     513,     5,   285,   514,     4,     5,   375,   375,   373,   373,
       5,     4,     5,    61,    67,    74,    76,    81,    84,    90,
     101,   108,   117,   134,   155,   172,   185,   186,   208,   231,
     245,   247,   262,   267,   274,   281,   300,   314,   315,   317,
     358,   519,   387,     5,     4,   210,   217,   218,   253,   363,
     386,   373,   383,   373,   383,     5,   373,    39,   114,   373,
     559,   375,   373,   383,   385,   558,   373,   390,   373,     4,
     384,    55,    91,   146,   260,   563,     4,     4,   373,     4,
     155,   274,   564,     5,   383,     4,    39,   114,   373,   574,
     373,    99,    62,   124,   159,   160,   260,   288,   576,   124,
     595,    62,   120,   124,   159,   160,   164,   204,   256,   260,
     285,   288,   299,   577,   578,    62,   124,   288,   594,     5,
       4,    33,   110,   216,   568,    67,   375,   402,    67,   375,
     403,    67,   375,   404,    12,   201,   567,   373,     4,   373,
     238,   373,   405,   373,   285,     4,   373,   373,     4,   239,
     309,   604,     4,   302,   602,     4,   302,   603,     4,   390,
     128,   373,   607,   373,   373,     4,     5,   373,    11,   373,
     373,   373,    29,    96,   170,   264,   269,   389,   389,     4,
     210,   373,   373,     4,     4,     4,   373,   373,   373,   373,
     373,   373,     4,   373,     4,   373,     4,     4,     5,     5,
     383,     5,   373,   373,   379,   381,   381,   383,   373,   373,
     373,   373,   373,   373,   373,   383,   385,   382,   373,   373,
     382,   373,     5,   284,   105,   199,   441,   205,   264,   444,
     179,    79,   183,   264,   445,   144,   187,   426,   426,     4,
     448,     4,   450,   205,   271,   452,   188,   453,   179,   390,
     373,   373,   383,   383,   390,   390,   390,   383,   390,   373,
     383,     4,   466,     4,   385,   464,   209,     4,   173,   329,
     465,   209,   383,     4,   137,   309,   468,     5,     5,   438,
       4,   209,   139,   261,   376,   373,     4,   472,   472,   472,
     472,     4,     5,    61,    67,   117,   134,   149,   155,   162,
     221,   240,   245,   247,   273,   274,   281,   300,   358,   528,
     385,   200,   200,    67,   480,    67,   481,    67,   482,   238,
     483,   373,     5,   439,   239,   485,   384,   390,     5,   383,
     383,   383,   383,     4,     4,     4,   375,     4,     4,   209,
     373,   387,     5,   373,    13,    14,    62,   202,   203,   278,
     288,   289,   322,    88,    88,    88,     5,     5,    13,    14,
      62,   202,   203,   278,   288,   289,   293,   322,    88,    88,
     164,    88,   164,   164,   169,   384,   505,   510,    88,   164,
       5,   503,     4,     4,    13,    62,   202,   278,   288,   322,
       5,     5,     4,   373,   384,    19,    20,    21,    49,    50,
      53,    56,    63,    67,    75,    76,    83,    84,   101,   108,
     112,   113,   116,   134,   155,   183,   208,   238,   240,   246,
     247,   262,   263,   273,   274,   300,   302,   315,   317,   324,
     358,    67,    81,    90,   101,   134,   155,   208,   247,   274,
     315,   317,     4,    29,   168,   226,   252,   522,     5,    64,
     107,   249,   265,   266,   360,   361,   527,   101,   520,    16,
     274,   525,    39,   114,   206,   526,     4,     5,    16,   225,
     310,   373,   274,   527,   535,   129,   527,   536,    35,    39,
     114,   138,   206,   309,   373,   537,   383,   375,    93,   101,
     108,   125,   131,   155,   165,   208,   216,   262,   274,   290,
     540,    39,   114,   206,     5,   274,   301,   544,    16,   127,
     177,   225,   310,   545,   302,   375,   546,     5,   101,   108,
     318,    16,    16,     4,   373,   373,   373,   373,   373,   373,
     390,   373,   373,   382,   373,     4,   390,     4,    39,   114,
     206,   279,   565,    39,   114,   206,   279,   566,     4,    99,
       5,     5,    88,    88,    88,     4,     5,     5,    88,     5,
      88,   164,    88,   164,   578,    62,   124,   164,   288,   582,
      62,   124,   288,   593,    88,   164,    62,   124,   288,   580,
       4,    62,   124,   288,   579,     5,     5,     4,     4,     5,
       5,     5,   373,   373,   373,     4,   373,   599,   373,   373,
     384,    65,     4,     4,     5,     4,     4,     5,     4,    99,
     276,   391,   373,   373,    11,     5,    11,   373,   373,    11,
       4,    11,     4,     4,   373,   373,   373,   373,   373,     4,
     373,     5,   373,     4,   375,     4,     4,   390,   383,   390,
     373,   373,   373,   383,   373,   382,   373,   373,     5,     5,
     373,   385,   373,   383,   373,   390,   390,   391,   391,   391,
     390,   382,   373,   390,   373,   376,   467,   173,     5,     4,
     390,   164,   164,     4,     5,     4,     4,   373,   462,    37,
      37,   373,    19,    20,    21,    49,    50,    53,    60,    63,
      67,    75,    76,    83,   112,   113,   116,   134,   155,   183,
     192,   238,   246,   247,   263,   274,   300,   302,   313,   324,
     358,    67,   134,   162,   247,   300,    29,   168,   226,   252,
     529,   373,   221,   373,   530,    16,   373,   273,   540,   273,
     221,   373,   531,   302,   532,    16,   100,   373,   373,     5,
     391,     4,     4,    57,   383,     4,     5,   496,   373,     5,
       5,     5,   164,   195,   395,   395,   172,   280,   393,     4,
       4,     5,     5,   500,   500,   500,   286,   286,     5,     5,
       5,    16,   166,   394,   394,   393,     4,     4,   393,     5,
       5,   504,     5,   511,     5,   512,   511,   512,   169,   357,
     384,   508,     5,   507,     5,   511,   512,     5,    13,    14,
      62,   202,   203,   278,   288,   289,   293,   322,     4,     4,
       5,     5,   395,   393,     4,     5,     5,   390,    83,   157,
     236,   237,   251,   294,   398,     6,     7,   373,   378,   252,
     252,   252,   108,    39,    67,   101,   108,   114,   134,   155,
     172,   208,   247,   262,   274,   302,   315,   317,   318,   358,
     521,   252,     5,    26,   174,   252,   298,   144,   108,    21,
      50,    53,    83,   113,   116,   240,   273,    21,    50,    53,
      56,    83,   113,   116,   240,   273,   300,    39,   252,   252,
     108,     5,   225,    26,   238,    35,   138,   309,   373,   277,
     284,   258,   383,   540,    39,   135,   238,   298,   258,   225,
       5,     5,   262,    26,   238,     4,     5,     5,   225,    35,
     138,   309,   373,   540,   225,   375,     4,     4,   373,     5,
     322,    21,    26,    49,    50,    52,    53,    63,    75,    76,
      83,    86,   104,   112,   113,   116,   183,   240,   246,   263,
     273,   301,   302,   324,   369,   523,   373,   373,   373,   373,
     373,   527,   383,     5,     4,     5,   373,   373,   383,   373,
     375,   373,   373,   527,     5,     5,   373,   373,   375,     5,
      16,     5,     5,   373,   373,   382,   373,   373,     4,   373,
     373,   114,   373,   373,   114,     4,    41,    42,   181,   182,
     211,   400,   400,    62,   124,   288,   590,    62,   124,   288,
     587,    62,   124,   288,   584,   400,     5,    62,   124,   288,
     581,    62,   124,   288,   592,    62,   124,   288,   591,    62,
     124,   288,   589,    62,   124,   288,   588,     5,     5,    62,
     124,   288,   583,     4,     5,     5,     4,    62,   124,   288,
     586,    62,   124,   288,   585,     5,     5,     4,     5,     5,
       4,   400,   400,   400,   373,   373,   373,     4,   383,   373,
     390,   384,     5,     5,    11,   373,   383,   385,   373,    11,
     373,   373,   373,    60,   373,     4,   373,   373,     4,   373,
     373,     5,   373,     5,   373,    46,   287,   427,     5,   375,
     375,   390,   373,     4,     4,     4,   390,   383,   373,   373,
     373,   373,   390,   383,   391,   382,   373,     4,   391,   373,
       4,   385,     5,    23,    24,    99,   392,     4,   383,   373,
     373,     4,   373,     5,    83,   157,   236,   237,   251,   294,
     383,   385,   252,   252,   252,    20,   252,   383,   252,    26,
     174,   252,   298,   144,    20,   252,   252,   252,    20,   252,
      26,   178,   238,   178,   277,   284,   178,   238,   306,   540,
     135,   178,   238,   298,     4,   262,    26,   178,   238,   540,
     221,   373,   373,   373,   373,   373,   373,   209,   373,   373,
      19,   248,   488,     4,     4,   373,   395,   395,   395,     4,
     395,   395,   395,    13,    14,    62,   202,   203,   278,   288,
     289,   322,   394,   395,   395,   395,   395,   395,     4,   395,
     395,     4,   394,    13,    14,    62,   202,   203,   278,   288,
     289,   322,     5,    13,    14,    62,   202,   203,   278,   288,
     289,   293,   322,    13,    14,    62,   202,   203,   278,   288,
     289,   322,     5,   506,     5,   509,     5,     5,    13,    14,
      62,   202,   203,   278,   288,   289,   293,   322,     5,    13,
      14,    62,   202,   203,   278,   288,   289,   293,   322,   286,
       5,     5,     5,   394,   394,   393,     4,     4,   393,     5,
       4,     4,   395,   395,     4,   395,   395,     5,   375,   383,
     385,     5,   373,   373,     5,   373,     5,   378,   108,   208,
     262,   108,   208,   262,     5,   373,   375,     5,   373,   383,
     375,     5,   378,   252,   252,    20,   252,    20,   252,   252,
      20,   252,   326,   326,     4,     4,     4,   521,     4,     4,
       4,   326,   326,     4,     5,     4,   373,     5,   373,     5,
     378,   375,   383,   383,   373,    26,    49,    52,    63,    86,
     104,   369,   396,     4,   373,   390,   375,     5,   383,   383,
     373,   375,   375,   383,   383,   373,   375,   373,     5,   373,
     238,   238,   373,   373,   238,   373,   238,   373,   373,   533,
     541,   373,   238,   238,   373,   373,   373,   373,   373,   373,
     373,   373,     5,   322,   373,   524,   373,   373,   238,   373,
     373,   373,   373,   383,   390,     5,     4,     4,   373,   373,
     390,   373,   373,   373,   383,   527,   373,   373,     5,     4,
     373,   373,   373,   373,     5,     5,     4,     5,     5,     4,
       5,     5,     4,   400,     5,     5,     4,     5,     5,     4,
       5,     5,     4,     5,     5,     4,     5,     5,     4,     4,
       4,     5,     5,     4,     4,     5,     5,     4,     5,     5,
       4,   373,   373,   373,   373,   390,   373,   383,   385,   373,
     390,   373,   373,   373,   373,   373,     5,   373,   373,   373,
       4,   373,   373,     5,   373,     5,   373,     4,   383,   373,
     390,   188,   388,   373,   388,   391,   390,   383,   373,   373,
       4,   373,   383,   383,   373,   376,     5,     5,     5,     5,
       5,   383,   390,   383,   383,   383,   383,   385,   383,   390,
     383,   383,   383,   385,   383,   383,   383,   383,   385,   383,
     383,   383,   373,   383,   383,   383,   383,   383,   383,   383,
     373,   373,     4,   373,     5,   373,   395,     5,     5,     5,
     393,     4,     4,     5,   395,   394,     4,   395,     5,     5,
       5,   394,   394,   393,     4,     4,     5,   286,     5,     5,
       5,   394,   394,   393,     4,     4,   393,     5,     5,     5,
       5,   394,   394,   393,     4,     4,     5,    13,    14,    62,
     202,   203,   278,   288,   289,   322,    13,    14,    62,   202,
     203,   278,   288,   289,   322,    13,    14,    62,   202,   203,
     278,   288,   289,   322,   286,     5,     5,     5,   394,   394,
     393,     4,     4,   393,     5,   286,     5,     5,     5,   394,
     394,   393,     4,     4,   393,     5,   394,     4,     4,   394,
       4,     4,   395,     5,   390,   383,   373,   373,   383,   373,
       5,   378,     5,   383,   375,     5,   383,   390,     5,   378,
     373,   373,   373,   373,   373,   373,   373,   373,   373,     4,
       4,     5,     4,     4,   373,   383,   373,     5,   378,   375,
     390,   390,   373,   382,   390,   390,   373,   390,   390,   373,
     373,   373,   373,   373,   373,   373,   373,   373,   373,    56,
      67,    94,   134,   300,   302,   358,   538,   539,   540,   552,
     553,   373,   373,   373,   373,   373,   373,   373,   373,   373,
     373,   373,   373,   383,     5,   373,   373,   373,   373,     4,
       4,   390,   391,     5,     5,   382,   373,     4,   390,   383,
       4,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     378,   373,   373,   373,   390,   373,   382,   373,   373,    11,
       5,     5,   373,   373,   373,   373,     5,   373,     4,   373,
       4,   390,   383,   373,   373,   391,   392,   373,     5,   373,
     383,   385,     5,     5,     5,     5,     5,   390,   392,   392,
     392,   390,   392,   391,   392,   392,   390,   392,   392,   392,
     390,   392,   392,   390,   383,   392,   390,   392,   392,   390,
     392,   390,     4,   383,   385,     5,   373,     4,   395,   394,
       4,   394,   394,     4,     4,   394,     4,   394,     5,     5,
       5,   394,   394,   393,     4,     4,     5,     5,     5,     5,
     394,   394,   393,     4,     4,     5,     5,     5,     5,   394,
     394,   393,     4,     4,     5,   394,   395,   395,   395,   395,
     395,     4,   395,   395,     4,   394,   394,   395,   395,   395,
     395,   395,     4,   395,   395,     4,   394,   394,     4,     4,
       4,   384,   392,     4,   383,   392,   373,   383,     4,   392,
     392,   383,     4,   373,   373,   373,   373,   373,   373,   373,
     373,   373,   373,   373,   383,   392,   373,   383,     4,   382,
     382,   383,   382,   382,   383,   383,   382,   382,   373,   373,
     373,   373,   373,   373,   378,   373,   373,   373,   370,   370,
     370,   370,   370,   370,   370,   539,   370,   378,   373,   373,
     373,   373,   378,   373,   373,   373,   373,   373,   373,   390,
     373,   322,   377,   378,   373,   373,   391,   375,   383,   383,
     391,   390,     4,   373,   382,   373,    60,   373,     5,     5,
       4,     4,   373,   373,     4,   373,     4,   388,   392,     5,
     390,     4,     5,     4,     5,   383,     5,   391,   392,   391,
     391,   391,     5,   390,     4,   373,   395,   394,   394,     4,
     394,   395,   395,   395,   395,   395,     4,   395,   395,   394,
     395,   395,   395,   395,   395,     4,   395,   395,   394,   395,
     395,   395,   395,   395,     4,   395,   395,   394,   395,   394,
       4,   395,   395,   394,     4,   395,   394,   390,   383,   392,
       4,   390,   373,   390,   373,   373,   373,   392,     4,   390,
     373,   382,   392,   373,   382,   392,   392,   383,   373,     4,
     397,   397,   373,   373,   397,   378,   397,   541,   383,   521,
       5,     4,     5,     5,     5,     4,   375,   378,   397,   397,
     373,   373,   378,   373,   373,   373,   373,   373,   382,   373,
       5,   541,   373,   397,   375,   542,   543,   390,   390,   375,
     391,     4,     5,   373,     5,     4,     4,     4,     4,     4,
       4,   373,     4,    31,   196,   296,   434,   383,     5,    31,
     196,   296,   399,   383,     4,   434,   373,   394,   394,   395,
     394,   395,   394,   395,   395,   394,   395,   394,   373,   392,
     383,   383,   373,   383,   373,   383,   383,   373,   383,   392,
       4,   541,   541,   377,   373,   541,     4,   541,   390,     5,
       4,     4,   541,   541,   377,   373,     4,   541,   541,   373,
     383,   541,   541,   541,   542,   549,   550,   540,   547,   548,
     375,     4,     5,     5,     4,     4,     4,   199,   320,   365,
     373,   425,   434,     4,   383,   434,     4,   395,   395,   395,
     395,   395,   384,   392,   392,   373,   392,     4,   392,   392,
     373,   392,   373,   541,   541,     4,   373,   541,     5,   373,
     541,     4,   373,   541,   390,   549,   551,   552,   370,   548,
       5,     5,   373,   426,   373,   426,   390,   392,     4,   383,
     385,     4,   378,   377,   373,   373,   377,   373,   383,   552,
     375,     5,     5,   373,   373,   373,   373,   399,     5,   383,
     385,   390,   383,   385,   541,   373,     4,   541,   373,   392,
       5,     5,   373,     5,   373,   390,   390,     4,   541,     4,
       5,     5,     5,   377,   377,   541,   541,   541
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
#line 478 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 479 "frame/parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 7:
#line 481 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 482 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 484 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 491 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 23:
#line 497 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 24:
#line 498 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 499 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 29:
#line 503 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 38:
#line 512 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 42:
#line 516 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 45:
#line 519 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 50:
#line 524 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 52:
#line 526 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 54:
#line 528 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 56:
#line 530 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 61:
#line 537 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 62:
#line 538 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 63:
#line 541 "frame/parser.Y"
    {yydebug=(yyvsp[(1) - (1)].integer);;}
    break;

  case 64:
#line 542 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 543 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 544 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 545 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 546 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 547 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 548 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 549 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 72:
#line 550 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 73:
#line 551 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 74:
#line 554 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 75:
#line 556 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 76:
#line 557 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 77:
#line 558 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 78:
#line 559 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 79:
#line 561 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 80:
#line 562 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 81:
#line 563 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 82:
#line 564 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 83:
#line 567 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 84:
#line 568 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 85:
#line 569 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 86:
#line 570 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 87:
#line 571 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 88:
#line 574 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 89:
#line 575 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 90:
#line 578 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 91:
#line 579 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 92:
#line 580 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 93:
#line 583 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 94:
#line 586 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 95:
#line 589 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 96:
#line 593 "frame/parser.Y"
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
#line 605 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 98:
#line 612 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 99:
#line 619 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 100:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 101:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 102:
#line 628 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 103:
#line 629 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 104:
#line 630 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 105:
#line 633 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 106:
#line 634 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 107:
#line 635 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 108:
#line 636 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 109:
#line 637 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 110:
#line 638 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 111:
#line 639 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 112:
#line 640 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 113:
#line 641 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 114:
#line 642 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 115:
#line 643 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 116:
#line 644 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 117:
#line 645 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 118:
#line 646 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 119:
#line 647 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 120:
#line 648 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 121:
#line 649 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 122:
#line 650 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 123:
#line 651 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 124:
#line 652 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 125:
#line 653 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 126:
#line 654 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 127:
#line 655 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 128:
#line 656 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 129:
#line 657 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 130:
#line 658 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 131:
#line 659 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 132:
#line 660 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 133:
#line 663 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 134:
#line 664 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 135:
#line 667 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 136:
#line 668 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 137:
#line 669 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 138:
#line 670 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 139:
#line 671 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 140:
#line 672 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 141:
#line 675 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 142:
#line 676 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 143:
#line 677 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 144:
#line 678 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 145:
#line 679 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 146:
#line 682 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 147:
#line 683 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 148:
#line 684 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 149:
#line 685 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 150:
#line 686 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 151:
#line 687 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 152:
#line 688 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 153:
#line 689 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 154:
#line 692 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 155:
#line 693 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 156:
#line 694 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 157:
#line 695 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 158:
#line 696 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 159:
#line 699 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 160:
#line 700 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 161:
#line 701 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 162:
#line 702 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 163:
#line 703 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 164:
#line 704 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 165:
#line 705 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 166:
#line 706 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 167:
#line 709 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 168:
#line 710 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 169:
#line 711 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 170:
#line 714 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 171:
#line 715 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 172:
#line 716 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 173:
#line 717 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 174:
#line 720 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 175:
#line 721 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 176:
#line 722 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 177:
#line 725 "frame/parser.Y"
    {;}
    break;

  case 178:
#line 726 "frame/parser.Y"
    {;}
    break;

  case 179:
#line 727 "frame/parser.Y"
    {;}
    break;

  case 180:
#line 730 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 181:
#line 731 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 182:
#line 732 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 183:
#line 735 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 184:
#line 736 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 185:
#line 737 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 186:
#line 738 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 187:
#line 739 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 188:
#line 740 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 189:
#line 741 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 190:
#line 742 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 191:
#line 745 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 192:
#line 746 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 193:
#line 749 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 194:
#line 750 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 195:
#line 751 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 196:
#line 752 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 197:
#line 753 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 198:
#line 754 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 199:
#line 757 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 200:
#line 758 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 201:
#line 759 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 202:
#line 760 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 203:
#line 763 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 204:
#line 764 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 205:
#line 765 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 206:
#line 766 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 207:
#line 767 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 208:
#line 768 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 213:
#line 775 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 214:
#line 776 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 215:
#line 777 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 216:
#line 778 "frame/parser.Y"
    {fr->set3dSyncCmd((yyvsp[(2) - (2)].integer));}
    break;

  case 217:
#line 780 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 218:
#line 783 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 219:
#line 784 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 220:
#line 787 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 221:
#line 788 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 222:
#line 791 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 223:
#line 792 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 224:
#line 795 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 225:
#line 797 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 227:
#line 801 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 228:
#line 802 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 231:
#line 805 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 233:
#line 807 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 234:
#line 810 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 235:
#line 811 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 236:
#line 814 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 237:
#line 815 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 238:
#line 817 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 239:
#line 819 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 240:
#line 820 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 241:
#line 821 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 242:
#line 823 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 243:
#line 825 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 244:
#line 828 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 245:
#line 829 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 246:
#line 832 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 247:
#line 834 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 248:
#line 837 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 249:
#line 839 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 250:
#line 842 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 251:
#line 846 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 252:
#line 847 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 254:
#line 851 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 255:
#line 852 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 256:
#line 853 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 260:
#line 859 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 261:
#line 860 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 263:
#line 863 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 264:
#line 868 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 265:
#line 869 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 266:
#line 872 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 267:
#line 873 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 268:
#line 874 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 269:
#line 875 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 270:
#line 876 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 271:
#line 879 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 272:
#line 880 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 273:
#line 881 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 274:
#line 882 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 275:
#line 885 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 276:
#line 887 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 277:
#line 892 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 278:
#line 897 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 279:
#line 904 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 280:
#line 906 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 281:
#line 908 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 282:
#line 910 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 283:
#line 912 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 287:
#line 919 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 288:
#line 921 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 289:
#line 923 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 290:
#line 925 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 291:
#line 927 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 292:
#line 929 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 293:
#line 930 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 299:
#line 941 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 300:
#line 944 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 301:
#line 947 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 302:
#line 953 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 303:
#line 958 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 304:
#line 961 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 305:
#line 962 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 306:
#line 965 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 307:
#line 966 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 308:
#line 968 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 309:
#line 974 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 310:
#line 975 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 311:
#line 976 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 312:
#line 977 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 313:
#line 980 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 314:
#line 981 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 315:
#line 984 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 316:
#line 985 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 317:
#line 988 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 318:
#line 989 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 319:
#line 993 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 320:
#line 995 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 321:
#line 998 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 322:
#line 1000 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 323:
#line 1003 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 325:
#line 1005 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 326:
#line 1006 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 327:
#line 1007 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 328:
#line 1010 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 329:
#line 1012 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 330:
#line 1013 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 331:
#line 1014 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 332:
#line 1015 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 333:
#line 1019 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 334:
#line 1021 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 335:
#line 1022 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 336:
#line 1023 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 337:
#line 1026 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 338:
#line 1028 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 339:
#line 1030 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 340:
#line 1032 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 341:
#line 1035 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 342:
#line 1038 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 343:
#line 1039 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 344:
#line 1040 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 345:
#line 1041 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 346:
#line 1044 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 347:
#line 1045 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 348:
#line 1048 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 349:
#line 1051 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 350:
#line 1052 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 364:
#line 1066 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 367:
#line 1069 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 368:
#line 1070 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 374:
#line 1076 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 375:
#line 1077 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 380:
#line 1082 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 381:
#line 1083 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 383:
#line 1086 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 385:
#line 1088 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 387:
#line 1090 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 389:
#line 1092 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 390:
#line 1094 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 393:
#line 1097 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 394:
#line 1101 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 395:
#line 1103 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 396:
#line 1107 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 397:
#line 1109 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 398:
#line 1112 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 399:
#line 1113 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 400:
#line 1114 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 401:
#line 1115 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 402:
#line 1116 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 403:
#line 1117 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 405:
#line 1119 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 406:
#line 1122 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 407:
#line 1123 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 408:
#line 1124 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 409:
#line 1127 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 410:
#line 1130 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 411:
#line 1132 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 412:
#line 1134 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 413:
#line 1135 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 414:
#line 1136 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 416:
#line 1138 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 418:
#line 1141 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 419:
#line 1147 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 420:
#line 1148 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 421:
#line 1151 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 422:
#line 1152 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 423:
#line 1153 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 424:
#line 1156 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 425:
#line 1157 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 427:
#line 1163 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 428:
#line 1165 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 429:
#line 1167 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 430:
#line 1170 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 432:
#line 1172 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 433:
#line 1176 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 434:
#line 1180 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 436:
#line 1182 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 437:
#line 1183 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 438:
#line 1184 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 439:
#line 1185 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 440:
#line 1186 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 442:
#line 1188 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 443:
#line 1189 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 444:
#line 1192 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 445:
#line 1193 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 446:
#line 1194 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 447:
#line 1197 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 448:
#line 1198 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 449:
#line 1202 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 450:
#line 1204 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 451:
#line 1212 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 452:
#line 1214 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 453:
#line 1216 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 454:
#line 1219 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 455:
#line 1221 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 456:
#line 1222 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 457:
#line 1225 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 458:
#line 1228 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 459:
#line 1230 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 460:
#line 1234 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 461:
#line 1236 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 462:
#line 1239 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 463:
#line 1243 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 464:
#line 1244 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 465:
#line 1246 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 466:
#line 1249 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 467:
#line 1250 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 469:
#line 1254 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 470:
#line 1255 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 471:
#line 1256 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 472:
#line 1259 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 473:
#line 1261 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 474:
#line 1262 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 476:
#line 1264 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 480:
#line 1268 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 481:
#line 1269 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 482:
#line 1270 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 483:
#line 1272 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 485:
#line 1274 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 486:
#line 1277 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 487:
#line 1279 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 488:
#line 1281 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 489:
#line 1282 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 490:
#line 1283 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 491:
#line 1284 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 492:
#line 1287 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 493:
#line 1288 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 494:
#line 1292 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 495:
#line 1294 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 496:
#line 1297 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 497:
#line 1300 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 498:
#line 1301 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 499:
#line 1303 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 500:
#line 1305 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 501:
#line 1307 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 502:
#line 1310 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 503:
#line 1311 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 504:
#line 1312 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 505:
#line 1315 "frame/parser.Y"
    {fr->getLayerCountCmd();;}
    break;

  case 506:
#line 1316 "frame/parser.Y"
    {fr->getLayerNoCmd();;}
    break;

  case 507:
#line 1317 "frame/parser.Y"
    {fr->getLayerColorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 508:
#line 1318 "frame/parser.Y"
    {fr->getLayerBlendCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 509:
#line 1319 "frame/parser.Y"
    {fr->getLayerTransparencyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 510:
#line 1320 "frame/parser.Y"
    {fr->getLayerViewCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 511:
#line 1323 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 512:
#line 1324 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 513:
#line 1325 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 514:
#line 1326 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 515:
#line 1327 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 516:
#line 1328 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 517:
#line 1329 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 518:
#line 1332 "frame/parser.Y"
    {(yyval.integer) = 0;;}
    break;

  case 519:
#line 1333 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 520:
#line 1336 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 521:
#line 1339 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 522:
#line 1340 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 523:
#line 1341 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 524:
#line 1344 "frame/parser.Y"
    {fr->getMultiColorSystemCmd();;}
    break;

  case 525:
#line 1347 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 526:
#line 1348 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 527:
#line 1349 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 528:
#line 1352 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 529:
#line 1353 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 530:
#line 1354 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 531:
#line 1357 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 532:
#line 1358 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 533:
#line 1359 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 534:
#line 1360 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 535:
#line 1361 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 536:
#line 1362 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 541:
#line 1369 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 542:
#line 1370 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 543:
#line 1371 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 544:
#line 1374 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 545:
#line 1375 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 546:
#line 1378 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 547:
#line 1379 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 548:
#line 1382 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 549:
#line 1383 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 550:
#line 1386 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 551:
#line 1387 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 552:
#line 1390 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 554:
#line 1392 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 555:
#line 1395 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 556:
#line 1396 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 558:
#line 1400 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 559:
#line 1404 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 560:
#line 1407 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer),
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 561:
#line 1414 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 562:
#line 1415 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 563:
#line 1418 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 564:
#line 1419 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 567:
#line 1422 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 568:
#line 1423 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 569:
#line 1424 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 570:
#line 1425 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 572:
#line 1427 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 573:
#line 1428 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 574:
#line 1429 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 576:
#line 1431 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 577:
#line 1432 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 578:
#line 1433 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 579:
#line 1434 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 581:
#line 1438 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 582:
#line 1441 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 583:
#line 1442 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 584:
#line 1445 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 585:
#line 1446 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 586:
#line 1447 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 587:
#line 1448 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 588:
#line 1451 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 589:
#line 1452 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 590:
#line 1453 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 591:
#line 1454 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 592:
#line 1457 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 593:
#line 1458 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 594:
#line 1459 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 595:
#line 1460 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 596:
#line 1461 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 597:
#line 1462 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 598:
#line 1465 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 599:
#line 1466 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 600:
#line 1467 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 603:
#line 1471 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 604:
#line 1472 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 605:
#line 1475 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 606:
#line 1478 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 607:
#line 1479 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 608:
#line 1483 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 609:
#line 1485 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 610:
#line 1486 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 617:
#line 1498 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 618:
#line 1500 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 619:
#line 1502 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 620:
#line 1503 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 621:
#line 1505 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 622:
#line 1507 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 623:
#line 1509 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 624:
#line 1511 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 625:
#line 1513 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 629:
#line 1519 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 630:
#line 1520 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 631:
#line 1521 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 632:
#line 1522 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 633:
#line 1523 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 634:
#line 1525 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 635:
#line 1526 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 636:
#line 1527 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 637:
#line 1528 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 638:
#line 1531 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 639:
#line 1535 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 640:
#line 1537 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 641:
#line 1539 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 642:
#line 1541 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 643:
#line 1543 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 644:
#line 1545 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 645:
#line 1547 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 646:
#line 1549 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str),
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 647:
#line 1552 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 648:
#line 1554 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 649:
#line 1556 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 659:
#line 1568 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 660:
#line 1569 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 661:
#line 1570 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 662:
#line 1571 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 663:
#line 1572 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 664:
#line 1573 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 665:
#line 1575 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 666:
#line 1577 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 667:
#line 1578 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 668:
#line 1579 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 669:
#line 1580 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 670:
#line 1583 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 671:
#line 1584 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 672:
#line 1585 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 673:
#line 1586 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 674:
#line 1587 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 675:
#line 1589 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 676:
#line 1590 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 677:
#line 1591 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 678:
#line 1592 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 684:
#line 1603 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 685:
#line 1606 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 686:
#line 1609 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 687:
#line 1612 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 688:
#line 1615 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 689:
#line 1618 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 690:
#line 1621 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 691:
#line 1624 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 692:
#line 1627 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 693:
#line 1632 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 694:
#line 1635 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 695:
#line 1638 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 696:
#line 1641 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 697:
#line 1644 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 698:
#line 1647 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 699:
#line 1650 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 700:
#line 1653 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 701:
#line 1656 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 702:
#line 1659 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 703:
#line 1662 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 704:
#line 1667 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 705:
#line 1670 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 706:
#line 1673 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 707:
#line 1676 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 708:
#line 1679 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 709:
#line 1682 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 710:
#line 1685 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 711:
#line 1688 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 712:
#line 1691 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 713:
#line 1696 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 714:
#line 1698 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 715:
#line 1700 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 716:
#line 1702 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 717:
#line 1704 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 718:
#line 1706 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 719:
#line 1711 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 720:
#line 1713 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 721:
#line 1715 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 722:
#line 1719 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 723:
#line 1722 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 724:
#line 1725 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 725:
#line 1728 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 726:
#line 1731 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 727:
#line 1734 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 728:
#line 1737 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 729:
#line 1740 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer),
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 730:
#line 1743 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 731:
#line 1746 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 732:
#line 1749 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 733:
#line 1753 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 734:
#line 1754 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 735:
#line 1755 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 736:
#line 1756 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 737:
#line 1757 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 738:
#line 1758 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 739:
#line 1760 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 740:
#line 1762 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 741:
#line 1763 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 742:
#line 1764 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 743:
#line 1765 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 744:
#line 1768 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 745:
#line 1769 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 746:
#line 1770 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 747:
#line 1771 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 748:
#line 1772 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 749:
#line 1774 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 750:
#line 1775 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 751:
#line 1776 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 752:
#line 1777 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 753:
#line 1781 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 754:
#line 1783 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 755:
#line 1784 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 756:
#line 1786 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 757:
#line 1788 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 758:
#line 1790 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 759:
#line 1793 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 760:
#line 1794 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 761:
#line 1797 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 762:
#line 1798 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 763:
#line 1799 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 764:
#line 1802 "frame/parser.Y"
    {;}
    break;

  case 765:
#line 1805 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 766:
#line 1806 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 767:
#line 1807 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 768:
#line 1808 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 769:
#line 1809 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 770:
#line 1810 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 771:
#line 1811 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 772:
#line 1815 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 774:
#line 1823 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 775:
#line 1824 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 776:
#line 1826 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 777:
#line 1828 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 778:
#line 1829 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 779:
#line 1830 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 781:
#line 1831 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 784:
#line 1834 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 785:
#line 1835 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 786:
#line 1837 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 787:
#line 1839 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 788:
#line 1841 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 789:
#line 1844 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 790:
#line 1846 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 791:
#line 1847 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 792:
#line 1849 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 793:
#line 1852 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 794:
#line 1855 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 795:
#line 1859 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 796:
#line 1862 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 797:
#line 1865 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 798:
#line 1868 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 799:
#line 1872 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 800:
#line 1876 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 801:
#line 1881 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 802:
#line 1885 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 803:
#line 1887 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 804:
#line 1888 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 805:
#line 1890 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 806:
#line 1892 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 807:
#line 1894 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 808:
#line 1896 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 809:
#line 1897 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 810:
#line 1899 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 811:
#line 1901 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 812:
#line 1904 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 813:
#line 1908 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 814:
#line 1912 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 815:
#line 1914 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 816:
#line 1916 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 817:
#line 1918 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 818:
#line 1920 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 819:
#line 1922 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 820:
#line 1924 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 821:
#line 1926 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 822:
#line 1928 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 823:
#line 1930 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 824:
#line 1932 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 825:
#line 1934 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 826:
#line 1936 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 827:
#line 1938 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 828:
#line 1939 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 829:
#line 1941 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 830:
#line 1943 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 831:
#line 1944 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 832:
#line 1945 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 833:
#line 1947 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 834:
#line 1949 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 835:
#line 1950 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 836:
#line 1951 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 837:
#line 1952 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 838:
#line 1954 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 839:
#line 1956 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 840:
#line 1960 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 841:
#line 1963 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 842:
#line 1966 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 843:
#line 1970 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 844:
#line 1974 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 845:
#line 1979 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 846:
#line 1983 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 847:
#line 1984 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 848:
#line 1985 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 849:
#line 1987 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 850:
#line 1989 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 851:
#line 1993 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 852:
#line 1994 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 853:
#line 1995 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 854:
#line 1997 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 855:
#line 2000 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 856:
#line 2003 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 857:
#line 2006 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 858:
#line 2007 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 859:
#line 2011 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 860:
#line 2015 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 861:
#line 2017 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 862:
#line 2018 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 863:
#line 2020 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 864:
#line 2023 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 865:
#line 2026 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 866:
#line 2027 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 867:
#line 2029 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 868:
#line 2030 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 869:
#line 2031 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 870:
#line 2033 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 871:
#line 2034 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 872:
#line 2036 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 873:
#line 2039 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 874:
#line 2042 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 875:
#line 2044 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 876:
#line 2045 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 880:
#line 2050 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 881:
#line 2051 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 882:
#line 2053 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 883:
#line 2055 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 884:
#line 2057 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 885:
#line 2058 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 889:
#line 2064 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 890:
#line 2065 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 891:
#line 2066 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 892:
#line 2067 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 893:
#line 2068 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 894:
#line 2069 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 895:
#line 2070 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 896:
#line 2071 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 897:
#line 2072 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 898:
#line 2073 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 899:
#line 2075 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 900:
#line 2077 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 901:
#line 2078 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 902:
#line 2079 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 903:
#line 2080 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 904:
#line 2081 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 905:
#line 2083 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 906:
#line 2084 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 907:
#line 2085 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 908:
#line 2086 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 909:
#line 2087 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 910:
#line 2089 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 911:
#line 2090 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 912:
#line 2091 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 913:
#line 2092 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 914:
#line 2093 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 915:
#line 2094 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 916:
#line 2097 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 917:
#line 2098 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 918:
#line 2099 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 919:
#line 2100 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 920:
#line 2101 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 921:
#line 2102 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 922:
#line 2103 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 923:
#line 2104 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 924:
#line 2105 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 925:
#line 2106 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 926:
#line 2107 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 927:
#line 2108 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 928:
#line 2109 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 929:
#line 2110 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 930:
#line 2111 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 931:
#line 2112 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 932:
#line 2113 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 933:
#line 2114 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 934:
#line 2115 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 935:
#line 2116 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 936:
#line 2117 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 937:
#line 2120 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 938:
#line 2121 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 939:
#line 2122 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 940:
#line 2123 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 941:
#line 2124 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 942:
#line 2126 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 943:
#line 2136 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 944:
#line 2144 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 945:
#line 2153 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 946:
#line 2161 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 947:
#line 2168 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 948:
#line 2175 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 949:
#line 2183 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 950:
#line 2191 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 951:
#line 2196 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 952:
#line 2201 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 953:
#line 2206 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 954:
#line 2211 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 955:
#line 2216 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 956:
#line 2221 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 957:
#line 2226 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 958:
#line 2235 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer),
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 959:
#line 2245 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 960:
#line 2255 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 961:
#line 2264 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 962:
#line 2272 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 963:
#line 2282 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 964:
#line 2292 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 965:
#line 2302 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 966:
#line 2314 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 967:
#line 2323 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 969:
#line 2331 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 970:
#line 2333 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 971:
#line 2335 "frame/parser.Y"
    {
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 972:
#line 2340 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 973:
#line 2343 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 974:
#line 2344 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 975:
#line 2345 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 976:
#line 2352 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 977:
#line 2354 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 978:
#line 2355 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 979:
#line 2358 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 980:
#line 2359 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 981:
#line 2360 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 982:
#line 2361 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 983:
#line 2362 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 984:
#line 2363 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 985:
#line 2364 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 987:
#line 2368 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 988:
#line 2369 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 989:
#line 2370 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 990:
#line 2371 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 991:
#line 2372 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 992:
#line 2375 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 993:
#line 2377 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 994:
#line 2379 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 995:
#line 2381 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 996:
#line 2383 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 997:
#line 2385 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 998:
#line 2387 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 999:
#line 2388 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1000:
#line 2389 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1001:
#line 2391 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1002:
#line 2393 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1003:
#line 2396 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1004:
#line 2398 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1005:
#line 2399 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1006:
#line 2400 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1007:
#line 2402 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1008:
#line 2404 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1009:
#line 2407 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer),
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1010:
#line 2410 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1011:
#line 2411 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1012:
#line 2412 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1013:
#line 2413 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1014:
#line 2415 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1015:
#line 2416 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1016:
#line 2417 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1017:
#line 2418 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1018:
#line 2419 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1019:
#line 2421 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1020:
#line 2423 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1021:
#line 2425 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1022:
#line 2427 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1023:
#line 2429 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1024:
#line 2430 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1025:
#line 2432 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1026:
#line 2434 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1027:
#line 2436 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1028:
#line 2437 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1029:
#line 2438 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1030:
#line 2440 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1031:
#line 2442 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1032:
#line 2445 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1033:
#line 2448 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1034:
#line 2449 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1035:
#line 2451 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1036:
#line 2454 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1037:
#line 2457 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1038:
#line 2458 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1039:
#line 2459 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1040:
#line 2460 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1041:
#line 2462 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1042:
#line 2464 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1043:
#line 2466 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1044:
#line 2467 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1045:
#line 2469 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1046:
#line 2470 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1047:
#line 2471 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1048:
#line 2472 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1049:
#line 2473 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1050:
#line 2475 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1051:
#line 2477 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1052:
#line 2479 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1053:
#line 2481 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1055:
#line 2483 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1056:
#line 2484 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1057:
#line 2486 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1058:
#line 2488 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1059:
#line 2489 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1060:
#line 2490 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1062:
#line 2492 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1064:
#line 2496 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1065:
#line 2497 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1066:
#line 2498 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1067:
#line 2499 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1068:
#line 2500 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1069:
#line 2501 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1070:
#line 2503 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1071:
#line 2504 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1072:
#line 2506 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1073:
#line 2509 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1074:
#line 2510 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1075:
#line 2511 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1076:
#line 2512 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1077:
#line 2515 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1078:
#line 2516 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1079:
#line 2519 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1080:
#line 2520 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1081:
#line 2523 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1082:
#line 2524 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1083:
#line 2527 "frame/parser.Y"
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

  case 1084:
#line 2540 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1085:
#line 2541 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1086:
#line 2545 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1087:
#line 2546 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1088:
#line 2550 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1089:
#line 2551 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1090:
#line 2556 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1091:
#line 2560 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1092:
#line 2565 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1093:
#line 2567 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1094:
#line 2570 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1095:
#line 2572 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1096:
#line 2575 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1097:
#line 2577 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1098:
#line 2580 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1099:
#line 2581 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1100:
#line 2582 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1101:
#line 2583 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1102:
#line 2584 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1103:
#line 2585 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1104:
#line 2587 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1107:
#line 2594 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1108:
#line 2595 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1109:
#line 2596 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1110:
#line 2597 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1111:
#line 2598 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1112:
#line 2599 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1115:
#line 2604 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1116:
#line 2605 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1117:
#line 2606 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1118:
#line 2607 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1119:
#line 2608 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1120:
#line 2609 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1121:
#line 2610 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1122:
#line 2611 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1123:
#line 2612 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1124:
#line 2613 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1125:
#line 2614 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1126:
#line 2615 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1129:
#line 2622 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1130:
#line 2623 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1132:
#line 2627 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1133:
#line 2629 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1134:
#line 2630 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1135:
#line 2633 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1136:
#line 2634 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1137:
#line 2635 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1138:
#line 2636 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1139:
#line 2637 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1140:
#line 2638 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1141:
#line 2641 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1142:
#line 2642 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1145:
#line 2650 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1146:
#line 2653 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1147:
#line 2654 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1151:
#line 2661 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1152:
#line 2664 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1153:
#line 2668 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1154:
#line 2669 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1155:
#line 2670 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1156:
#line 2671 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1157:
#line 2672 "frame/parser.Y"
    {fr->layerColorCmd(0,(yyvsp[(2) - (2)].str));;}
    break;

  case 1158:
#line 2673 "frame/parser.Y"
    {fr->layerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1159:
#line 2674 "frame/parser.Y"
    {fr->layerBlendCmd(0,(FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1160:
#line 2675 "frame/parser.Y"
    {fr->layerBlendCmd((yyvsp[(1) - (3)].integer),(FitsMask::MaskBlend)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1161:
#line 2676 "frame/parser.Y"
    {fr->layerTransparencyCmd(0,(yyvsp[(2) - (2)].real));;}
    break;

  case 1162:
#line 2677 "frame/parser.Y"
    {fr->layerTransparencyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 1163:
#line 2678 "frame/parser.Y"
    {fr->layerShowCmd(0);;}
    break;

  case 1164:
#line 2679 "frame/parser.Y"
    {fr->layerShowCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1165:
#line 2680 "frame/parser.Y"
    {fr->layerHideCmd(0);;}
    break;

  case 1166:
#line 2681 "frame/parser.Y"
    {fr->layerHideCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1167:
#line 2682 "frame/parser.Y"
    {fr->layerDeleteCmd(0);;}
    break;

  case 1168:
#line 2683 "frame/parser.Y"
    {fr->layerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1169:
#line 2684 "frame/parser.Y"
    {fr->layerUpCmd(0);;}
    break;

  case 1170:
#line 2685 "frame/parser.Y"
    {fr->layerUpCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1171:
#line 2686 "frame/parser.Y"
    {fr->layerDownCmd(0);;}
    break;

  case 1172:
#line 2687 "frame/parser.Y"
    {fr->layerDownCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1173:
#line 2688 "frame/parser.Y"
    {fr->layerTopCmd(0);;}
    break;

  case 1174:
#line 2689 "frame/parser.Y"
    {fr->layerTopCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1175:
#line 2690 "frame/parser.Y"
    {fr->layerBottomCmd(0);;}
    break;

  case 1176:
#line 2691 "frame/parser.Y"
    {fr->layerBottomCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1177:
#line 2694 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1178:
#line 2695 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1179:
#line 2696 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1180:
#line 2697 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1181:
#line 2698 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1182:
#line 2699 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1183:
#line 2700 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1184:
#line 2701 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1185:
#line 2707 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1186:
#line 2708 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1187:
#line 2709 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1188:
#line 2710 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1189:
#line 2714 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1190:
#line 2715 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1191:
#line 2717 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1192:
#line 2722 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1194:
#line 2724 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1196:
#line 2726 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1197:
#line 2729 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1198:
#line 2731 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1199:
#line 2736 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1200:
#line 2739 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1201:
#line 2740 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1202:
#line 2741 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1203:
#line 2744 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1204:
#line 2746 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1205:
#line 2750 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1206:
#line 2751 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1207:
#line 2755 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1208:
#line 2756 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1209:
#line 2757 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1210:
#line 2758 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1211:
#line 2764 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1212:
#line 2765 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1213:
#line 2771 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1214:
#line 2772 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1215:
#line 2773 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1216:
#line 2774 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1219:
#line 2782 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1220:
#line 2784 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1221:
#line 2785 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1222:
#line 2786 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1223:
#line 2790 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1224:
#line 2791 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1225:
#line 2792 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1226:
#line 2793 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1227:
#line 2796 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1228:
#line 2797 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1229:
#line 2800 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1230:
#line 2801 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1231:
#line 2802 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1232:
#line 2805 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1233:
#line 2806 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1234:
#line 2807 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1235:
#line 2811 "frame/parser.Y"
    {fr->setMultiColorSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1236:
#line 2814 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1237:
#line 2815 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1238:
#line 2816 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1239:
#line 2819 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1240:
#line 2820 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1241:
#line 2821 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1242:
#line 2822 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1243:
#line 2825 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1244:
#line 2826 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1246:
#line 2828 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1247:
#line 2829 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1248:
#line 2832 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1249:
#line 2833 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1250:
#line 2834 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1255:
#line 2841 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1256:
#line 2845 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1257:
#line 2847 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1258:
#line 2849 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1275:
#line 2870 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1276:
#line 2871 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1277:
#line 2872 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1278:
#line 2875 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1279:
#line 2876 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1280:
#line 2877 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1281:
#line 2880 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1282:
#line 2881 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1283:
#line 2882 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1284:
#line 2885 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1285:
#line 2886 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1286:
#line 2887 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1288:
#line 2891 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1289:
#line 2892 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1290:
#line 2893 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1291:
#line 2896 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1292:
#line 2897 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1293:
#line 2898 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1294:
#line 2902 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1295:
#line 2904 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1296:
#line 2906 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1297:
#line 2909 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1298:
#line 2910 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1299:
#line 2911 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1300:
#line 2914 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1301:
#line 2915 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1302:
#line 2916 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1303:
#line 2920 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1304:
#line 2922 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1305:
#line 2924 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1306:
#line 2927 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1307:
#line 2928 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1308:
#line 2929 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1309:
#line 2932 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1310:
#line 2933 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1311:
#line 2934 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1312:
#line 2938 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1313:
#line 2940 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1314:
#line 2942 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1315:
#line 2945 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1316:
#line 2946 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1317:
#line 2947 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1318:
#line 2950 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1319:
#line 2951 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1320:
#line 2952 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1321:
#line 2955 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1322:
#line 2956 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1323:
#line 2957 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1324:
#line 2961 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1325:
#line 2963 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1326:
#line 2965 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1327:
#line 2969 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1328:
#line 2973 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1329:
#line 2975 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1330:
#line 2979 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1331:
#line 2982 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1332:
#line 2983 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1333:
#line 2984 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1334:
#line 2985 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1335:
#line 2988 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1336:
#line 2990 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1337:
#line 2992 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1338:
#line 2995 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1340:
#line 2999 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1341:
#line 3000 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1342:
#line 3001 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1343:
#line 3004 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1344:
#line 3005 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1345:
#line 3009 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1347:
#line 3011 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1350:
#line 3016 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1351:
#line 3017 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1352:
#line 3018 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1353:
#line 3021 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1354:
#line 3022 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1355:
#line 3023 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1356:
#line 3026 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1357:
#line 3028 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1358:
#line 3033 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1359:
#line 3034 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1360:
#line 3037 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1361:
#line 3044 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1362:
#line 3046 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1363:
#line 3048 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1364:
#line 3053 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1366:
#line 3057 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1367:
#line 3058 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1368:
#line 3059 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1369:
#line 3061 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1370:
#line 3063 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1371:
#line 3068 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11602 "frame/parser.C"
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


#line 3072 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

