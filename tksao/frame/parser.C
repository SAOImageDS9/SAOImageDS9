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
     BLUE_ = 302,
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
     FIRST_ = 381,
     FIT_ = 382,
     FITS_ = 383,
     FITSY_ = 384,
     FIXED_ = 385,
     FK4_ = 386,
     FK5_ = 387,
     FONT_ = 388,
     FORMAT_ = 389,
     FOOTPRINT_ = 390,
     FROM_ = 391,
     FRONT_ = 392,
     FULL_ = 393,
     FUNCTION_ = 394,
     GALACTIC_ = 395,
     GAUSSIAN_ = 396,
     GET_ = 397,
     GLOBAL_ = 398,
     GRAPHICS_ = 399,
     GRAY_ = 400,
     GREEN_ = 401,
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
     HUE_ = 416,
     ICRS_ = 417,
     ID_ = 418,
     IIS_ = 419,
     IMAGE_ = 420,
     INCLUDE_ = 421,
     INCR_ = 422,
     INFO_ = 423,
     ITERATION_ = 424,
     IRAF_ = 425,
     IRAFMIN_ = 426,
     J2000_ = 427,
     KEY_ = 428,
     KEYWORD_ = 429,
     LABEL_ = 430,
     LAST_ = 431,
     LENGTH_ = 432,
     LEVEL_ = 433,
     LIGHTEN_ = 434,
     LIGHTNESS_ = 435,
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
     MOVE_ = 462,
     NAME_ = 463,
     NAN_ = 464,
     NATIVE_ = 465,
     NAXES_ = 466,
     NEW_ = 467,
     NEXT_ = 468,
     NO_ = 469,
     NONE_ = 470,
     NONNAN_ = 471,
     NONZERO_ = 472,
     NOW_ = 473,
     NRRD_ = 474,
     NUMBER_ = 475,
     OBJECT_ = 476,
     OFF_ = 477,
     ON_ = 478,
     ONLY_ = 479,
     OPTION_ = 480,
     ORIENT_ = 481,
     PAN_ = 482,
     PANNER_ = 483,
     PARSER_ = 484,
     PASTE_ = 485,
     PERF_ = 486,
     PHOTO_ = 487,
     PHYSICAL_ = 488,
     PIXEL_ = 489,
     PLOT2D_ = 490,
     PLOT3D_ = 491,
     POINT_ = 492,
     POINTER_ = 493,
     POLYGON_ = 494,
     POSTSCRIPT_ = 495,
     POW_ = 496,
     PRECISION_ = 497,
     PRINT_ = 498,
     PRESERVE_ = 499,
     PROJECTION_ = 500,
     PROPERTY_ = 501,
     PUBLICATION_ = 502,
     PROS_ = 503,
     QUERY_ = 504,
     RADIAL_ = 505,
     RADIUS_ = 506,
     RANGE_ = 507,
     RED_ = 508,
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
     SATURATION_ = 522,
     SAVE_ = 523,
     SCALE_ = 524,
     SCAN_ = 525,
     SCIENTIFIC_ = 526,
     SCOPE_ = 527,
     SCREEN_ = 528,
     SEGMENT_ = 529,
     SELECT_ = 530,
     SET_ = 531,
     SEXAGESIMAL_ = 532,
     SHAPE_ = 533,
     SHARED_ = 534,
     SHIFT_ = 535,
     SHMID_ = 536,
     SHOW_ = 537,
     SIGMA_ = 538,
     SINH_ = 539,
     SIZE_ = 540,
     SLICE_ = 541,
     SMMAP_ = 542,
     SMOOTH_ = 543,
     SOCKET_ = 544,
     SOCKETGZ_ = 545,
     SOURCE_ = 546,
     SQRT_ = 547,
     SQUARED_ = 548,
     SSHARED_ = 549,
     STATS_ = 550,
     STATUS_ = 551,
     SUM_ = 552,
     SYNC_ = 553,
     SYSTEM_ = 554,
     TABLE_ = 555,
     TAG_ = 556,
     TEMPLATE_ = 557,
     TEXT_ = 558,
     THREADS_ = 559,
     THREED_ = 560,
     THRESHOLD_ = 561,
     THICK_ = 562,
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
     USER_ = 574,
     VALUE_ = 575,
     VAR_ = 576,
     VIEW_ = 577,
     VECTOR_ = 578,
     VERSION_ = 579,
     VERTEX_ = 580,
     VERTICAL_ = 581,
     WARP_ = 582,
     WCS_ = 583,
     WCSA_ = 584,
     WCSB_ = 585,
     WCSC_ = 586,
     WCSD_ = 587,
     WCSE_ = 588,
     WCSF_ = 589,
     WCSG_ = 590,
     WCSH_ = 591,
     WCSI_ = 592,
     WCSJ_ = 593,
     WCSK_ = 594,
     WCSL_ = 595,
     WCSM_ = 596,
     WCSN_ = 597,
     WCSO_ = 598,
     WCSP_ = 599,
     WCSQ_ = 600,
     WCSR_ = 601,
     WCSS_ = 602,
     WCST_ = 603,
     WCSU_ = 604,
     WCSV_ = 605,
     WCSW_ = 606,
     WCSX_ = 607,
     WCSY_ = 608,
     WCSZ_ = 609,
     WCS0_ = 610,
     WFPC2_ = 611,
     WIDTH_ = 612,
     WIN32_ = 613,
     XML_ = 614,
     XY_ = 615,
     YES_ = 616,
     ZERO_ = 617,
     ZMAX_ = 618,
     ZSCALE_ = 619,
     ZOOM_ = 620
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
#define BLUE_ 302
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
#define FIRST_ 381
#define FIT_ 382
#define FITS_ 383
#define FITSY_ 384
#define FIXED_ 385
#define FK4_ 386
#define FK5_ 387
#define FONT_ 388
#define FORMAT_ 389
#define FOOTPRINT_ 390
#define FROM_ 391
#define FRONT_ 392
#define FULL_ 393
#define FUNCTION_ 394
#define GALACTIC_ 395
#define GAUSSIAN_ 396
#define GET_ 397
#define GLOBAL_ 398
#define GRAPHICS_ 399
#define GRAY_ 400
#define GREEN_ 401
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
#define HUE_ 416
#define ICRS_ 417
#define ID_ 418
#define IIS_ 419
#define IMAGE_ 420
#define INCLUDE_ 421
#define INCR_ 422
#define INFO_ 423
#define ITERATION_ 424
#define IRAF_ 425
#define IRAFMIN_ 426
#define J2000_ 427
#define KEY_ 428
#define KEYWORD_ 429
#define LABEL_ 430
#define LAST_ 431
#define LENGTH_ 432
#define LEVEL_ 433
#define LIGHTEN_ 434
#define LIGHTNESS_ 435
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
#define MOVE_ 462
#define NAME_ 463
#define NAN_ 464
#define NATIVE_ 465
#define NAXES_ 466
#define NEW_ 467
#define NEXT_ 468
#define NO_ 469
#define NONE_ 470
#define NONNAN_ 471
#define NONZERO_ 472
#define NOW_ 473
#define NRRD_ 474
#define NUMBER_ 475
#define OBJECT_ 476
#define OFF_ 477
#define ON_ 478
#define ONLY_ 479
#define OPTION_ 480
#define ORIENT_ 481
#define PAN_ 482
#define PANNER_ 483
#define PARSER_ 484
#define PASTE_ 485
#define PERF_ 486
#define PHOTO_ 487
#define PHYSICAL_ 488
#define PIXEL_ 489
#define PLOT2D_ 490
#define PLOT3D_ 491
#define POINT_ 492
#define POINTER_ 493
#define POLYGON_ 494
#define POSTSCRIPT_ 495
#define POW_ 496
#define PRECISION_ 497
#define PRINT_ 498
#define PRESERVE_ 499
#define PROJECTION_ 500
#define PROPERTY_ 501
#define PUBLICATION_ 502
#define PROS_ 503
#define QUERY_ 504
#define RADIAL_ 505
#define RADIUS_ 506
#define RANGE_ 507
#define RED_ 508
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
#define SATURATION_ 522
#define SAVE_ 523
#define SCALE_ 524
#define SCAN_ 525
#define SCIENTIFIC_ 526
#define SCOPE_ 527
#define SCREEN_ 528
#define SEGMENT_ 529
#define SELECT_ 530
#define SET_ 531
#define SEXAGESIMAL_ 532
#define SHAPE_ 533
#define SHARED_ 534
#define SHIFT_ 535
#define SHMID_ 536
#define SHOW_ 537
#define SIGMA_ 538
#define SINH_ 539
#define SIZE_ 540
#define SLICE_ 541
#define SMMAP_ 542
#define SMOOTH_ 543
#define SOCKET_ 544
#define SOCKETGZ_ 545
#define SOURCE_ 546
#define SQRT_ 547
#define SQUARED_ 548
#define SSHARED_ 549
#define STATS_ 550
#define STATUS_ 551
#define SUM_ 552
#define SYNC_ 553
#define SYSTEM_ 554
#define TABLE_ 555
#define TAG_ 556
#define TEMPLATE_ 557
#define TEXT_ 558
#define THREADS_ 559
#define THREED_ 560
#define THRESHOLD_ 561
#define THICK_ 562
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
#define USER_ 574
#define VALUE_ 575
#define VAR_ 576
#define VIEW_ 577
#define VECTOR_ 578
#define VERSION_ 579
#define VERTEX_ 580
#define VERTICAL_ 581
#define WARP_ 582
#define WCS_ 583
#define WCSA_ 584
#define WCSB_ 585
#define WCSC_ 586
#define WCSD_ 587
#define WCSE_ 588
#define WCSF_ 589
#define WCSG_ 590
#define WCSH_ 591
#define WCSI_ 592
#define WCSJ_ 593
#define WCSK_ 594
#define WCSL_ 595
#define WCSM_ 596
#define WCSN_ 597
#define WCSO_ 598
#define WCSP_ 599
#define WCSQ_ 600
#define WCSR_ 601
#define WCSS_ 602
#define WCST_ 603
#define WCSU_ 604
#define WCSV_ 605
#define WCSW_ 606
#define WCSX_ 607
#define WCSY_ 608
#define WCSZ_ 609
#define WCS0_ 610
#define WFPC2_ 611
#define WIDTH_ 612
#define WIN32_ 613
#define XML_ 614
#define XY_ 615
#define YES_ 616
#define ZERO_ 617
#define ZMAX_ 618
#define ZSCALE_ 619
#define ZOOM_ 620




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
#line 887 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 900 "frame/parser.C"

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
#define YYLAST   5750

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  370
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  230
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1330
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2927

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   620

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
       2,   369,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   367,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   368,   366,
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
     365
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    13,    17,    21,    24,    26,
      28,    31,    35,    39,    42,    45,    48,    51,    54,    57,
      60,    63,    66,    69,    72,    75,    77,    80,    84,    88,
      91,    94,    97,   101,   104,   107,   110,   113,   117,   120,
     124,   128,   131,   134,   137,   140,   143,   146,   148,   152,
     155,   158,   161,   163,   166,   169,   172,   174,   177,   179,
     182,   185,   188,   191,   193,   195,   197,   200,   203,   206,
     209,   212,   215,   218,   221,   224,   227,   229,   231,   233,
     235,   237,   239,   241,   243,   245,   246,   249,   252,   254,
     256,   257,   259,   261,   263,   265,   267,   269,   271,   274,
     277,   280,   283,   285,   287,   289,   291,   293,   295,   297,
     299,   301,   303,   305,   307,   309,   311,   313,   315,   317,
     319,   321,   323,   325,   327,   329,   331,   333,   335,   337,
     339,   341,   343,   345,   347,   349,   351,   353,   354,   356,
     358,   360,   362,   364,   365,   367,   369,   371,   373,   375,
     377,   379,   381,   383,   385,   387,   389,   391,   393,   395,
     397,   399,   400,   402,   404,   406,   408,   410,   412,   414,
     415,   417,   419,   420,   422,   424,   426,   427,   429,   431,
     432,   434,   436,   437,   439,   441,   442,   444,   446,   448,
     450,   452,   454,   456,   457,   459,   461,   463,   465,   467,
     469,   471,   473,   475,   477,   479,   481,   483,   485,   487,
     489,   491,   493,   495,   497,   498,   500,   502,   504,   505,
     507,   509,   511,   513,   515,   518,   521,   524,   527,   530,
     533,   536,   539,   542,   544,   547,   550,   552,   555,   558,
     560,   563,   566,   569,   576,   579,   584,   587,   590,   593,
     597,   600,   603,   605,   608,   610,   613,   618,   624,   627,
     631,   637,   644,   646,   648,   650,   658,   670,   679,   692,
     694,   697,   700,   702,   704,   707,   710,   713,   716,   720,
     724,   727,   730,   732,   734,   736,   738,   740,   742,   744,
     747,   750,   753,   755,   759,   762,   765,   768,   774,   784,
     794,   804,   806,   809,   811,   817,   827,   837,   847,   849,
     852,   855,   858,   861,   864,   867,   881,   895,   909,   923,
     936,   949,   962,   975,   977,   978,   980,   982,   987,   994,
     996,   998,  1000,  1002,  1004,  1006,  1008,  1010,  1012,  1017,
    1021,  1026,  1027,  1034,  1043,  1046,  1050,  1054,  1058,  1059,
    1064,  1069,  1074,  1079,  1083,  1087,  1089,  1093,  1099,  1104,
    1109,  1113,  1116,  1117,  1119,  1121,  1123,  1125,  1127,  1131,
    1132,  1135,  1138,  1141,  1144,  1147,  1150,  1153,  1156,  1159,
    1162,  1165,  1168,  1171,  1174,  1176,  1179,  1182,  1185,  1190,
    1194,  1197,  1200,  1203,  1206,  1209,  1211,  1215,  1218,  1221,
    1223,  1226,  1235,  1238,  1240,  1243,  1245,  1248,  1250,  1255,
    1259,  1262,  1264,  1272,  1281,  1289,  1298,  1300,  1302,  1304,
    1307,  1309,  1311,  1314,  1316,  1317,  1320,  1323,  1325,  1326,
    1329,  1332,  1334,  1336,  1339,  1342,  1345,  1347,  1349,  1351,
    1353,  1355,  1357,  1358,  1360,  1363,  1365,  1370,  1376,  1377,
    1380,  1382,  1388,  1391,  1394,  1396,  1398,  1400,  1403,  1405,
    1408,  1410,  1412,  1413,  1415,  1417,  1418,  1420,  1426,  1433,
    1437,  1444,  1448,  1450,  1454,  1456,  1458,  1460,  1464,  1471,
    1479,  1485,  1488,  1490,  1496,  1501,  1503,  1507,  1508,  1510,
    1513,  1515,  1520,  1522,  1525,  1527,  1530,  1534,  1537,  1539,
    1542,  1544,  1549,  1552,  1554,  1556,  1560,  1562,  1565,  1569,
    1572,  1573,  1575,  1577,  1582,  1585,  1586,  1588,  1592,  1597,
    1602,  1603,  1605,  1607,  1609,  1611,  1613,  1615,  1617,  1619,
    1621,  1623,  1625,  1627,  1629,  1631,  1633,  1635,  1637,  1639,
    1641,  1643,  1645,  1648,  1650,  1653,  1655,  1658,  1661,  1664,
    1667,  1669,  1671,  1673,  1674,  1676,  1677,  1679,  1680,  1682,
    1683,  1685,  1686,  1689,  1692,  1693,  1695,  1698,  1700,  1707,
    1713,  1715,  1717,  1719,  1722,  1725,  1728,  1730,  1732,  1734,
    1736,  1739,  1741,  1743,  1745,  1748,  1750,  1752,  1754,  1757,
    1760,  1763,  1764,  1766,  1767,  1769,  1771,  1773,  1775,  1777,
    1779,  1781,  1783,  1786,  1789,  1792,  1794,  1797,  1800,  1803,
    1808,  1811,  1814,  1819,  1823,  1825,  1828,  1831,  1836,  1842,
    1844,  1855,  1857,  1860,  1864,  1868,  1871,  1874,  1877,  1880,
    1883,  1886,  1889,  1894,  1899,  1904,  1908,  1912,  1918,  1923,
    1928,  1933,  1937,  1941,  1945,  1949,  1952,  1955,  1960,  1964,
    1968,  1972,  1976,  1981,  1986,  1991,  1996,  2002,  2007,  2014,
    2022,  2027,  2032,  2038,  2041,  2045,  2049,  2053,  2056,  2060,
    2064,  2068,  2072,  2077,  2081,  2087,  2094,  2098,  2102,  2107,
    2111,  2115,  2119,  2123,  2127,  2133,  2137,  2141,  2146,  2150,
    2153,  2156,  2158,  2162,  2167,  2172,  2177,  2182,  2187,  2194,
    2199,  2204,  2210,  2215,  2220,  2225,  2230,  2236,  2241,  2248,
    2256,  2261,  2266,  2272,  2278,  2284,  2290,  2296,  2302,  2310,
    2316,  2322,  2329,  2334,  2339,  2344,  2349,  2354,  2361,  2366,
    2371,  2377,  2383,  2389,  2395,  2401,  2408,  2414,  2422,  2431,
    2437,  2443,  2450,  2454,  2458,  2462,  2466,  2471,  2475,  2481,
    2488,  2492,  2496,  2501,  2505,  2509,  2513,  2517,  2521,  2527,
    2531,  2535,  2540,  2545,  2550,  2554,  2560,  2565,  2570,  2573,
    2577,  2584,  2591,  2593,  2595,  2597,  2600,  2603,  2606,  2609,
    2613,  2617,  2620,  2633,  2636,  2639,  2642,  2644,  2648,  2653,
    2656,  2657,  2661,  2663,  2666,  2669,  2672,  2675,  2678,  2683,
    2688,  2693,  2697,  2702,  2708,  2717,  2724,  2734,  2741,  2749,
    2760,  2772,  2785,  2795,  2801,  2808,  2812,  2816,  2822,  2828,
    2835,  2841,  2846,  2856,  2867,  2879,  2889,  2896,  2903,  2910,
    2917,  2924,  2931,  2938,  2945,  2952,  2960,  2968,  2971,  2976,
    2981,  2986,  2991,  2997,  3002,  3007,  3013,  3019,  3023,  3028,
    3033,  3038,  3046,  3056,  3063,  3074,  3086,  3099,  3109,  3113,
    3116,  3120,  3126,  3134,  3139,  3143,  3147,  3154,  3162,  3170,
    3175,  3180,  3190,  3195,  3199,  3204,  3212,  3220,  3223,  3227,
    3231,  3235,  3240,  3243,  3246,  3251,  3262,  3266,  3268,  3272,
    3275,  3278,  3281,  3284,  3288,  3294,  3299,  3305,  3308,  3311,
    3314,  3317,  3321,  3325,  3328,  3331,  3334,  3338,  3341,  3345,
    3350,  3354,  3358,  3365,  3370,  3373,  3377,  3380,  3383,  3388,
    3392,  3396,  3399,  3403,  3405,  3408,  3410,  3413,  3416,  3419,
    3421,  3423,  3425,  3427,  3430,  3432,  3435,  3438,  3440,  3443,
    3446,  3448,  3451,  3453,  3455,  3457,  3459,  3461,  3463,  3465,
    3467,  3468,  3470,  3473,  3476,  3479,  3483,  3489,  3497,  3505,
    3512,  3519,  3526,  3533,  3539,  3546,  3553,  3560,  3567,  3574,
    3581,  3588,  3600,  3608,  3616,  3624,  3634,  3644,  3655,  3668,
    3681,  3684,  3687,  3691,  3696,  3701,  3706,  3707,  3709,  3711,
    3716,  3721,  3723,  3725,  3727,  3729,  3731,  3733,  3735,  3737,
    3740,  3742,  3744,  3746,  3750,  3754,  3763,  3770,  3781,  3789,
    3797,  3803,  3806,  3809,  3813,  3818,  3824,  3830,  3836,  3840,
    3845,  3851,  3857,  3863,  3869,  3872,  3876,  3880,  3886,  3890,
    3894,  3898,  3903,  3909,  3915,  3921,  3927,  3931,  3936,  3942,
    3948,  3951,  3954,  3958,  3964,  3971,  3978,  3982,  3986,  3993,
    3999,  4005,  4008,  4012,  4016,  4022,  4029,  4033,  4036,  4039,
    4043,  4046,  4050,  4053,  4057,  4063,  4070,  4073,  4076,  4079,
    4081,  4086,  4091,  4093,  4096,  4099,  4102,  4105,  4108,  4111,
    4114,  4118,  4121,  4125,  4128,  4132,  4134,  4136,  4138,  4140,
    4142,  4143,  4146,  4147,  4150,  4151,  4153,  4154,  4155,  4157,
    4159,  4161,  4163,  4165,  4173,  4182,  4185,  4192,  4195,  4202,
    4205,  4209,  4212,  4214,  4216,  4220,  4224,  4226,  4231,  4234,
    4236,  4240,  4244,  4248,  4253,  4257,  4261,  4265,  4267,  4269,
    4271,  4273,  4275,  4277,  4279,  4281,  4283,  4285,  4287,  4289,
    4291,  4293,  4295,  4298,  4299,  4300,  4303,  4310,  4318,  4321,
    4323,  4327,  4329,  4333,  4335,  4337,  4339,  4342,  4345,  4347,
    4351,  4352,  4353,  4356,  4359,  4361,  4365,  4371,  4373,  4376,
    4379,  4382,  4386,  4389,  4392,  4395,  4398,  4400,  4402,  4404,
    4406,  4411,  4414,  4418,  4422,  4425,  4429,  4432,  4435,  4438,
    4442,  4446,  4450,  4453,  4457,  4459,  4463,  4467,  4469,  4472,
    4475,  4478,  4481,  4491,  4498,  4500,  4502,  4504,  4506,  4509,
    4512,  4516,  4520,  4522,  4525,  4529,  4533,  4535,  4538,  4540,
    4542,  4544,  4546,  4548,  4551,  4554,  4559,  4561,  4564,  4567,
    4570,  4574,  4576,  4578,  4580,  4583,  4586,  4589,  4592,  4595,
    4599,  4603,  4607,  4611,  4615,  4619,  4623,  4625,  4628,  4631,
    4634,  4638,  4641,  4645,  4649,  4652,  4655,  4658,  4661,  4664,
    4667,  4670,  4673,  4676,  4679,  4682,  4685,  4688,  4691,  4695,
    4699,  4703,  4706,  4709,  4712,  4715,  4718,  4721,  4724,  4727,
    4730,  4733,  4736,  4739,  4743,  4747,  4751,  4756,  4763,  4766,
    4768,  4770,  4772,  4774,  4776,  4777,  4783,  4785,  4792,  4796,
    4798,  4801,  4804,  4807,  4811,  4815,  4818,  4821,  4824,  4827,
    4830,  4833,  4837,  4840,  4843,  4847,  4849,  4853,  4858,  4861,
    4863,  4866,  4872,  4879,  4886,  4889,  4891,  4894,  4897,  4903,
    4910
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     371,     0,    -1,    98,   373,    -1,    43,   409,    -1,    40,
      67,     5,    -1,    40,    67,   400,    -1,    40,    67,   374,
      -1,    46,   414,    -1,    60,    -1,    65,    -1,    66,   416,
      -1,    68,   301,     5,    -1,    68,   301,   400,    -1,    69,
     421,    -1,    70,   423,    -1,    78,   424,    -1,    85,   433,
      -1,    87,   435,    -1,    88,   436,    -1,    97,   374,    -1,
     120,   438,    -1,   129,   439,    -1,   142,   440,    -1,   147,
     486,    -1,   150,   489,    -1,   154,    -1,   155,   374,    -1,
     155,    67,     5,    -1,   155,    67,   400,    -1,   159,   495,
      -1,   160,   496,    -1,   164,   497,    -1,   170,    15,     4,
      -1,   186,   500,    -1,   189,   518,    -1,   190,   519,    -1,
     191,   520,    -1,   194,   536,   521,    -1,   195,   556,    -1,
     209,    67,     5,    -1,   209,    67,   400,    -1,   226,   557,
      -1,   227,   558,    -1,   228,   561,    -1,   249,    89,    -1,
     242,   563,    -1,   240,   562,    -1,   258,    -1,   254,   536,
     565,    -1,   260,   570,    -1,   262,   571,    -1,   268,   573,
      -1,   282,    -1,   288,   588,    -1,   304,     4,    -1,   305,
     404,    -1,   316,    -1,   318,   590,    -1,   324,    -1,   327,
     592,    -1,   328,   593,    -1,   358,   597,    -1,   365,   598,
      -1,     3,    -1,     4,    -1,   374,    -1,   204,   374,    -1,
     229,   374,    -1,   231,   374,    -1,   328,   374,    -1,    43,
     374,    -1,    46,   374,    -1,    77,   374,    -1,    85,   374,
      -1,   148,   374,    -1,   260,   374,    -1,     4,    -1,   361,
      -1,   366,    -1,   223,    -1,   312,    -1,   214,    -1,   367,
      -1,   222,    -1,   122,    -1,    -1,   261,    37,    -1,   138,
      37,    -1,   261,    -1,   138,    -1,    -1,   377,    -1,   372,
      -1,     6,    -1,     7,    -1,     8,    -1,     9,    -1,    10,
      -1,   378,   378,    -1,   379,   380,    -1,   380,   380,    -1,
     372,   372,    -1,   165,    -1,   233,    -1,   103,    -1,    18,
      -1,   383,    -1,   328,    -1,   329,    -1,   330,    -1,   331,
      -1,   332,    -1,   333,    -1,   334,    -1,   335,    -1,   336,
      -1,   337,    -1,   338,    -1,   339,    -1,   340,    -1,   341,
      -1,   342,    -1,   343,    -1,   344,    -1,   345,    -1,   346,
      -1,   347,    -1,   348,    -1,   349,    -1,   350,    -1,   351,
      -1,   352,    -1,   353,    -1,   354,    -1,   355,    -1,    57,
      -1,   228,    -1,    -1,   362,    -1,   217,    -1,   209,    -1,
     216,    -1,   252,    -1,    -1,   291,    -1,   273,    -1,    92,
      -1,   179,    -1,   184,    -1,   188,    -1,   241,    -1,   292,
      -1,   293,    -1,    27,    -1,   284,    -1,   156,    -1,    29,
      -1,   270,    -1,   264,    -1,    96,    -1,   171,    -1,    -1,
     131,    -1,    34,    -1,   132,    -1,   172,    -1,   162,    -1,
     140,    -1,   108,    -1,    -1,    99,    -1,   277,    -1,    -1,
      99,    -1,    23,    -1,    24,    -1,    -1,   281,    -1,   173,
      -1,    -1,    16,    -1,   167,    -1,    -1,   165,    -1,   195,
      -1,    -1,    63,    -1,    49,    -1,   104,    -1,    86,    -1,
     368,    -1,    26,    -1,    52,    -1,    -1,     4,    -1,   253,
      -1,   146,    -1,    47,    -1,   161,    -1,   267,    -1,   320,
      -1,   161,    -1,   180,    -1,   267,    -1,   253,    -1,   146,
      -1,    47,    -1,   145,    -1,    83,    -1,   157,    -1,   235,
      -1,   236,    -1,   250,    -1,   295,    -1,    -1,    31,    -1,
     297,    -1,   196,    -1,    -1,   210,    -1,    41,    -1,    42,
      -1,   181,    -1,   182,    -1,   322,   408,    -1,    48,   405,
      -1,    75,   406,    -1,   155,   407,    -1,   198,   568,    -1,
      36,   569,    -1,   269,   372,    -1,   298,     4,    -1,   306,
     372,    -1,   374,    -1,    67,     5,    -1,    67,   400,    -1,
     374,    -1,    67,     5,    -1,    67,   400,    -1,   374,    -1,
      67,     5,    -1,    67,   400,    -1,   372,   372,    -1,   237,
     372,   372,   372,   372,   372,    -1,    11,   410,    -1,    72,
       5,     5,     5,    -1,   102,     4,    -1,   121,   411,    -1,
     139,   412,    -1,    54,   285,     4,    -1,   309,   413,    -1,
     125,     5,    -1,    60,    -1,   372,   372,    -1,   372,    -1,
     372,   372,    -1,   372,    11,   372,   372,    -1,   372,   372,
      11,   372,   372,    -1,   309,   372,    -1,   309,   372,   372,
      -1,   309,   372,    11,   372,   372,    -1,   309,   372,   372,
      11,   372,   372,    -1,    31,    -1,   297,    -1,   127,    -1,
     372,   372,    11,    60,     5,     5,     5,    -1,   372,   372,
       4,   372,   372,    11,    60,     5,     5,     5,     5,    -1,
     372,   372,    11,   372,   372,     5,     5,     5,    -1,   372,
     372,     4,   372,   372,    11,   372,   372,     5,     5,     5,
       5,    -1,   372,    -1,   372,   372,    -1,   309,   415,    -1,
     127,    -1,   372,    -1,   372,   372,    -1,   272,   417,    -1,
     205,   418,    -1,   199,   419,    -1,   319,   372,   372,    -1,
     319,   209,   209,    -1,   364,   420,    -1,   244,   374,    -1,
     143,    -1,   187,    -1,   372,    -1,   199,    -1,   364,    -1,
     363,    -1,   319,    -1,     4,   388,    -1,   205,   388,    -1,
     264,     4,    -1,   257,    -1,   372,     4,     4,    -1,    79,
     372,    -1,   264,     4,    -1,   183,     4,    -1,     4,   372,
     372,     4,     4,    -1,   260,   372,   372,   372,   372,   372,
     372,     4,     4,    -1,   159,   372,   372,   372,   372,   372,
     372,     4,     4,    -1,   160,   372,   372,   372,   372,   372,
     372,     4,     4,    -1,    39,    -1,   206,   422,    -1,   113,
      -1,     4,   372,   372,     4,     4,    -1,   260,   372,   372,
     372,   372,   372,   372,     4,     4,    -1,   159,   372,   372,
     372,   372,   372,   372,     4,     4,    -1,   160,   372,   372,
     372,   372,   372,   372,     4,     4,    -1,   387,    -1,   188,
     372,    -1,    84,   425,    -1,   101,   426,    -1,   186,   427,
      -1,   230,   431,    -1,   268,   432,    -1,     5,     4,     4,
     430,     4,     4,   387,   372,   428,   429,   372,   372,     5,
      -1,   400,     4,     4,   430,     4,     4,   387,   372,   428,
     429,   372,   372,     5,    -1,     5,     4,     4,   430,     4,
       4,   387,   372,   372,   429,   372,   372,     5,    -1,   400,
       4,     4,   430,     4,     4,   387,   372,   372,   429,   372,
     372,     5,    -1,     5,     4,     4,   430,     4,     4,   387,
     372,   428,   372,   372,     5,    -1,   400,     4,     4,   430,
       4,     4,   387,   372,   428,   372,   372,     5,    -1,     5,
       4,     4,   430,     4,     4,   387,   372,   372,   372,   372,
       5,    -1,   400,     4,     4,   430,     4,     4,   387,   372,
     372,   372,   372,     5,    -1,   239,    -1,    -1,    30,    -1,
       5,    -1,     5,     5,     4,   374,    -1,     5,     4,   374,
       5,   382,   389,    -1,   199,    -1,   364,    -1,   363,    -1,
     319,    -1,   143,    -1,   187,    -1,   288,    -1,    46,    -1,
       5,    -1,     5,     5,     4,   374,    -1,     5,   382,   389,
      -1,    30,     5,   382,   389,    -1,    -1,   372,   372,   372,
     372,   382,   389,    -1,    60,   381,   382,   389,   372,   372,
     382,   391,    -1,   305,   434,    -1,    39,   372,   372,    -1,
     206,   372,   372,    -1,   113,   372,   372,    -1,    -1,   372,
     372,   382,   389,    -1,    39,   372,   372,     4,    -1,   206,
     372,   372,     4,    -1,   113,   372,   372,     4,    -1,   384,
     372,   372,    -1,   382,   389,   381,    -1,   374,    -1,   327,
     372,   372,    -1,    39,   206,   384,   372,   372,    -1,   206,
     384,   372,   372,    -1,    39,   206,   382,   381,    -1,   206,
     382,   381,    -1,    32,     4,    -1,    -1,    31,    -1,   297,
      -1,   196,    -1,   372,    -1,    65,    -1,   150,   119,     5,
      -1,    -1,    40,    67,    -1,    43,   443,    -1,    46,   445,
      -1,    66,   446,    -1,    69,   450,    -1,    68,   449,    -1,
      70,   452,    -1,    78,   454,    -1,    80,   457,    -1,    85,
     458,    -1,    87,   459,    -1,    89,   461,    -1,    88,   460,
      -1,    95,   462,    -1,    97,    -1,   128,   466,    -1,   147,
     472,    -1,   155,    67,    -1,   157,     5,     5,     4,    -1,
     158,    90,   441,    -1,   159,   473,    -1,   160,   474,    -1,
     164,   464,    -1,   168,   463,    -1,   170,    15,    -1,   199,
      -1,   194,   536,   530,    -1,   195,   475,    -1,   209,    67,
      -1,   226,    -1,   227,   476,    -1,   234,   300,   384,   372,
     372,     4,     4,     5,    -1,   260,   477,    -1,   262,    -1,
     288,   478,    -1,   304,    -1,   305,   479,    -1,   313,    -1,
     320,   384,   372,   372,    -1,   326,    90,   442,    -1,   328,
     484,    -1,   365,    -1,     5,     5,   372,   372,   384,     4,
     437,    -1,     5,     5,   372,   372,   382,   389,     4,   437,
      -1,     5,     5,   372,   372,   384,     4,   437,    -1,     5,
       5,   372,   372,   382,   389,     4,   437,    -1,   102,    -1,
     121,    -1,   139,    -1,    54,   285,    -1,    89,    -1,   125,
      -1,    72,   444,    -1,   185,    -1,    -1,   199,     5,    -1,
     105,     5,    -1,   121,    -1,    -1,   428,   429,    -1,   372,
     429,    -1,   272,    -1,   205,    -1,   199,   447,    -1,   319,
     178,    -1,   364,   448,    -1,   244,    -1,   205,    -1,   264,
      -1,    79,    -1,   264,    -1,   183,    -1,    -1,   301,    -1,
     178,   451,    -1,     4,    -1,     4,   384,   372,   372,    -1,
       4,   372,   372,   387,   372,    -1,    -1,   178,   453,    -1,
     188,    -1,     4,   372,   372,   387,   372,    -1,   382,   389,
      -1,    66,   455,    -1,    67,    -1,    93,    -1,   178,    -1,
     220,   178,    -1,   198,    -1,    70,   456,    -1,   288,    -1,
     357,    -1,    -1,   205,    -1,   272,    -1,    -1,   188,    -1,
     372,   372,   382,   389,   390,    -1,   384,   372,   372,   382,
     389,   390,    -1,   382,   389,   390,    -1,    60,   382,   389,
     390,   382,   391,    -1,   305,   382,   389,    -1,   384,    -1,
     382,   389,   390,    -1,   296,    -1,    32,    -1,   384,    -1,
     382,   389,   390,    -1,   382,   389,   381,   372,   372,     5,
      -1,     4,   382,   389,   381,   372,   372,     5,    -1,   384,
     372,   372,     4,     4,    -1,     5,   375,    -1,    66,    -1,
     384,   372,   372,     5,   375,    -1,     4,     4,     4,     4,
      -1,    89,    -1,   123,   208,   465,    -1,    -1,     4,    -1,
     372,   372,    -1,   211,    -1,    60,   382,   389,   390,    -1,
      82,    -1,   102,   469,    -1,    44,    -1,   119,   467,    -1,
     123,   208,   470,    -1,   152,   468,    -1,   153,    -1,   221,
     208,    -1,   285,    -1,   285,   382,   389,   391,    -1,   286,
     471,    -1,   357,    -1,     4,    -1,   384,   372,   372,    -1,
       4,    -1,   174,     5,    -1,     4,   174,     5,    -1,   328,
       4,    -1,    -1,     4,    -1,   375,    -1,   375,   384,   372,
     372,    -1,   375,     4,    -1,    -1,     4,    -1,   136,   165,
     382,    -1,   136,   165,     4,   382,    -1,   309,   165,   372,
     382,    -1,    -1,   225,    -1,   321,    -1,    62,    -1,   299,
      -1,   322,    -1,    62,    -1,   299,    -1,   322,    -1,    67,
      -1,   193,    -1,   252,    -1,   299,    -1,   308,    -1,    82,
      -1,    45,    -1,   244,    -1,    62,    -1,   299,    -1,   322,
      -1,   139,    -1,   251,    -1,   251,   200,    -1,   283,    -1,
     283,   200,    -1,    20,    -1,   322,   483,    -1,    48,   480,
      -1,    75,   481,    -1,   155,   482,    -1,   198,    -1,    36,
      -1,   269,    -1,    -1,    67,    -1,    -1,    67,    -1,    -1,
      67,    -1,    -1,   237,    -1,    -1,    15,   485,    -1,   208,
     383,    -1,    -1,   238,    -1,    84,   487,    -1,   101,    -1,
     382,   389,   390,   488,     5,     5,    -1,   382,   389,   390,
     488,     5,    -1,    19,    -1,   247,    -1,    18,    -1,    40,
      67,    -1,    43,   490,    -1,    78,   491,    -1,    85,    -1,
      96,    -1,    97,    -1,   103,    -1,   128,   492,    -1,   147,
      -1,   164,    -1,   171,    -1,   194,   493,    -1,   233,    -1,
     165,    -1,   288,    -1,   299,   382,    -1,   328,   494,    -1,
      73,     5,    -1,    -1,    30,    -1,    -1,    43,    -1,    88,
      -1,   204,    -1,   155,    -1,   275,    -1,   230,    -1,   314,
      -1,   382,    -1,    59,   382,    -1,   117,   382,    -1,   184,
     382,    -1,    17,    -1,   305,   382,    -1,    62,   398,    -1,
     299,   382,    -1,   322,     4,     4,     4,    -1,    62,   399,
      -1,   299,   382,    -1,   322,     4,     4,     4,    -1,   212,
       4,     4,    -1,   118,    -1,   197,     5,    -1,    89,   499,
      -1,   276,   123,   208,   498,    -1,   276,     4,     4,     4,
       4,    -1,   318,    -1,   328,   372,   372,   372,   372,   372,
     372,   372,   372,     4,    -1,     5,    -1,     5,     4,    -1,
       4,     4,    57,    -1,     4,     4,   382,    -1,   205,   374,
      -1,    25,   501,    -1,   114,   503,    -1,   128,   504,    -1,
     167,   517,    -1,   219,   515,    -1,   232,   516,    -1,     5,
      13,     5,   394,    -1,     5,    14,     5,   394,    -1,     5,
      62,     5,   394,    -1,     5,   202,   394,    -1,     5,   203,
     394,    -1,     5,   279,   392,     4,   394,    -1,     5,   289,
       4,   394,    -1,     5,   290,     4,   394,    -1,     5,   321,
       5,   394,    -1,   260,    88,   502,    -1,     5,    13,     5,
      -1,     5,    14,     5,    -1,     5,    62,     5,    -1,     5,
     202,    -1,     5,   203,    -1,     5,   279,   392,     4,    -1,
       5,   289,     4,    -1,     5,   290,     4,    -1,     5,   321,
       5,    -1,     5,     5,   287,    -1,     5,    13,     5,   394,
      -1,     5,    14,     5,   394,    -1,     5,    62,     5,   394,
      -1,     5,   202,   393,   394,    -1,     5,     5,   287,   393,
     394,    -1,     5,   203,   393,   394,    -1,     5,   279,   392,
       4,   393,   394,    -1,     5,   294,   392,     4,     4,   393,
     394,    -1,     5,   289,     4,   394,    -1,     5,   290,     4,
     394,    -1,     5,   321,     5,   393,   394,    -1,   286,   505,
      -1,   119,    88,   506,    -1,   260,   165,   514,    -1,   260,
      88,   513,    -1,   204,   507,    -1,     5,    13,     5,    -1,
       5,    14,     5,    -1,     5,    62,     5,    -1,     5,   202,
     393,    -1,     5,     5,   287,   393,    -1,     5,   203,   393,
      -1,     5,   279,   392,     4,   393,    -1,     5,   294,   392,
       4,     4,   393,    -1,     5,   289,     4,    -1,     5,   290,
       4,    -1,     5,   321,     5,   393,    -1,     5,    13,     5,
      -1,     5,    14,     5,    -1,     5,    62,     5,    -1,     5,
     202,   393,    -1,     5,   203,   393,    -1,     5,   279,   392,
       4,   393,    -1,     5,   289,     4,    -1,     5,   290,     4,
      -1,     5,   321,     5,   393,    -1,   165,   170,   508,    -1,
     170,   509,    -1,   165,   510,    -1,   512,    -1,   165,   356,
     511,    -1,     5,    13,     5,   394,    -1,     5,    14,     5,
     394,    -1,     5,    62,     5,   394,    -1,     5,   202,   393,
     394,    -1,     5,   203,   393,   394,    -1,     5,   279,   392,
       4,   393,   394,    -1,     5,   289,     4,   394,    -1,     5,
     290,     4,   394,    -1,     5,   321,     5,   393,   394,    -1,
       5,    13,     5,   394,    -1,     5,    14,     5,   394,    -1,
       5,    62,     5,   394,    -1,     5,   202,   393,   394,    -1,
       5,     5,   287,   393,   394,    -1,     5,   203,   393,   394,
      -1,     5,   279,   392,     4,   393,   394,    -1,     5,   294,
     392,     4,     4,   393,   394,    -1,     5,   289,     4,   394,
      -1,     5,   290,     4,   394,    -1,     5,   321,     5,   393,
     394,    -1,   383,     5,    13,     5,   394,    -1,   383,     5,
      14,     5,   394,    -1,   383,     5,    62,     5,   394,    -1,
     383,     5,   202,   393,   394,    -1,   383,     5,   203,   393,
     394,    -1,   383,     5,   279,   392,     4,   393,   394,    -1,
     383,     5,   289,     4,   394,    -1,   383,     5,   290,     4,
     394,    -1,   383,     5,   321,     5,   393,   394,    -1,     5,
      13,     5,   394,    -1,     5,    14,     5,   394,    -1,     5,
      62,     5,   394,    -1,     5,   202,   393,   394,    -1,     5,
     203,   393,   394,    -1,     5,   279,   392,     4,   393,   394,
      -1,     5,   289,     4,   394,    -1,     5,   290,     4,   394,
      -1,     5,   321,     5,   393,   394,    -1,   383,     5,    13,
       5,   394,    -1,   383,     5,    14,     5,   394,    -1,   383,
       5,    62,     5,   394,    -1,   383,     5,   202,   393,   394,
      -1,   383,     5,     5,   287,   393,   394,    -1,   383,     5,
     203,   393,   394,    -1,   383,     5,   279,   392,     4,   393,
     394,    -1,   383,     5,   294,   392,     4,     4,   393,   394,
      -1,   383,     5,   289,     4,   394,    -1,   383,     5,   290,
       4,   394,    -1,   383,     5,   321,     5,   393,   394,    -1,
       5,    13,     5,    -1,     5,    14,     5,    -1,     5,    62,
       5,    -1,     5,   202,   393,    -1,     5,     5,   287,   393,
      -1,     5,   203,   393,    -1,     5,   279,   392,     4,   393,
      -1,     5,   294,   392,     4,     4,   393,    -1,     5,   289,
       4,    -1,     5,   290,     4,    -1,     5,   321,     5,   393,
      -1,     5,    13,     5,    -1,     5,    14,     5,    -1,     5,
      62,     5,    -1,     5,   202,   393,    -1,     5,   203,   393,
      -1,     5,   279,   392,     4,   393,    -1,     5,   289,     4,
      -1,     5,   290,     4,    -1,     5,   321,     5,   393,    -1,
       5,    13,     5,   394,    -1,     5,    62,     5,   394,    -1,
       5,   202,   394,    -1,     5,   279,   392,     4,   394,    -1,
       5,   289,     4,   394,    -1,     5,   321,     5,   394,    -1,
       5,     5,    -1,   286,     5,     5,    -1,    95,     4,     4,
       4,     4,     4,    -1,   199,     4,     4,     4,     4,     4,
      -1,   113,    -1,   243,    -1,   374,    -1,   144,   374,    -1,
      89,   374,    -1,    67,     5,    -1,    67,   400,    -1,     5,
       4,     4,    -1,   318,   372,   372,    -1,   365,   372,    -1,
       5,     5,   383,   389,     5,     5,   383,   389,   372,   383,
     391,     5,    -1,    61,   524,    -1,    67,     5,    -1,    67,
     400,    -1,    81,    -1,    74,   529,     5,    -1,    74,   529,
     321,     5,    -1,    76,   101,    -1,    -1,    84,   522,   525,
      -1,    90,    -1,   101,   527,    -1,   107,   528,    -1,   116,
       4,    -1,   133,     5,    -1,   155,    16,    -1,   155,   224,
     372,   372,    -1,   155,   310,   372,   372,    -1,     4,    19,
     401,   374,    -1,     4,    20,   377,    -1,     4,    20,   377,
     384,    -1,     4,    20,   377,   382,   389,    -1,     4,    21,
     251,   372,   372,     4,   382,   391,    -1,     4,    21,   251,
       5,   382,   391,    -1,     4,    50,   251,   372,   372,   372,
       4,   382,   391,    -1,     4,    50,   251,     5,   382,   391,
      -1,     4,    49,   251,   372,   372,   382,   391,    -1,     4,
      53,   107,   377,   377,     4,   372,   372,   372,     4,    -1,
       4,    53,   107,   377,   377,     4,   372,   372,   372,     4,
     384,    -1,     4,    53,   107,   377,   377,     4,   372,   372,
     372,     4,   382,   389,    -1,     4,    53,   107,     5,     5,
     382,   389,   382,   391,    -1,     4,    56,   523,     5,     5,
      -1,     4,    63,   251,   372,   382,   391,    -1,     4,    67,
       5,    -1,     4,    67,   400,    -1,     4,    75,    26,   374,
     374,    -1,     4,    75,   175,     5,     5,    -1,     4,    75,
     251,   372,   382,   391,    -1,     4,    75,   299,   382,   389,
      -1,     4,    76,   143,   374,    -1,     4,    83,   107,   377,
     377,     4,   372,   372,     4,    -1,     4,    83,   107,   377,
     377,     4,   372,   372,     4,   384,    -1,     4,    83,   107,
     377,   377,     4,   372,   372,     4,   382,   389,    -1,     4,
      83,   107,     5,     5,   382,   389,   382,   391,    -1,     4,
      84,    21,   251,   372,   372,    -1,     4,    84,    50,   251,
     372,   372,    -1,     4,    84,    53,    20,   372,   372,    -1,
       4,    84,    53,   251,   372,   372,    -1,     4,    84,   112,
     251,   372,   372,    -1,     4,    84,   115,    20,   372,   372,
      -1,     4,    84,   115,   251,   372,   372,    -1,     4,    84,
      83,    20,   372,   372,    -1,     4,    84,    83,   251,   372,
     372,    -1,     4,    84,   239,   325,     4,   372,   372,    -1,
       4,    84,   274,   325,     4,   372,   372,    -1,     4,   101,
      -1,     4,   101,    21,     4,    -1,     4,   101,    50,     4,
      -1,     4,   101,    53,     4,    -1,     4,   101,   112,     4,
      -1,     4,   101,    56,   523,     5,    -1,     4,   101,   115,
       4,    -1,     4,   101,    83,     4,    -1,     4,   101,   239,
     325,     4,    -1,     4,   101,   274,   325,     4,    -1,     4,
     101,   301,    -1,     4,   101,   301,     5,    -1,     4,   101,
     301,     4,    -1,     4,   107,    39,     4,    -1,     4,   111,
     251,   372,   372,   382,   391,    -1,     4,   112,   251,   372,
     372,   372,     4,   382,   391,    -1,     4,   112,   251,     5,
     382,   391,    -1,     4,   115,   107,   377,   377,     4,   372,
     372,   372,     4,    -1,     4,   115,   107,   377,   377,     4,
     372,   372,   372,     4,   384,    -1,     4,   115,   107,   377,
     377,     4,   372,   372,   372,     4,   382,   389,    -1,     4,
     115,   107,     5,     5,   382,   389,   382,   391,    -1,     4,
     133,     5,    -1,     4,   155,    -1,     4,   155,   224,    -1,
       4,   183,    26,   374,   374,    -1,     4,   183,   237,   382,
     389,   381,   381,    -1,     4,   207,   372,   372,    -1,     4,
     207,   137,    -1,     4,   207,    35,    -1,     4,   207,   309,
     382,   389,   381,    -1,     4,   239,   258,   372,   372,   382,
     391,    -1,     4,   274,   258,   372,   372,   382,   391,    -1,
       4,   237,   278,   395,    -1,     4,   237,   285,     4,    -1,
       4,   245,   382,   389,   381,   381,   372,   382,   391,    -1,
       4,   246,   542,   374,    -1,     4,   262,    39,    -1,     4,
     263,   134,     5,    -1,     4,   263,   237,   382,   389,   381,
     381,    -1,     4,   263,   299,   382,   389,   382,   391,    -1,
       4,   275,    -1,     4,   275,   224,    -1,     4,   301,     5,
      -1,     4,   303,     5,    -1,     4,   303,   262,   374,    -1,
       4,   315,    -1,     4,   317,    -1,     4,   323,    26,   374,
      -1,     4,   323,   237,   382,   389,   381,   382,   391,   372,
     377,    -1,     4,   357,     4,    -1,   173,    -1,   173,   372,
     372,    -1,   185,   537,    -1,   186,   538,    -1,   207,   539,
      -1,   244,   374,    -1,   246,   542,   374,    -1,   246,   542,
     374,   372,   372,    -1,   262,    39,   372,   372,    -1,   262,
     206,   372,   372,     4,    -1,   262,   113,    -1,   268,   546,
      -1,   275,   547,    -1,   282,   548,    -1,     5,    67,     5,
      -1,     5,    67,   400,    -1,     5,    81,    -1,     5,   101,
      -1,     5,    90,    -1,     5,   133,     5,    -1,     5,   155,
      -1,     5,   155,   224,    -1,     5,   207,   372,   372,    -1,
       5,   207,   137,    -1,     5,   207,    35,    -1,     5,   207,
     309,   382,   389,   381,    -1,     5,   246,   542,   374,    -1,
       5,   275,    -1,     5,   275,   224,    -1,     5,   315,    -1,
       5,   317,    -1,   301,   107,     5,     5,    -1,   301,   101,
       5,    -1,   301,   101,    16,    -1,   301,     5,    -1,   301,
     318,     5,    -1,   230,    -1,   230,   382,    -1,   314,    -1,
     315,    16,    -1,   317,    16,    -1,   357,     4,    -1,   275,
      -1,   317,    -1,   155,    -1,   315,    -1,    39,   207,    -1,
     207,    -1,   113,   207,    -1,    39,   107,    -1,   107,    -1,
     113,   107,    -1,    39,   262,    -1,   262,    -1,   113,   262,
      -1,   101,    -1,   303,    -1,    67,    -1,   357,    -1,   246,
      -1,   133,    -1,   173,    -1,   318,    -1,    -1,     4,    -1,
      29,   374,    -1,   251,   372,    -1,   169,     4,    -1,   225,
       4,   372,    -1,    63,   372,   372,   372,   543,    -1,   111,
     372,   372,   372,   372,   376,   543,    -1,    49,   372,   372,
     372,   372,   376,   543,    -1,   239,   372,   372,   372,   372,
     543,    -1,   274,   372,   372,   372,   372,   543,    -1,   183,
     372,   372,   372,   372,   543,    -1,   323,   372,   372,   372,
     372,   543,    -1,   303,   372,   372,   376,   543,    -1,    63,
     237,   372,   372,   396,   543,    -1,    49,   237,   372,   372,
     396,   543,    -1,   104,   237,   372,   372,   396,   543,    -1,
      86,   237,   372,   372,   396,   543,    -1,   368,   237,   372,
     372,   396,   543,    -1,    26,   237,   372,   372,   396,   543,
      -1,    52,   237,   372,   372,   396,   543,    -1,   263,   372,
     372,   372,   372,   382,   389,   382,   391,     5,   543,    -1,
      75,   372,   372,   372,   382,   389,   543,    -1,   245,   372,
     372,   372,   372,   372,   543,    -1,    21,   372,   372,   372,
     372,     4,   543,    -1,   112,   372,   372,   372,   372,   372,
       4,   376,   543,    -1,    50,   372,   372,   372,   372,   372,
       4,   376,   543,    -1,    83,   372,   372,   377,   377,     4,
     372,   372,     4,   543,    -1,   115,   372,   372,   377,   377,
       4,   372,   372,   372,     4,   376,   543,    -1,    53,   372,
     372,   377,   377,     4,   372,   372,   372,     4,   376,   543,
      -1,    76,   543,    -1,   302,   526,    -1,     5,   372,   372,
      -1,   321,     5,   372,   372,    -1,   372,   372,   321,     5,
      -1,     5,   382,   389,   381,    -1,    -1,   275,    -1,    16,
      -1,    39,   372,   372,     4,    -1,   206,   372,   372,     4,
      -1,   113,    -1,   106,    -1,   359,    -1,    64,    -1,   266,
      -1,   265,    -1,   248,    -1,   360,    -1,    61,   531,    -1,
      67,    -1,   133,    -1,   116,    -1,   149,   372,   372,    -1,
     163,   372,   372,    -1,     4,    19,    83,     5,     5,     5,
     382,     4,    -1,     4,    19,   157,     5,     5,     4,    -1,
       4,    19,   235,     5,     5,     5,     5,   382,   389,   402,
      -1,     4,    19,   236,     5,     5,   382,   402,    -1,     4,
      19,   250,     5,     5,     5,   382,    -1,     4,    19,   295,
     382,   389,    -1,   163,    16,    -1,     4,    20,    -1,     4,
      20,   384,    -1,     4,    20,   382,   389,    -1,     4,    21,
     251,   382,   391,    -1,     4,    50,   251,   382,   391,    -1,
       4,    49,   251,   382,   391,    -1,     4,    53,    20,    -1,
       4,    53,    20,   384,    -1,     4,    53,    20,   382,   389,
      -1,     4,    53,   251,   382,   391,    -1,     4,    60,   382,
     389,   390,    -1,     4,    63,   251,   382,   391,    -1,     4,
      67,    -1,     4,    75,    26,    -1,     4,    75,   175,    -1,
       4,    75,   251,   382,   391,    -1,     4,    75,   299,    -1,
       4,    76,   143,    -1,     4,    83,    20,    -1,     4,    83,
      20,   384,    -1,     4,    83,    20,   382,   389,    -1,     4,
      83,   251,   382,   391,    -1,     4,   111,   251,   382,   391,
      -1,     4,   112,   251,   382,   391,    -1,     4,   115,    20,
      -1,     4,   115,    20,   384,    -1,     4,   115,    20,   382,
     389,    -1,     4,   115,   251,   382,   391,    -1,     4,   133,
      -1,     4,   155,    -1,     4,   183,    26,    -1,     4,   183,
     177,   382,   391,    -1,     4,   183,   237,   382,   389,   390,
      -1,     4,   192,   177,   372,   382,   391,    -1,     4,   237,
     278,    -1,     4,   237,   285,    -1,     4,   245,   237,   382,
     389,   390,    -1,     4,   245,   177,   382,   391,    -1,     4,
     245,   307,   382,   391,    -1,     4,   246,    -1,     4,   246,
     542,    -1,     4,   263,   134,    -1,     4,   263,   177,   382,
     391,    -1,     4,   263,   237,   382,   389,   390,    -1,     4,
     263,   299,    -1,     4,   275,    -1,     4,   301,    -1,     4,
     301,     4,    -1,     4,   303,    -1,     4,   303,   262,    -1,
       4,   313,    -1,     4,   323,    26,    -1,     4,   323,   177,
     382,   391,    -1,     4,   323,   237,   382,   389,   390,    -1,
       4,   357,    -1,   155,   532,    -1,   155,   220,    -1,   220,
      -1,   239,   274,   372,   372,    -1,   274,   274,   372,   372,
      -1,   244,    -1,   246,   542,    -1,   275,   533,    -1,   275,
     220,    -1,   282,   534,    -1,     5,    67,    -1,     5,   133,
      -1,     5,   163,    -1,     5,   246,   542,    -1,     5,   301,
      -1,     5,   301,   220,    -1,   301,    16,    -1,   301,   100,
     208,    -1,   357,    -1,    29,    -1,   251,    -1,   169,    -1,
     225,    -1,    -1,   372,   372,    -1,    -1,   372,   372,    -1,
      -1,   303,    -1,    -1,    -1,   238,    -1,   254,    -1,   319,
      -1,    58,    -1,   135,    -1,   529,   382,   389,   390,   374,
     544,   551,    -1,   275,   529,   382,   389,   390,   374,   544,
     551,    -1,   529,     5,    -1,   529,     5,     4,     5,   382,
     389,    -1,   529,     4,    -1,   529,     4,     4,     5,   382,
     389,    -1,   128,     5,    -1,   128,     5,     5,    -1,   372,
     372,    -1,   137,    -1,    35,    -1,    39,   372,   372,    -1,
     206,   372,   372,    -1,   113,    -1,   309,   382,   389,   381,
      -1,   540,   541,    -1,   541,    -1,   542,   369,   374,    -1,
      67,   369,     5,    -1,    67,   369,   400,    -1,    94,   369,
       4,     4,    -1,   357,   369,     4,    -1,   133,   369,     5,
      -1,   303,   369,     5,    -1,   554,    -1,   555,    -1,   215,
      -1,   275,    -1,   155,    -1,    93,    -1,   130,    -1,   107,
      -1,   207,    -1,   262,    -1,   101,    -1,   166,    -1,   291,
      -1,   124,    -1,   535,    -1,   535,   540,    -1,    -1,    -1,
     545,   549,    -1,     5,   529,   382,   389,   390,   374,    -1,
     275,     5,   529,   382,   389,   390,   374,    -1,   302,     5,
      -1,    16,    -1,   224,   372,   372,    -1,   310,    -1,   310,
     372,   372,    -1,   126,    -1,   176,    -1,   374,    -1,   303,
     374,    -1,   549,   550,    -1,   550,    -1,   542,   369,   374,
      -1,    -1,    -1,   552,   553,    -1,   553,   554,    -1,   554,
      -1,   301,   369,     5,    -1,    56,   369,   523,     5,     5,
      -1,    65,    -1,    67,     5,    -1,    67,   400,    -1,   193,
     385,    -1,   252,   372,   372,    -1,   299,   382,    -1,   308,
     372,    -1,    45,   386,    -1,   193,     4,    -1,   368,    -1,
     366,    -1,   360,    -1,   215,    -1,   372,   372,   372,   372,
      -1,   372,   372,    -1,   384,   372,   372,    -1,   382,   389,
     381,    -1,   309,   559,    -1,    38,   372,   372,    -1,   206,
     560,    -1,   244,   374,    -1,   372,   372,    -1,   384,   372,
     372,    -1,   382,   389,   381,    -1,    39,   372,   372,    -1,
     372,   372,    -1,   113,   372,   372,    -1,   374,    -1,   328,
     383,   389,    -1,     5,     4,     4,    -1,   318,    -1,    71,
     564,    -1,   178,     4,    -1,   259,     4,    -1,   269,   372,
      -1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
      -1,     4,     4,     4,     4,     4,     4,    -1,    55,    -1,
     145,    -1,   260,    -1,    91,    -1,   155,   566,    -1,   275,
     567,    -1,    39,   372,   372,    -1,   206,   372,   372,    -1,
     113,    -1,   280,   113,    -1,    39,   372,   372,    -1,   206,
     372,   372,    -1,   113,    -1,   280,   113,    -1,   201,    -1,
      12,    -1,   215,    -1,    33,    -1,   109,    -1,    62,   397,
      -1,   299,   382,    -1,   322,     4,     4,     4,    -1,   372,
      -1,   372,    99,    -1,   206,   572,    -1,   309,   372,    -1,
     309,   372,    99,    -1,    39,    -1,   372,    -1,   113,    -1,
      25,   574,    -1,   128,   576,    -1,   219,   586,    -1,   114,
     587,    -1,   232,     5,    -1,   123,     5,   403,    -1,    62,
       5,   403,    -1,   289,     4,   403,    -1,   260,    88,   575,
      -1,   123,     5,   403,    -1,    62,     5,   403,    -1,   289,
       4,   403,    -1,   577,    -1,   165,   577,    -1,   300,   578,
      -1,   286,   579,    -1,   119,    88,   580,    -1,   204,   581,
      -1,   260,   165,   583,    -1,   260,    88,   584,    -1,   256,
     585,    -1,   123,     5,    -1,    62,     5,    -1,   289,     4,
      -1,   123,     5,    -1,    62,     5,    -1,   289,     4,    -1,
     123,     5,    -1,    62,     5,    -1,   289,     4,    -1,   123,
       5,    -1,    62,     5,    -1,   289,     4,    -1,   165,   582,
      -1,   123,     5,     4,    -1,    62,     5,     4,    -1,   289,
       4,     4,    -1,   123,     5,    -1,    62,     5,    -1,   289,
       4,    -1,   123,     5,    -1,    62,     5,    -1,   289,     4,
      -1,   123,     5,    -1,    62,     5,    -1,   289,     4,    -1,
     123,     5,    -1,    62,     5,    -1,   289,     4,    -1,   123,
       5,   403,    -1,    62,     5,   403,    -1,   289,     4,   403,
      -1,   123,     5,     5,   403,    -1,   589,     4,     4,   372,
     372,   377,    -1,   589,     4,    -1,   101,    -1,    51,    -1,
     311,    -1,   141,    -1,   110,    -1,    -1,     4,   372,   372,
     372,   372,    -1,   218,    -1,   218,     4,   372,   372,   372,
     372,    -1,   128,   286,   591,    -1,     4,    -1,     4,     4,
      -1,   372,   382,    -1,   372,   372,    -1,   309,   372,   372,
      -1,   383,   389,   390,    -1,    15,   596,    -1,   258,     4,
      -1,   255,   595,    -1,    22,   594,    -1,     4,     4,    -1,
       4,     5,    -1,   303,     4,     5,    -1,     4,     4,    -1,
       4,     5,    -1,   303,     4,     5,    -1,     4,    -1,     4,
     383,   389,    -1,   309,     4,   383,   389,    -1,   238,    65,
      -1,   243,    -1,   372,   372,    -1,   372,   372,    11,   372,
     372,    -1,   372,   372,    11,   384,   372,   372,    -1,   372,
     372,    11,   382,   389,   381,    -1,   309,   599,    -1,   127,
      -1,   127,   372,    -1,   372,   372,    -1,   372,   372,    11,
     372,   372,    -1,   372,   372,    11,   384,   372,   372,    -1,
     372,   372,    11,   382,   389,   381,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   480,   480,   481,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   543,   544,   547,   548,   549,   550,   551,
     552,   553,   554,   555,   556,   557,   560,   562,   563,   564,
     565,   567,   568,   569,   570,   573,   574,   575,   576,   577,
     580,   581,   584,   585,   586,   589,   592,   595,   598,   610,
     617,   624,   632,   633,   634,   635,   636,   639,   640,   641,
     642,   643,   644,   645,   646,   647,   648,   649,   650,   651,
     652,   653,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,   666,   669,   670,   673,   674,   675,
     676,   677,   678,   681,   682,   683,   684,   685,   688,   689,
     690,   691,   692,   693,   694,   695,   698,   699,   700,   701,
     702,   705,   706,   707,   708,   709,   710,   711,   712,   715,
     716,   717,   720,   721,   722,   723,   726,   727,   728,   731,
     732,   733,   736,   737,   738,   741,   742,   743,   744,   745,
     746,   747,   748,   751,   752,   755,   756,   757,   760,   761,
     762,   765,   766,   767,   770,   771,   772,   773,   776,   777,
     778,   779,   780,   781,   784,   785,   786,   787,   790,   791,
     792,   793,   794,   795,   798,   799,   800,   801,   802,   803,
     804,   805,   806,   810,   811,   812,   815,   816,   817,   820,
     821,   822,   825,   826,   830,   831,   832,   833,   834,   835,
     836,   837,   840,   841,   844,   845,   846,   848,   850,   851,
     852,   854,   858,   859,   862,   863,   865,   868,   870,   876,
     877,   878,   881,   882,   883,   886,   887,   888,   889,   890,
     891,   892,   898,   899,   902,   903,   904,   905,   906,   909,
     910,   911,   912,   915,   916,   921,   926,   933,   935,   937,
     939,   941,   942,   943,   946,   948,   950,   952,   955,   956,
     959,   960,   961,   962,   963,   966,   968,   971,   973,   976,
     981,   987,   992,   998,  1001,  1002,  1005,  1006,  1007,  1014,
    1015,  1016,  1017,  1020,  1021,  1024,  1025,  1028,  1029,  1032,
    1034,  1038,  1039,  1042,  1044,  1045,  1046,  1047,  1050,  1051,
    1053,  1054,  1055,  1058,  1060,  1062,  1063,  1065,  1067,  1069,
    1071,  1075,  1078,  1079,  1080,  1081,  1084,  1085,  1088,  1091,
    1092,  1093,  1094,  1095,  1096,  1097,  1098,  1099,  1100,  1101,
    1102,  1103,  1104,  1105,  1106,  1107,  1108,  1109,  1110,  1111,
    1112,  1113,  1114,  1115,  1116,  1117,  1118,  1119,  1120,  1121,
    1122,  1123,  1125,  1126,  1127,  1128,  1129,  1130,  1131,  1133,
    1134,  1135,  1138,  1140,  1144,  1146,  1150,  1151,  1152,  1153,
    1154,  1155,  1156,  1157,  1160,  1161,  1162,  1165,  1168,  1169,
    1171,  1173,  1174,  1175,  1176,  1177,  1178,  1185,  1186,  1189,
    1190,  1191,  1194,  1195,  1198,  1201,  1202,  1204,  1208,  1209,
    1210,  1213,  1217,  1219,  1220,  1221,  1222,  1223,  1224,  1225,
    1226,  1227,  1230,  1231,  1232,  1235,  1236,  1239,  1241,  1249,
    1251,  1253,  1257,  1258,  1260,  1263,  1266,  1267,  1271,  1273,
    1276,  1281,  1282,  1283,  1287,  1288,  1289,  1292,  1293,  1294,
    1297,  1298,  1300,  1301,  1302,  1303,  1304,  1305,  1306,  1307,
    1308,  1309,  1311,  1312,  1315,  1316,  1319,  1320,  1321,  1322,
    1325,  1326,  1329,  1331,  1334,  1338,  1339,  1340,  1342,  1344,
    1348,  1349,  1350,  1353,  1354,  1355,  1358,  1359,  1360,  1363,
    1364,  1365,  1366,  1367,  1368,  1369,  1372,  1375,  1376,  1377,
    1380,  1381,  1382,  1383,  1384,  1385,  1388,  1389,  1390,  1391,
    1392,  1393,  1394,  1397,  1398,  1401,  1402,  1405,  1406,  1409,
    1410,  1413,  1414,  1415,  1418,  1419,  1422,  1423,  1426,  1429,
    1437,  1438,  1441,  1442,  1443,  1444,  1445,  1446,  1447,  1448,
    1449,  1450,  1451,  1452,  1453,  1454,  1455,  1456,  1457,  1458,
    1461,  1464,  1465,  1468,  1469,  1470,  1471,  1474,  1475,  1476,
    1477,  1480,  1481,  1482,  1483,  1484,  1485,  1488,  1489,  1490,
    1493,  1494,  1495,  1498,  1499,  1500,  1501,  1502,  1503,  1505,
    1506,  1511,  1512,  1515,  1517,  1519,  1522,  1523,  1524,  1525,
    1526,  1527,  1530,  1532,  1534,  1536,  1537,  1539,  1541,  1543,
    1545,  1547,  1550,  1551,  1552,  1553,  1554,  1555,  1557,  1558,
    1559,  1562,  1565,  1567,  1569,  1571,  1573,  1575,  1577,  1579,
    1582,  1584,  1586,  1588,  1589,  1590,  1591,  1592,  1595,  1596,
    1597,  1598,  1599,  1600,  1601,  1603,  1605,  1606,  1607,  1610,
    1611,  1612,  1613,  1614,  1615,  1617,  1618,  1619,  1622,  1623,
    1624,  1625,  1626,  1629,  1632,  1635,  1638,  1641,  1644,  1647,
    1650,  1653,  1658,  1661,  1664,  1667,  1670,  1673,  1676,  1679,
    1682,  1685,  1688,  1693,  1696,  1699,  1702,  1705,  1708,  1711,
    1714,  1717,  1722,  1724,  1726,  1728,  1730,  1732,  1737,  1739,
    1741,  1745,  1748,  1751,  1754,  1757,  1760,  1763,  1766,  1769,
    1772,  1775,  1780,  1781,  1782,  1783,  1784,  1785,  1786,  1788,
    1790,  1791,  1792,  1795,  1796,  1797,  1798,  1799,  1800,  1802,
    1803,  1804,  1807,  1809,  1811,  1812,  1814,  1816,  1820,  1821,
    1824,  1825,  1826,  1829,  1832,  1833,  1834,  1835,  1836,  1837,
    1838,  1839,  1842,  1850,  1851,  1852,  1853,  1854,  1856,  1858,
    1859,  1859,  1860,  1861,  1862,  1863,  1864,  1866,  1867,  1869,
    1872,  1875,  1876,  1877,  1880,  1883,  1886,  1890,  1893,  1896,
    1899,  1903,  1908,  1913,  1915,  1917,  1918,  1919,  1921,  1923,
    1925,  1927,  1928,  1930,  1932,  1936,  1941,  1943,  1945,  1947,
    1949,  1951,  1953,  1955,  1957,  1959,  1961,  1964,  1965,  1967,
    1969,  1970,  1972,  1974,  1975,  1976,  1978,  1980,  1981,  1982,
    1984,  1985,  1988,  1992,  1995,  1998,  2002,  2007,  2013,  2014,
    2015,  2017,  2018,  2022,  2024,  2025,  2026,  2029,  2032,  2035,
    2037,  2039,  2044,  2047,  2048,  2049,  2052,  2056,  2057,  2059,
    2060,  2061,  2063,  2064,  2066,  2067,  2072,  2074,  2075,  2077,
    2078,  2079,  2080,  2081,  2082,  2084,  2086,  2088,  2089,  2090,
    2092,  2094,  2095,  2096,  2097,  2098,  2099,  2100,  2101,  2102,
    2103,  2104,  2105,  2107,  2109,  2110,  2111,  2112,  2114,  2115,
    2116,  2117,  2118,  2120,  2121,  2122,  2123,  2124,  2125,  2128,
    2129,  2130,  2131,  2132,  2133,  2134,  2135,  2136,  2137,  2138,
    2139,  2140,  2141,  2142,  2143,  2144,  2145,  2146,  2147,  2148,
    2151,  2152,  2153,  2154,  2155,  2156,  2164,  2171,  2180,  2189,
    2196,  2203,  2211,  2219,  2226,  2231,  2236,  2241,  2246,  2251,
    2256,  2262,  2272,  2282,  2292,  2299,  2309,  2319,  2328,  2340,
    2353,  2358,  2361,  2363,  2365,  2370,  2374,  2375,  2376,  2382,
    2384,  2386,  2389,  2390,  2391,  2392,  2393,  2394,  2395,  2398,
    2399,  2400,  2401,  2402,  2403,  2405,  2407,  2409,  2411,  2413,
    2415,  2418,  2419,  2420,  2421,  2423,  2426,  2428,  2430,  2431,
    2432,  2434,  2437,  2440,  2442,  2443,  2444,  2445,  2447,  2448,
    2449,  2450,  2451,  2453,  2455,  2457,  2460,  2461,  2462,  2464,
    2467,  2468,  2469,  2470,  2472,  2475,  2479,  2480,  2481,  2484,
    2487,  2489,  2490,  2491,  2492,  2494,  2497,  2498,  2500,  2501,
    2502,  2503,  2504,  2506,  2507,  2509,  2512,  2513,  2514,  2515,
    2516,  2518,  2520,  2521,  2522,  2523,  2525,  2527,  2528,  2529,
    2530,  2531,  2532,  2534,  2535,  2537,  2540,  2541,  2542,  2543,
    2546,  2547,  2550,  2551,  2554,  2555,  2558,  2571,  2572,  2576,
    2577,  2581,  2582,  2585,  2589,  2595,  2597,  2600,  2602,  2605,
    2607,  2611,  2612,  2613,  2614,  2615,  2616,  2617,  2621,  2622,
    2625,  2626,  2627,  2628,  2629,  2630,  2631,  2632,  2633,  2636,
    2637,  2638,  2639,  2640,  2641,  2642,  2643,  2644,  2645,  2646,
    2647,  2650,  2651,  2654,  2655,  2655,  2658,  2660,  2662,  2665,
    2666,  2667,  2668,  2669,  2670,  2673,  2674,  2677,  2678,  2681,
    2685,  2686,  2686,  2689,  2690,  2693,  2696,  2700,  2701,  2702,
    2703,  2704,  2705,  2706,  2707,  2708,  2714,  2715,  2716,  2717,
    2720,  2722,  2723,  2728,  2730,  2731,  2732,  2733,  2736,  2737,
    2742,  2746,  2747,  2748,  2751,  2752,  2757,  2758,  2761,  2763,
    2764,  2765,  2770,  2772,  2778,  2779,  2780,  2781,  2784,  2785,
    2788,  2790,  2792,  2793,  2796,  2798,  2799,  2800,  2803,  2804,
    2807,  2808,  2809,  2812,  2813,  2814,  2817,  2818,  2819,  2820,
    2821,  2824,  2825,  2826,  2829,  2830,  2831,  2832,  2833,  2836,
    2838,  2840,  2842,  2845,  2847,  2849,  2852,  2853,  2854,  2855,
    2856,  2857,  2858,  2859,  2860,  2863,  2864,  2865,  2868,  2869,
    2870,  2873,  2874,  2875,  2878,  2879,  2880,  2883,  2884,  2885,
    2886,  2889,  2890,  2891,  2894,  2895,  2896,  2899,  2900,  2901,
    2904,  2905,  2906,  2909,  2911,  2913,  2917,  2921,  2923,  2928,
    2931,  2932,  2933,  2934,  2937,  2938,  2941,  2943,  2945,  2948,
    2949,  2950,  2953,  2954,  2957,  2959,  2960,  2961,  2962,  2965,
    2966,  2967,  2970,  2971,  2972,  2975,  2976,  2981,  2983,  2986,
    2993,  2994,  2996,  3001,  3003,  3006,  3007,  3008,  3009,  3011,
    3016
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
  "BLUE_", "BORDER_", "BOX_", "BOXANNULUS_", "BOXCAR_", "BOXCIRCLE_",
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
  "FACTOR_", "FALSE_", "FILE_", "FILL_", "FILTER_", "FIRST_", "FIT_",
  "FITS_", "FITSY_", "FIXED_", "FK4_", "FK5_", "FONT_", "FORMAT_",
  "FOOTPRINT_", "FROM_", "FRONT_", "FULL_", "FUNCTION_", "GALACTIC_",
  "GAUSSIAN_", "GET_", "GLOBAL_", "GRAPHICS_", "GRAY_", "GREEN_", "GRID_",
  "GZ_", "HANDLE_", "HAS_", "HEAD_", "HEADER_", "HEIGHT_", "HIDE_",
  "HIGHLITE_", "HISTEQU_", "HISTOGRAM_", "HORIZONTAL_", "HSV_", "HLS_",
  "HUE_", "ICRS_", "ID_", "IIS_", "IMAGE_", "INCLUDE_", "INCR_", "INFO_",
  "ITERATION_", "IRAF_", "IRAFMIN_", "J2000_", "KEY_", "KEYWORD_",
  "LABEL_", "LAST_", "LENGTH_", "LEVEL_", "LIGHTEN_", "LIGHTNESS_",
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
  "RED_", "REGION_", "REPLACE_", "RESAMPLE_", "RESCAN_", "RESET_",
  "RESOLUTION_", "RGB_", "ROOT_", "ROTATE_", "RULER_", "SAMPLE_",
  "SAOIMAGE_", "SAOTNG_", "SATURATION_", "SAVE_", "SCALE_", "SCAN_",
  "SCIENTIFIC_", "SCOPE_", "SCREEN_", "SEGMENT_", "SELECT_", "SET_",
  "SEXAGESIMAL_", "SHAPE_", "SHARED_", "SHIFT_", "SHMID_", "SHOW_",
  "SIGMA_", "SINH_", "SIZE_", "SLICE_", "SMMAP_", "SMOOTH_", "SOCKET_",
  "SOCKETGZ_", "SOURCE_", "SQRT_", "SQUARED_", "SSHARED_", "STATS_",
  "STATUS_", "SUM_", "SYNC_", "SYSTEM_", "TABLE_", "TAG_", "TEMPLATE_",
  "TEXT_", "THREADS_", "THREED_", "THRESHOLD_", "THICK_", "TRANSPARENCY_",
  "TO_", "TOGGLE_", "TOPHAT_", "TRUE_", "TYPE_", "UNDO_", "UNHIGHLITE_",
  "UNLOAD_", "UNSELECT_", "UPDATE_", "USER_", "VALUE_", "VAR_", "VIEW_",
  "VECTOR_", "VERSION_", "VERTEX_", "VERTICAL_", "WARP_", "WCS_", "WCSA_",
  "WCSB_", "WCSC_", "WCSD_", "WCSE_", "WCSF_", "WCSG_", "WCSH_", "WCSI_",
  "WCSJ_", "WCSK_", "WCSL_", "WCSM_", "WCSN_", "WCSO_", "WCSP_", "WCSQ_",
  "WCSR_", "WCSS_", "WCST_", "WCSU_", "WCSV_", "WCSW_", "WCSX_", "WCSY_",
  "WCSZ_", "WCS0_", "WFPC2_", "WIDTH_", "WIN32_", "XML_", "XY_", "YES_",
  "ZERO_", "ZMAX_", "ZSCALE_", "ZOOM_", "'Y'", "'N'", "'X'", "'='",
  "$accept", "command", "numeric", "debug", "yesno", "fileNameType",
  "optangle", "angle", "sexagesimal", "hms", "dms", "coord", "coordSystem",
  "wcsSystem", "internalSystem", "maskType", "maskBlend", "scaleType",
  "minmaxMode", "skyFrame", "skyFormat", "skyDist", "shmType", "incrLoad",
  "layerType", "pointShape", "pointSize", "rgbch", "hsvch", "hlsch",
  "colors", "analysisTask", "analysisMethod", "endian", "threed",
  "threedBorder", "threedCompass", "threedHighlite", "threedView", "bin",
  "binAbout", "binFactor", "binFunction", "binTo", "block", "blockTo",
  "clip", "clipScope", "clipMode", "clipMinMax", "clipZScale", "colormap",
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
     615,   616,   617,   618,   619,   620,    89,    78,    88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   370,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   372,   372,   373,   373,   373,   373,   373,
     373,   373,   373,   373,   373,   373,   374,   374,   374,   374,
     374,   374,   374,   374,   374,   375,   375,   375,   375,   375,
     376,   376,   377,   377,   377,   378,   379,   380,   381,   381,
     381,   381,   382,   382,   382,   382,   382,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   383,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   383,   383,   383,   383,
     383,   383,   383,   383,   383,   384,   384,   385,   385,   385,
     385,   385,   385,   386,   386,   386,   386,   386,   387,   387,
     387,   387,   387,   387,   387,   387,   388,   388,   388,   388,
     388,   389,   389,   389,   389,   389,   389,   389,   389,   390,
     390,   390,   391,   391,   391,   391,   392,   392,   392,   393,
     393,   393,   394,   394,   394,   395,   395,   395,   395,   395,
     395,   395,   395,   396,   396,   397,   397,   397,   398,   398,
     398,   399,   399,   399,   400,   400,   400,   400,   401,   401,
     401,   401,   401,   401,   402,   402,   402,   402,   403,   403,
     403,   403,   403,   403,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   405,   405,   405,   406,   406,   406,   407,
     407,   407,   408,   408,   409,   409,   409,   409,   409,   409,
     409,   409,   410,   410,   411,   411,   411,   411,   411,   411,
     411,   411,   412,   412,   413,   413,   413,   413,   413,   414,
     414,   414,   415,   415,   415,   416,   416,   416,   416,   416,
     416,   416,   417,   417,   418,   418,   418,   418,   418,   419,
     419,   419,   419,   420,   420,   420,   420,   421,   421,   421,
     421,   421,   421,   421,   422,   422,   422,   422,   423,   423,
     424,   424,   424,   424,   424,   425,   425,   425,   425,   425,
     425,   425,   425,   425,   426,   426,   427,   427,   427,   428,
     428,   428,   428,   429,   429,   430,   430,   431,   431,   432,
     432,   433,   433,   433,   433,   433,   433,   433,   434,   434,
     434,   434,   434,   435,   435,   435,   435,   435,   435,   435,
     435,   436,   437,   437,   437,   437,   438,   438,   439,   440,
     440,   440,   440,   440,   440,   440,   440,   440,   440,   440,
     440,   440,   440,   440,   440,   440,   440,   440,   440,   440,
     440,   440,   440,   440,   440,   440,   440,   440,   440,   440,
     440,   440,   440,   440,   440,   440,   440,   440,   440,   440,
     440,   440,   441,   441,   442,   442,   443,   443,   443,   443,
     443,   443,   443,   443,   444,   444,   444,   445,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   447,   447,   448,
     448,   448,   449,   449,   450,   451,   451,   451,   452,   452,
     452,   453,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   455,   455,   455,   456,   456,   457,   457,   458,
     458,   458,   459,   459,   459,   460,   461,   461,   462,   462,
     462,   463,   463,   463,   464,   464,   464,   465,   465,   465,
     466,   466,   466,   466,   466,   466,   466,   466,   466,   466,
     466,   466,   466,   466,   467,   467,   468,   468,   468,   468,
     469,   469,   470,   470,   470,   471,   471,   471,   471,   471,
     472,   472,   472,   473,   473,   473,   474,   474,   474,   475,
     475,   475,   475,   475,   475,   475,   476,   477,   477,   477,
     478,   478,   478,   478,   478,   478,   479,   479,   479,   479,
     479,   479,   479,   480,   480,   481,   481,   482,   482,   483,
     483,   484,   484,   484,   485,   485,   486,   486,   487,   487,
     488,   488,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   489,
     490,   491,   491,   492,   492,   492,   492,   493,   493,   493,
     493,   494,   494,   494,   494,   494,   494,   495,   495,   495,
     496,   496,   496,   497,   497,   497,   497,   497,   497,   497,
     497,   498,   498,   499,   499,   499,   500,   500,   500,   500,
     500,   500,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   503,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   506,
     506,   506,   506,   506,   506,   506,   506,   506,   507,   507,
     507,   507,   507,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   509,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   512,   512,   512,   512,   512,   512,   512,   512,   512,
     512,   512,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   515,   515,   515,   515,   515,   515,   516,   516,
     517,   517,   517,   518,   519,   519,   519,   519,   519,   519,
     519,   519,   520,   521,   521,   521,   521,   521,   521,   521,
     522,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   523,
     523,   523,   523,   523,   523,   523,   523,   523,   523,   523,
     523,   523,   523,   523,   523,   523,   523,   523,   523,   523,
     524,   524,   524,   524,   524,   524,   525,   525,   525,   525,
     525,   525,   525,   525,   525,   525,   525,   525,   525,   525,
     525,   525,   525,   525,   525,   525,   525,   525,   525,   525,
     525,   525,   526,   526,   526,   526,   527,   527,   527,   528,
     528,   528,   529,   529,   529,   529,   529,   529,   529,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   531,   531,   531,   531,
     532,   532,   533,   533,   534,   534,   535,   536,   536,   536,
     536,   536,   536,   537,   537,   538,   538,   538,   538,   538,
     538,   539,   539,   539,   539,   539,   539,   539,   540,   540,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   542,
     542,   542,   542,   542,   542,   542,   542,   542,   542,   542,
     542,   543,   543,   544,   545,   544,   546,   546,   546,   547,
     547,   547,   547,   547,   547,   548,   548,   549,   549,   550,
     551,   552,   551,   553,   553,   554,   555,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   557,   557,   557,   557,
     558,   558,   558,   558,   558,   558,   558,   558,   559,   559,
     559,   560,   560,   560,   561,   561,   561,   561,   562,   562,
     562,   562,   563,   563,   564,   564,   564,   564,   565,   565,
     566,   566,   566,   566,   567,   567,   567,   567,   568,   568,
     569,   569,   569,   570,   570,   570,   571,   571,   571,   571,
     571,   572,   572,   572,   573,   573,   573,   573,   573,   574,
     574,   574,   574,   575,   575,   575,   576,   576,   576,   576,
     576,   576,   576,   576,   576,   577,   577,   577,   578,   578,
     578,   579,   579,   579,   580,   580,   580,   581,   581,   581,
     581,   582,   582,   582,   583,   583,   583,   584,   584,   584,
     585,   585,   585,   586,   586,   586,   587,   588,   588,   588,
     589,   589,   589,   589,   590,   590,   590,   590,   590,   591,
     591,   591,   592,   592,   593,   593,   593,   593,   593,   594,
     594,   594,   595,   595,   595,   596,   596,   596,   596,   597,
     598,   598,   598,   598,   598,   599,   599,   599,   599,   599,
     599
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     3,     3,     2,     1,     1,
       2,     3,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     2,     3,     3,     2,
       2,     2,     3,     2,     2,     2,     2,     3,     2,     3,
       3,     2,     2,     2,     2,     2,     2,     1,     3,     2,
       2,     2,     1,     2,     2,     2,     1,     2,     1,     2,
       2,     2,     2,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     2,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       1,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     0,     1,     1,     1,     0,     1,     1,     0,
       1,     1,     0,     1,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     1,     0,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     2,     6,     2,     4,     2,     2,     2,     3,
       2,     2,     1,     2,     1,     2,     4,     5,     2,     3,
       5,     6,     1,     1,     1,     7,    11,     8,    12,     1,
       2,     2,     1,     1,     2,     2,     2,     2,     3,     3,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     1,     3,     2,     2,     2,     5,     9,     9,
       9,     1,     2,     1,     5,     9,     9,     9,     1,     2,
       2,     2,     2,     2,     2,    13,    13,    13,    13,    12,
      12,    12,    12,     1,     0,     1,     1,     4,     6,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       4,     0,     6,     8,     2,     3,     3,     3,     0,     4,
       4,     4,     4,     3,     3,     1,     3,     5,     4,     4,
       3,     2,     0,     1,     1,     1,     1,     1,     3,     0,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     2,     2,     2,     4,     3,
       2,     2,     2,     2,     2,     1,     3,     2,     2,     1,
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     1,     2,     2,     2,     2,
       1,     1,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     2,     2,     0,     1,     2,     1,     6,     5,
       1,     1,     1,     2,     2,     2,     1,     1,     1,     1,
       2,     1,     1,     1,     2,     1,     1,     1,     2,     2,
       2,     0,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     1,     2,     2,     2,     4,
       2,     2,     4,     3,     1,     2,     2,     4,     5,     1,
      10,     1,     2,     3,     3,     2,     2,     2,     2,     2,
       2,     2,     4,     4,     4,     3,     3,     5,     4,     4,
       4,     3,     3,     3,     3,     2,     2,     4,     3,     3,
       3,     3,     4,     4,     4,     4,     5,     4,     6,     7,
       4,     4,     5,     2,     3,     3,     3,     2,     3,     3,
       3,     3,     4,     3,     5,     6,     3,     3,     4,     3,
       3,     3,     3,     3,     5,     3,     3,     4,     3,     2,
       2,     1,     3,     4,     4,     4,     4,     4,     6,     4,
       4,     5,     4,     4,     4,     4,     5,     4,     6,     7,
       4,     4,     5,     5,     5,     5,     5,     5,     7,     5,
       5,     6,     4,     4,     4,     4,     4,     6,     4,     4,
       5,     5,     5,     5,     5,     6,     5,     7,     8,     5,
       5,     6,     3,     3,     3,     3,     4,     3,     5,     6,
       3,     3,     4,     3,     3,     3,     3,     3,     5,     3,
       3,     4,     4,     4,     3,     5,     4,     4,     2,     3,
       6,     6,     1,     1,     1,     2,     2,     2,     2,     3,
       3,     2,    12,     2,     2,     2,     1,     3,     4,     2,
       0,     3,     1,     2,     2,     2,     2,     2,     4,     4,
       4,     3,     4,     5,     8,     6,     9,     6,     7,    10,
      11,    12,     9,     5,     6,     3,     3,     5,     5,     6,
       5,     4,     9,    10,    11,     9,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     7,     7,     2,     4,     4,
       4,     4,     5,     4,     4,     5,     5,     3,     4,     4,
       4,     7,     9,     6,    10,    11,    12,     9,     3,     2,
       3,     5,     7,     4,     3,     3,     6,     7,     7,     4,
       4,     9,     4,     3,     4,     7,     7,     2,     3,     3,
       3,     4,     2,     2,     4,    10,     3,     1,     3,     2,
       2,     2,     2,     3,     5,     4,     5,     2,     2,     2,
       2,     3,     3,     2,     2,     2,     3,     2,     3,     4,
       3,     3,     6,     4,     2,     3,     2,     2,     4,     3,
       3,     2,     3,     1,     2,     1,     2,     2,     2,     1,
       1,     1,     1,     2,     1,     2,     2,     1,     2,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     2,     2,     2,     3,     5,     7,     7,     6,
       6,     6,     6,     5,     6,     6,     6,     6,     6,     6,
       6,    11,     7,     7,     7,     9,     9,    10,    12,    12,
       2,     2,     3,     4,     4,     4,     0,     1,     1,     4,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     3,     3,     8,     6,    10,     7,     7,
       5,     2,     2,     3,     4,     5,     5,     5,     3,     4,
       5,     5,     5,     5,     2,     3,     3,     5,     3,     3,
       3,     4,     5,     5,     5,     5,     3,     4,     5,     5,
       2,     2,     3,     5,     6,     6,     3,     3,     6,     5,
       5,     2,     3,     3,     5,     6,     3,     2,     2,     3,
       2,     3,     2,     3,     5,     6,     2,     2,     2,     1,
       4,     4,     1,     2,     2,     2,     2,     2,     2,     2,
       3,     2,     3,     2,     3,     1,     1,     1,     1,     1,
       0,     2,     0,     2,     0,     1,     0,     0,     1,     1,
       1,     1,     1,     7,     8,     2,     6,     2,     6,     2,
       3,     2,     1,     1,     3,     3,     1,     4,     2,     1,
       3,     3,     3,     4,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     0,     0,     2,     6,     7,     2,     1,
       3,     1,     3,     1,     1,     1,     2,     2,     1,     3,
       0,     0,     2,     2,     1,     3,     5,     1,     2,     2,
       2,     3,     2,     2,     2,     2,     1,     1,     1,     1,
       4,     2,     3,     3,     2,     3,     2,     2,     2,     3,
       3,     3,     2,     3,     1,     3,     3,     1,     2,     2,
       2,     2,     9,     6,     1,     1,     1,     1,     2,     2,
       3,     3,     1,     2,     3,     3,     1,     2,     1,     1,
       1,     1,     1,     2,     2,     4,     1,     2,     2,     2,
       3,     1,     1,     1,     2,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     1,     2,     2,     2,
       3,     2,     3,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     3,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     3,     3,     4,     6,     2,     1,
       1,     1,     1,     1,     0,     5,     1,     6,     3,     1,
       2,     2,     2,     3,     3,     2,     2,     2,     2,     2,
       2,     3,     2,     2,     3,     1,     3,     4,     2,     1,
       2,     5,     6,     6,     2,     1,     2,     2,     5,     6,
       6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     8,     9,     0,     0,     0,     0,
       0,   341,     0,     0,     0,     0,     0,     0,   369,     0,
       0,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1097,     0,     0,     0,     0,     0,     0,     0,     0,
    1097,    47,     0,     0,     0,    52,     0,     0,     0,    56,
    1294,    58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,    63,    64,     0,
     269,     7,     0,     0,     0,     0,     0,     0,    10,     0,
       0,   301,   303,     0,     0,     0,     0,    13,   153,   155,
     148,   149,   150,   154,   151,   152,   308,    14,     0,   324,
       0,     0,     0,    15,     0,     0,     0,     0,   348,     0,
      16,    76,   105,     0,   135,   104,    84,   102,     0,    81,
      83,    79,   136,   103,    80,     0,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,    77,    78,    82,   355,   161,   106,
       0,    17,     0,    18,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,    65,   367,   366,    20,
       0,    21,     0,     0,     0,   428,   442,     0,   448,     0,
       0,     0,     0,     0,     0,     0,   384,     0,   520,     0,
       0,     0,     0,     0,     0,     0,     0,  1097,     0,   395,
       0,   399,     0,     0,     0,   403,     0,   405,     0,   407,
       0,     0,   561,   411,    22,     0,   567,    23,   572,     0,
       0,   591,   576,   577,   578,   579,   593,   581,   582,   586,
     583,     0,   585,   587,     0,     0,    24,     0,    26,     0,
       0,     0,    29,     0,     0,     0,    30,     0,   614,     0,
       0,     0,   619,     0,    31,     0,     0,     0,     0,     0,
       0,     0,    33,   773,    34,     0,     0,     0,     0,     0,
       0,   774,    35,     0,    36,  1101,  1102,  1098,  1099,  1100,
       0,   143,  1167,     0,   137,     0,     0,     0,    38,     0,
    1179,  1178,  1177,  1176,    41,     0,     0,     0,     0,     0,
     161,     0,    42,     0,  1197,     0,  1194,    43,     0,     0,
       0,     0,    46,     0,    45,    44,     0,     0,     0,     0,
      49,     0,     0,  1226,    50,     0,     0,     0,     0,     0,
      51,  1290,  1289,  1293,  1292,  1291,    53,     0,    54,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,     0,
       0,  1296,    57,     0,     0,    59,     0,     0,     0,     0,
     161,    60,  1319,    61,     0,     0,    62,     1,     4,   206,
     207,   205,   204,     6,     5,   252,     0,   244,     0,     0,
     246,     0,   254,   247,   251,   262,   263,   248,   264,     0,
     250,   272,   273,   271,   270,     0,     0,   292,     0,   277,
     285,   288,   287,   286,   284,   276,   281,   282,   283,   275,
       0,     0,     0,     0,     0,     0,   280,    11,    12,     0,
       0,     0,     0,     0,     0,     0,   302,     0,   309,     0,
     323,     0,   310,   325,   311,   326,   312,   337,   313,     0,
       0,   314,     0,    95,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   344,     0,     0,
       0,     0,     0,   163,   168,   162,   164,   167,   166,   165,
       0,     0,   361,    70,    71,    72,    73,    74,    66,    67,
      68,    75,    69,     0,   370,     0,   424,   420,   416,   417,
     421,   418,   423,   371,   427,   372,   329,   432,   436,   431,
     332,   331,   330,     0,     0,   373,   443,   375,     0,   374,
       0,   450,   376,   462,   454,   465,   455,   456,   458,     0,
     460,   461,   161,   377,     0,     0,   378,     0,     0,   161,
     379,   474,   161,   472,   380,   475,   382,   161,   476,   381,
       0,   161,     0,   383,   494,     0,   492,   510,     0,     0,
       0,   498,   490,     0,   500,   515,   503,   385,   521,   522,
     386,   387,     0,     0,   523,   524,   525,   390,   526,   527,
     528,   391,     0,   485,     0,   392,    85,   482,     0,   393,
     394,     0,   535,   529,   534,   530,   531,   532,   533,   397,
     398,   536,   400,     0,   537,   538,   539,   402,   545,   540,
     541,   543,   404,   551,   553,   555,   557,   550,   552,   559,
     406,     0,     0,   564,     0,   410,   161,   566,   573,     0,
     574,   592,   575,   594,   595,   596,   580,   597,   599,   598,
     600,   584,   588,   605,     0,     0,     0,     0,   601,   589,
      27,    28,   198,   199,   200,   607,   608,     0,   201,   202,
     203,   610,   611,     0,     0,     0,   616,   615,     0,     0,
       0,     0,    32,     0,     0,   626,     0,   627,     0,     0,
       0,     0,     0,   628,     0,   772,     0,   629,     0,   630,
       0,     0,   631,     0,   777,   778,   776,   775,     0,   781,
       0,     0,     0,   950,     0,     0,     0,   786,   790,   792,
     986,     0,     0,     0,     0,   887,     0,     0,     0,   923,
       0,     0,     0,     0,     0,     0,     0,   925,     0,     0,
       0,    37,   146,   147,   145,   144,  1174,  1168,  1169,  1175,
     140,   141,   139,   142,   138,  1170,     0,  1172,  1173,    39,
      40,     0,     0,     0,     0,  1186,  1187,     0,   161,     0,
    1184,  1181,     0,     0,     0,   161,  1204,  1207,  1205,  1206,
    1198,  1199,  1200,  1201,     0,     0,     0,    48,   197,   196,
     195,  1223,  1224,     0,  1231,  1233,  1232,  1228,  1229,  1227,
       0,     0,     0,     0,  1234,     0,  1237,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1235,  1246,     0,
       0,     0,  1236,  1238,  1288,  1221,  1222,  1220,   229,     0,
     233,   225,     0,   236,   226,     0,   239,   227,  1219,  1218,
     228,   230,   231,   232,     0,     0,   224,     0,     0,     0,
       0,  1302,  1315,     0,     0,  1305,     0,     0,  1308,     0,
       0,  1307,  1306,   169,  1325,     0,  1324,  1320,   253,   249,
       0,   258,     0,   255,     0,   274,   156,   159,   160,   158,
     157,   289,   290,   291,   279,   278,   294,   296,   295,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   161,     0,   345,   101,    98,    99,   100,
     161,   347,   346,     0,     0,     0,     0,     0,     0,     0,
     360,     0,   356,   354,   353,   368,   419,     0,     0,   422,
     437,   438,   433,   434,   439,   441,   440,   435,   333,   334,
     430,   429,   445,   444,     0,   449,   463,   464,   453,   466,
     459,   457,   452,     0,     0,   161,   161,   169,   169,   169,
     161,     0,     0,   161,   511,   493,   504,     0,   495,    85,
     506,     0,     0,   497,   499,   161,   516,     0,     0,   502,
       0,     0,   389,     0,   487,    89,    88,   481,     0,     0,
       0,     0,  1000,  1002,  1001,     0,  1090,     0,  1069,     0,
    1072,     0,     0,  1092,  1094,     0,  1085,   396,     0,   542,
     544,   554,   547,   556,   548,   558,   549,   560,   546,     0,
       0,   409,   565,   562,   563,   169,   590,   602,   603,   604,
     606,     0,     0,     0,   625,   613,     0,     0,     0,     0,
       0,     0,   182,   182,   176,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   179,   179,   176,     0,     0,   176,
       0,     0,     0,     0,     0,   667,   691,     0,     0,     0,
     663,     0,     0,     0,     0,   182,   176,     0,     0,   768,
       0,   779,   780,   161,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   837,     0,     0,
       0,     0,     0,   859,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   877,     0,     0,   882,   883,     0,     0,
       0,   903,   905,   904,     0,   907,     0,     0,   914,   916,
     917,   951,     0,     0,     0,     0,   783,   784,   785,   994,
     992,   997,   996,   995,   993,   998,     0,   789,     0,   988,
     987,   793,     0,   991,     0,   794,   795,   796,   797,     0,
       0,     0,     0,     0,   889,     0,     0,   890,  1113,     0,
    1116,  1112,     0,     0,     0,   891,   924,   892,  1132,  1137,
    1134,  1140,  1133,  1131,  1138,  1135,  1129,  1136,  1130,  1139,
       0,     0,   897,     0,     0,     0,     0,   898,  1149,  1153,
    1154,     0,  1151,   899,     0,  1155,   900,   921,     0,     0,
       0,   926,   927,   928,  1171,  1185,     0,     0,  1192,  1188,
       0,     0,     0,  1183,  1182,  1196,  1195,     0,     0,  1212,
       0,     0,  1208,     0,  1216,     0,     0,  1209,     0,  1230,
     218,   218,     0,   218,     0,  1256,     0,  1255,  1247,     0,
       0,     0,     0,  1251,     0,     0,     0,  1254,     0,     0,
       0,     0,     0,  1249,  1257,     0,     0,     0,  1248,   218,
     218,   218,     0,   234,   235,   237,   238,   240,   241,     0,
     242,     0,    64,     0,  1298,     0,  1303,   161,  1318,     0,
    1309,  1310,     0,  1312,  1313,     0,   170,   171,  1304,  1326,
    1327,     0,   245,     0,   259,     0,     0,     0,     0,   293,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   339,   161,     0,     0,     0,     0,   161,
       0,   359,     0,   358,   426,   425,     0,     0,     0,   161,
       0,   169,   471,   469,   473,   477,     0,     0,     0,   169,
       0,   512,   496,     0,   507,   509,   172,     0,     0,   388,
       0,     0,    64,     0,   486,    87,    86,     0,     0,  1012,
       0,     0,     0,     0,     0,     0,  1024,     0,     0,     0,
       0,     0,     0,  1040,  1041,     0,     0,     0,     0,  1051,
       0,  1057,  1058,  1060,  1062,     0,  1066,  1077,  1078,  1079,
       0,  1081,  1086,  1088,  1089,  1087,   999,     0,  1068,     0,
    1067,  1011,     0,     0,  1073,     0,  1075,     0,  1074,  1095,
    1076,  1083,     0,     0,   408,     0,     0,   609,   612,   623,
     624,     0,   621,   617,     0,   182,   182,   182,   183,   184,
     635,   636,   178,   177,     0,   182,   182,   182,     0,   641,
     651,   179,   182,   182,   182,   180,   181,   182,   182,     0,
     182,   182,     0,   179,     0,   664,     0,     0,     0,   690,
       0,   689,     0,     0,   666,     0,   665,     0,     0,     0,
       0,   179,   179,   176,     0,     0,   176,     0,     0,     0,
     182,   182,   764,     0,   182,   182,   769,     0,   208,   209,
     210,   211,   212,   213,     0,    93,    94,    92,   801,     0,
       0,     0,     0,     0,   944,   942,   937,     0,   947,   931,
     948,   934,   946,   940,   929,   943,   932,   930,   949,   945,
       0,     0,   815,   816,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   847,     0,     0,
       0,     0,   858,   860,     0,     0,   865,   864,     0,     0,
     185,     0,     0,   161,     0,   873,     0,     0,     0,     0,
     878,   879,   880,     0,     0,     0,   886,   901,   902,   906,
     908,   911,   910,     0,     0,     0,   915,   952,   954,     0,
     953,   787,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1096,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   791,     0,     0,
       0,     0,   888,     0,   161,  1109,  1107,  1105,     0,     0,
     161,  1111,   893,     0,     0,     0,     0,  1148,     0,     0,
    1156,   919,   920,     0,   922,  1191,  1193,  1190,  1189,  1180,
       0,     0,     0,  1213,     0,     0,  1217,  1225,   220,   221,
     222,   223,   219,  1240,  1239,     0,     0,     0,  1242,  1241,
     218,     0,     0,     0,  1250,     0,     0,     0,     0,     0,
    1267,     0,  1281,  1280,  1282,     0,     0,     0,  1253,     0,
       0,     0,  1252,  1262,  1261,  1263,  1259,  1258,  1260,  1284,
    1283,  1285,     0,     0,     0,  1300,  1301,     0,  1316,   161,
    1311,  1314,     0,     0,   161,     0,     0,     0,   256,     0,
       0,     0,     0,   297,     0,     0,     0,     0,     0,     0,
       0,   336,   335,     0,     0,     0,   327,   338,   340,     0,
     350,   352,   351,   349,   161,   357,     0,     0,     0,   169,
     161,     0,     0,     0,     0,   491,   505,   514,     0,   508,
     174,   175,   173,   501,     0,   517,     0,     0,   484,   489,
      85,     0,     0,     0,     0,     0,     0,   161,  1013,     0,
       0,     0,  1018,     0,   161,     0,  1025,  1026,     0,  1028,
    1029,  1030,     0,     0,     0,  1036,     0,  1042,     0,     0,
       0,  1046,  1047,     0,     0,     0,  1052,  1053,     0,     0,
    1056,  1059,  1061,  1063,     0,     0,  1080,  1082,  1003,  1091,
    1004,     0,     0,  1093,  1084,     0,     0,   570,   571,     0,
     618,   622,     0,   632,   633,   634,   182,   638,   639,   640,
       0,     0,     0,   645,   646,   176,     0,     0,     0,   182,
     652,   653,   654,   655,   657,   179,   660,   661,     0,   182,
       0,     0,     0,   179,   179,   176,     0,     0,     0,     0,
     688,     0,   692,     0,     0,     0,     0,     0,   179,   179,
     176,     0,     0,   176,     0,     0,     0,     0,     0,   179,
     179,   176,     0,     0,   176,     0,     0,     0,     0,     0,
     179,   179,   176,     0,     0,   176,     0,     0,     0,     0,
     179,   179,   176,     0,     0,     0,   179,   668,   669,   670,
     671,   673,     0,   676,   677,     0,   179,     0,     0,   762,
     763,   182,   766,   767,     0,   800,   161,   802,     0,     0,
       0,     0,     0,     0,     0,   936,   933,   939,   938,   935,
     941,     0,     0,     0,     0,     0,   161,   821,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   838,   839,   840,     0,   844,   841,   843,     0,     0,
     849,   848,   850,     0,     0,     0,     0,     0,     0,   161,
     161,   863,   191,   187,   192,   186,   189,   188,   190,   869,
     870,     0,     0,   872,   874,   161,   161,     0,   881,   884,
     161,   161,   909,   913,   955,   788,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1141,   980,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   981,     0,     0,     0,     0,     0,   798,   799,
     161,   169,  1110,     0,     0,  1114,  1115,     0,     0,   895,
       0,   161,     0,  1150,  1152,   918,     0,  1210,  1211,  1214,
    1215,   218,   218,   218,  1286,  1265,  1264,  1266,  1269,  1268,
    1272,  1271,  1273,  1270,  1278,  1277,  1279,  1275,  1274,  1276,
       0,     0,  1295,     0,  1317,     0,   161,     0,  1321,     0,
       0,   260,     0,   257,     0,     0,     0,     0,     0,   304,
       0,     0,     0,     0,     0,     0,   161,     0,   342,   149,
       0,   446,     0,   467,   169,   172,     0,     0,   480,     0,
     518,   519,     0,   483,     0,     0,     0,     0,     0,   161,
    1014,   172,   172,   172,   161,  1019,   172,   169,   172,   172,
     161,  1031,   172,   172,   172,   161,  1037,   172,   172,   161,
       0,   172,   161,   172,   172,   161,   172,   161,  1070,  1071,
       0,     0,   569,     0,   637,   642,   643,   644,     0,   648,
     649,   650,   656,   182,   179,   662,   679,   680,   681,   682,
     683,     0,   685,   686,   179,     0,     0,     0,   179,   179,
     176,     0,     0,     0,     0,     0,     0,   179,   179,   176,
       0,     0,     0,     0,     0,     0,   179,   179,   176,     0,
       0,     0,   179,   182,   182,   182,   182,   182,     0,   182,
     182,     0,   179,   179,   182,   182,   182,   182,   182,     0,
     182,   182,     0,   179,   179,   742,   743,   744,   745,   747,
       0,   750,   751,     0,   179,   753,   754,   755,   756,   757,
       0,   759,   760,   179,   672,   179,     0,   678,     0,     0,
     765,     0,   803,   172,     0,     0,   172,     0,     0,     0,
     813,   172,   817,   818,   172,   820,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   842,
     845,   846,     0,   172,     0,     0,     0,   861,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1142,  1119,     0,  1127,  1128,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   161,     0,     0,    90,     0,     0,   989,   990,   169,
       0,     0,     0,  1117,   894,   896,   169,   161,  1203,  1244,
    1243,  1245,  1287,     0,  1297,  1328,     0,     0,  1323,  1322,
     261,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   328,   172,   447,   451,   468,   470,     0,   478,
     513,   161,     0,     0,     0,     0,     0,     0,  1010,  1015,
    1017,  1016,  1020,  1021,  1022,  1023,  1027,  1032,  1033,  1034,
    1035,  1038,  1039,  1043,   169,   172,  1049,   169,  1050,  1054,
     169,  1064,   169,     0,   161,     0,   568,     0,   647,   658,
     182,   179,   687,   182,   182,   182,   182,   182,     0,   182,
     182,   179,   182,   182,   182,   182,   182,     0,   182,   182,
     179,   182,   182,   182,   182,   182,     0,   182,   182,   179,
     182,   702,   703,   704,   705,   707,   179,   710,   711,     0,
     182,   182,   731,   732,   733,   734,   736,   179,   739,   740,
       0,   182,   746,   179,     0,   752,   179,   761,   674,   179,
     770,   771,   161,   805,     0,   172,   807,     0,   161,     0,
     814,   819,   161,     0,   826,   827,   828,   829,   833,   834,
     830,   831,   832,     0,     0,   172,   853,     0,   161,     0,
       0,   866,   172,     0,     0,   172,   172,     0,   912,     0,
     193,   193,     0,     0,   193,     0,   193,  1096,     0,     0,
       0,     0,     0,     0,     0,     0,  1118,     0,     0,   193,
     193,     0,     0,     0,     0,     0,     0,     0,     0,   982,
       0,     0,     0,  1096,    91,     0,   193,     0,  1144,   161,
     161,     0,   169,     0,   243,  1330,  1329,     0,     0,   265,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   343,
     479,     0,   362,     0,  1006,     0,   214,     0,  1044,  1045,
    1048,  1055,  1065,   401,     0,   362,     0,   659,   684,   693,
     694,   695,   696,   697,   179,   699,   700,   182,   722,   723,
     724,   725,   726,   179,   728,   729,   182,   713,   714,   715,
     716,   717,   179,   719,   720,   182,   706,   182,   179,   712,
     735,   182,   179,   741,   748,   179,   758,   675,     0,   172,
     808,     0,     0,     0,     0,     0,   835,   836,   851,     0,
       0,     0,   862,   867,     0,   875,   876,   868,   172,     0,
     194,  1096,  1096,    90,     0,  1096,     0,  1096,   956,   161,
       0,  1121,  1122,     0,  1125,  1165,  1126,  1124,  1120,     0,
    1096,  1096,    90,     0,     0,  1096,  1096,     0,     0,  1096,
     985,   983,   984,   963,  1096,  1096,  1144,  1160,     0,  1108,
    1106,  1146,     0,     0,     0,     0,   267,   299,   300,     0,
       0,     0,   298,     0,     0,   362,   363,   365,   364,   412,
       0,     0,   215,   217,   216,  1008,  1009,   362,   414,     0,
     182,   701,   182,   730,   182,   721,   708,   182,   737,   182,
     749,     0,   804,   172,   172,     0,   172,     0,   172,   172,
       0,   172,     0,  1096,   969,   965,  1096,     0,   970,     0,
     964,  1096,     0,  1123,     0,   967,   966,  1096,     0,     0,
     961,   959,  1096,   161,   960,   962,   968,  1160,  1103,     0,
       0,  1145,  1158,  1147,  1202,     0,     0,   306,   307,   305,
     329,   332,   330,     0,     0,     0,     0,   413,  1005,   161,
     415,   620,   698,   727,   718,   709,   738,   172,   806,   812,
       0,   825,   822,   852,   857,     0,   871,     0,   974,   958,
      90,     0,   972,  1166,     0,   957,    90,     0,   973,     0,
    1104,  1162,  1164,     0,  1157,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   214,     0,   809,   161,   823,
     854,   885,  1096,     0,     0,  1096,     0,   172,  1163,  1159,
     266,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1007,   782,   161,   810,   824,   161,   855,   976,     0,  1096,
     975,     0,     0,   268,   321,     0,   319,     0,   322,     0,
     320,     0,   811,   856,    90,   977,    90,  1096,   317,   315,
     318,   316,  1096,  1096,   971,   979,   978
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    56,  1497,   175,   157,   977,  2573,  2574,   457,   458,
     459,   460,   158,   159,   160,   745,   736,    96,   871,   480,
    1288,  1763,  1434,  1447,  1430,  1999,  2681,   781,   655,   661,
     384,  1494,  2745,  1663,   358,   821,   824,   827,   836,    66,
     387,   393,   397,   400,    71,   403,    78,   419,   415,   409,
     426,    87,   436,    97,   103,   442,   444,   446,   514,   930,
    1733,   448,   451,   110,   467,   161,   163,  2739,   179,   181,
     224,   972,  1011,   503,   919,   505,   515,   922,   927,   517,
     519,   933,   522,   935,   533,   938,   940,   536,   540,   544,
     546,   549,   553,   589,   585,  1354,   567,   958,   963,   955,
    1342,   969,   570,   577,   581,   599,   602,   607,   612,   620,
    1002,  1004,  1006,  1008,   625,  1013,   227,   627,  1829,   246,
     630,   632,   636,   641,   649,   252,   256,   264,  1423,   666,
     272,   675,  1439,   677,   683,  1060,  1455,  1055,  1870,  1461,
    1459,  1872,  1056,  1464,  1466,   689,   692,   687,   274,   282,
     284,   731,  1138,  1520,  1126,  1617,  2042,  1141,  1145,  1136,
     997,  1396,  1400,  1408,  1410,  2026,   290,  1154,  1157,  1165,
    2334,  2335,  2336,  2027,  2717,  2718,  1187,  1193,  1196,  2801,
    2802,  2798,  2799,  2851,  2337,  2338,   298,   304,   312,   760,
     755,   317,   322,   324,   770,   777,  1222,  1227,   830,   818,
     330,   334,   787,   340,   794,  1668,   807,   808,  1258,  1253,
    1674,  1243,  1680,  1692,  1688,  1247,   812,   796,   346,   347,
     362,  1274,   365,   371,   848,   851,   845,   373,   376,   856
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2623
static const yytype_int16 yypact[] =
{
    5077,    99,   708,    33, -2623, -2623,  1383,  -167,  1072,   424,
    1270,   642,  4182,   121,   159,   109,  1359,   -11,  5328,   363,
    2863, -2623,    25,   -29,   184,  1345,   222,  1486,   -64,   221,
     206,   426,   204,   178,  -204,  4243,   179,   630,   247,   366,
     426, -2623,   196,    68,  1147, -2623,   347,   469,  1059, -2623,
      57, -2623,    75,  1438,   309,   111,   485,   294,   626,   226,
     555,   573,   127,   602,    -1,   940, -2623, -2623, -2623,  1164,
     802, -2623,    50,    31,   159,   436,    86,    82, -2623,   558,
     802, -2623, -2623,   802,   802,   568,   802, -2623, -2623, -2623,
   -2623,   802, -2623, -2623, -2623, -2623, -2623, -2623,  1017,   460,
     604,   645,   141, -2623,   802,  1568,   802,   802,  1416,   802,
   -2623, -2623, -2623,   471, -2623, -2623, -2623, -2623,  4733, -2623,
   -2623, -2623, -2623, -2623, -2623,   802, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623,  1526, -2623,
     802, -2623,   665, -2623, -2623,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159, -2623, -2623, -2623, -2623, -2623,
     616, -2623,   735,  1756,   694,    15,   537,   641,   395,  4275,
     595,  2115,  4692,   793,  4733,  2872, -2623,   518,   -88,   773,
     849,   800,   220,   268,  1056,  1069,   855,   426,   514, -2623,
     797, -2623,   654,   634,   495, -2623,   271, -2623,   643, -2623,
     581,   846,    72, -2623, -2623,  2146, -2623, -2623, -2623,   885,
     903,   949, -2623, -2623, -2623, -2623,    32, -2623, -2623, -2623,
   -2623,   698, -2623, -2623,  2146,  4540, -2623,   765, -2623,   927,
    2146,   989, -2623,  1041,  2146,  1003, -2623,   437, -2623,  1021,
    1024,    95, -2623,   802, -2623,  1026,    79,  1050,   229,  1097,
    1054,    11, -2623, -2623, -2623,  1062,   774,   159,   159,   802,
     802, -2623, -2623,  1070, -2623, -2623, -2623, -2623, -2623, -2623,
     856,   331, -2623,   991,   312,   802,  2146,   802, -2623,  1078,
   -2623, -2623, -2623, -2623, -2623,   802,  1389,   159,  1140,   802,
    1526,   802, -2623,  1074, -2623,  5395, -2623, -2623,   727,  1085,
    1104,   802, -2623,  1106, -2623, -2623,   -43,   467,  2146,  1110,
   -2623,  1462,   802,  1076, -2623,   754,   993,  1791,   451,  1135,
   -2623, -2623, -2623, -2623, -2623, -2623, -2623,  1145, -2623,   494,
     189,   258,   282,   541,   802,  1165,   802,   213, -2623,   802,
     898,  1192, -2623,   802,   802, -2623,     6,    44,    54,  1197,
    1526, -2623, -2623, -2623,  1245,   802, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623,   802, -2623,  1202,  1211,
   -2623,   802,  1434, -2623, -2623, -2623, -2623, -2623, -2623,   802,
   -2623, -2623,   802, -2623, -2623,   598,   598, -2623,  1214, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623,
    1018,   802,   802,  1231,  1234,  1254, -2623, -2623, -2623,   802,
     802,   802,   802,   802,   802,   802, -2623,   802, -2623,  1256,
   -2623,  1263, -2623, -2623, -2623,   839, -2623,  1259, -2623,  2146,
    1264, -2623,   802, -2623, -2623, -2623,   802,  1266,  1271,  1271,
    2146,   802,   802,   802,   802,   802,   802, -2623,   802,  4733,
    1568,   802,   802, -2623, -2623, -2623, -2623, -2623, -2623, -2623,
    1568,   802, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623,  1279, -2623,  1028,    -9, -2623, -2623, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623,   -55, -2623, -2623, -2623,
    1122, -2623,   -23,   684,   684, -2623, -2623, -2623,  1316, -2623,
    1325, -2623, -2623,   -73, -2623,  1156, -2623, -2623, -2623,  1175,
   -2623, -2623,  1526, -2623,   802,   802, -2623,  2146,  2146,  1526,
   -2623, -2623,  1526, -2623, -2623, -2623, -2623,  1526, -2623, -2623,
    2146,  1526,   802, -2623, -2623,  2146, -2623,  1351,   681,  1141,
      27, -2623, -2623,  1153,  2146,    59, -2623, -2623, -2623, -2623,
   -2623, -2623,  1364,  1365, -2623, -2623, -2623, -2623, -2623, -2623,
   -2623, -2623,  1360, -2623,  1166, -2623,   -81, -2623,   802, -2623,
   -2623,   954, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623,   581, -2623, -2623, -2623, -2623, -2623, -2623,
    1178,  1180, -2623, -2623,  1315,  1319,  1323, -2623, -2623,  1154,
   -2623,   802,  1390,  1159,  5395, -2623,  1526, -2623, -2623,  1396,
   -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623, -2623,  2146,  2146,  2146,  2146, -2623, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623, -2623,  1399, -2623, -2623,
   -2623, -2623, -2623,  1403,  1407,   159, -2623, -2623,  1411,  1413,
    1210,   802, -2623,   432,  1342, -2623,  1430, -2623,   597,  1348,
    5329,     9,  1437, -2623,  1435, -2623,  1445, -2623,    38, -2623,
    1443,  1449, -2623,  1457, -2623, -2623, -2623, -2623,   802, -2623,
    5395,  3934,  1436,    94,  1107,   303,  1361, -2623, -2623, -2623,
      49,   504,  1460,  1502,    60,   802,   418,   917,   106,  2146,
     159,  2477,   756,    34,   463,   370,    17, -2623,  1451,  1490,
    1511, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623,   802, -2623, -2623, -2623,
   -2623,   802,   802,   802,   802, -2623, -2623,   802,  1526,   802,
   -2623,   802,  1568,   802,  1518,  1526, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623, -2623,  1520,   484,   633, -2623, -2623, -2623,
   -2623, -2623, -2623,  1521, -2623, -2623, -2623, -2623,  1429, -2623,
    1525,  1534,  1452,  1527, -2623,  1538, -2623,  1539,  1461,  1546,
     468,   812,   472,    37,   780,  1549,   832, -2623, -2623,  1550,
    1556,  1558, -2623, -2623,  1563, -2623, -2623, -2623, -2623,  1172,
   -2623, -2623,  1190, -2623, -2623,  1260, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623, -2623,   802,   802, -2623,   802,   889,   802,
     802, -2623,  5395,  1503,  1583, -2623,  1077,  1585, -2623,  1101,
    1590, -2623, -2623,   399,   802,   802, -2623,  1587, -2623, -2623,
    1608,  1501,   802,  1609,   164, -2623, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623,  1615,
    1619,   802,   802,   802,   802,   802,   802,   802,  1620,  1624,
     159,  1628,  1629,  1526,  2146, -2623, -2623, -2623, -2623, -2623,
    1526, -2623, -2623,   802,   802,   802,  2146,   802,  1568,   802,
   -2623,   802, -2623, -2623, -2623, -2623, -2623,  1637,  1639, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623,
   -2623, -2623,   595, -2623,   802, -2623, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623,  2146,   802,  1526,  1526,   399,   399,   399,
    1526,  1568,   802,  1526, -2623, -2623, -2623,   802, -2623,   -81,
    1472,  1642,  1650, -2623, -2623,  1526, -2623,  1491,  1494, -2623,
    1658,  1665, -2623,  1668,  1183,  1644,  1652, -2623,   802,  4659,
     734,   599, -2623, -2623, -2623,   802,    65,  1247, -2623,  1417,
   -2623,  2477,  1421,   155,  1387,   103, -2623, -2623,   802, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623,   802,
    1692, -2623, -2623, -2623, -2623,   399, -2623, -2623, -2623, -2623,
   -2623,  1699,  1702,  4761, -2623, -2623,  1703,  1710,   802,  1718,
    1726,  1728,   -30,   -30,  -132,  1704,  1730,  1733,  1736,  1455,
    1456,  1740,  1741,  1743,   585,   585,  -132,  1748,  1750,  -132,
    1751,  1752,  5366,  1753,  1754, -2623, -2623,  1755,  1758,   719,
   -2623,  1757,  1761,  1789,  1790,   -30,  -132,  1792,  1798, -2623,
    1801, -2623, -2623,  1526,  1284,  1529,  1557,  1560,  1564,  1700,
    2475,  1565,  1268,   125,  1674,  1707,  1015,  1040,  1781,  1570,
    1571,  1717,  1820,  1602,    24,    91,   259,  1569,  2146,  2477,
    1794,   589,  1572,  1607,  1831,   102, -2623, -2623,    67,  1833,
    1301, -2623, -2623, -2623,  1835,  1614,   113,  2477,  1617, -2623,
   -2623, -2623,   159,  1838,  1839,   802, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623,     0, -2623,  1813, -2623,
   -2623, -2623,   802, -2623,   802, -2623, -2623, -2623, -2623,   802,
     802,   802,   303,  2146, -2623,  1841,  1186, -2623, -2623,   802,
   -2623, -2623,   802,  2146,   802, -2623, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623,
     159,   802, -2623,   802,   303,  1842,  1843, -2623, -2623, -2623,
   -2623,   802,   802, -2623,   159, -2623, -2623, -2623,   124,  1844,
    1845, -2623, -2623, -2623, -2623, -2623,   802,   802, -2623, -2623,
    1568,   802,   802, -2623, -2623, -2623, -2623,  1847,   802, -2623,
     802,  1739, -2623,   802, -2623,   802,  1744, -2623,  1852, -2623,
     524,   524,   877,   524,  1854, -2623,   916, -2623, -2623,  1856,
    1862,   957,  1864, -2623,  1865,  1866,  1868, -2623,   996,  1053,
    1869,  1870,  1874, -2623, -2623,  1875,  1877,  1879, -2623,   524,
     524,   524,   802, -2623, -2623, -2623, -2623, -2623, -2623,   802,
   -2623,   802,   138,  2146, -2623,   802, -2623,  1526, -2623,  5395,
   -2623, -2623,  1880, -2623, -2623,  1881, -2623, -2623, -2623, -2623,
    1858,  1140, -2623,   802,  1873,   802,   802,   802,  1372, -2623,
    1886,   802,   802,  1887,   802,   802,   802,   802,    45,    45,
    1888,   159,   159, -2623,  1526,   802,  1890,  1893,  1894,  1526,
    2146, -2623,   802, -2623, -2623, -2623,   802,   802,   802,  1526,
    2146,   399, -2623, -2623, -2623, -2623,  1568,   802,  1896,   399,
     802,   710, -2623,  1897, -2623, -2623,  1061,  3179,   802, -2623,
     802,  1899,  1892,   802, -2623, -2623, -2623,  1900,  1444,  4733,
    1622,  1653,  1656,    22,  2146,  1657, -2623,   242,  1766,   101,
    1660,  1661,   107, -2623, -2623,   476,  1724,   768,   857,  2477,
     854, -2623,  1909,  1654, -2623,   820, -2623, -2623, -2623, -2623,
    2477,  1659, -2623, -2623, -2623, -2623, -2623,   802, -2623,   802,
   -2623, -2623,   802,   802, -2623,   802, -2623,   802, -2623, -2623,
   -2623, -2623,  1711,   802, -2623,   802,   205, -2623, -2623, -2623,
   -2623,  1911,  1916, -2623,   802,   -30,   -30,   -30, -2623, -2623,
   -2623, -2623, -2623, -2623,  1917,   -30,   -30,   -30,   486, -2623,
   -2623,   585,   -30,   -30,   -30, -2623, -2623,   -30,   -30,  1918,
     -30,   -30,  1919,   585,   712, -2623,  1921,  1922,  1926, -2623,
     758, -2623,  1137,  1220, -2623,   783, -2623,  1645,  1928,  1929,
    1930,   585,   585,  -132,  1936,  1938,  -132,  1939,  1941,  1942,
     -30,   -30, -2623,  1943,   -30,   -30, -2623,  1944, -2623, -2623,
   -2623, -2623, -2623, -2623,   159, -2623, -2623, -2623,  4733,   693,
     802,  1580,  1634,   623, -2623, -2623, -2623,   809, -2623, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623,
    1945,   802, -2623, -2623,   159,  1946,   802,  2146,   159,  1671,
    1697,  1701,   134,   187,  1715,   215,  1618,  1630,  1949,  1950,
    1963,  2475,  1964,  1965,  1966,  1648,  1651,  1207,  1973,   802,
    1664,  1680, -2623, -2623,   159,  2146, -2623, -2623,  2146,   802,
     118,  1977,   802,  1526,   159, -2623,  1979,  2146,  2146,   802,
   -2623, -2623, -2623,   159,   159,  2146, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623,  2146,   802,   159, -2623, -2623, -2623,   802,
   -2623, -2623,  1980,   802,  1749,   612,   802,  1760,   802,   696,
     802, -2623,   802,  1763,  1764,   802,   802,   802,   802,   802,
     802,   802,   802,    23,   802,   802,  1765, -2623,   802,   802,
     802,   802, -2623,  2146,  1526,  1982,  1984,  1985,   802,   802,
    1526, -2623,   802,   802,   802,  2146,   303, -2623,   802,   802,
   -2623, -2623, -2623,  1986, -2623, -2623, -2623, -2623, -2623, -2623,
    1988,   802,   802, -2623,   802,   802, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623, -2623, -2623,  1989,  1998,  2001, -2623, -2623,
     524,  2002,  2003,  2005, -2623,  2006,  2007,  2018,  2019,  2008,
   -2623,  2033, -2623, -2623, -2623,  2039,  2040,  2042, -2623,  2043,
    2044,  2046, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623,
   -2623, -2623,   802,   802,   802, -2623, -2623,   802, -2623,  1526,
   -2623, -2623,  1140,   802,  1526,   802,   802,   802, -2623,   802,
     802,  2048,   802, -2623,   802,   802,  2052,   802,   802,   802,
     802, -2623, -2623,  2053,  2056,  2146, -2623, -2623, -2623,   802,
   -2623, -2623, -2623, -2623,  1526, -2623,   836,   802,   836,   399,
    1526,  2146,   802,   802,  2057, -2623, -2623, -2623,   802, -2623,
   -2623, -2623, -2623, -2623,  2146, -2623,  2146,   802, -2623, -2623,
     -81,  2058,  2059,  2060,  2061,  2066,  2146,  1526, -2623,  2146,
    2146,  2146,  4733,  2146,  1526,  2146, -2623, -2623,  2146, -2623,
   -2623,  4733,  2146,  2146,  2146,  4733,  2146, -2623,  2146,  2146,
     802, -2623, -2623,  2146,  2146,  2146, -2623, -2623,  2146,  2146,
   -2623, -2623, -2623, -2623,  2146,  2146, -2623, -2623, -2623, -2623,
   -2623,   802,   802, -2623, -2623,  2065,   802, -2623, -2623,  2067,
   -2623, -2623,   802, -2623, -2623, -2623,   -30, -2623, -2623, -2623,
    2068,  2069,  2070, -2623, -2623,  -132,  2074,  2077,  2078,   -30,
   -2623, -2623, -2623, -2623, -2623,   585, -2623, -2623,  2080,   -30,
    2081,  2088,  2090,   585,   585,  -132,  2094,  2096,  2097,  1037,
   -2623,  1119, -2623,  1371,  1706,  2098,  2101,  2106,   585,   585,
    -132,  2109,  2110,  -132,  2113,  1775,  2116,  2117,  2119,   585,
     585,  -132,  2121,  2123,  -132,  2124,  1814,  2125,  2126,  2127,
     585,   585,  -132,  2130,  2131,  -132,  2132,  2133,  2134,  2135,
     585,   585,  -132,  2137,  2139,  2140,   585, -2623, -2623, -2623,
   -2623, -2623,  2145, -2623, -2623,  2147,   585,  2148,  2149, -2623,
   -2623,   -30, -2623, -2623,  2150, -2623,  1526, -2623,  2146,   802,
     802,  2146,   802,  2151,  1529, -2623, -2623, -2623, -2623, -2623,
   -2623,  2152,  2146,   159,  2153,  2146,  1526, -2623,  2154,  1529,
     802,   802,   802,   802,   802,   802,   802,   802,   802,  2157,
    2158, -2623, -2623, -2623,  2161, -2623, -2623, -2623,  2159,  2164,
   -2623, -2623, -2623,   802,  2146,   802,  2166,  1529,   159,  1526,
    1526, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623,
   -2623,   802,  1568, -2623, -2623,  1526,  1526,   802, -2623, -2623,
    1526,  1526, -2623, -2623, -2623, -2623,   802,   802,   802,   802,
     802,   802,   802,   802,   802,   802,  3482, -2623,   802,   802,
     802,   802,   802,   802,   802,   802,   802,   802,   802,  2064,
    2168,   802, -2623,   802,   802,   802,  2165,  2172, -2623, -2623,
    1526,   399, -2623,  2173,  2174, -2623, -2623,  1568,   802, -2623,
    2176,  1526,  2146, -2623, -2623, -2623,  2179, -2623, -2623, -2623,
   -2623,   524,   524,   524, -2623, -2623, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623,
    1529,   802, -2623,   802, -2623,   802,  1526,   802, -2623,  1568,
     802, -2623,   802, -2623,  2143,  2180,  2181,   802,   802, -2623,
     802,   802,   802,   802,  2183,  2184,  1526,  2146, -2623, -2623,
     802, -2623,   802, -2623,   399,  1061,   802,  2185, -2623,   802,
   -2623, -2623,  4733, -2623,  2189,  2190,  2191,  2193,  2194,  1526,
   -2623,  1061,  1061,  1061,  1526, -2623,  1061,   399,  1061,  1061,
    1526, -2623,  1061,  1061,  1061,  1526, -2623,  1061,  1061,  1526,
    2146,  1061,  1526,  1061,  1061,  1526,  1061,  1526, -2623, -2623,
    2196,  4733,  2197,   802, -2623, -2623, -2623, -2623,  2200, -2623,
   -2623, -2623, -2623,   -30,   585, -2623, -2623, -2623, -2623, -2623,
   -2623,  2202, -2623, -2623,   585,  2203,  2204,  2205,   585,   585,
    -132,  2207,  2209,  2211,  2212,  2214,  2216,   585,   585,  -132,
    2210,  2219,  2220,  2221,  2222,  2225,   585,   585,  -132,  2227,
    2228,  2229,   585,   -30,   -30,   -30,   -30,   -30,  2231,   -30,
     -30,  2232,   585,   585,   -30,   -30,   -30,   -30,   -30,  2233,
     -30,   -30,  2234,   585,   585, -2623, -2623, -2623, -2623, -2623,
    2235, -2623, -2623,  2237,   585, -2623, -2623, -2623, -2623, -2623,
    2238, -2623, -2623,   585, -2623,   585,  2239, -2623,  2240,  2241,
   -2623,  5395, -2623,  1061,  2242,  2146,  1061,   802,  2146,  2243,
   -2623,  1061, -2623, -2623,  1061, -2623,  2146,  2244,   802,   802,
     802,   802,   802,   802,   802,   802,   802,   802,   802, -2623,
   -2623, -2623,  2146,  1061,   802,  2146,  2246, -2623,  1568,  1568,
    2146,  1568,  1568,  2146,  2146,  1568,  1568,   802,   802,   802,
     802,   802,   802,  1529,   802,   802,   802,  1621,  1716,  1759,
    1808,  1815,  1832,  1882,  3482, -2623,  1883, -2623, -2623,  1529,
     802,   802,   802,   802,  1529,   802,   802,   802,   802,   802,
     802,  1526,   802,  1799,  1529,   802,   802, -2623, -2623,   399,
     159,  2146,  2146, -2623, -2623, -2623,   399,  1526,  2249, -2623,
   -2623, -2623, -2623,   802, -2623, -2623,  1568,   802, -2623, -2623,
   -2623,  1384,  2255,  2256,  2258,  2259,   802,   802,   802,  2260,
     836,   836, -2623,  1061, -2623, -2623, -2623, -2623,  2261, -2623,
   -2623,  1526,  2263,  2264,  2266,  2267,  2146,  2268, -2623, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623, -2623,   399,  1061, -2623,   399, -2623, -2623,
     399, -2623,   399,  2270,  1526,  2272, -2623,   802, -2623, -2623,
     -30,   585, -2623,   -30,   -30,   -30,   -30,   -30,  2273,   -30,
     -30,   585,   -30,   -30,   -30,   -30,   -30,  2274,   -30,   -30,
     585,   -30,   -30,   -30,   -30,   -30,  2275,   -30,   -30,   585,
     -30, -2623, -2623, -2623, -2623, -2623,   585, -2623, -2623,  2277,
     -30,   -30, -2623, -2623, -2623, -2623, -2623,   585, -2623, -2623,
    2278,   -30, -2623,   585,  2279, -2623,   585, -2623, -2623,   585,
   -2623, -2623,  1526, -2623,  2146,  1061, -2623,  2280,  1526,   802,
   -2623, -2623,  1526,   802, -2623, -2623, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623,   802,   802,  1061, -2623,  2292,  1526,   802,
    1568, -2623,  1061,   802,  1568,  1061,  1061,  2146, -2623,   802,
    2294,  2294,   802,   802,  2294,  1529,  2294, -2623,  2146,  2475,
    1305,  2296,  2297,  2298,  2299,  2303, -2623,   159,  1529,  2294,
    2294,   802,   802,  1529,   802,   802,   802,   802,   802, -2623,
    1568,   802,  2305, -2623, -2623,   802,  2294,   159,    21,  1526,
    1526,   159,   399,  2316, -2623, -2623, -2623,  2323,   802, -2623,
    2325,  2327,  2328,  2329,  2330,  2331,  2332,   802,   802, -2623,
   -2623,  2337,    -8,  2146, -2623,  2345,    -7,  2146, -2623, -2623,
   -2623, -2623, -2623, -2623,  2347,    -8,   802, -2623, -2623, -2623,
   -2623, -2623, -2623, -2623,   585, -2623, -2623,   -30, -2623, -2623,
   -2623, -2623, -2623,   585, -2623, -2623,   -30, -2623, -2623, -2623,
   -2623, -2623,   585, -2623, -2623,   -30, -2623,   -30,   585, -2623,
   -2623,   -30,   585, -2623, -2623,   585, -2623, -2623,   802,  1061,
   -2623,  2146,  2146,   802,  2146,   802, -2623, -2623, -2623,  2146,
    2146,   802, -2623, -2623,  2146, -2623, -2623, -2623,  1061,  2350,
   -2623, -2623, -2623,  1529,   802, -2623,  2351, -2623, -2623,  1526,
    2352, -2623, -2623,  2354, -2623, -2623, -2623, -2623, -2623,  2355,
   -2623, -2623,  1529,   802,  2356, -2623, -2623,   802,  2146, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623,    21,  1906,  2477, -2623,
   -2623, -2623,   159,  2357,  2358,  2359, -2623, -2623, -2623,  2361,
    2362,  2363, -2623,    43,    43,    -8, -2623, -2623, -2623, -2623,
    2364,  2146, -2623, -2623, -2623, -2623, -2623,    -8, -2623,  2365,
     -30, -2623,   -30, -2623,   -30, -2623, -2623,   -30, -2623,   -30,
   -2623,  5395, -2623,  1061,  1061,   802,  1061,  2367,  1061,  1061,
     802,  1061,   802, -2623, -2623, -2623, -2623,  2368, -2623,   802,
   -2623, -2623,  2370, -2623,   802, -2623, -2623, -2623,  2372,   802,
   -2623, -2623, -2623,  1526, -2623, -2623, -2623,  1906, -2623,  1967,
    1902,  2477, -2623, -2623, -2623,  2375,  2376, -2623, -2623, -2623,
   -2623, -2623, -2623,   862,   862,   862,   862, -2623, -2623,  1526,
   -2623, -2623, -2623, -2623, -2623, -2623, -2623,  1061, -2623, -2623,
    2373, -2623,  4733, -2623, -2623,  2378, -2623,  1529, -2623, -2623,
    1529,   802, -2623, -2623,   802, -2623,  1529,   802, -2623,  2146,
   -2623,  1967, -2623,   159, -2623,  2381,  2382,   802,   802,   802,
     802,   802,   802,   802,   802,    -7,  2383,  4733,  1526, -2623,
    4733, -2623, -2623,   802,  2385, -2623,   802,  1061, -2623, -2623,
   -2623,  2386,  2416,   802,  2417,   802,  2418,   802,  2419,   802,
   -2623, -2623,  1526, -2623, -2623,  1526, -2623, -2623,  2421, -2623,
   -2623,  2422,  2423, -2623, -2623,  2424, -2623,  2425, -2623,  2427,
   -2623,  2428, -2623, -2623,  1529, -2623,  1529, -2623, -2623, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623, -2623
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2623, -2623,    -3, -2623,   618,  -956, -1457,  -993,  1687, -2623,
     828,  -337,  1610,   -49,    18, -2623, -2623, -1734,  1859,  1673,
    -695,  1171,  -938,   787,  1641, -2623,  -996, -2623, -2623, -2623,
     -78, -2623,  -509, -1216, -2623, -2623, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -1492,  -489,
    1081, -2623, -2623, -2623, -2623, -2623, -2623, -1691, -2623, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623, -1539, -2623, -2623, -2623, -2623, -2623,  -710,
   -2623, -2623, -2623, -2623, -2623, -2623,    20, -2623, -2623, -2623,
   -2623,    28,  -712, -2509,  -289, -2623, -2623, -2623, -2623, -2623,
    -366,  -361, -2623, -2623, -2622, -2623, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623, -2623,  1640, -2623, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623,
   -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623, -2623
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1300
static const yytype_int16 yytable[] =
{
      70,   428,  1974,  1341,   370,  1591,  1153,  1156,   109,  1180,
     842,   300,  2120,   178,  2122,  1664,   690,  1669,    67,    68,
     441, -1143,  1197,  2736,  2742,   931,    67,    68,  2039,   111,
     395,   960,   309,   249,    67,    68,    67,    68,  2688,  1184,
     333,  1432,  1782,  1699,  1700,  1701,    67,    68,   846,   364,
    1554,  1063,   375,   311,   405,   386,   924,   975,   849,   392,
     326,   359,   399,   966,  2713,  1139,   402,   404,    67,    68,
     414,    67,    68,   421,   425,   633,  1148,   429,    67,    68,
     430,   431,  1498,   437,   673,    67,    68,   623,   438,    67,
      68,  1731,   247,  1574,    67,    68,   917,  1057,  1121,   669,
    1064,   452,   456,   461,   462,   466,   468,  1572,  1449,    67,
      68,  1452,   775,   111,    67,    68,    67,    68,  1198,  1411,
     634,  1791,   472,  1122,  1199,  1248,  1556,  1795,  1483,  1641,
      67,    68,   936,   910,    79,  1428,   471,   568, -1299,   180,
    1642,  1158,  1705,   913,  1992,  1159,   449,   116,  1581,  1433,
     920,  1524,   165,   162,  1962,   166,   301,   481,    67,    68,
     925,   422,   302,   111,   303,  1429,    57,  1993,  1297,   651,
    1994,   450,  2774,  2775,  1058,  1298,  2778,  2852,  2780,   273,
     976,  1995,   513,   111,   313,   360,   167,   534,  2737,  2743,
     918,  2785,  2786,   111,   168,   967,  2790,  2791,   695,   937,
    2794,   961,  1249,  1412,  1996,  2795,  2796,  1964,   535,   921,
     543,   283,   548,   552,   506,   738,    67,    68,   670,  1160,
     507,   750,  1997,   588,  1827,   111,   275,   591,  1557,  2878,
     410,   116,   776,   569,   678,  1967,   635,   265,   621,   119,
    1065,   926,  2810,  1161,   843,   299,   253,   120,   121,   291,
    1582,   323,  1333,  1334,  1335,   406,   819,   169,   327,   508,
     671,  1555,   111,  1123,  2838,   423,   765,  2839,  1786,   292,
     250,   293,  2842,  1783,   331,   361,   698,   699,  2845,  1404,
     624,   116,   574,  2848,  1149,  1398,   111,   509,   276,  2738,
    2744,   608,   746,   251,   748,   420,   396,   691,   111,   378,
    1525,   116,   751,   754,  1575,   757,   761,   407,   763,  1185,
     277,   116,  1162,   170,   408,   844,   739,  1066,   773,  1124,
    1416,  1592, -1143,   119,  1140,   822,   759,  1067,   786,   788,
     578,   120,   121,  1732,   510,  1200,  1186,   124,   171,   674,
     172,   379,    69,   116,  2040,  1125,   424,   847,   679,   825,
     411,   831,  1792,   833,   835,   962,   837,   850,  1796,  1068,
     840,   841,  2811,  2897,  1573,   278,  2900,  1129,   968,   173,
    1150,   855,   857,   119,   111,  1406,  1526,   332,   511,   512,
     116,   120,   121,   858,   363,  1963,   154,  1564,   861,   863,
    2915,   155,   156,   119,   412,   413,   864,   294,   341,   865,
    1558,   120,   121,   119,   116,  1585,   511,  2812,  2924,  1130,
     609,   120,   121,  2925,  2926,  1163,   116,  1787,   875,   876,
     374,   124,  1583,   732,  1527,  1213,   880,   881,   882,   883,
     884,   885,   886,   680,   887,   119,   391,   174,  1965,   380,
     381,   664,  1623,   120,   121,  1029,  1030,   225,   342,   895,
     834,    88,  1828,   896,  2074,   325,   295,   343,   901,   902,
     903,   904,   905,   906,   226,   907,  1968,   456,   911,   912,
     154,   124,   119,   348,  1635,   155,   156,   456,   914,  1188,
     120,   121,  1129,   254,   285,   377,  1998,   909,   344,   681,
     443,   124,   116,  1788,  1031,   328,   119,   314,  1286,  1840,
    1841,   124,  1797,   296,   120,   121,   255,   315,   119,  1944,
     733,   388,   297,   809,   778,   682,   120,   121,   329,   575,
     154,   740,   610,  1218,  1130,   155,   156,   815,   741,   742,
     797,   943,   944,   124,  1244,  1922,  1959,  1560,  1925,   279,
     154,  1789,   576,  1142,  1561,   155,   156,   382,  1842,   952,
     154,  1131,   372,   828,   611,   155,   156,   604,  1987,   592,
     389,   286,   554,   427,   743,  1658,  1659,   579,  1132,  1133,
     124,  1321,   432,   520,   810,  1014,   957,   390,   555,   417,
      89,   593,   154,   521,   119,   978,   280,   155,   156,  1189,
     580,   799,   120,   121,   124,  1245,   594,  1219,    67,    68,
     556,  1445,  1040,   816,   734,   379,   124,   394,    90,   445,
    1041,  1042,    91,   779,  1337,    67,    68,  1143,  1009,   154,
     557,   998,   735,   418,   155,   156,  1128,   866,  1392,    67,
      68,  1054,   164,   176,  1032,  1033,  1751,   558,   114,  1190,
     248,   559,   665,   154,  1755,    67,    68,   281,   155,   156,
     447,  1073,   114,  1798,   316,   154,  2597,  2598,   345,  1043,
     155,   156,  1134,  1135,   287,    92,  1131,  1806,  1028,   482,
     560,   561,  1223,  1194,   744,   383,  1287,   469,  1816,   613,
     288,   104,   124,  1132,  1133,   956,   385,  1191,  1843,  1844,
    1220,   614,   416,  1152,   867,  1072,    67,    68,  1938,    67,
      68,   318,   105,   380,   381,  1660,  1661,   595,    93,   817,
    1144,  1034,  1151,  1799,  1757,  1164,    94,    95,   615,    58,
     780,  1035,  1036,  1566,  1467,  1860,  1861,   433,   434,   562,
    1945,   154,  1468,  1469,  1662,   493,   155,   156,   114,   563,
     811,  1264,   829,  1204,  1266,   289,  1224,  1268,  1205,  1206,
    1207,  1208,  1446,  1037,  1209,   106,  1211,   805,  1212,   456,
    1214,  1246,    59,  1874,  1221,  1845,   596,   114,  1393,   868,
     650,  1875,  1876,  1192,  1862,  1846,  1847,  1134,  1135,   694,
      60,  1470,   766,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,  1277,   605,  1181,  1907,  1908,   616,  1044,
    1045,  1387,   494,   564,   565,    67,    68,  1848,   319,   122,
      61,   382,   379,   597,  2133,   504,   790,   606,   767,   518,
    1877,   379,   598,   122,  1394,   545,  1567,   928,   435,    62,
    1946,  1269,  1270,    63,  1271,  1273,  1275,  1276,   516,  1225,
     571,   617,  1250,   890,   891,  1909,  1813,    64,   107,  2018,
    1395,  1289,  1290,   637,   572,  2369,  2370,  2371,  1294,  1295,
     701,   702,   869,    88,   600,    67,    68,  1388,   870,  1182,
     590,   929,   768,  1647,  1239,   566,  1046,   791,  1301,  1302,
    1303,  1304,  1305,  1306,  1307,  1947,  1047,  1048,  1568,   320,
     573,  1049,    67,  1272,  1255,   696,   697,  1389,   601,   321,
    1316,  1317,  1318,  1251,  1320,   456,  1322,  2178,  1323,   122,
     380,   381,   618,  1226,  1863,  1864,  1948,   703,  1050,   380,
     381,  1471,  1472,   704,  2748,   756,  2062,  2191,   638,  1326,
     705,  1328,   706,  2023,   603,  1240,   622,   707,   122,  1665,
     708,  1330,  2228,    67,    68,  2231,   709,   108,   456,  1338,
    1327,  2279,   628,  2239,  1340,  1256,  2242,   710,   979,   980,
    1878,  1879,  1183,   711,  2250,   619,  2287,  2253,   820,   823,
     826,  1353,   712,   639,  2260,  1357,   629,  1241,  1671,   631,
    1390,  1129,  1397,  1399,  1402,  1910,  1911,   769,  1807,   713,
    1407,  1865,    89,   657,  2306,  1413,   737,  1814,  1473,  1752,
    1666,  1866,  1867,  1458,  1523,   928,  1414,   663,  1474,  1475,
    2690,   714,   640,  1476,   792,   981,  1949,    65,   382,  1677,
      90,   982,   439,  1130,  2119,  1424,   667,   382,   668,   715,
     672,  1808,  1578,  1868,  1803,  1391,  1530,  1880,   379,  1672,
    1477,   716,   717,   793,  2817,  1155,  1801,  1881,  1882,   929,
    2195,  2196,  1883,  1802,  2123,   676,  2820,  1815,  1685,   688,
     582,  1538,  1912,   718,   379,  1531,   693,   398,  1532,  1252,
     983,  1950,  1913,  1914,   586,   700,    80,    92,   764,  1884,
    1678,  1280,  1281,   749,  1760,  1761,   719,   984,   652,   771,
    1539,  1809,  1559,  1540,  1804,   349,  1541,  2372,  1533,  2197,
     720,  1242,   721,   985,  1915,  1283,  1284,   350,   772,   986,
     774,    81,  1127,  1584,   783,  1689,   795,   987,   722,  1686,
      93,  1257,  1590,  1542,   723,   379,   114,  1534,    94,    95,
    1535,   724,  2204,  2205,   351,   587,   380,   381,   725,  1618,
     813,  1619,  1885,    67,    68,   583,  1620,  1621,  1622,   814,
    1886,  1887,  1543,  1810,   379,  1544,  1628,   726,   112,  1629,
    1762,  1631,   380,   381,  1805,  1131,  1667,    67,    68,   832,
     727,   728,   335,   729,   988,   789,  1690,  1263,  1633,   584,
    1634,  2206,  1132,  1133,   838,    82,    67,  1352,  1638,  1639,
    1626,  1627,   684,   989,   653,  1265,   839,   114,   990,  1888,
     991,   852,   658,  1645,  1646,  1673,   859,   456,  1648,  1649,
     685,  1980,  1981,   730,   352,  1651,   860,  1652,   873,   379,
    1654,   659,  1655,   380,   381,  1896,  2776,   874,   992,   993,
    1709,    83,    84,  1897,  1898,   877,   994,   379,   878,  2198,
    2199,  2814,  2816,   115,   382,  2787,  1679,   654,    67,    68,
      67,    68,   380,   381,  1536,   995,   440,   353,   879,  1702,
     888,   336,  2448,  1401,   892,  1267,  1703,   889,  1704,   894,
     382,  2457,  1707,  1522,   453,   337,  1134,  1135,    85,  1545,
    2466,   455,  1899,  1024,   915,  1687,   898,   899,  1713,  1537,
    1716,   401,  1718,  1719,  1720,  1722,   686,   122,  1724,  1725,
     923,  1727,  1728,  1729,  1730,   117,  1577,   379,   660,  1715,
    2691,   996,  1739,   916,  1546,   379,  2200,   380,   381,  1745,
     932,  2207,  2208,  1746,  1747,  1748,  2201,  2202,   354,   934,
    2545,   382,    86,   456,  1753,   380,   381,  1756,  1167,  1889,
    1890,  1547,  1691,  1195,   939,  1766,  2558,  1767,   379,   959,
    1769,  2563,   379,   941,    98,   954,  2360,   355,  2203,  1758,
     382,   964,    67,    68,   973,   356,   338,  1488,   122,   970,
     971,    99,   854,   123,   974,    67,    68,  1778,   999,   339,
    1000,   357,  1001,  2872,  2213,  2214,  1003,    67,    68,  2875,
    1005,  1007,    67,    68,  1818,  1010,  1819,  1012,  2209,  1820,
    1821,  1016,  1822,  1021,  1823,   380,   381,  1022,  2210,  2211,
    1825,  1023,  1826,   380,   381,  1025,  1891,  1026,  1027,    67,
      68,  1832,  1900,  1901,   177,   382,  1892,  1893,   752,  2396,
    1038,  1894,  1721,  2215,   257,  1039,  1051,    67,    68,  1061,
    2212,  1489,  1059,   382,  2587,   862,   380,   381,  1069,  1062,
     380,   381,  2414,   366,  1070,   463,   100,  2922,  1895,  2923,
     367,  1071,  1137,   258,  1146,    67,    68,  1201,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,  1939,  1940,  1942,  1902,
     101,   784,   753,  1110,    67,    68,  1202,  1147,  1310,  1903,
    1904,   266,  1293,   382,  1905,  1203,  1937,  1111,  1952,  1490,
    1491,   382,  1215,  1955,  1217,  1228,  1112,  1771,  1229,   464,
    1230,  1233,    67,    68,  1492,  1495,  1496,  1113,   102,  1231,
    1232,  1906,   259,  1234,  1235,  2682,  1983,  1985,  2685,  1236,
    2687,  1237,  2686,  1254,   382,  1259,  1991,   260,   382,  2001,
     473,  1260,  1261,  2700,  2701,  2699,  2007,  1262,  1278,  1114,
    2704,    67,    68,  2216,  2217,   785,   453,   454,   455,  1493,
    2715,  2012,    72,    67,    68,  1941,  2014,  1279,    73,  1282,
    2016,  1115,  2019,  2020,  1285,  2022,  2024,  2025,  1291,  2028,
     267,  1772,  2031,  2032,  2033,  2034,  2035,  2036,  2037,  2038,
    2041,  2043,  2044,  1292,   268,  2046,  2047,  2048,  2049,  1299,
    1296,   261,   465,  1300,  1308,  2055,  2056,    74,  1309,  2058,
    2059,  2060,  1311,  1312,   474,  2063,  2064,    67,    68,  1943,
    1495,  1496,  1324,  1116,  1325,   310,  1343,  1344,  2067,  2068,
    2218,  2069,  2070,   269,  1345,    75,  1347,   475,   476,  1348,
    2219,  2220,  1349,   262,  2577,  2311,   477,    67,    68,  1984,
    1350,  2581,  1351,   263,    67,    68,  1958,  1495,  1496,  1773,
    1774,  1355,  1117,    67,    68,  1986,  1495,  1496,   478,  1356,
    1409,  1403,  2221,   368,  1775,  1405,   369,  1415,   479,  2090,
    2091,  2092,    76,  1417,  2093,   270,  1418,  1421,  1435,  2095,
    2098,  1118,  2100,  2101,  2102,  1422,  2103,  2104,   271,  2106,
    2363,  2107,  2108,  1425,  2110,  2111,  2112,  2113,   470,  2608,
    2097,  1426,  2610,  1427,  1436,  2611,  2117,  2612,  1437,  1776,
    1587,  1438,  1440,  1441,  2121,  1442,  1443,    77,  1444,  2126,
    2127,  1119,  1450,  1120,  1451,  2129,  1453,  1454,  1460,  1462,
    1463,  1478,  2378,  1465,  2132,  1479,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,  1480,  1481,  1484,  2160,  1632,   532,
    2145,   539,   542,  1485,   547,   551,  1486,  1502,  1499,  2151,
     495,  1500,  1640,  2156,  1529,  1501,  1521,  1528,  2168,  2169,
    1548,  1549,  1550,  2171,  1551,  1552,  1553,  1562,   496,  2173,
    1569,  1570,  1448,  1565,  1593,   626,  1571,  1576,  1580,  1594,
    1579,  1586,  1588,  1589,  2871,   497,  1625,  1636,  1637,  1643,
    1644,  1650,  1653,   797,   642,   648,  1657,  1656,   498,  1670,
     656,  1675,  1595,  1596,   662,  1597,  1598,  1676,  1681,  1712,
    1682,  1683,  1684,  1779,  1693,  1694,  1599,   499,  1695,  1817,
    1696,   500,  1697,  1698,  1717,  1710,  1711,  2722,  1600,  1601,
    1723,  1726,  -488,  1735,  1740,   501,  1602,  1741,  1742,  1603,
    1754,  1800,  1759,  1768,  1780,  1770,   747,  1781,  1785,  1790,
     798,  1793,  1794,  1811,   799,  1830,  1812,  1604,   758,  1824,
    1831,  1836,  1855,  1858,  1605,  1606,  1869,  1871,  1607,  1736,
    1737,  1873,  1916,  1917,  1918,  1919,  2274,  2275,   782,  2277,
    1923,   502,  1924,  1969,  1926,  1927,  1928,  1931,  1960,  1934,
    1951,  1954,  1961,  1971,  1972,  1970,   800,  2288,  2289,  2290,
    2291,  2292,  2293,  2294,  2295,  2296,  1966,  1973,  1975,  1976,
    1977,  2530,  2531,  1978,  2533,  2534,  1979,  1982,  2537,  2538,
    2302,  2000,  2304,   762,  2004,  2015,  2017,  2052,  2053,  2054,
    2549,  2065,  2066,  2222,  2071,   801,  1608,  2021,  2310,   456,
    2029,  2030,  2045,  2072,  2314,  2073,  2800,  2075,  2076,  2077,
    2078,  2079,  2082,  2317,  2318,  2319,  2320,  2321,  2322,  2323,
    2324,  2325,  2326,  2080,  2081,  2339,  2340,  2341,  2342,  2343,
    2344,  2345,  2346,  2347,  2348,  2349,  2350,  2083,  2353,  2585,
    2354,  2355,  2356,   853,  2084,  2085,  2086,   802,  2087,  2088,
    2089,   803,  1609,  2105,   456,  2364,  2109,  2114,  1610,   893,
    2115,  2128,  2233,  2134,  2135,  2136,  2137,    67,    68,  2170,
     900,  2138,  2172,  2175,  2176,  2177,  1611,   804,  2179,   908,
     805,  2180,   112,  2181,  2184,  2550,  2186,  1612,  2373,  2800,
    2374,   806,  2375,  2187,  2377,  2188,   456,  2379,  2192,  2380,
    2193,  2244,  2194,  2223,  2384,  2385,  2224,  2386,  2387,  2388,
    2389,  2225,  1935,  2229,  2230,  1613,  1614,  2394,  2232,  2395,
    2572,  2234,  2235,  2398,  2236,  2240,  2400,  2241,  2551,  2243,
    2245,  2246,  2247,   112,  2251,  2252,  1615,  2254,  2255,  2256,
    2257,  2261,  1953,  2262,   897,  2263,  1957,   945,   946,  2265,
    2402,  2266,  2268,  2269,  2381,  2271,  2278,  2280,  2283,  2286,
     950,  2297,  2298,  2300,   112,   953,  2299,   115,  2301,  2357,
    2437,  2305,  1988,  2352,   965,   537,  2358,  2552,  2361,  2362,
    2365,  1616,  2003,  2368,  2553,  2382,  2383,  2390,  2391,  2435,
    2399,  2008,  2009,  2672,  2403,  2404,  2405,  2675,  2406,  2407,
    2433,  2554,  2436,  2013,  2438,   942,  2441, -1161,  2443,  2444,
    2445,  2449,   947,  2450,  2458,   948,  2451,  2452,   115,  2453,
     949,  2454,  2502,  2459,   951,  2460,  2461,  2462,  1849,   117,
    2463,  2467,  2468,  2710,  2469,  2476,  2479,  2487,  2490,  2493,
    1859,  2494,  2496,  2499,  2500,  2501,  2504,  2509,  2513,   115,
    2529,  2555,  2557,  2583,  1017,  1018,  1019,  1020,  1920,  1921,
    2589,  2590,  2591,  2592,  2596,   872,  2600,  2602,  2331,  2603,
    2604,  2853,  2605,  2607,  2507,  2613,  2615,  2624,  2633,  2642,
     117,  2648,  2652,  2655,  2661,  2514,  2515,  2516,  2517,  2518,
    2519,  2520,  2521,  2522,  2523,  2524,  2669,   123,  2680,  1015,
    2693,  2527,  2694,  2695,  2696,   456,   456,  2697,   456,   456,
    2712,   117,   456,   456,  2539,  2540,  2541,  2542,  2543,  2544,
    2723,  2546,  2547,  2548,  2858,  2860,  2862,  2864,  2724,  1166,
    2726,  2727,  2728,  2729,  2730,  2731,  2732,  2559,  2560,  2561,
    2562,  2735,  2564,  2565,  2566,  2567,  2568,  2569,   123,  2571,
    2741,  2747,  2575,  2576,  2773,  2779,  2890,  2782,  2783,  2784,
    2789,  2804,  2556,  2805,  2806,  2807,  2808,  2809,  2818,  2821,
    2584,  2832,  2840,   456,  2586,  2843,  2846,  2867,  2588,   123,
    2855,  2856,  2870,  2593,  2594,  2595,  2880,  2881,  2891,  2899,
    1734,  2903,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     538,  2904,  2906,  2908,  2910,  2914,  2916,  2797,  2917,  2918,
    2919,  1210,  2920,  2921,  2616,  2854,  2850,     0,  1216,     0,
    1238,     0,     0,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,     0,  2692,     0,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,     0,     0,  1314,     0,  2663,     0,     0,     0,
    2665,     0,     0,     0,  1503,     0,  1319,     0,     0,     0,
    2666,  2667,     0,     0,     0,     0,  2671,   456,     0,     0,
    2674,   456,     0,     0,     0,     0,  2679,     0,     0,  2683,
    2684,     0,  1504,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1329,     0,     0,     0,     0,  2702,  2703,
       0,  2705,  2706,  2707,  2708,  2709,  1313,   456,  2711,     0,
    1168,  2282,  2714,  1315,     0,     0,  1505,     0,  1169,     0,
       0,     0,  1506,     0,  1170,  2725,     0,     0,  1507,     0,
       0,     0,     0,     0,  2733,  2734,     0,     0,     0,     0,
       0,  1171,     0,     0,     0,     0,  2307,  1172,  1508,     0,
       0,     0,     0,  2749,     0,     0,     0,     0,  1331,  1332,
       0,     0,     0,  1336,     0,     0,  1339,     0,     0,     0,
    1509,     0,  1173,  1420,     0,     0,     0,     0,  1346,     0,
       0,     0,  2183,  1174,     0,     0,     0,     0,  1510,     0,
    2189,  2190,     0,     0,     0,  2761,     0,     0,     0,     0,
    2765,     0,  2767,     0,     0,  2226,  2227,     0,  2770,     0,
       0,     0,     0,     0,  1431,     0,  2237,  2238,     0,     0,
       0,  2777,  1511,     0,  1175,     0,     0,  2248,  2249,     0,
       0,     0,  1176,     0,     0,     0,     0,  2258,  2259,     0,
    2788,     0,     0,  2264,  2792,     0,  1482,     0,  1563,     0,
       0,     0,  2827,  2267,     0,     0,     0,     0,     0,     0,
       0,  1512,     0,     0,     0,     0,     0,     0,     0,     0,
    2813,  2815,     0,     0,     0,     0,     0,  1513,     0,  1177,
       0,     0,     0,     0,     0,     0,  1487,     0,     0,     0,
    1514,     0,  1178,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2830,  1624,     0,     0,     0,  2835,  1179,  2837,
       0,     0,     0,  1630,     0,     0,  2841,     0,  1515,     0,
       0,  2844,     0,     0,     0,     0,  2847,     0,     0,     0,
    1516,     0,  1517,  1518,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2857,  2859,  2861,  2863,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1519,     0,     0,     0,     0,     0,  2873,     0,
       0,  2874,     0,     0,  2876,     0,     0,     0,     0,     0,
    2869,     0,     0,     0,  2882,  2883,  2884,  2885,  2886,  2887,
    2888,  2889,     0,     0,     0,     0,     0,     0,     0,     0,
    2898,     0,     0,  2901,     0,     0,   550,     0,     0,     0,
    2905,   228,  2907,  1706,  2909,  2893,  2911,     0,  2896,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1714,     0,   229,     0,     0,   230,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   114,
    1744,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1750,   231,     0,     0,     0,     0,     0,     0,   232,     0,
    1708,     0,     0,     0,     0,     0,     0,  1765,     0,   233,
     234,     0,     0,     0,     0,     0,   235,     0,     0,  1777,
       0,  2440,     0,     0,  1784,   115,     0,     0,  2578,     0,
       0,  2442,     0,     0,     0,  2446,  2447,  1738,     0,     0,
       0,   236,  1743,     0,  2455,  2456,     0,     0,     0,     0,
       0,     0,  1749,  2464,  2465,     0,     0,     0,     0,  2470,
     237,     0,     0,     0,     0,     0,     0,     0,     0,  2480,
    2481,     0,     0,     0,     0,     0,     0,   238,   239,     0,
    2491,  2492,     0,     0,   240,     0,     0,   117,     0,     0,
       0,  2495,     0,     0,     0,     0,     0,     0,     0,     0,
    2497,     0,  2498,     0,     0,     0,     0,   241,     0,     0,
       0,     0,     0,     0,     0,     0,  1833,  1834,  1835,     0,
       0,     0,     0,     0,     0,     0,  1837,  1838,  1839,     0,
       0,     0,     0,  1850,  1851,  1852,     0,     0,  1853,  1854,
       0,  1856,  1857,     0,     0,     0,   242,     0,     0,     0,
     122,     0,     0,     0,     0,   123,     0,     0,  1936,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1929,  1930,     0,     0,  1932,  1933,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1956,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   243,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   244,     0,     0,  1989,     0,     0,  1990,     0,
       0,     0,     0,     0,     0,  2698,     0,  2005,  2006,     0,
       0,     0,     0,  1764,     0,  2010,     0,     0,     0,     0,
       0,   245,     0,  2011,     0,  2716,     0,   112,     0,  2721,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,  2618,     0,
       0,     0,     0,  2050,     0,     0,  2002,     0,  2627,     0,
       0,     0,     0,     0,     0,  2061,     0,  2636,     0,     0,
       0,     0,     0,     0,     0,     0,  2645,     0,     0,     0,
       0,     0,     0,  2647,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2651,     0,     0,     0,     0,     0,
    2654,     0,   115,  2656,     0,     0,  2657,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2397,  2051,     0,     0,
       0,     0,     0,  2057,     0,     0,     0,     0,     0,     0,
       0,     0,  2409,  2410,  2411,     0,     0,  2413,     0,  2415,
    2416,     0,  2096,  2418,  2419,  2420,     0,     0,  2422,  2423,
       0,     0,  2426,     0,  2428,  2429,     0,  2431,     0,     0,
    2803,     0,     0,     0,   117,  2116,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2125,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2130,     0,  2131,     0,     0,     0,
       0,     0,  2094,     0,     0,     0,  2139,  2099,     0,  2141,
    2142,  2143,  2144,  2146,     0,  2148,     0,     0,  2149,     0,
       0,  2150,  2152,  2153,  2154,  2155,  2157,     0,  2158,  2159,
       0,  2750,   123,  2161,  2162,  2163,     0,  2118,  2164,  2165,
    2752,     0,     0,  2124,  2166,  2167,     0,     0,     0,  2754,
       0,     0,     0,     0,     0,  2757,     0,     0,     0,  2759,
       0,     0,  2760,     0,  2503,     0,     0,  2506,     0,     0,
    2140,     0,  2510,     0,     0,  2511,     0,  2147,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2879,     0,     0,  2526,     0,     0,  2174,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2182,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2185,     0,     0,     0,     0,     0,     0,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,     0,     0,     0,  2327,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2273,  2328,
       0,  2276,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2281,     0,  2599,  2284,     0,     0,     0,     0,
       0,     0,  2270,     0,     0,  1168,  2329,     0,     0,     0,
       0,     0,     0,  1169,     0,     0,     0,     0,     0,  1170,
       0,     0,     0,     0,  2303,     0,  2609,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1171,     0,     0,  2272,
       0,     0,  1172,     0,     0,  2330,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2285,
       0,     0,     0,     0,     0,     0,     0,  1173,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1174,  2351,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2308,  2309,     0,     0,     0,     0,     0,     0,
       0,     0,  2367,     0,     0,     0,  2660,     0,  2312,  2313,
       0,     0,     0,  2315,  2316,     0,     0,     0,     0,  1175,
       0,     0,     0,     0,     0,     0,  2668,  1176,     0,     0,
       0,     0,     0,  2673,     0,     0,  2676,  2677,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2359,     0,     0,     0,  2393,     0,     0,
       0,     0,     0,     0,  2366,     0,     0,     0,     0,     0,
       0,     0,  2401,     0,  1177,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1178,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2376,
    2425,     0,     0,  1179,     0,     0,     0,     0,     0,     0,
       0,  2434,     0,  2331,     0,  2332,     0,     0,     0,  2392,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2408,     0,     0,     0,     0,  2412,     0,     0,
       0,     0,     0,  2417,  2439,     0,     0,     0,  2421,     0,
    2762,     0,  2424,     0,     0,  2427,     0,     0,  2430,  2333,
    2432,     0,     0,     0,     0,     0,     0,     0,     0,  2772,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2471,  2472,  2473,  2474,  2475,     0,
    2477,  2478,     0,     0,     0,  2482,  2483,  2484,  2485,  2486,
       0,  2488,  2489,     0,     0,  2505,     0,     0,  2508,     0,
       0,     0,     0,     0,     0,     0,  2512,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2525,     0,     0,  2528,     0,     0,     0,     0,
    2532,     0,     0,  2535,  2536,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2828,  2829,     0,  2831,     0,  2833,
    2834,     0,  2836,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1074,  1075,  1076,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2579,  2580,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1077,  1078,     0,     0,  1079,     0,     0,
    1080,     0,     0,     0,     0,     0,     0,  1081,  2866,     0,
       0,  1082,     0,     0,     0,     0,     0,     0,     0,  1083,
    1084,     0,     0,     0,     0,     0,  2606,  1085,  1086,     0,
       0,     0,     0,     0,  2570,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1087,     0,     0,     0,     0,
    2582,  1088,     0,     0,     0,  1089,  1090,     0,  2902,  1091,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1092,     0,     0,
       0,     0,     0,     0,  2601,     0,     0,     0,     0,     0,
       0,  2617,     0,     0,  2619,  2620,  2621,  2622,  2623,  1093,
    2625,  2626,     0,  2628,  2629,  2630,  2631,  2632,     0,  2634,
    2635,     0,  2637,  2638,  2639,  2640,  2641,  2614,  2643,  2644,
       0,  2646,     0,     0,  2659,     0,     0,  1094,     0,     0,
       0,  2649,  2650,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2653,     0,     0,     0,     0,     0,     0,     0,
       0,  1095,     0,     0,     0,     0,     0,  2678,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2689,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1096,     0,  1097,     0,  2658,     0,     0,     0,  1098,
    1099,  2662,     0,     0,     0,  2664,   111,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1100,  1101,     0,     0,
     112,  2670,     0,     0,     0,     0,     0,     0,  1102,  1103,
       0,     0,     0,  2740,     0,     0,     0,  2746,     0,     0,
       0,   113,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1104,     0,  1105,     0,   114,
       0,     0,     0,     0,     0,     0,    67,    68,     0,  1106,
       0,  1107,  2719,  2720,     0,     0,     0,  1108,     0,     0,
       0,   112,     0,     0,     0,     0,     0,     0,  2751,     0,
       0,  2763,  2764,     0,  2766,     0,     0,  2753,     0,  2768,
    2769,   305,     0,     0,  2771,   115,  2755,     0,  2756,     0,
       0,  1109,  2758,   112,     0,     0,     0,     0,     0,     0,
     114,     0,     0,     0,   116,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2793,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   523,   524,     0,     0,   525,   115,   117,     0,     0,
       0,  2819,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2781,     0,     0,     0,     0,     0,   526,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   115,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,     0,
       0,  2822,     0,  2823,     0,  2824,   119,     0,  2825,     0,
    2826,     0,     0,     0,   120,   121,     0,     0,   117,     0,
     122,     0,     0,     0,     0,   123,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     117,     0,  2868,     0,     0,     0,     0,     0,     0,   306,
       0,     0,     0,   527,     0,     0,     0,     0,     0,  2877,
       0,     0,     0,     0,     0,     0,  2849,     0,     0,     0,
       0,   122,     0,   528,     0,     0,   123,  2892,     0,     0,
    2895,     0,     0,     0,     0,     0,     0,   307,     0,     0,
       0,     0,  2865,     0,   124,   529,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   123,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,     0,     0,
       0,  2894,     0,   154,     0,     0,     0,     0,   155,   156,
       0,     0,   308,     0,     0,     0,     0,   643,   112,     0,
       0,     0,     0,   530,     0,  2912,     0,     0,  2913,     0,
       0,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   644,
       0,     0,     0,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,     0,   531,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   115,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   645,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1358,  1359,
    1360,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   117,     0,     0,  1361,  1362,
     112,     0,  1363,     0,     0,     0,     0,     0,     0,  1364,
       0,     0,  1365,     0,   646,     0,  1366,     0,     0,     0,
       0,     0,     0,     0,  1367,  1368,     0,     0,     0,     0,
       0,     0,  1369,     0,     0,     0,     0,     0,     0,   114,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1370,  1371,     0,   123,  1372,     0,     0,     0,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,     0,  1373,     0,     0,   115,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1374,     0,     0,     0,  1419,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   115,     0,     0,     0,
       0,     0,  1375,     0,     0,   647,     0,     0,     0,     0,
       0,  1376,     0,     0,     0,     0,     0,   117,     0,     0,
       0,     0,     0,     0,   115,     0,     0,     0,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,  1377,     0,   117,     0,
       0,     0,     0,     0,  1378,  1379,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,     0,  1380,     0,     0,   123,   117,     0,     0,     0,
       0,     0,     0,     0,  1381,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1382,   122,  1383,     0,     0,     0,   123,     0,     0,     0,
       0,     0,  1384,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1385,     0,     0,     0,     0,     0,   541,     0,
       0,     0,     0,     0,   123,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1386,     0,     0,     0,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,     1,     0,     0,
       2,     0,     0,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,     0,     0,
       0,     0,     5,     6,     0,     7,     8,     9,     0,     0,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,    11,     0,    12,    13,     0,     0,     0,     0,
       0,     0,     0,     0,    14,    15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    16,     0,     0,
       0,     0,     0,     0,     0,     0,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     0,     0,    19,     0,     0,    20,     0,     0,
       0,    21,    22,     0,     0,     0,    23,    24,     0,     0,
       0,    25,     0,     0,     0,     0,     0,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,     0,    28,    29,    30,     0,
       0,    31,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    35,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    37,     0,    38,
       0,     0,     0,     0,     0,     0,    39,     0,     0,     0,
       0,    40,     0,     0,     0,    41,     0,    42,     0,    43,
       0,     0,     0,     0,     0,    44,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    45,
       0,     0,     0,     0,     0,    46,     0,     0,   182,     0,
       0,   183,     0,     0,   184,     0,     0,     0,     0,     0,
       0,    47,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,   185,    50,   186,   187,   188,     0,
       0,    51,     0,     0,    52,    53,   189,     0,   190,     0,
       0,     0,     0,   191,     0,   192,   193,   194,     0,     0,
       0,     0,     0,   195,     0,   196,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    54,     0,     0,     0,     0,
       0,     0,    55,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   197,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   198,     0,     0,     0,     0,
       0,     0,     0,   199,     0,   200,   201,   202,   203,     0,
       0,     0,   204,     0,  1052,     0,   205,     0,   206,  1053,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   207,   208,     0,     0,     0,   209,     0,     0,
       0,     0,     0,     0,     0,     0,  1456,   210,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   211,   212,     0,     0,     0,     0,
       0,     0,   213,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   214,     0,
     215,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   216,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   217,   218,     0,     0,     0,     0,     0,     0,
       0,   219,     0,     0,     0,     0,     0,     0,   220,     0,
       0,     0,     0,     0,   221,     0,   222,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,     0,     0,     0,     0,     0,
       0,     0,     0,   223,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,  1457,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153
};

static const yytype_int16 yycheck[] =
{
       3,    79,  1541,   959,    53,     5,   716,   717,    11,   721,
       4,   215,  1746,    16,  1748,  1231,     5,  1233,     3,     4,
      98,     0,     5,    31,    31,   514,     3,     4,     5,     4,
      31,     4,    35,    62,     3,     4,     3,     4,  2547,     5,
      43,   173,    20,  1259,  1260,  1261,     3,     4,     4,    52,
      26,    13,    55,    35,     4,    58,    79,   138,     4,    62,
      40,     4,    65,     4,  2573,    16,    69,    70,     3,     4,
      73,     3,     4,    76,    77,    43,    16,    80,     3,     4,
      83,    84,  1075,    86,     5,     3,     4,    15,    91,     3,
       4,    46,    67,    26,     3,     4,   105,    88,     4,     4,
      62,   104,   105,   106,   107,   108,   109,     5,  1046,     3,
       4,  1049,   155,     4,     3,     4,     3,     4,   101,    16,
      88,    20,   125,    29,   107,    88,    35,    20,  1066,     5,
       3,     4,   205,   470,   301,   165,   118,   225,     0,   150,
      16,    35,     4,   480,    26,    39,     5,   122,    35,   281,
     205,    26,    43,    32,    20,    46,   360,   160,     3,     4,
     183,    79,   366,     4,   368,   195,    67,    49,     4,   247,
      52,    30,  2681,  2682,   165,    11,  2685,  2799,  2687,   243,
     261,    63,   185,     4,     5,   128,    77,   190,   196,   196,
     199,  2700,  2701,     4,    85,   136,  2705,  2706,   276,   272,
    2709,   174,   165,   100,    86,  2714,  2715,    20,   190,   264,
     192,     5,   194,   195,   199,   293,     3,     4,   123,   113,
     205,   299,   104,   205,    19,     4,     5,   207,   137,  2851,
     199,   122,   275,   321,     5,    20,   204,    15,   220,   214,
     202,   264,   199,   137,   238,    67,    62,   222,   223,    45,
     137,     4,   947,   948,   949,   205,    67,   148,    62,   244,
     263,   237,     4,   169,  2773,   183,   315,  2776,    26,    65,
     299,    67,  2781,   251,   206,   218,   279,   280,  2787,   991,
     208,   122,    62,  2792,   224,   220,     4,   272,    67,   297,
     297,    20,   295,   322,   297,   209,   297,   286,     4,     5,
     175,   122,   305,   306,   237,   308,   309,   257,   311,   275,
      89,   122,   206,   204,   264,   309,     4,   279,   321,   225,
    1015,   321,   301,   214,   275,    67,   308,   289,   331,   332,
      62,   222,   223,   288,   319,   318,   302,   312,   229,   260,
     231,    47,   309,   122,   321,   251,   264,   303,   119,    67,
     319,   354,   251,   356,   357,   328,   359,   303,   251,   321,
     363,   364,   319,  2872,   262,   144,  2875,    64,   309,   260,
     310,   374,   375,   214,     4,   220,   251,   309,   363,   364,
     122,   222,   223,   386,   309,   251,   361,  1099,   391,   392,
    2899,   366,   367,   214,   363,   364,   399,   193,    51,   402,
     309,   222,   223,   214,   122,  1117,   363,   364,  2917,   106,
     139,   222,   223,  2922,  2923,   309,   122,   175,   421,   422,
     309,   312,   309,    92,   299,   762,   429,   430,   431,   432,
     433,   434,   435,   204,   437,   214,   309,   328,   251,   145,
     146,     4,  1152,   222,   223,    13,    14,    84,   101,   452,
     237,    27,   247,   456,  1670,    89,   252,   110,   461,   462,
     463,   464,   465,   466,   101,   468,   251,   470,   471,   472,
     361,   312,   214,     4,  1184,   366,   367,   480,   481,    16,
     222,   223,    64,   299,    58,     0,   368,   469,   141,   260,
      30,   312,   122,   251,    62,   299,   214,   318,    99,    13,
      14,   312,    26,   299,   222,   223,   322,   328,   214,  1502,
     179,   285,   308,    62,    47,   286,   222,   223,   322,   299,
     361,   209,   251,    39,   106,   366,   367,    33,   216,   217,
      62,   534,   535,   312,    62,  1473,  1529,   278,  1476,   318,
     361,   299,   322,    39,   285,   366,   367,   253,    62,   552,
     361,   248,   243,    12,   283,   366,   367,    62,  1551,    45,
       5,   135,    44,     5,   252,    41,    42,   299,   265,   266,
     312,   908,     4,   178,   123,   624,   558,     4,    60,   143,
     156,    67,   361,   188,   214,   588,   365,   366,   367,   126,
     322,   123,   222,   223,   312,   123,    82,   113,     3,     4,
      82,    16,     5,   109,   273,    47,   312,     5,   184,     5,
      13,    14,   188,   146,   951,     3,     4,   113,   621,   361,
     102,   603,   291,   187,   366,   367,   704,    29,    29,     3,
       4,   680,    14,    15,   202,   203,  1331,   119,    57,   176,
      22,   123,   205,   361,  1339,     3,     4,    29,   366,   367,
       5,   700,    57,   177,    36,   361,  2390,  2391,   311,    62,
     366,   367,   359,   360,   238,   241,   248,  1379,   671,     4,
     152,   153,    39,   303,   362,    57,   277,   206,  1390,    36,
     254,    39,   312,   265,   266,     4,    60,   224,   202,   203,
     206,    48,    74,   275,    96,   698,     3,     4,     5,     3,
       4,    71,    60,   145,   146,   181,   182,   193,   284,   215,
     206,   279,   715,   237,     4,   718,   292,   293,    75,    11,
     253,   289,   290,   134,     5,    13,    14,   159,   160,   211,
     107,   361,    13,    14,   210,   119,   366,   367,    57,   221,
     289,   819,   201,   746,   822,   319,   113,   825,   751,   752,
     753,   754,   167,   321,   757,   113,   759,   289,   761,   762,
     763,   289,    54,     5,   280,   279,   252,    57,   169,   171,
       5,    13,    14,   310,    62,   289,   290,   359,   360,     5,
      72,    62,    55,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   842,   299,    39,    13,    14,   155,   202,
     203,    67,    67,   285,   286,     3,     4,   321,   178,   228,
     102,   253,    47,   299,  1770,   121,    62,   322,    91,   178,
      62,    47,   308,   228,   225,    32,   237,   143,   260,   121,
     207,   834,   835,   125,   837,   838,   839,   840,   301,   206,
      67,   198,    62,     4,     5,    62,    26,   139,   206,   237,
     251,   854,   855,   155,     5,  2071,  2072,  2073,   861,   862,
       4,     5,   264,    27,    67,     3,     4,   133,   270,   113,
      15,   187,   145,  1210,    62,   357,   279,   123,   881,   882,
     883,   884,   885,   886,   887,   262,   289,   290,   299,   259,
      90,   294,     3,     4,    62,   277,   278,   163,   244,   269,
     903,   904,   905,   123,   907,   908,   909,  1845,   911,   228,
     145,   146,   269,   280,   202,   203,   107,    61,   321,   145,
     146,   202,   203,    67,  2615,   307,  1636,  1865,   230,   932,
      74,   934,    76,   237,   300,   123,    90,    81,   228,    62,
      84,   944,  1880,     3,     4,  1883,    90,   305,   951,   952,
     932,  1944,    67,  1891,   957,   123,  1894,   101,     4,     5,
     202,   203,   206,   107,  1902,   322,  1959,  1905,   350,   351,
     352,   974,   116,   275,  1912,   978,    73,   165,    62,    30,
     246,    64,   985,   986,   987,   202,   203,   260,   134,   133,
     993,   279,   156,     4,  1987,   998,     5,   177,   279,  1336,
     123,   289,   290,  1052,  1082,   143,  1009,     4,   289,   290,
    2549,   155,   314,   294,   260,    61,   207,   309,   253,    62,
     184,    67,     5,   106,   188,  1028,     5,   253,     4,   173,
       4,   177,  1110,   321,   177,   301,    21,   279,    47,   123,
     321,   185,   186,   289,  2735,   128,   278,   289,   290,   187,
      13,    14,   294,   285,  1749,     5,  2747,   237,    62,     5,
       4,    21,   279,   207,    47,    50,     4,   127,    53,   289,
     116,   262,   289,   290,     5,     5,     4,   241,     4,   321,
     123,     4,     5,     5,    23,    24,   230,   133,   161,     4,
      50,   237,  1095,    53,   237,    36,    56,  2090,    83,    62,
     244,   289,   246,   149,   321,     4,     5,    48,     4,   155,
       4,    39,     5,  1116,     4,    62,   123,   163,   262,   123,
     284,   289,  1125,    83,   268,    47,    57,   112,   292,   293,
     115,   275,    13,    14,    75,    66,   145,   146,   282,  1142,
       5,  1144,     5,     3,     4,    89,  1149,  1150,  1151,     4,
      13,    14,   112,   299,    47,   115,  1159,   301,    18,  1162,
      99,  1164,   145,   146,   307,   248,   289,     3,     4,     4,
     314,   315,    25,   317,   220,    99,   123,     5,  1181,   123,
    1183,    62,   265,   266,   286,   113,     3,     4,  1191,  1192,
       4,     5,    95,   239,   267,     5,     4,    57,   244,    62,
     246,     4,   161,  1206,  1207,   289,     4,  1210,  1211,  1212,
     113,     4,     5,   357,   155,  1218,     5,  1220,     4,    47,
    1223,   180,  1225,   145,   146,     5,  2683,   209,   274,   275,
    1279,   159,   160,    13,    14,     4,   282,    47,     4,   202,
     203,  2733,  2734,   103,   253,  2702,   289,   320,     3,     4,
       3,     4,   145,   146,   239,   301,   239,   198,     4,  1262,
       4,   114,  2200,    16,     5,     5,  1269,     4,  1271,     5,
     253,  2209,  1275,     5,     8,   128,   359,   360,   206,   239,
    2218,    10,    62,   665,     5,   289,   458,   459,  1291,   274,
    1293,   127,  1295,  1296,  1297,  1298,   199,   228,  1301,  1302,
     178,  1304,  1305,  1306,  1307,   165,     5,    47,   267,  1291,
       5,   357,  1315,   285,   274,    47,   279,   145,   146,  1322,
       4,   202,   203,  1326,  1327,  1328,   289,   290,   269,     4,
    2323,   253,   260,  1336,  1337,   145,   146,  1340,   720,   202,
     203,   301,   289,   725,   188,  1348,  2339,  1350,    47,   208,
    1353,  2344,    47,   178,    84,     4,  2051,   298,   321,  1341,
     253,   208,     3,     4,     4,   306,   219,    83,   228,     5,
       5,   101,   127,   233,   208,     3,     4,  1359,   200,   232,
     200,   322,    67,  2840,    13,    14,    67,     3,     4,  2846,
      67,   237,     3,     4,  1397,     5,  1399,   238,   279,  1402,
    1403,     5,  1405,     4,  1407,   145,   146,     4,   289,   290,
    1413,     4,  1415,   145,   146,     4,   279,     4,   208,     3,
       4,  1424,   202,   203,    65,   253,   289,   290,    39,  2124,
      88,   294,    60,    62,    89,     5,    88,     3,     4,     4,
     321,   157,     5,   253,    60,    11,   145,   146,     5,     4,
     145,   146,  2147,    15,     5,    39,   186,  2914,   321,  2916,
      22,     4,   101,   118,     4,     3,     4,    16,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,  1499,  1500,  1501,   279,
     230,    39,   113,    67,     3,     4,    16,     5,   890,   289,
     290,    25,    11,   253,   294,     4,  1498,    81,  1521,   235,
     236,   253,     4,  1526,     4,     4,    90,    83,    99,   113,
       5,     4,     3,     4,   250,     6,     7,   101,   268,     5,
      88,   321,   197,     5,     5,  2541,  1549,  1550,  2544,    88,
    2546,     5,  2545,     4,   253,     5,  1559,   212,   253,  1562,
      34,     5,     4,  2559,  2560,  2558,  1569,     4,    65,   133,
    2563,     3,     4,   202,   203,   113,     8,     9,    10,   295,
    2576,  1584,   199,     3,     4,     5,  1589,     4,   205,     4,
    1593,   155,  1595,  1596,     4,  1598,  1599,  1600,    11,  1602,
     114,   157,  1605,  1606,  1607,  1608,  1609,  1610,  1611,  1612,
    1613,  1614,  1615,     5,   128,  1618,  1619,  1620,  1621,     4,
      11,   276,   206,     4,     4,  1628,  1629,   244,     4,  1632,
    1633,  1634,     4,     4,   108,  1638,  1639,     3,     4,     5,
       6,     7,     5,   207,     5,    35,   174,     5,  1651,  1652,
     279,  1654,  1655,   167,     4,   272,   165,   131,   132,   165,
     289,   290,     4,   318,  2359,  2002,   140,     3,     4,     5,
       5,  2366,     4,   328,     3,     4,     5,     6,     7,   235,
     236,    37,   246,     3,     4,     5,     6,     7,   162,    37,
     303,   274,   321,   255,   250,   274,   258,     5,   172,  1702,
    1703,  1704,   319,     4,  1707,   219,     4,     4,     4,  1712,
    1713,   275,  1715,  1716,  1717,     5,  1719,  1720,   232,  1722,
    2057,  1724,  1725,     5,  1727,  1728,  1729,  1730,   118,  2424,
    1712,     5,  2427,     5,     4,  2430,  1739,  2432,     5,   295,
    1122,     5,   287,   287,  1747,     5,     5,   364,     5,  1752,
    1753,   315,     4,   317,     4,  1758,     5,     5,     5,     5,
       5,     4,  2099,     5,  1767,     4,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,     5,     5,     4,  1800,  1180,   189,
    1782,   191,   192,     5,   194,   195,     5,   107,   251,  1791,
      54,   251,  1194,  1795,   107,   251,   251,   143,  1821,  1822,
      39,   251,   251,  1826,   107,     5,   224,   258,    72,  1832,
     258,   224,  1045,    39,    21,   225,     5,     4,   224,    26,
       5,   224,     4,     4,  2837,    89,     5,     5,     5,     5,
       5,     4,   113,    62,   244,   245,     4,   113,   102,     5,
     250,     5,    49,    50,   254,    52,    53,     5,     4,    11,
       5,     5,     4,   251,     5,     5,    63,   121,     4,   220,
       5,   125,     5,     4,    11,     5,     5,  2582,    75,    76,
       4,     4,     0,     5,     4,   139,    83,     4,     4,    86,
       4,   177,     5,     4,   251,     5,   296,   251,   251,   143,
     119,   251,   251,     4,   123,     4,   262,   104,   308,   208,
       4,     4,     4,     4,   111,   112,     5,     5,   115,  1311,
    1312,     5,   287,     5,     5,     5,  1939,  1940,   328,  1942,
       4,   185,     4,   325,     5,     4,     4,     4,   251,     5,
       5,     5,   251,     4,     4,   325,   165,  1960,  1961,  1962,
    1963,  1964,  1965,  1966,  1967,  1968,   251,     4,     4,     4,
       4,  2308,  2309,   325,  2311,  2312,   325,     4,  2315,  2316,
    1983,     4,  1985,   310,     5,     5,   237,     5,     4,     4,
     369,     5,     4,   287,     5,   204,   183,   237,  2001,  2002,
     237,   237,   237,     5,  2007,     4,  2718,     5,     5,     4,
       4,     4,     4,  2016,  2017,  2018,  2019,  2020,  2021,  2022,
    2023,  2024,  2025,     5,     5,  2028,  2029,  2030,  2031,  2032,
    2033,  2034,  2035,  2036,  2037,  2038,  2039,     4,  2041,  2376,
    2043,  2044,  2045,   370,     5,     5,     4,   256,     5,     5,
       4,   260,   239,     5,  2057,  2058,     4,     4,   245,   449,
       4,     4,   287,     5,     5,     5,     5,     3,     4,     4,
     460,     5,     5,     5,     5,     5,   263,   286,     4,   469,
     289,     4,    18,     5,     4,   369,     5,   274,  2091,  2801,
    2093,   300,  2095,     5,  2097,     5,  2099,  2100,     4,  2102,
       4,   287,     5,     5,  2107,  2108,     5,  2110,  2111,  2112,
    2113,     5,  1494,     4,     4,   302,   303,  2120,     5,  2122,
     321,     5,     5,  2126,     5,     4,  2129,     4,   369,     5,
       5,     5,     5,    18,     4,     4,   323,     5,     5,     5,
       5,     4,  1524,     4,   457,     5,  1528,   537,   538,     4,
    2132,     4,     4,     4,    11,     5,     5,     5,     5,     5,
     550,     4,     4,     4,    18,   555,     5,   103,     4,     4,
    2173,     5,  1554,     5,   564,    60,     4,   369,     5,     5,
       4,   368,  1564,     4,   369,     5,     5,     4,     4,  2171,
       5,  1573,  1574,  2530,     5,     5,     5,  2534,     5,     5,
       4,   369,     5,  1585,     4,   532,     4,   301,     5,     5,
       5,     4,   539,     4,     4,   542,     5,     5,   103,     5,
     547,     5,  2271,     4,   551,     5,     5,     5,  1441,   165,
       5,     4,     4,  2570,     5,     4,     4,     4,     4,     4,
    1453,     4,     4,     4,     4,     4,     4,     4,     4,   103,
       4,   369,   369,     4,   644,   645,   646,   647,  1471,  1472,
       5,     5,     4,     4,     4,   406,     5,     4,   301,     5,
       4,   369,     5,     5,  2277,     5,     4,     4,     4,     4,
     165,     4,     4,     4,     4,  2288,  2289,  2290,  2291,  2292,
    2293,  2294,  2295,  2296,  2297,  2298,     4,   233,     4,   626,
       4,  2304,     5,     5,     5,  2308,  2309,     4,  2311,  2312,
       5,   165,  2315,  2316,  2317,  2318,  2319,  2320,  2321,  2322,
       4,  2324,  2325,  2326,  2813,  2814,  2815,  2816,     5,   719,
       5,     4,     4,     4,     4,     4,     4,  2340,  2341,  2342,
    2343,     4,  2345,  2346,  2347,  2348,  2349,  2350,   233,  2352,
       5,     4,  2355,  2356,     4,     4,  2865,     5,     4,     4,
       4,     4,  2334,     5,     5,     4,     4,     4,     4,     4,
    2373,     4,     4,  2376,  2377,     5,     4,     4,  2381,   233,
       5,     5,     4,  2386,  2387,  2388,     5,     5,     5,     4,
    1309,     5,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     305,     5,     5,     5,     5,     4,     4,  2716,     5,     5,
       5,   758,     5,     5,  2437,  2801,  2797,    -1,   765,    -1,
     800,    -1,    -1,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,    -1,  2550,    -1,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,    -1,    -1,   894,    -1,  2509,    -1,    -1,    -1,
    2513,    -1,    -1,    -1,    39,    -1,   906,    -1,    -1,    -1,
    2523,  2524,    -1,    -1,    -1,    -1,  2529,  2530,    -1,    -1,
    2533,  2534,    -1,    -1,    -1,    -1,  2539,    -1,    -1,  2542,
    2543,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   943,    -1,    -1,    -1,    -1,  2561,  2562,
      -1,  2564,  2565,  2566,  2567,  2568,   893,  2570,  2571,    -1,
      93,  1953,  2575,   900,    -1,    -1,   101,    -1,   101,    -1,
      -1,    -1,   107,    -1,   107,  2588,    -1,    -1,   113,    -1,
      -1,    -1,    -1,    -1,  2597,  2598,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,  1988,   130,   133,    -1,
      -1,    -1,    -1,  2616,    -1,    -1,    -1,    -1,   945,   946,
      -1,    -1,    -1,   950,    -1,    -1,   953,    -1,    -1,    -1,
     155,    -1,   155,  1023,    -1,    -1,    -1,    -1,   965,    -1,
      -1,    -1,  1855,   166,    -1,    -1,    -1,    -1,   173,    -1,
    1863,  1864,    -1,    -1,    -1,  2658,    -1,    -1,    -1,    -1,
    2663,    -1,  2665,    -1,    -1,  1878,  1879,    -1,  2671,    -1,
      -1,    -1,    -1,    -1,  1033,    -1,  1889,  1890,    -1,    -1,
      -1,  2684,   207,    -1,   207,    -1,    -1,  1900,  1901,    -1,
      -1,    -1,   215,    -1,    -1,    -1,    -1,  1910,  1911,    -1,
    2703,    -1,    -1,  1916,  2707,    -1,  1065,    -1,  1098,    -1,
      -1,    -1,  2761,  1926,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   246,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2733,  2734,    -1,    -1,    -1,    -1,    -1,   262,    -1,   262,
      -1,    -1,    -1,    -1,    -1,    -1,  1073,    -1,    -1,    -1,
     275,    -1,   275,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2765,  1153,    -1,    -1,    -1,  2770,   291,  2772,
      -1,    -1,    -1,  1163,    -1,    -1,  2779,    -1,   303,    -1,
      -1,  2784,    -1,    -1,    -1,    -1,  2789,    -1,    -1,    -1,
     315,    -1,   317,   318,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2813,  2814,  2815,  2816,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   357,    -1,    -1,    -1,    -1,    -1,  2841,    -1,
      -1,  2844,    -1,    -1,  2847,    -1,    -1,    -1,    -1,    -1,
    2832,    -1,    -1,    -1,  2857,  2858,  2859,  2860,  2861,  2862,
    2863,  2864,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2873,    -1,    -1,  2876,    -1,    -1,     4,    -1,    -1,    -1,
    2883,    18,  2885,  1273,  2887,  2867,  2889,    -1,  2870,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1291,    -1,    40,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
    1320,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1330,    78,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
    1277,    -1,    -1,    -1,    -1,    -1,    -1,  1347,    -1,    96,
      97,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,  1359,
      -1,  2184,    -1,    -1,  1364,   103,    -1,    -1,  2360,    -1,
      -1,  2194,    -1,    -1,    -1,  2198,  2199,  1314,    -1,    -1,
      -1,   128,  1319,    -1,  2207,  2208,    -1,    -1,    -1,    -1,
      -1,    -1,  1329,  2216,  2217,    -1,    -1,    -1,    -1,  2222,
     147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2232,
    2233,    -1,    -1,    -1,    -1,    -1,    -1,   164,   165,    -1,
    2243,  2244,    -1,    -1,   171,    -1,    -1,   165,    -1,    -1,
      -1,  2254,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2263,    -1,  2265,    -1,    -1,    -1,    -1,   194,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1425,  1426,  1427,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1435,  1436,  1437,    -1,
      -1,    -1,    -1,  1442,  1443,  1444,    -1,    -1,  1447,  1448,
      -1,  1450,  1451,    -1,    -1,    -1,   233,    -1,    -1,    -1,
     228,    -1,    -1,    -1,    -1,   233,    -1,    -1,  1498,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1480,  1481,    -1,    -1,  1484,  1485,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1527,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   288,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   299,    -1,    -1,  1555,    -1,    -1,  1558,    -1,
      -1,    -1,    -1,    -1,    -1,  2557,    -1,  1567,  1568,    -1,
      -1,    -1,    -1,     4,    -1,  1575,    -1,    -1,    -1,    -1,
      -1,   328,    -1,  1583,    -1,  2577,    -1,    18,    -1,  2581,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,  2441,    -1,
      -1,    -1,    -1,  1623,    -1,    -1,  1563,    -1,  2451,    -1,
      -1,    -1,    -1,    -1,    -1,  1635,    -1,  2460,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2469,    -1,    -1,    -1,
      -1,    -1,    -1,  2476,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2487,    -1,    -1,    -1,    -1,    -1,
    2493,    -1,   103,  2496,    -1,    -1,  2499,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2125,  1624,    -1,    -1,
      -1,    -1,    -1,  1630,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2141,  2142,  2143,    -1,    -1,  2146,    -1,  2148,
    2149,    -1,  1712,  2152,  2153,  2154,    -1,    -1,  2157,  2158,
      -1,    -1,  2161,    -1,  2163,  2164,    -1,  2166,    -1,    -1,
    2722,    -1,    -1,    -1,   165,  1735,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1751,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1764,    -1,  1766,    -1,    -1,    -1,
      -1,    -1,  1709,    -1,    -1,    -1,  1776,  1714,    -1,  1779,
    1780,  1781,  1782,  1783,    -1,  1785,    -1,    -1,  1788,    -1,
      -1,  1791,  1792,  1793,  1794,  1795,  1796,    -1,  1798,  1799,
      -1,  2624,   233,  1803,  1804,  1805,    -1,  1744,  1808,  1809,
    2633,    -1,    -1,  1750,  1814,  1815,    -1,    -1,    -1,  2642,
      -1,    -1,    -1,    -1,    -1,  2648,    -1,    -1,    -1,  2652,
      -1,    -1,  2655,    -1,  2273,    -1,    -1,  2276,    -1,    -1,
    1777,    -1,  2281,    -1,    -1,  2284,    -1,  1784,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2853,    -1,    -1,  2303,    -1,    -1,  1836,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1849,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1859,    -1,    -1,    -1,    -1,    -1,    -1,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1938,    67,
      -1,  1941,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1952,    -1,  2393,  1955,    -1,    -1,    -1,    -1,
      -1,    -1,  1931,    -1,    -1,    93,    94,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,   107,
      -1,    -1,    -1,    -1,  1984,    -1,  2425,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,  1936,
      -1,    -1,   130,    -1,    -1,   133,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1956,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   166,  2039,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1989,  1990,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2062,    -1,    -1,    -1,  2505,    -1,  2005,  2006,
      -1,    -1,    -1,  2010,  2011,    -1,    -1,    -1,    -1,   207,
      -1,    -1,    -1,    -1,    -1,    -1,  2525,   215,    -1,    -1,
      -1,    -1,    -1,  2532,    -1,    -1,  2535,  2536,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2050,    -1,    -1,    -1,  2117,    -1,    -1,
      -1,    -1,    -1,    -1,  2061,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2132,    -1,   262,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   275,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2096,
    2160,    -1,    -1,   291,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2171,    -1,   301,    -1,   303,    -1,    -1,    -1,  2116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2139,    -1,    -1,    -1,    -1,  2144,    -1,    -1,
      -1,    -1,    -1,  2150,  2183,    -1,    -1,    -1,  2155,    -1,
    2659,    -1,  2159,    -1,    -1,  2162,    -1,    -1,  2165,   357,
    2167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2678,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2223,  2224,  2225,  2226,  2227,    -1,
    2229,  2230,    -1,    -1,    -1,  2234,  2235,  2236,  2237,  2238,
      -1,  2240,  2241,    -1,    -1,  2275,    -1,    -1,  2278,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2286,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2302,    -1,    -1,  2305,    -1,    -1,    -1,    -1,
    2310,    -1,    -1,  2313,  2314,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2763,  2764,    -1,  2766,    -1,  2768,
    2769,    -1,  2771,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2361,  2362,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    -1,    -1,    53,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    63,  2827,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    -1,    -1,    -1,    -1,    -1,  2406,    83,    84,    -1,
      -1,    -1,    -1,    -1,  2351,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
    2367,   107,    -1,    -1,    -1,   111,   112,    -1,  2877,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,
      -1,    -1,    -1,    -1,  2401,    -1,    -1,    -1,    -1,    -1,
      -1,  2440,    -1,    -1,  2443,  2444,  2445,  2446,  2447,   155,
    2449,  2450,    -1,  2452,  2453,  2454,  2455,  2456,    -1,  2458,
    2459,    -1,  2461,  2462,  2463,  2464,  2465,  2434,  2467,  2468,
      -1,  2470,    -1,    -1,  2504,    -1,    -1,   183,    -1,    -1,
      -1,  2480,  2481,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2491,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   207,    -1,    -1,    -1,    -1,    -1,  2537,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2548,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   237,    -1,   239,    -1,  2502,    -1,    -1,    -1,   245,
     246,  2508,    -1,    -1,    -1,  2512,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   262,   263,    -1,    -1,
      18,  2528,    -1,    -1,    -1,    -1,    -1,    -1,   274,   275,
      -1,    -1,    -1,  2603,    -1,    -1,    -1,  2607,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   301,    -1,   303,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,   315,
      -1,   317,  2579,  2580,    -1,    -1,    -1,   323,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,  2627,    -1,
      -1,  2661,  2662,    -1,  2664,    -1,    -1,  2636,    -1,  2669,
    2670,    38,    -1,    -1,  2674,   103,  2645,    -1,  2647,    -1,
      -1,   357,  2651,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2708,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    -1,    -1,    70,   103,   165,    -1,    -1,
      -1,  2741,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2689,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,
      -1,  2750,    -1,  2752,    -1,  2754,   214,    -1,  2757,    -1,
    2759,    -1,    -1,    -1,   222,   223,    -1,    -1,   165,    -1,
     228,    -1,    -1,    -1,    -1,   233,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     165,    -1,  2832,    -1,    -1,    -1,    -1,    -1,    -1,   206,
      -1,    -1,    -1,   178,    -1,    -1,    -1,    -1,    -1,  2849,
      -1,    -1,    -1,    -1,    -1,    -1,  2793,    -1,    -1,    -1,
      -1,   228,    -1,   198,    -1,    -1,   233,  2867,    -1,    -1,
    2870,    -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,    -1,
      -1,    -1,  2819,    -1,   312,   220,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,    -1,    -1,
      -1,  2868,    -1,   361,    -1,    -1,    -1,    -1,   366,   367,
      -1,    -1,   309,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,    -1,    -1,   288,    -1,  2892,    -1,    -1,  2895,    -1,
      -1,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,    59,
      -1,    -1,    -1,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,    -1,   357,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,    49,    50,
      18,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    63,    -1,   184,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     111,   112,    -1,   233,   115,    -1,    -1,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,   133,    -1,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   155,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,
      -1,    -1,   183,    -1,    -1,   305,    -1,    -1,    -1,    -1,
      -1,   192,    -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,
      -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   237,    -1,   165,    -1,
      -1,    -1,    -1,    -1,   245,   246,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     228,    -1,   263,    -1,    -1,   233,   165,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   275,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     301,   228,   303,    -1,    -1,    -1,   233,    -1,    -1,    -1,
      -1,    -1,   313,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   323,    -1,    -1,    -1,    -1,    -1,   296,    -1,
      -1,    -1,    -1,    -1,   233,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   357,    -1,    -1,    -1,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,    40,    -1,    -1,
      43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      -1,    -1,    65,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   129,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
      -1,    -1,    -1,    -1,   147,    -1,    -1,   150,    -1,    -1,
      -1,   154,   155,    -1,    -1,    -1,   159,   160,    -1,    -1,
      -1,   164,    -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   186,    -1,    -1,   189,   190,   191,    -1,
      -1,   194,   195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   226,   227,   228,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,   242,
      -1,    -1,    -1,    -1,    -1,    -1,   249,    -1,    -1,    -1,
      -1,   254,    -1,    -1,    -1,   258,    -1,   260,    -1,   262,
      -1,    -1,    -1,    -1,    -1,   268,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   282,
      -1,    -1,    -1,    -1,    -1,   288,    -1,    -1,    40,    -1,
      -1,    43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,   304,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   316,    66,   318,    68,    69,    70,    -1,
      -1,   324,    -1,    -1,   327,   328,    78,    -1,    80,    -1,
      -1,    -1,    -1,    85,    -1,    87,    88,    89,    -1,    -1,
      -1,    -1,    -1,    95,    -1,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   358,    -1,    -1,    -1,    -1,
      -1,    -1,   365,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   128,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   155,    -1,   157,   158,   159,   160,    -1,
      -1,    -1,   164,    -1,   165,    -1,   168,    -1,   170,   170,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   194,   195,    -1,    -1,    -1,   199,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   170,   209,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,    -1,    -1,    -1,    -1,
      -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   260,    -1,
     262,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   288,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   304,   305,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   313,    -1,    -1,    -1,    -1,    -1,    -1,   320,    -1,
      -1,    -1,    -1,    -1,   326,    -1,   328,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   365,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    40,    43,    46,    60,    65,    66,    68,    69,    70,
      78,    85,    87,    88,    97,    98,   120,   129,   142,   147,
     150,   154,   155,   159,   160,   164,   170,   186,   189,   190,
     191,   194,   195,   209,   226,   227,   228,   240,   242,   249,
     254,   258,   260,   262,   268,   282,   288,   304,   305,   316,
     318,   324,   327,   328,   358,   365,   371,    67,    11,    54,
      72,   102,   121,   125,   139,   309,   409,     3,     4,   309,
     372,   414,   199,   205,   244,   272,   319,   364,   416,   301,
       4,    39,   113,   159,   160,   206,   260,   421,    27,   156,
     184,   188,   241,   284,   292,   293,   387,   423,    84,   101,
     186,   230,   268,   424,    39,    60,   113,   206,   305,   372,
     433,     4,    18,    39,    57,   103,   122,   165,   206,   214,
     222,   223,   228,   233,   312,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   361,   366,   367,   374,   382,   383,
     384,   435,    32,   436,   374,    43,    46,    77,    85,   148,
     204,   229,   231,   260,   328,   373,   374,    65,   372,   438,
     150,   439,    40,    43,    46,    66,    68,    69,    70,    78,
      80,    85,    87,    88,    89,    95,    97,   128,   147,   155,
     157,   158,   159,   160,   164,   168,   170,   194,   195,   199,
     209,   226,   227,   234,   260,   262,   288,   304,   305,   313,
     320,   326,   328,   365,   440,    84,   101,   486,    18,    40,
      43,    78,    85,    96,    97,   103,   128,   147,   164,   165,
     171,   194,   233,   288,   299,   328,   489,    67,   374,    62,
     299,   322,   495,    62,   299,   322,   496,    89,   118,   197,
     212,   276,   318,   328,   497,    15,    25,   114,   128,   167,
     219,   232,   500,   243,   518,     5,    67,    89,   144,   318,
     365,   374,   519,     5,   520,    58,   135,   238,   254,   319,
     536,    45,    65,    67,   193,   252,   299,   308,   556,    67,
     215,   360,   366,   368,   557,    38,   206,   244,   309,   372,
     382,   384,   558,     5,   318,   328,   374,   561,    71,   178,
     259,   269,   562,     4,   563,    89,   536,    62,   299,   322,
     570,   206,   309,   372,   571,    25,   114,   128,   219,   232,
     573,    51,   101,   110,   141,   311,   588,   589,     4,    36,
      48,    75,   155,   198,   269,   298,   306,   322,   404,     4,
     128,   218,   590,   309,   372,   592,    15,    22,   255,   258,
     383,   593,   243,   597,   309,   372,   598,     0,     5,    47,
     145,   146,   253,   374,   400,    60,   372,   410,   285,     5,
       4,   309,   372,   411,     5,    31,   297,   412,   127,   372,
     413,   127,   372,   415,   372,     4,   205,   257,   264,   419,
     199,   319,   363,   364,   372,   418,   374,   143,   187,   417,
     209,   372,    79,   183,   264,   372,   420,     5,   400,   372,
     372,   372,     4,   159,   160,   260,   422,   372,   372,     5,
     239,   400,   425,    30,   426,     5,   427,     5,   431,     5,
      30,   432,   372,     8,     9,    10,   372,   378,   379,   380,
     381,   372,   372,    39,   113,   206,   372,   434,   372,   206,
     382,   384,   372,    34,   108,   131,   132,   140,   162,   172,
     389,   372,     4,   374,   374,   374,   374,   374,   374,   374,
     374,   374,   374,   119,    67,    54,    72,    89,   102,   121,
     125,   139,   185,   443,   121,   445,   199,   205,   244,   272,
     319,   363,   364,   372,   428,   446,   301,   449,   178,   450,
     178,   188,   452,    66,    67,    70,    93,   178,   198,   220,
     288,   357,   382,   454,   372,   384,   457,    60,   305,   382,
     458,   296,   382,   384,   459,    32,   460,   382,   384,   461,
       4,   382,   384,   462,    44,    60,    82,   102,   119,   123,
     152,   153,   211,   221,   285,   286,   357,   466,   225,   321,
     472,    67,     5,    90,    62,   299,   322,   473,    62,   299,
     322,   474,     4,    89,   123,   464,     5,    66,   384,   463,
      15,   536,    45,    67,    82,   193,   252,   299,   308,   475,
      67,   244,   476,   300,    62,   299,   322,   477,    20,   139,
     251,   283,   478,    36,    48,    75,   155,   198,   269,   322,
     479,   384,    90,    15,   208,   484,   382,   487,    67,    73,
     490,    30,   491,    43,    88,   204,   492,   155,   230,   275,
     314,   493,   382,    17,    59,   117,   184,   305,   382,   494,
       5,   400,   161,   267,   320,   398,   382,     4,   161,   180,
     267,   399,   382,     4,     4,   205,   499,     5,     4,     4,
     123,   372,     4,     5,   260,   501,     5,   503,     5,   119,
     204,   260,   286,   504,    95,   113,   199,   517,     5,   515,
       5,   286,   516,     4,     5,   400,   374,   374,   372,   372,
       5,     4,     5,    61,    67,    74,    76,    81,    84,    90,
     101,   107,   116,   133,   155,   173,   185,   186,   207,   230,
     244,   246,   262,   268,   275,   282,   301,   314,   315,   317,
     357,   521,    92,   179,   273,   291,   386,     5,   400,     4,
     209,   216,   217,   252,   362,   385,   372,   382,   372,     5,
     400,   372,    39,   113,   372,   560,   374,   372,   382,   384,
     559,   372,   389,   372,     4,   383,    55,    91,   145,   260,
     564,     4,     4,   372,     4,   155,   275,   565,    47,   146,
     253,   397,   382,     4,    39,   113,   372,   572,   372,    99,
      62,   123,   260,   289,   574,   123,   587,    62,   119,   123,
     165,   204,   256,   260,   286,   289,   300,   576,   577,    62,
     123,   289,   586,     5,     4,    33,   109,   215,   569,    67,
     374,   405,    67,   374,   406,    67,   374,   407,    12,   201,
     568,   372,     4,   372,   237,   372,   408,   372,   286,     4,
     372,   372,     4,   238,   309,   596,     4,   303,   594,     4,
     303,   595,     4,   389,   127,   372,   599,   372,   372,     4,
       5,   372,    11,   372,   372,   372,    29,    96,   171,   264,
     270,   388,   388,     4,   209,   372,   372,     4,     4,     4,
     372,   372,   372,   372,   372,   372,   372,   372,     4,     4,
       4,     5,     5,   382,     5,   372,   372,   378,   380,   380,
     382,   372,   372,   372,   372,   372,   372,   372,   382,   384,
     381,   372,   372,   381,   372,     5,   285,   105,   199,   444,
     205,   264,   447,   178,    79,   183,   264,   448,   143,   187,
     429,   429,     4,   451,     4,   453,   205,   272,   455,   188,
     456,   178,   389,   372,   372,   382,   382,   389,   389,   389,
     382,   389,   372,   382,     4,   469,     4,   384,   467,   208,
       4,   174,   328,   468,   208,   382,     4,   136,   309,   471,
       5,     5,   441,     4,   208,   138,   261,   375,   372,     4,
       5,    61,    67,   116,   133,   149,   155,   163,   220,   239,
     244,   246,   274,   275,   282,   301,   357,   530,   384,   200,
     200,    67,   480,    67,   481,    67,   482,   237,   483,   372,
       5,   442,   238,   485,   383,   389,     5,   382,   382,   382,
     382,     4,     4,     4,   374,     4,     4,   208,   372,    13,
      14,    62,   202,   203,   279,   289,   290,   321,    88,     5,
       5,    13,    14,    62,   202,   203,   279,   289,   290,   294,
     321,    88,   165,   170,   383,   507,   512,    88,   165,     5,
     505,     4,     4,    13,    62,   202,   279,   289,   321,     5,
       5,     4,   372,   383,    19,    20,    21,    49,    50,    53,
      56,    63,    67,    75,    76,    83,    84,   101,   107,   111,
     112,   115,   133,   155,   183,   207,   237,   239,   245,   246,
     262,   263,   274,   275,   301,   303,   315,   317,   323,   357,
      67,    81,    90,   101,   133,   155,   207,   246,   275,   315,
     317,     4,    29,   169,   225,   251,   524,     5,   400,    64,
     106,   248,   265,   266,   359,   360,   529,   101,   522,    16,
     275,   527,    39,   113,   206,   528,     4,     5,    16,   224,
     310,   372,   275,   529,   537,   128,   529,   538,    35,    39,
     113,   137,   206,   309,   372,   539,   382,   374,    93,   101,
     107,   124,   130,   155,   166,   207,   215,   262,   275,   291,
     542,    39,   113,   206,     5,   275,   302,   546,    16,   126,
     176,   224,   310,   547,   303,   374,   548,     5,   101,   107,
     318,    16,    16,     4,   372,   372,   372,   372,   372,   372,
     389,   372,   372,   381,   372,     4,   389,     4,    39,   113,
     206,   280,   566,    39,   113,   206,   280,   567,     4,    99,
       5,     5,    88,     4,     5,     5,    88,     5,   577,    62,
     123,   165,   289,   581,    62,   123,   289,   585,    88,   165,
      62,   123,   289,   579,     4,    62,   123,   289,   578,     5,
       5,     4,     4,     5,   400,     5,   400,     5,   400,   372,
     372,   372,     4,   372,   591,   372,   372,   383,    65,     4,
       4,     5,     4,     4,     5,     4,    99,   277,   390,   372,
     372,    11,     5,    11,   372,   372,    11,     4,    11,     4,
       4,   372,   372,   372,   372,   372,   372,   372,     4,     4,
     374,     4,     4,   389,   382,   389,   372,   372,   372,   382,
     372,   381,   372,   372,     5,     5,   372,   384,   372,   382,
     372,   389,   389,   390,   390,   390,   389,   381,   372,   389,
     372,   375,   470,   174,     5,     4,   389,   165,   165,     4,
       5,     4,     4,   372,   465,    37,    37,   372,    19,    20,
      21,    49,    50,    53,    60,    63,    67,    75,    76,    83,
     111,   112,   115,   133,   155,   183,   192,   237,   245,   246,
     263,   275,   301,   303,   313,   323,   357,    67,   133,   163,
     246,   301,    29,   169,   225,   251,   531,   372,   220,   372,
     532,    16,   372,   274,   542,   274,   220,   372,   533,   303,
     534,    16,   100,   372,   372,     5,   390,     4,     4,    57,
     382,     4,     5,   498,   372,     5,     5,     5,   165,   195,
     394,   394,   173,   281,   392,     4,     4,     5,     5,   502,
     287,   287,     5,     5,     5,    16,   167,   393,   393,   392,
       4,     4,   392,     5,     5,   506,   170,   356,   383,   510,
       5,   509,     5,     5,   513,     5,   514,     5,    13,    14,
      62,   202,   203,   279,   289,   290,   294,   321,     4,     4,
       5,     5,   394,   392,     4,     5,     5,   389,    83,   157,
     235,   236,   250,   295,   401,     6,     7,   372,   377,   251,
     251,   251,   107,    39,    67,   101,   107,   113,   133,   155,
     173,   207,   246,   262,   275,   303,   315,   317,   318,   357,
     523,   251,     5,   400,    26,   175,   251,   299,   143,   107,
      21,    50,    53,    83,   112,   115,   239,   274,    21,    50,
      53,    56,    83,   112,   115,   239,   274,   301,    39,   251,
     251,   107,     5,   224,    26,   237,    35,   137,   309,   372,
     278,   285,   258,   382,   542,    39,   134,   237,   299,   258,
     224,     5,     5,   262,    26,   237,     4,     5,   400,     5,
     224,    35,   137,   309,   372,   542,   224,   374,     4,     4,
     372,     5,   321,    21,    26,    49,    50,    52,    53,    63,
      75,    76,    83,    86,   104,   111,   112,   115,   183,   239,
     245,   263,   274,   302,   303,   323,   368,   525,   372,   372,
     372,   372,   372,   529,   382,     5,     4,     5,   372,   372,
     382,   372,   374,   372,   372,   529,     5,     5,   372,   372,
     374,     5,    16,     5,     5,   372,   372,   381,   372,   372,
       4,   372,   372,   113,   372,   372,   113,     4,    41,    42,
     181,   182,   210,   403,   403,    62,   123,   289,   575,   403,
       5,    62,   123,   289,   580,     5,     5,    62,   123,   289,
     582,     4,     5,     5,     4,    62,   123,   289,   584,    62,
     123,   289,   583,     5,     5,     4,     5,     5,     4,   403,
     403,   403,   372,   372,   372,     4,   382,   372,   389,   383,
       5,     5,    11,   372,   382,   384,   372,    11,   372,   372,
     372,    60,   372,     4,   372,   372,     4,   372,   372,   372,
     372,    46,   288,   430,   430,     5,   374,   374,   389,   372,
       4,     4,     4,   389,   382,   372,   372,   372,   372,   389,
     382,   390,   381,   372,     4,   390,   372,     4,   384,     5,
      23,    24,    99,   391,     4,   382,   372,   372,     4,   372,
       5,    83,   157,   235,   236,   250,   295,   382,   384,   251,
     251,   251,    20,   251,   382,   251,    26,   175,   251,   299,
     143,    20,   251,   251,   251,    20,   251,    26,   177,   237,
     177,   278,   285,   177,   237,   307,   542,   134,   177,   237,
     299,     4,   262,    26,   177,   237,   542,   220,   372,   372,
     372,   372,   372,   372,   208,   372,   372,    19,   247,   488,
       4,     4,   372,   394,   394,   394,     4,   394,   394,   394,
      13,    14,    62,   202,   203,   279,   289,   290,   321,   393,
     394,   394,   394,   394,   394,     4,   394,   394,     4,   393,
      13,    14,    62,   202,   203,   279,   289,   290,   321,     5,
     508,     5,   511,     5,     5,    13,    14,    62,   202,   203,
     279,   289,   290,   294,   321,     5,    13,    14,    62,   202,
     203,   279,   289,   290,   294,   321,     5,    13,    14,    62,
     202,   203,   279,   289,   290,   294,   321,    13,    14,    62,
     202,   203,   279,   289,   290,   321,   287,     5,     5,     5,
     393,   393,   392,     4,     4,   392,     5,     4,     4,   394,
     394,     4,   394,   394,     5,   374,   382,   384,     5,   372,
     372,     5,   372,     5,   377,   107,   207,   262,   107,   207,
     262,     5,   372,   374,     5,   372,   382,   374,     5,   377,
     251,   251,    20,   251,    20,   251,   251,    20,   251,   325,
     325,     4,     4,     4,   523,     4,     4,     4,   325,   325,
       4,     5,     4,   372,     5,   372,     5,   377,   374,   382,
     382,   372,    26,    49,    52,    63,    86,   104,   368,   395,
       4,   372,   389,   374,     5,   382,   382,   372,   374,   374,
     382,   382,   372,   374,   372,     5,   372,   237,   237,   372,
     372,   237,   372,   237,   372,   372,   535,   543,   372,   237,
     237,   372,   372,   372,   372,   372,   372,   372,   372,     5,
     321,   372,   526,   372,   372,   237,   372,   372,   372,   372,
     382,   389,     5,     4,     4,   372,   372,   389,   372,   372,
     372,   382,   529,   372,   372,     5,     4,   372,   372,   372,
     372,     5,     5,     4,   403,     5,     5,     4,     4,     4,
       5,     5,     4,     4,     5,     5,     4,     5,     5,     4,
     372,   372,   372,   372,   389,   372,   382,   384,   372,   389,
     372,   372,   372,   372,   372,     5,   372,   372,   372,     4,
     372,   372,   372,   372,     4,     4,   382,   372,   389,   188,
     387,   372,   387,   390,   389,   382,   372,   372,     4,   372,
     382,   382,   372,   375,     5,     5,     5,     5,     5,   382,
     389,   382,   382,   382,   382,   384,   382,   389,   382,   382,
     382,   384,   382,   382,   382,   382,   384,   382,   382,   382,
     372,   382,   382,   382,   382,   382,   382,   382,   372,   372,
       4,   372,     5,   372,   394,     5,     5,     5,   392,     4,
       4,     5,   394,   393,     4,   394,     5,     5,     5,   393,
     393,   392,     4,     4,     5,    13,    14,    62,   202,   203,
     279,   289,   290,   321,    13,    14,    62,   202,   203,   279,
     289,   290,   321,    13,    14,    62,   202,   203,   279,   289,
     290,   321,   287,     5,     5,     5,   393,   393,   392,     4,
       4,   392,     5,   287,     5,     5,     5,   393,   393,   392,
       4,     4,   392,     5,   287,     5,     5,     5,   393,   393,
     392,     4,     4,   392,     5,     5,     5,     5,   393,   393,
     392,     4,     4,     5,   393,     4,     4,   393,     4,     4,
     394,     5,   389,   382,   372,   372,   382,   372,     5,   377,
       5,   382,   374,     5,   382,   389,     5,   377,   372,   372,
     372,   372,   372,   372,   372,   372,   372,     4,     4,     5,
       4,     4,   372,   382,   372,     5,   377,   374,   389,   389,
     372,   381,   389,   389,   372,   389,   389,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,    56,    67,    94,
     133,   301,   303,   357,   540,   541,   542,   554,   555,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   382,     5,   372,   372,   372,   372,     4,     4,   389,
     390,     5,     5,   381,   372,     4,   389,   382,     4,   403,
     403,   403,   377,   372,   372,   372,   389,   372,   381,   372,
     372,    11,     5,     5,   372,   372,   372,   372,   372,   372,
       4,     4,   389,   382,   372,   372,   390,   391,   372,     5,
     372,   382,   384,     5,     5,     5,     5,     5,   389,   391,
     391,   391,   389,   391,   390,   391,   391,   389,   391,   391,
     391,   389,   391,   391,   389,   382,   391,   389,   391,   391,
     389,   391,   389,     4,   382,   384,     5,   372,     4,   394,
     393,     4,   393,     5,     5,     5,   393,   393,   392,     4,
       4,     5,     5,     5,     5,   393,   393,   392,     4,     4,
       5,     5,     5,     5,   393,   393,   392,     4,     4,     5,
     393,   394,   394,   394,   394,   394,     4,   394,   394,     4,
     393,   393,   394,   394,   394,   394,   394,     4,   394,   394,
       4,   393,   393,     4,     4,   393,     4,   393,   393,     4,
       4,     4,   383,   391,     4,   382,   391,   372,   382,     4,
     391,   391,   382,     4,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   382,   391,   372,   382,     4,
     381,   381,   382,   381,   381,   382,   382,   381,   381,   372,
     372,   372,   372,   372,   372,   377,   372,   372,   372,   369,
     369,   369,   369,   369,   369,   369,   541,   369,   377,   372,
     372,   372,   372,   377,   372,   372,   372,   372,   372,   372,
     389,   372,   321,   376,   377,   372,   372,   390,   374,   382,
     382,   390,   389,     4,   372,   381,   372,    60,   372,     5,
       5,     4,     4,   372,   372,   372,     4,   387,   387,   391,
       5,   389,     4,     5,     4,     5,   382,     5,   390,   391,
     390,   390,   390,     5,   389,     4,   372,   394,   393,   394,
     394,   394,   394,   394,     4,   394,   394,   393,   394,   394,
     394,   394,   394,     4,   394,   394,   393,   394,   394,   394,
     394,   394,     4,   394,   394,   393,   394,   393,     4,   394,
     394,   393,     4,   394,   393,     4,   393,   393,   389,   382,
     391,     4,   389,   372,   389,   372,   372,   372,   391,     4,
     389,   372,   381,   391,   372,   381,   391,   391,   382,   372,
       4,   396,   396,   372,   372,   396,   377,   396,   543,   382,
     523,     5,   400,     4,     5,     5,     5,     4,   374,   377,
     396,   396,   372,   372,   377,   372,   372,   372,   372,   372,
     381,   372,     5,   543,   372,   396,   374,   544,   545,   389,
     389,   374,   390,     4,     5,   372,     5,     4,     4,     4,
       4,     4,     4,   372,   372,     4,    31,   196,   297,   437,
     382,     5,    31,   196,   297,   402,   382,     4,   437,   372,
     393,   394,   393,   394,   393,   394,   394,   393,   394,   393,
     393,   372,   391,   382,   382,   372,   382,   372,   382,   382,
     372,   382,   391,     4,   543,   543,   376,   372,   543,     4,
     543,   389,     5,     4,     4,   543,   543,   376,   372,     4,
     543,   543,   372,   382,   543,   543,   543,   544,   551,   552,
     542,   549,   550,   374,     4,     5,     5,     4,     4,     4,
     199,   319,   364,   372,   428,   372,   428,   437,     4,   382,
     437,     4,   394,   394,   394,   394,   394,   383,   391,   391,
     372,   391,     4,   391,   391,   372,   391,   372,   543,   543,
       4,   372,   543,     5,   372,   543,     4,   372,   543,   389,
     551,   553,   554,   369,   550,     5,     5,   372,   429,   372,
     429,   372,   429,   372,   429,   389,   391,     4,   382,   384,
       4,   377,   376,   372,   372,   376,   372,   382,   554,   374,
       5,     5,   372,   372,   372,   372,   372,   372,   372,   372,
     402,     5,   382,   384,   389,   382,   384,   543,   372,     4,
     543,   372,   391,     5,     5,   372,     5,   372,     5,   372,
       5,   372,   389,   389,     4,   543,     4,     5,     5,     5,
       5,     5,   376,   376,   543,   543,   543
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
#line 482 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 483 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 6:
#line 484 "frame/parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 8:
#line 486 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 9:
#line 487 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 11:
#line 489 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 12:
#line 490 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 19:
#line 497 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 503 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 26:
#line 504 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 27:
#line 505 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 28:
#line 506 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 32:
#line 510 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 39:
#line 517 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 40:
#line 518 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 44:
#line 522 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 47:
#line 525 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 52:
#line 530 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 54:
#line 532 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 56:
#line 534 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 58:
#line 536 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 63:
#line 543 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 64:
#line 544 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 65:
#line 547 "frame/parser.Y"
    {yydebug=(yyvsp[(1) - (1)].integer);;}
    break;

  case 66:
#line 548 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 549 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 550 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 551 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 552 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 553 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 72:
#line 554 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 73:
#line 555 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 74:
#line 556 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 75:
#line 557 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 76:
#line 560 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 77:
#line 562 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 78:
#line 563 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 79:
#line 564 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 80:
#line 565 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 81:
#line 567 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 82:
#line 568 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 83:
#line 569 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 84:
#line 570 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 85:
#line 573 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 86:
#line 574 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 87:
#line 575 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 88:
#line 576 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 89:
#line 577 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 90:
#line 580 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 91:
#line 581 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 92:
#line 584 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 93:
#line 585 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 94:
#line 586 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 95:
#line 589 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 96:
#line 592 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 97:
#line 595 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 98:
#line 599 "frame/parser.Y"
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

  case 99:
#line 611 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 100:
#line 618 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 101:
#line 625 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 102:
#line 632 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 103:
#line 633 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 104:
#line 634 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 105:
#line 635 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 106:
#line 636 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 107:
#line 639 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 108:
#line 640 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 109:
#line 641 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 110:
#line 642 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 111:
#line 643 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 112:
#line 644 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 113:
#line 645 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 114:
#line 646 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 115:
#line 647 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 116:
#line 648 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 117:
#line 649 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 118:
#line 650 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 119:
#line 651 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 120:
#line 652 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 121:
#line 653 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 122:
#line 654 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 123:
#line 655 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 124:
#line 656 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 125:
#line 657 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 126:
#line 658 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 127:
#line 659 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 128:
#line 660 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 129:
#line 661 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 130:
#line 662 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 131:
#line 663 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 132:
#line 664 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 133:
#line 665 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 134:
#line 666 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 135:
#line 669 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 136:
#line 670 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 137:
#line 673 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 138:
#line 674 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 139:
#line 675 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 140:
#line 676 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 141:
#line 677 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 142:
#line 678 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 143:
#line 681 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 144:
#line 682 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 145:
#line 683 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 146:
#line 684 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 147:
#line 685 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 148:
#line 688 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 149:
#line 689 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 150:
#line 690 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 151:
#line 691 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 152:
#line 692 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 153:
#line 693 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 154:
#line 694 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 155:
#line 695 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 156:
#line 698 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 157:
#line 699 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 158:
#line 700 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 159:
#line 701 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 160:
#line 702 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 161:
#line 705 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 162:
#line 706 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 163:
#line 707 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 164:
#line 708 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 165:
#line 709 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 166:
#line 710 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 167:
#line 711 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 168:
#line 712 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 169:
#line 715 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 170:
#line 716 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 171:
#line 717 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 172:
#line 720 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 173:
#line 721 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 174:
#line 722 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 175:
#line 723 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 176:
#line 726 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 177:
#line 727 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 178:
#line 728 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 179:
#line 731 "frame/parser.Y"
    {;}
    break;

  case 180:
#line 732 "frame/parser.Y"
    {;}
    break;

  case 181:
#line 733 "frame/parser.Y"
    {;}
    break;

  case 182:
#line 736 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 183:
#line 737 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 184:
#line 738 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 185:
#line 741 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 186:
#line 742 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 187:
#line 743 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 188:
#line 744 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 189:
#line 745 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 190:
#line 746 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 191:
#line 747 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 192:
#line 748 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 193:
#line 751 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 194:
#line 752 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 195:
#line 755 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 196:
#line 756 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 197:
#line 757 "frame/parser.Y"
    {(yyval.integer)=2;;}
    break;

  case 198:
#line 760 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 199:
#line 761 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 200:
#line 762 "frame/parser.Y"
    {(yyval.integer)=2;;}
    break;

  case 201:
#line 765 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 202:
#line 766 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 203:
#line 767 "frame/parser.Y"
    {(yyval.integer)=2;;}
    break;

  case 204:
#line 770 "frame/parser.Y"
    {strcpy(yyval.str,"red");;}
    break;

  case 205:
#line 771 "frame/parser.Y"
    {strcpy(yyval.str,"green");;}
    break;

  case 206:
#line 772 "frame/parser.Y"
    {strcpy(yyval.str,"blue");;}
    break;

  case 207:
#line 773 "frame/parser.Y"
    {strcpy(yyval.str,"gray");;}
    break;

  case 208:
#line 776 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 209:
#line 777 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 210:
#line 778 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 211:
#line 779 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 212:
#line 780 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 213:
#line 781 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 214:
#line 784 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 215:
#line 785 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 216:
#line 786 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 217:
#line 787 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 218:
#line 790 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 219:
#line 791 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 220:
#line 792 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 221:
#line 793 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 222:
#line 794 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 223:
#line 795 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 228:
#line 802 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 229:
#line 803 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 230:
#line 804 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 231:
#line 805 "frame/parser.Y"
    {fr->set3dSyncCmd((yyvsp[(2) - (2)].integer));}
    break;

  case 232:
#line 807 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 233:
#line 810 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 234:
#line 811 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 235:
#line 812 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 236:
#line 815 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 237:
#line 816 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 238:
#line 817 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 239:
#line 820 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 240:
#line 821 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 241:
#line 822 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 242:
#line 825 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 243:
#line 827 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 245:
#line 831 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 246:
#line 832 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 249:
#line 835 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 251:
#line 837 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 252:
#line 840 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 253:
#line 841 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 254:
#line 844 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 255:
#line 845 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 256:
#line 847 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 257:
#line 849 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 258:
#line 850 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 259:
#line 851 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 260:
#line 853 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 261:
#line 855 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 262:
#line 858 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 263:
#line 859 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 264:
#line 862 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 265:
#line 864 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 266:
#line 867 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 267:
#line 869 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 268:
#line 872 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 269:
#line 876 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 270:
#line 877 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 272:
#line 881 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 273:
#line 882 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 274:
#line 883 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 278:
#line 889 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 279:
#line 890 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 281:
#line 893 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 282:
#line 898 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 283:
#line 899 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 284:
#line 902 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 285:
#line 903 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 286:
#line 904 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 287:
#line 905 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 288:
#line 906 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 289:
#line 909 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 290:
#line 910 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 291:
#line 911 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 292:
#line 912 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 293:
#line 915 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 294:
#line 917 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 295:
#line 922 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 296:
#line 927 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 297:
#line 934 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 298:
#line 936 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 299:
#line 938 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 300:
#line 940 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 301:
#line 941 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 303:
#line 943 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 304:
#line 947 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 305:
#line 949 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 306:
#line 951 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 307:
#line 953 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 308:
#line 955 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 309:
#line 956 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 315:
#line 967 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 316:
#line 969 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 317:
#line 972 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 318:
#line 974 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 319:
#line 977 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 320:
#line 982 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 321:
#line 988 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 322:
#line 993 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 323:
#line 998 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 324:
#line 1001 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 325:
#line 1002 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 326:
#line 1005 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 327:
#line 1006 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 328:
#line 1008 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 329:
#line 1014 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 330:
#line 1015 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 331:
#line 1016 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 332:
#line 1017 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 333:
#line 1020 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 334:
#line 1021 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 335:
#line 1024 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 336:
#line 1025 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 337:
#line 1028 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 338:
#line 1029 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 339:
#line 1033 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 340:
#line 1035 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 341:
#line 1038 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 342:
#line 1040 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 343:
#line 1043 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 345:
#line 1045 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 346:
#line 1046 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 347:
#line 1047 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 348:
#line 1050 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 349:
#line 1052 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 350:
#line 1053 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 351:
#line 1054 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 352:
#line 1055 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 353:
#line 1059 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 354:
#line 1061 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 355:
#line 1062 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 356:
#line 1063 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 357:
#line 1066 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 358:
#line 1068 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 359:
#line 1070 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 360:
#line 1072 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 361:
#line 1075 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 362:
#line 1078 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 363:
#line 1079 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 364:
#line 1080 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 365:
#line 1081 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 366:
#line 1084 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 367:
#line 1085 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 368:
#line 1088 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 369:
#line 1091 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 370:
#line 1092 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 384:
#line 1106 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 387:
#line 1109 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 388:
#line 1110 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 394:
#line 1116 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 395:
#line 1117 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 398:
#line 1120 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 399:
#line 1121 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 401:
#line 1124 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 403:
#line 1126 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 405:
#line 1128 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 407:
#line 1130 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 408:
#line 1132 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 411:
#line 1135 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 412:
#line 1139 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 413:
#line 1141 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 414:
#line 1145 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 415:
#line 1147 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 416:
#line 1150 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 417:
#line 1151 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 418:
#line 1152 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 419:
#line 1153 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 420:
#line 1154 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 421:
#line 1155 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 423:
#line 1157 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 424:
#line 1160 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 425:
#line 1161 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 426:
#line 1162 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 427:
#line 1165 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 428:
#line 1168 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 429:
#line 1170 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 430:
#line 1172 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 431:
#line 1173 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 432:
#line 1174 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 434:
#line 1176 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 436:
#line 1179 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 437:
#line 1185 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 438:
#line 1186 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 439:
#line 1189 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 440:
#line 1190 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 441:
#line 1191 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 442:
#line 1194 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 443:
#line 1195 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 445:
#line 1201 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 446:
#line 1203 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 447:
#line 1205 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 448:
#line 1208 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 450:
#line 1210 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 451:
#line 1214 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 452:
#line 1218 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 454:
#line 1220 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 455:
#line 1221 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 456:
#line 1222 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 457:
#line 1223 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 458:
#line 1224 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 460:
#line 1226 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 461:
#line 1227 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 462:
#line 1230 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 463:
#line 1231 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 464:
#line 1232 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 465:
#line 1235 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 466:
#line 1236 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 467:
#line 1240 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 468:
#line 1242 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 469:
#line 1250 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 470:
#line 1252 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 471:
#line 1254 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 472:
#line 1257 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 473:
#line 1259 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 474:
#line 1260 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 475:
#line 1263 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 476:
#line 1266 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 477:
#line 1268 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 478:
#line 1272 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 479:
#line 1274 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 480:
#line 1277 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 481:
#line 1281 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 482:
#line 1282 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 483:
#line 1284 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 484:
#line 1287 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 485:
#line 1288 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 487:
#line 1292 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 488:
#line 1293 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 489:
#line 1294 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 490:
#line 1297 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 491:
#line 1299 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 492:
#line 1300 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 494:
#line 1302 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 498:
#line 1306 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 499:
#line 1307 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 500:
#line 1308 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 501:
#line 1310 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 503:
#line 1312 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 504:
#line 1315 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 505:
#line 1317 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 506:
#line 1319 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 507:
#line 1320 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 508:
#line 1321 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 509:
#line 1322 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 510:
#line 1325 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 511:
#line 1326 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 512:
#line 1330 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 513:
#line 1332 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 514:
#line 1335 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 515:
#line 1338 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 516:
#line 1339 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 517:
#line 1341 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 518:
#line 1343 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 519:
#line 1345 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 520:
#line 1348 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 521:
#line 1349 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 522:
#line 1350 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 523:
#line 1353 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 524:
#line 1354 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 525:
#line 1355 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 526:
#line 1358 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 527:
#line 1359 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 528:
#line 1360 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 529:
#line 1363 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 530:
#line 1364 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 531:
#line 1365 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 532:
#line 1366 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 533:
#line 1367 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 534:
#line 1368 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 535:
#line 1369 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 536:
#line 1372 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 537:
#line 1375 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 538:
#line 1376 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 539:
#line 1377 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 540:
#line 1380 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 541:
#line 1381 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 542:
#line 1382 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 543:
#line 1383 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 544:
#line 1384 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 545:
#line 1385 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 550:
#line 1392 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 551:
#line 1393 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 552:
#line 1394 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 553:
#line 1397 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 554:
#line 1398 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 555:
#line 1401 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 556:
#line 1402 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 557:
#line 1405 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 558:
#line 1406 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 559:
#line 1409 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 560:
#line 1410 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 561:
#line 1413 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 563:
#line 1415 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 564:
#line 1418 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 565:
#line 1419 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 567:
#line 1423 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 568:
#line 1427 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 569:
#line 1430 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 570:
#line 1437 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 571:
#line 1438 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 572:
#line 1441 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 573:
#line 1442 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 576:
#line 1445 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 577:
#line 1446 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 578:
#line 1447 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 579:
#line 1448 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 581:
#line 1450 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 582:
#line 1451 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 583:
#line 1452 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 585:
#line 1454 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 586:
#line 1455 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 587:
#line 1456 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 588:
#line 1457 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 590:
#line 1461 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 591:
#line 1464 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 592:
#line 1465 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 593:
#line 1468 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 594:
#line 1469 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 595:
#line 1470 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 596:
#line 1471 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 597:
#line 1474 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 598:
#line 1475 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 599:
#line 1476 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 600:
#line 1477 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 601:
#line 1480 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 602:
#line 1481 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 603:
#line 1482 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 604:
#line 1483 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 605:
#line 1484 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 606:
#line 1485 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 607:
#line 1488 "frame/parser.Y"
    {fr->setChannelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 608:
#line 1489 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 609:
#line 1490 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 610:
#line 1493 "frame/parser.Y"
    {fr->setChannelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 611:
#line 1494 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 612:
#line 1495 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 613:
#line 1498 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 614:
#line 1499 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 615:
#line 1500 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 618:
#line 1504 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 619:
#line 1505 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 620:
#line 1508 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 621:
#line 1511 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 622:
#line 1512 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 623:
#line 1516 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 624:
#line 1518 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 625:
#line 1519 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 632:
#line 1531 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 633:
#line 1533 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 634:
#line 1535 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 635:
#line 1536 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 636:
#line 1538 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 637:
#line 1540 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 638:
#line 1542 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 639:
#line 1544 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 640:
#line 1546 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 642:
#line 1550 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 643:
#line 1551 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 644:
#line 1552 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 645:
#line 1553 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 646:
#line 1554 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 647:
#line 1556 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 648:
#line 1557 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 649:
#line 1558 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 650:
#line 1559 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 651:
#line 1562 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 652:
#line 1566 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 653:
#line 1568 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 654:
#line 1570 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 655:
#line 1572 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 656:
#line 1574 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 657:
#line 1576 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 658:
#line 1578 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 659:
#line 1580 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 660:
#line 1583 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 661:
#line 1585 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 662:
#line 1587 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 668:
#line 1595 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 669:
#line 1596 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 670:
#line 1597 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 671:
#line 1598 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 672:
#line 1599 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 673:
#line 1600 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 674:
#line 1602 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 675:
#line 1604 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 676:
#line 1605 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 677:
#line 1606 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 678:
#line 1607 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 679:
#line 1610 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 680:
#line 1611 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 681:
#line 1612 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 682:
#line 1613 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 683:
#line 1614 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 684:
#line 1616 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 685:
#line 1617 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 686:
#line 1618 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 687:
#line 1619 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 693:
#line 1630 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 694:
#line 1633 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 695:
#line 1636 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 696:
#line 1639 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 697:
#line 1642 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 698:
#line 1645 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 699:
#line 1648 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 700:
#line 1651 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 701:
#line 1654 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 702:
#line 1659 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 703:
#line 1662 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 704:
#line 1665 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 705:
#line 1668 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 706:
#line 1671 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 707:
#line 1674 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 708:
#line 1677 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 709:
#line 1680 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 710:
#line 1683 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 711:
#line 1686 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 712:
#line 1689 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 713:
#line 1694 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 714:
#line 1697 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 715:
#line 1700 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 716:
#line 1703 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 717:
#line 1706 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 718:
#line 1709 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 719:
#line 1712 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 720:
#line 1715 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 721:
#line 1718 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 722:
#line 1723 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 723:
#line 1725 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 724:
#line 1727 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 725:
#line 1729 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 726:
#line 1731 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 727:
#line 1733 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 728:
#line 1738 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 729:
#line 1740 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 730:
#line 1742 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 731:
#line 1746 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 732:
#line 1749 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 733:
#line 1752 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 734:
#line 1755 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 735:
#line 1758 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 736:
#line 1761 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 737:
#line 1764 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 738:
#line 1767 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 739:
#line 1770 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 740:
#line 1773 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 741:
#line 1776 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 742:
#line 1780 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 743:
#line 1781 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 744:
#line 1782 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 745:
#line 1783 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 746:
#line 1784 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 747:
#line 1785 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 748:
#line 1787 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 749:
#line 1789 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 750:
#line 1790 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 751:
#line 1791 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 752:
#line 1792 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 753:
#line 1795 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 754:
#line 1796 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 755:
#line 1797 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 756:
#line 1798 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 757:
#line 1799 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 758:
#line 1801 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 759:
#line 1802 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 760:
#line 1803 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 761:
#line 1804 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 762:
#line 1808 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 763:
#line 1810 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 764:
#line 1811 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 765:
#line 1813 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 766:
#line 1815 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 767:
#line 1817 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 768:
#line 1820 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 769:
#line 1821 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 770:
#line 1824 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 771:
#line 1825 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 772:
#line 1826 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 773:
#line 1829 "frame/parser.Y"
    {;}
    break;

  case 774:
#line 1832 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 775:
#line 1833 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 776:
#line 1834 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 777:
#line 1835 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 778:
#line 1836 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 779:
#line 1837 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 780:
#line 1838 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 781:
#line 1839 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 782:
#line 1843 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 784:
#line 1851 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 785:
#line 1852 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 786:
#line 1853 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 787:
#line 1855 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 788:
#line 1857 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 789:
#line 1858 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 790:
#line 1859 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 792:
#line 1860 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 795:
#line 1863 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 796:
#line 1864 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 797:
#line 1866 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 798:
#line 1868 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 799:
#line 1870 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 800:
#line 1873 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 801:
#line 1875 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 802:
#line 1876 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 803:
#line 1878 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 804:
#line 1881 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 805:
#line 1884 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 806:
#line 1888 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 807:
#line 1891 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 808:
#line 1894 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 809:
#line 1897 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 810:
#line 1901 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 811:
#line 1905 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 812:
#line 1910 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 813:
#line 1914 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 814:
#line 1916 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 815:
#line 1917 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 816:
#line 1918 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 817:
#line 1920 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 818:
#line 1922 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 819:
#line 1924 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 820:
#line 1926 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 821:
#line 1927 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 822:
#line 1929 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 823:
#line 1931 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 824:
#line 1934 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 825:
#line 1938 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 826:
#line 1942 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 827:
#line 1944 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 828:
#line 1946 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 829:
#line 1948 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 830:
#line 1950 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 831:
#line 1952 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 832:
#line 1954 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 833:
#line 1956 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 834:
#line 1958 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 835:
#line 1960 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 836:
#line 1962 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 837:
#line 1964 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 838:
#line 1966 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 839:
#line 1968 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 840:
#line 1969 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 841:
#line 1971 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 842:
#line 1973 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 843:
#line 1974 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 844:
#line 1975 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 845:
#line 1977 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 846:
#line 1979 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 847:
#line 1980 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 848:
#line 1981 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 849:
#line 1982 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 850:
#line 1984 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 851:
#line 1986 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 852:
#line 1990 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 853:
#line 1993 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 854:
#line 1996 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 855:
#line 2000 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 856:
#line 2004 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 857:
#line 2009 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 858:
#line 2013 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 859:
#line 2014 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 860:
#line 2015 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 861:
#line 2017 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 862:
#line 2019 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 863:
#line 2023 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 864:
#line 2024 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 865:
#line 2025 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 866:
#line 2027 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 867:
#line 2030 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 868:
#line 2033 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 869:
#line 2036 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 870:
#line 2037 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 871:
#line 2041 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 872:
#line 2045 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 873:
#line 2047 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 874:
#line 2048 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 875:
#line 2050 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 876:
#line 2053 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 877:
#line 2056 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 878:
#line 2057 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 879:
#line 2059 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 880:
#line 2060 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 881:
#line 2061 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 882:
#line 2063 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 883:
#line 2064 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 884:
#line 2066 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 885:
#line 2069 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 886:
#line 2072 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 887:
#line 2074 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 888:
#line 2075 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 892:
#line 2080 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 893:
#line 2081 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 894:
#line 2083 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 895:
#line 2085 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 896:
#line 2087 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 897:
#line 2088 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 901:
#line 2094 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 902:
#line 2095 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 903:
#line 2096 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 904:
#line 2097 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 905:
#line 2098 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 906:
#line 2099 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 907:
#line 2100 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 908:
#line 2101 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 909:
#line 2102 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 910:
#line 2103 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 911:
#line 2104 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 912:
#line 2106 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 913:
#line 2108 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 914:
#line 2109 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 915:
#line 2110 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 916:
#line 2111 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 917:
#line 2112 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 918:
#line 2114 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 919:
#line 2115 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 920:
#line 2116 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 921:
#line 2117 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 922:
#line 2118 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 923:
#line 2120 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 924:
#line 2121 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 925:
#line 2122 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 926:
#line 2123 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 927:
#line 2124 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 928:
#line 2125 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 929:
#line 2128 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 930:
#line 2129 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 931:
#line 2130 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 932:
#line 2131 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 933:
#line 2132 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 934:
#line 2133 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 935:
#line 2134 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 936:
#line 2135 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 937:
#line 2136 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 938:
#line 2137 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 939:
#line 2138 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 940:
#line 2139 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 941:
#line 2140 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 942:
#line 2141 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 943:
#line 2142 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 944:
#line 2143 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 945:
#line 2144 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 946:
#line 2145 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 947:
#line 2146 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 948:
#line 2147 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 949:
#line 2148 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 950:
#line 2151 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 951:
#line 2152 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 952:
#line 2153 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 953:
#line 2154 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 954:
#line 2155 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 955:
#line 2157 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 956:
#line 2167 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 957:
#line 2175 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 958:
#line 2184 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 959:
#line 2192 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 960:
#line 2199 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 961:
#line 2206 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 962:
#line 2214 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 963:
#line 2222 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 964:
#line 2227 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 965:
#line 2232 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 966:
#line 2237 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 967:
#line 2242 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 968:
#line 2247 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 969:
#line 2252 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 970:
#line 2257 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 971:
#line 2266 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 972:
#line 2276 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 973:
#line 2286 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 974:
#line 2295 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 975:
#line 2303 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 976:
#line 2313 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 977:
#line 2323 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 978:
#line 2333 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 979:
#line 2345 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 980:
#line 2354 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 982:
#line 2362 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 983:
#line 2364 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 984:
#line 2366 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 985:
#line 2371 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 986:
#line 2374 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 987:
#line 2375 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 988:
#line 2376 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 989:
#line 2383 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 990:
#line 2385 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 991:
#line 2386 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 992:
#line 2389 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 993:
#line 2390 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 994:
#line 2391 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 995:
#line 2392 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 996:
#line 2393 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 997:
#line 2394 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 998:
#line 2395 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 1000:
#line 2399 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 1001:
#line 2400 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 1002:
#line 2401 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 1003:
#line 2402 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1004:
#line 2403 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1005:
#line 2406 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 1006:
#line 2408 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 1007:
#line 2410 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 1008:
#line 2412 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1009:
#line 2414 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1010:
#line 2416 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1011:
#line 2418 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 1012:
#line 2419 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1013:
#line 2420 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1014:
#line 2422 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1015:
#line 2424 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1016:
#line 2427 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1017:
#line 2429 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1018:
#line 2430 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1019:
#line 2431 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1020:
#line 2433 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1021:
#line 2435 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1022:
#line 2438 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1023:
#line 2441 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1024:
#line 2442 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1025:
#line 2443 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1026:
#line 2444 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1027:
#line 2446 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1028:
#line 2447 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1029:
#line 2448 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1030:
#line 2449 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1031:
#line 2450 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1032:
#line 2452 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1033:
#line 2454 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1034:
#line 2456 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1035:
#line 2458 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1036:
#line 2460 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1037:
#line 2461 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1038:
#line 2463 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1039:
#line 2465 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1040:
#line 2467 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1041:
#line 2468 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1042:
#line 2469 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1043:
#line 2471 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1044:
#line 2473 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1045:
#line 2476 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1046:
#line 2479 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1047:
#line 2480 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1048:
#line 2482 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1049:
#line 2485 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1050:
#line 2488 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1051:
#line 2489 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1052:
#line 2490 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1053:
#line 2491 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1054:
#line 2493 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1055:
#line 2495 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1056:
#line 2497 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1057:
#line 2498 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1058:
#line 2500 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1059:
#line 2501 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1060:
#line 2502 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1061:
#line 2503 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1062:
#line 2504 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1063:
#line 2506 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1064:
#line 2508 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1065:
#line 2510 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1066:
#line 2512 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1068:
#line 2514 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1069:
#line 2515 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1070:
#line 2517 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1071:
#line 2519 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1072:
#line 2520 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1073:
#line 2521 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1075:
#line 2523 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1077:
#line 2527 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1078:
#line 2528 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1079:
#line 2529 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1080:
#line 2530 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1081:
#line 2531 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1082:
#line 2532 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1083:
#line 2534 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1084:
#line 2535 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1085:
#line 2537 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1086:
#line 2540 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1087:
#line 2541 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1088:
#line 2542 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1089:
#line 2543 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1090:
#line 2546 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1091:
#line 2547 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1092:
#line 2550 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1093:
#line 2551 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1094:
#line 2554 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1095:
#line 2555 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1096:
#line 2558 "frame/parser.Y"
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

  case 1097:
#line 2571 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1098:
#line 2572 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1099:
#line 2576 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1100:
#line 2577 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1101:
#line 2581 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1102:
#line 2582 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1103:
#line 2587 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1104:
#line 2591 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1105:
#line 2596 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1106:
#line 2598 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1107:
#line 2601 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1108:
#line 2603 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1109:
#line 2606 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1110:
#line 2608 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1111:
#line 2611 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1112:
#line 2612 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1113:
#line 2613 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1114:
#line 2614 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1115:
#line 2615 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1116:
#line 2616 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1117:
#line 2618 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1120:
#line 2625 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1121:
#line 2626 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1122:
#line 2627 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1123:
#line 2628 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1124:
#line 2629 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1125:
#line 2630 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1126:
#line 2631 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1129:
#line 2636 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1130:
#line 2637 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1131:
#line 2638 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1132:
#line 2639 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1133:
#line 2640 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1134:
#line 2641 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1135:
#line 2642 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1136:
#line 2643 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1137:
#line 2644 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1138:
#line 2645 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1139:
#line 2646 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1140:
#line 2647 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1143:
#line 2654 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1144:
#line 2655 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1146:
#line 2659 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1147:
#line 2661 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1148:
#line 2662 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1149:
#line 2665 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1150:
#line 2666 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1151:
#line 2667 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1152:
#line 2668 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1153:
#line 2669 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1154:
#line 2670 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1155:
#line 2673 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1156:
#line 2674 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1159:
#line 2682 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1160:
#line 2685 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1161:
#line 2686 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1165:
#line 2693 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1166:
#line 2696 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1167:
#line 2700 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1168:
#line 2701 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1169:
#line 2702 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1170:
#line 2703 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1171:
#line 2704 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1172:
#line 2705 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1173:
#line 2706 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1174:
#line 2707 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1175:
#line 2708 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1176:
#line 2714 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1177:
#line 2715 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1178:
#line 2716 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1179:
#line 2717 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1180:
#line 2721 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1181:
#line 2722 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1182:
#line 2724 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1183:
#line 2729 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1185:
#line 2731 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1187:
#line 2733 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1188:
#line 2736 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1189:
#line 2738 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1190:
#line 2743 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1191:
#line 2746 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1192:
#line 2747 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1193:
#line 2748 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1194:
#line 2751 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1195:
#line 2753 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1196:
#line 2757 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1197:
#line 2758 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1198:
#line 2762 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1199:
#line 2763 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1200:
#line 2764 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1201:
#line 2765 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1202:
#line 2771 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1203:
#line 2772 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1204:
#line 2778 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1205:
#line 2779 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1206:
#line 2780 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1207:
#line 2781 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1210:
#line 2789 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1211:
#line 2791 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1212:
#line 2792 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1213:
#line 2793 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1214:
#line 2797 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1215:
#line 2798 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1216:
#line 2799 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1217:
#line 2800 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1218:
#line 2803 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1219:
#line 2804 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1220:
#line 2807 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1221:
#line 2808 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1222:
#line 2809 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1223:
#line 2812 "frame/parser.Y"
    {fr->setChannelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1224:
#line 2813 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1225:
#line 2814 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1226:
#line 2817 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1227:
#line 2818 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1229:
#line 2820 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1230:
#line 2821 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1231:
#line 2824 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1232:
#line 2825 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1233:
#line 2826 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1238:
#line 2833 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1239:
#line 2837 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1240:
#line 2839 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1241:
#line 2841 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1243:
#line 2846 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1244:
#line 2848 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1245:
#line 2850 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1255:
#line 2863 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1256:
#line 2864 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1257:
#line 2865 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1258:
#line 2868 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1259:
#line 2869 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1260:
#line 2870 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1261:
#line 2873 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1262:
#line 2874 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1263:
#line 2875 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1264:
#line 2878 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1265:
#line 2879 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1266:
#line 2880 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1268:
#line 2884 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1269:
#line 2885 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1270:
#line 2886 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1271:
#line 2889 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1272:
#line 2890 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1273:
#line 2891 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1274:
#line 2894 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1275:
#line 2895 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1276:
#line 2896 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1277:
#line 2899 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1278:
#line 2900 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1279:
#line 2901 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1280:
#line 2904 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1281:
#line 2905 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1282:
#line 2906 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1283:
#line 2910 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1284:
#line 2912 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1285:
#line 2914 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1286:
#line 2918 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1287:
#line 2922 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1288:
#line 2924 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1289:
#line 2928 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1290:
#line 2931 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1291:
#line 2932 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1292:
#line 2933 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1293:
#line 2934 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1294:
#line 2937 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1295:
#line 2939 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1296:
#line 2941 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1297:
#line 2944 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1299:
#line 2948 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1300:
#line 2949 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1301:
#line 2950 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1302:
#line 2953 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1303:
#line 2954 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1304:
#line 2958 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1306:
#line 2960 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1309:
#line 2965 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1310:
#line 2966 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1311:
#line 2967 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1312:
#line 2970 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1313:
#line 2971 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1314:
#line 2972 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1315:
#line 2975 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1316:
#line 2977 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1317:
#line 2982 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1318:
#line 2983 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1319:
#line 2986 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1320:
#line 2993 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1321:
#line 2995 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1322:
#line 2997 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1323:
#line 3002 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1325:
#line 3006 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1326:
#line 3007 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1327:
#line 3008 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1328:
#line 3010 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1329:
#line 3012 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1330:
#line 3017 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11397 "frame/parser.C"
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


#line 3021 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

