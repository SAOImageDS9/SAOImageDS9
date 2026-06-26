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
#define YYFINAL  394
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5735

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  371
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  235
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1367
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3011

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
      89,    92,    95,    98,   101,   105,   108,   111,   115,   118,
     121,   124,   127,   130,   133,   135,   139,   142,   145,   148,
     150,   153,   156,   159,   161,   164,   166,   169,   172,   175,
     178,   180,   182,   184,   187,   190,   193,   196,   199,   202,
     205,   208,   211,   214,   216,   218,   220,   222,   224,   226,
     228,   230,   232,   233,   236,   239,   241,   243,   244,   246,
     248,   250,   252,   254,   256,   258,   261,   264,   267,   270,
     272,   274,   276,   278,   280,   282,   284,   286,   288,   290,
     292,   294,   296,   298,   300,   302,   304,   306,   308,   310,
     312,   314,   316,   318,   320,   322,   324,   326,   328,   330,
     332,   334,   336,   338,   340,   341,   343,   345,   347,   349,
     351,   352,   354,   356,   358,   360,   362,   364,   366,   368,
     370,   372,   374,   376,   378,   380,   382,   384,   386,   387,
     389,   391,   393,   395,   397,   399,   401,   402,   404,   406,
     407,   409,   411,   413,   414,   416,   418,   419,   421,   423,
     424,   426,   428,   429,   431,   433,   435,   437,   439,   441,
     443,   444,   446,   448,   450,   452,   454,   456,   458,   459,
     461,   463,   465,   466,   468,   470,   472,   474,   476,   479,
     482,   485,   488,   491,   494,   497,   500,   503,   505,   508,
     510,   513,   515,   518,   521,   528,   531,   536,   539,   542,
     545,   549,   552,   555,   557,   560,   562,   565,   570,   576,
     579,   583,   589,   596,   598,   600,   602,   610,   622,   631,
     644,   646,   649,   652,   654,   656,   659,   662,   665,   668,
     672,   676,   679,   682,   684,   686,   688,   690,   692,   694,
     696,   699,   702,   705,   707,   711,   714,   717,   720,   726,
     736,   746,   756,   764,   766,   769,   771,   777,   787,   797,
     807,   815,   817,   820,   823,   826,   829,   832,   835,   849,
     863,   876,   889,   891,   892,   894,   896,   901,   908,   910,
     912,   914,   916,   918,   920,   922,   924,   926,   931,   935,
     940,   941,   948,   957,   960,   964,   968,   972,   973,   978,
     983,   988,   993,   997,  1001,  1003,  1007,  1013,  1018,  1023,
    1027,  1030,  1031,  1033,  1035,  1037,  1039,  1041,  1045,  1046,
    1049,  1052,  1055,  1058,  1061,  1064,  1067,  1070,  1073,  1076,
    1079,  1082,  1085,  1088,  1090,  1093,  1096,  1099,  1104,  1108,
    1111,  1114,  1117,  1120,  1123,  1125,  1129,  1132,  1135,  1138,
    1140,  1143,  1152,  1155,  1157,  1160,  1162,  1165,  1167,  1172,
    1176,  1179,  1181,  1189,  1198,  1206,  1215,  1217,  1219,  1221,
    1224,  1226,  1228,  1231,  1233,  1234,  1237,  1240,  1242,  1243,
    1246,  1249,  1251,  1253,  1256,  1259,  1262,  1264,  1266,  1268,
    1270,  1272,  1274,  1275,  1277,  1280,  1282,  1287,  1293,  1294,
    1297,  1299,  1305,  1308,  1311,  1313,  1315,  1317,  1320,  1322,
    1325,  1327,  1329,  1330,  1332,  1334,  1335,  1337,  1343,  1350,
    1354,  1361,  1365,  1367,  1371,  1373,  1375,  1377,  1381,  1388,
    1396,  1402,  1405,  1407,  1413,  1418,  1420,  1424,  1425,  1427,
    1430,  1432,  1437,  1439,  1442,  1444,  1447,  1451,  1454,  1456,
    1459,  1461,  1466,  1469,  1471,  1473,  1477,  1479,  1482,  1486,
    1489,  1490,  1492,  1494,  1499,  1502,  1503,  1505,  1509,  1514,
    1519,  1520,  1522,  1524,  1526,  1528,  1531,  1534,  1537,  1540,
    1542,  1544,  1546,  1548,  1550,  1552,  1554,  1555,  1557,  1559,
    1561,  1563,  1565,  1567,  1569,  1571,  1573,  1575,  1577,  1579,
    1581,  1584,  1586,  1589,  1591,  1594,  1597,  1600,  1603,  1605,
    1607,  1609,  1610,  1612,  1613,  1615,  1616,  1618,  1619,  1621,
    1622,  1625,  1628,  1629,  1631,  1634,  1636,  1643,  1649,  1651,
    1653,  1655,  1658,  1661,  1664,  1666,  1668,  1670,  1672,  1675,
    1677,  1679,  1681,  1684,  1686,  1688,  1690,  1693,  1696,  1699,
    1700,  1702,  1703,  1705,  1707,  1709,  1711,  1713,  1715,  1717,
    1719,  1722,  1725,  1728,  1730,  1733,  1737,  1739,  1742,  1745,
    1750,  1756,  1758,  1769,  1771,  1774,  1778,  1782,  1785,  1788,
    1791,  1794,  1797,  1800,  1803,  1808,  1813,  1818,  1822,  1826,
    1832,  1837,  1842,  1847,  1851,  1855,  1859,  1863,  1867,  1871,
    1874,  1877,  1882,  1886,  1890,  1894,  1898,  1903,  1908,  1913,
    1918,  1924,  1929,  1936,  1944,  1949,  1954,  1960,  1963,  1967,
    1971,  1975,  1979,  1983,  1987,  1991,  1994,  1998,  2002,  2006,
    2010,  2015,  2019,  2025,  2032,  2036,  2040,  2045,  2049,  2053,
    2057,  2061,  2065,  2071,  2075,  2079,  2084,  2088,  2091,  2094,
    2096,  2100,  2105,  2110,  2115,  2120,  2125,  2132,  2137,  2142,
    2148,  2153,  2158,  2163,  2168,  2174,  2179,  2186,  2194,  2199,
    2204,  2210,  2216,  2222,  2228,  2234,  2240,  2248,  2254,  2260,
    2267,  2272,  2277,  2282,  2287,  2292,  2299,  2304,  2309,  2315,
    2321,  2327,  2333,  2339,  2346,  2352,  2360,  2369,  2375,  2381,
    2388,  2392,  2396,  2400,  2404,  2409,  2413,  2419,  2426,  2430,
    2434,  2439,  2443,  2447,  2451,  2455,  2459,  2465,  2469,  2473,
    2478,  2483,  2488,  2492,  2498,  2503,  2508,  2511,  2515,  2522,
    2529,  2531,  2533,  2535,  2538,  2541,  2544,  2548,  2552,  2555,
    2568,  2571,  2574,  2576,  2580,  2585,  2588,  2589,  2593,  2595,
    2598,  2601,  2604,  2607,  2610,  2615,  2620,  2625,  2629,  2634,
    2640,  2649,  2656,  2666,  2673,  2681,  2692,  2704,  2717,  2727,
    2733,  2740,  2744,  2750,  2756,  2763,  2769,  2774,  2784,  2795,
    2807,  2817,  2824,  2831,  2838,  2845,  2852,  2859,  2866,  2873,
    2880,  2888,  2896,  2899,  2904,  2909,  2914,  2919,  2925,  2930,
    2935,  2941,  2947,  2951,  2956,  2961,  2966,  2974,  2984,  2991,
    3002,  3014,  3027,  3037,  3041,  3044,  3048,  3054,  3062,  3067,
    3071,  3075,  3082,  3090,  3098,  3103,  3108,  3118,  3123,  3127,
    3132,  3140,  3148,  3151,  3155,  3159,  3163,  3168,  3171,  3174,
    3179,  3190,  3194,  3196,  3200,  3203,  3206,  3209,  3212,  3216,
    3222,  3227,  3233,  3236,  3239,  3242,  3245,  3249,  3252,  3255,
    3258,  3262,  3265,  3269,  3274,  3278,  3282,  3289,  3294,  3297,
    3301,  3304,  3307,  3312,  3316,  3320,  3323,  3327,  3329,  3332,
    3334,  3337,  3340,  3343,  3345,  3347,  3349,  3351,  3354,  3356,
    3359,  3362,  3364,  3367,  3370,  3372,  3375,  3377,  3379,  3381,
    3383,  3385,  3387,  3389,  3391,  3392,  3394,  3397,  3400,  3403,
    3407,  3413,  3421,  3429,  3436,  3443,  3450,  3457,  3463,  3470,
    3477,  3484,  3491,  3498,  3505,  3512,  3524,  3532,  3540,  3548,
    3558,  3568,  3579,  3592,  3605,  3608,  3611,  3615,  3620,  3625,
    3630,  3631,  3633,  3635,  3640,  3645,  3647,  3649,  3651,  3653,
    3655,  3657,  3659,  3661,  3664,  3666,  3668,  3670,  3674,  3678,
    3687,  3694,  3705,  3713,  3721,  3727,  3730,  3733,  3737,  3742,
    3748,  3754,  3760,  3764,  3769,  3775,  3781,  3787,  3793,  3796,
    3800,  3804,  3810,  3814,  3818,  3822,  3827,  3833,  3839,  3845,
    3851,  3855,  3860,  3866,  3872,  3875,  3878,  3882,  3888,  3895,
    3902,  3906,  3910,  3917,  3923,  3929,  3932,  3936,  3940,  3946,
    3953,  3957,  3960,  3963,  3967,  3970,  3974,  3977,  3981,  3987,
    3994,  3997,  4000,  4003,  4005,  4010,  4015,  4017,  4020,  4023,
    4026,  4029,  4032,  4035,  4038,  4042,  4045,  4049,  4052,  4056,
    4058,  4060,  4062,  4064,  4066,  4067,  4070,  4071,  4074,  4075,
    4077,  4078,  4079,  4081,  4083,  4085,  4087,  4089,  4097,  4106,
    4109,  4116,  4119,  4126,  4129,  4133,  4136,  4138,  4140,  4144,
    4148,  4150,  4155,  4158,  4160,  4164,  4168,  4173,  4177,  4181,
    4185,  4187,  4189,  4191,  4193,  4195,  4197,  4199,  4201,  4203,
    4205,  4207,  4209,  4211,  4213,  4215,  4218,  4219,  4220,  4223,
    4230,  4238,  4241,  4243,  4247,  4249,  4253,  4255,  4257,  4259,
    4262,  4265,  4267,  4271,  4272,  4273,  4276,  4279,  4281,  4285,
    4291,  4292,  4294,  4296,  4299,  4302,  4306,  4309,  4313,  4316,
    4320,  4322,  4325,  4327,  4330,  4332,  4335,  4337,  4340,  4342,
    4345,  4347,  4350,  4352,  4355,  4357,  4360,  4363,  4367,  4370,
    4373,  4376,  4379,  4381,  4383,  4385,  4387,  4392,  4395,  4399,
    4403,  4406,  4410,  4413,  4416,  4419,  4423,  4427,  4431,  4434,
    4438,  4440,  4444,  4448,  4450,  4453,  4456,  4459,  4462,  4472,
    4479,  4481,  4483,  4485,  4487,  4490,  4493,  4497,  4501,  4503,
    4506,  4510,  4514,  4516,  4519,  4521,  4523,  4525,  4527,  4529,
    4532,  4535,  4540,  4543,  4546,  4551,  4554,  4557,  4560,  4565,
    4567,  4570,  4573,  4576,  4580,  4582,  4584,  4586,  4589,  4592,
    4595,  4598,  4601,  4605,  4609,  4613,  4617,  4621,  4625,  4627,
    4630,  4633,  4636,  4640,  4643,  4647,  4651,  4655,  4659,  4663,
    4667,  4670,  4673,  4676,  4679,  4682,  4685,  4688,  4691,  4694,
    4697,  4700,  4703,  4706,  4709,  4713,  4717,  4721,  4724,  4727,
    4730,  4734,  4738,  4742,  4745,  4748,  4751,  4754,  4757,  4760,
    4764,  4768,  4772,  4775,  4778,  4781,  4784,  4787,  4790,  4794,
    4798,  4802,  4805,  4808,  4811,  4814,  4817,  4820,  4823,  4826,
    4829,  4833,  4837,  4841,  4846,  4853,  4856,  4858,  4860,  4862,
    4864,  4866,  4867,  4873,  4875,  4882,  4886,  4888,  4891,  4894,
    4897,  4901,  4905,  4908,  4911,  4914,  4917,  4920,  4923,  4927,
    4930,  4933,  4937,  4939,  4943,  4948,  4951,  4953,  4956,  4962,
    4969,  4976,  4979,  4981,  4984,  4987,  4993,  5000
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
      -1,   147,   485,    -1,   150,   488,    -1,   154,    -1,   155,
     375,    -1,   155,    67,     5,    -1,   159,   570,    -1,   160,
     569,    -1,   163,   494,    -1,   169,    15,     4,    -1,   186,
     497,    -1,   189,   515,    -1,   190,   516,    -1,   191,   517,
      -1,   194,   533,   518,    -1,   195,   554,    -1,   175,   553,
      -1,   210,    67,     5,    -1,   227,   555,    -1,   228,   556,
      -1,   229,   559,    -1,   250,    89,    -1,   243,   561,    -1,
     241,   560,    -1,   258,    -1,   254,   533,   563,    -1,   260,
     568,    -1,   262,   571,    -1,   267,   573,    -1,   281,    -1,
     287,   594,    -1,   303,     4,    -1,   304,   401,    -1,   316,
      -1,   318,   596,    -1,   325,    -1,   328,   598,    -1,   329,
     599,    -1,   359,   603,    -1,   366,   604,    -1,     3,    -1,
       4,    -1,   375,    -1,   204,   375,    -1,   230,   375,    -1,
     232,   375,    -1,   329,   375,    -1,    43,   375,    -1,    46,
     375,    -1,    77,   375,    -1,    85,   375,    -1,   148,   375,
      -1,   260,   375,    -1,     4,    -1,   362,    -1,   367,    -1,
     224,    -1,   312,    -1,   215,    -1,   368,    -1,   223,    -1,
     123,    -1,    -1,   261,    37,    -1,   139,    37,    -1,   261,
      -1,   139,    -1,    -1,   378,    -1,   373,    -1,     6,    -1,
       7,    -1,     8,    -1,     9,    -1,    10,    -1,   379,   379,
      -1,   380,   381,    -1,   381,   381,    -1,   373,   373,    -1,
     164,    -1,   234,    -1,   103,    -1,    18,    -1,   384,    -1,
     329,    -1,   330,    -1,   331,    -1,   332,    -1,   333,    -1,
     334,    -1,   335,    -1,   336,    -1,   337,    -1,   338,    -1,
     339,    -1,   340,    -1,   341,    -1,   342,    -1,   343,    -1,
     344,    -1,   345,    -1,   346,    -1,   347,    -1,   348,    -1,
     349,    -1,   350,    -1,   351,    -1,   352,    -1,   353,    -1,
     354,    -1,   355,    -1,   356,    -1,    57,    -1,   229,    -1,
      -1,   363,    -1,   218,    -1,   210,    -1,   217,    -1,   253,
      -1,    -1,   290,    -1,   272,    -1,    92,    -1,   180,    -1,
     184,    -1,   188,    -1,   242,    -1,   291,    -1,   292,    -1,
      27,    -1,   283,    -1,   156,    -1,    29,    -1,   269,    -1,
     264,    -1,    96,    -1,   170,    -1,    -1,   132,    -1,    34,
      -1,   133,    -1,   171,    -1,   161,    -1,   141,    -1,   109,
      -1,    -1,    99,    -1,   276,    -1,    -1,    99,    -1,    23,
      -1,    24,    -1,    -1,   280,    -1,   172,    -1,    -1,    16,
      -1,   166,    -1,    -1,   164,    -1,   195,    -1,    -1,    63,
      -1,    49,    -1,   104,    -1,    86,    -1,   369,    -1,    26,
      -1,    52,    -1,    -1,     4,    -1,    83,    -1,   157,    -1,
     236,    -1,   237,    -1,   251,    -1,   294,    -1,    -1,    31,
      -1,   296,    -1,   196,    -1,    -1,   211,    -1,    41,    -1,
      42,    -1,   181,    -1,   182,    -1,   323,   405,    -1,    47,
     402,    -1,    75,   403,    -1,   155,   404,    -1,   198,   566,
      -1,    36,   567,    -1,   268,   373,    -1,   297,     4,    -1,
     305,   373,    -1,   375,    -1,    67,     5,    -1,   375,    -1,
      67,     5,    -1,   375,    -1,    67,     5,    -1,   373,   373,
      -1,   238,   373,   373,   373,   373,   373,    -1,    11,   407,
      -1,    72,     5,     5,     5,    -1,   102,     4,    -1,   122,
     408,    -1,   140,   409,    -1,    54,   284,     4,    -1,   309,
     410,    -1,   126,     5,    -1,    60,    -1,   373,   373,    -1,
     373,    -1,   373,   373,    -1,   373,    11,   373,   373,    -1,
     373,   373,    11,   373,   373,    -1,   309,   373,    -1,   309,
     373,   373,    -1,   309,   373,    11,   373,   373,    -1,   309,
     373,   373,    11,   373,   373,    -1,    31,    -1,   296,    -1,
     128,    -1,   373,   373,    11,    60,     5,     5,     5,    -1,
     373,   373,     4,   373,   373,    11,    60,     5,     5,     5,
       5,    -1,   373,   373,    11,   373,   373,     5,     5,     5,
      -1,   373,   373,     4,   373,   373,    11,   373,   373,     5,
       5,     5,     5,    -1,   373,    -1,   373,   373,    -1,   309,
     412,    -1,   128,    -1,   373,    -1,   373,   373,    -1,   271,
     414,    -1,   205,   415,    -1,   199,   416,    -1,   320,   373,
     373,    -1,   320,   210,   210,    -1,   365,   417,    -1,   245,
     375,    -1,   144,    -1,   187,    -1,   373,    -1,   199,    -1,
     365,    -1,   364,    -1,   320,    -1,     4,   389,    -1,   205,
     389,    -1,   264,     4,    -1,   257,    -1,   373,     4,     4,
      -1,    79,   373,    -1,   264,     4,    -1,   183,     4,    -1,
       4,   373,   373,     4,     4,    -1,   260,   373,   373,   373,
     373,   373,   373,     4,     4,    -1,   159,   373,   373,   373,
     373,   373,   373,     4,     4,    -1,   160,   373,   373,   373,
     373,   373,   373,     4,     4,    -1,   207,     4,     4,     5,
       5,     5,     4,    -1,    39,    -1,   206,   419,    -1,   114,
      -1,     4,   373,   373,     4,     4,    -1,   260,   373,   373,
     373,   373,   373,   373,     4,     4,    -1,   159,   373,   373,
     373,   373,   373,   373,     4,     4,    -1,   160,   373,   373,
     373,   373,   373,   373,     4,     4,    -1,   207,     4,     4,
       5,     5,     5,     4,    -1,   388,    -1,   188,   373,    -1,
      84,   422,    -1,   101,   423,    -1,   186,   424,    -1,   231,
     428,    -1,   267,   429,    -1,     5,     4,     4,   427,     4,
       4,   388,   373,   425,   426,   373,   373,     5,    -1,     5,
       4,     4,   427,     4,     4,   388,   373,   373,   426,   373,
     373,     5,    -1,     5,     4,     4,   427,     4,     4,   388,
     373,   425,   373,   373,     5,    -1,     5,     4,     4,   427,
       4,     4,   388,   373,   373,   373,   373,     5,    -1,   240,
      -1,    -1,    30,    -1,     5,    -1,     5,     5,     4,   375,
      -1,     5,     4,   375,     5,   383,   390,    -1,   199,    -1,
     365,    -1,   364,    -1,   320,    -1,   144,    -1,   187,    -1,
     287,    -1,    46,    -1,     5,    -1,     5,     5,     4,   375,
      -1,     5,   383,   390,    -1,    30,     5,   383,   390,    -1,
      -1,   373,   373,   373,   373,   383,   390,    -1,    60,   382,
     383,   390,   373,   373,   383,   392,    -1,   304,   431,    -1,
      39,   373,   373,    -1,   206,   373,   373,    -1,   114,   373,
     373,    -1,    -1,   373,   373,   383,   390,    -1,    39,   373,
     373,     4,    -1,   206,   373,   373,     4,    -1,   114,   373,
     373,     4,    -1,   385,   373,   373,    -1,   383,   390,   382,
      -1,   375,    -1,   328,   373,   373,    -1,    39,   206,   385,
     373,   373,    -1,   206,   385,   373,   373,    -1,    39,   206,
     383,   382,    -1,   206,   383,   382,    -1,    32,     4,    -1,
      -1,    31,    -1,   296,    -1,   196,    -1,   373,    -1,    65,
      -1,   150,   120,     5,    -1,    -1,    40,    67,    -1,    43,
     440,    -1,    46,   442,    -1,    66,   443,    -1,    69,   447,
      -1,    68,   446,    -1,    70,   449,    -1,    78,   451,    -1,
      80,   454,    -1,    85,   455,    -1,    87,   456,    -1,    89,
     458,    -1,    88,   457,    -1,    95,   459,    -1,    97,    -1,
     129,   463,    -1,   147,   469,    -1,   155,    67,    -1,   157,
       5,     5,     4,    -1,   158,    90,   438,    -1,   159,   476,
      -1,   160,   475,    -1,   163,   461,    -1,   167,   460,    -1,
     169,    15,    -1,   199,    -1,   194,   533,   527,    -1,   195,
     471,    -1,   175,   470,    -1,   210,    67,    -1,   227,    -1,
     228,   473,    -1,   235,   299,   385,   373,   373,     4,     4,
       5,    -1,   260,   474,    -1,   262,    -1,   287,   477,    -1,
     303,    -1,   304,   478,    -1,   313,    -1,   321,   385,   373,
     373,    -1,   327,    90,   439,    -1,   329,   483,    -1,   366,
      -1,     5,     5,   373,   373,   385,     4,   434,    -1,     5,
       5,   373,   373,   383,   390,     4,   434,    -1,     5,     5,
     373,   373,   385,     4,   434,    -1,     5,     5,   373,   373,
     383,   390,     4,   434,    -1,   102,    -1,   122,    -1,   140,
      -1,    54,   284,    -1,    89,    -1,   126,    -1,    72,   441,
      -1,   185,    -1,    -1,   199,     5,    -1,   105,     5,    -1,
     122,    -1,    -1,   425,   426,    -1,   373,   426,    -1,   271,
      -1,   205,    -1,   199,   444,    -1,   320,   179,    -1,   365,
     445,    -1,   245,    -1,   205,    -1,   264,    -1,    79,    -1,
     264,    -1,   183,    -1,    -1,   300,    -1,   179,   448,    -1,
       4,    -1,     4,   385,   373,   373,    -1,     4,   373,   373,
     388,   373,    -1,    -1,   179,   450,    -1,   188,    -1,     4,
     373,   373,   388,   373,    -1,   383,   390,    -1,    66,   452,
      -1,    67,    -1,    93,    -1,   179,    -1,   221,   179,    -1,
     198,    -1,    70,   453,    -1,   287,    -1,   358,    -1,    -1,
     205,    -1,   271,    -1,    -1,   188,    -1,   373,   373,   383,
     390,   391,    -1,   385,   373,   373,   383,   390,   391,    -1,
     383,   390,   391,    -1,    60,   383,   390,   391,   383,   392,
      -1,   304,   383,   390,    -1,   385,    -1,   383,   390,   391,
      -1,   295,    -1,    32,    -1,   385,    -1,   383,   390,   391,
      -1,   383,   390,   382,   373,   373,     5,    -1,     4,   383,
     390,   382,   373,   373,     5,    -1,   385,   373,   373,     4,
       4,    -1,     5,   376,    -1,    66,    -1,   385,   373,   373,
       5,   376,    -1,     4,     4,     4,     4,    -1,    89,    -1,
     124,   209,   462,    -1,    -1,     4,    -1,   373,   373,    -1,
     212,    -1,    60,   383,   390,   391,    -1,    82,    -1,   102,
     466,    -1,    44,    -1,   120,   464,    -1,   124,   209,   467,
      -1,   152,   465,    -1,   153,    -1,   222,   209,    -1,   284,
      -1,   284,   383,   390,   392,    -1,   285,   468,    -1,   358,
      -1,     4,    -1,   385,   373,   373,    -1,     4,    -1,   173,
       5,    -1,     4,   173,     5,    -1,   329,     4,    -1,    -1,
       4,    -1,   376,    -1,   376,   385,   373,   373,    -1,   376,
       4,    -1,    -1,     4,    -1,   137,   164,   383,    -1,   137,
     164,     4,   383,    -1,   309,   164,   373,   383,    -1,    -1,
     226,    -1,   322,    -1,    82,    -1,   176,    -1,    67,   472,
      -1,    45,   472,    -1,   308,   472,    -1,   323,   472,    -1,
      67,    -1,   193,    -1,   253,    -1,   298,    -1,   308,    -1,
      82,    -1,    45,    -1,    -1,     4,    -1,   245,    -1,    62,
      -1,   298,    -1,   323,    -1,    62,    -1,   298,    -1,   323,
      -1,    62,    -1,   298,    -1,   323,    -1,   140,    -1,   252,
      -1,   252,   200,    -1,   282,    -1,   282,   200,    -1,    20,
      -1,   323,   482,    -1,    47,   479,    -1,    75,   480,    -1,
     155,   481,    -1,   198,    -1,    36,    -1,   268,    -1,    -1,
      67,    -1,    -1,    67,    -1,    -1,    67,    -1,    -1,   238,
      -1,    -1,    15,   484,    -1,   209,   384,    -1,    -1,   239,
      -1,    84,   486,    -1,   101,    -1,   383,   390,   391,   487,
       5,     5,    -1,   383,   390,   391,   487,     5,    -1,    19,
      -1,   248,    -1,    18,    -1,    40,    67,    -1,    43,   489,
      -1,    78,   490,    -1,    85,    -1,    96,    -1,    97,    -1,
     103,    -1,   129,   491,    -1,   147,    -1,   163,    -1,   170,
      -1,   194,   492,    -1,   234,    -1,   164,    -1,   287,    -1,
     298,   383,    -1,   329,   493,    -1,    73,     5,    -1,    -1,
      30,    -1,    -1,    43,    -1,    88,    -1,   204,    -1,   155,
      -1,   274,    -1,   231,    -1,   314,    -1,   383,    -1,    59,
     383,    -1,   118,   383,    -1,   184,   383,    -1,    17,    -1,
     304,   383,    -1,   213,     4,     4,    -1,   119,    -1,   197,
       5,    -1,    89,   496,    -1,   275,   124,   209,   495,    -1,
     275,     4,     4,     4,     4,    -1,   318,    -1,   329,   373,
     373,   373,   373,   373,   373,   373,   373,     4,    -1,     5,
      -1,     5,     4,    -1,     4,     4,    57,    -1,     4,     4,
     383,    -1,   205,   375,    -1,    25,   498,    -1,   115,   500,
      -1,   129,   501,    -1,   166,   514,    -1,   220,   512,    -1,
     233,   513,    -1,     5,    13,     5,   395,    -1,     5,    14,
       5,   395,    -1,     5,    62,     5,   395,    -1,     5,   202,
     395,    -1,     5,   203,   395,    -1,     5,   278,   393,     4,
     395,    -1,     5,   288,     4,   395,    -1,     5,   289,     4,
     395,    -1,     5,   322,     5,   395,    -1,   260,    88,   499,
      -1,   160,    88,   499,    -1,   159,    88,   499,    -1,     5,
      13,     5,    -1,     5,    14,     5,    -1,     5,    62,     5,
      -1,     5,   202,    -1,     5,   203,    -1,     5,   278,   393,
       4,    -1,     5,   288,     4,    -1,     5,   289,     4,    -1,
       5,   322,     5,    -1,     5,     5,   286,    -1,     5,    13,
       5,   395,    -1,     5,    14,     5,   395,    -1,     5,    62,
       5,   395,    -1,     5,   202,   394,   395,    -1,     5,     5,
     286,   394,   395,    -1,     5,   203,   394,   395,    -1,     5,
     278,   393,     4,   394,   395,    -1,     5,   293,   393,     4,
       4,   394,   395,    -1,     5,   288,     4,   395,    -1,     5,
     289,     4,   395,    -1,     5,   322,     5,   394,   395,    -1,
     285,   502,    -1,   120,    88,   503,    -1,   260,   164,   511,
      -1,   260,    88,   510,    -1,   160,   164,   511,    -1,   160,
      88,   510,    -1,   159,   164,   511,    -1,   159,    88,   510,
      -1,   204,   504,    -1,     5,    13,     5,    -1,     5,    14,
       5,    -1,     5,    62,     5,    -1,     5,   202,   394,    -1,
       5,     5,   286,   394,    -1,     5,   203,   394,    -1,     5,
     278,   393,     4,   394,    -1,     5,   293,   393,     4,     4,
     394,    -1,     5,   288,     4,    -1,     5,   289,     4,    -1,
       5,   322,     5,   394,    -1,     5,    13,     5,    -1,     5,
      14,     5,    -1,     5,    62,     5,    -1,     5,   202,   394,
      -1,     5,   203,   394,    -1,     5,   278,   393,     4,   394,
      -1,     5,   288,     4,    -1,     5,   289,     4,    -1,     5,
     322,     5,   394,    -1,   164,   169,   505,    -1,   169,   506,
      -1,   164,   507,    -1,   509,    -1,   164,   357,   508,    -1,
       5,    13,     5,   395,    -1,     5,    14,     5,   395,    -1,
       5,    62,     5,   395,    -1,     5,   202,   394,   395,    -1,
       5,   203,   394,   395,    -1,     5,   278,   393,     4,   394,
     395,    -1,     5,   288,     4,   395,    -1,     5,   289,     4,
     395,    -1,     5,   322,     5,   394,   395,    -1,     5,    13,
       5,   395,    -1,     5,    14,     5,   395,    -1,     5,    62,
       5,   395,    -1,     5,   202,   394,   395,    -1,     5,     5,
     286,   394,   395,    -1,     5,   203,   394,   395,    -1,     5,
     278,   393,     4,   394,   395,    -1,     5,   293,   393,     4,
       4,   394,   395,    -1,     5,   288,     4,   395,    -1,     5,
     289,     4,   395,    -1,     5,   322,     5,   394,   395,    -1,
     384,     5,    13,     5,   395,    -1,   384,     5,    14,     5,
     395,    -1,   384,     5,    62,     5,   395,    -1,   384,     5,
     202,   394,   395,    -1,   384,     5,   203,   394,   395,    -1,
     384,     5,   278,   393,     4,   394,   395,    -1,   384,     5,
     288,     4,   395,    -1,   384,     5,   289,     4,   395,    -1,
     384,     5,   322,     5,   394,   395,    -1,     5,    13,     5,
     395,    -1,     5,    14,     5,   395,    -1,     5,    62,     5,
     395,    -1,     5,   202,   394,   395,    -1,     5,   203,   394,
     395,    -1,     5,   278,   393,     4,   394,   395,    -1,     5,
     288,     4,   395,    -1,     5,   289,     4,   395,    -1,     5,
     322,     5,   394,   395,    -1,   384,     5,    13,     5,   395,
      -1,   384,     5,    14,     5,   395,    -1,   384,     5,    62,
       5,   395,    -1,   384,     5,   202,   394,   395,    -1,   384,
       5,     5,   286,   394,   395,    -1,   384,     5,   203,   394,
     395,    -1,   384,     5,   278,   393,     4,   394,   395,    -1,
     384,     5,   293,   393,     4,     4,   394,   395,    -1,   384,
       5,   288,     4,   395,    -1,   384,     5,   289,     4,   395,
      -1,   384,     5,   322,     5,   394,   395,    -1,     5,    13,
       5,    -1,     5,    14,     5,    -1,     5,    62,     5,    -1,
       5,   202,   394,    -1,     5,     5,   286,   394,    -1,     5,
     203,   394,    -1,     5,   278,   393,     4,   394,    -1,     5,
     293,   393,     4,     4,   394,    -1,     5,   288,     4,    -1,
       5,   289,     4,    -1,     5,   322,     5,   394,    -1,     5,
      13,     5,    -1,     5,    14,     5,    -1,     5,    62,     5,
      -1,     5,   202,   394,    -1,     5,   203,   394,    -1,     5,
     278,   393,     4,   394,    -1,     5,   288,     4,    -1,     5,
     289,     4,    -1,     5,   322,     5,   394,    -1,     5,    13,
       5,   395,    -1,     5,    62,     5,   395,    -1,     5,   202,
     395,    -1,     5,   278,   393,     4,   395,    -1,     5,   288,
       4,   395,    -1,     5,   322,     5,   395,    -1,     5,     5,
      -1,   285,     5,     5,    -1,    95,     4,     4,     4,     4,
       4,    -1,   199,     4,     4,     4,     4,     4,    -1,   114,
      -1,   244,    -1,   375,    -1,   145,   375,    -1,    89,   375,
      -1,    67,     5,    -1,     5,     4,     4,    -1,   318,   373,
     373,    -1,   366,   373,    -1,     5,     5,   384,   390,     5,
       5,   384,   390,   373,   384,   392,     5,    -1,    61,   521,
      -1,    67,     5,    -1,    81,    -1,    74,   526,     5,    -1,
      74,   526,   322,     5,    -1,    76,   101,    -1,    -1,    84,
     519,   522,    -1,    90,    -1,   101,   524,    -1,   108,   525,
      -1,   117,     4,    -1,   134,     5,    -1,   155,    16,    -1,
     155,   225,   373,   373,    -1,   155,   310,   373,   373,    -1,
       4,    19,   398,   375,    -1,     4,    20,   378,    -1,     4,
      20,   378,   385,    -1,     4,    20,   378,   383,   390,    -1,
       4,    21,   252,   373,   373,     4,   383,   392,    -1,     4,
      21,   252,     5,   383,   392,    -1,     4,    50,   252,   373,
     373,   373,     4,   383,   392,    -1,     4,    50,   252,     5,
     383,   392,    -1,     4,    49,   252,   373,   373,   383,   392,
      -1,     4,    53,   108,   378,   378,     4,   373,   373,   373,
       4,    -1,     4,    53,   108,   378,   378,     4,   373,   373,
     373,     4,   385,    -1,     4,    53,   108,   378,   378,     4,
     373,   373,   373,     4,   383,   390,    -1,     4,    53,   108,
       5,     5,   383,   390,   383,   392,    -1,     4,    56,   520,
       5,     5,    -1,     4,    63,   252,   373,   383,   392,    -1,
       4,    67,     5,    -1,     4,    75,    26,   375,   375,    -1,
       4,    75,   174,     5,     5,    -1,     4,    75,   252,   373,
     383,   392,    -1,     4,    75,   298,   383,   390,    -1,     4,
      76,   144,   375,    -1,     4,    83,   108,   378,   378,     4,
     373,   373,     4,    -1,     4,    83,   108,   378,   378,     4,
     373,   373,     4,   385,    -1,     4,    83,   108,   378,   378,
       4,   373,   373,     4,   383,   390,    -1,     4,    83,   108,
       5,     5,   383,   390,   383,   392,    -1,     4,    84,    21,
     252,   373,   373,    -1,     4,    84,    50,   252,   373,   373,
      -1,     4,    84,    53,    20,   373,   373,    -1,     4,    84,
      53,   252,   373,   373,    -1,     4,    84,   113,   252,   373,
     373,    -1,     4,    84,   116,    20,   373,   373,    -1,     4,
      84,   116,   252,   373,   373,    -1,     4,    84,    83,    20,
     373,   373,    -1,     4,    84,    83,   252,   373,   373,    -1,
       4,    84,   240,   326,     4,   373,   373,    -1,     4,    84,
     273,   326,     4,   373,   373,    -1,     4,   101,    -1,     4,
     101,    21,     4,    -1,     4,   101,    50,     4,    -1,     4,
     101,    53,     4,    -1,     4,   101,   113,     4,    -1,     4,
     101,    56,   520,     5,    -1,     4,   101,   116,     4,    -1,
       4,   101,    83,     4,    -1,     4,   101,   240,   326,     4,
      -1,     4,   101,   273,   326,     4,    -1,     4,   101,   300,
      -1,     4,   101,   300,     5,    -1,     4,   101,   300,     4,
      -1,     4,   108,    39,     4,    -1,     4,   112,   252,   373,
     373,   383,   392,    -1,     4,   113,   252,   373,   373,   373,
       4,   383,   392,    -1,     4,   113,   252,     5,   383,   392,
      -1,     4,   116,   108,   378,   378,     4,   373,   373,   373,
       4,    -1,     4,   116,   108,   378,   378,     4,   373,   373,
     373,     4,   385,    -1,     4,   116,   108,   378,   378,     4,
     373,   373,   373,     4,   383,   390,    -1,     4,   116,   108,
       5,     5,   383,   390,   383,   392,    -1,     4,   134,     5,
      -1,     4,   155,    -1,     4,   155,   225,    -1,     4,   183,
      26,   375,   375,    -1,     4,   183,   238,   383,   390,   382,
     382,    -1,     4,   208,   373,   373,    -1,     4,   208,   138,
      -1,     4,   208,    35,    -1,     4,   208,   309,   383,   390,
     382,    -1,     4,   240,   258,   373,   373,   383,   392,    -1,
       4,   273,   258,   373,   373,   383,   392,    -1,     4,   238,
     277,   396,    -1,     4,   238,   284,     4,    -1,     4,   246,
     383,   390,   382,   382,   373,   383,   392,    -1,     4,   247,
     539,   375,    -1,     4,   262,    39,    -1,     4,   263,   135,
       5,    -1,     4,   263,   238,   383,   390,   382,   382,    -1,
       4,   263,   298,   383,   390,   383,   392,    -1,     4,   274,
      -1,     4,   274,   225,    -1,     4,   300,     5,    -1,     4,
     302,     5,    -1,     4,   302,   262,   375,    -1,     4,   315,
      -1,     4,   317,    -1,     4,   324,    26,   375,    -1,     4,
     324,   238,   383,   390,   382,   383,   392,   373,   378,    -1,
       4,   358,     4,    -1,   172,    -1,   172,   373,   373,    -1,
     185,   534,    -1,   186,   535,    -1,   208,   536,    -1,   245,
     375,    -1,   247,   539,   375,    -1,   247,   539,   375,   373,
     373,    -1,   262,    39,   373,   373,    -1,   262,   206,   373,
     373,     4,    -1,   262,   114,    -1,   267,   543,    -1,   274,
     544,    -1,   281,   545,    -1,     5,    67,     5,    -1,     5,
      81,    -1,     5,   101,    -1,     5,    90,    -1,     5,   134,
       5,    -1,     5,   155,    -1,     5,   155,   225,    -1,     5,
     208,   373,   373,    -1,     5,   208,   138,    -1,     5,   208,
      35,    -1,     5,   208,   309,   383,   390,   382,    -1,     5,
     247,   539,   375,    -1,     5,   274,    -1,     5,   274,   225,
      -1,     5,   315,    -1,     5,   317,    -1,   300,   108,     5,
       5,    -1,   300,   101,     5,    -1,   300,   101,    16,    -1,
     300,     5,    -1,   300,   318,     5,    -1,   231,    -1,   231,
     383,    -1,   314,    -1,   315,    16,    -1,   317,    16,    -1,
     358,     4,    -1,   274,    -1,   317,    -1,   155,    -1,   315,
      -1,    39,   208,    -1,   208,    -1,   114,   208,    -1,    39,
     108,    -1,   108,    -1,   114,   108,    -1,    39,   262,    -1,
     262,    -1,   114,   262,    -1,   101,    -1,   302,    -1,    67,
      -1,   358,    -1,   247,    -1,   134,    -1,   172,    -1,   318,
      -1,    -1,     4,    -1,    29,   375,    -1,   252,   373,    -1,
     168,     4,    -1,   226,     4,   373,    -1,    63,   373,   373,
     373,   540,    -1,   112,   373,   373,   373,   373,   377,   540,
      -1,    49,   373,   373,   373,   373,   377,   540,    -1,   240,
     373,   373,   373,   373,   540,    -1,   273,   373,   373,   373,
     373,   540,    -1,   183,   373,   373,   373,   373,   540,    -1,
     324,   373,   373,   373,   373,   540,    -1,   302,   373,   373,
     377,   540,    -1,    63,   238,   373,   373,   397,   540,    -1,
      49,   238,   373,   373,   397,   540,    -1,   104,   238,   373,
     373,   397,   540,    -1,    86,   238,   373,   373,   397,   540,
      -1,   369,   238,   373,   373,   397,   540,    -1,    26,   238,
     373,   373,   397,   540,    -1,    52,   238,   373,   373,   397,
     540,    -1,   263,   373,   373,   373,   373,   383,   390,   383,
     392,     5,   540,    -1,    75,   373,   373,   373,   383,   390,
     540,    -1,   246,   373,   373,   373,   373,   373,   540,    -1,
      21,   373,   373,   373,   373,     4,   540,    -1,   113,   373,
     373,   373,   373,   373,     4,   377,   540,    -1,    50,   373,
     373,   373,   373,   373,     4,   377,   540,    -1,    83,   373,
     373,   378,   378,     4,   373,   373,     4,   540,    -1,   116,
     373,   373,   378,   378,     4,   373,   373,   373,     4,   377,
     540,    -1,    53,   373,   373,   378,   378,     4,   373,   373,
     373,     4,   377,   540,    -1,    76,   540,    -1,   301,   523,
      -1,     5,   373,   373,    -1,   322,     5,   373,   373,    -1,
     373,   373,   322,     5,    -1,     5,   383,   390,   382,    -1,
      -1,   274,    -1,    16,    -1,    39,   373,   373,     4,    -1,
     206,   373,   373,     4,    -1,   114,    -1,   107,    -1,   360,
      -1,    64,    -1,   266,    -1,   265,    -1,   249,    -1,   361,
      -1,    61,   528,    -1,    67,    -1,   134,    -1,   117,    -1,
     149,   373,   373,    -1,   162,   373,   373,    -1,     4,    19,
      83,     5,     5,     5,   383,     4,    -1,     4,    19,   157,
       5,     5,     4,    -1,     4,    19,   236,     5,     5,     5,
       5,   383,   390,   399,    -1,     4,    19,   237,     5,     5,
     383,   399,    -1,     4,    19,   251,     5,     5,     5,   383,
      -1,     4,    19,   294,   383,   390,    -1,   162,    16,    -1,
       4,    20,    -1,     4,    20,   385,    -1,     4,    20,   383,
     390,    -1,     4,    21,   252,   383,   392,    -1,     4,    50,
     252,   383,   392,    -1,     4,    49,   252,   383,   392,    -1,
       4,    53,    20,    -1,     4,    53,    20,   385,    -1,     4,
      53,    20,   383,   390,    -1,     4,    53,   252,   383,   392,
      -1,     4,    60,   383,   390,   391,    -1,     4,    63,   252,
     383,   392,    -1,     4,    67,    -1,     4,    75,    26,    -1,
       4,    75,   174,    -1,     4,    75,   252,   383,   392,    -1,
       4,    75,   298,    -1,     4,    76,   144,    -1,     4,    83,
      20,    -1,     4,    83,    20,   385,    -1,     4,    83,    20,
     383,   390,    -1,     4,    83,   252,   383,   392,    -1,     4,
     112,   252,   383,   392,    -1,     4,   113,   252,   383,   392,
      -1,     4,   116,    20,    -1,     4,   116,    20,   385,    -1,
       4,   116,    20,   383,   390,    -1,     4,   116,   252,   383,
     392,    -1,     4,   134,    -1,     4,   155,    -1,     4,   183,
      26,    -1,     4,   183,   178,   383,   392,    -1,     4,   183,
     238,   383,   390,   391,    -1,     4,   192,   178,   373,   383,
     392,    -1,     4,   238,   277,    -1,     4,   238,   284,    -1,
       4,   246,   238,   383,   390,   391,    -1,     4,   246,   178,
     383,   392,    -1,     4,   246,   306,   383,   392,    -1,     4,
     247,    -1,     4,   247,   539,    -1,     4,   263,   135,    -1,
       4,   263,   178,   383,   392,    -1,     4,   263,   238,   383,
     390,   391,    -1,     4,   263,   298,    -1,     4,   274,    -1,
       4,   300,    -1,     4,   300,     4,    -1,     4,   302,    -1,
       4,   302,   262,    -1,     4,   313,    -1,     4,   324,    26,
      -1,     4,   324,   178,   383,   392,    -1,     4,   324,   238,
     383,   390,   391,    -1,     4,   358,    -1,   155,   529,    -1,
     155,   221,    -1,   221,    -1,   240,   273,   373,   373,    -1,
     273,   273,   373,   373,    -1,   245,    -1,   247,   539,    -1,
     274,   530,    -1,   274,   221,    -1,   281,   531,    -1,     5,
      67,    -1,     5,   134,    -1,     5,   162,    -1,     5,   247,
     539,    -1,     5,   300,    -1,     5,   300,   221,    -1,   300,
      16,    -1,   300,   100,   209,    -1,   358,    -1,    29,    -1,
     252,    -1,   168,    -1,   226,    -1,    -1,   373,   373,    -1,
      -1,   373,   373,    -1,    -1,   302,    -1,    -1,    -1,   239,
      -1,   254,    -1,   320,    -1,    58,    -1,   136,    -1,   526,
     383,   390,   391,   375,   541,   548,    -1,   274,   526,   383,
     390,   391,   375,   541,   548,    -1,   526,     5,    -1,   526,
       5,     4,     5,   383,   390,    -1,   526,     4,    -1,   526,
       4,     4,     5,   383,   390,    -1,   129,     5,    -1,   129,
       5,     5,    -1,   373,   373,    -1,   138,    -1,    35,    -1,
      39,   373,   373,    -1,   206,   373,   373,    -1,   114,    -1,
     309,   383,   390,   382,    -1,   537,   538,    -1,   538,    -1,
     539,   370,   375,    -1,    67,   370,     5,    -1,    94,   370,
       4,     4,    -1,   358,   370,     4,    -1,   134,   370,     5,
      -1,   302,   370,     5,    -1,   551,    -1,   552,    -1,   216,
      -1,   274,    -1,   155,    -1,    93,    -1,   131,    -1,   108,
      -1,   208,    -1,   262,    -1,   101,    -1,   165,    -1,   290,
      -1,   125,    -1,   532,    -1,   532,   537,    -1,    -1,    -1,
     542,   546,    -1,     5,   526,   383,   390,   391,   375,    -1,
     274,     5,   526,   383,   390,   391,   375,    -1,   301,     5,
      -1,    16,    -1,   225,   373,   373,    -1,   310,    -1,   310,
     373,   373,    -1,   127,    -1,   177,    -1,   375,    -1,   302,
     375,    -1,   546,   547,    -1,   547,    -1,   539,   370,   375,
      -1,    -1,    -1,   549,   550,    -1,   550,   551,    -1,   551,
      -1,   300,   370,     5,    -1,    56,   370,   520,     5,     5,
      -1,    -1,    84,    -1,     4,    -1,   176,     4,    -1,    67,
       5,    -1,     4,    67,     5,    -1,    45,   387,    -1,     4,
      45,   387,    -1,   308,   373,    -1,     4,   308,   373,    -1,
     281,    -1,     4,   281,    -1,   154,    -1,     4,   154,    -1,
     101,    -1,     4,   101,    -1,   319,    -1,     4,   319,    -1,
     106,    -1,     4,   106,    -1,   307,    -1,     4,   307,    -1,
      48,    -1,     4,    48,    -1,    65,    -1,    67,     5,    -1,
     193,   386,    -1,   253,   373,   373,    -1,   298,   383,    -1,
     308,   373,    -1,    45,   387,    -1,   193,     4,    -1,   369,
      -1,   367,    -1,   361,    -1,   216,    -1,   373,   373,   373,
     373,    -1,   373,   373,    -1,   385,   373,   373,    -1,   383,
     390,   382,    -1,   309,   557,    -1,    38,   373,   373,    -1,
     206,   558,    -1,   245,   375,    -1,   373,   373,    -1,   385,
     373,   373,    -1,   383,   390,   382,    -1,    39,   373,   373,
      -1,   373,   373,    -1,   114,   373,   373,    -1,   375,    -1,
     329,   384,   390,    -1,     5,     4,     4,    -1,   318,    -1,
      71,   562,    -1,   179,     4,    -1,   259,     4,    -1,   268,
     373,    -1,     4,     4,     4,     4,     4,     4,     4,     4,
       4,    -1,     4,     4,     4,     4,     4,     4,    -1,    55,
      -1,   146,    -1,   260,    -1,    91,    -1,   155,   564,    -1,
     274,   565,    -1,    39,   373,   373,    -1,   206,   373,   373,
      -1,   114,    -1,   279,   114,    -1,    39,   373,   373,    -1,
     206,   373,   373,    -1,   114,    -1,   279,   114,    -1,   201,
      -1,    12,    -1,   216,    -1,    33,    -1,   110,    -1,    62,
       5,    -1,   298,   383,    -1,   323,     4,     4,     4,    -1,
      62,     5,    -1,   298,   383,    -1,   323,     4,     4,     4,
      -1,    62,     5,    -1,    62,   321,    -1,   298,   383,    -1,
     323,     4,     4,     4,    -1,   373,    -1,   373,    99,    -1,
     206,   572,    -1,   309,   373,    -1,   309,   373,    99,    -1,
      39,    -1,   373,    -1,   114,    -1,    25,   574,    -1,   129,
     575,    -1,   220,   592,    -1,   115,   593,    -1,   233,     5,
      -1,   124,     5,   400,    -1,    62,     5,   400,    -1,   288,
       4,   400,    -1,   260,    88,   582,    -1,   160,    88,   585,
      -1,   159,    88,   588,    -1,   576,    -1,   164,   576,    -1,
     299,   577,    -1,   285,   578,    -1,   120,    88,   579,    -1,
     204,   580,    -1,   260,   164,   583,    -1,   260,    88,   584,
      -1,   160,   164,   586,    -1,   160,    88,   587,    -1,   159,
     164,   589,    -1,   159,    88,   590,    -1,   256,   591,    -1,
     124,     5,    -1,    62,     5,    -1,   288,     4,    -1,   124,
       5,    -1,    62,     5,    -1,   288,     4,    -1,   124,     5,
      -1,    62,     5,    -1,   288,     4,    -1,   124,     5,    -1,
      62,     5,    -1,   288,     4,    -1,   164,   581,    -1,   124,
       5,     4,    -1,    62,     5,     4,    -1,   288,     4,     4,
      -1,   124,     5,    -1,    62,     5,    -1,   288,     4,    -1,
     124,     5,   400,    -1,    62,     5,   400,    -1,   288,     4,
     400,    -1,   124,     5,    -1,    62,     5,    -1,   288,     4,
      -1,   124,     5,    -1,    62,     5,    -1,   288,     4,    -1,
     124,     5,   400,    -1,    62,     5,   400,    -1,   288,     4,
     400,    -1,   124,     5,    -1,    62,     5,    -1,   288,     4,
      -1,   124,     5,    -1,    62,     5,    -1,   288,     4,    -1,
     124,     5,   400,    -1,    62,     5,   400,    -1,   288,     4,
     400,    -1,   124,     5,    -1,    62,     5,    -1,   288,     4,
      -1,   124,     5,    -1,    62,     5,    -1,   288,     4,    -1,
     124,     5,    -1,    62,     5,    -1,   288,     4,    -1,   124,
       5,   400,    -1,    62,     5,   400,    -1,   288,     4,   400,
      -1,   124,     5,     5,   400,    -1,   595,     4,     4,   373,
     373,   378,    -1,   595,     4,    -1,   101,    -1,    51,    -1,
     311,    -1,   142,    -1,   111,    -1,    -1,     4,   373,   373,
     373,   373,    -1,   219,    -1,   219,     4,   373,   373,   373,
     373,    -1,   129,   285,   597,    -1,     4,    -1,     4,     4,
      -1,   373,   383,    -1,   373,   373,    -1,   309,   373,   373,
      -1,   384,   390,   391,    -1,    15,   602,    -1,   258,     4,
      -1,   255,   601,    -1,    22,   600,    -1,     4,     4,    -1,
       4,     5,    -1,   302,     4,     5,    -1,     4,     4,    -1,
       4,     5,    -1,   302,     4,     5,    -1,     4,    -1,     4,
     384,   390,    -1,   309,     4,   384,   390,    -1,   239,    65,
      -1,   244,    -1,   373,   373,    -1,   373,   373,    11,   373,
     373,    -1,   373,   373,    11,   385,   373,   373,    -1,   373,
     373,    11,   383,   390,   382,    -1,   309,   605,    -1,   128,
      -1,   128,   373,    -1,   373,   373,    -1,   373,   373,    11,
     373,   373,    -1,   373,   373,    11,   385,   373,   373,    -1,
     373,   373,    11,   383,   390,   382,    -1
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
     536,   537,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   553,   555,   556,   557,   558,   560,   561,
     562,   563,   566,   567,   568,   569,   570,   573,   574,   577,
     578,   579,   582,   585,   588,   591,   603,   610,   617,   625,
     626,   627,   628,   629,   632,   633,   634,   635,   636,   637,
     638,   639,   640,   641,   642,   643,   644,   645,   646,   647,
     648,   649,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   659,   662,   663,   666,   667,   668,   669,   670,   671,
     674,   675,   676,   677,   678,   681,   682,   683,   684,   685,
     686,   687,   688,   691,   692,   693,   694,   695,   698,   699,
     700,   701,   702,   703,   704,   705,   708,   709,   710,   713,
     714,   715,   716,   719,   720,   721,   724,   725,   726,   729,
     730,   731,   734,   735,   736,   737,   738,   739,   740,   741,
     744,   745,   748,   749,   750,   751,   752,   753,   756,   757,
     758,   759,   762,   763,   764,   765,   766,   767,   770,   771,
     772,   773,   774,   775,   776,   777,   778,   782,   783,   786,
     787,   790,   791,   794,   795,   799,   800,   801,   802,   803,
     804,   805,   806,   809,   810,   813,   814,   815,   817,   819,
     820,   821,   823,   827,   828,   831,   832,   834,   837,   839,
     845,   846,   847,   850,   851,   852,   855,   856,   857,   858,
     859,   860,   861,   867,   868,   871,   872,   873,   874,   875,
     878,   879,   880,   881,   884,   885,   890,   895,   902,   904,
     906,   908,   910,   912,   913,   914,   917,   919,   921,   923,
     925,   928,   929,   932,   933,   934,   935,   936,   939,   942,
     945,   951,   957,   960,   961,   964,   965,   966,   973,   974,
     975,   976,   979,   980,   983,   984,   987,   988,   991,   993,
     997,   998,  1001,  1003,  1004,  1005,  1006,  1009,  1010,  1012,
    1013,  1014,  1017,  1019,  1021,  1022,  1024,  1026,  1028,  1030,
    1034,  1037,  1038,  1039,  1040,  1043,  1044,  1047,  1050,  1051,
    1052,  1053,  1054,  1055,  1056,  1057,  1058,  1059,  1060,  1061,
    1062,  1063,  1064,  1065,  1066,  1067,  1068,  1069,  1070,  1071,
    1072,  1073,  1074,  1075,  1076,  1077,  1078,  1079,  1080,  1081,
    1082,  1083,  1085,  1086,  1087,  1088,  1089,  1090,  1091,  1093,
    1094,  1095,  1098,  1100,  1104,  1106,  1110,  1111,  1112,  1113,
    1114,  1115,  1116,  1117,  1120,  1121,  1122,  1125,  1128,  1129,
    1131,  1133,  1134,  1135,  1136,  1137,  1138,  1145,  1146,  1149,
    1150,  1151,  1154,  1155,  1158,  1161,  1162,  1164,  1168,  1169,
    1170,  1173,  1177,  1179,  1180,  1181,  1182,  1183,  1184,  1185,
    1186,  1187,  1190,  1191,  1192,  1195,  1196,  1199,  1201,  1209,
    1211,  1213,  1217,  1218,  1220,  1223,  1226,  1227,  1231,  1233,
    1236,  1241,  1242,  1243,  1247,  1248,  1249,  1252,  1253,  1254,
    1257,  1258,  1260,  1261,  1262,  1263,  1264,  1265,  1266,  1267,
    1268,  1269,  1271,  1272,  1275,  1276,  1279,  1280,  1281,  1282,
    1285,  1286,  1289,  1291,  1294,  1298,  1299,  1300,  1302,  1304,
    1308,  1309,  1310,  1313,  1314,  1315,  1316,  1317,  1318,  1321,
    1322,  1323,  1324,  1325,  1326,  1327,  1330,  1331,  1334,  1337,
    1338,  1339,  1342,  1343,  1344,  1347,  1348,  1349,  1352,  1353,
    1354,  1355,  1356,  1357,  1360,  1361,  1362,  1363,  1364,  1365,
    1366,  1369,  1370,  1373,  1374,  1377,  1378,  1381,  1382,  1385,
    1386,  1387,  1390,  1391,  1394,  1395,  1398,  1401,  1409,  1410,
    1413,  1414,  1415,  1416,  1417,  1418,  1419,  1420,  1421,  1422,
    1423,  1424,  1425,  1426,  1427,  1428,  1429,  1430,  1433,  1436,
    1437,  1440,  1441,  1442,  1443,  1446,  1447,  1448,  1449,  1452,
    1453,  1454,  1455,  1456,  1457,  1460,  1461,  1462,  1463,  1464,
    1465,  1467,  1468,  1473,  1474,  1477,  1479,  1481,  1484,  1485,
    1486,  1487,  1488,  1489,  1492,  1494,  1496,  1498,  1499,  1501,
    1503,  1505,  1507,  1509,  1510,  1511,  1514,  1515,  1516,  1517,
    1518,  1519,  1521,  1522,  1523,  1526,  1529,  1531,  1533,  1535,
    1537,  1539,  1541,  1543,  1546,  1548,  1550,  1552,  1553,  1554,
    1555,  1556,  1557,  1558,  1559,  1560,  1563,  1564,  1565,  1566,
    1567,  1568,  1569,  1571,  1573,  1574,  1575,  1578,  1579,  1580,
    1581,  1582,  1583,  1585,  1586,  1587,  1590,  1591,  1592,  1593,
    1594,  1597,  1600,  1603,  1606,  1609,  1612,  1615,  1618,  1621,
    1626,  1629,  1632,  1635,  1638,  1641,  1644,  1647,  1650,  1653,
    1656,  1661,  1664,  1667,  1670,  1673,  1676,  1679,  1682,  1685,
    1690,  1692,  1694,  1696,  1698,  1700,  1705,  1707,  1709,  1713,
    1716,  1719,  1722,  1725,  1728,  1731,  1734,  1737,  1740,  1743,
    1748,  1749,  1750,  1751,  1752,  1753,  1754,  1756,  1758,  1759,
    1760,  1763,  1764,  1765,  1766,  1767,  1768,  1770,  1771,  1772,
    1775,  1777,  1779,  1780,  1782,  1784,  1788,  1789,  1792,  1793,
    1794,  1797,  1800,  1801,  1802,  1803,  1804,  1805,  1806,  1809,
    1817,  1818,  1819,  1820,  1822,  1824,  1825,  1825,  1826,  1827,
    1828,  1829,  1830,  1832,  1833,  1835,  1838,  1841,  1842,  1843,
    1846,  1849,  1852,  1856,  1859,  1862,  1865,  1869,  1874,  1879,
    1881,  1883,  1884,  1886,  1888,  1890,  1892,  1893,  1895,  1897,
    1901,  1906,  1908,  1910,  1912,  1914,  1916,  1918,  1920,  1922,
    1924,  1926,  1929,  1930,  1932,  1934,  1935,  1937,  1939,  1940,
    1941,  1943,  1945,  1946,  1947,  1949,  1950,  1953,  1957,  1960,
    1963,  1967,  1972,  1978,  1979,  1980,  1982,  1983,  1987,  1989,
    1990,  1991,  1994,  1997,  2000,  2002,  2004,  2009,  2012,  2013,
    2014,  2017,  2021,  2022,  2024,  2025,  2026,  2028,  2029,  2031,
    2032,  2037,  2039,  2040,  2042,  2043,  2044,  2045,  2046,  2047,
    2049,  2051,  2053,  2054,  2055,  2057,  2059,  2060,  2061,  2062,
    2063,  2064,  2065,  2066,  2067,  2068,  2069,  2071,  2073,  2074,
    2075,  2076,  2078,  2079,  2080,  2081,  2082,  2084,  2085,  2086,
    2087,  2088,  2089,  2092,  2093,  2094,  2095,  2096,  2097,  2098,
    2099,  2100,  2101,  2102,  2103,  2104,  2105,  2106,  2107,  2108,
    2109,  2110,  2111,  2112,  2115,  2116,  2117,  2118,  2119,  2120,
    2128,  2135,  2144,  2153,  2160,  2167,  2175,  2183,  2190,  2195,
    2200,  2205,  2210,  2215,  2220,  2226,  2236,  2246,  2256,  2263,
    2273,  2283,  2292,  2304,  2317,  2322,  2325,  2327,  2329,  2334,
    2338,  2339,  2340,  2346,  2348,  2350,  2353,  2354,  2355,  2356,
    2357,  2358,  2359,  2362,  2363,  2364,  2365,  2366,  2367,  2369,
    2371,  2373,  2375,  2377,  2379,  2382,  2383,  2384,  2385,  2387,
    2390,  2392,  2394,  2395,  2396,  2398,  2401,  2404,  2406,  2407,
    2408,  2409,  2411,  2412,  2413,  2414,  2415,  2417,  2419,  2421,
    2424,  2425,  2426,  2428,  2431,  2432,  2433,  2434,  2436,  2439,
    2443,  2444,  2445,  2448,  2451,  2453,  2454,  2455,  2456,  2458,
    2461,  2462,  2464,  2465,  2466,  2467,  2468,  2470,  2471,  2473,
    2476,  2477,  2478,  2479,  2480,  2482,  2484,  2485,  2486,  2487,
    2489,  2491,  2492,  2493,  2494,  2495,  2496,  2498,  2499,  2501,
    2504,  2505,  2506,  2507,  2510,  2511,  2514,  2515,  2518,  2519,
    2522,  2535,  2536,  2540,  2541,  2545,  2546,  2549,  2553,  2559,
    2561,  2564,  2566,  2569,  2571,  2575,  2576,  2577,  2578,  2579,
    2580,  2581,  2585,  2586,  2589,  2590,  2591,  2592,  2593,  2594,
    2595,  2596,  2599,  2600,  2601,  2602,  2603,  2604,  2605,  2606,
    2607,  2608,  2609,  2610,  2613,  2614,  2617,  2618,  2618,  2621,
    2623,  2625,  2628,  2629,  2630,  2631,  2632,  2633,  2636,  2637,
    2640,  2641,  2644,  2648,  2649,  2649,  2652,  2653,  2656,  2659,
    2663,  2664,  2665,  2666,  2667,  2668,  2669,  2670,  2671,  2672,
    2673,  2674,  2675,  2676,  2677,  2678,  2679,  2680,  2681,  2682,
    2683,  2684,  2685,  2686,  2689,  2690,  2691,  2692,  2693,  2694,
    2695,  2696,  2702,  2703,  2704,  2705,  2708,  2710,  2711,  2716,
    2718,  2719,  2720,  2721,  2724,  2725,  2730,  2734,  2735,  2736,
    2739,  2740,  2745,  2746,  2749,  2751,  2752,  2753,  2758,  2760,
    2766,  2767,  2768,  2769,  2772,  2773,  2776,  2778,  2780,  2781,
    2784,  2786,  2787,  2788,  2791,  2792,  2795,  2796,  2797,  2800,
    2801,  2802,  2805,  2806,  2807,  2810,  2811,  2812,  2813,  2816,
    2817,  2818,  2819,  2820,  2823,  2824,  2825,  2828,  2829,  2830,
    2831,  2832,  2835,  2837,  2839,  2841,  2842,  2843,  2846,  2847,
    2848,  2849,  2850,  2851,  2852,  2853,  2854,  2855,  2856,  2857,
    2858,  2861,  2862,  2863,  2866,  2867,  2868,  2871,  2872,  2873,
    2876,  2877,  2878,  2881,  2882,  2883,  2884,  2887,  2888,  2889,
    2892,  2894,  2896,  2900,  2901,  2902,  2905,  2906,  2907,  2910,
    2912,  2914,  2918,  2919,  2920,  2923,  2924,  2925,  2928,  2930,
    2932,  2936,  2937,  2938,  2941,  2942,  2943,  2946,  2947,  2948,
    2951,  2953,  2955,  2959,  2963,  2965,  2970,  2973,  2974,  2975,
    2976,  2979,  2980,  2983,  2985,  2987,  2990,  2991,  2992,  2995,
    2996,  2999,  3001,  3002,  3003,  3004,  3007,  3008,  3009,  3012,
    3013,  3014,  3017,  3018,  3023,  3025,  3028,  3035,  3036,  3038,
    3043,  3045,  3048,  3049,  3050,  3051,  3053,  3058
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
  "getMask", "layerRef", "getPan", "getRGB", "getHLS", "getHSV",
  "getSmooth", "getThreed", "getThreedBorder", "getThreedCompass",
  "getThreedHighlite", "getThreedView", "getWCS", "getWCSAlign", "grid",
  "gridCreate", "gridType", "has", "hasBin", "hasContour", "hasFits",
  "hasMarker", "hasWCS", "iis", "iisSetFileName", "iiscursor", "load",
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
  "markerTags", "@3", "tags", "tag", "callback", "layer", "mask", "orient",
  "pan", "panTo", "panMotion", "panner", "postscript", "precision",
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
     373,   373,   374,   374,   374,   374,   374,   374,   374,   374,
     374,   374,   374,   375,   375,   375,   375,   375,   375,   375,
     375,   375,   376,   376,   376,   376,   376,   377,   377,   378,
     378,   378,   379,   380,   381,   382,   382,   382,   382,   383,
     383,   383,   383,   383,   384,   384,   384,   384,   384,   384,
     384,   384,   384,   384,   384,   384,   384,   384,   384,   384,
     384,   384,   384,   384,   384,   384,   384,   384,   384,   384,
     384,   384,   385,   385,   386,   386,   386,   386,   386,   386,
     387,   387,   387,   387,   387,   388,   388,   388,   388,   388,
     388,   388,   388,   389,   389,   389,   389,   389,   390,   390,
     390,   390,   390,   390,   390,   390,   391,   391,   391,   392,
     392,   392,   392,   393,   393,   393,   394,   394,   394,   395,
     395,   395,   396,   396,   396,   396,   396,   396,   396,   396,
     397,   397,   398,   398,   398,   398,   398,   398,   399,   399,
     399,   399,   400,   400,   400,   400,   400,   400,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   402,   402,   403,
     403,   404,   404,   405,   405,   406,   406,   406,   406,   406,
     406,   406,   406,   407,   407,   408,   408,   408,   408,   408,
     408,   408,   408,   409,   409,   410,   410,   410,   410,   410,
     411,   411,   411,   412,   412,   412,   413,   413,   413,   413,
     413,   413,   413,   414,   414,   415,   415,   415,   415,   415,
     416,   416,   416,   416,   417,   417,   417,   417,   418,   418,
     418,   418,   418,   418,   418,   418,   419,   419,   419,   419,
     419,   420,   420,   421,   421,   421,   421,   421,   422,   422,
     422,   422,   422,   423,   423,   424,   424,   424,   425,   425,
     425,   425,   426,   426,   427,   427,   428,   428,   429,   429,
     430,   430,   430,   430,   430,   430,   430,   431,   431,   431,
     431,   431,   432,   432,   432,   432,   432,   432,   432,   432,
     433,   434,   434,   434,   434,   435,   435,   436,   437,   437,
     437,   437,   437,   437,   437,   437,   437,   437,   437,   437,
     437,   437,   437,   437,   437,   437,   437,   437,   437,   437,
     437,   437,   437,   437,   437,   437,   437,   437,   437,   437,
     437,   437,   437,   437,   437,   437,   437,   437,   437,   437,
     437,   437,   438,   438,   439,   439,   440,   440,   440,   440,
     440,   440,   440,   440,   441,   441,   441,   442,   443,   443,
     443,   443,   443,   443,   443,   443,   443,   444,   444,   445,
     445,   445,   446,   446,   447,   448,   448,   448,   449,   449,
     449,   450,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   452,   452,   452,   453,   453,   454,   454,   455,
     455,   455,   456,   456,   456,   457,   458,   458,   459,   459,
     459,   460,   460,   460,   461,   461,   461,   462,   462,   462,
     463,   463,   463,   463,   463,   463,   463,   463,   463,   463,
     463,   463,   463,   463,   464,   464,   465,   465,   465,   465,
     466,   466,   467,   467,   467,   468,   468,   468,   468,   468,
     469,   469,   469,   470,   470,   470,   470,   470,   470,   471,
     471,   471,   471,   471,   471,   471,   472,   472,   473,   474,
     474,   474,   475,   475,   475,   476,   476,   476,   477,   477,
     477,   477,   477,   477,   478,   478,   478,   478,   478,   478,
     478,   479,   479,   480,   480,   481,   481,   482,   482,   483,
     483,   483,   484,   484,   485,   485,   486,   486,   487,   487,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   489,   490,
     490,   491,   491,   491,   491,   492,   492,   492,   492,   493,
     493,   493,   493,   493,   493,   494,   494,   494,   494,   494,
     494,   494,   494,   495,   495,   496,   496,   496,   497,   497,
     497,   497,   497,   497,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   499,   499,   499,   499,
     499,   499,   499,   499,   499,   500,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   503,   503,   503,
     503,   503,   503,   503,   503,   503,   504,   504,   504,   504,
     504,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     506,   506,   506,   506,   506,   506,   506,   506,   506,   506,
     506,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     512,   512,   512,   512,   512,   512,   513,   513,   514,   514,
     514,   515,   516,   516,   516,   516,   516,   516,   516,   517,
     518,   518,   518,   518,   518,   518,   519,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   521,   521,   521,   521,   521,   521,
     522,   522,   522,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   523,   523,   523,   523,
     524,   524,   524,   525,   525,   525,   526,   526,   526,   526,
     526,   526,   526,   527,   527,   527,   527,   527,   527,   527,
     527,   527,   527,   527,   527,   527,   527,   527,   527,   527,
     527,   527,   527,   527,   527,   527,   527,   527,   527,   527,
     527,   527,   527,   527,   527,   527,   527,   527,   527,   527,
     527,   527,   527,   527,   527,   527,   527,   527,   527,   527,
     527,   527,   527,   527,   527,   527,   527,   527,   527,   527,
     527,   527,   527,   527,   527,   527,   527,   527,   527,   527,
     527,   527,   527,   527,   527,   527,   527,   527,   527,   527,
     527,   527,   527,   527,   527,   527,   527,   527,   527,   527,
     528,   528,   528,   528,   529,   529,   530,   530,   531,   531,
     532,   533,   533,   533,   533,   533,   533,   534,   534,   535,
     535,   535,   535,   535,   535,   536,   536,   536,   536,   536,
     536,   536,   537,   537,   538,   538,   538,   538,   538,   538,
     538,   538,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   540,   540,   541,   542,   541,   543,
     543,   543,   544,   544,   544,   544,   544,   544,   545,   545,
     546,   546,   547,   548,   549,   548,   550,   550,   551,   552,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   554,   554,   554,   554,   554,   554,
     554,   554,   555,   555,   555,   555,   556,   556,   556,   556,
     556,   556,   556,   556,   557,   557,   557,   558,   558,   558,
     559,   559,   559,   559,   560,   560,   560,   560,   561,   561,
     562,   562,   562,   562,   563,   563,   564,   564,   564,   564,
     565,   565,   565,   565,   566,   566,   567,   567,   567,   568,
     568,   568,   569,   569,   569,   570,   570,   570,   570,   571,
     571,   571,   571,   571,   572,   572,   572,   573,   573,   573,
     573,   573,   574,   574,   574,   574,   574,   574,   575,   575,
     575,   575,   575,   575,   575,   575,   575,   575,   575,   575,
     575,   576,   576,   576,   577,   577,   577,   578,   578,   578,
     579,   579,   579,   580,   580,   580,   580,   581,   581,   581,
     582,   582,   582,   583,   583,   583,   584,   584,   584,   585,
     585,   585,   586,   586,   586,   587,   587,   587,   588,   588,
     588,   589,   589,   589,   590,   590,   590,   591,   591,   591,
     592,   592,   592,   593,   594,   594,   594,   595,   595,   595,
     595,   596,   596,   596,   596,   596,   597,   597,   597,   598,
     598,   599,   599,   599,   599,   599,   600,   600,   600,   601,
     601,   601,   602,   602,   602,   602,   603,   604,   604,   604,
     604,   604,   605,   605,   605,   605,   605,   605
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     3,     2,     1,     1,     2,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     2,     3,     2,     2,     2,     3,
       2,     2,     2,     2,     3,     2,     2,     3,     2,     2,
       2,     2,     2,     2,     1,     3,     2,     2,     2,     1,
       2,     2,     2,     1,     2,     1,     2,     2,     2,     2,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     2,     1,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     1,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     0,
       1,     1,     1,     0,     1,     1,     0,     1,     1,     0,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       1,     1,     0,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     2,     1,
       2,     1,     2,     2,     6,     2,     4,     2,     2,     2,
       3,     2,     2,     1,     2,     1,     2,     4,     5,     2,
       3,     5,     6,     1,     1,     1,     7,    11,     8,    12,
       1,     2,     2,     1,     1,     2,     2,     2,     2,     3,
       3,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     1,     3,     2,     2,     2,     5,     9,
       9,     9,     7,     1,     2,     1,     5,     9,     9,     9,
       7,     1,     2,     2,     2,     2,     2,     2,    13,    13,
      12,    12,     1,     0,     1,     1,     4,     6,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     3,     4,
       0,     6,     8,     2,     3,     3,     3,     0,     4,     4,
       4,     4,     3,     3,     1,     3,     5,     4,     4,     3,
       2,     0,     1,     1,     1,     1,     1,     3,     0,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     2,     2,     2,     4,     3,     2,
       2,     2,     2,     2,     1,     3,     2,     2,     2,     1,
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
       0,     1,     1,     1,     1,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     1,     2,     2,     2,     2,     1,     1,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       2,     2,     0,     1,     2,     1,     6,     5,     1,     1,
       1,     2,     2,     2,     1,     1,     1,     1,     2,     1,
       1,     1,     2,     1,     1,     1,     2,     2,     2,     0,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     1,     2,     3,     1,     2,     2,     4,
       5,     1,    10,     1,     2,     3,     3,     2,     2,     2,
       2,     2,     2,     2,     4,     4,     4,     3,     3,     5,
       4,     4,     4,     3,     3,     3,     3,     3,     3,     2,
       2,     4,     3,     3,     3,     3,     4,     4,     4,     4,
       5,     4,     6,     7,     4,     4,     5,     2,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     3,     3,     3,
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
       0,     1,     1,     2,     2,     3,     2,     3,     2,     3,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     2,     3,     2,     2,
       2,     2,     1,     1,     1,     1,     4,     2,     3,     3,
       2,     3,     2,     2,     2,     3,     3,     3,     2,     3,
       1,     3,     3,     1,     2,     2,     2,     2,     9,     6,
       1,     1,     1,     1,     2,     2,     3,     3,     1,     2,
       3,     3,     1,     2,     1,     1,     1,     1,     1,     2,
       2,     4,     2,     2,     4,     2,     2,     2,     4,     1,
       2,     2,     2,     3,     1,     1,     1,     2,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     1,     2,
       2,     2,     3,     2,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     3,     3,     3,     2,     2,     2,
       3,     3,     3,     2,     2,     2,     2,     2,     2,     3,
       3,     3,     2,     2,     2,     2,     2,     2,     3,     3,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     3,     3,     4,     6,     2,     1,     1,     1,     1,
       1,     0,     5,     1,     6,     3,     1,     2,     2,     2,
       3,     3,     2,     2,     2,     2,     2,     2,     3,     2,
       2,     3,     1,     3,     4,     2,     1,     2,     5,     6,
       6,     2,     1,     2,     2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     7,     8,     0,     0,     0,     0,
       0,   320,     0,     0,     0,     0,     0,     0,   348,     0,
       0,    23,     0,     0,     0,     0,     0,  1150,     0,     0,
       0,     0,  1081,     0,     0,     0,     0,     0,     0,     0,
       0,  1081,    44,     0,     0,     0,    49,     0,     0,     0,
      53,  1331,    55,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,    60,    61,
       0,   250,     6,     0,     0,     0,     0,     0,     0,     9,
       0,     0,   283,   285,     0,     0,     0,     0,     0,    11,
     150,   152,   145,   146,   147,   151,   148,   149,   291,    12,
       0,   303,     0,     0,     0,    13,     0,     0,     0,     0,
     327,     0,    14,    73,   102,     0,   132,   101,    81,    99,
       0,    78,    80,    76,   133,   100,    77,     0,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,    74,    75,    79,   334,
     158,   103,     0,    15,     0,    16,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,    62,   346,
     345,    18,     0,    19,     0,     0,     0,   408,   422,     0,
     428,     0,     0,     0,     0,     0,     0,     0,   363,     0,
     500,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1081,     0,   374,     0,   379,     0,     0,     0,   383,     0,
     385,     0,   387,     0,     0,   549,   391,    20,     0,   555,
      21,   560,     0,     0,   579,   564,   565,   566,   567,   581,
     569,   570,   574,   571,     0,   573,   575,     0,     0,    22,
       0,    24,     0,     0,     0,    26,     0,     0,     0,    27,
       0,   596,     0,     0,     0,   601,     0,    28,     0,  1152,
     140,  1172,     0,  1151,  1164,  1168,  1162,     0,  1160,  1170,
       0,  1166,    36,     0,     0,     0,     0,     0,     0,    30,
     761,    31,     0,     0,     0,     0,     0,     0,   762,    32,
       0,    33,  1085,  1086,  1082,  1083,  1084,     0,   140,  1174,
       0,   134,     0,     0,     0,    35,     0,  1185,  1184,  1183,
    1182,    38,     0,     0,     0,     0,     0,   158,     0,    39,
       0,  1203,     0,  1200,    40,     0,     0,     0,     0,    43,
       0,    42,    41,     0,     0,     0,     0,    46,     0,     0,
    1239,    47,     0,     0,     0,     0,     0,    48,  1327,  1326,
    1330,  1329,  1328,    50,     0,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,     0,     0,  1333,    54,
       0,     0,    56,     0,     0,     0,     0,   158,    57,  1356,
      58,     0,     0,    59,     1,     4,     5,   233,     0,   225,
       0,     0,   227,     0,   235,   228,   232,   243,   244,   229,
     245,     0,   231,   253,   254,   252,   251,     0,     0,   273,
       0,   258,   266,   269,   268,   267,   265,   257,   262,   263,
     264,   256,     0,     0,     0,     0,     0,     0,   261,    10,
       0,     0,     0,     0,     0,     0,     0,     0,   284,     0,
       0,   292,     0,   302,   293,   304,   294,   305,   295,   316,
     296,     0,     0,   297,     0,    92,    93,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   323,
       0,     0,     0,     0,     0,   160,   165,   159,   161,   164,
     163,   162,     0,     0,   340,    67,    68,    69,    70,    71,
      63,    64,    65,    72,    66,     0,   349,     0,   404,   400,
     396,   397,   401,   398,   403,   350,   407,   351,   308,   412,
     416,   411,   311,   310,   309,     0,     0,   352,   423,   354,
       0,   353,     0,   430,   355,   442,   434,   445,   435,   436,
     438,     0,   440,   441,   158,   356,     0,     0,   357,     0,
       0,   158,   358,   454,   158,   452,   359,   455,   361,   158,
     456,   360,     0,   158,     0,   362,   474,     0,   472,   490,
       0,     0,     0,   478,   470,     0,   480,   495,   483,   364,
     501,   502,   365,   366,     0,     0,   525,   526,   527,   369,
     522,   523,   524,   370,     0,   465,     0,   371,    82,   462,
       0,   372,   373,   516,   516,   503,   504,   516,   516,   377,
       0,   515,   509,   514,   510,   511,   512,   513,   376,   378,
     518,   380,     0,   519,   520,   521,   382,   533,   528,   529,
     531,   384,   539,   541,   543,   545,   538,   540,   547,   386,
       0,     0,   552,     0,   390,   158,   554,   561,     0,   562,
     580,   563,   582,   583,   584,   568,   585,   587,   586,   588,
     572,   576,   593,     0,     0,     0,     0,   589,   577,    25,
    1235,  1236,  1237,     0,  1232,  1233,     0,     0,     0,   598,
     597,     0,     0,     0,     0,    29,   140,  1173,     0,  1165,
    1169,  1163,  1161,  1171,     0,  1167,   143,   144,   142,   141,
    1156,  1154,  1153,  1158,     0,     0,     0,     0,   608,     0,
     609,     0,     0,     0,     0,     0,     0,     0,   610,     0,
     760,     0,   611,     0,   612,     0,     0,   613,     0,   765,
     764,   763,     0,   768,     0,     0,     0,   934,     0,     0,
       0,   772,   776,   778,   970,     0,     0,     0,     0,   872,
       0,     0,     0,   907,     0,     0,     0,     0,     0,     0,
       0,   909,     0,     0,     0,    34,  1180,  1175,  1181,   137,
     138,   136,   139,   135,  1176,     0,  1178,  1179,    37,     0,
       0,     0,     0,  1192,  1193,     0,   158,     0,  1190,  1187,
       0,     0,     0,   158,  1210,  1213,  1211,  1212,  1204,  1205,
    1206,  1207,     0,     0,     0,    45,  1229,  1230,     0,  1244,
    1246,  1245,  1241,  1242,  1240,     0,     0,     0,     0,     0,
       0,  1247,     0,  1250,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1248,  1258,     0,     0,
       0,  1249,  1251,  1325,  1227,  1228,  1226,   213,     0,   217,
     209,     0,   219,   210,     0,   221,   211,  1225,  1224,   212,
     214,   215,   216,     0,     0,   208,     0,     0,     0,     0,
    1339,  1352,     0,     0,  1342,     0,     0,  1345,     0,     0,
    1344,  1343,   166,  1362,     0,  1361,  1357,   234,   230,     0,
     239,     0,   236,     0,   255,   153,   156,   157,   155,   154,
     270,   271,   272,   260,   259,   275,   277,   276,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   158,     0,   324,    98,    95,    96,    97,
     158,   326,   325,     0,     0,     0,     0,     0,     0,     0,
     339,     0,   335,   333,   332,   347,   399,     0,     0,   402,
     417,   418,   413,   414,   419,   421,   420,   415,   312,   313,
     410,   409,   425,   424,     0,   429,   443,   444,   433,   446,
     439,   437,   432,     0,     0,   158,   158,   166,   166,   166,
     158,     0,     0,   158,   491,   473,   484,     0,   475,    82,
     486,     0,     0,   477,   479,   158,   496,     0,     0,   482,
       0,     0,   368,     0,   467,    86,    85,   461,     0,   517,
     506,   505,   507,   508,     0,     0,     0,   984,   986,   985,
       0,  1074,     0,  1053,     0,  1056,     0,     0,  1076,  1078,
       0,  1069,   375,     0,   530,   532,   542,   535,   544,   536,
     546,   537,   548,   534,     0,     0,   389,   553,   550,   551,
     166,   578,   590,   591,   592,   594,     0,     0,     0,   607,
     595,     0,     0,     0,  1157,  1155,  1159,     0,     0,     0,
     179,   179,   173,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   176,   176,   173,     0,     0,   173,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   655,
     679,     0,     0,     0,   647,     0,     0,     0,     0,   179,
     173,     0,     0,   756,     0,   766,   767,   158,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   822,     0,     0,     0,     0,     0,   844,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   862,     0,     0,
     867,   868,     0,     0,     0,   887,   889,   888,     0,   891,
       0,     0,   898,   900,   901,   935,     0,     0,     0,     0,
     770,   771,   978,   976,   981,   980,   979,   977,   982,     0,
     775,     0,   972,   971,   779,     0,   975,     0,   780,   781,
     782,   783,     0,     0,     0,     0,     0,   874,     0,     0,
     875,  1097,     0,  1100,  1096,     0,     0,     0,   876,   908,
     877,  1115,  1120,  1117,  1123,  1116,  1114,  1121,  1118,  1112,
    1119,  1113,  1122,     0,     0,   882,     0,     0,     0,     0,
     883,  1132,  1136,  1137,     0,  1134,   884,     0,  1138,   885,
     905,     0,     0,     0,   910,   911,   912,  1177,  1191,     0,
       0,  1198,  1194,     0,     0,     0,  1189,  1188,  1202,  1201,
       0,     0,  1218,     0,     0,  1214,     0,  1222,     0,     0,
    1215,     0,  1243,   202,   202,     0,     0,     0,   202,     0,
    1272,     0,  1271,     0,     0,     0,     0,  1259,     0,     0,
       0,     0,  1263,     0,     0,     0,  1270,     0,     0,     0,
       0,     0,  1261,  1273,     0,     0,     0,  1260,   202,   202,
     202,     0,   218,   220,   222,     0,   223,     0,    61,     0,
    1335,     0,  1340,   158,  1355,     0,  1346,  1347,     0,  1349,
    1350,     0,   167,   168,  1341,  1363,  1364,     0,   226,     0,
     240,     0,     0,     0,     0,   274,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     318,   158,     0,     0,     0,     0,   158,     0,   338,     0,
     337,   406,   405,     0,     0,     0,   158,     0,   166,   451,
     449,   453,   457,     0,     0,     0,   166,     0,   492,   476,
       0,   487,   489,   169,     0,     0,   367,     0,     0,    61,
       0,   466,    84,    83,     0,     0,   996,     0,     0,     0,
       0,     0,     0,  1008,     0,     0,     0,     0,     0,     0,
    1024,  1025,     0,     0,     0,     0,  1035,     0,  1041,  1042,
    1044,  1046,     0,  1050,  1061,  1062,  1063,     0,  1065,  1070,
    1072,  1073,  1071,   983,     0,  1052,     0,  1051,   995,     0,
       0,  1057,     0,  1059,     0,  1058,  1079,  1060,  1067,     0,
       0,   388,     0,     0,  1238,  1234,   605,   606,     0,   603,
     599,     0,   179,   179,   179,   180,   181,   617,   618,   175,
     174,     0,   179,   179,   179,     0,   625,   624,   623,   635,
     176,   179,   179,   179,   177,   178,   179,   179,     0,   179,
     179,     0,   176,     0,   648,     0,   654,     0,   653,   652,
     651,     0,     0,     0,   678,     0,   677,     0,   650,   649,
       0,     0,     0,     0,   176,   176,   173,     0,     0,   173,
       0,     0,     0,   179,   179,   752,     0,   179,   179,   757,
       0,   192,   193,   194,   195,   196,   197,     0,    90,    91,
      89,   787,     0,     0,     0,     0,     0,   928,   926,   921,
       0,   931,   915,   932,   918,   930,   924,   913,   927,   916,
     914,   933,   929,     0,     0,   801,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   832,
       0,     0,     0,     0,   843,   845,     0,     0,   850,   849,
       0,     0,   182,     0,     0,   158,     0,   858,     0,     0,
       0,     0,   863,   864,   865,     0,     0,     0,   871,   886,
     890,   892,   895,   894,     0,     0,     0,   899,   936,   938,
       0,   937,   773,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1080,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   777,     0,
       0,     0,     0,   873,     0,   158,  1093,  1091,  1089,     0,
       0,   158,  1095,   878,     0,     0,     0,     0,  1131,     0,
       0,  1139,   903,   904,     0,   906,  1197,  1199,  1196,  1195,
    1186,     0,     0,     0,  1219,     0,     0,  1223,  1231,   204,
     205,   206,   207,   203,  1253,  1252,     0,     0,     0,  1257,
       0,     0,     0,  1256,     0,     0,     0,  1255,  1254,   202,
       0,     0,     0,  1262,     0,     0,     0,  1269,     0,     0,
       0,  1268,     0,     0,     0,  1267,     0,     0,     0,  1266,
       0,     0,     0,     0,     0,  1283,     0,  1318,  1317,  1319,
       0,     0,     0,  1265,     0,     0,     0,  1264,  1278,  1277,
    1279,  1275,  1274,  1276,  1321,  1320,  1322,     0,     0,     0,
    1337,  1338,     0,  1353,   158,  1348,  1351,     0,     0,   158,
       0,     0,     0,   237,     0,     0,     0,     0,   278,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   315,   314,
       0,     0,   306,   317,   319,     0,   329,   331,   330,   328,
     158,   336,     0,     0,     0,   166,   158,     0,     0,     0,
       0,   471,   485,   494,     0,   488,   171,   172,   170,   481,
       0,   497,     0,     0,   464,   469,    82,     0,     0,     0,
       0,     0,     0,   158,   997,     0,     0,     0,  1002,     0,
     158,     0,  1009,  1010,     0,  1012,  1013,  1014,     0,     0,
       0,  1020,     0,  1026,     0,     0,     0,  1030,  1031,     0,
       0,     0,  1036,  1037,     0,     0,  1040,  1043,  1045,  1047,
       0,     0,  1064,  1066,   987,  1075,   988,     0,     0,  1077,
    1068,     0,     0,   558,   559,     0,   600,   604,     0,   614,
     615,   616,   179,   620,   621,   622,     0,     0,     0,   629,
     630,   173,     0,     0,     0,   179,   636,   637,   638,   639,
     641,   176,   644,   645,     0,   179,     0,     0,     0,   176,
     176,   173,     0,     0,     0,     0,     0,     0,     0,   176,
     176,   173,     0,     0,   173,     0,     0,     0,     0,   176,
     176,   173,     0,     0,     0,     0,   676,     0,   680,     0,
       0,     0,     0,     0,   176,   176,   173,     0,     0,   173,
       0,     0,     0,     0,     0,   176,   176,   173,     0,     0,
     173,     0,   176,   656,   657,   658,   659,   661,     0,   664,
     665,     0,   176,     0,     0,   750,   751,   179,   754,   755,
       0,   786,   158,   788,     0,     0,     0,     0,     0,     0,
       0,   920,   917,   923,   922,   919,   925,     0,     0,     0,
       0,     0,   158,   806,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   823,   824,   825,
       0,   829,   826,   828,     0,     0,   834,   833,   835,     0,
       0,     0,     0,     0,     0,   158,   158,   848,   188,   184,
     189,   183,   186,   185,   187,   854,   855,     0,     0,   857,
     859,   158,   158,     0,   866,   869,   158,   158,   893,   897,
     939,   774,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1124,   964,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   965,     0,
       0,     0,     0,     0,   784,   785,   158,   166,  1094,     0,
       0,  1098,  1099,     0,     0,   880,     0,   158,     0,  1133,
    1135,   902,     0,  1216,  1217,  1220,  1221,   202,   202,   202,
     202,   202,   202,   202,   202,   202,  1323,  1281,  1280,  1282,
    1315,  1314,  1316,  1312,  1311,  1313,  1306,  1305,  1307,  1303,
    1302,  1304,  1285,  1284,  1288,  1287,  1289,  1286,  1297,  1296,
    1298,  1294,  1293,  1295,     0,     0,  1332,     0,  1354,     0,
     158,     0,  1358,     0,     0,   241,     0,   238,     0,     0,
       0,     0,     0,   286,     0,     0,     0,     0,     0,     0,
       0,   158,     0,   321,   146,     0,   426,     0,   447,   166,
     169,     0,     0,   460,     0,   498,   499,     0,   463,     0,
       0,     0,     0,     0,   158,   998,   169,   169,   169,   158,
    1003,   169,   166,   169,   169,   158,  1015,   169,   169,   169,
     158,  1021,   169,   169,   158,     0,   169,   158,   169,   169,
     158,   169,   158,  1054,  1055,     0,     0,   557,     0,   619,
     626,   627,   628,     0,   632,   633,   634,   640,   179,   176,
     646,   667,   668,   669,   670,   671,     0,   673,   674,   176,
     176,   730,   731,   732,   733,   735,     0,   738,   739,     0,
     176,   741,   742,   743,   744,   745,     0,   747,   748,   176,
       0,     0,     0,   176,   176,   173,     0,     0,     0,     0,
       0,     0,   176,   176,   173,     0,     0,     0,     0,     0,
       0,   176,   176,   173,     0,     0,     0,   176,   179,   179,
     179,   179,   179,     0,   179,   179,     0,   176,   176,   179,
     179,   179,   179,   179,     0,   179,   179,     0,   176,   660,
     176,     0,   666,     0,     0,   753,     0,   789,   169,     0,
       0,   169,     0,     0,     0,   799,   169,   802,   803,   169,
     805,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   827,   830,   831,     0,   169,     0,
       0,     0,   846,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1125,
    1103,     0,  1110,  1111,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   158,     0,     0,    87,
       0,     0,   973,   974,   166,     0,     0,     0,  1101,   879,
     881,   166,   158,  1209,  1309,  1308,  1310,  1300,  1299,  1301,
    1291,  1290,  1292,  1324,     0,  1334,  1365,     0,     0,  1360,
    1359,   242,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   282,     0,     0,   307,   169,   427,   431,   448,   450,
       0,   458,   493,   158,     0,     0,     0,     0,     0,     0,
     994,   999,  1001,  1000,  1004,  1005,  1006,  1007,  1011,  1016,
    1017,  1018,  1019,  1022,  1023,  1027,   166,   169,  1033,   166,
    1034,  1038,   166,  1048,   166,     0,   158,     0,   556,     0,
     631,   642,   179,   176,   675,   734,   176,     0,   740,   176,
     749,   179,   179,   179,   179,   179,     0,   179,   179,   176,
     179,   179,   179,   179,   179,     0,   179,   179,   176,   179,
     179,   179,   179,   179,     0,   179,   179,   176,   179,   690,
     691,   692,   693,   695,   176,   698,   699,     0,   179,   179,
     719,   720,   721,   722,   724,   176,   727,   728,     0,   179,
     662,   176,   758,   759,   158,   791,     0,   169,   793,     0,
     158,     0,   800,   804,   158,     0,   811,   812,   813,   814,
     818,   819,   815,   816,   817,     0,     0,   169,   838,     0,
     158,     0,     0,   851,   169,     0,     0,   169,   169,     0,
     896,     0,   190,   190,     0,     0,   190,     0,   190,  1080,
       0,     0,     0,     0,     0,     0,     0,     0,  1102,     0,
       0,   190,   190,     0,     0,     0,     0,     0,     0,     0,
       0,   966,     0,     0,     0,  1080,    88,     0,   190,     0,
    1127,   158,   158,     0,   166,     0,   224,  1367,  1366,     0,
       0,   246,     0,     0,     0,     0,     0,   290,     0,     0,
       0,   322,   459,     0,   341,     0,   990,     0,   198,     0,
    1028,  1029,  1032,  1039,  1049,   381,     0,   341,     0,   643,
     672,   736,   176,   746,   681,   682,   683,   684,   685,   176,
     687,   688,   179,   710,   711,   712,   713,   714,   176,   716,
     717,   179,   701,   702,   703,   704,   705,   176,   707,   708,
     179,   694,   179,   176,   700,   723,   179,   176,   729,   663,
       0,   169,   794,     0,     0,     0,     0,     0,   820,   821,
     836,     0,     0,     0,   847,   852,     0,   860,   861,   853,
     169,     0,   191,  1080,  1080,    87,     0,  1080,     0,  1080,
     940,   158,     0,  1105,     0,  1108,  1148,  1109,  1107,  1104,
       0,  1080,  1080,    87,     0,     0,  1080,  1080,     0,     0,
    1080,   969,   967,   968,   947,  1080,  1080,  1127,  1143,     0,
    1092,  1090,  1129,     0,     0,     0,     0,   248,   280,   281,
       0,     0,     0,   279,     0,   341,   342,   344,   343,   392,
       0,     0,   199,   201,   200,   992,   993,   341,   394,     0,
     737,   179,   689,   179,   718,   179,   709,   696,   179,   725,
     179,     0,   790,   169,   169,     0,   169,     0,   169,   169,
       0,   169,     0,  1080,   953,   949,  1080,     0,   954,     0,
     948,  1080,     0,  1106,     0,   951,   950,  1080,     0,     0,
     945,   943,  1080,   158,   944,   946,   952,  1143,  1087,     0,
       0,  1128,  1141,  1130,  1208,     0,     0,   288,   289,   287,
     308,   311,   309,     0,     0,   393,   989,   158,   395,   602,
     686,   715,   706,   697,   726,   169,   792,   798,     0,   810,
     807,   837,   842,     0,   856,     0,   958,   942,    87,     0,
     956,  1149,     0,   941,    87,     0,   957,     0,  1088,  1145,
    1147,     0,  1140,     0,     0,     0,     0,     0,     0,   198,
       0,   795,   158,   808,   839,   870,  1080,     0,     0,  1080,
       0,   169,  1146,  1142,   247,     0,     0,     0,     0,     0,
     991,   769,   158,   796,   809,   158,   840,   960,     0,  1080,
     959,     0,     0,   249,   301,     0,   300,     0,   797,   841,
      87,   961,    87,  1080,   299,   298,  1080,  1080,   955,   963,
     962
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    57,  1550,   177,   159,  1007,  2675,  2676,   469,   470,
     471,   472,   160,   161,   162,   774,   700,    98,   900,   492,
    1334,  1839,  1481,  1496,  1477,  2075,  2783,  1547,  2845,  1714,
     375,   850,   853,   856,   865,    67,   399,   405,   409,   412,
      72,   415,    79,   431,   427,   421,   438,    89,   448,    99,
     105,   454,   456,   458,   526,   960,  1810,   460,   463,   112,
     479,   163,   165,  2839,   181,   183,   227,  1002,  1046,   515,
     949,   517,   527,   952,   957,   529,   531,   963,   534,   965,
     545,   968,   970,   548,   552,   556,   558,   561,   565,   601,
     597,  1401,   579,   988,   993,   985,  1389,   999,   582,   609,
     618,  1010,   621,   626,   593,   589,   631,   639,  1037,  1039,
    1041,  1043,   644,  1048,   230,   646,  1905,   249,   649,   651,
     655,   660,   668,   267,  1470,   679,   289,   708,  1486,   710,
     718,  1104,  1504,  1099,  1966,  1516,  1514,  1968,  1100,  1506,
    1508,   724,   727,   722,   291,   299,   301,   765,  1181,  1573,
    1170,  1668,  2118,  1184,  1188,  1179,  1032,  1443,  1447,  1455,
    1457,  2102,   307,  1197,  1200,  1208,  2429,  2430,  2431,  2103,
    2818,  2819,  1230,  1236,  1239,  2901,  2902,  2898,  2899,  2949,
    2432,  2433,   282,   315,   321,   329,   788,   783,   334,   339,
     341,   798,   805,  1265,  1270,   859,   847,   347,   259,   255,
     351,   812,   357,   821,   836,   837,  1307,  1302,  1733,  1292,
    1755,  1727,  1767,  1763,  1723,  1749,  1745,  1719,  1741,  1737,
    1296,   841,   823,   363,   364,   379,  1320,   382,   388,   877,
     880,   874,   390,   393,   885
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2738
static const yytype_int16 yypact[] =
{
    5164,    63,   574,    20, -2738, -2738,  1440,   -95,   964,   873,
    1030,   510,  2834,   383,   302,    55,   881,    89,  5369,   482,
    2632, -2738,   179,   109,   126,  1145,   473,   991,  1498,   304,
      30,   553,   418,   645,   525,   781,  2762,    12,   460,   594,
     511,   418, -2738,   198,    66,  1499, -2738,   582,   599,   962,
   -2738,   458, -2738,    34,  1512,   376,   112,   626,    14,  1134,
     352,   704,   662,   117,   713,    21,   683, -2738, -2738, -2738,
     763,   206, -2738,   494,    41,   302,    -2,   465,   641, -2738,
     716,   206, -2738, -2738,   206,   206,   520,   688,   206, -2738,
   -2738, -2738, -2738,   206, -2738, -2738, -2738, -2738, -2738, -2738,
     187,   705,   721,   750,   147, -2738,   206,  1452,   206,   206,
     900,   206, -2738, -2738, -2738,   555, -2738, -2738, -2738, -2738,
    4724, -2738, -2738, -2738, -2738, -2738, -2738,   206, -2738, -2738,
   -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738,
    1775, -2738,   206, -2738,   765, -2738, -2738,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302, -2738, -2738, -2738,
   -2738, -2738,   678, -2738,   748,  1860,   709,   215,   589,   676,
     -23,  4315,   140,  4780,  4696,   842,  4724,  3869, -2738,  1275,
     -99,   810,   889,   809,   199,   265,   628,   515,   901,   176,
     418,   666, -2738,   855, -2738,   681,   629,   271, -2738,   512,
   -2738,   503, -2738,   505,   851,    57, -2738, -2738,  3036, -2738,
   -2738, -2738,   885,   909,   935, -2738, -2738, -2738, -2738,   829,
   -2738, -2738, -2738, -2738,  1013, -2738, -2738,  3036,  4226, -2738,
     971, -2738,    26,  3036,   976, -2738,   989,  3036,   996, -2738,
      98, -2738,  1007,  1003,   125, -2738,   206, -2738,  1034,  1662,
     891, -2738,  1029, -2738, -2738, -2738, -2738,  1083, -2738, -2738,
     206, -2738, -2738,   359,  1085,   333,   959,  1094,    25, -2738,
   -2738, -2738,  1097,  1104,   302,   302,   206,   206, -2738, -2738,
    1106, -2738, -2738, -2738, -2738, -2738, -2738,  3680,   891, -2738,
    1117,   277,   206,  3036,   206, -2738,  1125, -2738, -2738, -2738,
   -2738, -2738,   206,   157,   302,  2229,   206,  1775,   206, -2738,
    1128, -2738,  5370, -2738, -2738,   949,  1135,  1147,   206, -2738,
    1157, -2738, -2738,   381,  1144,  3036,  1165, -2738,  1101,   206,
    1087, -2738,   948,  1086,  1470,   160,  1207, -2738, -2738, -2738,
   -2738, -2738, -2738, -2738,  1216, -2738,    59,   189,   228,   240,
      68,   206,  1218,   206,    58, -2738,   206,   940,  1229, -2738,
     206,   206, -2738,    28,    53,    54,  1231,  1775, -2738, -2738,
   -2738,  1065,   206, -2738, -2738, -2738, -2738, -2738,   206, -2738,
    1233,  1235, -2738,   206,  1143, -2738, -2738, -2738, -2738, -2738,
   -2738,   206, -2738, -2738,   206, -2738, -2738,   577,   577, -2738,
    1241, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738,  1039,   206,   206,  1250,  1252,  1262, -2738, -2738,
     206,   206,   206,   206,   206,   206,  1271,   206, -2738,  1280,
     206, -2738,  1282, -2738, -2738, -2738, -2738,   864, -2738,  1263,
   -2738,  3036,  1274, -2738,   206, -2738, -2738, -2738,   206,  1299,
    1283,  1283,  3036,   206,   206,   206,   206,   206,   206, -2738,
     206,  4724,  1452,   206,   206, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738,  1452,   206, -2738, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738, -2738, -2738,  1304, -2738,  1027,    42, -2738,
   -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738,    -7, -2738,
   -2738, -2738,  1136, -2738,   -33,    13,    13, -2738, -2738, -2738,
    1309, -2738,  1324, -2738, -2738,   -51, -2738,  1149, -2738, -2738,
   -2738,  1152, -2738, -2738,  1775, -2738,   206,   206, -2738,  3036,
    3036,  1775, -2738, -2738,  1775, -2738, -2738, -2738, -2738,  1775,
   -2738, -2738,  3036,  1775,   206, -2738, -2738,  3036, -2738,  1339,
      84,  1137,     7, -2738, -2738,  1142,  3036,    50, -2738, -2738,
   -2738, -2738, -2738, -2738,  1359,  1371, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738, -2738,  1375, -2738,  1176, -2738,   -27, -2738,
     206, -2738, -2738,  1383,  1383, -2738, -2738,  1383,  1383, -2738,
     853, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738,   505, -2738, -2738, -2738, -2738, -2738, -2738,  1193,
    1198, -2738, -2738,  1337,  1346,  1355, -2738, -2738,  1186, -2738,
     206,  1421,  1190,  5370, -2738,  1775, -2738, -2738,  1429, -2738,
   -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738,  3036,  3036,  3036,  3036, -2738, -2738, -2738,
   -2738, -2738, -2738,  1435, -2738, -2738,  1441,  1444,   302, -2738,
   -2738,  1450,  1454,  1255,   206, -2738,   891, -2738,  1439, -2738,
   -2738, -2738, -2738, -2738,   206, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738, -2738,   373,  1377,  1385,  1388, -2738,  1466,
   -2738,   554,  1389,    35,    60,  4811,    61,  1476, -2738,  1478,
   -2738,  1480, -2738,   321, -2738,  1485,  1490, -2738,  1492, -2738,
   -2738, -2738,   206, -2738,  5370,  4655,  1681,   703,  1494,   837,
    1408, -2738, -2738, -2738,    27,    56,  1506,  1507,    48,   206,
     814,   818,    44,  3036,   302,  1809,   706,    31,    75,   243,
      10, -2738,  1502,  1503,  1517, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738, -2738, -2738,   206, -2738, -2738, -2738,   206,
     206,   206,   206, -2738, -2738,   206,  1775,   206, -2738,   206,
    1452,   206,  1526,  1775, -2738, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738,  1527,   415,   617, -2738, -2738, -2738,  1529, -2738,
   -2738, -2738, -2738,  1416, -2738,  1530,  1533,  1451,  1453,  1456,
    1550, -2738,  1552, -2738,  1558,  1479,  1559,    91,   369,   168,
     453,   480,   579,   560,  1562,   591, -2738, -2738,  1564,  1568,
    1570, -2738, -2738,  1579, -2738, -2738, -2738, -2738,  1580, -2738,
   -2738,  1582, -2738, -2738,  1588, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738,   206,   206, -2738,   206,  1116,   206,   206,
   -2738,  5370,  1535,  1597, -2738,  1213,  1599, -2738,  1238,  1603,
   -2738, -2738,   183,   206,   206, -2738,  1598, -2738, -2738,  1605,
    1291,   206,  1601,   474, -2738, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738,  1611,  1612,
     206,   206,   206,   206,   206,  1617,   206,  1618,   206,  1620,
     302,  1622,  1627,  1775,  3036, -2738, -2738, -2738, -2738, -2738,
    1775, -2738, -2738,   206,   206,   206,  3036,   206,  1452,   206,
   -2738,   206, -2738, -2738, -2738, -2738, -2738,  1630,  1631, -2738,
   -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738,   140, -2738,   206, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738,  3036,   206,  1775,  1775,   183,   183,   183,
    1775,  1452,   206,  1775, -2738, -2738, -2738,   206, -2738,   -27,
    1465,  1637,  1645, -2738, -2738,  1775, -2738,  1487,  1488, -2738,
    1661,  1665, -2738,  1667,  1285,  1635,  1638, -2738,   206, -2738,
   -2738, -2738, -2738, -2738,  4660,   728,   557, -2738, -2738, -2738,
     206,    62,   969, -2738,  1405, -2738,  1809,  1406,   295,  1381,
     165, -2738, -2738,   206, -2738, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738, -2738,   206,  1679, -2738, -2738, -2738, -2738,
     183, -2738, -2738, -2738, -2738, -2738,  1692,  1693,  4847, -2738,
   -2738,  1694,  1696,   206, -2738, -2738, -2738,  1703,  1704,  1707,
     420,   420,   -63,  1709,  1711,  1712,  1715,  1715,  1715,  1430,
    1437,  1716,  1719,  1720,   122,   122,   -63,  1723,  1724,   -63,
    1728,  1730,  1731,  1733,  1731,  1733,  3669,  1740,  1741, -2738,
   -2738,  1731,  1733,   788, -2738,  1743,  1745,  1746,  1747,   420,
     -63,  1749,  1751, -2738,  1752, -2738, -2738,  1775,  1002,  1522,
    1509,  1513,  1514,  1642,   534,  1520,  1754,    -1,  1610,  1670,
    1400,  1464,  1734,  1528,  1531,  1673,  1781,  1565,    51,    90,
     354,  1537,  3036,  1809,  1762,   536,  1545,  1583,  1788,    46,
   -2738, -2738,   207,  1803,  1805, -2738, -2738, -2738,  1806,  1589,
     110,  1809,  1593, -2738, -2738, -2738,   302,  1813,  1815,   206,
   -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738,     9,
   -2738,   687, -2738, -2738, -2738,   206, -2738,   206, -2738, -2738,
   -2738, -2738,   206,   206,   206,   837,  3036, -2738,  1808,  1266,
   -2738, -2738,   206, -2738, -2738,   206,  3036,   206, -2738, -2738,
   -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738,   302,   206, -2738,   206,   837,  1816,  1817,
   -2738, -2738, -2738, -2738,   206,   206, -2738,   302, -2738, -2738,
   -2738,   158,  1818,  1819, -2738, -2738, -2738, -2738, -2738,   206,
     206, -2738, -2738,  1452,   206,   206, -2738, -2738, -2738, -2738,
    1823,   206, -2738,   206,  1714, -2738,   206, -2738,   206,  1718,
   -2738,  1825, -2738,  1326,  1326,   598,   635,   636,  1326,  1828,
   -2738,   661, -2738,   668,   782,   794,   833, -2738,  1829,  1830,
     892,  1826, -2738,  1833,  1834,  1866, -2738,   907,   931,  1871,
    1873,  1875, -2738, -2738,  1876,  1878,  1881, -2738,  1326,  1326,
    1326,   206, -2738, -2738, -2738,   206, -2738,   206,   164,  3036,
   -2738,   206, -2738,  1775, -2738,  5370, -2738, -2738,  1882, -2738,
   -2738,  1883, -2738, -2738, -2738, -2738,  1869,  2229, -2738,   206,
    1880,   206,   206,   206,  1169, -2738,  1889,   206,   206,  1892,
     206,   206,  1893,   206,  1895,   206,     3,  1896,   302,   302,
   -2738,  1775,   206,  1899,  1900,  1905,  1775,  3036, -2738,   206,
   -2738, -2738, -2738,   206,   206,   206,  1775,  3036,   183, -2738,
   -2738, -2738, -2738,  1452,   206,  1908,   183,   206,   608, -2738,
    1913, -2738, -2738,  1089,  3958,   206, -2738,   206,  1909,  1897,
     206, -2738, -2738, -2738,  1914,  1069,  4724,  1668,  1669,  1671,
      64,  3036,  1672, -2738,    16,  1778,   102,  1675,  1677,   108,
   -2738, -2738,   527,  1755,   370,   785,  1809,   887, -2738,  1926,
    1676, -2738,   597, -2738, -2738, -2738, -2738,  1809,  1721, -2738,
   -2738, -2738, -2738, -2738,   206, -2738,   206, -2738, -2738,   206,
     206, -2738,   206, -2738,   206, -2738, -2738, -2738, -2738,  1735,
     206, -2738,   206,    70, -2738, -2738, -2738, -2738,  1933,  1935,
   -2738,   206,   420,   420,   420, -2738, -2738, -2738, -2738, -2738,
   -2738,  1941,   420,   420,   420,   551, -2738, -2738, -2738, -2738,
     122,   420,   420,   420, -2738, -2738,   420,   420,  1943,   420,
     420,  1944,   122,  1214, -2738,   840, -2738,  1264, -2738, -2738,
   -2738,  1945,  1947,  1948, -2738,  1130, -2738,  1200, -2738, -2738,
    1680,  1949,  1951,  1952,   122,   122,   -63,  1954,  1955,   -63,
    1958,  1961,  1963,   420,   420, -2738,  1964,   420,   420, -2738,
    1967, -2738, -2738, -2738, -2738, -2738, -2738,   302, -2738, -2738,
   -2738,  4724,  1350,   206,  1407,  1318,   426, -2738, -2738, -2738,
     854, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738,  1968,   206, -2738,   302,  1970,   206,  3036,
     302,  1685,  1725,  1726,   166,   181,  1727,   194,  1650,  1654,
    1979,  1980,  1981,   534,  1983,  1984,  1985,  1664,  1666,  1357,
    1989,   206,  1592,  1737, -2738, -2738,   302,  3036, -2738, -2738,
    3036,   206,    47,  1990,   206,  1775,   302, -2738,  1992,  3036,
    3036,   206, -2738, -2738, -2738,   302,   302,  3036, -2738, -2738,
   -2738, -2738, -2738, -2738,  3036,   206,   302, -2738, -2738, -2738,
     206, -2738, -2738,  1994,   206,  1757,    83,   206,  1763,   206,
     191,   206, -2738,   206,  1764,  1766,   206,   206,   206,   206,
     206,   206,   206,   206,    17,   206,   206,  1767, -2738,   206,
     206,   206,   206, -2738,  3036,  1775,  2001,  2003,  2004,   206,
     206,  1775, -2738,   206,   206,   206,  3036,   837, -2738,   206,
     206, -2738, -2738, -2738,  2005, -2738, -2738, -2738, -2738, -2738,
   -2738,  2007,   206,   206, -2738,   206,   206, -2738, -2738, -2738,
   -2738, -2738, -2738, -2738, -2738, -2738,  2009,  2011,  2014, -2738,
    2015,  2016,  2018, -2738,  2019,  2021,  2023, -2738, -2738,  1326,
    2024,  2025,  2027, -2738,  2037,  2038,  2028, -2738,  2039,  2041,
    2045, -2738,  2047,  2048,  2053, -2738,  2054,  2055,  2057, -2738,
    2058,  2059,  2060,  2061,  2064, -2738,  2065, -2738, -2738, -2738,
    2067,  2068,  2066, -2738,  2071,  2072,  2074, -2738, -2738, -2738,
   -2738, -2738, -2738, -2738, -2738, -2738, -2738,   206,   206,   206,
   -2738, -2738,   206, -2738,  1775, -2738, -2738,  2229,   206,  1775,
     206,   206,   206, -2738,   206,   206,  2076,   206, -2738,   206,
     206,  2075,   206,   206,  2077,   206,  2079,   206, -2738, -2738,
    2081,  3036, -2738, -2738, -2738,   206, -2738, -2738, -2738, -2738,
    1775, -2738,   999,   206,   999,   183,  1775,  3036,   206,   206,
    2082, -2738, -2738, -2738,   206, -2738, -2738, -2738, -2738, -2738,
    3036, -2738,  3036,   206, -2738, -2738,   -27,  2083,  2095,  2108,
    2110,  2114,  3036,  1775, -2738,  3036,  3036,  3036,  4724,  3036,
    1775,  3036, -2738, -2738,  3036, -2738, -2738,  4724,  3036,  3036,
    3036,  4724,  3036, -2738,  3036,  3036,   206, -2738, -2738,  3036,
    3036,  3036, -2738, -2738,  3036,  3036, -2738, -2738, -2738, -2738,
    3036,  3036, -2738, -2738, -2738, -2738, -2738,   206,   206, -2738,
   -2738,  2116,   206, -2738, -2738,  2117, -2738, -2738,   206, -2738,
   -2738, -2738,   420, -2738, -2738, -2738,  2118,  2119,  2120, -2738,
   -2738,   -63,  2122,  2123,  2124,   420, -2738, -2738, -2738, -2738,
   -2738,   122, -2738, -2738,  2128,   420,  2129,  2130,  2131,   122,
     122,   -63,  2133,  2134,  2135,  1742,  2136,  2137,  2138,   122,
     122,   -63,  2140,  2141,   -63,  2142,  2143,  2146,  2147,   122,
     122,   -63,  2149,  2150,  2151,  1267, -2738,  1303, -2738,  1417,
    1801,  2152,  2153,  2155,   122,   122,   -63,  2157,  2158,   -63,
    2162,  1847,  2163,  2164,  2165,   122,   122,   -63,  2161,  2167,
     -63,  2168,   122, -2738, -2738, -2738, -2738, -2738,  2170, -2738,
   -2738,  2171,   122,  2172,  2173, -2738, -2738,   420, -2738, -2738,
    2174, -2738,  1775, -2738,  3036,   206,   206,  3036,   206,  2175,
    1522, -2738, -2738, -2738, -2738, -2738, -2738,  2176,  3036,   302,
    2178,  3036,  1775, -2738,  2180,  1522,   206,   206,   206,   206,
     206,   206,   206,   206,   206,  2183,  2185, -2738, -2738, -2738,
    2187, -2738, -2738, -2738,  2190,  2191, -2738, -2738, -2738,   206,
    3036,   206,  2192,  1522,   302,  1775,  1775, -2738, -2738, -2738,
   -2738, -2738, -2738, -2738, -2738, -2738, -2738,   206,  1452, -2738,
   -2738,  1775,  1775,   206, -2738, -2738,  1775,  1775, -2738, -2738,
   -2738, -2738,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206,  3141, -2738,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   206,  2160,  2195,   206, -2738,   206,
     206,   206,  2199,  2201, -2738, -2738,  1775,   183, -2738,  2202,
    2203, -2738, -2738,  1452,   206, -2738,  2205,  1775,  3036, -2738,
   -2738, -2738,  2206, -2738, -2738, -2738, -2738,  1326,  1326,  1326,
    1326,  1326,  1326,  1326,  1326,  1326, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738, -2738,  1522,   206, -2738,   206, -2738,   206,
    1775,   206, -2738,  1452,   206, -2738,   206, -2738,  1998,  2208,
    2210,   206,   206, -2738,   206,   206,  2211,   206,  2207,   206,
    2213,  1775,  3036, -2738, -2738,   206, -2738,   206, -2738,   183,
    1089,   206,  2214, -2738,   206, -2738, -2738,  4724, -2738,  2215,
    2217,  2218,  2219,  2220,  1775, -2738,  1089,  1089,  1089,  1775,
   -2738,  1089,   183,  1089,  1089,  1775, -2738,  1089,  1089,  1089,
    1775, -2738,  1089,  1089,  1775,  3036,  1089,  1775,  1089,  1089,
    1775,  1089,  1775, -2738, -2738,  2222,  4724,  2225,   206, -2738,
   -2738, -2738, -2738,  2227, -2738, -2738, -2738, -2738,   420,   122,
   -2738, -2738, -2738, -2738, -2738, -2738,  2230, -2738, -2738,   122,
     122, -2738, -2738, -2738, -2738, -2738,  2231, -2738, -2738,  2232,
     122, -2738, -2738, -2738, -2738, -2738,  2233, -2738, -2738,   122,
    2234,  2236,  2237,   122,   122,   -63,  2239,  2240,  2243,  2244,
    2245,  2246,   122,   122,   -63,  2248,  2249,  2250,  2251,  2252,
    2253,   122,   122,   -63,  2255,  2256,  2257,   122,   420,   420,
     420,   420,   420,  2260,   420,   420,  2262,   122,   122,   420,
     420,   420,   420,   420,  2263,   420,   420,  2264,   122, -2738,
     122,  2265, -2738,  2266,  2267, -2738,  5370, -2738,  1089,  2268,
    3036,  1089,   206,  3036,  2269, -2738,  1089, -2738, -2738,  1089,
   -2738,  3036,  2270,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206, -2738, -2738, -2738,  3036,  1089,   206,
    3036,  2271, -2738,  1452,  1452,  3036,  1452,  1452,  3036,  3036,
    1452,  1452,   206,   206,   206,   206,   206,   206,  1522,   206,
     206,   206,  1649,  1776,  1785,  1802,  1868,  1891,  1907,  3141,
   -2738,  1911, -2738, -2738,  1522,   206,   206,   206,   206,  1522,
     206,   206,   206,   206,   206,   206,  1775,   206,  1874,  1522,
     206,   206, -2738, -2738,   183,   302,  3036,  3036, -2738, -2738,
   -2738,   183,  1775,  2274, -2738, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738, -2738,   206, -2738, -2738,  1452,   206, -2738,
   -2738, -2738,  1197,  2277,  2278,  2275,  2280,   206,   206,  2283,
     206, -2738,  2284,   999, -2738,  1089, -2738, -2738, -2738, -2738,
    2285, -2738, -2738,  1775,  2287,  2288,  2290,  2291,  3036,  2292,
   -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738, -2738, -2738, -2738,   183,  1089, -2738,   183,
   -2738, -2738,   183, -2738,   183,  2293,  1775,  2295, -2738,   206,
   -2738, -2738,   420,   122, -2738, -2738,   122,  2296, -2738,   122,
   -2738,   420,   420,   420,   420,   420,  2297,   420,   420,   122,
     420,   420,   420,   420,   420,  2298,   420,   420,   122,   420,
     420,   420,   420,   420,  2299,   420,   420,   122,   420, -2738,
   -2738, -2738, -2738, -2738,   122, -2738, -2738,  2300,   420,   420,
   -2738, -2738, -2738, -2738, -2738,   122, -2738, -2738,  2301,   420,
   -2738,   122, -2738, -2738,  1775, -2738,  3036,  1089, -2738,  2302,
    1775,   206, -2738, -2738,  1775,   206, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738, -2738, -2738,   206,   206,  1089, -2738,  2303,
    1775,   206,  1452, -2738,  1089,   206,  1452,  1089,  1089,  3036,
   -2738,   206,  2304,  2304,   206,   206,  2304,  1522,  2304, -2738,
    3036,   534,  2305,  2307,  2308,  2310,  2312,  2314, -2738,   302,
    1522,  2304,  2304,   206,   206,  1522,   206,   206,   206,   206,
     206, -2738,  1452,   206,  2315, -2738, -2738,   206,  2304,   302,
      40,  1775,  1775,   302,   183,  2317, -2738, -2738, -2738,  2318,
     206, -2738,  2320,  2322,  2323,  2324,  2325, -2738,  2326,  2327,
     206, -2738, -2738,  2329,    -5,  3036, -2738,  2330,     8,  3036,
   -2738, -2738, -2738, -2738, -2738, -2738,  2332,    -5,   206, -2738,
   -2738, -2738,   122, -2738, -2738, -2738, -2738, -2738, -2738,   122,
   -2738, -2738,   420, -2738, -2738, -2738, -2738, -2738,   122, -2738,
   -2738,   420, -2738, -2738, -2738, -2738, -2738,   122, -2738, -2738,
     420, -2738,   420,   122, -2738, -2738,   420,   122, -2738, -2738,
     206,  1089, -2738,  3036,  3036,   206,  3036,   206, -2738, -2738,
   -2738,  3036,  3036,   206, -2738, -2738,  3036, -2738, -2738, -2738,
    1089,  2333, -2738, -2738, -2738,  1522,   206, -2738,  2334, -2738,
   -2738,  1775,  2335, -2738,  2341, -2738, -2738, -2738, -2738, -2738,
    2342, -2738, -2738,  1522,   206,  2343, -2738, -2738,   206,  3036,
   -2738, -2738, -2738, -2738, -2738, -2738, -2738,    40,  1995,  1809,
   -2738, -2738, -2738,   302,  2344,  2345,  2346, -2738, -2738, -2738,
    2348,  2349,  2350, -2738,   163,    -5, -2738, -2738, -2738, -2738,
    2351,  3036, -2738, -2738, -2738, -2738, -2738,    -5, -2738,  2352,
   -2738,   420, -2738,   420, -2738,   420, -2738, -2738,   420, -2738,
     420,  5370, -2738,  1089,  1089,   206,  1089,  2353,  1089,  1089,
     206,  1089,   206, -2738, -2738, -2738, -2738,  2354, -2738,   206,
   -2738, -2738,  2355, -2738,   206, -2738, -2738, -2738,  2357,   206,
   -2738, -2738, -2738,  1775, -2738, -2738, -2738,  1995, -2738,  2012,
    1922,  1809, -2738, -2738, -2738,  2358,  2360, -2738, -2738, -2738,
   -2738, -2738, -2738,   646,   646, -2738, -2738,  1775, -2738, -2738,
   -2738, -2738, -2738, -2738, -2738,  1089, -2738, -2738,  2362, -2738,
    4724, -2738, -2738,  2363, -2738,  1522, -2738, -2738,  1522,   206,
   -2738, -2738,   206, -2738,  1522,   206, -2738,  3036, -2738,  2012,
   -2738,   302, -2738,  2365,  2366,   206,   206,   206,   206,     8,
    2367,  4724,  1775, -2738,  4724, -2738, -2738,   206,  2364, -2738,
     206,  1089, -2738, -2738, -2738,  2368,  2369,   206,  2370,   206,
   -2738, -2738,  1775, -2738, -2738,  1775, -2738, -2738,  2372, -2738,
   -2738,  2373,  2374, -2738, -2738,  2390, -2738,  2392, -2738, -2738,
    1522, -2738,  1522, -2738, -2738, -2738, -2738, -2738, -2738, -2738,
   -2738
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2738, -2738,    -3, -2738,   335,  -979, -1502, -1043,  1595, -2738,
     903,  -356,  1678,   -52,    19, -2738,  -296, -1815,  1901,  1902,
    -950, -1431,  -955,  1511,  1057, -2738, -1100, -2738,  -650, -1102,
   -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738, -2738,  -512,  -522, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738, -2571, -2738, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738,
   -2738,   696, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738,   312, -2738,
   -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738,  -297,
    -144, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -1592,
   -2738, -2738, -2738, -2738, -2738,  -745, -2738, -2738, -2738, -2738,
   -2738, -2738,    76, -2738, -2738, -2738, -2738,   -90,  -752, -1401,
    -483, -2738, -2738, -2738, -2738, -2738,  -552,  -538, -2738, -2738,
   -2737, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738, -2738, -2738,  1549, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738, -2738,
   -2738, -2738, -2738, -2738, -2738
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1337
static const yytype_int16 yytable[] =
{
      71,  2050,   387,  1223,   961,  1196,  1199,  2215,   111,  2217,
    1388,   990,   766,   180,  1642,  1240,   113,   330,   113,   395,
      68,    69,  2115,    68,    69,  1576,  2836,  1380,  1381,  1382,
     725,   670,   871,   326,   113,   292,  1227,    68,    69,  2842,
   -1126,   350,  1862,  1182,    68,    69,   954,    68,    69,  1808,
     381,  1624,   407,   392,   996,   328,   398,   875,   878,   113,
     404,    68,    69,   411,  1191,    68,    69,   414,   416,    68,
      69,   426,   642,  2068,   433,   437,  1551,  1606,   440,  1201,
     857,   441,   442,  1202,  1858,   450,    68,    69,   986,  1903,
     451,  1231,   844,    68,    69,  1185,  2069,   293,   167,  2070,
    1463,   168,   677,   464,   468,   473,   474,   478,   480,  1479,
    2071,  1241,  1005,    68,    69,    68,    69,   343,  1242,   294,
      68,    69,  1867,  1092,   484,  1608,   940,   580,  1871,   682,
      58,  1498,   169,  2072,  1501,   118,   943,   118,  1494,   483,
     170,   116,   429,    68,    69,  1632,  2848,   947,  1094,  1101,
     955,  2073,   461,   118,   966,  1536,   532,   958,  1203,   493,
      68,    69,  2950,  1692, -1336,   533,    68,    69,  1780,   845,
    1186,   252,  1715,  1577,  1693,   295,  1728,   462,   118,  1283,
     991,  1458,  1204,   113,   525,   430,  2038,   997,   256,   546,
    1863,  2837,   452,   113,    68,    69,   780,   116,   950,  1093,
     959,  2040,  1232,   171,  2843,    80,  1774,  1775,  1776,    68,
      69,   547,  2972,   555,  2043,   560,   564,  1480,    68,    69,
     967,   603,   838,   581,  1095,  1102,   600,   121,  1609,   121,
     824,   956,   113,  1626,  1006,   122,   123,   122,   123,   182,
     422,   948,   640,   604,   113,   121,   250,   113,  1633,   683,
    1205,  1578,  1233,   122,   123,  1284,   848,   951,   605,   172,
     344,   586,  1187,   684,  2915,  1459,   643,   872,  1864,   858,
     121,   781,   348,  1192,  1451,   846,  2918,   703,   122,   123,
     793,   768,  1332,  1445,   839,   173,   610,   174,  1495,  1607,
    1809,  2838,   826,   732,   733,   851,   863,  1579,    68,    69,
    1234,  1183,   118,   678,  2844,  1228,   113,   854,  1625,   775,
     726,   777,   118,   124,  1865,   175,  1859,   408,  1904,   779,
     782,  2094,   785,   789,   126,   791,   126,   590,  1243,    70,
     331,  1643,  1229,   623,  1107,   801,   992,   873,   711,  2116,
   -1126,   332,   126,   380,   787,   811,   813,   671,   296,   166,
     178,   118,   606,  1206,  1868,   876,   879,   251,  1193,   998,
    1872,   423,  2910,   118,   704,   298,   118,   126,   860,   124,
     862,   864,   333,   866,   156,   349,   156,   869,   870,   157,
     158,   157,   158,  1108,   176,  1235,  1067,  1068,   884,   886,
    1064,  1616,   156,   396,   121,   887,   297,   157,   158,  1610,
     890,   892,   122,   123,   121,   424,   425,   253,   893,  1636,
     428,   894,   122,   123,   518,   164,  2074,   156,  2039,  1634,
     519,   391,   157,   158,   257,   118,   403,   453,  1827,  2099,
     904,   905,   254,  2041,  1256,  1069,  1831,   909,   910,   911,
     912,   913,   914,   121,   916,  1627,  2044,   918,   840,   258,
    1674,   122,   123,   712,  1261,   121,   834,  1285,   121,  1333,
     520,   925,   376,   122,   123,   926,   122,   123,    68,    69,
     931,   932,   933,   934,   935,   936,   302,   937,  1343,   468,
     941,   942,  1686,  2911,   607,  1344,   521,   769,   268,   468,
     944,   126,   713,   714,   770,   771,   345,   587,   417,   608,
     939,   126,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,  2020,    68,    69,  1288,  1453,   121,   705,   706,
     598,   346,   588,  1109,   443,   122,   123,   523,  2912,  1262,
     772,   335,   627,  1286,  2021,   522,   803,   715,  2035,   632,
     126,   156,  1293,   973,   974,  1237,   157,   158,   290,   106,
     633,   156,   126,  1873,   303,   126,   157,   158,   300,  1080,
    2063,   982,   116,   591,  1916,  1917,   228,  1081,  1082,   624,
     107,  1998,   116,  1556,  2001,  1070,  1071,  1289,   634,   523,
     524,   599,  1368,   229,  1475,    59,  1439,   377,   592,   987,
     156,  1049,   316,   716,   625,   157,   158,  1008,   340,  1110,
     342,  1557,   156,   365,  1294,   156,   895,   157,   158,  1111,
     157,   158,  1833,  1918,   126,  1476,  1083,  1290,   717,   707,
     389,  1263,  1299,  1889,   108,  1384,   394,  2156,    60,   730,
     731,  1612,   594,   358,  2022,  1558,   400,  1044,  1613,   336,
     773,  1033,  1559,  1112,    68,    69,    61,  1877,  1560,    68,
      69,  1072,   628,  1304,  1878,   804,  1266,   304,   635,   784,
    1716,  1073,  1074,  1098,   156,   116,   402,  1297,  1561,   157,
     158,  1618,   305,   896,  1882,   432,    62,   378,  2700,   444,
     445,  1063,  1117,   359,  1300,  1892,    68,    69,  2023,  1562,
     308,  1066,   449,   360,  1264,  1075,    63,  1720,  1724,   418,
      64,   636,   849,   852,   855,  1874,  1563,  1165,  1644,   401,
     309,   611,   310,  1645,    65,  1305,   109,   595,   406,   337,
     434,   439,  1717,  1730,   361,  1440,   457,   446,   338,  1116,
    1734,  1267,  1166,   612,   124,   455,  1646,  1647,   306,  1648,
    1649,  1291,  1564,  1298,   124,  1224,  1194,   897,   613,  1207,
    1650,   419,   596,  1919,  1920,   459,  1084,  1085,   420,  1721,
    1725,   481,  1651,  1652,   629,  1875,    68,    69,  1295,   494,
    1653,   637,  1247,  1654,  1619,  1890,  1248,  1249,  1250,  1251,
     447,  1565,  1252,  1441,  1254,  1731,  1255,   468,  1257,  2499,
     958,  1655,  1735,  1520,   630,  1434,  1566,  1509,   505,  1656,
    1657,  1521,  1522,  1658,  1518,  2511,  2512,  2513,  1567,  1442,
    2515,   410,  2517,  2518,   110,   506,  2520,  2521,  2522,  1323,
    1225,  2524,  2525,  1268,   435,  2528,   638,  2530,  2531,  1921,
    2533,   516,  1086,   959,  1620,  1891,  1568,   124,   311,  1922,
    1923,   898,  1087,  1088,  1738,  1945,   899,  1089,  1301,  1569,
    1523,  1570,  1571,  1946,  1947,   530,  1742,  1014,  1015,   614,
    1315,  1316,  1435,  1317,  1319,  1321,  1322,  2228,   920,   921,
    1659,  1167,   652,  1924,   557,  2218,  1090,   583,  1172,  1306,
    1335,  1336,  1172,    66,    68,    69,  1718,  1340,  1341,   528,
    1436,   413,  1572,   362,   584,  1746,  1269,  1698,   312,   585,
      90,  1172,  1948,    68,    69,   436,  1739,  1347,  1348,  1349,
    1350,  1351,  1226,  1353,  1016,  1355,   602,   653,  1743,   615,
    1017,  1173,   619,  1722,  1726,  1173,   620,  1660,   622,  1168,
    1363,  1364,  1365,  1661,  1367,   468,  1369,  2605,  1370,   475,
    2608,   641,  2138,   313,  1173,  2612,   179,  1198,  2613,  1732,
    1662,  1510,   647,   314,  1752,  1169,  1736,  1747,  1519,  1373,
    1663,  1375,  2024,  1879,   616,   650,  2273,  2628,    81,  1760,
    1018,  1377,    68,    69,   617,  1437,   669,  2374,   468,  1385,
     673,  1374,   648,   696,  1387,  1448,  2286,  1019,  1664,  1665,
    1524,  1525,  2382,  1764,   674,   269,  2296,   317,   366,  2299,
     676,  1400,  1020,    82,   794,  1404,  2306,   681,  1021,   367,
     815,  1666,   680,  1059,   476,  1022,  1753,  1444,  1446,  1449,
    2401,  2343,  1883,  1880,  2346,  1454,    90,  1828,  1438,    91,
    1460,  1761,  2354,   654,   701,  2357,   270,   368,   685,   271,
     795,  1461,  1949,  1950,  1513,  2464,  2465,  2466,  2467,  2468,
    2469,  2470,  2471,  2472,   719,  1765,  1667,    92,   272,  2792,
    1471,    93,  2025,  1174,  2701,  1884,  1526,  1174,    68,    69,
    1740,   697,   816,   720,  1023,   273,  1527,  1528,    83,  1175,
    1176,  1529,  1744,  1175,  1176,  1541,  1174,   702,  1195,  1210,
     709,  1881,   274,  1024,  1238,   796,  2711,   275,  1025,   723,
    1026,   728,  1175,  1176,    68,    69,   477,   817,   818,   729,
    1530,   734,  1836,  1837,   100,    94,  2026,   369,  1951,    68,
    1318,  1748,   767,    84,    85,  1885,  1027,  1028,  1952,  1953,
     778,   101,   792,  1954,  1029,  1970,  1611,    68,    69,   799,
     809,  2473,   318,  1971,  1972,   276,    68,    69,   319,   806,
     320,   800,  1847,  1030,   891,    91,    95,  1635,   721,  1542,
     370,   802,  1955,   698,    96,    97,  1641,   277,   656,   808,
      86,    87,    68,    69,  1177,  1178,  2762,  2455,  1177,  1178,
    1754,   699,  1669,    92,  1670,  1886,   814,  2214,  1838,  1671,
    1672,  1673,  1973,   883,   397,  1762,  2770,  1177,  1178,  1679,
      68,    69,  1680,  2775,  1682,  1981,  2778,  2779,   819,   797,
     822,  1031,   842,  1982,  1983,   810,   102,  1326,  1327,  1766,
     843,  1684,   861,  1685,    88,   867,  1848,  1936,  1937,  1796,
     371,  1689,  1690,   868,   260,   881,   820,   888,  1543,  1544,
     889,    94,  1329,  1330,   657,   902,  1696,  1697,  2790,   903,
     468,  1699,  1700,  1545,   906,  1357,   907,  2689,  1702,   372,
    1703,   103,  1984,  1705,   261,  1706,   908,   373,   922,  2498,
    1677,  1678,   278,  1784,  2814,   915,  1938,  1956,  1957,   924,
    2310,  2311,    95,  2876,   917,   374,   919,   658,    68,  1399,
      96,    97,  2516,   467,    68,    69,  1546,   104,   279,   280,
    1011,  2887,  1339,  1012,  1013,  1849,  1850,   465,  1777,   945,
     281,   946,  1778,   962,  1779,   953,  2319,  2320,  1782,   566,
    1851,    68,    69,  2019,  1548,  1549,  1958,   659,   964,  2312,
    2862,   971,  1974,  1975,  1788,   567,  1791,   969,  1793,  1794,
    1795,  1797,   262,   984,  1799,  1800,   989,  1802,  1803,  2872,
    1805,   994,  1807,    68,    69,  2014,  1790,   568,   263,  1815,
    2556,  2056,  2057,  1852,  1000,  2321,  1821,  1709,  1710,  2565,
    1822,  1823,  1824,   928,   929,  2647,  1001,   569,  2574,  1003,
     468,  1829,  2874,  2875,  1832,  1004,  2878,  1009,  2880,  1487,
    1488,  2660,  1842,  1034,  1843,   570,  2665,  1845,  1035,   571,
    2885,  2886,  1985,  1986,  1036,  2890,  2891,  1834,  1976,  2894,
      68,    69,  2017,  1038,  2895,  2896,  1939,  1940,  1977,  1978,
     264,  1582,  1040,  1979,  1042,  1854,  1045,   572,   573,  1047,
    2328,  2329,  2926,  2927,  1051,  2929,  2966,  2931,  2932,  1056,
    2934,  1894,  2969,  1895,  1065,  1057,  1896,  1897,  1058,  1898,
    1583,  1899,  1980,  1584,  1060,    68,    69,  1901,  1061,  1902,
     465,   466,   467,   265,  1062,  1076,  1959,  1960,  1908,  2313,
    2314,  1079,  2936,  1077,   266,  2937,  1078,  1091,  1987,  2330,
    2940,  1103,  1105,  1585,  1106,  1590,  2943,   574,  1988,  1989,
    1113,  2946,  1941,  1990,  2960,  1114,  1115,   575,  3006,  1171,
    3007,  1638,  1942,  1943,  2679,  2322,  2323,  1711,  1712,  1180,
    1189,  2683,  1190,  1586,  1591,  1272,  1587,  1592,  1244,  1245,
    1593,  1246,  1991,   283,   352,    68,    69,   383,  1548,  1549,
    1258,  1260,   824,  1271,   384,  1273,  1944,  1713,  1274,  1275,
    2992,  1276,  1961,  2784,  1277,  2315,  2787,  1594,  2789,  2015,
    2016,  2018,  1962,  1963,  1278,  2316,  2317,  1279,  1683,   576,
     577,  2801,  2802,  1280,  1282,  2987,  1303,  1281,  2990,  1308,
    2013,  2028,  1691,  1309,  1310,  2031,  2710,  1595,  2816,  2712,
    1596,  2324,  2713,  1311,  2714,  1312,  1964,  1313,  3001,  2318,
     825,  2325,  2326,  1314,   826,    68,    69,  2060,  2059,  2061,
    1324,  1325,  3008,  1328,  2788,  3009,  3010,  1331,  2067,  1337,
    1338,  2077,  1342,   284,   353,  1345,  1346,  2800,  2083,  2331,
    2332,  1352,  2805,  1354,  1356,  2327,  1358,   285,   354,   827,
     828,  1359,  2088,   578,   829,  1371,  1372,  2090,  1390,    73,
    1588,  2092,  1391,  2095,  2096,    74,  2098,  2100,  2101,  1392,
    2104,  1394,  1395,  2107,  2108,  2109,  2110,  2111,  2112,  2113,
    2114,  2117,  2119,  2120,   286,  1396,  2122,  2123,  2124,  2125,
    1397,  1398,  1402,  1589,   830,  1403,  2131,  2132,  1450,  1452,
    2134,  2135,  2136,  1456,  1462,    75,  2139,  2140,    68,    69,
    2034,  1548,  1549,  1812,  1813,  2333,  1464,  1465,  1468,  2143,
    2144,  1469,  2145,  2146,  1597,  2334,  2335,   686,  1472,  1473,
     687,    76,  1474,  1482,   327,  1483,  1489,  1484,   287,   355,
    1485,  1491,  2406,  1490,  1492,  1493,   831,  1499,  1500,   688,
     832,   288,   356,  1502,  2823,  1503,  1505,  1598,  1507,  2336,
      68,    69,  2062,  1548,  1549,  1515,  1517,  1531,  1154,  1532,
    1555,  1533,  1534,  1537,  1580,   833,  1538,  1539,   834,  1575,
      77,  1552,  1155,   689,  1599,  1553,  1554,   385,   690,   835,
     386,  1156,  1574,  1600,  2184,  2185,  2186,  2458,  1581,  2187,
    1601,  1603,  1157,  1602,  2189,  2192,  1604,  2194,  2195,  2196,
    1605,  2197,  2198,  1623,  2200,  1614,  2201,  2202,   482,  2204,
    2205,  1617,  2207,  1621,  2209,    78,  2191,  1628,  1622,   485,
    1629,  1630,  2212,  1676,  1631,  1158,   691,  1639,  1637,  1640,
    2216,  1687,  1688,  1694,  1695,  2221,  2222,  1701,  1704,  1708,
    1756,  2224,  1707,  1729,  1750,  1751,  1159,  2479,  1757,  1758,
    2227,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   544,
    1759,   551,   554,  2255,   559,   563,  1768,  2240,  1769,  1770,
    1787,  1771,  2011,  1772,   486,  1773,  2246,  1785,  1786,  1160,
    2251,  1792,  2965,  1798,  2263,  2264,  1801,  -468,  1804,  2266,
    1806,  1811,  1211,  1816,  1817,  2268,   645,   487,   488,  1818,
    1212,  2029,  1830,  1844,   507,  2033,   489,  1213,  1835,  1846,
    1855,  1856,  1866,  1857,  1861,   661,   667,  1869,  1161,  1870,
    1887,   672,   508,  1876,  1214,   675,   490,  1906,  1888,  1907,
    1215,  2064,  1893,   692,  1900,  1912,   491,  1931,  1934,   509,
    1965,  2079,  1967,  1969,  1993,  1162,  1994,  1995,  1999,  2000,
    2084,  2085,   510,  2002,  1216,  2003,  1992,  2004,  2007,   693,
     694,  2089,  2010,  2027,  1217,  2030,  2045,  2036,  2037,  2042,
    2046,   695,   511,  2047,  2048,  2049,   512,  2051,  2052,  2053,
    2054,   776,  2055,  2058,  2076,  2093,  1163,  2080,  1164,  2091,
     513,  2097,  2105,   786,  2106,  2121,  2128,  2129,  2130,  2482,
    2141,  2142,  2369,  2370,  2147,  2372,  2148,  1218,  2149,  2651,
    2150,  2151,  2152,   807,  2153,  1219,  2154,  2155,  2290,  2157,
    2158,  2159,  2162,  2383,  2384,  2385,  2386,  2387,  2388,  2389,
    2390,  2391,  2160,  2161,  2163,   514,  2164,  2632,  2633,  2165,
    2635,  2636,  2166,  2167,  2639,  2640,  2397,  2168,  2399,  2169,
    2170,  2171,  2172,  2173,   927,  2174,  2175,  2900,  2176,  2177,
    2180,  1220,  2178,  2179,  2405,   468,  2181,  2182,  2183,  2203,
    2409,  2199,  2206,  1221,  2208,  2210,  2223,  2337,  2229,  2412,
    2413,  2414,  2415,  2416,  2417,  2418,  2419,  2420,  2421,  1222,
    2230,  2434,  2435,  2436,  2437,  2438,  2439,  2440,  2441,  2442,
    2443,  2444,  2445,  2231,  2448,  2232,  2449,  2450,  2451,  2233,
    2265,  2687,  2267,  2270,  2271,  2272,  2274,  2275,  1478,  2276,
     468,  2459,  2279,  2348,  2281,  2282,  2283,  2287,  2288,   923,
    2289,  2291,  2292,  2293,  2297,  2298,  2652,  2300,  2301,  2900,
     930,  2302,  2303,  2307,  2308,  2653,  2309,  2338,  2339,   938,
    2340,  2344,  2345,    68,    69,  2355,  1535,  2347,  2349,  2350,
    2351,  2356,  2654,  2358,  2360,  2361,  2363,  2364,   114,  2366,
    2373,  2375,  2474,  2378,  2475,  2381,  2476,  2392,  2478,  2393,
     468,  2480,  2394,  2481,  2395,  2396,  2674,  2400,  2485,  2486,
    2447,  2487,  2488,  2452,  2490,  2453,  2492,  2456,  2457,  2460,
    2463,  2491,  2496,  2483,  2497,  2484,  2489,  2493,  2500,  2501,
    2505,  2502,  2506,  2507,  2508,  2509,  2535,   975,   976,   790,
    2538,  2540,    68,    69,  2543,  2546,  2547,  2549,  2655,  2551,
     980,  2552,  2553,  2557,  2558,   983,  2504,   114,  2559,  2560,
    2561,  2562,  2566,  2567,   995,  2568,  2569,  2570,  2571,  2575,
    2576,  2656,  2577,   117,  2584,  2539,  2587,  2595,  2598,  2601,
    2602,  2603,  2606,  2611,  2615,  2631,  2774,  2657,  2685,  2693,
    2777,  2659,  2691,  2692,  2694,  2537,   116,  2697,  2699,   882,
    2702,  2704,  2951,  2705,  2706, -1144,  2707,  2709,  2715,  2717,
    2722,  2729,  2738,  2747,  2753,  2757,  2763,  2771,  2782,  2980,
    2793,  2794,  2426,  2795,  2604,  2796,  2811,  2797,  2798,   901,
    2813,  2824,  2914,  2825,   119,  2827,  2828,  2829,  2830,  2831,
    2832,  2833,   117,  2835,  2897,  2841,  2847,  2873,  2879,  2658,
    2882,  1052,  1053,  1054,  1055,  2883,  2884,  2889,  2904,  2952,
    2905,  2906,  2907,  2908,  2909,  2916,  2919,  2930,  2938,  2948,
    2941,  2944,     0,  2953,  2377,  2954,  2961,  2964,  2989,  2609,
    2974,  2975,  2981,  2993,  2994,  2996,  3000,  3002,  1287,  3003,
    2616,  2617,  2618,  2619,  2620,  2621,  2622,  2623,  2624,  2625,
    2626,  2956,  2958,   119,   125,  3004,  2629,  3005,     0,  2402,
     468,   468,     0,   468,   468,     0,     0,   468,   468,  2641,
    2642,  2643,  2644,  2645,  2646,     0,  2648,  2649,  2650,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1209,  2661,  2662,  2663,  2664,     0,  2666,  2667,  2668,
    2669,  2670,  2671,     0,  2673,     0,   972,  2677,  2678,     0,
       0,     0,     0,   977,     0,     0,   978,     0,   124,     0,
       0,   979,     0,   125,     0,   981,     0,     0,     0,     0,
       0,  2686,     0,     0,   468,  2688,     0,     0,     0,  2690,
       0,     0,     0,     0,  2695,  2696,     0,  2698,     0,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1909,
    1910,  1911,     0,     0,     0,     0,  2718,     0,     0,  1913,
    1914,  1915,     0,     0,     0,     0,     0,  1050,  1926,  1927,
    1928,     0,     0,  1929,  1930,     0,  1932,  1933,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
    2005,  2006,     0,     0,  2008,  2009,  1497,     0,     0,     0,
       0,     0,  1361,     0,     0,     0,     0,     0,  2765,     0,
       0,     0,  2767,     0,  1366,     0,     0,     0,     0,     0,
       0,     0,  2768,  2769,     0,     0,     0,     0,  2773,   468,
       0,     0,  2776,   468,     0,     0,     0,     0,  2781,     0,
       0,  2785,  2786,     0,     0,     0,     0,     0,     0,     0,
     231,  1376,     0,     0,     0,     0,     0,     0,     0,     0,
    2803,  2804,     0,  2806,  2807,  2808,  2809,  2810,     0,   468,
    2812,     0,   232,     0,  2815,   233,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2826,  1253,     0,
       0,     0,     0,     0,     0,  1259,     0,  2834,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     234,     0,     0,     0,     0,  2849,     0,   235,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   236,   237,
       0,     0,     0,     0,     0,   238,  1467,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2861,     0,     0,
       0,   239,  2865,     0,  2867,    68,    69,     0,     0,     0,
    2870,     0,     0,     0,     0,     0,     0,     0,     0,   240,
     114,     0,     0,  2877,     0,     0,     0,     0,     0,     0,
    2680,     0,     0,     0,     0,   241,   242,     0,     0,     0,
     322,  2888,   243,     0,     0,  2892,     0,     0,     0,  2925,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   116,
    1615,     0,     0,     0,     0,  1360,   244,     0,     0,     0,
       0,  2913,  1362,     0,     0,     0,     0,     0,   113,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2928,     0,     0,   117,   245,  2933,     0,  2935,
       0,     0,     0,   115,  1675,     0,  2939,  1378,  1379,     0,
       0,  2942,  1383,     0,  1681,  1386,  2945,     0,     0,     0,
       0,   116,     0,     0,     0,     0,     0,  1393,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2955,  2957,     0,     0,     0,     0,     0,     0,     0,   246,
       0,     0,     0,     0,     0,     0,   119,     0,     0,     0,
     247,     0,     0,     0,     0,     0,  2967,   117,     0,  2968,
       0,     0,  2970,     0,     0,     0,     0,     0,     0,  2963,
       0,     0,  2976,  2977,  2978,  2979,     0,   118,     0,     0,
       0,   248,     0,     0,  2988,     0,     0,  2991,   323,  2269,
       0,     0,     0,     0,  2995,     0,  2997,     0,     0,     0,
    2983,     0,  2277,  2986,     0,     0,     0,     0,     0,     0,
       0,   124,  2280,     0,  2799,     0,   125,  1781,   119,     0,
       0,  1925,     0,     0,     0,     0,     0,   324,     0,     0,
       0,     0,     0,  1935,  2817,  1789,     0,     0,  2822,  1540,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1996,  1997,     0,     0,     0,
     120,     0,     0,     0,     0,  1820,     0,     0,     0,   121,
       0,     0,     0,     0,   114,  1826,     0,   122,   123,     0,
       0,     0,     0,   124,  2365,     0,     0,     0,   125,     0,
       0,   325,  1841,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1853,     0,     0,     0,     0,  1860,
       0,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
       0,     0,     0,     0,     0,     0,   126,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2903,     0,
       0,     0,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,     0,     0,     0,     0,     0,   156,  2422,     0,     0,
     119,   157,   158,     0,     0,     0,     0,     0,  2423,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1783,     0,     0,     0,  2012,
       0,     0,     0,     0,  1211,  2424,     0,     0,     0,     0,
       0,     0,  1212,     0,     0,     0,     0,     0,     0,  1213,
       0,     0,     0,     0,     0,     0,     0,  2032,     0,     0,
       0,     0,     0,  1814,     0,     0,  1214,     0,  1819,     0,
     125,     0,  1215,     0,     0,  2425,     0,     0,  1825,     0,
       0,     0,     0,     0,     0,  2065,  2973,     0,  2066,     0,
       0,     0,     0,     0,     0,     0,  1216,  2081,  2082,     0,
       0,     0,     0,     0,     0,  2086,  1217,     0,     0,     0,
       0,     0,  2087,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2541,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1218,
       0,     0,  2126,     0,     0,     0,     0,  1219,     0,     0,
       0,     0,     0,     0,  2137,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,     0,     0,  2579,  2580,  2581,  2582,  2583,
       0,  2585,  2586,  1220,     0,     0,  2590,  2591,  2592,  2593,
    2594,     0,  2596,  2597,     0,  1221,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1222,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2426,  2278,  2427,     0,     0,     0,     0,     0,     0,
    2284,  2285,     0,     0,     0,     0,     0,     0,     0,     0,
    2294,  2295,     0,     0,     0,  2190,     0,     0,     0,     0,
    2304,  2305,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2341,  2342,     0,     0,  2211,
       0,     0,     0,     0,     0,     0,  2352,  2353,     0,  2428,
       0,     0,     0,  2359,     0,  2220,     0,     0,     0,     0,
       0,     0,     0,  2362,     0,     0,     0,  2078,  2225,     0,
    2226,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2234,     0,     0,  2236,  2237,  2238,  2239,  2241,     0,  2243,
       0,     0,  2244,     0,     0,  2245,  2247,  2248,  2249,  2250,
    2252,     0,  2253,  2254,     0,     0,     0,  2256,  2257,  2258,
       0,     0,  2259,  2260,     0,     0,     0,     0,  2261,  2262,
       0,     0,     0,     0,     0,     0,     0,  2127,     0,     0,
       0,     0,     0,  2133,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2719,
       0,     0,     0,     0,     0,     0,     0,     0,  2724,  2725,
    2726,  2727,  2728,     0,  2730,  2731,     0,  2733,  2734,  2735,
    2736,  2737,     0,  2739,  2740,     0,  2742,  2743,  2744,  2745,
    2746,     0,  2748,  2749,     0,  2751,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2754,  2755,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2758,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   735,   736,  2188,     0,     0,     0,
       0,  2193,  2368,     0,     0,  2371,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2376,     0,     0,  2379,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2213,     0,     0,     0,     0,     0,  2219,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2398,     0,
       0,   737,     0,     0,     0,     0,     0,   738,     0,     0,
       0,     0,     0,     0,   739,  2235,   740,     0,     0,     0,
       0,   741,  2242,     0,   742,     0,     0,     0,     0,     0,
     743,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   744,     0,     0,     0,     0,     0,     0,   745,  2852,
    2542,     0,     0,  2446,     0,     0,     0,   746,  2854,     0,
    2544,  2545,     0,     0,     0,     0,     0,  2856,     0,  2857,
       0,  2548,     0,  2859,   747,     0,  2462,     0,     0,     0,
    2550,     0,     0,     0,  2554,  2555,     0,     0,     0,     0,
       0,     0,     0,  2563,  2564,   748,     0,     0,  1511,     0,
       0,     0,  2572,  2573,     0,     0,     0,     0,  2578,     0,
       0,     0,   749,     0,     0,     0,     0,     0,  2588,  2589,
       0,     0,     0,     0,     0,   750,   751,     0,     0,  2599,
       0,  2600,     0,   562,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,   752,     0,
    2495,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2503,     0,     0,  2920,     0,
    2921,   753,  2922,     0,  2367,  2923,     0,  2924,     0,     0,
       0,     0,     0,     0,     0,   754,   116,   755,     0,     0,
       0,     0,     0,  2527,  2380,     0,     0,     0,     0,     0,
       0,     0,   756,     0,  2536,     0,     0,   757,     0,     0,
       0,     0,     0,     0,   758,     0,     0,     0,     0,     0,
       0,   759,  1840,     0,     0,     0,     0,  2403,  2404,     0,
       0,     0,   117,     0,     0,     0,   114,     0,     0,     0,
     760,     0,     0,  2407,  2408,     0,     0,     0,  2410,  2411,
       0,     0,     0,     0,   761,   762,     0,   763,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,  1512,     0,  2454,     0,
       0,     0,     0,   119,     0,     0,     0,     0,   764,  2461,
       0,     0,     0,     0,     0,     0,     0,     0,  2607,     0,
       0,  2610,     0,     0,  2720,     0,     0,  2721,     0,  2614,
    2723,   117,     0,     0,     0,     0,     0,     0,     0,     0,
    2732,     0,     0,     0,     0,  2627,     0,     0,  2630,  2741,
       0,     0,     0,  2634,     0,     0,  2637,  2638,  2750,     0,
       0,     0,  2477,     0,     0,  2752,     0,     0,   124,     0,
       0,     0,     0,   125,     0,     0,  2756,     0,     0,     0,
       0,     0,  2759,  2494,     0,     0,     0,     0,     0,     0,
       0,     0,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2681,  2682,  2510,     0,     0,     0,
       0,  2514,     0,     0,     0,     0,     0,  2519,     0,     0,
       0,     0,  2523,     0,     0,     0,  2526,     0,     0,  2529,
       0,     0,  2532,     0,  2534,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2708,     0,     0,     0,
       0,     0,   125,     0,     0,     0,     0,     0,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
       0,     0,     0,  2850,     0,     0,     0,     0,     0,     0,
    2851,     0,     0,   662,   114,     0,     0,     0,     0,  2853,
       0,     0,     0,     0,     0,     0,     0,     0,  2855,     0,
       0,     0,     0,     0,  2858,     0,     0,     0,  2860,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2761,   663,     0,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,     0,     0,  2780,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2791,   117,
       0,     0,     0,   114,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   664,     0,     0,     0,  2672,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2684,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   535,   536,  2840,     0,   537,     0,  2846,     0,     0,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2703,     0,     0,   538,     0,
     665,     0,     0,     0,     0,     0,     0,     0,   117,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2716,     0,
       0,  2863,  2864,     0,  2866,     0,     0,     0,     0,  2868,
    2869,     0,     0,     0,  2871,     0,     0,     0,     0,     0,
     125,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
       0,     0,     0,     0,     0,     0,     0,  2893,     0,     0,
       0,     0,     0,     0,   539,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2760,     0,     0,     0,
       0,     0,  2764,   540,     0,     0,  2766,     0,     0,  2917,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     666,     0,  2772,     0,     0,     0,   541,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   125,
       0,     0,     0,     0,     0,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,  2820,  2821,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   542,     0,     0,     0,     0,     0,  2962,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2971,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2982,
       0,     0,  2985,     0,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,     0,   543,  1118,  1119,  1120,     0,     0,  1405,
    1406,  1407,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2881,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1121,  1122,     0,     0,  1123,  1408,
    1409,  1124,     0,  1410,   114,     0,     0,     0,  1125,     0,
    1411,     0,  1126,  1412,     0,     0,     0,  1413,     0,     0,
    1127,  1128,     0,     0,     0,  1414,  1415,     0,  1129,  1130,
       0,     0,   114,  1416,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   116,     0,     0,  1131,     0,     0,     0,
       0,     0,     0,  1132,     0,     0,     0,  1133,  1134,     0,
       0,  1135,  1417,  1418,     0,     0,  1419,     0,     0,     0,
       0,   116,     0,     0,     0,     0,     0,     0,     0,  1136,
       0,     0,     0,     0,  1420,  2947,     0,     0,   114,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1137,     0,     0,     0,     0,  1421,     0,     0,     0,  2959,
       0,     0,     0,     0,     0,     0,     0,   117,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1138,     0,
     549,     0,     0,  1422,     0,     0,     0,     0,     0,     0,
       0,     0,  1423,     0,     0,     0,     0,     0,     0,     0,
     119,     0,     0,  1139,  2984,   114,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   117,  2998,     0,     0,  2999,   119,     0,
       0,     0,     0,  1140,     0,  1141,     0,     0,  1424,     0,
       0,  1142,  1143,     0,  1466,     0,  1425,  1426,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1144,  1145,     0,
       0,     0,     0,  1427,     0,   124,     0,     0,  1146,  1147,
     125,     0,     0,     0,  1428,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,     0,     0,     0,     0,     0,
     117,     0,     0,   124,     0,  1148,     0,  1149,   125,     0,
    1429,     0,  1430,     0,     0,     0,     0,     0,     0,     0,
    1150,     0,  1151,  1431,     0,  1096,     0,     0,     0,  1152,
    1097,     0,     0,     0,  1432,     0,     0,     0,     0,     0,
       0,   553,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,     0,  1153,   125,     0,     0,     0,  1433,     0,
       0,     0,     0,     0,     0,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   125,     0,     0,   550,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,     0,     0,     0,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,     1,     0,     0,     2,     0,     0,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     0,     0,     0,     0,     5,
       6,     0,     7,     8,     9,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,     0,    11,
       0,    12,    13,     0,     0,     0,     0,     0,     0,     0,
       0,    14,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    16,     0,     0,     0,     0,
       0,     0,     0,     0,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    18,     0,     0,
       0,    19,     0,     0,    20,     0,     0,     0,    21,    22,
       0,     0,     0,    23,    24,     0,     0,    25,     0,     0,
       0,     0,     0,    26,     0,     0,     0,     0,     0,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,     0,    29,    30,    31,     0,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    35,    36,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,     0,    39,     0,   184,
       0,     0,   185,     0,    40,   186,     0,     0,    41,     0,
       0,     0,    42,     0,    43,     0,    44,     0,     0,     0,
       0,    45,     0,     0,     0,   187,     0,   188,   189,   190,
       0,     0,     0,     0,     0,    46,     0,   191,     0,   192,
       0,    47,     0,     0,   193,     0,   194,   195,   196,     0,
       0,     0,     0,     0,   197,     0,   198,    48,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,    51,     0,     0,     0,     0,     0,     0,    52,
       0,     0,    53,    54,     0,     0,     0,     0,   199,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   200,     0,     0,     0,
       0,     0,     0,    55,   201,     0,   202,   203,   204,   205,
      56,     0,   206,     0,     0,     0,   207,     0,   208,     0,
       0,     0,     0,     0,   209,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   210,   211,     0,     0,     0,   212,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   213,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   214,   215,     0,     0,
       0,     0,     0,     0,   216,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   217,
       0,   218,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   219,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   220,   221,     0,     0,     0,     0,     0,     0,
       0,     0,   222,     0,     0,     0,     0,     0,     0,     0,
     223,     0,     0,     0,     0,     0,   224,     0,   225,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,     0,     0,     0,
       0,     0,     0,     0,     0,   226
};

static const yytype_int16 yycheck[] =
{
       3,  1593,    54,   755,   526,   750,   751,  1822,    11,  1824,
     989,     4,   308,    16,     5,     5,     4,     5,     4,     5,
       3,     4,     5,     3,     4,    26,    31,   977,   978,   979,
       5,     5,     4,    36,     4,     5,     5,     3,     4,    31,
       0,    44,    26,    16,     3,     4,    79,     3,     4,    46,
      53,     5,    31,    56,     4,    36,    59,     4,     4,     4,
      63,     3,     4,    66,    16,     3,     4,    70,    71,     3,
       4,    74,    15,    26,    77,    78,  1119,    26,    81,    35,
      12,    84,    85,    39,    20,    88,     3,     4,     4,    19,
      93,    16,    33,     3,     4,    39,    49,    67,    43,    52,
    1050,    46,     4,   106,   107,   108,   109,   110,   111,   172,
      63,   101,   139,     3,     4,     3,     4,    41,   108,    89,
       3,     4,    20,    88,   127,    35,   482,   226,    20,     4,
      67,  1086,    77,    86,  1089,   123,   492,   123,    16,   120,
      85,    57,   144,     3,     4,    35,  2717,   105,    88,    88,
     183,   104,     5,   123,   205,  1110,   179,   144,   114,   162,
       3,     4,  2899,     5,     0,   188,     3,     4,     4,   110,
     114,    62,  1274,   174,    16,   145,  1278,    30,   123,    88,
     173,    16,   138,     4,   187,   187,    20,   137,    62,   192,
     174,   196,     5,     4,     3,     4,    39,    57,   205,   164,
     187,    20,   127,   148,   196,   300,  1308,  1309,  1310,     3,
       4,   192,  2949,   194,    20,   196,   197,   280,     3,     4,
     271,    45,    62,   322,   164,   164,   207,   215,   138,   215,
      62,   264,     4,    26,   261,   223,   224,   223,   224,   150,
     199,   199,   223,    67,     4,   215,    67,     4,   138,   124,
     206,   252,   177,   223,   224,   164,    67,   264,    82,   204,
      62,    62,   206,   266,  2835,   100,   209,   239,   252,   201,
     215,   114,   206,   225,  1026,   216,  2847,   280,   223,   224,
     332,     4,    99,   221,   124,   230,   210,   232,   166,   238,
     287,   296,   124,   296,   297,    67,   238,   298,     3,     4,
     225,   274,   123,   205,   296,   274,     4,    67,   262,   312,
     285,   314,   123,   229,   298,   260,   252,   296,   248,   322,
     323,   238,   325,   326,   312,   328,   312,    62,   318,   309,
     318,   322,   301,    62,    13,   338,   329,   309,     5,   322,
     300,   329,   312,   309,   325,   348,   349,   321,   318,    14,
      15,   123,   176,   309,   252,   302,   302,    22,   310,   309,
     252,   320,   199,   123,     5,    30,   123,   312,   371,   229,
     373,   374,    37,   376,   362,   309,   362,   380,   381,   367,
     368,   367,   368,    62,   329,   310,    13,    14,   391,   392,
     686,  1143,   362,    58,   215,   398,   366,   367,   368,   309,
     403,   404,   223,   224,   215,   364,   365,   298,   411,  1161,
      75,   414,   223,   224,   199,    32,   369,   362,   252,   309,
     205,   309,   367,   368,   298,   123,   309,   240,  1378,   238,
     433,   434,   323,   252,   790,    62,  1386,   440,   441,   442,
     443,   444,   445,   215,   447,   238,   252,   450,   288,   323,
    1195,   223,   224,   120,    39,   215,   288,    88,   215,   276,
     245,   464,     4,   223,   224,   468,   223,   224,     3,     4,
     473,   474,   475,   476,   477,   478,    58,   480,     4,   482,
     483,   484,  1227,   320,   308,    11,   271,   210,    15,   492,
     493,   312,   159,   160,   217,   218,   298,   298,     4,   323,
     481,   312,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,  1555,     3,     4,    62,   221,   215,   159,   160,
       5,   323,   323,   202,     4,   223,   224,   364,   365,   114,
     253,    71,    20,   164,   108,   320,   155,   204,  1581,    36,
     312,   362,    62,   546,   547,   302,   367,   368,   244,    39,
      47,   362,   312,    26,   136,   312,   367,   368,     5,     5,
    1603,   564,    57,   298,    13,    14,    84,    13,    14,   298,
      60,  1526,    57,    39,  1529,   202,   203,   124,    75,   364,
     365,    66,   938,   101,   164,    11,    29,   129,   323,   570,
     362,   643,    67,   260,   323,   367,   368,   600,     4,   278,
      89,    67,   362,     4,   124,   362,    29,   367,   368,   288,
     367,   368,     4,    62,   312,   195,    62,   164,   285,   260,
     244,   206,    62,    26,   114,   981,     0,  1729,    54,   294,
     295,   277,     4,    51,   208,   101,   284,   640,   284,   179,
     363,   622,   108,   322,     3,     4,    72,   277,   114,     3,
       4,   278,   140,    62,   284,   274,    39,   239,   155,   324,
      62,   288,   289,   715,   362,    57,     4,    88,   134,   367,
     368,   135,   254,    96,  1426,   210,   102,   219,  2493,   159,
     160,   684,   734,   101,   124,  1437,     3,     4,   262,   155,
      45,   694,     4,   111,   279,   322,   122,    62,    62,   205,
     126,   198,   367,   368,   369,   178,   172,     4,    21,     5,
      65,    45,    67,    26,   140,   124,   206,    89,     5,   259,
      79,     5,   124,    62,   142,   168,     5,   207,   268,   732,
      62,   114,    29,    67,   229,    30,    49,    50,   320,    52,
      53,   288,   208,   164,   229,    39,   749,   170,    82,   752,
      63,   257,   124,   202,   203,     5,   202,   203,   264,   124,
     124,   206,    75,    76,   252,   238,     3,     4,   288,     4,
      83,   268,   775,    86,   238,   178,   779,   780,   781,   782,
     260,   247,   785,   226,   787,   124,   789,   790,   791,  2220,
     144,   104,   124,     5,   282,    67,   262,  1094,   120,   112,
     113,    13,    14,   116,  1101,  2236,  2237,  2238,   274,   252,
    2241,   128,  2243,  2244,   304,    67,  2247,  2248,  2249,   871,
     114,  2252,  2253,   206,   183,  2256,   323,  2258,  2259,   278,
    2261,   122,   278,   187,   298,   238,   302,   229,   193,   288,
     289,   264,   288,   289,    62,     5,   269,   293,   288,   315,
      62,   317,   318,    13,    14,   179,    62,     4,     5,   193,
     863,   864,   134,   866,   867,   868,   869,  1846,     4,     5,
     183,   168,    43,   322,    32,  1825,   322,    67,    64,   288,
     883,   884,    64,   309,     3,     4,   288,   890,   891,   300,
     162,   128,   358,   311,     5,    62,   279,  1253,   253,    90,
      27,    64,    62,     3,     4,   264,   124,   910,   911,   912,
     913,   914,   206,   916,    61,   918,    15,    88,   124,   253,
      67,   107,    67,   288,   288,   107,   245,   240,   299,   226,
     933,   934,   935,   246,   937,   938,   939,  2368,   941,    39,
    2371,    90,  1687,   298,   107,  2376,    65,   129,  2379,   288,
     263,  1095,    67,   308,    62,   252,   288,   124,  1102,   962,
     273,   964,   108,   178,   298,    30,  1921,  2398,     4,    62,
     117,   974,     3,     4,   308,   247,     5,  2020,   981,   982,
       4,   962,    73,    92,   987,    16,  1941,   134,   301,   302,
     202,   203,  2035,    62,     5,     4,  1951,   216,    36,  1954,
       4,  1004,   149,    39,    55,  1008,  1961,     4,   155,    47,
      62,   324,     5,   678,   114,   162,   124,  1020,  1021,  1022,
    2063,  1976,   135,   238,  1979,  1028,    27,  1383,   300,   156,
    1033,   124,  1987,   204,     5,  1990,    45,    75,     4,    48,
      91,  1044,   202,   203,  1096,  2147,  2148,  2149,  2150,  2151,
    2152,  2153,  2154,  2155,    95,   124,   369,   184,    67,  2651,
    1063,   188,   208,   249,  2495,   178,   278,   249,     3,     4,
     288,   180,   124,   114,   221,    84,   288,   289,   114,   265,
     266,   293,   288,   265,   266,    83,   249,     4,   274,   754,
       5,   306,   101,   240,   759,   146,  2527,   106,   245,     5,
     247,     4,   265,   266,     3,     4,   206,   159,   160,     5,
     322,     5,    23,    24,    84,   242,   262,   155,   278,     3,
       4,   288,     5,   159,   160,   238,   273,   274,   288,   289,
       5,   101,     4,   293,   281,     5,  1139,     3,     4,     4,
      39,  2184,   361,    13,    14,   154,     3,     4,   367,     5,
     369,     4,    83,   300,    11,   156,   283,  1160,   199,   157,
     198,     4,   322,   272,   291,   292,  1169,   176,   155,     4,
     206,   207,     3,     4,   360,   361,  2607,  2127,   360,   361,
     288,   290,  1185,   184,  1187,   298,    99,   188,    99,  1192,
    1193,  1194,    62,   128,    60,   288,  2627,   360,   361,  1202,
       3,     4,  1205,  2634,  1207,     5,  2637,  2638,   260,   260,
     124,   358,     5,    13,    14,   114,   186,     4,     5,   288,
       4,  1224,     4,  1226,   260,   285,   157,    13,    14,    60,
     268,  1234,  1235,     4,    89,     4,   288,     4,   236,   237,
       5,   242,     4,     5,   231,     4,  1249,  1250,  2649,   210,
    1253,  1254,  1255,   251,     4,   920,     4,    60,  1261,   297,
    1263,   231,    62,  1266,   119,  1268,     4,   305,     5,  2219,
       4,     5,   281,  1325,  2675,     4,    62,    13,    14,     5,
      13,    14,   283,  2785,     4,   323,     4,   274,     3,     4,
     291,   292,  2242,    10,     3,     4,   294,   267,   307,   308,
     604,  2803,    11,   607,   608,   236,   237,     8,  1311,     5,
     319,   284,  1315,     4,  1317,   179,    13,    14,  1321,    44,
     251,     3,     4,     5,     6,     7,    62,   314,     4,    62,
    2761,   179,   202,   203,  1337,    60,  1339,   188,  1341,  1342,
    1343,  1344,   197,     4,  1347,  1348,   209,  1350,  1351,  2780,
    1353,   209,  1355,     3,     4,     5,  1337,    82,   213,  1362,
    2315,     4,     5,   294,     5,    62,  1369,    41,    42,  2324,
    1373,  1374,  1375,   470,   471,  2418,     5,   102,  2333,     4,
    1383,  1384,  2783,  2784,  1387,   209,  2787,     4,  2789,  1077,
    1078,  2434,  1395,   200,  1397,   120,  2439,  1400,   200,   124,
    2801,  2802,   202,   203,    67,  2806,  2807,  1388,   278,  2810,
       3,     4,     5,    67,  2815,  2816,   202,   203,   288,   289,
     275,    21,    67,   293,   238,  1406,     5,   152,   153,   239,
      13,    14,  2863,  2864,     5,  2866,  2938,  2868,  2869,     4,
    2871,  1444,  2944,  1446,     5,     4,  1449,  1450,     4,  1452,
      50,  1454,   322,    53,     4,     3,     4,  1460,     4,  1462,
       8,     9,    10,   318,   209,    88,   202,   203,  1471,   202,
     203,     5,  2873,    88,   329,  2876,    88,    88,   278,    62,
    2881,     5,     4,    83,     4,    21,  2887,   212,   288,   289,
       5,  2892,   278,   293,  2925,     5,     4,   222,  3000,     5,
    3002,  1166,   288,   289,  2454,   202,   203,   181,   182,   101,
       4,  2461,     5,   113,    50,    99,   116,    53,    16,    16,
      56,     4,   322,    25,    25,     3,     4,    15,     6,     7,
       4,     4,    62,     4,    22,     5,   322,   211,     5,    88,
    2971,    88,   278,  2643,    88,   278,  2646,    83,  2648,  1552,
    1553,  1554,   288,   289,     4,   288,   289,     5,  1223,   284,
     285,  2661,  2662,     5,     5,  2966,     4,    88,  2969,     5,
    1551,  1574,  1237,     5,     4,  1578,  2526,   113,  2678,  2529,
     116,   278,  2532,     4,  2534,     5,   322,     5,  2989,   322,
     120,   288,   289,     5,   124,     3,     4,     5,  1601,  1602,
      65,     4,  3003,     4,  2647,  3006,  3007,     4,  1611,    11,
       5,  1614,    11,   115,   115,     4,     4,  2660,  1621,   202,
     203,     4,  2665,     5,     4,   322,     4,   129,   129,   159,
     160,     4,  1635,   358,   164,     5,     5,  1640,   173,   199,
     240,  1644,     5,  1646,  1647,   205,  1649,  1650,  1651,     4,
    1653,   164,   164,  1656,  1657,  1658,  1659,  1660,  1661,  1662,
    1663,  1664,  1665,  1666,   166,     4,  1669,  1670,  1671,  1672,
       5,     4,    37,   273,   204,    37,  1679,  1680,   273,   273,
    1683,  1684,  1685,   302,     5,   245,  1689,  1690,     3,     4,
       5,     6,     7,  1358,  1359,   278,     4,     4,     4,  1702,
    1703,     5,  1705,  1706,   240,   288,   289,    45,     5,     5,
      48,   271,     5,     4,    36,     4,   286,     5,   220,   220,
       5,     5,  2078,   286,     5,     5,   256,     4,     4,    67,
     260,   233,   233,     5,  2684,     5,     5,   273,     5,   322,
       3,     4,     5,     6,     7,     5,     5,     4,    67,     4,
     108,     5,     5,     4,   144,   285,     5,     5,   288,     5,
     320,   252,    81,   101,   300,   252,   252,   255,   106,   299,
     258,    90,   252,    39,  1777,  1778,  1779,  2133,   108,  1782,
     252,   108,   101,   252,  1787,  1788,     5,  1790,  1791,  1792,
     225,  1794,  1795,     5,  1797,   258,  1799,  1800,   120,  1802,
    1803,    39,  1805,   258,  1807,   365,  1787,     4,   225,    34,
       5,     5,  1815,     5,   225,   134,   154,     4,   225,     4,
    1823,     5,     5,     5,     5,  1828,  1829,     4,   114,     4,
       4,  1834,   114,     5,     5,     5,   155,  2193,     5,     5,
    1843,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   191,
       4,   193,   194,  1876,   196,   197,     5,  1858,     5,     4,
      11,     5,  1547,     5,   109,     4,  1867,     5,     5,   208,
    1871,    11,  2935,     4,  1897,  1898,     4,     0,     5,  1902,
       5,     5,    93,     4,     4,  1908,   228,   132,   133,     4,
     101,  1576,     4,     4,    54,  1580,   141,   108,     5,     5,
     252,   252,   144,   252,   252,   247,   248,   252,   247,   252,
       4,   253,    72,   178,   125,   257,   161,     4,   262,     4,
     131,  1606,   221,   281,   209,     4,   171,     4,     4,    89,
       5,  1616,     5,     5,     5,   274,     5,     5,     4,     4,
    1625,  1626,   102,     5,   155,     4,   286,     4,     4,   307,
     308,  1636,     5,     5,   165,     5,   326,   252,   252,   252,
     326,   319,   122,     4,     4,     4,   126,     4,     4,     4,
     326,   313,   326,     4,     4,   238,   315,     5,   317,     5,
     140,   238,   238,   325,   238,   238,     5,     4,     4,    11,
       5,     4,  2015,  2016,     5,  2018,     5,   208,     4,   370,
       5,     5,     4,   345,     5,   216,     5,     4,   286,     5,
       5,     4,     4,  2036,  2037,  2038,  2039,  2040,  2041,  2042,
    2043,  2044,     5,     5,     5,   185,     5,  2403,  2404,     4,
    2406,  2407,     5,     5,  2410,  2411,  2059,     4,  2061,     5,
       5,     4,     4,     4,   469,     5,     5,  2819,     4,     4,
       4,   262,     5,     5,  2077,  2078,     5,     5,     4,     4,
    2083,     5,     5,   274,     5,     4,     4,   286,     5,  2092,
    2093,  2094,  2095,  2096,  2097,  2098,  2099,  2100,  2101,   290,
       5,  2104,  2105,  2106,  2107,  2108,  2109,  2110,  2111,  2112,
    2113,  2114,  2115,     5,  2117,     5,  2119,  2120,  2121,     5,
       4,  2477,     5,     5,     5,     5,     4,     4,  1071,     5,
    2133,  2134,     4,   286,     5,     5,     5,     4,     4,   461,
       5,     5,     5,     5,     4,     4,   370,     5,     5,  2901,
     472,     5,     5,     4,     4,   370,     5,     5,     5,   481,
       5,     4,     4,     3,     4,     4,  1109,     5,     5,     5,
       5,     4,   370,     5,     4,     4,     4,     4,    18,     5,
       5,     5,  2185,     5,  2187,     5,  2189,     4,  2191,     4,
    2193,  2194,     5,  2196,     4,     4,   322,     5,  2201,  2202,
       5,  2204,  2205,     4,  2207,     4,  2209,     5,     5,     4,
       4,     4,  2215,     5,  2217,     5,     5,     4,  2221,     5,
       5,  2224,     5,     5,     5,     5,     4,   549,   550,   327,
       5,     4,     3,     4,     4,     4,     4,     4,   370,     5,
     562,     5,     5,     4,     4,   567,  2227,    18,     5,     5,
       5,     5,     4,     4,   576,     5,     5,     5,     5,     4,
       4,   370,     5,   103,     4,  2268,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,  2632,   370,     4,     4,
    2636,   370,     5,     5,     4,  2266,    57,     4,     4,   387,
       5,     4,   370,     5,     4,   300,     5,     5,     5,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,  2959,
       5,     4,   300,     5,  2366,     5,  2672,     5,     4,   418,
       5,     4,  2834,     5,   164,     5,     4,     4,     4,     4,
       4,     4,   103,     4,  2817,     5,     4,     4,     4,  2429,
       5,   663,   664,   665,   666,     4,     4,     4,     4,  2901,
       5,     5,     4,     4,     4,     4,     4,     4,     4,  2897,
       5,     4,    -1,     5,  2029,     5,     4,     4,     4,  2372,
       5,     5,     5,     5,     5,     5,     4,     4,   829,     5,
    2383,  2384,  2385,  2386,  2387,  2388,  2389,  2390,  2391,  2392,
    2393,  2913,  2914,   164,   234,     5,  2399,     5,    -1,  2064,
    2403,  2404,    -1,  2406,  2407,    -1,    -1,  2410,  2411,  2412,
    2413,  2414,  2415,  2416,  2417,    -1,  2419,  2420,  2421,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   753,  2435,  2436,  2437,  2438,    -1,  2440,  2441,  2442,
    2443,  2444,  2445,    -1,  2447,    -1,   544,  2450,  2451,    -1,
      -1,    -1,    -1,   551,    -1,    -1,   554,    -1,   229,    -1,
      -1,   559,    -1,   234,    -1,   563,    -1,    -1,    -1,    -1,
      -1,  2474,    -1,    -1,  2477,  2478,    -1,    -1,    -1,  2482,
      -1,    -1,    -1,    -1,  2487,  2488,    -1,  2490,    -1,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1472,
    1473,  1474,    -1,    -1,    -1,    -1,  2539,    -1,    -1,  1482,
    1483,  1484,    -1,    -1,    -1,    -1,    -1,   645,  1491,  1492,
    1493,    -1,    -1,  1496,  1497,    -1,  1499,  1500,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,    -1,    -1,    -1,    -1,
    1533,  1534,    -1,    -1,  1537,  1538,  1085,    -1,    -1,    -1,
      -1,    -1,   924,    -1,    -1,    -1,    -1,    -1,  2611,    -1,
      -1,    -1,  2615,    -1,   936,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2625,  2626,    -1,    -1,    -1,    -1,  2631,  2632,
      -1,    -1,  2635,  2636,    -1,    -1,    -1,    -1,  2641,    -1,
      -1,  2644,  2645,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,   973,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2663,  2664,    -1,  2666,  2667,  2668,  2669,  2670,    -1,  2672,
    2673,    -1,    40,    -1,  2677,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2690,   786,    -1,
      -1,    -1,    -1,    -1,    -1,   793,    -1,  2700,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,  2718,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      -1,    -1,    -1,    -1,    -1,   103,  1058,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2760,    -1,    -1,
      -1,   129,  2765,    -1,  2767,     3,     4,    -1,    -1,    -1,
    2773,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,
      18,    -1,    -1,  2786,    -1,    -1,    -1,    -1,    -1,    -1,
    2455,    -1,    -1,    -1,    -1,   163,   164,    -1,    -1,    -1,
      38,  2804,   170,    -1,    -1,  2808,    -1,    -1,    -1,  2861,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
    1142,    -1,    -1,    -1,    -1,   923,   194,    -1,    -1,    -1,
      -1,  2834,   930,    -1,    -1,    -1,    -1,    -1,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2865,    -1,    -1,   103,   234,  2870,    -1,  2872,
      -1,    -1,    -1,    39,  1196,    -1,  2879,   975,   976,    -1,
      -1,  2884,   980,    -1,  1206,   983,  2889,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,   995,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2913,  2914,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   287,
      -1,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,    -1,
     298,    -1,    -1,    -1,    -1,    -1,  2939,   103,    -1,  2942,
      -1,    -1,  2945,    -1,    -1,    -1,    -1,    -1,    -1,  2930,
      -1,    -1,  2955,  2956,  2957,  2958,    -1,   123,    -1,    -1,
      -1,   329,    -1,    -1,  2967,    -1,    -1,  2970,   206,  1912,
      -1,    -1,    -1,    -1,  2977,    -1,  2979,    -1,    -1,    -1,
    2961,    -1,  1925,  2964,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   229,  1935,    -1,  2659,    -1,   234,  1319,   164,    -1,
      -1,  1490,    -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,
      -1,    -1,    -1,  1502,  2679,  1337,    -1,    -1,  2683,  1117,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1524,  1525,    -1,    -1,    -1,
     206,    -1,    -1,    -1,    -1,  1367,    -1,    -1,    -1,   215,
      -1,    -1,    -1,    -1,    18,  1377,    -1,   223,   224,    -1,
      -1,    -1,    -1,   229,  2007,    -1,    -1,    -1,   234,    -1,
      -1,   309,  1394,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1406,    -1,    -1,    -1,    -1,  1411,
      -1,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2823,    -1,
      -1,    -1,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,    -1,    -1,    -1,    -1,    -1,   362,    56,    -1,    -1,
     164,   367,   368,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1323,    -1,    -1,    -1,  1551,
      -1,    -1,    -1,    -1,    93,    94,    -1,    -1,    -1,    -1,
      -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1579,    -1,    -1,
      -1,    -1,    -1,  1361,    -1,    -1,   125,    -1,  1366,    -1,
     234,    -1,   131,    -1,    -1,   134,    -1,    -1,  1376,    -1,
      -1,    -1,    -1,    -1,    -1,  1607,  2951,    -1,  1610,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   155,  1619,  1620,    -1,
      -1,    -1,    -1,    -1,    -1,  1627,   165,    -1,    -1,    -1,
      -1,    -1,  1634,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2278,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   208,
      -1,    -1,  1674,    -1,    -1,    -1,    -1,   216,    -1,    -1,
      -1,    -1,    -1,    -1,  1686,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,    -1,    -1,  2338,  2339,  2340,  2341,  2342,
      -1,  2344,  2345,   262,    -1,    -1,  2349,  2350,  2351,  2352,
    2353,    -1,  2355,  2356,    -1,   274,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   290,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   300,  1931,   302,    -1,    -1,    -1,    -1,    -1,    -1,
    1939,  1940,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1949,  1950,    -1,    -1,    -1,  1787,    -1,    -1,    -1,    -1,
    1959,  1960,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1974,  1975,    -1,    -1,  1811,
      -1,    -1,    -1,    -1,    -1,    -1,  1985,  1986,    -1,   358,
      -1,    -1,    -1,  1992,    -1,  1827,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2002,    -1,    -1,    -1,  1615,  1840,    -1,
    1842,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1852,    -1,    -1,  1855,  1856,  1857,  1858,  1859,    -1,  1861,
      -1,    -1,  1864,    -1,    -1,  1867,  1868,  1869,  1870,  1871,
    1872,    -1,  1874,  1875,    -1,    -1,    -1,  1879,  1880,  1881,
      -1,    -1,  1884,  1885,    -1,    -1,    -1,    -1,  1890,  1891,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1675,    -1,    -1,
      -1,    -1,    -1,  1681,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2542,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2551,  2552,
    2553,  2554,  2555,    -1,  2557,  2558,    -1,  2560,  2561,  2562,
    2563,  2564,    -1,  2566,  2567,    -1,  2569,  2570,  2571,  2572,
    2573,    -1,  2575,  2576,    -1,  2578,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2588,  2589,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2599,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,     5,  1784,    -1,    -1,    -1,
      -1,  1789,  2014,    -1,    -1,  2017,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2028,    -1,    -1,  2031,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1820,    -1,    -1,    -1,    -1,    -1,  1826,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2060,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    74,  1853,    76,    -1,    -1,    -1,
      -1,    81,  1860,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,   108,  2732,
    2279,    -1,    -1,  2115,    -1,    -1,    -1,   117,  2741,    -1,
    2289,  2290,    -1,    -1,    -1,    -1,    -1,  2750,    -1,  2752,
      -1,  2300,    -1,  2756,   134,    -1,  2138,    -1,    -1,    -1,
    2309,    -1,    -1,    -1,  2313,  2314,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2322,  2323,   155,    -1,    -1,   169,    -1,
      -1,    -1,  2331,  2332,    -1,    -1,    -1,    -1,  2337,    -1,
      -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,  2347,  2348,
      -1,    -1,    -1,    -1,    -1,   185,   186,    -1,    -1,  2358,
      -1,  2360,    -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,   208,    -1,
    2212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2227,    -1,    -1,  2851,    -1,
    2853,   231,  2855,    -1,  2012,  2858,    -1,  2860,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   245,    57,   247,    -1,    -1,
      -1,    -1,    -1,  2255,  2032,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   262,    -1,  2266,    -1,    -1,   267,    -1,    -1,
      -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,    -1,
      -1,   281,     4,    -1,    -1,    -1,    -1,  2065,  2066,    -1,
      -1,    -1,   103,    -1,    -1,    -1,    18,    -1,    -1,    -1,
     300,    -1,    -1,  2081,  2082,    -1,    -1,    -1,  2086,  2087,
      -1,    -1,    -1,    -1,   314,   315,    -1,   317,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,    -1,  2126,    -1,
      -1,    -1,    -1,   164,    -1,    -1,    -1,    -1,   358,  2137,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2370,    -1,
      -1,  2373,    -1,    -1,  2543,    -1,    -1,  2546,    -1,  2381,
    2549,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2559,    -1,    -1,    -1,    -1,  2397,    -1,    -1,  2400,  2568,
      -1,    -1,    -1,  2405,    -1,    -1,  2408,  2409,  2577,    -1,
      -1,    -1,  2190,    -1,    -1,  2584,    -1,    -1,   229,    -1,
      -1,    -1,    -1,   234,    -1,    -1,  2595,    -1,    -1,    -1,
      -1,    -1,  2601,  2211,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2456,  2457,  2234,    -1,    -1,    -1,
      -1,  2239,    -1,    -1,    -1,    -1,    -1,  2245,    -1,    -1,
      -1,    -1,  2250,    -1,    -1,    -1,  2254,    -1,    -1,  2257,
      -1,    -1,  2260,    -1,  2262,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2508,    -1,    -1,    -1,
      -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2722,    -1,    -1,    -1,    -1,    -1,    -1,
    2729,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,  2738,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2747,    -1,
      -1,    -1,    -1,    -1,  2753,    -1,    -1,    -1,  2757,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2606,    59,    -1,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,    -1,    -1,  2639,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2650,   103,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,  2446,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2462,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,  2705,    -1,    70,    -1,  2709,    -1,    -1,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2503,    -1,    -1,    93,    -1,
     184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2536,    -1,
      -1,  2763,  2764,    -1,  2766,    -1,    -1,    -1,    -1,  2771,
    2772,    -1,    -1,    -1,  2776,    -1,    -1,    -1,    -1,    -1,
     234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2809,    -1,    -1,
      -1,    -1,    -1,    -1,   179,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2604,    -1,    -1,    -1,
      -1,    -1,  2610,   198,    -1,    -1,  2614,    -1,    -1,  2841,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     304,    -1,  2630,    -1,    -1,    -1,   221,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,
      -1,    -1,    -1,    -1,    -1,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,  2681,  2682,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   287,    -1,    -1,    -1,    -1,    -1,  2930,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2947,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2961,
      -1,    -1,  2964,    -1,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,    -1,   358,    19,    20,    21,    -1,    -1,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2791,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    53,    49,
      50,    56,    -1,    53,    18,    -1,    -1,    -1,    63,    -1,
      60,    -1,    67,    63,    -1,    -1,    -1,    67,    -1,    -1,
      75,    76,    -1,    -1,    -1,    75,    76,    -1,    83,    84,
      -1,    -1,    18,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,   101,    -1,    -1,    -1,
      -1,    -1,    -1,   108,    -1,    -1,    -1,   112,   113,    -1,
      -1,   116,   112,   113,    -1,    -1,   116,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
      -1,    -1,    -1,    -1,   134,  2893,    -1,    -1,    18,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     155,    -1,    -1,    -1,    -1,   155,    -1,    -1,    -1,  2917,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,
      60,    -1,    -1,   183,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     164,    -1,    -1,   208,  2962,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   103,  2982,    -1,    -1,  2985,   164,    -1,
      -1,    -1,    -1,   238,    -1,   240,    -1,    -1,   238,    -1,
      -1,   246,   247,    -1,    57,    -1,   246,   247,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   262,   263,    -1,
      -1,    -1,    -1,   263,    -1,   229,    -1,    -1,   273,   274,
     234,    -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   164,    -1,    -1,    -1,    -1,    -1,
     103,    -1,    -1,   229,    -1,   300,    -1,   302,   234,    -1,
     300,    -1,   302,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     315,    -1,   317,   313,    -1,   164,    -1,    -1,    -1,   324,
     169,    -1,    -1,    -1,   324,    -1,    -1,    -1,    -1,    -1,
      -1,   295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   164,    -1,   358,   234,    -1,    -1,    -1,   358,    -1,
      -1,    -1,    -1,    -1,    -1,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   234,    -1,    -1,   304,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,    -1,    -1,    -1,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,    40,    -1,    -1,    43,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   130,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,    -1,    -1,
      -1,   147,    -1,    -1,   150,    -1,    -1,    -1,   154,   155,
      -1,    -1,    -1,   159,   160,    -1,    -1,   163,    -1,    -1,
      -1,    -1,    -1,   169,    -1,    -1,    -1,    -1,    -1,   175,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     186,    -1,    -1,   189,   190,   191,    -1,    -1,   194,   195,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   210,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   227,   228,   229,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   241,    -1,   243,    -1,    40,
      -1,    -1,    43,    -1,   250,    46,    -1,    -1,   254,    -1,
      -1,    -1,   258,    -1,   260,    -1,   262,    -1,    -1,    -1,
      -1,   267,    -1,    -1,    -1,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    -1,    -1,   281,    -1,    78,    -1,    80,
      -1,   287,    -1,    -1,    85,    -1,    87,    88,    89,    -1,
      -1,    -1,    -1,    -1,    95,    -1,    97,   303,   304,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     316,    -1,   318,    -1,    -1,    -1,    -1,    -1,    -1,   325,
      -1,    -1,   328,   329,    -1,    -1,    -1,    -1,   129,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,    -1,    -1,   359,   155,    -1,   157,   158,   159,   160,
     366,    -1,   163,    -1,    -1,    -1,   167,    -1,   169,    -1,
      -1,    -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   194,   195,    -1,    -1,    -1,   199,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   210,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   227,   228,    -1,    -1,
      -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   260,
      -1,   262,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   287,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   303,   304,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   313,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     321,    -1,    -1,    -1,    -1,    -1,   327,    -1,   329,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   366
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    40,    43,    46,    60,    65,    66,    68,    69,    70,
      78,    85,    87,    88,    97,    98,   121,   130,   143,   147,
     150,   154,   155,   159,   160,   163,   169,   175,   186,   189,
     190,   191,   194,   195,   210,   227,   228,   229,   241,   243,
     250,   254,   258,   260,   262,   267,   281,   287,   303,   304,
     316,   318,   325,   328,   329,   359,   366,   372,    67,    11,
      54,    72,   102,   122,   126,   140,   309,   406,     3,     4,
     309,   373,   411,   199,   205,   245,   271,   320,   365,   413,
     300,     4,    39,   114,   159,   160,   206,   207,   260,   418,
      27,   156,   184,   188,   242,   283,   291,   292,   388,   420,
      84,   101,   186,   231,   267,   421,    39,    60,   114,   206,
     304,   373,   430,     4,    18,    39,    57,   103,   123,   164,
     206,   215,   223,   224,   229,   234,   312,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   362,   367,   368,   375,
     383,   384,   385,   432,    32,   433,   375,    43,    46,    77,
      85,   148,   204,   230,   232,   260,   329,   374,   375,    65,
     373,   435,   150,   436,    40,    43,    46,    66,    68,    69,
      70,    78,    80,    85,    87,    88,    89,    95,    97,   129,
     147,   155,   157,   158,   159,   160,   163,   167,   169,   175,
     194,   195,   199,   210,   227,   228,   235,   260,   262,   287,
     303,   304,   313,   321,   327,   329,   366,   437,    84,   101,
     485,    18,    40,    43,    78,    85,    96,    97,   103,   129,
     147,   163,   164,   170,   194,   234,   287,   298,   329,   488,
      67,   375,    62,   298,   323,   570,    62,   298,   323,   569,
      89,   119,   197,   213,   275,   318,   329,   494,    15,     4,
      45,    48,    67,    84,   101,   106,   154,   176,   281,   307,
     308,   319,   553,    25,   115,   129,   166,   220,   233,   497,
     244,   515,     5,    67,    89,   145,   318,   366,   375,   516,
       5,   517,    58,   136,   239,   254,   320,   533,    45,    65,
      67,   193,   253,   298,   308,   554,    67,   216,   361,   367,
     369,   555,    38,   206,   245,   309,   373,   383,   385,   556,
       5,   318,   329,   375,   559,    71,   179,   259,   268,   560,
       4,   561,    89,   533,    62,   298,   323,   568,   206,   309,
     373,   571,    25,   115,   129,   220,   233,   573,    51,   101,
     111,   142,   311,   594,   595,     4,    36,    47,    75,   155,
     198,   268,   297,   305,   323,   401,     4,   129,   219,   596,
     309,   373,   598,    15,    22,   255,   258,   384,   599,   244,
     603,   309,   373,   604,     0,     5,   375,    60,   373,   407,
     284,     5,     4,   309,   373,   408,     5,    31,   296,   409,
     128,   373,   410,   128,   373,   412,   373,     4,   205,   257,
     264,   416,   199,   320,   364,   365,   373,   415,   375,   144,
     187,   414,   210,   373,    79,   183,   264,   373,   417,     5,
     373,   373,   373,     4,   159,   160,   207,   260,   419,     4,
     373,   373,     5,   240,   422,    30,   423,     5,   424,     5,
     428,     5,    30,   429,   373,     8,     9,    10,   373,   379,
     380,   381,   382,   373,   373,    39,   114,   206,   373,   431,
     373,   206,   383,   385,   373,    34,   109,   132,   133,   141,
     161,   171,   390,   373,     4,   375,   375,   375,   375,   375,
     375,   375,   375,   375,   375,   120,    67,    54,    72,    89,
     102,   122,   126,   140,   185,   440,   122,   442,   199,   205,
     245,   271,   320,   364,   365,   373,   425,   443,   300,   446,
     179,   447,   179,   188,   449,    66,    67,    70,    93,   179,
     198,   221,   287,   358,   383,   451,   373,   385,   454,    60,
     304,   383,   455,   295,   383,   385,   456,    32,   457,   383,
     385,   458,     4,   383,   385,   459,    44,    60,    82,   102,
     120,   124,   152,   153,   212,   222,   284,   285,   358,   463,
     226,   322,   469,    67,     5,    90,    62,   298,   323,   476,
      62,   298,   323,   475,     4,    89,   124,   461,     5,    66,
     385,   460,    15,    45,    67,    82,   176,   308,   323,   470,
     533,    45,    67,    82,   193,   253,   298,   308,   471,    67,
     245,   473,   299,    62,   298,   323,   474,    20,   140,   252,
     282,   477,    36,    47,    75,   155,   198,   268,   323,   478,
     385,    90,    15,   209,   483,   383,   486,    67,    73,   489,
      30,   490,    43,    88,   204,   491,   155,   231,   274,   314,
     492,   383,    17,    59,   118,   184,   304,   383,   493,     5,
       5,   321,   383,     4,     5,   383,     4,     4,   205,   496,
       5,     4,     4,   124,   373,     4,    45,    48,    67,   101,
     106,   154,   281,   307,   308,   319,    92,   180,   272,   290,
     387,     5,     4,   373,     5,   159,   160,   260,   498,     5,
     500,     5,   120,   159,   160,   204,   260,   285,   501,    95,
     114,   199,   514,     5,   512,     5,   285,   513,     4,     5,
     375,   375,   373,   373,     5,     4,     5,    61,    67,    74,
      76,    81,    84,    90,   101,   108,   117,   134,   155,   172,
     185,   186,   208,   231,   245,   247,   262,   267,   274,   281,
     300,   314,   315,   317,   358,   518,   387,     5,     4,   210,
     217,   218,   253,   363,   386,   373,   383,   373,     5,   373,
      39,   114,   373,   558,   375,   373,   383,   385,   557,   373,
     390,   373,     4,   384,    55,    91,   146,   260,   562,     4,
       4,   373,     4,   155,   274,   563,     5,   383,     4,    39,
     114,   373,   572,   373,    99,    62,   124,   159,   160,   260,
     288,   574,   124,   593,    62,   120,   124,   159,   160,   164,
     204,   256,   260,   285,   288,   299,   575,   576,    62,   124,
     288,   592,     5,     4,    33,   110,   216,   567,    67,   375,
     402,    67,   375,   403,    67,   375,   404,    12,   201,   566,
     373,     4,   373,   238,   373,   405,   373,   285,     4,   373,
     373,     4,   239,   309,   602,     4,   302,   600,     4,   302,
     601,     4,   390,   128,   373,   605,   373,   373,     4,     5,
     373,    11,   373,   373,   373,    29,    96,   170,   264,   269,
     389,   389,     4,   210,   373,   373,     4,     4,     4,   373,
     373,   373,   373,   373,   373,     4,   373,     4,   373,     4,
       4,     5,     5,   383,     5,   373,   373,   379,   381,   381,
     383,   373,   373,   373,   373,   373,   373,   373,   383,   385,
     382,   373,   373,   382,   373,     5,   284,   105,   199,   441,
     205,   264,   444,   179,    79,   183,   264,   445,   144,   187,
     426,   426,     4,   448,     4,   450,   205,   271,   452,   188,
     453,   179,   390,   373,   373,   383,   383,   390,   390,   390,
     383,   390,   373,   383,     4,   466,     4,   385,   464,   209,
       4,   173,   329,   465,   209,   383,     4,   137,   309,   468,
       5,     5,   438,     4,   209,   139,   261,   376,   373,     4,
     472,   472,   472,   472,     4,     5,    61,    67,   117,   134,
     149,   155,   162,   221,   240,   245,   247,   273,   274,   281,
     300,   358,   527,   385,   200,   200,    67,   479,    67,   480,
      67,   481,   238,   482,   373,     5,   439,   239,   484,   384,
     390,     5,   383,   383,   383,   383,     4,     4,     4,   375,
       4,     4,   209,   373,   387,     5,   373,    13,    14,    62,
     202,   203,   278,   288,   289,   322,    88,    88,    88,     5,
       5,    13,    14,    62,   202,   203,   278,   288,   289,   293,
     322,    88,    88,   164,    88,   164,   164,   169,   384,   504,
     509,    88,   164,     5,   502,     4,     4,    13,    62,   202,
     278,   288,   322,     5,     5,     4,   373,   384,    19,    20,
      21,    49,    50,    53,    56,    63,    67,    75,    76,    83,
      84,   101,   108,   112,   113,   116,   134,   155,   183,   208,
     238,   240,   246,   247,   262,   263,   273,   274,   300,   302,
     315,   317,   324,   358,    67,    81,    90,   101,   134,   155,
     208,   247,   274,   315,   317,     4,    29,   168,   226,   252,
     521,     5,    64,   107,   249,   265,   266,   360,   361,   526,
     101,   519,    16,   274,   524,    39,   114,   206,   525,     4,
       5,    16,   225,   310,   373,   274,   526,   534,   129,   526,
     535,    35,    39,   114,   138,   206,   309,   373,   536,   383,
     375,    93,   101,   108,   125,   131,   155,   165,   208,   216,
     262,   274,   290,   539,    39,   114,   206,     5,   274,   301,
     543,    16,   127,   177,   225,   310,   544,   302,   375,   545,
       5,   101,   108,   318,    16,    16,     4,   373,   373,   373,
     373,   373,   373,   390,   373,   373,   382,   373,     4,   390,
       4,    39,   114,   206,   279,   564,    39,   114,   206,   279,
     565,     4,    99,     5,     5,    88,    88,    88,     4,     5,
       5,    88,     5,    88,   164,    88,   164,   576,    62,   124,
     164,   288,   580,    62,   124,   288,   591,    88,   164,    62,
     124,   288,   578,     4,    62,   124,   288,   577,     5,     5,
       4,     4,     5,     5,     5,   373,   373,   373,     4,   373,
     597,   373,   373,   384,    65,     4,     4,     5,     4,     4,
       5,     4,    99,   276,   391,   373,   373,    11,     5,    11,
     373,   373,    11,     4,    11,     4,     4,   373,   373,   373,
     373,   373,     4,   373,     5,   373,     4,   375,     4,     4,
     390,   383,   390,   373,   373,   373,   383,   373,   382,   373,
     373,     5,     5,   373,   385,   373,   383,   373,   390,   390,
     391,   391,   391,   390,   382,   373,   390,   373,   376,   467,
     173,     5,     4,   390,   164,   164,     4,     5,     4,     4,
     373,   462,    37,    37,   373,    19,    20,    21,    49,    50,
      53,    60,    63,    67,    75,    76,    83,   112,   113,   116,
     134,   155,   183,   192,   238,   246,   247,   263,   274,   300,
     302,   313,   324,   358,    67,   134,   162,   247,   300,    29,
     168,   226,   252,   528,   373,   221,   373,   529,    16,   373,
     273,   539,   273,   221,   373,   530,   302,   531,    16,   100,
     373,   373,     5,   391,     4,     4,    57,   383,     4,     5,
     495,   373,     5,     5,     5,   164,   195,   395,   395,   172,
     280,   393,     4,     4,     5,     5,   499,   499,   499,   286,
     286,     5,     5,     5,    16,   166,   394,   394,   393,     4,
       4,   393,     5,     5,   503,     5,   510,     5,   511,   510,
     511,   169,   357,   384,   507,     5,   506,     5,   510,   511,
       5,    13,    14,    62,   202,   203,   278,   288,   289,   293,
     322,     4,     4,     5,     5,   395,   393,     4,     5,     5,
     390,    83,   157,   236,   237,   251,   294,   398,     6,     7,
     373,   378,   252,   252,   252,   108,    39,    67,   101,   108,
     114,   134,   155,   172,   208,   247,   262,   274,   302,   315,
     317,   318,   358,   520,   252,     5,    26,   174,   252,   298,
     144,   108,    21,    50,    53,    83,   113,   116,   240,   273,
      21,    50,    53,    56,    83,   113,   116,   240,   273,   300,
      39,   252,   252,   108,     5,   225,    26,   238,    35,   138,
     309,   373,   277,   284,   258,   383,   539,    39,   135,   238,
     298,   258,   225,     5,     5,   262,    26,   238,     4,     5,
       5,   225,    35,   138,   309,   373,   539,   225,   375,     4,
       4,   373,     5,   322,    21,    26,    49,    50,    52,    53,
      63,    75,    76,    83,    86,   104,   112,   113,   116,   183,
     240,   246,   263,   273,   301,   302,   324,   369,   522,   373,
     373,   373,   373,   373,   526,   383,     5,     4,     5,   373,
     373,   383,   373,   375,   373,   373,   526,     5,     5,   373,
     373,   375,     5,    16,     5,     5,   373,   373,   382,   373,
     373,     4,   373,   373,   114,   373,   373,   114,     4,    41,
      42,   181,   182,   211,   400,   400,    62,   124,   288,   588,
      62,   124,   288,   585,    62,   124,   288,   582,   400,     5,
      62,   124,   288,   579,    62,   124,   288,   590,    62,   124,
     288,   589,    62,   124,   288,   587,    62,   124,   288,   586,
       5,     5,    62,   124,   288,   581,     4,     5,     5,     4,
      62,   124,   288,   584,    62,   124,   288,   583,     5,     5,
       4,     5,     5,     4,   400,   400,   400,   373,   373,   373,
       4,   383,   373,   390,   384,     5,     5,    11,   373,   383,
     385,   373,    11,   373,   373,   373,    60,   373,     4,   373,
     373,     4,   373,   373,     5,   373,     5,   373,    46,   287,
     427,     5,   375,   375,   390,   373,     4,     4,     4,   390,
     383,   373,   373,   373,   373,   390,   383,   391,   382,   373,
       4,   391,   373,     4,   385,     5,    23,    24,    99,   392,
       4,   383,   373,   373,     4,   373,     5,    83,   157,   236,
     237,   251,   294,   383,   385,   252,   252,   252,    20,   252,
     383,   252,    26,   174,   252,   298,   144,    20,   252,   252,
     252,    20,   252,    26,   178,   238,   178,   277,   284,   178,
     238,   306,   539,   135,   178,   238,   298,     4,   262,    26,
     178,   238,   539,   221,   373,   373,   373,   373,   373,   373,
     209,   373,   373,    19,   248,   487,     4,     4,   373,   395,
     395,   395,     4,   395,   395,   395,    13,    14,    62,   202,
     203,   278,   288,   289,   322,   394,   395,   395,   395,   395,
     395,     4,   395,   395,     4,   394,    13,    14,    62,   202,
     203,   278,   288,   289,   322,     5,    13,    14,    62,   202,
     203,   278,   288,   289,   293,   322,    13,    14,    62,   202,
     203,   278,   288,   289,   322,     5,   505,     5,   508,     5,
       5,    13,    14,    62,   202,   203,   278,   288,   289,   293,
     322,     5,    13,    14,    62,   202,   203,   278,   288,   289,
     293,   322,   286,     5,     5,     5,   394,   394,   393,     4,
       4,   393,     5,     4,     4,   395,   395,     4,   395,   395,
       5,   375,   383,   385,     5,   373,   373,     5,   373,     5,
     378,   108,   208,   262,   108,   208,   262,     5,   373,   375,
       5,   373,   383,   375,     5,   378,   252,   252,    20,   252,
      20,   252,   252,    20,   252,   326,   326,     4,     4,     4,
     520,     4,     4,     4,   326,   326,     4,     5,     4,   373,
       5,   373,     5,   378,   375,   383,   383,   373,    26,    49,
      52,    63,    86,   104,   369,   396,     4,   373,   390,   375,
       5,   383,   383,   373,   375,   375,   383,   383,   373,   375,
     373,     5,   373,   238,   238,   373,   373,   238,   373,   238,
     373,   373,   532,   540,   373,   238,   238,   373,   373,   373,
     373,   373,   373,   373,   373,     5,   322,   373,   523,   373,
     373,   238,   373,   373,   373,   373,   383,   390,     5,     4,
       4,   373,   373,   390,   373,   373,   373,   383,   526,   373,
     373,     5,     4,   373,   373,   373,   373,     5,     5,     4,
       5,     5,     4,     5,     5,     4,   400,     5,     5,     4,
       5,     5,     4,     5,     5,     4,     5,     5,     4,     5,
       5,     4,     4,     4,     5,     5,     4,     4,     5,     5,
       4,     5,     5,     4,   373,   373,   373,   373,   390,   373,
     383,   385,   373,   390,   373,   373,   373,   373,   373,     5,
     373,   373,   373,     4,   373,   373,     5,   373,     5,   373,
       4,   383,   373,   390,   188,   388,   373,   388,   391,   390,
     383,   373,   373,     4,   373,   383,   383,   373,   376,     5,
       5,     5,     5,     5,   383,   390,   383,   383,   383,   383,
     385,   383,   390,   383,   383,   383,   385,   383,   383,   383,
     383,   385,   383,   383,   383,   373,   383,   383,   383,   383,
     383,   383,   383,   373,   373,     4,   373,     5,   373,   395,
       5,     5,     5,   393,     4,     4,     5,   395,   394,     4,
     395,     5,     5,     5,   394,   394,   393,     4,     4,     5,
     286,     5,     5,     5,   394,   394,   393,     4,     4,   393,
       5,     5,     5,     5,   394,   394,   393,     4,     4,     5,
      13,    14,    62,   202,   203,   278,   288,   289,   322,    13,
      14,    62,   202,   203,   278,   288,   289,   322,    13,    14,
      62,   202,   203,   278,   288,   289,   322,   286,     5,     5,
       5,   394,   394,   393,     4,     4,   393,     5,   286,     5,
       5,     5,   394,   394,   393,     4,     4,   393,     5,   394,
       4,     4,   394,     4,     4,   395,     5,   390,   383,   373,
     373,   383,   373,     5,   378,     5,   383,   375,     5,   383,
     390,     5,   378,   373,   373,   373,   373,   373,   373,   373,
     373,   373,     4,     4,     5,     4,     4,   373,   383,   373,
       5,   378,   375,   390,   390,   373,   382,   390,   390,   373,
     390,   390,   373,   373,   373,   373,   373,   373,   373,   373,
     373,   373,    56,    67,    94,   134,   300,   302,   358,   537,
     538,   539,   551,   552,   373,   373,   373,   373,   373,   373,
     373,   373,   373,   373,   373,   373,   383,     5,   373,   373,
     373,   373,     4,     4,   390,   391,     5,     5,   382,   373,
       4,   390,   383,     4,   400,   400,   400,   400,   400,   400,
     400,   400,   400,   378,   373,   373,   373,   390,   373,   382,
     373,   373,    11,     5,     5,   373,   373,   373,   373,     5,
     373,     4,   373,     4,   390,   383,   373,   373,   391,   392,
     373,     5,   373,   383,   385,     5,     5,     5,     5,     5,
     390,   392,   392,   392,   390,   392,   391,   392,   392,   390,
     392,   392,   392,   390,   392,   392,   390,   383,   392,   390,
     392,   392,   390,   392,   390,     4,   383,   385,     5,   373,
       4,   395,   394,     4,   394,   394,     4,     4,   394,     4,
     394,     5,     5,     5,   394,   394,   393,     4,     4,     5,
       5,     5,     5,   394,   394,   393,     4,     4,     5,     5,
       5,     5,   394,   394,   393,     4,     4,     5,   394,   395,
     395,   395,   395,   395,     4,   395,   395,     4,   394,   394,
     395,   395,   395,   395,   395,     4,   395,   395,     4,   394,
     394,     4,     4,     4,   384,   392,     4,   383,   392,   373,
     383,     4,   392,   392,   383,     4,   373,   373,   373,   373,
     373,   373,   373,   373,   373,   373,   373,   383,   392,   373,
     383,     4,   382,   382,   383,   382,   382,   383,   383,   382,
     382,   373,   373,   373,   373,   373,   373,   378,   373,   373,
     373,   370,   370,   370,   370,   370,   370,   370,   538,   370,
     378,   373,   373,   373,   373,   378,   373,   373,   373,   373,
     373,   373,   390,   373,   322,   377,   378,   373,   373,   391,
     375,   383,   383,   391,   390,     4,   373,   382,   373,    60,
     373,     5,     5,     4,     4,   373,   373,     4,   373,     4,
     388,   392,     5,   390,     4,     5,     4,     5,   383,     5,
     391,   392,   391,   391,   391,     5,   390,     4,   373,   395,
     394,   394,     4,   394,   395,   395,   395,   395,   395,     4,
     395,   395,   394,   395,   395,   395,   395,   395,     4,   395,
     395,   394,   395,   395,   395,   395,   395,     4,   395,   395,
     394,   395,   394,     4,   395,   395,   394,     4,   395,   394,
     390,   383,   392,     4,   390,   373,   390,   373,   373,   373,
     392,     4,   390,   373,   382,   392,   373,   382,   392,   392,
     383,   373,     4,   397,   397,   373,   373,   397,   378,   397,
     540,   383,   520,     5,     4,     5,     5,     5,     4,   375,
     378,   397,   397,   373,   373,   378,   373,   373,   373,   373,
     373,   382,   373,     5,   540,   373,   397,   375,   541,   542,
     390,   390,   375,   391,     4,     5,   373,     5,     4,     4,
       4,     4,     4,     4,   373,     4,    31,   196,   296,   434,
     383,     5,    31,   196,   296,   399,   383,     4,   434,   373,
     394,   394,   395,   394,   395,   394,   395,   395,   394,   395,
     394,   373,   392,   383,   383,   373,   383,   373,   383,   383,
     373,   383,   392,     4,   540,   540,   377,   373,   540,     4,
     540,   390,     5,     4,     4,   540,   540,   377,   373,     4,
     540,   540,   373,   383,   540,   540,   540,   541,   548,   549,
     539,   546,   547,   375,     4,     5,     5,     4,     4,     4,
     199,   320,   365,   373,   425,   434,     4,   383,   434,     4,
     395,   395,   395,   395,   395,   384,   392,   392,   373,   392,
       4,   392,   392,   373,   392,   373,   540,   540,     4,   373,
     540,     5,   373,   540,     4,   373,   540,   390,   548,   550,
     551,   370,   547,     5,     5,   373,   426,   373,   426,   390,
     392,     4,   383,   385,     4,   378,   377,   373,   373,   377,
     373,   383,   551,   375,     5,     5,   373,   373,   373,   373,
     399,     5,   383,   385,   390,   383,   385,   540,   373,     4,
     540,   373,   392,     5,     5,   373,     5,   373,   390,   390,
       4,   540,     4,     5,     5,     5,   377,   377,   540,   540,
     540
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

  case 37:
#line 511 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 41:
#line 515 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 44:
#line 518 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 49:
#line 523 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 51:
#line 525 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 53:
#line 527 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 55:
#line 529 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 60:
#line 536 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 61:
#line 537 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 62:
#line 540 "frame/parser.Y"
    {yydebug=(yyvsp[(1) - (1)].integer);;}
    break;

  case 63:
#line 541 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 542 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 543 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 544 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 545 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 546 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 547 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 548 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 549 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 72:
#line 550 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 73:
#line 553 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 74:
#line 555 "frame/parser.Y"
    {(yyval.integer)=1;;}
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
#line 560 "frame/parser.Y"
    {(yyval.integer)=0;;}
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
#line 566 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 83:
#line 567 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 84:
#line 568 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 85:
#line 569 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 86:
#line 570 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 87:
#line 573 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 88:
#line 574 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 89:
#line 577 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 90:
#line 578 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 91:
#line 579 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 92:
#line 582 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 93:
#line 585 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 94:
#line 588 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 95:
#line 592 "frame/parser.Y"
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

  case 96:
#line 604 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 97:
#line 611 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 98:
#line 618 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 99:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 100:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 101:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 102:
#line 628 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 103:
#line 629 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 104:
#line 632 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 105:
#line 633 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 106:
#line 634 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 107:
#line 635 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 108:
#line 636 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 109:
#line 637 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 110:
#line 638 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 111:
#line 639 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 112:
#line 640 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 113:
#line 641 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 114:
#line 642 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 115:
#line 643 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 116:
#line 644 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 117:
#line 645 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 118:
#line 646 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 119:
#line 647 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 120:
#line 648 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 121:
#line 649 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 122:
#line 650 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 123:
#line 651 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 124:
#line 652 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 125:
#line 653 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 126:
#line 654 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 127:
#line 655 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 128:
#line 656 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 129:
#line 657 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 130:
#line 658 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 131:
#line 659 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 132:
#line 662 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 133:
#line 663 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 134:
#line 666 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 135:
#line 667 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 136:
#line 668 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 137:
#line 669 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 138:
#line 670 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 139:
#line 671 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 140:
#line 674 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 141:
#line 675 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 142:
#line 676 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 143:
#line 677 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 144:
#line 678 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 145:
#line 681 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 146:
#line 682 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 147:
#line 683 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 148:
#line 684 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 149:
#line 685 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 150:
#line 686 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 151:
#line 687 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 152:
#line 688 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 153:
#line 691 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 154:
#line 692 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 155:
#line 693 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 156:
#line 694 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 157:
#line 695 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 158:
#line 698 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 159:
#line 699 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 160:
#line 700 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 161:
#line 701 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 162:
#line 702 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 163:
#line 703 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 164:
#line 704 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 165:
#line 705 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 166:
#line 708 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 167:
#line 709 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 168:
#line 710 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 169:
#line 713 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 170:
#line 714 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 171:
#line 715 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 172:
#line 716 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 173:
#line 719 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 174:
#line 720 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 175:
#line 721 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 176:
#line 724 "frame/parser.Y"
    {;}
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
#line 729 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 180:
#line 730 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 181:
#line 731 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 182:
#line 734 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 183:
#line 735 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 184:
#line 736 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 185:
#line 737 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 186:
#line 738 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 187:
#line 739 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 188:
#line 740 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 189:
#line 741 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 190:
#line 744 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 191:
#line 745 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 192:
#line 748 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 193:
#line 749 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 194:
#line 750 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 195:
#line 751 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 196:
#line 752 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 197:
#line 753 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 198:
#line 756 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 199:
#line 757 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 200:
#line 758 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 201:
#line 759 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 202:
#line 762 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 203:
#line 763 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 204:
#line 764 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 205:
#line 765 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 206:
#line 766 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 207:
#line 767 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 212:
#line 774 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 213:
#line 775 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 214:
#line 776 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 215:
#line 777 "frame/parser.Y"
    {fr->set3dSyncCmd((yyvsp[(2) - (2)].integer));}
    break;

  case 216:
#line 779 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 217:
#line 782 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 218:
#line 783 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 219:
#line 786 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 220:
#line 787 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 221:
#line 790 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 222:
#line 791 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 223:
#line 794 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 224:
#line 796 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 226:
#line 800 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 227:
#line 801 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 230:
#line 804 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 232:
#line 806 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 233:
#line 809 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 234:
#line 810 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 235:
#line 813 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 236:
#line 814 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 237:
#line 816 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 238:
#line 818 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 239:
#line 819 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 240:
#line 820 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 241:
#line 822 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 242:
#line 824 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 243:
#line 827 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 244:
#line 828 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 245:
#line 831 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 246:
#line 833 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 247:
#line 836 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 248:
#line 838 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 249:
#line 841 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 250:
#line 845 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 251:
#line 846 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 253:
#line 850 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 254:
#line 851 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 255:
#line 852 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 259:
#line 858 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 260:
#line 859 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 262:
#line 862 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 263:
#line 867 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 264:
#line 868 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 265:
#line 871 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 266:
#line 872 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 267:
#line 873 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 268:
#line 874 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 269:
#line 875 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 270:
#line 878 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 271:
#line 879 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 272:
#line 880 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 273:
#line 881 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 274:
#line 884 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 275:
#line 886 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 276:
#line 891 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 277:
#line 896 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 278:
#line 903 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 279:
#line 905 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 280:
#line 907 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 281:
#line 909 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 282:
#line 911 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 286:
#line 918 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 287:
#line 920 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 288:
#line 922 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 289:
#line 924 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 290:
#line 926 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 291:
#line 928 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 292:
#line 929 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 298:
#line 940 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 299:
#line 943 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 300:
#line 946 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 301:
#line 952 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 302:
#line 957 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 303:
#line 960 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 304:
#line 961 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 305:
#line 964 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 306:
#line 965 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 307:
#line 967 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 308:
#line 973 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 309:
#line 974 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 310:
#line 975 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 311:
#line 976 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 312:
#line 979 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 313:
#line 980 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 314:
#line 983 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 315:
#line 984 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 316:
#line 987 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 317:
#line 988 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 318:
#line 992 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 319:
#line 994 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 320:
#line 997 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 321:
#line 999 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 322:
#line 1002 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 324:
#line 1004 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 325:
#line 1005 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 326:
#line 1006 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 327:
#line 1009 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 328:
#line 1011 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 329:
#line 1012 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 330:
#line 1013 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 331:
#line 1014 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 332:
#line 1018 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 333:
#line 1020 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 334:
#line 1021 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 335:
#line 1022 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 336:
#line 1025 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 337:
#line 1027 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 338:
#line 1029 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 339:
#line 1031 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 340:
#line 1034 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 341:
#line 1037 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 342:
#line 1038 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 343:
#line 1039 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 344:
#line 1040 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 345:
#line 1043 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 346:
#line 1044 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 347:
#line 1047 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 348:
#line 1050 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 349:
#line 1051 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 363:
#line 1065 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 366:
#line 1068 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 367:
#line 1069 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 373:
#line 1075 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 374:
#line 1076 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 378:
#line 1080 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 379:
#line 1081 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 381:
#line 1084 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 383:
#line 1086 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 385:
#line 1088 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 387:
#line 1090 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 388:
#line 1092 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 391:
#line 1095 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 392:
#line 1099 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 393:
#line 1101 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 394:
#line 1105 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 395:
#line 1107 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 396:
#line 1110 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 397:
#line 1111 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 398:
#line 1112 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 399:
#line 1113 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 400:
#line 1114 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 401:
#line 1115 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 403:
#line 1117 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 404:
#line 1120 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 405:
#line 1121 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 406:
#line 1122 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 407:
#line 1125 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 408:
#line 1128 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 409:
#line 1130 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 410:
#line 1132 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 411:
#line 1133 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 412:
#line 1134 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 414:
#line 1136 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 416:
#line 1139 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 417:
#line 1145 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 418:
#line 1146 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 419:
#line 1149 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 420:
#line 1150 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 421:
#line 1151 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 422:
#line 1154 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 423:
#line 1155 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 425:
#line 1161 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 426:
#line 1163 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 427:
#line 1165 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 428:
#line 1168 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 430:
#line 1170 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 431:
#line 1174 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 432:
#line 1178 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 434:
#line 1180 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 435:
#line 1181 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 436:
#line 1182 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 437:
#line 1183 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 438:
#line 1184 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 440:
#line 1186 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 441:
#line 1187 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 442:
#line 1190 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 443:
#line 1191 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 444:
#line 1192 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 445:
#line 1195 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 446:
#line 1196 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 447:
#line 1200 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 448:
#line 1202 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 449:
#line 1210 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 450:
#line 1212 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 451:
#line 1214 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 452:
#line 1217 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 453:
#line 1219 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 454:
#line 1220 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 455:
#line 1223 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 456:
#line 1226 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 457:
#line 1228 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 458:
#line 1232 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 459:
#line 1234 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 460:
#line 1237 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 461:
#line 1241 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 462:
#line 1242 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 463:
#line 1244 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 464:
#line 1247 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 465:
#line 1248 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 467:
#line 1252 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 468:
#line 1253 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 469:
#line 1254 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 470:
#line 1257 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 471:
#line 1259 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 472:
#line 1260 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 474:
#line 1262 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 478:
#line 1266 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 479:
#line 1267 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 480:
#line 1268 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 481:
#line 1270 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 483:
#line 1272 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 484:
#line 1275 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 485:
#line 1277 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 486:
#line 1279 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 487:
#line 1280 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 488:
#line 1281 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 489:
#line 1282 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 490:
#line 1285 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 491:
#line 1286 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 492:
#line 1290 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 493:
#line 1292 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 494:
#line 1295 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 495:
#line 1298 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 496:
#line 1299 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 497:
#line 1301 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 498:
#line 1303 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 499:
#line 1305 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 500:
#line 1308 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 501:
#line 1309 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 502:
#line 1310 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 503:
#line 1313 "frame/parser.Y"
    {fr->getLayerCountCmd();;}
    break;

  case 504:
#line 1314 "frame/parser.Y"
    {fr->getLayerNoCmd();;}
    break;

  case 505:
#line 1315 "frame/parser.Y"
    {fr->getLayerColorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 506:
#line 1316 "frame/parser.Y"
    {fr->getLayerBlendCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 507:
#line 1317 "frame/parser.Y"
    {fr->getLayerTransparencyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 508:
#line 1318 "frame/parser.Y"
    {fr->getLayerViewCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 509:
#line 1321 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 510:
#line 1322 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 511:
#line 1323 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 512:
#line 1324 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 513:
#line 1325 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 514:
#line 1326 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 515:
#line 1327 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 516:
#line 1330 "frame/parser.Y"
    {(yyval.integer) = 0;;}
    break;

  case 517:
#line 1331 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 518:
#line 1334 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 519:
#line 1337 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 520:
#line 1338 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 521:
#line 1339 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 522:
#line 1342 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 523:
#line 1343 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 524:
#line 1344 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 525:
#line 1347 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 526:
#line 1348 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 527:
#line 1349 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 528:
#line 1352 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 529:
#line 1353 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 530:
#line 1354 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 531:
#line 1355 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 532:
#line 1356 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 533:
#line 1357 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 538:
#line 1364 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 539:
#line 1365 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 540:
#line 1366 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 541:
#line 1369 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 542:
#line 1370 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 543:
#line 1373 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 544:
#line 1374 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 545:
#line 1377 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 546:
#line 1378 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 547:
#line 1381 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 548:
#line 1382 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 549:
#line 1385 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 551:
#line 1387 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 552:
#line 1390 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 553:
#line 1391 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 555:
#line 1395 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 556:
#line 1399 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 557:
#line 1402 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 558:
#line 1409 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 559:
#line 1410 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 560:
#line 1413 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 561:
#line 1414 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 564:
#line 1417 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 565:
#line 1418 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 566:
#line 1419 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 567:
#line 1420 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 569:
#line 1422 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 570:
#line 1423 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 571:
#line 1424 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 573:
#line 1426 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 574:
#line 1427 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 575:
#line 1428 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 576:
#line 1429 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 578:
#line 1433 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 579:
#line 1436 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 580:
#line 1437 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 581:
#line 1440 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 582:
#line 1441 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 583:
#line 1442 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 584:
#line 1443 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 585:
#line 1446 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 586:
#line 1447 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 587:
#line 1448 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 588:
#line 1449 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 589:
#line 1452 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 590:
#line 1453 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 591:
#line 1454 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 592:
#line 1455 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 593:
#line 1456 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 594:
#line 1457 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 595:
#line 1460 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 596:
#line 1461 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 597:
#line 1462 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 600:
#line 1466 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 601:
#line 1467 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 602:
#line 1470 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 603:
#line 1473 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 604:
#line 1474 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 605:
#line 1478 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 606:
#line 1480 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 607:
#line 1481 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 614:
#line 1493 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 615:
#line 1495 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 616:
#line 1497 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 617:
#line 1498 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 618:
#line 1500 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 619:
#line 1502 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 620:
#line 1504 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 621:
#line 1506 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 622:
#line 1508 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 626:
#line 1514 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 627:
#line 1515 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 628:
#line 1516 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 629:
#line 1517 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 630:
#line 1518 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 631:
#line 1520 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 632:
#line 1521 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 633:
#line 1522 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 634:
#line 1523 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 635:
#line 1526 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 636:
#line 1530 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 637:
#line 1532 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 638:
#line 1534 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 639:
#line 1536 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 640:
#line 1538 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 641:
#line 1540 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 642:
#line 1542 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 643:
#line 1544 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 644:
#line 1547 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 645:
#line 1549 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 646:
#line 1551 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 656:
#line 1563 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 657:
#line 1564 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 658:
#line 1565 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 659:
#line 1566 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 660:
#line 1567 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 661:
#line 1568 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 662:
#line 1570 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 663:
#line 1572 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 664:
#line 1573 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 665:
#line 1574 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 666:
#line 1575 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 667:
#line 1578 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 668:
#line 1579 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 669:
#line 1580 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 670:
#line 1581 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 671:
#line 1582 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 672:
#line 1584 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 673:
#line 1585 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 674:
#line 1586 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 675:
#line 1587 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 681:
#line 1598 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 682:
#line 1601 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 683:
#line 1604 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 684:
#line 1607 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 685:
#line 1610 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 686:
#line 1613 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 687:
#line 1616 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 688:
#line 1619 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 689:
#line 1622 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 690:
#line 1627 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 691:
#line 1630 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 692:
#line 1633 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 693:
#line 1636 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 694:
#line 1639 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 695:
#line 1642 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 696:
#line 1645 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 697:
#line 1648 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 698:
#line 1651 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 699:
#line 1654 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 700:
#line 1657 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 701:
#line 1662 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 702:
#line 1665 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 703:
#line 1668 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 704:
#line 1671 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 705:
#line 1674 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 706:
#line 1677 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 707:
#line 1680 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 708:
#line 1683 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 709:
#line 1686 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 710:
#line 1691 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 711:
#line 1693 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 712:
#line 1695 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 713:
#line 1697 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 714:
#line 1699 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 715:
#line 1701 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 716:
#line 1706 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 717:
#line 1708 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 718:
#line 1710 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 719:
#line 1714 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 720:
#line 1717 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 721:
#line 1720 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 722:
#line 1723 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 723:
#line 1726 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 724:
#line 1729 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 725:
#line 1732 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 726:
#line 1735 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 727:
#line 1738 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 728:
#line 1741 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 729:
#line 1744 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 730:
#line 1748 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 731:
#line 1749 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 732:
#line 1750 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 733:
#line 1751 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 734:
#line 1752 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 735:
#line 1753 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 736:
#line 1755 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 737:
#line 1757 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 738:
#line 1758 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 739:
#line 1759 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 740:
#line 1760 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 741:
#line 1763 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 742:
#line 1764 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 743:
#line 1765 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 744:
#line 1766 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 745:
#line 1767 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 746:
#line 1769 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 747:
#line 1770 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 748:
#line 1771 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 749:
#line 1772 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 750:
#line 1776 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 751:
#line 1778 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 752:
#line 1779 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 753:
#line 1781 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 754:
#line 1783 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 755:
#line 1785 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 756:
#line 1788 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 757:
#line 1789 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 758:
#line 1792 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 759:
#line 1793 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 760:
#line 1794 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 761:
#line 1797 "frame/parser.Y"
    {;}
    break;

  case 762:
#line 1800 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 763:
#line 1801 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 764:
#line 1802 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 765:
#line 1803 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 766:
#line 1804 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 767:
#line 1805 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 768:
#line 1806 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 769:
#line 1810 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 771:
#line 1818 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 772:
#line 1819 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 773:
#line 1821 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 774:
#line 1823 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 775:
#line 1824 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 776:
#line 1825 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 778:
#line 1826 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 781:
#line 1829 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 782:
#line 1830 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 783:
#line 1832 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 784:
#line 1834 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 785:
#line 1836 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 786:
#line 1839 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 787:
#line 1841 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 788:
#line 1842 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 789:
#line 1844 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 790:
#line 1847 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 791:
#line 1850 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 792:
#line 1854 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 793:
#line 1857 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 794:
#line 1860 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 795:
#line 1863 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 796:
#line 1867 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 797:
#line 1871 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 798:
#line 1876 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 799:
#line 1880 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 800:
#line 1882 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 801:
#line 1883 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 802:
#line 1885 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 803:
#line 1887 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 804:
#line 1889 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 805:
#line 1891 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 806:
#line 1892 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 807:
#line 1894 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 808:
#line 1896 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 809:
#line 1899 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 810:
#line 1903 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 811:
#line 1907 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 812:
#line 1909 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 813:
#line 1911 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 814:
#line 1913 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 815:
#line 1915 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 816:
#line 1917 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 817:
#line 1919 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 818:
#line 1921 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 819:
#line 1923 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 820:
#line 1925 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 821:
#line 1927 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 822:
#line 1929 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 823:
#line 1931 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 824:
#line 1933 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 825:
#line 1934 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 826:
#line 1936 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 827:
#line 1938 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 828:
#line 1939 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 829:
#line 1940 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 830:
#line 1942 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 831:
#line 1944 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 832:
#line 1945 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 833:
#line 1946 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 834:
#line 1947 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 835:
#line 1949 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 836:
#line 1951 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 837:
#line 1955 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 838:
#line 1958 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 839:
#line 1961 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 840:
#line 1965 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 841:
#line 1969 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 842:
#line 1974 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 843:
#line 1978 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 844:
#line 1979 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 845:
#line 1980 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 846:
#line 1982 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 847:
#line 1984 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 848:
#line 1988 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 849:
#line 1989 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 850:
#line 1990 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 851:
#line 1992 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 852:
#line 1995 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 853:
#line 1998 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 854:
#line 2001 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 855:
#line 2002 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 856:
#line 2006 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 857:
#line 2010 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 858:
#line 2012 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 859:
#line 2013 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 860:
#line 2015 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 861:
#line 2018 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 862:
#line 2021 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 863:
#line 2022 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 864:
#line 2024 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 865:
#line 2025 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 866:
#line 2026 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 867:
#line 2028 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 868:
#line 2029 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 869:
#line 2031 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 870:
#line 2034 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 871:
#line 2037 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 872:
#line 2039 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 873:
#line 2040 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 877:
#line 2045 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 878:
#line 2046 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 879:
#line 2048 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 880:
#line 2050 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 881:
#line 2052 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 882:
#line 2053 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 886:
#line 2059 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 887:
#line 2060 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 888:
#line 2061 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 889:
#line 2062 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 890:
#line 2063 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 891:
#line 2064 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 892:
#line 2065 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 893:
#line 2066 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 894:
#line 2067 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 895:
#line 2068 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 896:
#line 2070 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 897:
#line 2072 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 898:
#line 2073 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 899:
#line 2074 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 900:
#line 2075 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 901:
#line 2076 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 902:
#line 2078 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 903:
#line 2079 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 904:
#line 2080 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 905:
#line 2081 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 906:
#line 2082 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 907:
#line 2084 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 908:
#line 2085 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 909:
#line 2086 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 910:
#line 2087 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 911:
#line 2088 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 912:
#line 2089 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 913:
#line 2092 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 914:
#line 2093 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 915:
#line 2094 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 916:
#line 2095 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 917:
#line 2096 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 918:
#line 2097 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 919:
#line 2098 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 920:
#line 2099 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 921:
#line 2100 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 922:
#line 2101 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 923:
#line 2102 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 924:
#line 2103 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 925:
#line 2104 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 926:
#line 2105 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 927:
#line 2106 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 928:
#line 2107 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 929:
#line 2108 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 930:
#line 2109 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 931:
#line 2110 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 932:
#line 2111 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 933:
#line 2112 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 934:
#line 2115 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 935:
#line 2116 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 936:
#line 2117 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 937:
#line 2118 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 938:
#line 2119 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 939:
#line 2121 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 940:
#line 2131 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 941:
#line 2139 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 942:
#line 2148 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 943:
#line 2156 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 944:
#line 2163 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 945:
#line 2170 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 946:
#line 2178 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 947:
#line 2186 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 948:
#line 2191 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 949:
#line 2196 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 950:
#line 2201 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 951:
#line 2206 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 952:
#line 2211 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 953:
#line 2216 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 954:
#line 2221 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 955:
#line 2230 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 956:
#line 2240 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 957:
#line 2250 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 958:
#line 2259 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 959:
#line 2267 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 960:
#line 2277 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 961:
#line 2287 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 962:
#line 2297 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 963:
#line 2309 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 964:
#line 2318 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 966:
#line 2326 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 967:
#line 2328 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 968:
#line 2330 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 969:
#line 2335 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 970:
#line 2338 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 971:
#line 2339 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 972:
#line 2340 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 973:
#line 2347 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 974:
#line 2349 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 975:
#line 2350 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 976:
#line 2353 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 977:
#line 2354 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 978:
#line 2355 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 979:
#line 2356 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 980:
#line 2357 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 981:
#line 2358 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 982:
#line 2359 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 984:
#line 2363 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 985:
#line 2364 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 986:
#line 2365 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 987:
#line 2366 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 988:
#line 2367 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 989:
#line 2370 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 990:
#line 2372 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 991:
#line 2374 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 992:
#line 2376 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 993:
#line 2378 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 994:
#line 2380 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 995:
#line 2382 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 996:
#line 2383 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 997:
#line 2384 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 998:
#line 2386 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 999:
#line 2388 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1000:
#line 2391 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1001:
#line 2393 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1002:
#line 2394 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1003:
#line 2395 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1004:
#line 2397 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1005:
#line 2399 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1006:
#line 2402 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1007:
#line 2405 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1008:
#line 2406 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1009:
#line 2407 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1010:
#line 2408 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1011:
#line 2410 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1012:
#line 2411 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1013:
#line 2412 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1014:
#line 2413 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1015:
#line 2414 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1016:
#line 2416 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1017:
#line 2418 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1018:
#line 2420 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1019:
#line 2422 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1020:
#line 2424 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1021:
#line 2425 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1022:
#line 2427 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1023:
#line 2429 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1024:
#line 2431 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1025:
#line 2432 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1026:
#line 2433 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1027:
#line 2435 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1028:
#line 2437 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1029:
#line 2440 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1030:
#line 2443 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1031:
#line 2444 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1032:
#line 2446 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1033:
#line 2449 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1034:
#line 2452 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1035:
#line 2453 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1036:
#line 2454 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1037:
#line 2455 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1038:
#line 2457 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1039:
#line 2459 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1040:
#line 2461 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1041:
#line 2462 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1042:
#line 2464 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1043:
#line 2465 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1044:
#line 2466 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1045:
#line 2467 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1046:
#line 2468 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1047:
#line 2470 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1048:
#line 2472 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1049:
#line 2474 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1050:
#line 2476 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1052:
#line 2478 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1053:
#line 2479 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1054:
#line 2481 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1055:
#line 2483 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1056:
#line 2484 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1057:
#line 2485 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1059:
#line 2487 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1061:
#line 2491 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1062:
#line 2492 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1063:
#line 2493 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1064:
#line 2494 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1065:
#line 2495 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1066:
#line 2496 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1067:
#line 2498 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1068:
#line 2499 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1069:
#line 2501 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1070:
#line 2504 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1071:
#line 2505 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1072:
#line 2506 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1073:
#line 2507 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1074:
#line 2510 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1075:
#line 2511 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1076:
#line 2514 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1077:
#line 2515 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1078:
#line 2518 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1079:
#line 2519 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1080:
#line 2522 "frame/parser.Y"
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

  case 1081:
#line 2535 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1082:
#line 2536 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1083:
#line 2540 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1084:
#line 2541 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1085:
#line 2545 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1086:
#line 2546 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1087:
#line 2551 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1088:
#line 2555 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1089:
#line 2560 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1090:
#line 2562 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1091:
#line 2565 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1092:
#line 2567 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1093:
#line 2570 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1094:
#line 2572 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1095:
#line 2575 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1096:
#line 2576 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1097:
#line 2577 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1098:
#line 2578 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1099:
#line 2579 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1100:
#line 2580 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1101:
#line 2582 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1104:
#line 2589 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1105:
#line 2590 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1106:
#line 2591 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1107:
#line 2592 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1108:
#line 2593 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1109:
#line 2594 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1112:
#line 2599 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1113:
#line 2600 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1114:
#line 2601 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1115:
#line 2602 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1116:
#line 2603 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1117:
#line 2604 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1118:
#line 2605 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1119:
#line 2606 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1120:
#line 2607 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1121:
#line 2608 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1122:
#line 2609 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1123:
#line 2610 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1126:
#line 2617 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1127:
#line 2618 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1129:
#line 2622 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1130:
#line 2624 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1131:
#line 2625 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1132:
#line 2628 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1133:
#line 2629 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1134:
#line 2630 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1135:
#line 2631 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1136:
#line 2632 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1137:
#line 2633 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1138:
#line 2636 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1139:
#line 2637 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1142:
#line 2645 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1143:
#line 2648 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1144:
#line 2649 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1148:
#line 2656 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1149:
#line 2659 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1150:
#line 2663 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1151:
#line 2664 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1152:
#line 2665 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1153:
#line 2666 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1154:
#line 2667 "frame/parser.Y"
    {fr->layerColorCmd(0,(yyvsp[(2) - (2)].str));;}
    break;

  case 1155:
#line 2668 "frame/parser.Y"
    {fr->layerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1156:
#line 2669 "frame/parser.Y"
    {fr->layerBlendCmd(0,(FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1157:
#line 2670 "frame/parser.Y"
    {fr->layerBlendCmd((yyvsp[(1) - (3)].integer),(FitsMask::MaskBlend)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1158:
#line 2671 "frame/parser.Y"
    {fr->layerTransparencyCmd(0,(yyvsp[(2) - (2)].real));;}
    break;

  case 1159:
#line 2672 "frame/parser.Y"
    {fr->layerTransparencyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 1160:
#line 2673 "frame/parser.Y"
    {fr->layerShowCmd(0);;}
    break;

  case 1161:
#line 2674 "frame/parser.Y"
    {fr->layerShowCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1162:
#line 2675 "frame/parser.Y"
    {fr->layerHideCmd(0);;}
    break;

  case 1163:
#line 2676 "frame/parser.Y"
    {fr->layerHideCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1164:
#line 2677 "frame/parser.Y"
    {fr->layerDeleteCmd(0);;}
    break;

  case 1165:
#line 2678 "frame/parser.Y"
    {fr->layerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1166:
#line 2679 "frame/parser.Y"
    {fr->layerUpCmd(0);;}
    break;

  case 1167:
#line 2680 "frame/parser.Y"
    {fr->layerUpCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1168:
#line 2681 "frame/parser.Y"
    {fr->layerDownCmd(0);;}
    break;

  case 1169:
#line 2682 "frame/parser.Y"
    {fr->layerDownCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1170:
#line 2683 "frame/parser.Y"
    {fr->layerTopCmd(0);;}
    break;

  case 1171:
#line 2684 "frame/parser.Y"
    {fr->layerTopCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1172:
#line 2685 "frame/parser.Y"
    {fr->layerBottomCmd(0);;}
    break;

  case 1173:
#line 2686 "frame/parser.Y"
    {fr->layerBottomCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1174:
#line 2689 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1175:
#line 2690 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1176:
#line 2691 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1177:
#line 2692 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1178:
#line 2693 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1179:
#line 2694 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1180:
#line 2695 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1181:
#line 2696 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1182:
#line 2702 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1183:
#line 2703 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1184:
#line 2704 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1185:
#line 2705 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1186:
#line 2709 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1187:
#line 2710 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1188:
#line 2712 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1189:
#line 2717 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1191:
#line 2719 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1193:
#line 2721 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1194:
#line 2724 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1195:
#line 2726 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1196:
#line 2731 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1197:
#line 2734 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1198:
#line 2735 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1199:
#line 2736 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1200:
#line 2739 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1201:
#line 2741 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1202:
#line 2745 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1203:
#line 2746 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1204:
#line 2750 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1205:
#line 2751 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1206:
#line 2752 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1207:
#line 2753 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1208:
#line 2759 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1209:
#line 2760 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1210:
#line 2766 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1211:
#line 2767 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1212:
#line 2768 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1213:
#line 2769 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1216:
#line 2777 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1217:
#line 2779 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1218:
#line 2780 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1219:
#line 2781 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1220:
#line 2785 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1221:
#line 2786 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1222:
#line 2787 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1223:
#line 2788 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1224:
#line 2791 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1225:
#line 2792 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1226:
#line 2795 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1227:
#line 2796 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1228:
#line 2797 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1229:
#line 2800 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1230:
#line 2801 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1231:
#line 2802 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1232:
#line 2805 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1233:
#line 2806 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1234:
#line 2807 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1235:
#line 2810 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1236:
#line 2811 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1237:
#line 2812 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1238:
#line 2813 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1239:
#line 2816 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1240:
#line 2817 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1242:
#line 2819 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1243:
#line 2820 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1244:
#line 2823 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1245:
#line 2824 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1246:
#line 2825 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1251:
#line 2832 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1252:
#line 2836 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1253:
#line 2838 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1254:
#line 2840 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1271:
#line 2861 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1272:
#line 2862 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1273:
#line 2863 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1274:
#line 2866 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1275:
#line 2867 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1276:
#line 2868 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1277:
#line 2871 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1278:
#line 2872 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1279:
#line 2873 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1280:
#line 2876 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1281:
#line 2877 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1282:
#line 2878 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1284:
#line 2882 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1285:
#line 2883 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1286:
#line 2884 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1287:
#line 2887 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1288:
#line 2888 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1289:
#line 2889 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1290:
#line 2893 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1291:
#line 2895 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1292:
#line 2897 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1293:
#line 2900 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1294:
#line 2901 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1295:
#line 2902 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1296:
#line 2905 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1297:
#line 2906 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1298:
#line 2907 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1299:
#line 2911 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1300:
#line 2913 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1301:
#line 2915 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1302:
#line 2918 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1303:
#line 2919 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1304:
#line 2920 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1305:
#line 2923 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1306:
#line 2924 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1307:
#line 2925 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1308:
#line 2929 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1309:
#line 2931 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1310:
#line 2933 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1311:
#line 2936 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1312:
#line 2937 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1313:
#line 2938 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1314:
#line 2941 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1315:
#line 2942 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1316:
#line 2943 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1317:
#line 2946 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1318:
#line 2947 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1319:
#line 2948 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1320:
#line 2952 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1321:
#line 2954 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1322:
#line 2956 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1323:
#line 2960 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1324:
#line 2964 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1325:
#line 2966 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1326:
#line 2970 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1327:
#line 2973 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1328:
#line 2974 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1329:
#line 2975 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1330:
#line 2976 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1331:
#line 2979 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1332:
#line 2981 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1333:
#line 2983 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1334:
#line 2986 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1336:
#line 2990 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1337:
#line 2991 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1338:
#line 2992 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1339:
#line 2995 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1340:
#line 2996 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1341:
#line 3000 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1343:
#line 3002 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1346:
#line 3007 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1347:
#line 3008 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1348:
#line 3009 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1349:
#line 3012 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1350:
#line 3013 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1351:
#line 3014 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1352:
#line 3017 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1353:
#line 3019 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1354:
#line 3024 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1355:
#line 3025 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1356:
#line 3028 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1357:
#line 3035 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1358:
#line 3037 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1359:
#line 3039 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1360:
#line 3044 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1362:
#line 3048 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1363:
#line 3049 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1364:
#line 3050 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1365:
#line 3052 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1366:
#line 3054 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1367:
#line 3059 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11546 "frame/parser.C"
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


#line 3063 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

