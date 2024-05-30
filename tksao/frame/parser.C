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
#define YYLAST   5847

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  370
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  230
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1325
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2902

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
      28,    31,    35,    38,    41,    44,    47,    50,    53,    56,
      59,    62,    65,    68,    71,    73,    76,    80,    84,    87,
      90,    93,    97,   100,   103,   106,   109,   113,   116,   120,
     124,   127,   130,   133,   136,   139,   142,   144,   148,   151,
     154,   157,   159,   162,   165,   168,   170,   173,   175,   178,
     181,   184,   187,   189,   191,   193,   196,   199,   202,   205,
     208,   211,   214,   217,   220,   223,   225,   227,   229,   231,
     233,   235,   237,   239,   241,   242,   245,   248,   250,   252,
     253,   255,   257,   259,   261,   263,   265,   267,   270,   273,
     276,   279,   281,   283,   285,   287,   289,   291,   293,   295,
     297,   299,   301,   303,   305,   307,   309,   311,   313,   315,
     317,   319,   321,   323,   325,   327,   329,   331,   333,   335,
     337,   339,   341,   343,   345,   347,   349,   350,   352,   354,
     356,   358,   360,   361,   363,   365,   367,   369,   371,   373,
     375,   377,   379,   381,   383,   385,   387,   389,   391,   393,
     395,   396,   398,   400,   402,   404,   406,   408,   410,   411,
     413,   415,   416,   418,   420,   422,   423,   425,   427,   428,
     430,   432,   433,   435,   437,   438,   440,   442,   444,   446,
     448,   450,   452,   453,   455,   457,   459,   461,   463,   465,
     467,   469,   471,   473,   475,   477,   479,   481,   483,   485,
     487,   489,   491,   493,   494,   496,   498,   500,   501,   503,
     505,   507,   509,   511,   514,   517,   520,   523,   526,   529,
     532,   535,   538,   540,   543,   546,   548,   551,   554,   556,
     559,   562,   565,   572,   575,   580,   583,   586,   589,   593,
     596,   599,   601,   604,   606,   609,   614,   620,   623,   627,
     633,   640,   642,   644,   646,   654,   666,   675,   688,   690,
     693,   696,   698,   700,   703,   706,   709,   712,   716,   720,
     723,   726,   728,   730,   732,   734,   736,   738,   740,   743,
     746,   749,   751,   755,   758,   761,   764,   770,   780,   790,
     800,   802,   805,   807,   813,   823,   833,   843,   845,   848,
     851,   854,   857,   860,   863,   877,   891,   904,   917,   919,
     920,   922,   924,   929,   936,   938,   940,   942,   944,   946,
     948,   950,   952,   954,   959,   963,   968,   969,   976,   985,
     988,   992,   996,  1000,  1001,  1006,  1011,  1016,  1021,  1025,
    1029,  1031,  1035,  1041,  1046,  1051,  1055,  1058,  1059,  1061,
    1063,  1065,  1067,  1069,  1073,  1074,  1077,  1080,  1083,  1086,
    1089,  1092,  1095,  1098,  1101,  1104,  1107,  1110,  1113,  1116,
    1118,  1121,  1124,  1127,  1132,  1136,  1139,  1142,  1145,  1148,
    1151,  1153,  1157,  1160,  1163,  1165,  1168,  1177,  1180,  1182,
    1185,  1187,  1190,  1192,  1197,  1201,  1204,  1206,  1214,  1223,
    1231,  1240,  1242,  1244,  1246,  1249,  1251,  1253,  1256,  1258,
    1259,  1262,  1265,  1267,  1268,  1271,  1274,  1276,  1278,  1281,
    1284,  1287,  1289,  1291,  1293,  1295,  1297,  1299,  1300,  1302,
    1305,  1307,  1312,  1318,  1319,  1322,  1324,  1330,  1333,  1336,
    1338,  1340,  1342,  1345,  1347,  1350,  1352,  1354,  1355,  1357,
    1359,  1360,  1362,  1368,  1375,  1379,  1386,  1390,  1392,  1396,
    1398,  1400,  1402,  1406,  1413,  1421,  1427,  1430,  1432,  1438,
    1443,  1445,  1449,  1450,  1452,  1455,  1457,  1462,  1464,  1467,
    1469,  1472,  1476,  1479,  1481,  1484,  1486,  1491,  1494,  1496,
    1498,  1502,  1504,  1507,  1511,  1514,  1515,  1517,  1519,  1524,
    1527,  1528,  1530,  1534,  1539,  1544,  1545,  1547,  1549,  1551,
    1553,  1555,  1557,  1559,  1561,  1563,  1565,  1567,  1569,  1571,
    1573,  1575,  1577,  1579,  1581,  1583,  1585,  1587,  1590,  1592,
    1595,  1597,  1600,  1603,  1606,  1609,  1611,  1613,  1615,  1616,
    1618,  1619,  1621,  1622,  1624,  1625,  1627,  1628,  1631,  1634,
    1635,  1637,  1640,  1642,  1649,  1655,  1657,  1659,  1661,  1664,
    1667,  1670,  1672,  1674,  1676,  1678,  1681,  1683,  1685,  1687,
    1690,  1692,  1694,  1696,  1699,  1702,  1705,  1706,  1708,  1709,
    1711,  1713,  1715,  1717,  1719,  1721,  1723,  1725,  1728,  1731,
    1734,  1736,  1739,  1742,  1745,  1750,  1753,  1756,  1761,  1765,
    1767,  1770,  1773,  1778,  1784,  1786,  1797,  1799,  1802,  1806,
    1810,  1813,  1816,  1819,  1822,  1825,  1828,  1831,  1836,  1841,
    1846,  1850,  1854,  1860,  1865,  1870,  1875,  1879,  1883,  1887,
    1891,  1894,  1897,  1902,  1906,  1910,  1914,  1918,  1923,  1928,
    1933,  1938,  1944,  1949,  1956,  1964,  1969,  1974,  1980,  1983,
    1987,  1991,  1995,  1998,  2002,  2006,  2010,  2014,  2019,  2023,
    2029,  2036,  2040,  2044,  2049,  2053,  2057,  2061,  2065,  2069,
    2075,  2079,  2083,  2088,  2092,  2095,  2098,  2100,  2104,  2109,
    2114,  2119,  2124,  2129,  2136,  2141,  2146,  2152,  2157,  2162,
    2167,  2172,  2178,  2183,  2190,  2198,  2203,  2208,  2214,  2220,
    2226,  2232,  2238,  2244,  2252,  2258,  2264,  2271,  2276,  2281,
    2286,  2291,  2296,  2303,  2308,  2313,  2319,  2325,  2331,  2337,
    2343,  2350,  2356,  2364,  2373,  2379,  2385,  2392,  2396,  2400,
    2404,  2408,  2413,  2417,  2423,  2430,  2434,  2438,  2443,  2447,
    2451,  2455,  2459,  2463,  2469,  2473,  2477,  2482,  2487,  2492,
    2496,  2502,  2507,  2512,  2515,  2519,  2526,  2533,  2535,  2537,
    2539,  2542,  2545,  2548,  2551,  2555,  2559,  2562,  2575,  2578,
    2581,  2584,  2586,  2590,  2595,  2598,  2599,  2603,  2605,  2608,
    2611,  2614,  2617,  2620,  2625,  2630,  2635,  2639,  2644,  2650,
    2659,  2666,  2676,  2683,  2691,  2702,  2714,  2727,  2737,  2743,
    2750,  2754,  2758,  2764,  2770,  2777,  2783,  2788,  2798,  2809,
    2821,  2831,  2838,  2845,  2852,  2859,  2866,  2873,  2880,  2887,
    2894,  2902,  2910,  2913,  2918,  2923,  2928,  2933,  2939,  2944,
    2949,  2955,  2961,  2965,  2970,  2975,  2980,  2988,  2998,  3005,
    3016,  3028,  3041,  3051,  3055,  3058,  3062,  3068,  3076,  3081,
    3085,  3089,  3096,  3104,  3112,  3117,  3122,  3132,  3137,  3141,
    3146,  3154,  3162,  3165,  3169,  3173,  3177,  3182,  3185,  3188,
    3193,  3204,  3208,  3210,  3214,  3217,  3220,  3223,  3226,  3230,
    3236,  3241,  3247,  3250,  3253,  3256,  3259,  3263,  3267,  3270,
    3273,  3276,  3280,  3283,  3287,  3292,  3296,  3300,  3307,  3312,
    3315,  3319,  3322,  3325,  3330,  3334,  3338,  3341,  3345,  3347,
    3350,  3352,  3355,  3358,  3361,  3363,  3365,  3367,  3369,  3372,
    3374,  3377,  3380,  3382,  3385,  3388,  3390,  3393,  3395,  3397,
    3399,  3401,  3403,  3405,  3407,  3409,  3410,  3412,  3415,  3418,
    3421,  3425,  3431,  3439,  3447,  3454,  3461,  3468,  3475,  3481,
    3488,  3495,  3502,  3509,  3516,  3523,  3530,  3542,  3550,  3558,
    3566,  3576,  3586,  3597,  3610,  3623,  3626,  3629,  3633,  3638,
    3643,  3648,  3649,  3651,  3653,  3658,  3663,  3665,  3667,  3669,
    3671,  3673,  3675,  3677,  3679,  3682,  3684,  3686,  3688,  3692,
    3696,  3705,  3712,  3723,  3731,  3739,  3745,  3748,  3751,  3755,
    3760,  3766,  3772,  3778,  3782,  3787,  3793,  3799,  3805,  3811,
    3814,  3818,  3822,  3828,  3832,  3836,  3840,  3845,  3851,  3857,
    3863,  3869,  3873,  3878,  3884,  3890,  3893,  3896,  3900,  3906,
    3913,  3920,  3924,  3928,  3935,  3941,  3947,  3950,  3954,  3958,
    3964,  3971,  3975,  3978,  3981,  3985,  3988,  3992,  3995,  3999,
    4005,  4012,  4015,  4018,  4021,  4023,  4028,  4033,  4035,  4038,
    4041,  4044,  4047,  4050,  4053,  4056,  4060,  4063,  4067,  4070,
    4074,  4076,  4078,  4080,  4082,  4084,  4085,  4088,  4089,  4092,
    4093,  4095,  4096,  4097,  4099,  4101,  4103,  4105,  4107,  4115,
    4124,  4127,  4134,  4137,  4144,  4147,  4151,  4154,  4156,  4158,
    4162,  4166,  4168,  4173,  4176,  4178,  4182,  4186,  4190,  4195,
    4199,  4203,  4207,  4209,  4211,  4213,  4215,  4217,  4219,  4221,
    4223,  4225,  4227,  4229,  4231,  4233,  4235,  4237,  4240,  4241,
    4242,  4245,  4252,  4260,  4263,  4265,  4269,  4271,  4275,  4277,
    4279,  4281,  4284,  4287,  4289,  4293,  4294,  4295,  4298,  4301,
    4303,  4307,  4313,  4315,  4318,  4321,  4324,  4328,  4331,  4334,
    4337,  4340,  4342,  4344,  4346,  4348,  4353,  4356,  4360,  4364,
    4367,  4371,  4374,  4377,  4380,  4384,  4388,  4392,  4395,  4399,
    4401,  4405,  4409,  4411,  4414,  4417,  4420,  4423,  4433,  4440,
    4442,  4444,  4446,  4448,  4451,  4454,  4458,  4462,  4464,  4467,
    4471,  4475,  4477,  4480,  4482,  4484,  4486,  4488,  4490,  4493,
    4496,  4501,  4503,  4506,  4509,  4512,  4516,  4518,  4520,  4522,
    4525,  4528,  4531,  4534,  4537,  4541,  4545,  4549,  4553,  4557,
    4561,  4565,  4567,  4570,  4573,  4576,  4580,  4583,  4587,  4591,
    4594,  4597,  4600,  4603,  4606,  4609,  4612,  4615,  4618,  4621,
    4624,  4627,  4630,  4633,  4637,  4641,  4645,  4648,  4651,  4654,
    4657,  4660,  4663,  4666,  4669,  4672,  4675,  4678,  4681,  4685,
    4689,  4693,  4698,  4705,  4708,  4710,  4712,  4714,  4716,  4718,
    4719,  4725,  4727,  4734,  4738,  4740,  4743,  4746,  4749,  4753,
    4757,  4760,  4763,  4766,  4769,  4772,  4775,  4779,  4782,  4785,
    4789,  4791,  4795,  4800,  4803,  4805,  4808,  4814,  4821,  4828,
    4831,  4833,  4836,  4839,  4845,  4852
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     371,     0,    -1,    98,   373,    -1,    43,   409,    -1,    40,
      67,     5,    -1,    40,    67,   400,    -1,    40,    67,   374,
      -1,    46,   414,    -1,    60,    -1,    65,    -1,    66,   416,
      -1,    68,   301,     5,    -1,    69,   421,    -1,    70,   423,
      -1,    78,   424,    -1,    85,   433,    -1,    87,   435,    -1,
      88,   436,    -1,    97,   374,    -1,   120,   438,    -1,   129,
     439,    -1,   142,   440,    -1,   147,   486,    -1,   150,   489,
      -1,   154,    -1,   155,   374,    -1,   155,    67,     5,    -1,
     155,    67,   400,    -1,   159,   495,    -1,   160,   496,    -1,
     164,   497,    -1,   170,    15,     4,    -1,   186,   500,    -1,
     189,   518,    -1,   190,   519,    -1,   191,   520,    -1,   194,
     536,   521,    -1,   195,   556,    -1,   209,    67,     5,    -1,
     209,    67,   400,    -1,   226,   557,    -1,   227,   558,    -1,
     228,   561,    -1,   249,    89,    -1,   242,   563,    -1,   240,
     562,    -1,   258,    -1,   254,   536,   565,    -1,   260,   570,
      -1,   262,   571,    -1,   268,   573,    -1,   282,    -1,   288,
     588,    -1,   304,     4,    -1,   305,   404,    -1,   316,    -1,
     318,   590,    -1,   324,    -1,   327,   592,    -1,   328,   593,
      -1,   358,   597,    -1,   365,   598,    -1,     3,    -1,     4,
      -1,   374,    -1,   204,   374,    -1,   229,   374,    -1,   231,
     374,    -1,   328,   374,    -1,    43,   374,    -1,    46,   374,
      -1,    77,   374,    -1,    85,   374,    -1,   148,   374,    -1,
     260,   374,    -1,     4,    -1,   361,    -1,   366,    -1,   223,
      -1,   312,    -1,   214,    -1,   367,    -1,   222,    -1,   122,
      -1,    -1,   261,    37,    -1,   138,    37,    -1,   261,    -1,
     138,    -1,    -1,   377,    -1,   372,    -1,     6,    -1,     7,
      -1,     8,    -1,     9,    -1,    10,    -1,   378,   378,    -1,
     379,   380,    -1,   380,   380,    -1,   372,   372,    -1,   165,
      -1,   233,    -1,   103,    -1,    18,    -1,   383,    -1,   328,
      -1,   329,    -1,   330,    -1,   331,    -1,   332,    -1,   333,
      -1,   334,    -1,   335,    -1,   336,    -1,   337,    -1,   338,
      -1,   339,    -1,   340,    -1,   341,    -1,   342,    -1,   343,
      -1,   344,    -1,   345,    -1,   346,    -1,   347,    -1,   348,
      -1,   349,    -1,   350,    -1,   351,    -1,   352,    -1,   353,
      -1,   354,    -1,   355,    -1,    57,    -1,   228,    -1,    -1,
     362,    -1,   217,    -1,   209,    -1,   216,    -1,   252,    -1,
      -1,   291,    -1,   273,    -1,    92,    -1,   179,    -1,   184,
      -1,   188,    -1,   241,    -1,   292,    -1,   293,    -1,    27,
      -1,   284,    -1,   156,    -1,    29,    -1,   270,    -1,   264,
      -1,    96,    -1,   171,    -1,    -1,   131,    -1,    34,    -1,
     132,    -1,   172,    -1,   162,    -1,   140,    -1,   108,    -1,
      -1,    99,    -1,   277,    -1,    -1,    99,    -1,    23,    -1,
      24,    -1,    -1,   281,    -1,   173,    -1,    -1,    16,    -1,
     167,    -1,    -1,   165,    -1,   195,    -1,    -1,    63,    -1,
      49,    -1,   104,    -1,    86,    -1,   368,    -1,    26,    -1,
      52,    -1,    -1,     4,    -1,   253,    -1,   146,    -1,    47,
      -1,   161,    -1,   267,    -1,   320,    -1,   161,    -1,   180,
      -1,   267,    -1,   253,    -1,   146,    -1,    47,    -1,   145,
      -1,    83,    -1,   157,    -1,   235,    -1,   236,    -1,   250,
      -1,   295,    -1,    -1,    31,    -1,   297,    -1,   196,    -1,
      -1,   210,    -1,    41,    -1,    42,    -1,   181,    -1,   182,
      -1,   322,   408,    -1,    48,   405,    -1,    75,   406,    -1,
     155,   407,    -1,   198,   568,    -1,    36,   569,    -1,   269,
     372,    -1,   298,     4,    -1,   306,   372,    -1,   374,    -1,
      67,     5,    -1,    67,   400,    -1,   374,    -1,    67,     5,
      -1,    67,   400,    -1,   374,    -1,    67,     5,    -1,    67,
     400,    -1,   372,   372,    -1,   237,   372,   372,   372,   372,
     372,    -1,    11,   410,    -1,    72,     5,     5,     5,    -1,
     102,     4,    -1,   121,   411,    -1,   139,   412,    -1,    54,
     285,     4,    -1,   309,   413,    -1,   125,     5,    -1,    60,
      -1,   372,   372,    -1,   372,    -1,   372,   372,    -1,   372,
      11,   372,   372,    -1,   372,   372,    11,   372,   372,    -1,
     309,   372,    -1,   309,   372,   372,    -1,   309,   372,    11,
     372,   372,    -1,   309,   372,   372,    11,   372,   372,    -1,
      31,    -1,   297,    -1,   127,    -1,   372,   372,    11,    60,
       5,     5,     5,    -1,   372,   372,     4,   372,   372,    11,
      60,     5,     5,     5,     5,    -1,   372,   372,    11,   372,
     372,     5,     5,     5,    -1,   372,   372,     4,   372,   372,
      11,   372,   372,     5,     5,     5,     5,    -1,   372,    -1,
     372,   372,    -1,   309,   415,    -1,   127,    -1,   372,    -1,
     372,   372,    -1,   272,   417,    -1,   205,   418,    -1,   199,
     419,    -1,   319,   372,   372,    -1,   319,   209,   209,    -1,
     364,   420,    -1,   244,   374,    -1,   143,    -1,   187,    -1,
     372,    -1,   199,    -1,   364,    -1,   363,    -1,   319,    -1,
       4,   388,    -1,   205,   388,    -1,   264,     4,    -1,   257,
      -1,   372,     4,     4,    -1,    79,   372,    -1,   264,     4,
      -1,   183,     4,    -1,     4,   372,   372,     4,     4,    -1,
     260,   372,   372,   372,   372,   372,   372,     4,     4,    -1,
     159,   372,   372,   372,   372,   372,   372,     4,     4,    -1,
     160,   372,   372,   372,   372,   372,   372,     4,     4,    -1,
      39,    -1,   206,   422,    -1,   113,    -1,     4,   372,   372,
       4,     4,    -1,   260,   372,   372,   372,   372,   372,   372,
       4,     4,    -1,   159,   372,   372,   372,   372,   372,   372,
       4,     4,    -1,   160,   372,   372,   372,   372,   372,   372,
       4,     4,    -1,   387,    -1,   188,   372,    -1,    84,   425,
      -1,   101,   426,    -1,   186,   427,    -1,   230,   431,    -1,
     268,   432,    -1,     5,     4,     4,   430,     4,     4,   387,
     372,   428,   429,   372,   372,     5,    -1,     5,     4,     4,
     430,     4,     4,   387,   372,   372,   429,   372,   372,     5,
      -1,     5,     4,     4,   430,     4,     4,   387,   372,   428,
     372,   372,     5,    -1,     5,     4,     4,   430,     4,     4,
     387,   372,   372,   372,   372,     5,    -1,   239,    -1,    -1,
      30,    -1,     5,    -1,     5,     5,     4,   374,    -1,     5,
       4,   374,     5,   382,   389,    -1,   199,    -1,   364,    -1,
     363,    -1,   319,    -1,   143,    -1,   187,    -1,   288,    -1,
      46,    -1,     5,    -1,     5,     5,     4,   374,    -1,     5,
     382,   389,    -1,    30,     5,   382,   389,    -1,    -1,   372,
     372,   372,   372,   382,   389,    -1,    60,   381,   382,   389,
     372,   372,   382,   391,    -1,   305,   434,    -1,    39,   372,
     372,    -1,   206,   372,   372,    -1,   113,   372,   372,    -1,
      -1,   372,   372,   382,   389,    -1,    39,   372,   372,     4,
      -1,   206,   372,   372,     4,    -1,   113,   372,   372,     4,
      -1,   384,   372,   372,    -1,   382,   389,   381,    -1,   374,
      -1,   327,   372,   372,    -1,    39,   206,   384,   372,   372,
      -1,   206,   384,   372,   372,    -1,    39,   206,   382,   381,
      -1,   206,   382,   381,    -1,    32,     4,    -1,    -1,    31,
      -1,   297,    -1,   196,    -1,   372,    -1,    65,    -1,   150,
     119,     5,    -1,    -1,    40,    67,    -1,    43,   443,    -1,
      46,   445,    -1,    66,   446,    -1,    69,   450,    -1,    68,
     449,    -1,    70,   452,    -1,    78,   454,    -1,    80,   457,
      -1,    85,   458,    -1,    87,   459,    -1,    89,   461,    -1,
      88,   460,    -1,    95,   462,    -1,    97,    -1,   128,   466,
      -1,   147,   472,    -1,   155,    67,    -1,   157,     5,     5,
       4,    -1,   158,    90,   441,    -1,   159,   473,    -1,   160,
     474,    -1,   164,   464,    -1,   168,   463,    -1,   170,    15,
      -1,   199,    -1,   194,   536,   530,    -1,   195,   475,    -1,
     209,    67,    -1,   226,    -1,   227,   476,    -1,   234,   300,
     384,   372,   372,     4,     4,     5,    -1,   260,   477,    -1,
     262,    -1,   288,   478,    -1,   304,    -1,   305,   479,    -1,
     313,    -1,   320,   384,   372,   372,    -1,   326,    90,   442,
      -1,   328,   484,    -1,   365,    -1,     5,     5,   372,   372,
     384,     4,   437,    -1,     5,     5,   372,   372,   382,   389,
       4,   437,    -1,     5,     5,   372,   372,   384,     4,   437,
      -1,     5,     5,   372,   372,   382,   389,     4,   437,    -1,
     102,    -1,   121,    -1,   139,    -1,    54,   285,    -1,    89,
      -1,   125,    -1,    72,   444,    -1,   185,    -1,    -1,   199,
       5,    -1,   105,     5,    -1,   121,    -1,    -1,   428,   429,
      -1,   372,   429,    -1,   272,    -1,   205,    -1,   199,   447,
      -1,   319,   178,    -1,   364,   448,    -1,   244,    -1,   205,
      -1,   264,    -1,    79,    -1,   264,    -1,   183,    -1,    -1,
     301,    -1,   178,   451,    -1,     4,    -1,     4,   384,   372,
     372,    -1,     4,   372,   372,   387,   372,    -1,    -1,   178,
     453,    -1,   188,    -1,     4,   372,   372,   387,   372,    -1,
     382,   389,    -1,    66,   455,    -1,    67,    -1,    93,    -1,
     178,    -1,   220,   178,    -1,   198,    -1,    70,   456,    -1,
     288,    -1,   357,    -1,    -1,   205,    -1,   272,    -1,    -1,
     188,    -1,   372,   372,   382,   389,   390,    -1,   384,   372,
     372,   382,   389,   390,    -1,   382,   389,   390,    -1,    60,
     382,   389,   390,   382,   391,    -1,   305,   382,   389,    -1,
     384,    -1,   382,   389,   390,    -1,   296,    -1,    32,    -1,
     384,    -1,   382,   389,   390,    -1,   382,   389,   381,   372,
     372,     5,    -1,     4,   382,   389,   381,   372,   372,     5,
      -1,   384,   372,   372,     4,     4,    -1,     5,   375,    -1,
      66,    -1,   384,   372,   372,     5,   375,    -1,     4,     4,
       4,     4,    -1,    89,    -1,   123,   208,   465,    -1,    -1,
       4,    -1,   372,   372,    -1,   211,    -1,    60,   382,   389,
     390,    -1,    82,    -1,   102,   469,    -1,    44,    -1,   119,
     467,    -1,   123,   208,   470,    -1,   152,   468,    -1,   153,
      -1,   221,   208,    -1,   285,    -1,   285,   382,   389,   391,
      -1,   286,   471,    -1,   357,    -1,     4,    -1,   384,   372,
     372,    -1,     4,    -1,   174,     5,    -1,     4,   174,     5,
      -1,   328,     4,    -1,    -1,     4,    -1,   375,    -1,   375,
     384,   372,   372,    -1,   375,     4,    -1,    -1,     4,    -1,
     136,   165,   382,    -1,   136,   165,     4,   382,    -1,   309,
     165,   372,   382,    -1,    -1,   225,    -1,   321,    -1,    62,
      -1,   299,    -1,   322,    -1,    62,    -1,   299,    -1,   322,
      -1,    67,    -1,   193,    -1,   252,    -1,   299,    -1,   308,
      -1,    82,    -1,    45,    -1,   244,    -1,    62,    -1,   299,
      -1,   322,    -1,   139,    -1,   251,    -1,   251,   200,    -1,
     283,    -1,   283,   200,    -1,    20,    -1,   322,   483,    -1,
      48,   480,    -1,    75,   481,    -1,   155,   482,    -1,   198,
      -1,    36,    -1,   269,    -1,    -1,    67,    -1,    -1,    67,
      -1,    -1,    67,    -1,    -1,   237,    -1,    -1,    15,   485,
      -1,   208,   383,    -1,    -1,   238,    -1,    84,   487,    -1,
     101,    -1,   382,   389,   390,   488,     5,     5,    -1,   382,
     389,   390,   488,     5,    -1,    19,    -1,   247,    -1,    18,
      -1,    40,    67,    -1,    43,   490,    -1,    78,   491,    -1,
      85,    -1,    96,    -1,    97,    -1,   103,    -1,   128,   492,
      -1,   147,    -1,   164,    -1,   171,    -1,   194,   493,    -1,
     233,    -1,   165,    -1,   288,    -1,   299,   382,    -1,   328,
     494,    -1,    73,     5,    -1,    -1,    30,    -1,    -1,    43,
      -1,    88,    -1,   204,    -1,   155,    -1,   275,    -1,   230,
      -1,   314,    -1,   382,    -1,    59,   382,    -1,   117,   382,
      -1,   184,   382,    -1,    17,    -1,   305,   382,    -1,    62,
     398,    -1,   299,   382,    -1,   322,     4,     4,     4,    -1,
      62,   399,    -1,   299,   382,    -1,   322,     4,     4,     4,
      -1,   212,     4,     4,    -1,   118,    -1,   197,     5,    -1,
      89,   499,    -1,   276,   123,   208,   498,    -1,   276,     4,
       4,     4,     4,    -1,   318,    -1,   328,   372,   372,   372,
     372,   372,   372,   372,   372,     4,    -1,     5,    -1,     5,
       4,    -1,     4,     4,    57,    -1,     4,     4,   382,    -1,
     205,   374,    -1,    25,   501,    -1,   114,   503,    -1,   128,
     504,    -1,   167,   517,    -1,   219,   515,    -1,   232,   516,
      -1,     5,    13,     5,   394,    -1,     5,    14,     5,   394,
      -1,     5,    62,     5,   394,    -1,     5,   202,   394,    -1,
       5,   203,   394,    -1,     5,   279,   392,     4,   394,    -1,
       5,   289,     4,   394,    -1,     5,   290,     4,   394,    -1,
       5,   321,     5,   394,    -1,   260,    88,   502,    -1,     5,
      13,     5,    -1,     5,    14,     5,    -1,     5,    62,     5,
      -1,     5,   202,    -1,     5,   203,    -1,     5,   279,   392,
       4,    -1,     5,   289,     4,    -1,     5,   290,     4,    -1,
       5,   321,     5,    -1,     5,     5,   287,    -1,     5,    13,
       5,   394,    -1,     5,    14,     5,   394,    -1,     5,    62,
       5,   394,    -1,     5,   202,   393,   394,    -1,     5,     5,
     287,   393,   394,    -1,     5,   203,   393,   394,    -1,     5,
     279,   392,     4,   393,   394,    -1,     5,   294,   392,     4,
       4,   393,   394,    -1,     5,   289,     4,   394,    -1,     5,
     290,     4,   394,    -1,     5,   321,     5,   393,   394,    -1,
     286,   505,    -1,   119,    88,   506,    -1,   260,   165,   514,
      -1,   260,    88,   513,    -1,   204,   507,    -1,     5,    13,
       5,    -1,     5,    14,     5,    -1,     5,    62,     5,    -1,
       5,   202,   393,    -1,     5,     5,   287,   393,    -1,     5,
     203,   393,    -1,     5,   279,   392,     4,   393,    -1,     5,
     294,   392,     4,     4,   393,    -1,     5,   289,     4,    -1,
       5,   290,     4,    -1,     5,   321,     5,   393,    -1,     5,
      13,     5,    -1,     5,    14,     5,    -1,     5,    62,     5,
      -1,     5,   202,   393,    -1,     5,   203,   393,    -1,     5,
     279,   392,     4,   393,    -1,     5,   289,     4,    -1,     5,
     290,     4,    -1,     5,   321,     5,   393,    -1,   165,   170,
     508,    -1,   170,   509,    -1,   165,   510,    -1,   512,    -1,
     165,   356,   511,    -1,     5,    13,     5,   394,    -1,     5,
      14,     5,   394,    -1,     5,    62,     5,   394,    -1,     5,
     202,   393,   394,    -1,     5,   203,   393,   394,    -1,     5,
     279,   392,     4,   393,   394,    -1,     5,   289,     4,   394,
      -1,     5,   290,     4,   394,    -1,     5,   321,     5,   393,
     394,    -1,     5,    13,     5,   394,    -1,     5,    14,     5,
     394,    -1,     5,    62,     5,   394,    -1,     5,   202,   393,
     394,    -1,     5,     5,   287,   393,   394,    -1,     5,   203,
     393,   394,    -1,     5,   279,   392,     4,   393,   394,    -1,
       5,   294,   392,     4,     4,   393,   394,    -1,     5,   289,
       4,   394,    -1,     5,   290,     4,   394,    -1,     5,   321,
       5,   393,   394,    -1,   383,     5,    13,     5,   394,    -1,
     383,     5,    14,     5,   394,    -1,   383,     5,    62,     5,
     394,    -1,   383,     5,   202,   393,   394,    -1,   383,     5,
     203,   393,   394,    -1,   383,     5,   279,   392,     4,   393,
     394,    -1,   383,     5,   289,     4,   394,    -1,   383,     5,
     290,     4,   394,    -1,   383,     5,   321,     5,   393,   394,
      -1,     5,    13,     5,   394,    -1,     5,    14,     5,   394,
      -1,     5,    62,     5,   394,    -1,     5,   202,   393,   394,
      -1,     5,   203,   393,   394,    -1,     5,   279,   392,     4,
     393,   394,    -1,     5,   289,     4,   394,    -1,     5,   290,
       4,   394,    -1,     5,   321,     5,   393,   394,    -1,   383,
       5,    13,     5,   394,    -1,   383,     5,    14,     5,   394,
      -1,   383,     5,    62,     5,   394,    -1,   383,     5,   202,
     393,   394,    -1,   383,     5,     5,   287,   393,   394,    -1,
     383,     5,   203,   393,   394,    -1,   383,     5,   279,   392,
       4,   393,   394,    -1,   383,     5,   294,   392,     4,     4,
     393,   394,    -1,   383,     5,   289,     4,   394,    -1,   383,
       5,   290,     4,   394,    -1,   383,     5,   321,     5,   393,
     394,    -1,     5,    13,     5,    -1,     5,    14,     5,    -1,
       5,    62,     5,    -1,     5,   202,   393,    -1,     5,     5,
     287,   393,    -1,     5,   203,   393,    -1,     5,   279,   392,
       4,   393,    -1,     5,   294,   392,     4,     4,   393,    -1,
       5,   289,     4,    -1,     5,   290,     4,    -1,     5,   321,
       5,   393,    -1,     5,    13,     5,    -1,     5,    14,     5,
      -1,     5,    62,     5,    -1,     5,   202,   393,    -1,     5,
     203,   393,    -1,     5,   279,   392,     4,   393,    -1,     5,
     289,     4,    -1,     5,   290,     4,    -1,     5,   321,     5,
     393,    -1,     5,    13,     5,   394,    -1,     5,    62,     5,
     394,    -1,     5,   202,   394,    -1,     5,   279,   392,     4,
     394,    -1,     5,   289,     4,   394,    -1,     5,   321,     5,
     394,    -1,     5,     5,    -1,   286,     5,     5,    -1,    95,
       4,     4,     4,     4,     4,    -1,   199,     4,     4,     4,
       4,     4,    -1,   113,    -1,   243,    -1,   374,    -1,   144,
     374,    -1,    89,   374,    -1,    67,     5,    -1,    67,   400,
      -1,     5,     4,     4,    -1,   318,   372,   372,    -1,   365,
     372,    -1,     5,     5,   383,   389,     5,     5,   383,   389,
     372,   383,   391,     5,    -1,    61,   524,    -1,    67,     5,
      -1,    67,   400,    -1,    81,    -1,    74,   529,     5,    -1,
      74,   529,   321,     5,    -1,    76,   101,    -1,    -1,    84,
     522,   525,    -1,    90,    -1,   101,   527,    -1,   107,   528,
      -1,   116,     4,    -1,   133,     5,    -1,   155,    16,    -1,
     155,   224,   372,   372,    -1,   155,   310,   372,   372,    -1,
       4,    19,   401,   374,    -1,     4,    20,   377,    -1,     4,
      20,   377,   384,    -1,     4,    20,   377,   382,   389,    -1,
       4,    21,   251,   372,   372,     4,   382,   391,    -1,     4,
      21,   251,     5,   382,   391,    -1,     4,    50,   251,   372,
     372,   372,     4,   382,   391,    -1,     4,    50,   251,     5,
     382,   391,    -1,     4,    49,   251,   372,   372,   382,   391,
      -1,     4,    53,   107,   377,   377,     4,   372,   372,   372,
       4,    -1,     4,    53,   107,   377,   377,     4,   372,   372,
     372,     4,   384,    -1,     4,    53,   107,   377,   377,     4,
     372,   372,   372,     4,   382,   389,    -1,     4,    53,   107,
       5,     5,   382,   389,   382,   391,    -1,     4,    56,   523,
       5,     5,    -1,     4,    63,   251,   372,   382,   391,    -1,
       4,    67,     5,    -1,     4,    67,   400,    -1,     4,    75,
      26,   374,   374,    -1,     4,    75,   175,     5,     5,    -1,
       4,    75,   251,   372,   382,   391,    -1,     4,    75,   299,
     382,   389,    -1,     4,    76,   143,   374,    -1,     4,    83,
     107,   377,   377,     4,   372,   372,     4,    -1,     4,    83,
     107,   377,   377,     4,   372,   372,     4,   384,    -1,     4,
      83,   107,   377,   377,     4,   372,   372,     4,   382,   389,
      -1,     4,    83,   107,     5,     5,   382,   389,   382,   391,
      -1,     4,    84,    21,   251,   372,   372,    -1,     4,    84,
      50,   251,   372,   372,    -1,     4,    84,    53,    20,   372,
     372,    -1,     4,    84,    53,   251,   372,   372,    -1,     4,
      84,   112,   251,   372,   372,    -1,     4,    84,   115,    20,
     372,   372,    -1,     4,    84,   115,   251,   372,   372,    -1,
       4,    84,    83,    20,   372,   372,    -1,     4,    84,    83,
     251,   372,   372,    -1,     4,    84,   239,   325,     4,   372,
     372,    -1,     4,    84,   274,   325,     4,   372,   372,    -1,
       4,   101,    -1,     4,   101,    21,     4,    -1,     4,   101,
      50,     4,    -1,     4,   101,    53,     4,    -1,     4,   101,
     112,     4,    -1,     4,   101,    56,   523,     5,    -1,     4,
     101,   115,     4,    -1,     4,   101,    83,     4,    -1,     4,
     101,   239,   325,     4,    -1,     4,   101,   274,   325,     4,
      -1,     4,   101,   301,    -1,     4,   101,   301,     5,    -1,
       4,   101,   301,     4,    -1,     4,   107,    39,     4,    -1,
       4,   111,   251,   372,   372,   382,   391,    -1,     4,   112,
     251,   372,   372,   372,     4,   382,   391,    -1,     4,   112,
     251,     5,   382,   391,    -1,     4,   115,   107,   377,   377,
       4,   372,   372,   372,     4,    -1,     4,   115,   107,   377,
     377,     4,   372,   372,   372,     4,   384,    -1,     4,   115,
     107,   377,   377,     4,   372,   372,   372,     4,   382,   389,
      -1,     4,   115,   107,     5,     5,   382,   389,   382,   391,
      -1,     4,   133,     5,    -1,     4,   155,    -1,     4,   155,
     224,    -1,     4,   183,    26,   374,   374,    -1,     4,   183,
     237,   382,   389,   381,   381,    -1,     4,   207,   372,   372,
      -1,     4,   207,   137,    -1,     4,   207,    35,    -1,     4,
     207,   309,   382,   389,   381,    -1,     4,   239,   258,   372,
     372,   382,   391,    -1,     4,   274,   258,   372,   372,   382,
     391,    -1,     4,   237,   278,   395,    -1,     4,   237,   285,
       4,    -1,     4,   245,   382,   389,   381,   381,   372,   382,
     391,    -1,     4,   246,   542,   374,    -1,     4,   262,    39,
      -1,     4,   263,   134,     5,    -1,     4,   263,   237,   382,
     389,   381,   381,    -1,     4,   263,   299,   382,   389,   382,
     391,    -1,     4,   275,    -1,     4,   275,   224,    -1,     4,
     301,     5,    -1,     4,   303,     5,    -1,     4,   303,   262,
     374,    -1,     4,   315,    -1,     4,   317,    -1,     4,   323,
      26,   374,    -1,     4,   323,   237,   382,   389,   381,   382,
     391,   372,   377,    -1,     4,   357,     4,    -1,   173,    -1,
     173,   372,   372,    -1,   185,   537,    -1,   186,   538,    -1,
     207,   539,    -1,   244,   374,    -1,   246,   542,   374,    -1,
     246,   542,   374,   372,   372,    -1,   262,    39,   372,   372,
      -1,   262,   206,   372,   372,     4,    -1,   262,   113,    -1,
     268,   546,    -1,   275,   547,    -1,   282,   548,    -1,     5,
      67,     5,    -1,     5,    67,   400,    -1,     5,    81,    -1,
       5,   101,    -1,     5,    90,    -1,     5,   133,     5,    -1,
       5,   155,    -1,     5,   155,   224,    -1,     5,   207,   372,
     372,    -1,     5,   207,   137,    -1,     5,   207,    35,    -1,
       5,   207,   309,   382,   389,   381,    -1,     5,   246,   542,
     374,    -1,     5,   275,    -1,     5,   275,   224,    -1,     5,
     315,    -1,     5,   317,    -1,   301,   107,     5,     5,    -1,
     301,   101,     5,    -1,   301,   101,    16,    -1,   301,     5,
      -1,   301,   318,     5,    -1,   230,    -1,   230,   382,    -1,
     314,    -1,   315,    16,    -1,   317,    16,    -1,   357,     4,
      -1,   275,    -1,   317,    -1,   155,    -1,   315,    -1,    39,
     207,    -1,   207,    -1,   113,   207,    -1,    39,   107,    -1,
     107,    -1,   113,   107,    -1,    39,   262,    -1,   262,    -1,
     113,   262,    -1,   101,    -1,   303,    -1,    67,    -1,   357,
      -1,   246,    -1,   133,    -1,   173,    -1,   318,    -1,    -1,
       4,    -1,    29,   374,    -1,   251,   372,    -1,   169,     4,
      -1,   225,     4,   372,    -1,    63,   372,   372,   372,   543,
      -1,   111,   372,   372,   372,   372,   376,   543,    -1,    49,
     372,   372,   372,   372,   376,   543,    -1,   239,   372,   372,
     372,   372,   543,    -1,   274,   372,   372,   372,   372,   543,
      -1,   183,   372,   372,   372,   372,   543,    -1,   323,   372,
     372,   372,   372,   543,    -1,   303,   372,   372,   376,   543,
      -1,    63,   237,   372,   372,   396,   543,    -1,    49,   237,
     372,   372,   396,   543,    -1,   104,   237,   372,   372,   396,
     543,    -1,    86,   237,   372,   372,   396,   543,    -1,   368,
     237,   372,   372,   396,   543,    -1,    26,   237,   372,   372,
     396,   543,    -1,    52,   237,   372,   372,   396,   543,    -1,
     263,   372,   372,   372,   372,   382,   389,   382,   391,     5,
     543,    -1,    75,   372,   372,   372,   382,   389,   543,    -1,
     245,   372,   372,   372,   372,   372,   543,    -1,    21,   372,
     372,   372,   372,     4,   543,    -1,   112,   372,   372,   372,
     372,   372,     4,   376,   543,    -1,    50,   372,   372,   372,
     372,   372,     4,   376,   543,    -1,    83,   372,   372,   377,
     377,     4,   372,   372,     4,   543,    -1,   115,   372,   372,
     377,   377,     4,   372,   372,   372,     4,   376,   543,    -1,
      53,   372,   372,   377,   377,     4,   372,   372,   372,     4,
     376,   543,    -1,    76,   543,    -1,   302,   526,    -1,     5,
     372,   372,    -1,   321,     5,   372,   372,    -1,   372,   372,
     321,     5,    -1,     5,   382,   389,   381,    -1,    -1,   275,
      -1,    16,    -1,    39,   372,   372,     4,    -1,   206,   372,
     372,     4,    -1,   113,    -1,   106,    -1,   359,    -1,    64,
      -1,   266,    -1,   265,    -1,   248,    -1,   360,    -1,    61,
     531,    -1,    67,    -1,   133,    -1,   116,    -1,   149,   372,
     372,    -1,   163,   372,   372,    -1,     4,    19,    83,     5,
       5,     5,   382,     4,    -1,     4,    19,   157,     5,     5,
       4,    -1,     4,    19,   235,     5,     5,     5,     5,   382,
     389,   402,    -1,     4,    19,   236,     5,     5,   382,   402,
      -1,     4,    19,   250,     5,     5,     5,   382,    -1,     4,
      19,   295,   382,   389,    -1,   163,    16,    -1,     4,    20,
      -1,     4,    20,   384,    -1,     4,    20,   382,   389,    -1,
       4,    21,   251,   382,   391,    -1,     4,    50,   251,   382,
     391,    -1,     4,    49,   251,   382,   391,    -1,     4,    53,
      20,    -1,     4,    53,    20,   384,    -1,     4,    53,    20,
     382,   389,    -1,     4,    53,   251,   382,   391,    -1,     4,
      60,   382,   389,   390,    -1,     4,    63,   251,   382,   391,
      -1,     4,    67,    -1,     4,    75,    26,    -1,     4,    75,
     175,    -1,     4,    75,   251,   382,   391,    -1,     4,    75,
     299,    -1,     4,    76,   143,    -1,     4,    83,    20,    -1,
       4,    83,    20,   384,    -1,     4,    83,    20,   382,   389,
      -1,     4,    83,   251,   382,   391,    -1,     4,   111,   251,
     382,   391,    -1,     4,   112,   251,   382,   391,    -1,     4,
     115,    20,    -1,     4,   115,    20,   384,    -1,     4,   115,
      20,   382,   389,    -1,     4,   115,   251,   382,   391,    -1,
       4,   133,    -1,     4,   155,    -1,     4,   183,    26,    -1,
       4,   183,   177,   382,   391,    -1,     4,   183,   237,   382,
     389,   390,    -1,     4,   192,   177,   372,   382,   391,    -1,
       4,   237,   278,    -1,     4,   237,   285,    -1,     4,   245,
     237,   382,   389,   390,    -1,     4,   245,   177,   382,   391,
      -1,     4,   245,   307,   382,   391,    -1,     4,   246,    -1,
       4,   246,   542,    -1,     4,   263,   134,    -1,     4,   263,
     177,   382,   391,    -1,     4,   263,   237,   382,   389,   390,
      -1,     4,   263,   299,    -1,     4,   275,    -1,     4,   301,
      -1,     4,   301,     4,    -1,     4,   303,    -1,     4,   303,
     262,    -1,     4,   313,    -1,     4,   323,    26,    -1,     4,
     323,   177,   382,   391,    -1,     4,   323,   237,   382,   389,
     390,    -1,     4,   357,    -1,   155,   532,    -1,   155,   220,
      -1,   220,    -1,   239,   274,   372,   372,    -1,   274,   274,
     372,   372,    -1,   244,    -1,   246,   542,    -1,   275,   533,
      -1,   275,   220,    -1,   282,   534,    -1,     5,    67,    -1,
       5,   133,    -1,     5,   163,    -1,     5,   246,   542,    -1,
       5,   301,    -1,     5,   301,   220,    -1,   301,    16,    -1,
     301,   100,   208,    -1,   357,    -1,    29,    -1,   251,    -1,
     169,    -1,   225,    -1,    -1,   372,   372,    -1,    -1,   372,
     372,    -1,    -1,   303,    -1,    -1,    -1,   238,    -1,   254,
      -1,   319,    -1,    58,    -1,   135,    -1,   529,   382,   389,
     390,   374,   544,   551,    -1,   275,   529,   382,   389,   390,
     374,   544,   551,    -1,   529,     5,    -1,   529,     5,     4,
       5,   382,   389,    -1,   529,     4,    -1,   529,     4,     4,
       5,   382,   389,    -1,   128,     5,    -1,   128,     5,     5,
      -1,   372,   372,    -1,   137,    -1,    35,    -1,    39,   372,
     372,    -1,   206,   372,   372,    -1,   113,    -1,   309,   382,
     389,   381,    -1,   540,   541,    -1,   541,    -1,   542,   369,
     374,    -1,    67,   369,     5,    -1,    67,   369,   400,    -1,
      94,   369,     4,     4,    -1,   357,   369,     4,    -1,   133,
     369,     5,    -1,   303,   369,     5,    -1,   554,    -1,   555,
      -1,   215,    -1,   275,    -1,   155,    -1,    93,    -1,   130,
      -1,   107,    -1,   207,    -1,   262,    -1,   101,    -1,   166,
      -1,   291,    -1,   124,    -1,   535,    -1,   535,   540,    -1,
      -1,    -1,   545,   549,    -1,     5,   529,   382,   389,   390,
     374,    -1,   275,     5,   529,   382,   389,   390,   374,    -1,
     302,     5,    -1,    16,    -1,   224,   372,   372,    -1,   310,
      -1,   310,   372,   372,    -1,   126,    -1,   176,    -1,   374,
      -1,   303,   374,    -1,   549,   550,    -1,   550,    -1,   542,
     369,   374,    -1,    -1,    -1,   552,   553,    -1,   553,   554,
      -1,   554,    -1,   301,   369,     5,    -1,    56,   369,   523,
       5,     5,    -1,    65,    -1,    67,     5,    -1,    67,   400,
      -1,   193,   385,    -1,   252,   372,   372,    -1,   299,   382,
      -1,   308,   372,    -1,    45,   386,    -1,   193,     4,    -1,
     368,    -1,   366,    -1,   360,    -1,   215,    -1,   372,   372,
     372,   372,    -1,   372,   372,    -1,   384,   372,   372,    -1,
     382,   389,   381,    -1,   309,   559,    -1,    38,   372,   372,
      -1,   206,   560,    -1,   244,   374,    -1,   372,   372,    -1,
     384,   372,   372,    -1,   382,   389,   381,    -1,    39,   372,
     372,    -1,   372,   372,    -1,   113,   372,   372,    -1,   374,
      -1,   328,   383,   389,    -1,     5,     4,     4,    -1,   318,
      -1,    71,   564,    -1,   178,     4,    -1,   259,     4,    -1,
     269,   372,    -1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,    -1,     4,     4,     4,     4,     4,     4,    -1,
      55,    -1,   145,    -1,   260,    -1,    91,    -1,   155,   566,
      -1,   275,   567,    -1,    39,   372,   372,    -1,   206,   372,
     372,    -1,   113,    -1,   280,   113,    -1,    39,   372,   372,
      -1,   206,   372,   372,    -1,   113,    -1,   280,   113,    -1,
     201,    -1,    12,    -1,   215,    -1,    33,    -1,   109,    -1,
      62,   397,    -1,   299,   382,    -1,   322,     4,     4,     4,
      -1,   372,    -1,   372,    99,    -1,   206,   572,    -1,   309,
     372,    -1,   309,   372,    99,    -1,    39,    -1,   372,    -1,
     113,    -1,    25,   574,    -1,   128,   576,    -1,   219,   586,
      -1,   114,   587,    -1,   232,     5,    -1,   123,     5,   403,
      -1,    62,     5,   403,    -1,   289,     4,   403,    -1,   260,
      88,   575,    -1,   123,     5,   403,    -1,    62,     5,   403,
      -1,   289,     4,   403,    -1,   577,    -1,   165,   577,    -1,
     300,   578,    -1,   286,   579,    -1,   119,    88,   580,    -1,
     204,   581,    -1,   260,   165,   583,    -1,   260,    88,   584,
      -1,   256,   585,    -1,   123,     5,    -1,    62,     5,    -1,
     289,     4,    -1,   123,     5,    -1,    62,     5,    -1,   289,
       4,    -1,   123,     5,    -1,    62,     5,    -1,   289,     4,
      -1,   123,     5,    -1,    62,     5,    -1,   289,     4,    -1,
     165,   582,    -1,   123,     5,     4,    -1,    62,     5,     4,
      -1,   289,     4,     4,    -1,   123,     5,    -1,    62,     5,
      -1,   289,     4,    -1,   123,     5,    -1,    62,     5,    -1,
     289,     4,    -1,   123,     5,    -1,    62,     5,    -1,   289,
       4,    -1,   123,     5,    -1,    62,     5,    -1,   289,     4,
      -1,   123,     5,   403,    -1,    62,     5,   403,    -1,   289,
       4,   403,    -1,   123,     5,     5,   403,    -1,   589,     4,
       4,   372,   372,   377,    -1,   589,     4,    -1,   101,    -1,
      51,    -1,   311,    -1,   141,    -1,   110,    -1,    -1,     4,
     372,   372,   372,   372,    -1,   218,    -1,   218,     4,   372,
     372,   372,   372,    -1,   128,   286,   591,    -1,     4,    -1,
       4,     4,    -1,   372,   382,    -1,   372,   372,    -1,   309,
     372,   372,    -1,   383,   389,   390,    -1,    15,   596,    -1,
     258,     4,    -1,   255,   595,    -1,    22,   594,    -1,     4,
       4,    -1,     4,     5,    -1,   303,     4,     5,    -1,     4,
       4,    -1,     4,     5,    -1,   303,     4,     5,    -1,     4,
      -1,     4,   383,   389,    -1,   309,     4,   383,   389,    -1,
     238,    65,    -1,   243,    -1,   372,   372,    -1,   372,   372,
      11,   372,   372,    -1,   372,   372,    11,   384,   372,   372,
      -1,   372,   372,    11,   382,   389,   381,    -1,   309,   599,
      -1,   127,    -1,   127,   372,    -1,   372,   372,    -1,   372,
     372,    11,   372,   372,    -1,   372,   372,    11,   384,   372,
     372,    -1,   372,   372,    11,   382,   389,   381,    -1
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
     538,   539,   542,   543,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,   556,   559,   561,   562,   563,   564,
     566,   567,   568,   569,   572,   573,   574,   575,   576,   579,
     580,   583,   584,   585,   588,   591,   594,   597,   609,   616,
     623,   631,   632,   633,   634,   635,   638,   639,   640,   641,
     642,   643,   644,   645,   646,   647,   648,   649,   650,   651,
     652,   653,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,   668,   669,   672,   673,   674,   675,
     676,   677,   680,   681,   682,   683,   684,   687,   688,   689,
     690,   691,   692,   693,   694,   697,   698,   699,   700,   701,
     704,   705,   706,   707,   708,   709,   710,   711,   714,   715,
     716,   719,   720,   721,   722,   725,   726,   727,   730,   731,
     732,   735,   736,   737,   740,   741,   742,   743,   744,   745,
     746,   747,   750,   751,   754,   755,   756,   759,   760,   761,
     764,   765,   766,   769,   770,   771,   772,   775,   776,   777,
     778,   779,   780,   783,   784,   785,   786,   789,   790,   791,
     792,   793,   794,   797,   798,   799,   800,   801,   802,   803,
     804,   805,   809,   810,   811,   814,   815,   816,   819,   820,
     821,   824,   825,   829,   830,   831,   832,   833,   834,   835,
     836,   839,   840,   843,   844,   845,   847,   849,   850,   851,
     853,   857,   858,   861,   862,   864,   867,   869,   875,   876,
     877,   880,   881,   882,   885,   886,   887,   888,   889,   890,
     891,   897,   898,   901,   902,   903,   904,   905,   908,   909,
     910,   911,   914,   915,   920,   925,   932,   934,   936,   938,
     940,   941,   942,   945,   947,   949,   951,   954,   955,   958,
     959,   960,   961,   962,   965,   967,   969,   974,   979,   982,
     983,   986,   987,   988,   995,   996,   997,   998,  1001,  1002,
    1005,  1006,  1009,  1010,  1013,  1015,  1019,  1020,  1023,  1025,
    1026,  1027,  1028,  1031,  1032,  1034,  1035,  1036,  1039,  1041,
    1043,  1044,  1046,  1048,  1050,  1052,  1056,  1059,  1060,  1061,
    1062,  1065,  1066,  1069,  1072,  1073,  1074,  1075,  1076,  1077,
    1078,  1079,  1080,  1081,  1082,  1083,  1084,  1085,  1086,  1087,
    1088,  1089,  1090,  1091,  1092,  1093,  1094,  1095,  1096,  1097,
    1098,  1099,  1100,  1101,  1102,  1103,  1104,  1106,  1107,  1108,
    1109,  1110,  1111,  1112,  1114,  1115,  1116,  1119,  1121,  1125,
    1127,  1131,  1132,  1133,  1134,  1135,  1136,  1137,  1138,  1141,
    1142,  1143,  1146,  1149,  1150,  1152,  1154,  1155,  1156,  1157,
    1158,  1159,  1166,  1167,  1170,  1171,  1172,  1175,  1176,  1179,
    1182,  1183,  1185,  1189,  1190,  1191,  1194,  1198,  1200,  1201,
    1202,  1203,  1204,  1205,  1206,  1207,  1208,  1211,  1212,  1213,
    1216,  1217,  1220,  1222,  1230,  1232,  1234,  1238,  1239,  1241,
    1244,  1247,  1248,  1252,  1254,  1257,  1262,  1263,  1264,  1268,
    1269,  1270,  1273,  1274,  1275,  1278,  1279,  1281,  1282,  1283,
    1284,  1285,  1286,  1287,  1288,  1289,  1290,  1292,  1293,  1296,
    1297,  1300,  1301,  1302,  1303,  1306,  1307,  1310,  1312,  1315,
    1319,  1320,  1321,  1323,  1325,  1329,  1330,  1331,  1334,  1335,
    1336,  1339,  1340,  1341,  1344,  1345,  1346,  1347,  1348,  1349,
    1350,  1353,  1356,  1357,  1358,  1361,  1362,  1363,  1364,  1365,
    1366,  1369,  1370,  1371,  1372,  1373,  1374,  1375,  1378,  1379,
    1382,  1383,  1386,  1387,  1390,  1391,  1394,  1395,  1396,  1399,
    1400,  1403,  1404,  1407,  1410,  1418,  1419,  1422,  1423,  1424,
    1425,  1426,  1427,  1428,  1429,  1430,  1431,  1432,  1433,  1434,
    1435,  1436,  1437,  1438,  1439,  1442,  1445,  1446,  1449,  1450,
    1451,  1452,  1455,  1456,  1457,  1458,  1461,  1462,  1463,  1464,
    1465,  1466,  1469,  1470,  1471,  1474,  1475,  1476,  1479,  1480,
    1481,  1482,  1483,  1484,  1486,  1487,  1492,  1493,  1496,  1498,
    1500,  1503,  1504,  1505,  1506,  1507,  1508,  1511,  1513,  1515,
    1517,  1518,  1520,  1522,  1524,  1526,  1528,  1531,  1532,  1533,
    1534,  1535,  1536,  1538,  1539,  1540,  1543,  1546,  1548,  1550,
    1552,  1554,  1556,  1558,  1560,  1563,  1565,  1567,  1569,  1570,
    1571,  1572,  1573,  1576,  1577,  1578,  1579,  1580,  1581,  1582,
    1584,  1586,  1587,  1588,  1591,  1592,  1593,  1594,  1595,  1596,
    1598,  1599,  1600,  1603,  1604,  1605,  1606,  1607,  1610,  1613,
    1616,  1619,  1622,  1625,  1628,  1631,  1634,  1639,  1642,  1645,
    1648,  1651,  1654,  1657,  1660,  1663,  1666,  1669,  1674,  1677,
    1680,  1683,  1686,  1689,  1692,  1695,  1698,  1703,  1705,  1707,
    1709,  1711,  1713,  1718,  1720,  1722,  1726,  1729,  1732,  1735,
    1738,  1741,  1744,  1747,  1750,  1753,  1756,  1761,  1762,  1763,
    1764,  1765,  1766,  1767,  1769,  1771,  1772,  1773,  1776,  1777,
    1778,  1779,  1780,  1781,  1783,  1784,  1785,  1788,  1790,  1792,
    1793,  1795,  1797,  1801,  1802,  1805,  1806,  1807,  1810,  1813,
    1814,  1815,  1816,  1817,  1818,  1819,  1820,  1823,  1831,  1832,
    1833,  1834,  1835,  1837,  1839,  1840,  1840,  1841,  1842,  1843,
    1844,  1845,  1847,  1848,  1850,  1853,  1856,  1857,  1858,  1861,
    1864,  1867,  1871,  1874,  1877,  1880,  1884,  1889,  1894,  1896,
    1898,  1899,  1900,  1902,  1904,  1906,  1908,  1909,  1911,  1913,
    1917,  1922,  1924,  1926,  1928,  1930,  1932,  1934,  1936,  1938,
    1940,  1942,  1945,  1946,  1948,  1950,  1951,  1953,  1955,  1956,
    1957,  1959,  1961,  1962,  1963,  1965,  1966,  1969,  1973,  1976,
    1979,  1983,  1988,  1994,  1995,  1996,  1998,  1999,  2003,  2005,
    2006,  2007,  2010,  2013,  2016,  2018,  2020,  2025,  2028,  2029,
    2030,  2033,  2037,  2038,  2040,  2041,  2042,  2044,  2045,  2047,
    2048,  2053,  2055,  2056,  2058,  2059,  2060,  2061,  2062,  2063,
    2065,  2067,  2069,  2070,  2071,  2073,  2075,  2076,  2077,  2078,
    2079,  2080,  2081,  2082,  2083,  2084,  2085,  2086,  2088,  2090,
    2091,  2092,  2093,  2095,  2096,  2097,  2098,  2099,  2101,  2102,
    2103,  2104,  2105,  2106,  2109,  2110,  2111,  2112,  2113,  2114,
    2115,  2116,  2117,  2118,  2119,  2120,  2121,  2122,  2123,  2124,
    2125,  2126,  2127,  2128,  2129,  2132,  2133,  2134,  2135,  2136,
    2137,  2145,  2152,  2161,  2170,  2177,  2184,  2192,  2200,  2207,
    2212,  2217,  2222,  2227,  2232,  2237,  2243,  2253,  2263,  2273,
    2280,  2290,  2300,  2309,  2321,  2334,  2339,  2342,  2344,  2346,
    2351,  2355,  2356,  2357,  2363,  2365,  2367,  2370,  2371,  2372,
    2373,  2374,  2375,  2376,  2379,  2380,  2381,  2382,  2383,  2384,
    2386,  2388,  2390,  2392,  2394,  2396,  2399,  2400,  2401,  2402,
    2404,  2407,  2409,  2411,  2412,  2413,  2415,  2418,  2421,  2423,
    2424,  2425,  2426,  2428,  2429,  2430,  2431,  2432,  2434,  2436,
    2438,  2441,  2442,  2443,  2445,  2448,  2449,  2450,  2451,  2453,
    2456,  2460,  2461,  2462,  2465,  2468,  2470,  2471,  2472,  2473,
    2475,  2478,  2479,  2481,  2482,  2483,  2484,  2485,  2487,  2488,
    2490,  2493,  2494,  2495,  2496,  2497,  2499,  2501,  2502,  2503,
    2504,  2506,  2508,  2509,  2510,  2511,  2512,  2513,  2515,  2516,
    2518,  2521,  2522,  2523,  2524,  2527,  2528,  2531,  2532,  2535,
    2536,  2539,  2552,  2553,  2557,  2558,  2562,  2563,  2566,  2570,
    2576,  2578,  2581,  2583,  2586,  2588,  2592,  2593,  2594,  2595,
    2596,  2597,  2598,  2602,  2603,  2606,  2607,  2608,  2609,  2610,
    2611,  2612,  2613,  2614,  2617,  2618,  2619,  2620,  2621,  2622,
    2623,  2624,  2625,  2626,  2627,  2628,  2631,  2632,  2635,  2636,
    2636,  2639,  2641,  2643,  2646,  2647,  2648,  2649,  2650,  2651,
    2654,  2655,  2658,  2659,  2662,  2666,  2667,  2667,  2670,  2671,
    2674,  2677,  2681,  2682,  2683,  2684,  2685,  2686,  2687,  2688,
    2689,  2695,  2696,  2697,  2698,  2701,  2703,  2704,  2709,  2711,
    2712,  2713,  2714,  2717,  2718,  2723,  2727,  2728,  2729,  2732,
    2733,  2738,  2739,  2742,  2744,  2745,  2746,  2751,  2753,  2759,
    2760,  2761,  2762,  2765,  2766,  2769,  2771,  2773,  2774,  2777,
    2779,  2780,  2781,  2784,  2785,  2788,  2789,  2790,  2793,  2794,
    2795,  2798,  2799,  2800,  2801,  2802,  2805,  2806,  2807,  2810,
    2811,  2812,  2813,  2814,  2817,  2819,  2821,  2823,  2826,  2828,
    2830,  2833,  2834,  2835,  2836,  2837,  2838,  2839,  2840,  2841,
    2844,  2845,  2846,  2849,  2850,  2851,  2854,  2855,  2856,  2859,
    2860,  2861,  2864,  2865,  2866,  2867,  2870,  2871,  2872,  2875,
    2876,  2877,  2880,  2881,  2882,  2885,  2886,  2887,  2890,  2892,
    2894,  2898,  2902,  2904,  2909,  2912,  2913,  2914,  2915,  2918,
    2919,  2922,  2924,  2926,  2929,  2930,  2931,  2934,  2935,  2938,
    2940,  2941,  2942,  2943,  2946,  2947,  2948,  2951,  2952,  2953,
    2956,  2957,  2962,  2964,  2967,  2974,  2975,  2977,  2982,  2984,
    2987,  2988,  2989,  2990,  2992,  2997
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
     371,   371,   372,   372,   373,   373,   373,   373,   373,   373,
     373,   373,   373,   373,   373,   374,   374,   374,   374,   374,
     374,   374,   374,   374,   375,   375,   375,   375,   375,   376,
     376,   377,   377,   377,   378,   379,   380,   381,   381,   381,
     381,   382,   382,   382,   382,   382,   383,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   383,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   383,   383,   383,   383,
     383,   383,   383,   383,   384,   384,   385,   385,   385,   385,
     385,   385,   386,   386,   386,   386,   386,   387,   387,   387,
     387,   387,   387,   387,   387,   388,   388,   388,   388,   388,
     389,   389,   389,   389,   389,   389,   389,   389,   390,   390,
     390,   391,   391,   391,   391,   392,   392,   392,   393,   393,
     393,   394,   394,   394,   395,   395,   395,   395,   395,   395,
     395,   395,   396,   396,   397,   397,   397,   398,   398,   398,
     399,   399,   399,   400,   400,   400,   400,   401,   401,   401,
     401,   401,   401,   402,   402,   402,   402,   403,   403,   403,
     403,   403,   403,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   405,   405,   405,   406,   406,   406,   407,   407,
     407,   408,   408,   409,   409,   409,   409,   409,   409,   409,
     409,   410,   410,   411,   411,   411,   411,   411,   411,   411,
     411,   412,   412,   413,   413,   413,   413,   413,   414,   414,
     414,   415,   415,   415,   416,   416,   416,   416,   416,   416,
     416,   417,   417,   418,   418,   418,   418,   418,   419,   419,
     419,   419,   420,   420,   420,   420,   421,   421,   421,   421,
     421,   421,   421,   422,   422,   422,   422,   423,   423,   424,
     424,   424,   424,   424,   425,   425,   425,   425,   425,   426,
     426,   427,   427,   427,   428,   428,   428,   428,   429,   429,
     430,   430,   431,   431,   432,   432,   433,   433,   433,   433,
     433,   433,   433,   434,   434,   434,   434,   434,   435,   435,
     435,   435,   435,   435,   435,   435,   436,   437,   437,   437,
     437,   438,   438,   439,   440,   440,   440,   440,   440,   440,
     440,   440,   440,   440,   440,   440,   440,   440,   440,   440,
     440,   440,   440,   440,   440,   440,   440,   440,   440,   440,
     440,   440,   440,   440,   440,   440,   440,   440,   440,   440,
     440,   440,   440,   440,   440,   440,   440,   441,   441,   442,
     442,   443,   443,   443,   443,   443,   443,   443,   443,   444,
     444,   444,   445,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   447,   447,   448,   448,   448,   449,   449,   450,
     451,   451,   451,   452,   452,   452,   453,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   455,   455,   455,
     456,   456,   457,   457,   458,   458,   458,   459,   459,   459,
     460,   461,   461,   462,   462,   462,   463,   463,   463,   464,
     464,   464,   465,   465,   465,   466,   466,   466,   466,   466,
     466,   466,   466,   466,   466,   466,   466,   466,   466,   467,
     467,   468,   468,   468,   468,   469,   469,   470,   470,   470,
     471,   471,   471,   471,   471,   472,   472,   472,   473,   473,
     473,   474,   474,   474,   475,   475,   475,   475,   475,   475,
     475,   476,   477,   477,   477,   478,   478,   478,   478,   478,
     478,   479,   479,   479,   479,   479,   479,   479,   480,   480,
     481,   481,   482,   482,   483,   483,   484,   484,   484,   485,
     485,   486,   486,   487,   487,   488,   488,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   490,   491,   491,   492,   492,
     492,   492,   493,   493,   493,   493,   494,   494,   494,   494,
     494,   494,   495,   495,   495,   496,   496,   496,   497,   497,
     497,   497,   497,   497,   497,   497,   498,   498,   499,   499,
     499,   500,   500,   500,   500,   500,   500,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   503,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   506,   506,   506,   506,   506,   506,
     506,   506,   506,   507,   507,   507,   507,   507,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   512,   512,   512,   512,
     512,   512,   512,   512,   512,   512,   512,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   515,   515,   515,
     515,   515,   515,   516,   516,   517,   517,   517,   518,   519,
     519,   519,   519,   519,   519,   519,   519,   520,   521,   521,
     521,   521,   521,   521,   521,   522,   521,   521,   521,   521,
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
     521,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   523,   523,   523,   523,   523,   523,
     523,   523,   523,   523,   523,   523,   523,   523,   523,   523,
     523,   523,   523,   523,   523,   524,   524,   524,   524,   524,
     524,   525,   525,   525,   525,   525,   525,   525,   525,   525,
     525,   525,   525,   525,   525,   525,   525,   525,   525,   525,
     525,   525,   525,   525,   525,   525,   525,   526,   526,   526,
     526,   527,   527,   527,   528,   528,   528,   529,   529,   529,
     529,   529,   529,   529,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   531,   531,   531,   531,   532,   532,   533,   533,   534,
     534,   535,   536,   536,   536,   536,   536,   536,   537,   537,
     538,   538,   538,   538,   538,   538,   539,   539,   539,   539,
     539,   539,   539,   540,   540,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   542,   542,   542,   542,   542,   542,
     542,   542,   542,   542,   542,   542,   543,   543,   544,   545,
     544,   546,   546,   546,   547,   547,   547,   547,   547,   547,
     548,   548,   549,   549,   550,   551,   552,   551,   553,   553,
     554,   555,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   557,   557,   557,   557,   558,   558,   558,   558,   558,
     558,   558,   558,   559,   559,   559,   560,   560,   560,   561,
     561,   561,   561,   562,   562,   562,   562,   563,   563,   564,
     564,   564,   564,   565,   565,   566,   566,   566,   566,   567,
     567,   567,   567,   568,   568,   569,   569,   569,   570,   570,
     570,   571,   571,   571,   571,   571,   572,   572,   572,   573,
     573,   573,   573,   573,   574,   574,   574,   574,   575,   575,
     575,   576,   576,   576,   576,   576,   576,   576,   576,   576,
     577,   577,   577,   578,   578,   578,   579,   579,   579,   580,
     580,   580,   581,   581,   581,   581,   582,   582,   582,   583,
     583,   583,   584,   584,   584,   585,   585,   585,   586,   586,
     586,   587,   588,   588,   588,   589,   589,   589,   589,   590,
     590,   590,   590,   590,   591,   591,   591,   592,   592,   593,
     593,   593,   593,   593,   594,   594,   594,   595,   595,   595,
     596,   596,   596,   596,   597,   598,   598,   598,   598,   598,
     599,   599,   599,   599,   599,   599
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     3,     3,     2,     1,     1,
       2,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     2,     3,     3,     2,     2,
       2,     3,     2,     2,     2,     2,     3,     2,     3,     3,
       2,     2,     2,     2,     2,     2,     1,     3,     2,     2,
       2,     1,     2,     2,     2,     1,     2,     1,     2,     2,
       2,     2,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     2,     2,     1,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       1,     0,     1,     1,     1,     0,     1,     1,     0,     1,
       1,     0,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     1,     0,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     2,     1,     2,     2,     1,     2,
       2,     2,     6,     2,     4,     2,     2,     2,     3,     2,
       2,     1,     2,     1,     2,     4,     5,     2,     3,     5,
       6,     1,     1,     1,     7,    11,     8,    12,     1,     2,
       2,     1,     1,     2,     2,     2,     2,     3,     3,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     1,     3,     2,     2,     2,     5,     9,     9,     9,
       1,     2,     1,     5,     9,     9,     9,     1,     2,     2,
       2,     2,     2,     2,    13,    13,    12,    12,     1,     0,
       1,     1,     4,     6,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     3,     4,     0,     6,     8,     2,
       3,     3,     3,     0,     4,     4,     4,     4,     3,     3,
       1,     3,     5,     4,     4,     3,     2,     0,     1,     1,
       1,     1,     1,     3,     0,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       2,     2,     2,     4,     3,     2,     2,     2,     2,     2,
       1,     3,     2,     2,     1,     2,     8,     2,     1,     2,
       1,     2,     1,     4,     3,     2,     1,     7,     8,     7,
       8,     1,     1,     1,     2,     1,     1,     2,     1,     0,
       2,     2,     1,     0,     2,     2,     1,     1,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     0,     1,     2,
       1,     4,     5,     0,     2,     1,     5,     2,     2,     1,
       1,     1,     2,     1,     2,     1,     1,     0,     1,     1,
       0,     1,     5,     6,     3,     6,     3,     1,     3,     1,
       1,     1,     3,     6,     7,     5,     2,     1,     5,     4,
       1,     3,     0,     1,     2,     1,     4,     1,     2,     1,
       2,     3,     2,     1,     2,     1,     4,     2,     1,     1,
       3,     1,     2,     3,     2,     0,     1,     1,     4,     2,
       0,     1,     3,     4,     4,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     2,
       1,     2,     2,     2,     2,     1,     1,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     2,     2,     0,
       1,     2,     1,     6,     5,     1,     1,     1,     2,     2,
       2,     1,     1,     1,     1,     2,     1,     1,     1,     2,
       1,     1,     1,     2,     2,     2,     0,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       1,     2,     2,     2,     4,     2,     2,     4,     3,     1,
       2,     2,     4,     5,     1,    10,     1,     2,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     4,     4,     4,
       3,     3,     5,     4,     4,     4,     3,     3,     3,     3,
       2,     2,     4,     3,     3,     3,     3,     4,     4,     4,
       4,     5,     4,     6,     7,     4,     4,     5,     2,     3,
       3,     3,     2,     3,     3,     3,     3,     4,     3,     5,
       6,     3,     3,     4,     3,     3,     3,     3,     3,     5,
       3,     3,     4,     3,     2,     2,     1,     3,     4,     4,
       4,     4,     4,     6,     4,     4,     5,     4,     4,     4,
       4,     5,     4,     6,     7,     4,     4,     5,     5,     5,
       5,     5,     5,     7,     5,     5,     6,     4,     4,     4,
       4,     4,     6,     4,     4,     5,     5,     5,     5,     5,
       6,     5,     7,     8,     5,     5,     6,     3,     3,     3,
       3,     4,     3,     5,     6,     3,     3,     4,     3,     3,
       3,     3,     3,     5,     3,     3,     4,     4,     4,     3,
       5,     4,     4,     2,     3,     6,     6,     1,     1,     1,
       2,     2,     2,     2,     3,     3,     2,    12,     2,     2,
       2,     1,     3,     4,     2,     0,     3,     1,     2,     2,
       2,     2,     2,     4,     4,     4,     3,     4,     5,     8,
       6,     9,     6,     7,    10,    11,    12,     9,     5,     6,
       3,     3,     5,     5,     6,     5,     4,     9,    10,    11,
       9,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       7,     7,     2,     4,     4,     4,     4,     5,     4,     4,
       5,     5,     3,     4,     4,     4,     7,     9,     6,    10,
      11,    12,     9,     3,     2,     3,     5,     7,     4,     3,
       3,     6,     7,     7,     4,     4,     9,     4,     3,     4,
       7,     7,     2,     3,     3,     3,     4,     2,     2,     4,
      10,     3,     1,     3,     2,     2,     2,     2,     3,     5,
       4,     5,     2,     2,     2,     2,     3,     3,     2,     2,
       2,     3,     2,     3,     4,     3,     3,     6,     4,     2,
       3,     2,     2,     4,     3,     3,     2,     3,     1,     2,
       1,     2,     2,     2,     1,     1,     1,     1,     2,     1,
       2,     2,     1,     2,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     2,     2,     2,
       3,     5,     7,     7,     6,     6,     6,     6,     5,     6,
       6,     6,     6,     6,     6,     6,    11,     7,     7,     7,
       9,     9,    10,    12,    12,     2,     2,     3,     4,     4,
       4,     0,     1,     1,     4,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     3,     3,
       8,     6,    10,     7,     7,     5,     2,     2,     3,     4,
       5,     5,     5,     3,     4,     5,     5,     5,     5,     2,
       3,     3,     5,     3,     3,     3,     4,     5,     5,     5,
       5,     3,     4,     5,     5,     2,     2,     3,     5,     6,
       6,     3,     3,     6,     5,     5,     2,     3,     3,     5,
       6,     3,     2,     2,     3,     2,     3,     2,     3,     5,
       6,     2,     2,     2,     1,     4,     4,     1,     2,     2,
       2,     2,     2,     2,     2,     3,     2,     3,     2,     3,
       1,     1,     1,     1,     1,     0,     2,     0,     2,     0,
       1,     0,     0,     1,     1,     1,     1,     1,     7,     8,
       2,     6,     2,     6,     2,     3,     2,     1,     1,     3,
       3,     1,     4,     2,     1,     3,     3,     3,     4,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     0,     0,
       2,     6,     7,     2,     1,     3,     1,     3,     1,     1,
       1,     2,     2,     1,     3,     0,     0,     2,     2,     1,
       3,     5,     1,     2,     2,     2,     3,     2,     2,     2,
       2,     1,     1,     1,     1,     4,     2,     3,     3,     2,
       3,     2,     2,     2,     3,     3,     3,     2,     3,     1,
       3,     3,     1,     2,     2,     2,     2,     9,     6,     1,
       1,     1,     1,     2,     2,     3,     3,     1,     2,     3,
       3,     1,     2,     1,     1,     1,     1,     1,     2,     2,
       4,     1,     2,     2,     2,     3,     1,     1,     1,     2,
       2,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     1,     2,     2,     2,     3,     2,     3,     3,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     3,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     3,
       3,     4,     6,     2,     1,     1,     1,     1,     1,     0,
       5,     1,     6,     3,     1,     2,     2,     2,     3,     3,
       2,     2,     2,     2,     2,     2,     3,     2,     2,     3,
       1,     3,     4,     2,     1,     2,     5,     6,     6,     2,
       1,     2,     2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     8,     9,     0,     0,     0,     0,
       0,   336,     0,     0,     0,     0,     0,     0,   364,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1092,     0,     0,     0,     0,     0,     0,     0,     0,
    1092,    46,     0,     0,     0,    51,     0,     0,     0,    55,
    1289,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,    62,    63,     0,
     268,     7,     0,     0,     0,     0,     0,     0,    10,     0,
       0,   300,   302,     0,     0,     0,     0,    12,   152,   154,
     147,   148,   149,   153,   150,   151,   307,    13,     0,   319,
       0,     0,     0,    14,     0,     0,     0,     0,   343,     0,
      15,    75,   104,     0,   134,   103,    83,   101,     0,    80,
      82,    78,   135,   102,    79,     0,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,    76,    77,    81,   350,   160,   105,
       0,    16,     0,    17,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,    64,   362,   361,    19,
       0,    20,     0,     0,     0,   423,   437,     0,   443,     0,
       0,     0,     0,     0,     0,     0,   379,     0,   515,     0,
       0,     0,     0,     0,     0,     0,     0,  1092,     0,   390,
       0,   394,     0,     0,     0,   398,     0,   400,     0,   402,
       0,     0,   556,   406,    21,     0,   562,    22,   567,     0,
       0,   586,   571,   572,   573,   574,   588,   576,   577,   581,
     578,     0,   580,   582,     0,     0,    23,     0,    25,     0,
       0,     0,    28,     0,     0,     0,    29,     0,   609,     0,
       0,     0,   614,     0,    30,     0,     0,     0,     0,     0,
       0,     0,    32,   768,    33,     0,     0,     0,     0,     0,
       0,   769,    34,     0,    35,  1096,  1097,  1093,  1094,  1095,
       0,   142,  1162,     0,   136,     0,     0,     0,    37,     0,
    1174,  1173,  1172,  1171,    40,     0,     0,     0,     0,     0,
     160,     0,    41,     0,  1192,     0,  1189,    42,     0,     0,
       0,     0,    45,     0,    44,    43,     0,     0,     0,     0,
      48,     0,     0,  1221,    49,     0,     0,     0,     0,     0,
      50,  1285,  1284,  1288,  1287,  1286,    52,     0,    53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    54,     0,
       0,  1291,    56,     0,     0,    58,     0,     0,     0,     0,
     160,    59,  1314,    60,     0,     0,    61,     1,     4,   205,
     206,   204,   203,     6,     5,   251,     0,   243,     0,     0,
     245,     0,   253,   246,   250,   261,   262,   247,   263,     0,
     249,   271,   272,   270,   269,     0,     0,   291,     0,   276,
     284,   287,   286,   285,   283,   275,   280,   281,   282,   274,
       0,     0,     0,     0,     0,     0,   279,    11,     0,     0,
       0,     0,     0,     0,     0,   301,     0,   308,     0,   318,
     309,   320,   310,   321,   311,   332,   312,     0,     0,   313,
       0,    94,    95,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   339,     0,     0,     0,     0,
       0,   162,   167,   161,   163,   166,   165,   164,     0,     0,
     356,    69,    70,    71,    72,    73,    65,    66,    67,    74,
      68,     0,   365,     0,   419,   415,   411,   412,   416,   413,
     418,   366,   422,   367,   324,   427,   431,   426,   327,   326,
     325,     0,     0,   368,   438,   370,     0,   369,     0,   445,
     371,   457,   449,   460,   450,   451,   453,     0,   455,   456,
     160,   372,     0,     0,   373,     0,     0,   160,   374,   469,
     160,   467,   375,   470,   377,   160,   471,   376,     0,   160,
       0,   378,   489,     0,   487,   505,     0,     0,     0,   493,
     485,     0,   495,   510,   498,   380,   516,   517,   381,   382,
       0,     0,   518,   519,   520,   385,   521,   522,   523,   386,
       0,   480,     0,   387,    84,   477,     0,   388,   389,     0,
     530,   524,   529,   525,   526,   527,   528,   392,   393,   531,
     395,     0,   532,   533,   534,   397,   540,   535,   536,   538,
     399,   546,   548,   550,   552,   545,   547,   554,   401,     0,
       0,   559,     0,   405,   160,   561,   568,     0,   569,   587,
     570,   589,   590,   591,   575,   592,   594,   593,   595,   579,
     583,   600,     0,     0,     0,     0,   596,   584,    26,    27,
     197,   198,   199,   602,   603,     0,   200,   201,   202,   605,
     606,     0,     0,     0,   611,   610,     0,     0,     0,     0,
      31,     0,     0,   621,     0,   622,     0,     0,     0,     0,
       0,   623,     0,   767,     0,   624,     0,   625,     0,     0,
     626,     0,   772,   773,   771,   770,     0,   776,     0,     0,
       0,   945,     0,     0,     0,   781,   785,   787,   981,     0,
       0,     0,     0,   882,     0,     0,     0,   918,     0,     0,
       0,     0,     0,     0,     0,   920,     0,     0,     0,    36,
     145,   146,   144,   143,  1169,  1163,  1164,  1170,   139,   140,
     138,   141,   137,  1165,     0,  1167,  1168,    38,    39,     0,
       0,     0,     0,  1181,  1182,     0,   160,     0,  1179,  1176,
       0,     0,     0,   160,  1199,  1202,  1200,  1201,  1193,  1194,
    1195,  1196,     0,     0,     0,    47,   196,   195,   194,  1218,
    1219,     0,  1226,  1228,  1227,  1223,  1224,  1222,     0,     0,
       0,     0,  1229,     0,  1232,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1230,  1241,     0,     0,     0,
    1231,  1233,  1283,  1216,  1217,  1215,   228,     0,   232,   224,
       0,   235,   225,     0,   238,   226,  1214,  1213,   227,   229,
     230,   231,     0,     0,   223,     0,     0,     0,     0,  1297,
    1310,     0,     0,  1300,     0,     0,  1303,     0,     0,  1302,
    1301,   168,  1320,     0,  1319,  1315,   252,   248,     0,   257,
       0,   254,     0,   273,   155,   158,   159,   157,   156,   288,
     289,   290,   278,   277,   293,   295,   294,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     160,     0,   340,   100,    97,    98,    99,   160,   342,   341,
       0,     0,     0,     0,     0,     0,     0,   355,     0,   351,
     349,   348,   363,   414,     0,     0,   417,   432,   433,   428,
     429,   434,   436,   435,   430,   328,   329,   425,   424,   440,
     439,     0,   444,   458,   459,   448,   461,   454,   452,   447,
       0,     0,   160,   160,   168,   168,   168,   160,     0,     0,
     160,   506,   488,   499,     0,   490,    84,   501,     0,     0,
     492,   494,   160,   511,     0,     0,   497,     0,     0,   384,
       0,   482,    88,    87,   476,     0,     0,     0,     0,   995,
     997,   996,     0,  1085,     0,  1064,     0,  1067,     0,     0,
    1087,  1089,     0,  1080,   391,     0,   537,   539,   549,   542,
     551,   543,   553,   544,   555,   541,     0,     0,   404,   560,
     557,   558,   168,   585,   597,   598,   599,   601,     0,     0,
       0,   620,   608,     0,     0,     0,     0,     0,     0,   181,
     181,   175,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   178,   178,   175,     0,     0,   175,     0,     0,     0,
       0,     0,   662,   686,     0,     0,     0,   658,     0,     0,
       0,     0,   181,   175,     0,     0,   763,     0,   774,   775,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   832,     0,     0,     0,     0,     0,
     854,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     872,     0,     0,   877,   878,     0,     0,     0,   898,   900,
     899,     0,   902,     0,     0,   909,   911,   912,   946,     0,
       0,     0,     0,   778,   779,   780,   989,   987,   992,   991,
     990,   988,   993,     0,   784,     0,   983,   982,   788,     0,
     986,     0,   789,   790,   791,   792,     0,     0,     0,     0,
       0,   884,     0,     0,   885,  1108,     0,  1111,  1107,     0,
       0,     0,   886,   919,   887,  1127,  1132,  1129,  1135,  1128,
    1126,  1133,  1130,  1124,  1131,  1125,  1134,     0,     0,   892,
       0,     0,     0,     0,   893,  1144,  1148,  1149,     0,  1146,
     894,     0,  1150,   895,   916,     0,     0,     0,   921,   922,
     923,  1166,  1180,     0,     0,  1187,  1183,     0,     0,     0,
    1178,  1177,  1191,  1190,     0,     0,  1207,     0,     0,  1203,
       0,  1211,     0,     0,  1204,     0,  1225,   217,   217,     0,
     217,     0,  1251,     0,  1250,  1242,     0,     0,     0,     0,
    1246,     0,     0,     0,  1249,     0,     0,     0,     0,     0,
    1244,  1252,     0,     0,     0,  1243,   217,   217,   217,     0,
     233,   234,   236,   237,   239,   240,     0,   241,     0,    63,
       0,  1293,     0,  1298,   160,  1313,     0,  1304,  1305,     0,
    1307,  1308,     0,   169,   170,  1299,  1321,  1322,     0,   244,
       0,   258,     0,     0,     0,     0,   292,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   334,
     160,     0,     0,     0,     0,   160,     0,   354,     0,   353,
     421,   420,     0,     0,     0,   160,     0,   168,   466,   464,
     468,   472,     0,     0,     0,   168,     0,   507,   491,     0,
     502,   504,   171,     0,     0,   383,     0,     0,    63,     0,
     481,    86,    85,     0,     0,  1007,     0,     0,     0,     0,
       0,     0,  1019,     0,     0,     0,     0,     0,     0,  1035,
    1036,     0,     0,     0,     0,  1046,     0,  1052,  1053,  1055,
    1057,     0,  1061,  1072,  1073,  1074,     0,  1076,  1081,  1083,
    1084,  1082,   994,     0,  1063,     0,  1062,  1006,     0,     0,
    1068,     0,  1070,     0,  1069,  1090,  1071,  1078,     0,     0,
     403,     0,     0,   604,   607,   618,   619,     0,   616,   612,
       0,   181,   181,   181,   182,   183,   630,   631,   177,   176,
       0,   181,   181,   181,     0,   636,   646,   178,   181,   181,
     181,   179,   180,   181,   181,     0,   181,   181,     0,   178,
       0,   659,     0,     0,     0,   685,     0,   684,     0,     0,
     661,     0,   660,     0,     0,     0,     0,   178,   178,   175,
       0,     0,   175,     0,     0,     0,   181,   181,   759,     0,
     181,   181,   764,     0,   207,   208,   209,   210,   211,   212,
       0,    92,    93,    91,   796,     0,     0,     0,     0,     0,
     939,   937,   932,     0,   942,   926,   943,   929,   941,   935,
     924,   938,   927,   925,   944,   940,     0,     0,   810,   811,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   842,     0,     0,     0,     0,   853,   855,
       0,     0,   860,   859,     0,     0,   184,     0,     0,   160,
       0,   868,     0,     0,     0,     0,   873,   874,   875,     0,
       0,     0,   881,   896,   897,   901,   903,   906,   905,     0,
       0,     0,   910,   947,   949,     0,   948,   782,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1091,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   786,     0,     0,     0,     0,   883,     0,
     160,  1104,  1102,  1100,     0,     0,   160,  1106,   888,     0,
       0,     0,     0,  1143,     0,     0,  1151,   914,   915,     0,
     917,  1186,  1188,  1185,  1184,  1175,     0,     0,     0,  1208,
       0,     0,  1212,  1220,   219,   220,   221,   222,   218,  1235,
    1234,     0,     0,     0,  1237,  1236,   217,     0,     0,     0,
    1245,     0,     0,     0,     0,     0,  1262,     0,  1276,  1275,
    1277,     0,     0,     0,  1248,     0,     0,     0,  1247,  1257,
    1256,  1258,  1254,  1253,  1255,  1279,  1278,  1280,     0,     0,
       0,  1295,  1296,     0,  1311,   160,  1306,  1309,     0,     0,
     160,     0,     0,     0,   255,     0,     0,     0,     0,   296,
       0,     0,     0,     0,     0,     0,     0,   331,   330,     0,
       0,   322,   333,   335,     0,   345,   347,   346,   344,   160,
     352,     0,     0,     0,   168,   160,     0,     0,     0,     0,
     486,   500,   509,     0,   503,   173,   174,   172,   496,     0,
     512,     0,     0,   479,   484,    84,     0,     0,     0,     0,
       0,     0,   160,  1008,     0,     0,     0,  1013,     0,   160,
       0,  1020,  1021,     0,  1023,  1024,  1025,     0,     0,     0,
    1031,     0,  1037,     0,     0,     0,  1041,  1042,     0,     0,
       0,  1047,  1048,     0,     0,  1051,  1054,  1056,  1058,     0,
       0,  1075,  1077,   998,  1086,   999,     0,     0,  1088,  1079,
       0,     0,   565,   566,     0,   613,   617,     0,   627,   628,
     629,   181,   633,   634,   635,     0,     0,     0,   640,   641,
     175,     0,     0,     0,   181,   647,   648,   649,   650,   652,
     178,   655,   656,     0,   181,     0,     0,     0,   178,   178,
     175,     0,     0,     0,     0,   683,     0,   687,     0,     0,
       0,     0,     0,   178,   178,   175,     0,     0,   175,     0,
       0,     0,     0,     0,   178,   178,   175,     0,     0,   175,
       0,     0,     0,     0,     0,   178,   178,   175,     0,     0,
     175,     0,     0,     0,     0,   178,   178,   175,     0,     0,
       0,   178,   663,   664,   665,   666,   668,     0,   671,   672,
       0,   178,     0,     0,   757,   758,   181,   761,   762,     0,
     795,   160,   797,     0,     0,     0,     0,     0,     0,     0,
     931,   928,   934,   933,   930,   936,     0,     0,     0,     0,
       0,   160,   816,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   833,   834,   835,     0,
     839,   836,   838,     0,     0,   844,   843,   845,     0,     0,
       0,     0,     0,     0,   160,   160,   858,   190,   186,   191,
     185,   188,   187,   189,   864,   865,     0,     0,   867,   869,
     160,   160,     0,   876,   879,   160,   160,   904,   908,   950,
     783,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1136,   975,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   976,     0,     0,
       0,     0,     0,   793,   794,   160,   168,  1105,     0,     0,
    1109,  1110,     0,     0,   890,     0,   160,     0,  1145,  1147,
     913,     0,  1205,  1206,  1209,  1210,   217,   217,   217,  1281,
    1260,  1259,  1261,  1264,  1263,  1267,  1266,  1268,  1265,  1273,
    1272,  1274,  1270,  1269,  1271,     0,     0,  1290,     0,  1312,
       0,   160,     0,  1316,     0,     0,   259,     0,   256,     0,
       0,     0,     0,     0,   303,     0,     0,     0,     0,     0,
     160,     0,   337,   148,     0,   441,     0,   462,   168,   171,
       0,     0,   475,     0,   513,   514,     0,   478,     0,     0,
       0,     0,     0,   160,  1009,   171,   171,   171,   160,  1014,
     171,   168,   171,   171,   160,  1026,   171,   171,   171,   160,
    1032,   171,   171,   160,     0,   171,   160,   171,   171,   160,
     171,   160,  1065,  1066,     0,     0,   564,     0,   632,   637,
     638,   639,     0,   643,   644,   645,   651,   181,   178,   657,
     674,   675,   676,   677,   678,     0,   680,   681,   178,     0,
       0,     0,   178,   178,   175,     0,     0,     0,     0,     0,
       0,   178,   178,   175,     0,     0,     0,     0,     0,     0,
     178,   178,   175,     0,     0,     0,   178,   181,   181,   181,
     181,   181,     0,   181,   181,     0,   178,   178,   181,   181,
     181,   181,   181,     0,   181,   181,     0,   178,   178,   737,
     738,   739,   740,   742,     0,   745,   746,     0,   178,   748,
     749,   750,   751,   752,     0,   754,   755,   178,   667,   178,
       0,   673,     0,     0,   760,     0,   798,   171,     0,     0,
     171,     0,     0,     0,   808,   171,   812,   813,   171,   815,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   837,   840,   841,     0,   171,     0,     0,
       0,   856,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1137,  1114,
       0,  1122,  1123,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   160,     0,     0,    89,     0,
       0,   984,   985,   168,     0,     0,     0,  1112,   889,   891,
     168,   160,  1198,  1239,  1238,  1240,  1282,     0,  1292,  1323,
       0,     0,  1318,  1317,   260,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   323,   171,   442,   446,   463,
     465,     0,   473,   508,   160,     0,     0,     0,     0,     0,
       0,  1005,  1010,  1012,  1011,  1015,  1016,  1017,  1018,  1022,
    1027,  1028,  1029,  1030,  1033,  1034,  1038,   168,   171,  1044,
     168,  1045,  1049,   168,  1059,   168,     0,   160,     0,   563,
       0,   642,   653,   181,   178,   682,   181,   181,   181,   181,
     181,     0,   181,   181,   178,   181,   181,   181,   181,   181,
       0,   181,   181,   178,   181,   181,   181,   181,   181,     0,
     181,   181,   178,   181,   697,   698,   699,   700,   702,   178,
     705,   706,     0,   181,   181,   726,   727,   728,   729,   731,
     178,   734,   735,     0,   181,   741,   178,     0,   747,   178,
     756,   669,   178,   765,   766,   160,   800,     0,   171,   802,
       0,   160,     0,   809,   814,   160,     0,   821,   822,   823,
     824,   828,   829,   825,   826,   827,     0,     0,   171,   848,
       0,   160,     0,     0,   861,   171,     0,     0,   171,   171,
       0,   907,     0,   192,   192,     0,     0,   192,     0,   192,
    1091,     0,     0,     0,     0,     0,     0,     0,     0,  1113,
       0,     0,   192,   192,     0,     0,     0,     0,     0,     0,
       0,     0,   977,     0,     0,     0,  1091,    90,     0,   192,
       0,  1139,   160,   160,     0,   168,     0,   242,  1325,  1324,
       0,     0,   264,     0,     0,     0,     0,     0,     0,     0,
       0,   338,   474,     0,   357,     0,  1001,     0,   213,     0,
    1039,  1040,  1043,  1050,  1060,   396,     0,   357,     0,   654,
     679,   688,   689,   690,   691,   692,   178,   694,   695,   181,
     717,   718,   719,   720,   721,   178,   723,   724,   181,   708,
     709,   710,   711,   712,   178,   714,   715,   181,   701,   181,
     178,   707,   730,   181,   178,   736,   743,   178,   753,   670,
       0,   171,   803,     0,     0,     0,     0,     0,   830,   831,
     846,     0,     0,     0,   857,   862,     0,   870,   871,   863,
     171,     0,   193,  1091,  1091,    89,     0,  1091,     0,  1091,
     951,   160,     0,  1116,  1117,     0,  1120,  1160,  1121,  1119,
    1115,     0,  1091,  1091,    89,     0,     0,  1091,  1091,     0,
       0,  1091,   980,   978,   979,   958,  1091,  1091,  1139,  1155,
       0,  1103,  1101,  1141,     0,     0,     0,     0,   266,   298,
     299,     0,     0,     0,   297,     0,   357,   358,   360,   359,
     407,     0,     0,   214,   216,   215,  1003,  1004,   357,   409,
       0,   181,   696,   181,   725,   181,   716,   703,   181,   732,
     181,   744,     0,   799,   171,   171,     0,   171,     0,   171,
     171,     0,   171,     0,  1091,   964,   960,  1091,     0,   965,
       0,   959,  1091,     0,  1118,     0,   962,   961,  1091,     0,
       0,   956,   954,  1091,   160,   955,   957,   963,  1155,  1098,
       0,     0,  1140,  1153,  1142,  1197,     0,     0,   305,   306,
     304,   324,   327,   325,     0,     0,   408,  1000,   160,   410,
     615,   693,   722,   713,   704,   733,   171,   801,   807,     0,
     820,   817,   847,   852,     0,   866,     0,   969,   953,    89,
       0,   967,  1161,     0,   952,    89,     0,   968,     0,  1099,
    1157,  1159,     0,  1152,     0,     0,     0,     0,     0,     0,
     213,     0,   804,   160,   818,   849,   880,  1091,     0,     0,
    1091,     0,   171,  1158,  1154,   265,     0,     0,     0,     0,
       0,  1002,   777,   160,   805,   819,   160,   850,   971,     0,
    1091,   970,     0,     0,   267,   317,     0,   316,     0,   806,
     851,    89,   972,    89,  1091,   315,   314,  1091,  1091,   966,
     974,   973
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    56,  1493,   175,   157,   974,  2566,  2567,   455,   456,
     457,   458,   158,   159,   160,   743,   734,    96,   869,   478,
    1285,  1758,  1430,  1443,  1426,  1994,  2673,   779,   653,   659,
     384,  1490,  2736,  1659,   358,   819,   822,   825,   834,    66,
     387,   393,   397,   400,    71,   403,    78,   419,   415,   409,
     426,    87,   435,    97,   103,   440,   442,   444,   512,   927,
    1729,   446,   449,   110,   465,   161,   163,  2730,   179,   181,
     224,   969,  1008,   501,   916,   503,   513,   919,   924,   515,
     517,   930,   520,   932,   531,   935,   937,   534,   538,   542,
     544,   547,   551,   587,   583,  1350,   565,   955,   960,   952,
    1338,   966,   568,   575,   579,   597,   600,   605,   610,   618,
     999,  1001,  1003,  1005,   623,  1010,   227,   625,  1824,   246,
     628,   630,   634,   639,   647,   252,   256,   264,  1419,   664,
     272,   673,  1435,   675,   681,  1057,  1451,  1052,  1865,  1457,
    1455,  1867,  1053,  1460,  1462,   687,   690,   685,   274,   282,
     284,   729,  1135,  1516,  1123,  1613,  2037,  1138,  1142,  1133,
     994,  1392,  1396,  1404,  1406,  2021,   290,  1151,  1154,  1162,
    2328,  2329,  2330,  2022,  2709,  2710,  1184,  1190,  1193,  2792,
    2793,  2789,  2790,  2840,  2331,  2332,   298,   304,   312,   758,
     753,   317,   322,   324,   768,   775,  1219,  1224,   828,   816,
     330,   334,   785,   340,   792,  1664,   805,   806,  1255,  1250,
    1670,  1240,  1676,  1688,  1684,  1244,   810,   794,   346,   347,
     362,  1271,   365,   371,   846,   849,   843,   373,   376,   854
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2636
static const yytype_int16 yypact[] =
{
    5231,   117,   651,    68, -2636, -2636,  1255,  -157,  1222,  1095,
    1046,   481,  2712,   118,     3,    14,   148,    66,  5482,   591,
    2127, -2636,    75,   -15,   182,   934,   174,  1075,   -51,   194,
     206,   585,   543,   410,   881,  3242,   191,   840,   225,   394,
     585, -2636,   224,    81,  1315, -2636,   132,   522,   469, -2636,
     643, -2636,    83,  1575,   323,    91,   571,    18,   155,   311,
     627,   641,   106,   685,    25,  1082, -2636, -2636, -2636,  1088,
     167, -2636,   521,   115,     3,   430,   803,   601, -2636,   735,
     167, -2636, -2636,   167,   167,   568,   167, -2636, -2636, -2636,
   -2636,   167, -2636, -2636, -2636, -2636, -2636, -2636,   234,   630,
     782,   784,   160, -2636,   167,  1667,   167,   167,  1110,   167,
   -2636, -2636, -2636,   594, -2636, -2636, -2636, -2636,  4724, -2636,
   -2636, -2636, -2636, -2636, -2636,   167, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,  1527, -2636,
     167, -2636,   799, -2636, -2636,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3, -2636, -2636, -2636, -2636, -2636,
     698, -2636,   755,  1348,   720,    47,   545,   682,   350,  4343,
     145,  4777,  4566,   832,  4724,  3790, -2636,   562,  -109,   805,
     870,   796,   278,   303,  1036,   907,   879,   585,   387, -2636,
     823, -2636,   648,   661,   320, -2636,   161, -2636,   900, -2636,
     423,   826,    48, -2636, -2636,  4915, -2636, -2636, -2636,   851,
     862,   913, -2636, -2636, -2636, -2636,   616, -2636, -2636, -2636,
   -2636,  1037, -2636, -2636,  4915,  4311, -2636,   820, -2636,   -32,
    4915,   986, -2636,   675,  4915,  1000, -2636,    42, -2636,  1010,
    1030,   139, -2636,   167, -2636,  1034,   116,  1060,   508,   664,
    1078,    77, -2636, -2636, -2636,  1043,   942,     3,     3,   167,
     167, -2636, -2636,  1098, -2636, -2636, -2636, -2636, -2636, -2636,
    3009,   877, -2636,   995,    41,   167,  4915,   167, -2636,  1085,
   -2636, -2636, -2636, -2636, -2636,   167,  1412,     3,  3193,   167,
    1527,   167, -2636,  1107, -2636,  3967, -2636, -2636,  1143,  1117,
    1120,   167, -2636,  1125, -2636, -2636,   -20,    64,  4915,  1129,
   -2636,  1468,   167,  1056, -2636,   848,  1039,  1679,   638,  1155,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636,  1175, -2636,    60,
     223,   340,   342,   254,   167,  1189,   167,    72, -2636,   167,
     925,  1231, -2636,   167,   167, -2636,   129,    21,    44,  1251,
    1527, -2636, -2636, -2636,  1361,   167, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636,   167, -2636,  1260,  1263,
   -2636,   167,  1269, -2636, -2636, -2636, -2636, -2636, -2636,   167,
   -2636, -2636,   167, -2636, -2636,   339,   339, -2636,  1282, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
    1084,   167,   167,  1293,  1298,  1307, -2636, -2636,   167,   167,
     167,   167,   167,   167,   167, -2636,   167, -2636,  1324, -2636,
   -2636, -2636, -2636,   839, -2636,  1327, -2636,  4915,  1334, -2636,
     167, -2636, -2636, -2636,   167,  1339,  1344,  1344,  4915,   167,
     167,   167,   167,   167,   167, -2636,   167,  4724,  1667,   167,
     167, -2636, -2636, -2636, -2636, -2636, -2636, -2636,  1667,   167,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636,  1356, -2636,  1064,    15, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636,   -64, -2636, -2636, -2636,  1185, -2636,
     496,   582,   582, -2636, -2636, -2636,  1364, -2636,  1367, -2636,
   -2636,   -79, -2636,  1187, -2636, -2636, -2636,  1202, -2636, -2636,
    1527, -2636,   167,   167, -2636,  4915,  4915,  1527, -2636, -2636,
    1527, -2636, -2636, -2636, -2636,  1527, -2636, -2636,  4915,  1527,
     167, -2636, -2636,  4915, -2636,  1379,   593,  1183,    20, -2636,
   -2636,  1186,  4915,    49, -2636, -2636, -2636, -2636, -2636, -2636,
    1392,  1394, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
    1397, -2636,  1196, -2636,   377, -2636,   167, -2636, -2636,  1111,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636,   423, -2636, -2636, -2636, -2636, -2636, -2636,  1207,  1211,
   -2636, -2636,  1360,  1363,  1377, -2636, -2636,  1198, -2636,   167,
    1418,  1203,  3967, -2636,  1527, -2636, -2636,  1443, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636,  4915,  4915,  4915,  4915, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636,  1460, -2636, -2636, -2636, -2636,
   -2636,  1463,  1471,     3, -2636, -2636,  1472,  1474,  1272,   167,
   -2636,     6,  1396, -2636,  1480, -2636,   519,  1402,  4822,    39,
    1490, -2636,  1496, -2636,  1497, -2636,   312, -2636,  1506,  1508,
   -2636,  1518, -2636, -2636, -2636, -2636,   167, -2636,  3967,  4685,
    2120,   445,  1178,   618,  1423, -2636, -2636, -2636,   123,   967,
    1522,  1525,   138,   167,   549,   922,    93,  4915,     3,  1941,
    1239,   119,    96,   317,    16, -2636,  1519,  1521,  1534, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636,   167, -2636, -2636, -2636, -2636,   167,
     167,   167,   167, -2636, -2636,   167,  1527,   167, -2636,   167,
    1667,   167,  1536,  1527, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636,  1537,    59,    61, -2636, -2636, -2636, -2636, -2636,
   -2636,  1540, -2636, -2636, -2636, -2636,  1447, -2636,  1543,  1546,
    1465,  1552, -2636,  1554, -2636,  1558,  1479,  1564,   808,   512,
     829,    73,   853,  1566,   868, -2636, -2636,  1567,  1574,  1583,
   -2636, -2636,  1592, -2636, -2636, -2636, -2636,  1224, -2636, -2636,
    1228, -2636, -2636,  1279, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636,   167,   167, -2636,   167,  1091,   167,   167, -2636,
    3967,  1551,  1613, -2636,  1102,  1614, -2636,  1122,  1616, -2636,
   -2636,   -70,   167,   167, -2636,  1612, -2636, -2636,  1625,  1493,
     167,  1622,   815, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636,  1630,  1634,   167,
     167,   167,   167,   167,   167,   167,  1635,     3,  1639,  1642,
    1527,  4915, -2636, -2636, -2636, -2636, -2636,  1527, -2636, -2636,
     167,   167,   167,  4915,   167,  1667,   167, -2636,   167, -2636,
   -2636, -2636, -2636, -2636,  1649,  1660, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,   145,
   -2636,   167, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
    4915,   167,  1527,  1527,   -70,   -70,   -70,  1527,  1667,   167,
    1527, -2636, -2636, -2636,   167, -2636,   377,  1492,  1663,  1669,
   -2636, -2636,  1527, -2636,  1509,  1515, -2636,  1678,  1680, -2636,
    1683,  1242,  1651,  1653, -2636,   167,  4690,   415,   716, -2636,
   -2636, -2636,   167,   729,   175, -2636,  1417, -2636,  1941,  1419,
     801,  1391,   553, -2636, -2636,   167, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636,   167,  1696, -2636, -2636,
   -2636, -2636,   -70, -2636, -2636, -2636, -2636, -2636,  1698,  1699,
    4866, -2636, -2636,  1700,  1702,   167,  1706,  1709,  1714,    36,
      36,   334,  1720,  1721,  1723,  1724,  1439,  1451,  1725,  1737,
    1738,   114,   114,   334,  1742,  1743,   334,  1744,  1746,  5483,
    1747,  1748, -2636, -2636,  1752,  1753,   635, -2636,  1756,  1757,
    1758,  1759,    36,   334,  1761,  1762, -2636,  1763, -2636, -2636,
    1527,  1220,  1514,  1511,  1520,  1523,  1641,   556,  1524,  1301,
       2,  1623,  1662,  1306,   681,  1731,  1526,  1528,  1665,  1768,
    1556,   154,    23,   889,  1529,  4915,  1941,  1739,   867,  1530,
    1557,  1777,   162, -2636, -2636,   233,  1779,  1313, -2636, -2636,
   -2636,  1780,  1560,   111,  1941,  1565, -2636, -2636, -2636,     3,
    1786,  1787,   167, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636,    28, -2636,  1453, -2636, -2636, -2636,   167,
   -2636,   167, -2636, -2636, -2636, -2636,   167,   167,   167,   618,
    4915, -2636,  1788,  1177, -2636, -2636,   167, -2636, -2636,   167,
    4915,   167, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636,     3,   167, -2636,
     167,   618,  1789,  1790, -2636, -2636, -2636, -2636,   167,   167,
   -2636,     3, -2636, -2636, -2636,   537,  1791,  1792, -2636, -2636,
   -2636, -2636, -2636,   167,   167, -2636, -2636,  1667,   167,   167,
   -2636, -2636, -2636, -2636,  1795,   167, -2636,   167,  1687, -2636,
     167, -2636,   167,  1688, -2636,  1799, -2636,  1368,  1368,   872,
    1368,  1800, -2636,   882, -2636, -2636,  1802,  1803,   891,  1805,
   -2636,  1807,  1811,  1806, -2636,   951,   970,  1812,  1815,  1818,
   -2636, -2636,  1820,  1821,  1819, -2636,  1368,  1368,  1368,   167,
   -2636, -2636, -2636, -2636, -2636, -2636,   167, -2636,   167,   812,
    4915, -2636,   167, -2636,  1527, -2636,  3967, -2636, -2636,  1822,
   -2636, -2636,  1823, -2636, -2636, -2636, -2636,  1793,  3193, -2636,
     167,  1824,   167,   167,   167,   547, -2636,  1825,   167,   167,
    1827,   167,   167,   167,   167,    -9,  1829,     3,     3, -2636,
    1527,   167,  1828,  1832,  1833,  1527,  4915, -2636,   167, -2636,
   -2636, -2636,   167,   167,   167,  1527,  4915,   -70, -2636, -2636,
   -2636, -2636,  1667,   167,  1834,   -70,   167,   617, -2636,  1835,
   -2636, -2636,   152,  4043,   167, -2636,   167,  1838,  1839,   167,
   -2636, -2636, -2636,  1842,  1374,  4724,  1597,  1598,  1599,   146,
    4915,  1600, -2636,    13,  1710,   250,  1601,  1603,   488, -2636,
   -2636,    43,  1666,   912,   650,  1941,   864, -2636,  1851,  1594,
   -2636,   542, -2636, -2636, -2636, -2636,  1941,  1637, -2636, -2636,
   -2636, -2636, -2636,   167, -2636,   167, -2636, -2636,   167,   167,
   -2636,   167, -2636,   167, -2636, -2636, -2636, -2636,  1650,   167,
   -2636,   167,    35, -2636, -2636, -2636, -2636,  1855,  1856, -2636,
     167,    36,    36,    36, -2636, -2636, -2636, -2636, -2636, -2636,
    1857,    36,    36,    36,   297, -2636, -2636,   114,    36,    36,
      36, -2636, -2636,    36,    36,  1858,    36,    36,  1859,   114,
     409, -2636,  1862,  1865,  1869, -2636,   730, -2636,   737,   949,
   -2636,   579, -2636,  1577,  1870,  1871,  1872,   114,   114,   334,
    1874,  1875,   334,  1877,  1876,  1880,    36,    36, -2636,  1881,
      36,    36, -2636,  1882, -2636, -2636, -2636, -2636, -2636, -2636,
       3, -2636, -2636, -2636,  4724,  1458,   167,  1505,  1646,   429,
   -2636, -2636, -2636,   655, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636,  1883,   167, -2636, -2636,
       3,  1884,   167,  4915,     3,  1657,  1643,  1644,   514,   523,
    1645,   529,  1561,  1568,  1888,  1893,  1894,   556,  1895,  1896,
    1897,  1611,  1615,  1428,  1933,   167,  1580,  1729, -2636, -2636,
       3,  4915, -2636, -2636,  4915,   167,    82,  1934,   167,  1527,
       3, -2636,  1936,  4915,  4915,   167, -2636, -2636, -2636,     3,
       3,  4915, -2636, -2636, -2636, -2636, -2636, -2636, -2636,  4915,
     167,     3, -2636, -2636, -2636,   167, -2636, -2636,  1937,   167,
    1707,   265,   167,  1708,   167,   518,   167, -2636,   167,  1711,
    1712,   167,   167,   167,   167,   167,   167,   167,   167,    31,
     167,   167,  1713, -2636,   167,   167,   167,   167, -2636,  4915,
    1527,  1942,  1939,  1947,   167,   167,  1527, -2636,   167,   167,
     167,  4915,   618, -2636,   167,   167, -2636, -2636, -2636,  1956,
   -2636, -2636, -2636, -2636, -2636, -2636,  1958,   167,   167, -2636,
     167,   167, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636,  1959,  1961,  1963, -2636, -2636,  1368,  1964,  1965,  1967,
   -2636,  1968,  1970,  1971,  1973,  1976, -2636,  1977, -2636, -2636,
   -2636,  1978,  1979,  1981, -2636,  1983,  1984,  1982, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,   167,   167,
     167, -2636, -2636,   167, -2636,  1527, -2636, -2636,  3193,   167,
    1527,   167,   167,   167, -2636,   167,   167,  1985,   167, -2636,
     167,   167,  1987,   167,   167,   167,   167, -2636, -2636,  1988,
    4915, -2636, -2636, -2636,   167, -2636, -2636, -2636, -2636,  1527,
   -2636,  1121,   167,  1121,   -70,  1527,  4915,   167,   167,  1991,
   -2636, -2636, -2636,   167, -2636, -2636, -2636, -2636, -2636,  4915,
   -2636,  4915,   167, -2636, -2636,   377,  1992,  1993,  1996,  1997,
    1998,  4915,  1527, -2636,  4915,  4915,  4915,  4724,  4915,  1527,
    4915, -2636, -2636,  4915, -2636, -2636,  4724,  4915,  4915,  4915,
    4724,  4915, -2636,  4915,  4915,   167, -2636, -2636,  4915,  4915,
    4915, -2636, -2636,  4915,  4915, -2636, -2636, -2636, -2636,  4915,
    4915, -2636, -2636, -2636, -2636, -2636,   167,   167, -2636, -2636,
    2000,   167, -2636, -2636,  2001, -2636, -2636,   167, -2636, -2636,
   -2636,    36, -2636, -2636, -2636,  2002,  2013,  2014, -2636, -2636,
     334,  2028,  2034,  2035,    36, -2636, -2636, -2636, -2636, -2636,
     114, -2636, -2636,  2037,    36,  2038,  2039,  2040,   114,   114,
     334,  2042,  2047,  2048,   704, -2636,   875, -2636,  1055,  1659,
    2049,  2050,  2052,   114,   114,   334,  2054,  2055,   334,  2056,
    1676,  2057,  2058,  2059,   114,   114,   334,  2062,  2063,   334,
    2064,  1695,  2065,  2067,  2068,   114,   114,   334,  2070,  2071,
     334,  2072,  2073,  2074,  2075,   114,   114,   334,  2077,  2080,
    2083,   114, -2636, -2636, -2636, -2636, -2636,  2089, -2636, -2636,
    2091,   114,  2093,  2094, -2636, -2636,    36, -2636, -2636,  2096,
   -2636,  1527, -2636,  4915,   167,   167,  4915,   167,  2101,  1514,
   -2636, -2636, -2636, -2636, -2636, -2636,  2103,  4915,     3,  2104,
    4915,  1527, -2636,  2105,  1514,   167,   167,   167,   167,   167,
     167,   167,   167,   167,  2108,  2110, -2636, -2636, -2636,  2111,
   -2636, -2636, -2636,  2114,  2115, -2636, -2636, -2636,   167,  4915,
     167,  2116,  1514,     3,  1527,  1527, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636,   167,  1667, -2636, -2636,
    1527,  1527,   167, -2636, -2636,  1527,  1527, -2636, -2636, -2636,
   -2636,   167,   167,   167,   167,   167,   167,   167,   167,   167,
     167,  2535, -2636,   167,   167,   167,   167,   167,   167,   167,
     167,   167,   167,   167,  3599,  2117,   167, -2636,   167,   167,
     167,  2119,  2121, -2636, -2636,  1527,   -70, -2636,  2123,  2126,
   -2636, -2636,  1667,   167, -2636,  2130,  1527,  4915, -2636, -2636,
   -2636,  2131, -2636, -2636, -2636, -2636,  1368,  1368,  1368, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636,  1514,   167, -2636,   167, -2636,
     167,  1527,   167, -2636,  1667,   167, -2636,   167, -2636,  1994,
    2132,  2133,   167,   167, -2636,   167,   167,   167,   167,  2135,
    1527,  4915, -2636, -2636,   167, -2636,   167, -2636,   -70,   152,
     167,  2136, -2636,   167, -2636, -2636,  4724, -2636,  2137,  2138,
    2139,  2141,  2142,  1527, -2636,   152,   152,   152,  1527, -2636,
     152,   -70,   152,   152,  1527, -2636,   152,   152,   152,  1527,
   -2636,   152,   152,  1527,  4915,   152,  1527,   152,   152,  1527,
     152,  1527, -2636, -2636,  2146,  4724,  2147,   167, -2636, -2636,
   -2636, -2636,  2149, -2636, -2636, -2636, -2636,    36,   114, -2636,
   -2636, -2636, -2636, -2636, -2636,  2150, -2636, -2636,   114,  2152,
    2153,  2154,   114,   114,   334,  2156,  2158,  2160,  2161,  2163,
    2164,   114,   114,   334,  2167,  2168,  2169,  2170,  2171,  2172,
     114,   114,   334,  2174,  2177,  2179,   114,    36,    36,    36,
      36,    36,  2181,    36,    36,  2182,   114,   114,    36,    36,
      36,    36,    36,  2185,    36,    36,  2186,   114,   114, -2636,
   -2636, -2636, -2636, -2636,  2187, -2636, -2636,  2189,   114, -2636,
   -2636, -2636, -2636, -2636,  2191, -2636, -2636,   114, -2636,   114,
    2192, -2636,  2193,  2194, -2636,  3967, -2636,   152,  2195,  4915,
     152,   167,  4915,  2196, -2636,   152, -2636, -2636,   152, -2636,
    4915,  2198,   167,   167,   167,   167,   167,   167,   167,   167,
     167,   167,   167, -2636, -2636, -2636,  4915,   152,   167,  4915,
    2200, -2636,  1667,  1667,  4915,  1667,  1667,  4915,  4915,  1667,
    1667,   167,   167,   167,   167,   167,   167,  1514,   167,   167,
     167,  1627,  1670,  1691,  1755,  1767,  1771,  1782,  2535, -2636,
    1804, -2636, -2636,  1514,   167,   167,   167,   167,  1514,   167,
     167,   167,   167,   167,   167,  1527,   167,  1794,  1514,   167,
     167, -2636, -2636,   -70,     3,  4915,  4915, -2636, -2636, -2636,
     -70,  1527,  2202, -2636, -2636, -2636, -2636,   167, -2636, -2636,
    1667,   167, -2636, -2636, -2636,  1042,  2203,  2204,  2207,  2211,
     167,   167,   167,  2214,  1121, -2636,   152, -2636, -2636, -2636,
   -2636,  2215, -2636, -2636,  1527,  2221,  2222,  2224,  2226,  4915,
    2228, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636,   -70,   152, -2636,
     -70, -2636, -2636,   -70, -2636,   -70,  2230,  1527,  2225, -2636,
     167, -2636, -2636,    36,   114, -2636,    36,    36,    36,    36,
      36,  2232,    36,    36,   114,    36,    36,    36,    36,    36,
    2233,    36,    36,   114,    36,    36,    36,    36,    36,  2234,
      36,    36,   114,    36, -2636, -2636, -2636, -2636, -2636,   114,
   -2636, -2636,  2235,    36,    36, -2636, -2636, -2636, -2636, -2636,
     114, -2636, -2636,  2236,    36, -2636,   114,  2237, -2636,   114,
   -2636, -2636,   114, -2636, -2636,  1527, -2636,  4915,   152, -2636,
    2238,  1527,   167, -2636, -2636,  1527,   167, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636,   167,   167,   152, -2636,
    2239,  1527,   167,  1667, -2636,   152,   167,  1667,   152,   152,
    4915, -2636,   167,  2240,  2240,   167,   167,  2240,  1514,  2240,
   -2636,  4915,   556,  1320,  2241,  2242,  2243,  2244,  2246, -2636,
       3,  1514,  2240,  2240,   167,   167,  1514,   167,   167,   167,
     167,   167, -2636,  1667,   167,  2247, -2636, -2636,   167,  2240,
       3,    30,  1527,  1527,     3,   -70,  2250, -2636, -2636, -2636,
    2251,   167, -2636,  2252,  2254,  2255,  2256,  2257,  2258,  2259,
     167, -2636, -2636,  2260,     7,  4915, -2636,  2262,    58,  4915,
   -2636, -2636, -2636, -2636, -2636, -2636,  2261,     7,   167, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636,   114, -2636, -2636,    36,
   -2636, -2636, -2636, -2636, -2636,   114, -2636, -2636,    36, -2636,
   -2636, -2636, -2636, -2636,   114, -2636, -2636,    36, -2636,    36,
     114, -2636, -2636,    36,   114, -2636, -2636,   114, -2636, -2636,
     167,   152, -2636,  4915,  4915,   167,  4915,   167, -2636, -2636,
   -2636,  4915,  4915,   167, -2636, -2636,  4915, -2636, -2636, -2636,
     152,  2266, -2636, -2636, -2636,  1514,   167, -2636,  2267, -2636,
   -2636,  1527,  2268, -2636, -2636,  2272, -2636, -2636, -2636, -2636,
   -2636,  2273, -2636, -2636,  1514,   167,  2274, -2636, -2636,   167,
    4915, -2636, -2636, -2636, -2636, -2636, -2636, -2636,    30,  1751,
    1941, -2636, -2636, -2636,     3,  2286,  2288,  2289, -2636, -2636,
   -2636,  2301,  2310,  2314, -2636,   134,     7, -2636, -2636, -2636,
   -2636,  2315,  4915, -2636, -2636, -2636, -2636, -2636,     7, -2636,
    2316,    36, -2636,    36, -2636,    36, -2636, -2636,    36, -2636,
      36, -2636,  3967, -2636,   152,   152,   167,   152,  2318,   152,
     152,   167,   152,   167, -2636, -2636, -2636, -2636,  2319, -2636,
     167, -2636, -2636,  2320, -2636,   167, -2636, -2636, -2636,  2322,
     167, -2636, -2636, -2636,  1527, -2636, -2636, -2636,  1751, -2636,
    1775,  1850,  1941, -2636, -2636, -2636,  2323,  2324, -2636, -2636,
   -2636, -2636, -2636, -2636,  1033,  1033, -2636, -2636,  1527, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636,   152, -2636, -2636,  2326,
   -2636,  4724, -2636, -2636,  2331, -2636,  1514, -2636, -2636,  1514,
     167, -2636, -2636,   167, -2636,  1514,   167, -2636,  4915, -2636,
    1775, -2636,     3, -2636,  2337,  2339,   167,   167,   167,   167,
      58,  2340,  4724,  1527, -2636,  4724, -2636, -2636,   167,  2344,
   -2636,   167,   152, -2636, -2636, -2636,  2345,  2346,   167,  2347,
     167, -2636, -2636,  1527, -2636, -2636,  1527, -2636, -2636,  2349,
   -2636, -2636,  2350,  2351, -2636, -2636,  2353, -2636,  2354, -2636,
   -2636,  1514, -2636,  1514, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2636, -2636,    -3, -2636,   321,  -954, -1457,  -980,  1796, -2636,
     982,  -437,  1938,   -52,    29, -2636, -2636, -1726,  1866,  1677,
    -934, -1076,  -890,   712,  1542, -2636,  -897, -2636, -2636, -2636,
    -186, -2636,  -782, -1214, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,  -401,  -508,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2070, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -1534, -2636, -2636, -2636, -2636, -2636,  -709,
   -2636, -2636, -2636, -2636, -2636, -2636,   487, -2636, -2636, -2636,
   -2636,    27,  -710, -1644,  -359, -2636, -2636, -2636, -2636, -2636,
    -431,  -426, -2636, -2636, -2635, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636,  1571, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1295
static const yytype_int16 yytable[] =
{
      70,   370,  1337,  1969,   928,  1150,  1153,   111,   109,  1177,
    1329,  1330,  1331,   178,  1660,  2114,  1665,  2116,   111,  1026,
    1027,  1194,   111,   378,   957,   844,    67,    68,  1520,  1283,
   -1138,   907,   309,  1587,    67,    68,  2034,  1727,  2727,  1781,
     333,   910,  1695,  1696,  1697,   737,   662,   249,   847,   364,
      67,    68,   375,   963,  1822,   386,   395,   165,  1552,   392,
     166,   649,   399,   621,   311,   379,   402,   404,  1028,  1792,
     414,    67,    68,   421,   425,    67,    68,   428,  1412,   111,
     429,   430,   688,   436,    67,    68,    67,    68,   437,  2733,
     693,   167,  1494,   813,    67,    68,    67,    68,  1215,   168,
    1220,   450,   454,   459,   460,   464,   466,   736,  1987,    67,
      68,   776,  1185,   748,    67,    68,   566,  1195,    67,    68,
     914,   671,   470,  1196,  1181,   116,   933,  1054,  1155,   650,
    1441,  1988,  1156,   840,  1989,   773,   116,    67,    68,  1136,
     116,   917,   247,   667,    79,  1990,  1577,   469,    67,    68,
     162,    67,    68,  1445,  1145,  2841,  1448,   479,    67,    68,
    1553,  1245,   169,   380,   381,   447,  1777,  1568,  1991,   814,
      67,    68,  1216,  1479,  1221,  1755,  1756,  1521,    67,    68,
    1550,   606,   511,   341,    57,   964,  1992,   532,  1782,   265,
     448,  1397,   273,   934,   958,   111,   313,   116,   111,   275,
     918,  1424,   114,  2728,  1055,  2863,  1157,  1284,  1029,  1030,
     777,   283,   567,   177,   915,   385,   180,   119,   170,   533,
    1793,   541,  1186,   546,   550,   120,   121,   111,   119,   323,
    1158,  1425,   119,   342,   586,   651,   120,   121,  1246,   438,
     120,   121,   343,   171,   253,   172,   504,   663,  1578,   619,
     738,  1757,   505,  1522,  2734,   774,   622,   739,   740,  1570,
     669,   276,   668,   763,  1783,  1217,   826,  1222,    67,    68,
    1786,   382,  1187,   344,   173,   815,   696,   697,  1400,  1728,
    1794,  1442,  1823,   277,   250,  1031,   327,   331,   652,   119,
     817,   506,   744,   741,   746,  1032,  1033,   120,   121,  1159,
     607,  1523,   749,   752,  2729,   755,   759,   251,   761,   832,
    1835,  1836,  1784,   116,   410,   124,   116,   778,   771,   507,
    1188,   111,   396,  1210,   845,  1060,   124,  1034,   784,   786,
     124, -1138,  1554,  2801,  1197,   164,   176,   757,   278,  1218,
     572,  1223,   174,   248,   111,   116,   111,   848,   959,  1588,
     281,   829,  2035,   831,   833,  2735,   835,   316,   965,  1837,
     838,   839,  1146,   689,   154,   576,   508,   841,   864,   155,
     156,   853,   855,   122,  1061,   154,   672,    69,   383,   154,
     155,   156,   602,   856,   155,   156,  1560,   124,   859,   861,
     332,  1551,   363,  1746,  1182,   416,   862,  1778,  1137,   863,
     374,  1750,  1160,   742,  1581,   119,  1189,   820,   119,   823,
     509,   510,   608,   120,   121,   391,   120,   121,   873,   874,
    1579,  1183,  1855,  1856,  1569,   878,   879,   880,   881,   882,
     883,   884,   590,   885,   411,   865,   154,   119,   842,   116,
    1619,   155,   156,   345,   609,   120,   121,   892,  1147,  1118,
    1993,   893,  2069,  2802,   591,   827,   898,   899,   900,   901,
     902,   903,   116,   904,   116,   454,   908,   909,  1317,   592,
    1571,  1857,  1631,   439,  1119,   454,   911,   299,   412,   413,
     114,   254,  1383,   325,    67,    68,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   906,   509,  2803,  1838,
    1839,  1787,  2013,   124,   255,   349,   124,  1428,  1790,   314,
     866,  1333,   279,   676,  1062,   972,  1125,   350,  1939,   315,
     104,    67,    68,   328,  1037,   405,   348,   326,   518,   940,
     941,   119,  1038,  1039,  1957,   124,  1940,  2739,   519,   120,
     121,   105,  1637,  1959,   351,  1954,   329,   949,  1384,  1962,
      67,    68,   154,  1638,   119,   154,   119,   155,   156,   280,
     155,   156,   120,   121,   120,   121,   372,  1982,  1808,  1407,
    1011,   377,   431,   417,  1236,   921,  1840,   573,  1385,  1917,
     593,  1040,  1920,   975,   154,   954,  1841,  1842,   291,   155,
     156,  1063,  1902,  1903,   106,  1499,   388,   953,   694,   695,
     574,  1064,   577,   867,    67,    68,   552,  1717,   292,   868,
     293,  1858,  1859,  1126,  1120,  1429,  1006,   418,  1843,   603,
    1191,  1752,   553,  1500,   352,   578,  1051,   677,   754,   124,
     995,  1261,   389,  1065,  1263,  1237,  1941,  1265,   973,   594,
    1463,  1904,   604,   285,   554,   390,  1070,   359,  1464,  1465,
     114,   122,   124,  1408,   124,  1127,  2806,  1501,  2590,   631,
     441,  1386,    58,  1502,   555,  1801,  1025,   353,  2809,  1503,
    1121,   818,   821,   824,   114,   225,  1811,  1238,   154,   922,
     422,   556,  1126,   155,   156,   557,   595,   107,  1860,  1504,
     394,  1942,   226,  1069,   589,   596,  1122,  1466,  1861,  1862,
     807,   154,  1534,   154,   632,    59,   155,   156,   155,   156,
    1148,  1505,   678,  1161,   558,   559,  1387,  2189,  2190,  1809,
     286,  1041,  1042,    60,  1127,   925,   406,   432,   433,  1506,
    1863,  1535,    67,    68,  1536,  1869,   294,  1537,   354,  1791,
     427,  1201,  1880,  1870,  1871,  1388,  1202,  1203,  1204,  1205,
    1881,  1882,  1206,    61,  1208,  2018,  1209,   454,  1211,   682,
     923,   808,  1943,  1507,  1538,  1958,  2191,   355,   679,   926,
    1643,   360,    62,   560,  1960,   356,    63,   683,   407,  1810,
    1963,  1905,  1906,   561,   423,   408,   108,   443,  1274,   445,
      64,   357,  1872,  1539,   680,   295,  1540,  1128,  1043,  1883,
     467,  1239,  1508,   480,    67,    68,    67,    68,  1044,  1045,
    2117,  2127, -1294,  1046,  1129,  1130,  1701,   491,  1509,  1294,
     633,   122,   492,   287,  1149,   648,  1295,  1798,   434,  1266,
    1267,  1510,  1268,  1270,  1272,  1273,   656,  1467,  1468,   288,
    1047,   502,   296,   887,   888,   122,   514,   562,   563,  1286,
    1287,   297,  2363,  2364,  2365,   657,  1291,  1292,  1907,  1511,
     516,   361,  1944,   684,   543,   424,  1128,   379,  1908,  1909,
     795,  1512,   569,  1513,  1514,   570,  1298,  1299,  1300,  1301,
    1302,  1303,  1304,  1129,  1130,  1389,   571,  1799,  2198,  2199,
     598,  1241,   599,  1519,   588,  1747,  2680,  1312,  1313,  1314,
    1910,  1316,   454,  1318,   289,  1319,  2192,  2193,  1131,  1132,
     788,   318,   584,  1515,  1469,  1247,   620,  1945,   626,   564,
    1541,  1574,  2705,  2057,  1470,  1471,  1322,   809,  1324,  1472,
    1252,   797,  1873,  1874,  1661,   627,   611,  2200,  1326,  1884,
    1885,  1390,   658,   629,  1667,   454,  1334,   692,   612,  1394,
    2172,  1336,  1242,  1673,  1891,  1542,  1473,  1800,  1323,  2273,
      65,   601,  1892,  1893,   114,   380,   381,  1391,  1349,   730,
    2185,   789,  1353,   585,  2281,   613,  1248,  1131,  1132,  1393,
    1395,  1398,  1543,  2194,  1021,  2222,  1126,  1403,  2225,   379,
     655,  1253,  1409,  2195,  2196,  1662,  2233,  1454,  1802,  2236,
     735,  1562,  2300,  1410,   661,  1668,  1139,  2244,  2682,  1875,
    2247,  1894,   420,  1681,  1674,   665,  1886,  2254,   319,  1876,
    1877,  1402,  1420,   257,  1878,  2197,  1887,  1888,  1127,  2765,
    2766,  1889,  1685,  2769,   666,  2771,    67,    68,   670,  1164,
     580,  1803,   379,  2390,  1192,    67,    68,   691,  2776,  2777,
    1152,  1879,   258,  2781,  2782,   614,   731,  2785,  1890,  2402,
    2403,  2404,  2786,  2787,  2406,   674,  2408,  2409,  2207,  2208,
    2411,  2412,  2413,   382,  1682,  2415,  2416,  2201,  2202,  2419,
    1140,  2421,  2422,   686,  2424,    67,    68,   380,   381,  1555,
     747,    67,    68,  1686,    67,  1269,   300,   803,   615,   320,
     266,  1804,  2580,   698,  1563,  2366,  1277,  1278,   790,   321,
    1580,   762,  2354,    67,    68,   976,   977,  2209,  1243,  1586,
    2827,   769,    88,  2828,   770,   581,  1280,  1281,  2831,   772,
      98,   259,   379,   781,  2834,   122,  1614,   791,  1615,  2837,
     380,   381,  1249,  1616,  1617,  1618,   260,    99,    88,   461,
     732,  1895,  1896,  1624,  2203,   787,  1625,  1254,  1627,   582,
     811,  1663,   793,  1805,  2204,  2205,  1564,  1556,   733,   616,
    1128,  1669,   978,  1141,  1557,  1629,   925,  1630,   979,   812,
    1675,  1622,  1623,  1124,  2389,  1634,  1635,  1129,  1130,   267,
    1796,  2496,   635,   830,  2499,   382,  2206,  1797,   764,  2503,
    1641,  1642,  2504,   268,   454,  1644,  1645,  2407,  1306,   398,
     261,   836,  1647,  2878,  1648,   401,  2881,  1650,  2767,  1651,
     926,  2519,   617,   462,  1705,   379,    80,   980,  1897,  1260,
     380,   381,   100,  1262,   765,   837,  2892,  2778,  1898,  1899,
    1683,   301,   269,  1900,   981,    67,  1348,   302,   382,   303,
    2899,    89,   262,  2900,  2901,   850,  1698,  2210,  2211,  1687,
     982,    81,   263,  1699,   857,  1700,   983,   636,   858,  1703,
    1901,   379,    67,    68,   984,   379,   101,    89,  1178,    90,
     860,  1131,  1132,    91,  1264,  1709,   871,  1712,   766,  1714,
    1715,  1716,  1718,   872,   270,  1720,  1721,   875,  1723,  1724,
    1725,  1726,   876,  1484,  2441,    90,  1518,   271,  1734,  2113,
    2591,   877,   637,  2450,   102,  1740,   463,  1711,  1573,  1741,
    1742,  1743,  2459,   380,   381,  2683,   379,  1526,   886,   454,
    1748,   985,   889,  1751,  2212,    82,    92,  2538,   382,   891,
     335,  1761,  2601,  1762,  2213,  2214,  1764,   451,   379,   913,
     986,   638,  1179,  2551,   453,   987,  1527,   988,  2556,  1528,
     379,   912,    92,   920,    67,    68,  1753,   379,   929,   380,
     381,   931,  2857,   380,   381,   936,  2215,  1485,  2860,    93,
     938,    83,    84,   951,  1773,   989,   990,    94,    95,  1529,
    1813,   956,  1814,   991,   961,  1815,  1816,   967,  1817,   968,
    1818,   970,   493,   767,   971,    93,  1820,   996,  1821,  1654,
    1655,   997,   992,    94,    95,    67,    68,  1827,  1530,  2570,
     494,  1531,  2652,  1007,   380,   381,  2574,   998,    85,   336,
    1000,   382,  1975,  1976,  2897,  1004,  2898,   495,   895,   896,
    1583,  1009,  2660,   337,  1002,  1180,   380,   381,  1013,  2665,
     496,   750,  2668,  2669,    72,  1486,  1487,  1766,   380,   381,
      73,    67,    68,  1933,  1018,   380,   381,  1019,   993,   497,
    1488,    67,    68,   498,  1589,  1020,  1022,   382,  1023,  1590,
    1024,   382,    86,  2600,  1035,  1036,  2602,   499,   852,  2603,
    1048,  2604,  1934,  1935,  1937,  1056,    67,    68,  1628,    74,
    1058,  1059,  1591,  1592,  1290,  1593,  1594,   782,    67,    68,
    1936,  1066,  1636,  1067,  1947,  1489,  1595,    67,    68,  1950,
    1491,  1492,  1068,  1932,  1134,   751,  1143,    75,  1596,  1597,
    1144,  1767,   382,   500,   338,  1198,  1598,  1199,  1200,  1599,
    1212,  1214,  1978,  1980,  1225,  1532,  1226,   339,  1227,  1656,
    1657,  1228,  1986,  1229,   382,  1996,  1230,  1600,  2678,  1231,
    2305,   471,  2002,  1232,  1601,  1602,   382,  1233,  1603,  1234,
    1251,  2691,  1256,   382,    76,  2753,  2696,  2007,  1658,  1257,
    1533,   783,  2009,    67,    68,  1979,  2011,  1258,  2014,  2015,
     366,  2017,  2019,  2020,  2763,  2023,  1259,   367,  2026,  2027,
    2028,  2029,  2030,  2031,  2032,  2033,  2036,  2038,  2039,  1768,
    1769,  2041,  2042,  2043,  2044,  2357,  1275,  1276,  1279,    77,
    1282,  2050,  2051,  1288,  1770,  2053,  2054,  2055,  1731,  1732,
    1289,  2058,  2059,  1293,  1296,   472,  1604,  2674,  1297,  1305,
    2677,  2714,  2679,  1307,  2062,  2063,  1308,  2064,  2065,    67,
      68,  1938,  1491,  1492,  1320,  2692,  2693,  2372,   473,   474,
      67,    68,  1953,  1491,  1492,  1321,  1339,   475,  1340,  1771,
      67,    68,  2707,  1341,  1343,   451,   452,   453,  2817,  2818,
    1344,  2820,  1345,  2822,  2823,  1346,  2825,  1347,  1351,   476,
    1352,  1399,  1605,  1401,  1405,  2085,  2086,  2087,  1606,   477,
    2088,  1411,  1413,  1414,  1417,  2090,  2093,  1418,  2095,  2096,
    2097,  1421,  2098,  2099,  1422,  2101,  1607,  2102,  2103,  1423,
    2105,  2106,  2107,  2108,  1431,  1432,  1436,  1608,  1433,  1434,
    1438,  2111,    67,    68,  1981,  1491,  1492,  2092,  1437,  2115,
    2851,   795,  1439,  1440,  2120,  2121,  1446,  1447,  1498,  1449,
    2123,  1450,  1456,  1458,  1444,  1609,  1610,  1459,  1461,  2126,
    1474,  1475,  1495,  1476,  1477,  1480,  1524,  1481,  1482,  1525,
    1544,  1496,  1547,  1548,  1497,  1517,  1611,  1545,  1561,  1546,
    1549,  1566,  1567,  1572,  1576,  1575,  2883,  1558,  1565,  1582,
    1584,  1585,  2154,  1621,  1632,  1633,  1639,  1640,   796,  1646,
    1649,  1652,   797,  1653,  1708,  1666,  2139,  1671,  1672,  1677,
    1680,  1930,  1678,  2162,  2163,  2145,  1679,  1689,  2165,  2150,
    1690,  1612,  1691,  1694,  2167,  1692,  1693,  1706,  1707,  1719,
     368,  1722,  1735,   369,  1730,  1713,  1736,  1737,  1749,  -483,
    1754,  1948,  1763,  1795,   798,  1952,  2856,  1765,  1774,  1775,
    1776,  1780,  1788,  1785,  1789,  1806,  1807,  1812,  1819,  1825,
    1826,  1831,  1850,  1853,  1911,  2523,  2524,  1864,  2526,  2527,
    1866,  1983,  2530,  2531,  1868,  1912,  1913,  1914,  1918,  1919,
    1922,  1998,  1921,   799,  1923,  1926,  1964,  1929,  1946,  1949,
    2003,  2004,  1966,  1965,  1955,  1956,  1961,  1967,  1968,  1970,
    1971,  1972,  2008,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,  2268,  2269,  2578,  2271,   800,  1973,  1977,  1995,   801,
    1974,  1999,  2010,  2048,  2012,  2016,  2216,  2047,  2024,  2025,
    2040,  2049,  2282,  2283,  2284,  2285,  2286,  2287,  2288,  2289,
    2290,  2060,  2061,  2227,  2066,   802,  2067,  2068,   803,  2070,
    2071,  2072,  2073,   310,  2074,  2296,  2075,  2298,  2076,   804,
    2077,  2078,  2238,  2079,  2080,  2081,  2084,   760,  2082,  2083,
    2100,  2104,  2109,  2304,   454,  2122,  2542,  2128,  2129,  2308,
    2791,  2130,  2131,  2132,  2164,  2375,  2166,  2169,  2311,  2312,
    2313,  2314,  2315,  2316,  2317,  2318,  2319,  2320,  2170,  2171,
    2333,  2334,  2335,  2336,  2337,  2338,  2339,  2340,  2341,  2342,
    2343,  2344,  2173,  2347,  1165,  2348,  2349,  2350,  2174,  2543,
    2175,  2178,  1166,  2180,  2181,  2182,  2186,   851,  1167,   454,
    2358,  2187, -1156,  2188,  2217,  2218,   468,  2219,  2223,  2224,
    2544,  2226,  2228,  2229,  2230,  1168,  2234,  2235,  2871,  2237,
    2239,  1169,  2240,  2241,  2245,  2246,  2325,  2248,  2249,  2250,
    2251,  2255,  2791,  2367,  2256,  2368,  2664,  2369,  2257,  2371,
    2667,   454,  2373,  2259,  2374,  2260,  1170,  2262,  2263,  2378,
    2379,  2265,  2380,  2381,  2382,  2383,  2272,  1171,  2274,  2277,
    2280,  2387,  2291,  2388,  2292,  2565,  2293,  2391,  2294,  2295,
    2393,  2299,  2346,  2351,  2545,  2352,  2702,   530,  2355,   537,
     540,  2356,   545,   549,  2359,  2362,  2546,  2376,  2377,  2384,
    2547,  2392,  2396,  2397,  2398,   228,  2399,  2400,  1172,  1844,
    2426,  2548,  2429,  2431,  2434,  2395,  1173,  2436,  2437,  2438,
    2442,  1854,  2443,   624,  2430,  2444,  2445,   229,  2446,  2447,
     230,  2451,  2452,  2550,  2453,  2454,  2455,  2456,  2460,  1915,
    1916,  2461,   640,   646,  2462,  2469,  2472,  1107,   654,  2480,
    2483,  2486,   660,  2487,  2428,  2489,  2492,  2493,  2494,  2497,
    2502,  1108,  2506,  1174,  2522,   231,  2576,   939,  2582,  2583,
    1109,  2584,   232,  2495,   944,  2585,  1175,   945,  2589,  2842,
    2592,  1110,   946,   233,   234,  2594,   948,  2595,  2596,  2607,
     235,  2597,  1176,  2599,   745,  2605,  2616,  2625,  2634,  2640,
    2644,  2647,  2653,  2661,  2672,  2685,   756,  2686,  2687,  2688,
    2689,   894,  2704,  1111,  2715,   236,  2716,  2718,  2719,  2720,
    2721,  2722,  2723,  2724,  2726,  2738,   780,  2732,  2500,  2276,
    2764,  2770,   870,  2773,   237,  1112,  2774,  2775,  2780,  2507,
    2508,  2509,  2510,  2511,  2512,  2513,  2514,  2515,  2516,  2517,
    2795,   238,   239,  2796,  2797,  2520,  2847,  2849,   240,   454,
     454,  1012,   454,   454,  2301,  2798,   454,   454,  2532,  2533,
    2534,  2535,  2536,  2537,  2799,  2539,  2540,  2541,  2800,  2807,
    2810,   241,  2821,  2829,  2805,  2832,  2835,  1113,  2844,  2845,
    2852,  2552,  2553,  2554,  2555,  2855,  2557,  2558,  2559,  2560,
    2561,  2562,  2865,  2564,  2866,  2872,  2568,  2569,  2880,  2788,
    2884,  2885,  2887,  2891,  2893,  2549,  2894,  2684,  2895,  2896,
     242,  2843,  2839,     0,  2577,     0,  1114,   454,  2579,  1235,
       0,     0,  2581,     0,     0,     0,     0,  2586,  2587,  2588,
       0,     0,     0,     0,     0,   890,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1115,   897,     0,     0,     0,
       0,     0,     0,     0,     0,   905,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   243,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   244,  2608,     0,     0,
       0,     0,     0,  1207,     0,  1116,     0,  1117,     0,     0,
    1213,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   245,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   942,   943,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   947,     0,     0,     0,
       0,   950,     0,     0,     0,     0,     0,     0,     0,  2655,
     962,     0,     0,  2657,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2658,  2659,     0,     0,     0,     0,  2663,
     454,     0,     0,  2666,   454,     0,     0,     0,     0,  2671,
       0,     0,  2675,  2676,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2694,  2695,     0,  2697,  2698,  2699,  2700,  2701,     0,
     454,  2703,  2177,     0,     0,  2706,     0,  1309,     0,     0,
    2183,  2184,  1427,     0,  1311,     0,     0,     0,  2717,     0,
    1014,  1015,  1016,  1017,     0,  2220,  2221,  2725,     0,     0,
       0,  2321,     0,     0,     0,     0,  2231,  2232,     0,     0,
       0,     0,  2322,     0,  1478,  2740,     0,  2242,  2243,     0,
       0,     0,     0,     0,     0,     0,     0,  2252,  2253,  1327,
    1328,     0,     0,  2258,  1332,     0,     0,  1335,  1165,  2323,
       0,     0,     0,  2261,     0,     0,  1166,     0,     0,  1342,
       0,     0,  1167,     0,     0,     0,     0,  2752,     0,     0,
       0,     0,  2756,     0,  2758,  1163,     0,     0,     0,  1168,
    2761,     0,     0,     0,     0,  1169,     0,     0,  2324,     0,
       0,     0,     0,  2768,     0,  2571,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1170,     0,  2779,     0,     0,     0,  2783,     0,     0,     0,
    2816,  1171,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   111,     0,     0,     0,
       0,     0,  2804,     0,     0,     0,     0,     0,     0,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1172,     0,     0,     0,     0,  1483,     0,     0,
    1173,   113,     0,  2819,     0,     0,     0,     0,  2824,     0,
    2826,     0,     0,     0,     0,     0,     0,  2830,     0,   114,
       0,     0,  2833,     0,     0,     0,     0,  2836,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1174,     0,     0,
       0,  2846,  2848,     0,     0,     0,     0,     0,     0,     0,
    1175,     0,     0,     0,     0,   115,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1176,  2858,     0,  1310,
    2859,     0,     0,  2861,   116,     0,  2325,     0,  2326,     0,
       0,  1315,     0,  2867,  2868,  2869,  2870,     0,     0,     0,
    2854,     0,     0,     0,     0,  2879,     0,     0,  2882,     0,
       0,     0,     0,     0,     0,  2886,     0,  2888,     0,     0,
       0,  2690,     0,     0,     0,     0,     0,   117,  1325,     0,
       0,  2874,     0,     0,  2877,     0,     0,     0,     0,     0,
    2433,  2708,  2327,     0,     0,  2713,     0,     0,     0,     0,
    2435,     0,     0,     0,  2439,  2440,     0,     0,     0,     0,
       0,     0,     0,  2448,  2449,     0,     0,     0,   118,     0,
       0,     0,  2457,  2458,     0,     0,   119,     0,  2463,     0,
       0,     0,     0,     0,   120,   121,     0,     0,  2473,  2474,
     122,     0,     0,     0,     0,   123,     0,     0,     0,  2484,
    2485,  1704,     0,     0,     0,     0,     0,     0,  1416,     0,
    2488,     0,     0,  1828,  1829,  1830,     0,     0,     0,  2490,
       0,  2491,     0,  1832,  1833,  1834,     0,     0,     0,     0,
    1845,  1846,  1847,     0,     0,  1848,  1849,  1733,  1851,  1852,
       0,     0,  1738,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1744,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   699,   700,     0,     0,     0,  1924,  1925,
       0,     0,  1927,  1928,   124,     0,     0,     0,     0,     0,
       0,     0,     0,  1559,     0,  2794,     0,     0,     0,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,     0,     0,
     701,     0,     0,   154,     0,     0,   702,     0,   155,   156,
       0,     0,     0,   703,     0,   704,     0,     0,  1620,     0,
     705,     0,     0,   706,     0,     0,     0,     0,  1626,   707,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     708,     0,     0,     0,     0,     0,   709,     0,     0,     0,
       0,     0,     0,     0,     0,   710,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   711,     0,     0,     0,  2610,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2619,     0,     0,     0,
       0,     0,     0,  2864,   712,  2628,     0,     0,     0,     0,
       0,     0,     0,     0,  2637,     0,     0,     0,     0,     0,
       0,  2639,   713,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2643,     0,   714,   715,    67,    68,  2646,     0,
       0,  2648,     0,     0,  2649,     0,     0,     0,  1702,     0,
       0,   112,     0,     0,     0,     0,   716,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1710,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1997,     0,     0,   717,
       0,     0,     0,     0,     0,    67,    68,     0,     0,     0,
     114,     0,     0,   718,  1739,   719,     0,     0,     0,     0,
     112,     0,     0,     0,  1745,     0,     0,     0,     0,     0,
       0,   720,     0,     0,     0,     0,     0,   721,     0,     0,
     305,  1760,     0,     0,   722,     0,     0,     0,     0,     0,
       0,   723,     0,  1772,     0,     0,   115,  2046,  1779,   114,
       0,     0,     0,  2052,     0,     0,     0,     0,     0,     0,
     724,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   725,   726,     0,   727,     0,  2741,     0,
       0,     0,     0,     0,     0,     0,     0,  2743,     0,     0,
       0,     0,     0,     0,     0,   115,  2745,     0,     0,     0,
       0,     0,  2748,     0,     0,     0,  2750,     0,   117,  2751,
       0,     0,     0,     0,     0,     0,   728,     0,     0,     0,
       0,     0,     0,  2168,     0,     0,     0,     0,     0,     0,
       0,     0,  2089,     0,     0,     0,  2176,  2094,     0,     0,
       0,     0,     0,     0,     0,     0,  2179,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   117,     0,     0,
       0,     0,     0,     0,     0,     0,  2112,     0,     0,     0,
       0,   122,  2118,     0,     0,     0,   123,     0,     0,     0,
       0,     0,  1931,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   306,  2134,
       0,     0,     0,     0,     0,     0,  2141,     0,     0,     0,
       0,  1951,     0,     0,     0,     0,     0,     0,  2264,     0,
     122,     0,     0,     0,     0,   123,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   307,     0,     0,  1984,
       0,     0,  1985,     0,     0,     0,     0,     0,     0,     0,
       0,  2000,  2001,     0,     0,     0,     0,     0,     0,  2005,
       0,     0,     0,     0,     0,     0,     0,  2006,     0,     0,
       0,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,     0,
       0,   308,     0,     0,     0,     0,     0,  2045,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2056,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,     0,     0,
       0,     0,    67,    68,     0,     0,     0,     0,  2266,     0,
       0,     0,     0,     0,     0,     0,     0,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2279,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2091,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2302,  2303,     0,     0,     0,     0,     0,  2110,     0,
       0,     0,     0,     0,     0,     0,     0,  2306,  2307,     0,
       0,     0,  2309,  2310,  2119,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2124,     0,  2125,
       0,     0,   115,     0,     0,     0,     0,     0,     0,  2133,
       0,     0,  2135,  2136,  2137,  2138,  2140,     0,  2142,  2432,
       0,  2143,  2353,     0,  2144,  2146,  2147,  2148,  2149,  2151,
       0,  2152,  2153,  2360,     0,     0,  2155,  2156,  2157,     0,
       0,  2158,  2159,     0,     0,     0,     0,  2160,  2161,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2464,
    2465,  2466,  2467,  2468,   117,  2470,  2471,     0,  2370,     0,
    2475,  2476,  2477,  2478,  2479,     0,  2481,  2482,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2385,     0,     0,
       0,     0,     0,     0,   548,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,     0,
    2401,     0,     0,     0,     0,  2405,     0,     0,     0,     0,
       0,  2410,     0,     0,     0,     0,  2414,     0,     0,     0,
    2417,     0,   123,  2420,     0,     0,  2423,     0,  2425,     0,
       0,     0,     0,     0,     0,     0,     0,   114,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2267,     0,     0,  2270,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2275,     0,     0,  2278,     0,
       0,     0,     0,   115,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2297,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2345,     0,     0,  2609,     0,     0,  2611,  2612,
    2613,  2614,  2615,     0,  2617,  2618,     0,  2620,  2621,  2622,
    2623,  2624,     0,  2626,  2627,  2361,  2629,  2630,  2631,  2632,
    2633,     0,  2635,  2636,     0,  2638,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2641,  2642,     0,   122,     0,
       0,     0,  2563,   123,     0,     0,  2645,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2575,     0,
       0,     0,     0,     0,     0,     0,     0,  1759,     0,  2386,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,     0,     0,  2394,     0,     0,     0,     0,     0,
       0,  2593,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2418,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2427,  2606,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   115,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2742,     0,     0,     0,     0,     0,     0,     0,     0,
    2744,     0,  2650,     0,     0,     0,     0,     0,  2654,  2746,
       0,  2747,  2656,     0,     0,  2749,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2662,     0,
       0,     0,     0,     0,     0,     0,     0,  2498,   117,     0,
    2501,     0,     0,     0,     0,     0,     0,     0,  2505,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2518,     0,     0,  2521,     0,     0,
       0,     0,  2525,     0,     0,  2528,  2529,     0,     0,  2711,
    2712,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   123,     0,     0,     0,
       0,     0,     0,  2811,     0,  2812,     0,  2813,     0,     0,
    2814,     0,  2815,  2572,  2573,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,     0,     0,     0,     0,     0,   641,   112,
       0,     0,     0,     0,     0,     0,     0,  2598,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2772,     0,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
     642,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   521,
     522,     0,     0,   523,   115,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   643,     0,
       0,     0,     0,     0,     0,  2651,   524,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   115,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2838,     0,     0,     0,     0,     0,     0,  2670,     0,
       0,     0,     0,     0,     0,     0,   117,     0,     0,  2681,
       0,     0,     0,     0,     0,  2850,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   644,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   117,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   525,     0,     0,     0,     0,     0,     0,     0,     0,
    2875,     0,     0,  2731,     0,     0,     0,  2737,     0,     0,
       0,   526,     0,     0,   123,     0,     0,     0,     0,     0,
    2889,     0,     0,  2890,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   527,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   123,     0,     0,     0,
       0,     0,     0,     0,   112,     0,     0,     0,     0,     0,
       0,  2754,  2755,     0,  2757,     0,     0,     0,     0,  2759,
    2760,     0,     0,     0,  2762,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   645,     0,     0,     0,
       0,     0,     0,   114,     0,     0,     0,     0,     0,     0,
       0,   528,     0,     0,     0,     0,     0,     0,  2784,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,     0,     0,   115,
    2808,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,     0,
     529,     0,     0,     0,  1071,  1072,  1073,     0,     0,  1354,
    1355,  1356,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,     0,     0,  1074,  1075,     0,     0,  1076,  1357,
    1358,  1077,   112,  1359,     0,     0,     0,     0,  1078,     0,
    1360,     0,  1079,  1361,     0,     0,     0,  1362,     0,  2853,
    1080,  1081,     0,     0,     0,  1363,  1364,     0,  1082,  1083,
       0,     0,     0,  1365,     0,     0,  2862,     0,     0,     0,
       0,   114,     0,     0,     0,     0,  1084,     0,     0,     0,
    2873,     0,  1085,  2876,   122,   112,  1086,  1087,     0,   123,
    1088,  1366,  1367,     0,     0,  1368,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1089,     0,
       0,     0,     0,  1369,     0,     0,     0,   115,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   535,     0,     0,
    1090,     0,     0,     0,     0,  1370,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   539,     0,     0,     0,     0,     0,  1091,     0,
       0,     0,     0,  1371,     0,     0,     0,     0,     0,     0,
     115,     0,  1372,     0,   112,     0,     0,     0,     0,   117,
       0,     0,  1092,     0,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,  1093,  1415,  1094,     0,     0,  1373,     0,     0,
    1095,  1096,     0,   112,     0,  1374,  1375,     0,     0,     0,
       0,     0,   117,     0,     0,     0,     0,  1097,  1098,     0,
       0,     0,   122,  1376,     0,     0,     0,   123,     0,  1099,
    1100,     0,     0,     0,     0,  1377,     0,     0,     0,   115,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1101,  1049,  1102,     0,
       0,  1378,  1050,  1379,     0,     0,     0,     0,     0,     0,
    1103,     0,  1104,  1380,     0,     0,     0,     0,  1105,     0,
     123,     0,     0,  1381,     0,     0,     0,     0,   115,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1106,     0,     0,     0,     0,  1382,     0,     0,
       0,     0,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     117,     0,   536,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   123,
       0,     0,     0,     0,     0,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   123,     0,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,     1,     0,     0,     2,     0,     0,     3,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     0,     0,     0,     0,     5,     6,     0,     7,
       8,     9,     0,     0,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,    11,     0,    12,    13,
       0,     0,     0,     0,     0,     0,     0,     0,    14,    15,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    16,     0,     0,     0,     0,     0,     0,     0,     0,
      17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,     0,     0,     0,     0,    19,     0,
       0,    20,     0,     0,     0,    21,    22,     0,     0,     0,
      23,    24,     0,     0,     0,    25,     0,     0,     0,     0,
       0,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,     0,
      28,    29,    30,     0,     0,    31,    32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    34,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37,     0,    38,     0,     0,     0,     0,     0,     0,
      39,     0,     0,     0,     0,    40,     0,     0,     0,    41,
       0,    42,     0,    43,     0,     0,     0,     0,     0,    44,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    45,     0,     0,     0,     0,     0,    46,
       0,     0,   182,     0,     0,   183,     0,     0,   184,     0,
       0,     0,     0,     0,     0,    47,    48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,   185,    50,
     186,   187,   188,     0,     0,    51,     0,     0,    52,    53,
     189,     0,   190,     0,     0,     0,     0,   191,     0,   192,
     193,   194,     0,     0,     0,     0,     0,   195,     0,   196,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    54,
       0,     0,     0,     0,     0,     0,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     197,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   198,
       0,     0,     0,     0,     0,     0,     0,   199,     0,   200,
     201,   202,   203,     0,     0,     0,   204,     0,     0,     0,
     205,     0,   206,  1452,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   207,   208,     0,     0,
       0,   209,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   210,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   211,   212,
       0,     0,     0,     0,     0,     0,   213,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   214,     0,   215,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     216,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   217,   218,     0,     0,
       0,     0,     0,     0,     0,   219,     0,     0,     0,     0,
       0,     0,   220,     0,     0,     0,     0,     0,   221,     0,
     222,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,  1453,
       0,     0,     0,     0,     0,     0,     0,   223
};

static const yytype_int16 yycheck[] =
{
       3,    53,   956,  1537,   512,   714,   715,     4,    11,   719,
     944,   945,   946,    16,  1228,  1741,  1230,  1743,     4,    13,
      14,     5,     4,     5,     4,     4,     3,     4,    26,    99,
       0,   468,    35,     5,     3,     4,     5,    46,    31,    26,
      43,   478,  1256,  1257,  1258,     4,     4,    62,     4,    52,
       3,     4,    55,     4,    19,    58,    31,    43,    35,    62,
      46,   247,    65,    15,    35,    47,    69,    70,    62,    26,
      73,     3,     4,    76,    77,     3,     4,    80,  1012,     4,
      83,    84,     5,    86,     3,     4,     3,     4,    91,    31,
     276,    77,  1072,    33,     3,     4,     3,     4,    39,    85,
      39,   104,   105,   106,   107,   108,   109,   293,    26,     3,
       4,    47,    16,   299,     3,     4,   225,   101,     3,     4,
     105,     5,   125,   107,     5,   122,   205,    88,    35,   161,
      16,    49,    39,     4,    52,   155,   122,     3,     4,    16,
     122,   205,    67,     4,   301,    63,    35,   118,     3,     4,
      32,     3,     4,  1043,    16,  2790,  1046,   160,     3,     4,
     137,    88,   148,   145,   146,     5,    20,     5,    86,   109,
       3,     4,   113,  1063,   113,    23,    24,   175,     3,     4,
      26,    20,   185,    51,    67,   136,   104,   190,   175,    15,
      30,    16,   243,   272,   174,     4,     5,   122,     4,     5,
     264,   165,    57,   196,   165,  2840,   113,   277,   202,   203,
     146,     5,   321,    65,   199,    60,   150,   214,   204,   190,
     177,   192,   126,   194,   195,   222,   223,     4,   214,     4,
     137,   195,   214,   101,   205,   267,   222,   223,   165,     5,
     222,   223,   110,   229,    62,   231,   199,   205,   137,   220,
     209,    99,   205,   251,   196,   275,   208,   216,   217,    26,
     263,    67,   123,   315,   251,   206,    12,   206,     3,     4,
      20,   253,   176,   141,   260,   215,   279,   280,   988,   288,
     237,   167,   247,    89,   299,   279,    62,   206,   320,   214,
      67,   244,   295,   252,   297,   289,   290,   222,   223,   206,
     139,   299,   305,   306,   297,   308,   309,   322,   311,   237,
      13,    14,   299,   122,   199,   312,   122,   253,   321,   272,
     224,     4,   297,   760,   303,    13,   312,   321,   331,   332,
     312,   301,   309,   199,   318,    14,    15,   308,   144,   280,
      62,   280,   328,    22,     4,   122,     4,   303,   328,   321,
      29,   354,   321,   356,   357,   297,   359,    36,   309,    62,
     363,   364,   224,   286,   361,    62,   319,   238,    29,   366,
     367,   374,   375,   228,    62,   361,   260,   309,    57,   361,
     366,   367,    62,   386,   366,   367,  1096,   312,   391,   392,
     309,   237,   309,  1327,   275,    74,   399,   251,   275,   402,
     309,  1335,   309,   362,  1114,   214,   310,    67,   214,    67,
     363,   364,   251,   222,   223,   309,   222,   223,   421,   422,
     309,   302,    13,    14,   262,   428,   429,   430,   431,   432,
     433,   434,    45,   436,   319,    96,   361,   214,   309,   122,
    1149,   366,   367,   311,   283,   222,   223,   450,   310,     4,
     368,   454,  1666,   319,    67,   201,   459,   460,   461,   462,
     463,   464,   122,   466,   122,   468,   469,   470,   905,    82,
     237,    62,  1181,   239,    29,   478,   479,    67,   363,   364,
      57,   299,    67,    89,     3,     4,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   467,   363,   364,   202,
     203,   251,   237,   312,   322,    36,   312,   173,    20,   318,
     171,   948,   318,     5,   202,   138,   702,    48,  1498,   328,
      39,     3,     4,   299,     5,     4,     4,    40,   178,   532,
     533,   214,    13,    14,    20,   312,   107,  2607,   188,   222,
     223,    60,     5,    20,    75,  1525,   322,   550,   133,    20,
       3,     4,   361,    16,   214,   361,   214,   366,   367,   365,
     366,   367,   222,   223,   222,   223,   243,  1547,    26,    16,
     622,     0,     4,   143,    62,    79,   279,   299,   163,  1469,
     193,    62,  1472,   586,   361,   556,   289,   290,    45,   366,
     367,   279,    13,    14,   113,    39,   285,     4,   277,   278,
     322,   289,   299,   264,     3,     4,    44,    60,    65,   270,
      67,   202,   203,    64,   169,   281,   619,   187,   321,   299,
     303,     4,    60,    67,   155,   322,   678,   119,   307,   312,
     601,   817,     5,   321,   820,   123,   207,   823,   261,   252,
       5,    62,   322,    58,    82,     4,   698,     4,    13,    14,
      57,   228,   312,   100,   312,   106,  2726,   101,  2384,    43,
      30,   246,    11,   107,   102,  1375,   669,   198,  2738,   113,
     225,   350,   351,   352,    57,    84,  1386,   165,   361,   183,
      79,   119,    64,   366,   367,   123,   299,   206,   279,   133,
       5,   262,   101,   696,   207,   308,   251,    62,   289,   290,
      62,   361,    21,   361,    88,    54,   366,   367,   366,   367,
     713,   155,   204,   716,   152,   153,   301,    13,    14,   177,
     135,   202,   203,    72,   106,   143,   205,   159,   160,   173,
     321,    50,     3,     4,    53,     5,   193,    56,   269,   251,
       5,   744,     5,    13,    14,    29,   749,   750,   751,   752,
      13,    14,   755,   102,   757,   237,   759,   760,   761,    95,
     264,   123,   107,   207,    83,   251,    62,   298,   260,   187,
    1207,   128,   121,   211,   251,   306,   125,   113,   257,   237,
     251,   202,   203,   221,   183,   264,   305,     5,   840,     5,
     139,   322,    62,   112,   286,   252,   115,   248,   279,    62,
     206,   289,   246,     4,     3,     4,     3,     4,   289,   290,
    1744,  1765,     0,   294,   265,   266,     4,   119,   262,     4,
     204,   228,    67,   238,   275,     5,    11,   177,   260,   832,
     833,   275,   835,   836,   837,   838,   161,   202,   203,   254,
     321,   121,   299,     4,     5,   228,   301,   285,   286,   852,
     853,   308,  2066,  2067,  2068,   180,   859,   860,   279,   303,
     178,   218,   207,   199,    32,   264,   248,    47,   289,   290,
      62,   315,    67,   317,   318,     5,   879,   880,   881,   882,
     883,   884,   885,   265,   266,   169,    90,   237,    13,    14,
      67,    62,   244,  1079,    15,  1332,  2540,   900,   901,   902,
     321,   904,   905,   906,   319,   908,   202,   203,   359,   360,
      62,    71,     5,   357,   279,    62,    90,   262,    67,   357,
     239,  1107,  2566,  1632,   289,   290,   929,   289,   931,   294,
      62,   123,   202,   203,    62,    73,    36,    62,   941,   202,
     203,   225,   267,    30,    62,   948,   949,     5,    48,   220,
    1840,   954,   123,    62,     5,   274,   321,   307,   929,  1939,
     309,   300,    13,    14,    57,   145,   146,   251,   971,    92,
    1860,   123,   975,    66,  1954,    75,   123,   359,   360,   982,
     983,   984,   301,   279,   663,  1875,    64,   990,  1878,    47,
       4,   123,   995,   289,   290,   123,  1886,  1049,   134,  1889,
       5,   134,  1982,  1006,     4,   123,    39,  1897,  2542,   279,
    1900,    62,   209,    62,   123,     5,   279,  1907,   178,   289,
     290,   220,  1025,    89,   294,   321,   289,   290,   106,  2673,
    2674,   294,    62,  2677,     4,  2679,     3,     4,     4,   718,
       4,   177,    47,  2119,   723,     3,     4,     4,  2692,  2693,
     128,   321,   118,  2697,  2698,   155,   179,  2701,   321,  2135,
    2136,  2137,  2706,  2707,  2140,     5,  2142,  2143,    13,    14,
    2146,  2147,  2148,   253,   123,  2151,  2152,   202,   203,  2155,
     113,  2157,  2158,     5,  2160,     3,     4,   145,   146,  1092,
       5,     3,     4,   123,     3,     4,   215,   289,   198,   259,
      25,   237,    60,     5,   237,  2085,     4,     5,   260,   269,
    1113,     4,  2046,     3,     4,     4,     5,    62,   289,  1122,
    2764,     4,    27,  2767,     4,    89,     4,     5,  2772,     4,
      84,   197,    47,     4,  2778,   228,  1139,   289,  1141,  2783,
     145,   146,   289,  1146,  1147,  1148,   212,   101,    27,    39,
     273,   202,   203,  1156,   279,    99,  1159,   289,  1161,   123,
       5,   289,   123,   299,   289,   290,   299,   278,   291,   269,
     248,   289,    61,   206,   285,  1178,   143,  1180,    67,     4,
     289,     4,     5,     5,  2118,  1188,  1189,   265,   266,   114,
     278,  2267,   155,     4,  2270,   253,   321,   285,    55,  2275,
    1203,  1204,  2278,   128,  1207,  1208,  1209,  2141,   887,   127,
     276,   286,  1215,  2857,  1217,   127,  2860,  1220,  2675,  1222,
     187,  2297,   322,   113,  1276,    47,     4,   116,   279,     5,
     145,   146,   186,     5,    91,     4,  2880,  2694,   289,   290,
     289,   360,   167,   294,   133,     3,     4,   366,   253,   368,
    2894,   156,   318,  2897,  2898,     4,  1259,   202,   203,   289,
     149,    39,   328,  1266,     4,  1268,   155,   230,     5,  1272,
     321,    47,     3,     4,   163,    47,   230,   156,    39,   184,
      11,   359,   360,   188,     5,  1288,     4,  1290,   145,  1292,
    1293,  1294,  1295,   209,   219,  1298,  1299,     4,  1301,  1302,
    1303,  1304,     4,    83,  2194,   184,     5,   232,  1311,   188,
    2386,     4,   275,  2203,   268,  1318,   206,  1288,     5,  1322,
    1323,  1324,  2212,   145,   146,     5,    47,    21,     4,  1332,
    1333,   220,     5,  1336,   279,   113,   241,  2317,   253,     5,
      25,  1344,  2418,  1346,   289,   290,  1349,     8,    47,   285,
     239,   314,   113,  2333,    10,   244,    50,   246,  2338,    53,
      47,     5,   241,   178,     3,     4,  1337,    47,     4,   145,
     146,     4,  2829,   145,   146,   188,   321,   157,  2835,   284,
     178,   159,   160,     4,  1355,   274,   275,   292,   293,    83,
    1393,   208,  1395,   282,   208,  1398,  1399,     5,  1401,     5,
    1403,     4,    54,   260,   208,   284,  1409,   200,  1411,    41,
      42,   200,   301,   292,   293,     3,     4,  1420,   112,  2353,
      72,   115,  2498,     5,   145,   146,  2360,    67,   206,   114,
      67,   253,     4,     5,  2891,   237,  2893,    89,   456,   457,
    1119,   238,  2518,   128,    67,   206,   145,   146,     5,  2525,
     102,    39,  2528,  2529,   199,   235,   236,    83,   145,   146,
     205,     3,     4,     5,     4,   145,   146,     4,   357,   121,
     250,     3,     4,   125,    21,     4,     4,   253,     4,    26,
     208,   253,   260,  2417,    88,     5,  2420,   139,   127,  2423,
      88,  2425,  1495,  1496,  1497,     5,     3,     4,  1177,   244,
       4,     4,    49,    50,    11,    52,    53,    39,     3,     4,
       5,     5,  1191,     5,  1517,   295,    63,     3,     4,  1522,
       6,     7,     4,  1494,   101,   113,     4,   272,    75,    76,
       5,   157,   253,   185,   219,    16,    83,    16,     4,    86,
       4,     4,  1545,  1546,     4,   239,    99,   232,     5,   181,
     182,     5,  1555,    88,   253,  1558,     4,   104,  2538,     5,
    1997,    34,  1565,     5,   111,   112,   253,    88,   115,     5,
       4,  2551,     5,   253,   319,  2651,  2556,  1580,   210,     5,
     274,   113,  1585,     3,     4,     5,  1589,     4,  1591,  1592,
      15,  1594,  1595,  1596,  2670,  1598,     4,    22,  1601,  1602,
    1603,  1604,  1605,  1606,  1607,  1608,  1609,  1610,  1611,   235,
     236,  1614,  1615,  1616,  1617,  2052,    65,     4,     4,   364,
       4,  1624,  1625,    11,   250,  1628,  1629,  1630,  1307,  1308,
       5,  1634,  1635,    11,     4,   108,   183,  2534,     4,     4,
    2537,  2575,  2539,     4,  1647,  1648,     4,  1650,  1651,     3,
       4,     5,     6,     7,     5,  2552,  2553,  2094,   131,   132,
       3,     4,     5,     6,     7,     5,   174,   140,     5,   295,
       3,     4,  2569,     4,   165,     8,     9,    10,  2754,  2755,
     165,  2757,     4,  2759,  2760,     5,  2762,     4,    37,   162,
      37,   274,   239,   274,   303,  1698,  1699,  1700,   245,   172,
    1703,     5,     4,     4,     4,  1708,  1709,     5,  1711,  1712,
    1713,     5,  1715,  1716,     5,  1718,   263,  1720,  1721,     5,
    1723,  1724,  1725,  1726,     4,     4,   287,   274,     5,     5,
       5,  1734,     3,     4,     5,     6,     7,  1708,   287,  1742,
    2816,    62,     5,     5,  1747,  1748,     4,     4,   107,     5,
    1753,     5,     5,     5,  1042,   302,   303,     5,     5,  1762,
       4,     4,   251,     5,     5,     4,   143,     5,     5,   107,
      39,   251,   107,     5,   251,   251,   323,   251,    39,   251,
     224,   224,     5,     4,   224,     5,  2862,   258,   258,   224,
       4,     4,  1795,     5,     5,     5,     5,     5,   119,     4,
     113,   113,   123,     4,    11,     5,  1777,     5,     5,     4,
       4,  1490,     5,  1816,  1817,  1786,     5,     5,  1821,  1790,
       5,   368,     4,     4,  1827,     5,     5,     5,     5,     4,
     255,     4,     4,   258,     5,    11,     4,     4,     4,     0,
       5,  1520,     4,   177,   165,  1524,  2826,     5,   251,   251,
     251,   251,   251,   143,   251,     4,   262,   220,   208,     4,
       4,     4,     4,     4,   287,  2302,  2303,     5,  2305,  2306,
       5,  1550,  2309,  2310,     5,     5,     5,     5,     4,     4,
       4,  1560,     5,   204,     4,     4,   325,     5,     5,     5,
    1569,  1570,     4,   325,   251,   251,   251,     4,     4,     4,
       4,     4,  1581,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,  1934,  1935,  2370,  1937,   256,   325,     4,     4,   260,
     325,     5,     5,     4,   237,   237,   287,     5,   237,   237,
     237,     4,  1955,  1956,  1957,  1958,  1959,  1960,  1961,  1962,
    1963,     5,     4,   287,     5,   286,     5,     4,   289,     5,
       5,     4,     4,    35,     4,  1978,     5,  1980,     5,   300,
       4,     4,   287,     5,     5,     4,     4,   310,     5,     5,
       5,     4,     4,  1996,  1997,     4,   369,     5,     5,  2002,
    2710,     5,     5,     5,     4,    11,     5,     5,  2011,  2012,
    2013,  2014,  2015,  2016,  2017,  2018,  2019,  2020,     5,     5,
    2023,  2024,  2025,  2026,  2027,  2028,  2029,  2030,  2031,  2032,
    2033,  2034,     4,  2036,    93,  2038,  2039,  2040,     4,   369,
       5,     4,   101,     5,     5,     5,     4,   370,   107,  2052,
    2053,     4,   301,     5,     5,     5,   118,     5,     4,     4,
     369,     5,     5,     5,     5,   124,     4,     4,  2850,     5,
       5,   130,     5,     5,     4,     4,   301,     5,     5,     5,
       5,     4,  2792,  2086,     4,  2088,  2523,  2090,     5,  2092,
    2527,  2094,  2095,     4,  2097,     4,   155,     4,     4,  2102,
    2103,     5,  2105,  2106,  2107,  2108,     5,   166,     5,     5,
       5,  2114,     4,  2116,     4,   321,     5,  2120,     4,     4,
    2123,     5,     5,     4,   369,     4,  2563,   189,     5,   191,
     192,     5,   194,   195,     4,     4,   369,     5,     5,     4,
     369,     5,     5,     5,     5,    18,     5,     5,   207,  1437,
       4,   369,     5,     4,     4,  2126,   215,     5,     5,     5,
       4,  1449,     4,   225,  2167,     5,     5,    40,     5,     5,
      43,     4,     4,   369,     5,     5,     5,     5,     4,  1467,
    1468,     4,   244,   245,     5,     4,     4,    67,   250,     4,
       4,     4,   254,     4,  2165,     4,     4,     4,     4,     4,
       4,    81,     4,   262,     4,    78,     4,   530,     5,     5,
      90,     4,    85,  2265,   537,     4,   275,   540,     4,   369,
       5,   101,   545,    96,    97,     4,   549,     5,     4,     4,
     103,     5,   291,     5,   296,     5,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,   308,     5,     5,     5,
       4,   455,     5,   133,     4,   128,     5,     5,     4,     4,
       4,     4,     4,     4,     4,     4,   328,     5,  2271,  1948,
       4,     4,   406,     5,   147,   155,     4,     4,     4,  2282,
    2283,  2284,  2285,  2286,  2287,  2288,  2289,  2290,  2291,  2292,
       4,   164,   165,     5,     5,  2298,  2804,  2805,   171,  2302,
    2303,   624,  2305,  2306,  1983,     4,  2309,  2310,  2311,  2312,
    2313,  2314,  2315,  2316,     4,  2318,  2319,  2320,     4,     4,
       4,   194,     4,     4,  2725,     5,     4,   207,     5,     5,
       4,  2334,  2335,  2336,  2337,     4,  2339,  2340,  2341,  2342,
    2343,  2344,     5,  2346,     5,     5,  2349,  2350,     4,  2708,
       5,     5,     5,     4,     4,  2328,     5,  2543,     5,     5,
     233,  2792,  2788,    -1,  2367,    -1,   246,  2370,  2371,   798,
      -1,    -1,  2375,    -1,    -1,    -1,    -1,  2380,  2381,  2382,
      -1,    -1,    -1,    -1,    -1,   447,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   275,   458,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   467,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   288,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   299,  2430,    -1,    -1,
      -1,    -1,    -1,   756,    -1,   315,    -1,   317,    -1,    -1,
     763,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   328,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   535,   536,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   548,    -1,    -1,    -1,
      -1,   553,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2502,
     562,    -1,    -1,  2506,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2516,  2517,    -1,    -1,    -1,    -1,  2522,
    2523,    -1,    -1,  2526,  2527,    -1,    -1,    -1,    -1,  2532,
      -1,    -1,  2535,  2536,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2554,  2555,    -1,  2557,  2558,  2559,  2560,  2561,    -1,
    2563,  2564,  1850,    -1,    -1,  2568,    -1,   890,    -1,    -1,
    1858,  1859,  1030,    -1,   897,    -1,    -1,    -1,  2581,    -1,
     642,   643,   644,   645,    -1,  1873,  1874,  2590,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,  1884,  1885,    -1,    -1,
      -1,    -1,    67,    -1,  1062,  2608,    -1,  1895,  1896,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1905,  1906,   942,
     943,    -1,    -1,  1911,   947,    -1,    -1,   950,    93,    94,
      -1,    -1,    -1,  1921,    -1,    -1,   101,    -1,    -1,   962,
      -1,    -1,   107,    -1,    -1,    -1,    -1,  2650,    -1,    -1,
      -1,    -1,  2655,    -1,  2657,   717,    -1,    -1,    -1,   124,
    2663,    -1,    -1,    -1,    -1,   130,    -1,    -1,   133,    -1,
      -1,    -1,    -1,  2676,    -1,  2354,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     155,    -1,  2695,    -1,    -1,    -1,  2699,    -1,    -1,    -1,
    2752,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,
      -1,    -1,  2725,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   207,    -1,    -1,    -1,    -1,  1070,    -1,    -1,
     215,    39,    -1,  2756,    -1,    -1,    -1,    -1,  2761,    -1,
    2763,    -1,    -1,    -1,    -1,    -1,    -1,  2770,    -1,    57,
      -1,    -1,  2775,    -1,    -1,    -1,    -1,  2780,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,
      -1,  2804,  2805,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     275,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   291,  2830,    -1,   891,
    2833,    -1,    -1,  2836,   122,    -1,   301,    -1,   303,    -1,
      -1,   903,    -1,  2846,  2847,  2848,  2849,    -1,    -1,    -1,
    2821,    -1,    -1,    -1,    -1,  2858,    -1,    -1,  2861,    -1,
      -1,    -1,    -1,    -1,    -1,  2868,    -1,  2870,    -1,    -1,
      -1,  2550,    -1,    -1,    -1,    -1,    -1,   165,   940,    -1,
      -1,  2852,    -1,    -1,  2855,    -1,    -1,    -1,    -1,    -1,
    2178,  2570,   357,    -1,    -1,  2574,    -1,    -1,    -1,    -1,
    2188,    -1,    -1,    -1,  2192,  2193,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2201,  2202,    -1,    -1,    -1,   206,    -1,
      -1,    -1,  2210,  2211,    -1,    -1,   214,    -1,  2216,    -1,
      -1,    -1,    -1,    -1,   222,   223,    -1,    -1,  2226,  2227,
     228,    -1,    -1,    -1,    -1,   233,    -1,    -1,    -1,  2237,
    2238,  1274,    -1,    -1,    -1,    -1,    -1,    -1,  1020,    -1,
    2248,    -1,    -1,  1421,  1422,  1423,    -1,    -1,    -1,  2257,
      -1,  2259,    -1,  1431,  1432,  1433,    -1,    -1,    -1,    -1,
    1438,  1439,  1440,    -1,    -1,  1443,  1444,  1310,  1446,  1447,
      -1,    -1,  1315,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1325,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     4,     5,    -1,    -1,    -1,  1476,  1477,
      -1,    -1,  1480,  1481,   312,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1095,    -1,  2714,    -1,    -1,    -1,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,    -1,    -1,
      61,    -1,    -1,   361,    -1,    -1,    67,    -1,   366,   367,
      -1,    -1,    -1,    74,    -1,    76,    -1,    -1,  1150,    -1,
      81,    -1,    -1,    84,    -1,    -1,    -1,    -1,  1160,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   133,    -1,    -1,    -1,  2434,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2444,    -1,    -1,    -1,
      -1,    -1,    -1,  2842,   155,  2453,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2462,    -1,    -1,    -1,    -1,    -1,
      -1,  2469,   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2480,    -1,   185,   186,     3,     4,  2486,    -1,
      -1,  2489,    -1,    -1,  2492,    -1,    -1,    -1,  1270,    -1,
      -1,    18,    -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1288,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1559,    -1,    -1,   230,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,
      57,    -1,    -1,   244,  1316,   246,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    -1,  1326,    -1,    -1,    -1,    -1,    -1,
      -1,   262,    -1,    -1,    -1,    -1,    -1,   268,    -1,    -1,
      38,  1343,    -1,    -1,   275,    -1,    -1,    -1,    -1,    -1,
      -1,   282,    -1,  1355,    -1,    -1,   103,  1620,  1360,    57,
      -1,    -1,    -1,  1626,    -1,    -1,    -1,    -1,    -1,    -1,
     301,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   314,   315,    -1,   317,    -1,  2616,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2625,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   103,  2634,    -1,    -1,    -1,
      -1,    -1,  2640,    -1,    -1,    -1,  2644,    -1,   165,  2647,
      -1,    -1,    -1,    -1,    -1,    -1,   357,    -1,    -1,    -1,
      -1,    -1,    -1,  1831,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1705,    -1,    -1,    -1,  1844,  1710,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1854,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1739,    -1,    -1,    -1,
      -1,   228,  1745,    -1,    -1,    -1,   233,    -1,    -1,    -1,
      -1,    -1,  1494,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,  1772,
      -1,    -1,    -1,    -1,    -1,    -1,  1779,    -1,    -1,    -1,
      -1,  1523,    -1,    -1,    -1,    -1,    -1,    -1,  1926,    -1,
     228,    -1,    -1,    -1,    -1,   233,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,    -1,  1551,
      -1,    -1,  1554,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1563,  1564,    -1,    -1,    -1,    -1,    -1,    -1,  1571,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1579,    -1,    -1,
      -1,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,    -1,
      -1,   309,    -1,    -1,    -1,    -1,    -1,  1619,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1631,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,    -1,    -1,
      -1,    -1,     3,     4,    -1,    -1,    -1,    -1,  1931,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1951,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1708,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1984,  1985,    -1,    -1,    -1,    -1,    -1,  1730,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2000,  2001,    -1,
      -1,    -1,  2005,  2006,  1746,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1759,    -1,  1761,
      -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,  1771,
      -1,    -1,  1774,  1775,  1776,  1777,  1778,    -1,  1780,  2177,
      -1,  1783,  2045,    -1,  1786,  1787,  1788,  1789,  1790,  1791,
      -1,  1793,  1794,  2056,    -1,    -1,  1798,  1799,  1800,    -1,
      -1,  1803,  1804,    -1,    -1,    -1,    -1,  1809,  1810,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2217,
    2218,  2219,  2220,  2221,   165,  2223,  2224,    -1,  2091,    -1,
    2228,  2229,  2230,  2231,  2232,    -1,  2234,  2235,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2110,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
    2133,    -1,    -1,    -1,    -1,  2138,    -1,    -1,    -1,    -1,
      -1,  2144,    -1,    -1,    -1,    -1,  2149,    -1,    -1,    -1,
    2153,    -1,   233,  2156,    -1,    -1,  2159,    -1,  2161,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1933,    -1,    -1,  1936,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1947,    -1,    -1,  1950,    -1,
      -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1979,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   165,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2034,    -1,    -1,  2433,    -1,    -1,  2436,  2437,
    2438,  2439,  2440,    -1,  2442,  2443,    -1,  2445,  2446,  2447,
    2448,  2449,    -1,  2451,  2452,  2057,  2454,  2455,  2456,  2457,
    2458,    -1,  2460,  2461,    -1,  2463,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2473,  2474,    -1,   228,    -1,
      -1,    -1,  2345,   233,    -1,    -1,  2484,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2361,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,  2111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    -1,  2126,    -1,    -1,    -1,    -1,    -1,
      -1,  2394,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2165,  2427,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2619,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2628,    -1,  2495,    -1,    -1,    -1,    -1,    -1,  2501,  2637,
      -1,  2639,  2505,    -1,    -1,  2643,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2521,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2269,   165,    -1,
    2272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2280,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2296,    -1,    -1,  2299,    -1,    -1,
      -1,    -1,  2304,    -1,    -1,  2307,  2308,    -1,    -1,  2572,
    2573,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,    -1,
      -1,    -1,    -1,  2741,    -1,  2743,    -1,  2745,    -1,    -1,
    2748,    -1,  2750,  2355,  2356,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2399,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2681,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    -1,    -1,    70,   103,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,
      -1,    -1,    -1,    -1,    -1,  2497,    93,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2784,    -1,    -1,    -1,    -1,    -1,    -1,  2530,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,  2541,
      -1,    -1,    -1,    -1,    -1,  2808,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   184,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2853,    -1,    -1,  2595,    -1,    -1,    -1,  2599,    -1,    -1,
      -1,   198,    -1,    -1,   233,    -1,    -1,    -1,    -1,    -1,
    2873,    -1,    -1,  2876,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   220,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,  2653,  2654,    -1,  2656,    -1,    -1,    -1,    -1,  2661,
    2662,    -1,    -1,    -1,  2666,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   288,    -1,    -1,    -1,    -1,    -1,    -1,  2700,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,    -1,    -1,   103,
    2732,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,    -1,
     357,    -1,    -1,    -1,    19,    20,    21,    -1,    -1,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   165,    -1,    -1,    49,    50,    -1,    -1,    53,    49,
      50,    56,    18,    53,    -1,    -1,    -1,    -1,    63,    -1,
      60,    -1,    67,    63,    -1,    -1,    -1,    67,    -1,  2821,
      75,    76,    -1,    -1,    -1,    75,    76,    -1,    83,    84,
      -1,    -1,    -1,    83,    -1,    -1,  2838,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
    2852,    -1,   107,  2855,   228,    18,   111,   112,    -1,   233,
     115,   111,   112,    -1,    -1,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,    -1,
      -1,    -1,    -1,   133,    -1,    -1,    -1,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
     155,    -1,    -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,   183,    -1,
      -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,    -1,    -1,
     103,    -1,   192,    -1,    18,    -1,    -1,    -1,    -1,   165,
      -1,    -1,   207,    -1,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   237,    57,   239,    -1,    -1,   237,    -1,    -1,
     245,   246,    -1,    18,    -1,   245,   246,    -1,    -1,    -1,
      -1,    -1,   165,    -1,    -1,    -1,    -1,   262,   263,    -1,
      -1,    -1,   228,   263,    -1,    -1,    -1,   233,    -1,   274,
     275,    -1,    -1,    -1,    -1,   275,    -1,    -1,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   301,   165,   303,    -1,
      -1,   301,   170,   303,    -1,    -1,    -1,    -1,    -1,    -1,
     315,    -1,   317,   313,    -1,    -1,    -1,    -1,   323,    -1,
     233,    -1,    -1,   323,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   357,    -1,    -1,    -1,    -1,   357,    -1,    -1,
      -1,    -1,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     165,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,
      -1,    -1,    -1,    -1,    -1,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,    40,    -1,    -1,    43,    -1,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    65,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,   147,    -1,
      -1,   150,    -1,    -1,    -1,   154,   155,    -1,    -1,    -1,
     159,   160,    -1,    -1,    -1,   164,    -1,    -1,    -1,    -1,
      -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,
     189,   190,   191,    -1,    -1,   194,   195,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,   228,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   240,    -1,   242,    -1,    -1,    -1,    -1,    -1,    -1,
     249,    -1,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,
      -1,   260,    -1,   262,    -1,    -1,    -1,    -1,    -1,   268,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   282,    -1,    -1,    -1,    -1,    -1,   288,
      -1,    -1,    40,    -1,    -1,    43,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    -1,   304,   305,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,    66,   318,
      68,    69,    70,    -1,    -1,   324,    -1,    -1,   327,   328,
      78,    -1,    80,    -1,    -1,    -1,    -1,    85,    -1,    87,
      88,    89,    -1,    -1,    -1,    -1,    -1,    95,    -1,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   358,
      -1,    -1,    -1,    -1,    -1,    -1,   365,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,    -1,   157,
     158,   159,   160,    -1,    -1,    -1,   164,    -1,    -1,    -1,
     168,    -1,   170,   170,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   194,   195,    -1,    -1,
      -1,   199,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,
      -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   260,    -1,   262,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     288,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   304,   305,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   313,    -1,    -1,    -1,    -1,
      -1,    -1,   320,    -1,    -1,    -1,    -1,    -1,   326,    -1,
     328,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   365
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
     209,   372,    79,   183,   264,   372,   420,     5,   372,   372,
     372,     4,   159,   160,   260,   422,   372,   372,     5,   239,
     425,    30,   426,     5,   427,     5,   431,     5,    30,   432,
     372,     8,     9,    10,   372,   378,   379,   380,   381,   372,
     372,    39,   113,   206,   372,   434,   372,   206,   382,   384,
     372,    34,   108,   131,   132,   140,   162,   172,   389,   372,
       4,   374,   374,   374,   374,   374,   374,   374,   374,   374,
     374,   119,    67,    54,    72,    89,   102,   121,   125,   139,
     185,   443,   121,   445,   199,   205,   244,   272,   319,   363,
     364,   372,   428,   446,   301,   449,   178,   450,   178,   188,
     452,    66,    67,    70,    93,   178,   198,   220,   288,   357,
     382,   454,   372,   384,   457,    60,   305,   382,   458,   296,
     382,   384,   459,    32,   460,   382,   384,   461,     4,   382,
     384,   462,    44,    60,    82,   102,   119,   123,   152,   153,
     211,   221,   285,   286,   357,   466,   225,   321,   472,    67,
       5,    90,    62,   299,   322,   473,    62,   299,   322,   474,
       4,    89,   123,   464,     5,    66,   384,   463,    15,   536,
      45,    67,    82,   193,   252,   299,   308,   475,    67,   244,
     476,   300,    62,   299,   322,   477,    20,   139,   251,   283,
     478,    36,    48,    75,   155,   198,   269,   322,   479,   384,
      90,    15,   208,   484,   382,   487,    67,    73,   490,    30,
     491,    43,    88,   204,   492,   155,   230,   275,   314,   493,
     382,    17,    59,   117,   184,   305,   382,   494,     5,   400,
     161,   267,   320,   398,   382,     4,   161,   180,   267,   399,
     382,     4,     4,   205,   499,     5,     4,     4,   123,   372,
       4,     5,   260,   501,     5,   503,     5,   119,   204,   260,
     286,   504,    95,   113,   199,   517,     5,   515,     5,   286,
     516,     4,     5,   400,   374,   374,   372,   372,     5,     4,
       5,    61,    67,    74,    76,    81,    84,    90,   101,   107,
     116,   133,   155,   173,   185,   186,   207,   230,   244,   246,
     262,   268,   275,   282,   301,   314,   315,   317,   357,   521,
      92,   179,   273,   291,   386,     5,   400,     4,   209,   216,
     217,   252,   362,   385,   372,   382,   372,     5,   400,   372,
      39,   113,   372,   560,   374,   372,   382,   384,   559,   372,
     389,   372,     4,   383,    55,    91,   145,   260,   564,     4,
       4,   372,     4,   155,   275,   565,    47,   146,   253,   397,
     382,     4,    39,   113,   372,   572,   372,    99,    62,   123,
     260,   289,   574,   123,   587,    62,   119,   123,   165,   204,
     256,   260,   286,   289,   300,   576,   577,    62,   123,   289,
     586,     5,     4,    33,   109,   215,   569,    67,   374,   405,
      67,   374,   406,    67,   374,   407,    12,   201,   568,   372,
       4,   372,   237,   372,   408,   372,   286,     4,   372,   372,
       4,   238,   309,   596,     4,   303,   594,     4,   303,   595,
       4,   389,   127,   372,   599,   372,   372,     4,     5,   372,
      11,   372,   372,   372,    29,    96,   171,   264,   270,   388,
     388,     4,   209,   372,   372,     4,     4,     4,   372,   372,
     372,   372,   372,   372,   372,   372,     4,     4,     5,     5,
     382,     5,   372,   372,   378,   380,   380,   382,   372,   372,
     372,   372,   372,   372,   372,   382,   384,   381,   372,   372,
     381,   372,     5,   285,   105,   199,   444,   205,   264,   447,
     178,    79,   183,   264,   448,   143,   187,   429,   429,     4,
     451,     4,   453,   205,   272,   455,   188,   456,   178,   389,
     372,   372,   382,   382,   389,   389,   389,   382,   389,   372,
     382,     4,   469,     4,   384,   467,   208,     4,   174,   328,
     468,   208,   382,     4,   136,   309,   471,     5,     5,   441,
       4,   208,   138,   261,   375,   372,     4,     5,    61,    67,
     116,   133,   149,   155,   163,   220,   239,   244,   246,   274,
     275,   282,   301,   357,   530,   384,   200,   200,    67,   480,
      67,   481,    67,   482,   237,   483,   372,     5,   442,   238,
     485,   383,   389,     5,   382,   382,   382,   382,     4,     4,
       4,   374,     4,     4,   208,   372,    13,    14,    62,   202,
     203,   279,   289,   290,   321,    88,     5,     5,    13,    14,
      62,   202,   203,   279,   289,   290,   294,   321,    88,   165,
     170,   383,   507,   512,    88,   165,     5,   505,     4,     4,
      13,    62,   202,   279,   289,   321,     5,     5,     4,   372,
     383,    19,    20,    21,    49,    50,    53,    56,    63,    67,
      75,    76,    83,    84,   101,   107,   111,   112,   115,   133,
     155,   183,   207,   237,   239,   245,   246,   262,   263,   274,
     275,   301,   303,   315,   317,   323,   357,    67,    81,    90,
     101,   133,   155,   207,   246,   275,   315,   317,     4,    29,
     169,   225,   251,   524,     5,   400,    64,   106,   248,   265,
     266,   359,   360,   529,   101,   522,    16,   275,   527,    39,
     113,   206,   528,     4,     5,    16,   224,   310,   372,   275,
     529,   537,   128,   529,   538,    35,    39,   113,   137,   206,
     309,   372,   539,   382,   374,    93,   101,   107,   124,   130,
     155,   166,   207,   215,   262,   275,   291,   542,    39,   113,
     206,     5,   275,   302,   546,    16,   126,   176,   224,   310,
     547,   303,   374,   548,     5,   101,   107,   318,    16,    16,
       4,   372,   372,   372,   372,   372,   372,   389,   372,   372,
     381,   372,     4,   389,     4,    39,   113,   206,   280,   566,
      39,   113,   206,   280,   567,     4,    99,     5,     5,    88,
       4,     5,     5,    88,     5,   577,    62,   123,   165,   289,
     581,    62,   123,   289,   585,    88,   165,    62,   123,   289,
     579,     4,    62,   123,   289,   578,     5,     5,     4,     4,
       5,   400,     5,   400,     5,   400,   372,   372,   372,     4,
     372,   591,   372,   372,   383,    65,     4,     4,     5,     4,
       4,     5,     4,    99,   277,   390,   372,   372,    11,     5,
      11,   372,   372,    11,     4,    11,     4,     4,   372,   372,
     372,   372,   372,   372,   372,     4,   374,     4,     4,   389,
     382,   389,   372,   372,   372,   382,   372,   381,   372,   372,
       5,     5,   372,   384,   372,   382,   372,   389,   389,   390,
     390,   390,   389,   381,   372,   389,   372,   375,   470,   174,
       5,     4,   389,   165,   165,     4,     5,     4,     4,   372,
     465,    37,    37,   372,    19,    20,    21,    49,    50,    53,
      60,    63,    67,    75,    76,    83,   111,   112,   115,   133,
     155,   183,   192,   237,   245,   246,   263,   275,   301,   303,
     313,   323,   357,    67,   133,   163,   246,   301,    29,   169,
     225,   251,   531,   372,   220,   372,   532,    16,   372,   274,
     542,   274,   220,   372,   533,   303,   534,    16,   100,   372,
     372,     5,   390,     4,     4,    57,   382,     4,     5,   498,
     372,     5,     5,     5,   165,   195,   394,   394,   173,   281,
     392,     4,     4,     5,     5,   502,   287,   287,     5,     5,
       5,    16,   167,   393,   393,   392,     4,     4,   392,     5,
       5,   506,   170,   356,   383,   510,     5,   509,     5,     5,
     513,     5,   514,     5,    13,    14,    62,   202,   203,   279,
     289,   290,   294,   321,     4,     4,     5,     5,   394,   392,
       4,     5,     5,   389,    83,   157,   235,   236,   250,   295,
     401,     6,     7,   372,   377,   251,   251,   251,   107,    39,
      67,   101,   107,   113,   133,   155,   173,   207,   246,   262,
     275,   303,   315,   317,   318,   357,   523,   251,     5,   400,
      26,   175,   251,   299,   143,   107,    21,    50,    53,    83,
     112,   115,   239,   274,    21,    50,    53,    56,    83,   112,
     115,   239,   274,   301,    39,   251,   251,   107,     5,   224,
      26,   237,    35,   137,   309,   372,   278,   285,   258,   382,
     542,    39,   134,   237,   299,   258,   224,     5,     5,   262,
      26,   237,     4,     5,   400,     5,   224,    35,   137,   309,
     372,   542,   224,   374,     4,     4,   372,     5,   321,    21,
      26,    49,    50,    52,    53,    63,    75,    76,    83,    86,
     104,   111,   112,   115,   183,   239,   245,   263,   274,   302,
     303,   323,   368,   525,   372,   372,   372,   372,   372,   529,
     382,     5,     4,     5,   372,   372,   382,   372,   374,   372,
     372,   529,     5,     5,   372,   372,   374,     5,    16,     5,
       5,   372,   372,   381,   372,   372,     4,   372,   372,   113,
     372,   372,   113,     4,    41,    42,   181,   182,   210,   403,
     403,    62,   123,   289,   575,   403,     5,    62,   123,   289,
     580,     5,     5,    62,   123,   289,   582,     4,     5,     5,
       4,    62,   123,   289,   584,    62,   123,   289,   583,     5,
       5,     4,     5,     5,     4,   403,   403,   403,   372,   372,
     372,     4,   382,   372,   389,   383,     5,     5,    11,   372,
     382,   384,   372,    11,   372,   372,   372,    60,   372,     4,
     372,   372,     4,   372,   372,   372,   372,    46,   288,   430,
       5,   374,   374,   389,   372,     4,     4,     4,   389,   382,
     372,   372,   372,   372,   389,   382,   390,   381,   372,     4,
     390,   372,     4,   384,     5,    23,    24,    99,   391,     4,
     382,   372,   372,     4,   372,     5,    83,   157,   235,   236,
     250,   295,   382,   384,   251,   251,   251,    20,   251,   382,
     251,    26,   175,   251,   299,   143,    20,   251,   251,   251,
      20,   251,    26,   177,   237,   177,   278,   285,   177,   237,
     307,   542,   134,   177,   237,   299,     4,   262,    26,   177,
     237,   542,   220,   372,   372,   372,   372,   372,   372,   208,
     372,   372,    19,   247,   488,     4,     4,   372,   394,   394,
     394,     4,   394,   394,   394,    13,    14,    62,   202,   203,
     279,   289,   290,   321,   393,   394,   394,   394,   394,   394,
       4,   394,   394,     4,   393,    13,    14,    62,   202,   203,
     279,   289,   290,   321,     5,   508,     5,   511,     5,     5,
      13,    14,    62,   202,   203,   279,   289,   290,   294,   321,
       5,    13,    14,    62,   202,   203,   279,   289,   290,   294,
     321,     5,    13,    14,    62,   202,   203,   279,   289,   290,
     294,   321,    13,    14,    62,   202,   203,   279,   289,   290,
     321,   287,     5,     5,     5,   393,   393,   392,     4,     4,
     392,     5,     4,     4,   394,   394,     4,   394,   394,     5,
     374,   382,   384,     5,   372,   372,     5,   372,     5,   377,
     107,   207,   262,   107,   207,   262,     5,   372,   374,     5,
     372,   382,   374,     5,   377,   251,   251,    20,   251,    20,
     251,   251,    20,   251,   325,   325,     4,     4,     4,   523,
       4,     4,     4,   325,   325,     4,     5,     4,   372,     5,
     372,     5,   377,   374,   382,   382,   372,    26,    49,    52,
      63,    86,   104,   368,   395,     4,   372,   389,   374,     5,
     382,   382,   372,   374,   374,   382,   382,   372,   374,   372,
       5,   372,   237,   237,   372,   372,   237,   372,   237,   372,
     372,   535,   543,   372,   237,   237,   372,   372,   372,   372,
     372,   372,   372,   372,     5,   321,   372,   526,   372,   372,
     237,   372,   372,   372,   372,   382,   389,     5,     4,     4,
     372,   372,   389,   372,   372,   372,   382,   529,   372,   372,
       5,     4,   372,   372,   372,   372,     5,     5,     4,   403,
       5,     5,     4,     4,     4,     5,     5,     4,     4,     5,
       5,     4,     5,     5,     4,   372,   372,   372,   372,   389,
     372,   382,   384,   372,   389,   372,   372,   372,   372,   372,
       5,   372,   372,   372,     4,   372,   372,   372,   372,     4,
     382,   372,   389,   188,   387,   372,   387,   390,   389,   382,
     372,   372,     4,   372,   382,   382,   372,   375,     5,     5,
       5,     5,     5,   382,   389,   382,   382,   382,   382,   384,
     382,   389,   382,   382,   382,   384,   382,   382,   382,   382,
     384,   382,   382,   382,   372,   382,   382,   382,   382,   382,
     382,   382,   372,   372,     4,   372,     5,   372,   394,     5,
       5,     5,   392,     4,     4,     5,   394,   393,     4,   394,
       5,     5,     5,   393,   393,   392,     4,     4,     5,    13,
      14,    62,   202,   203,   279,   289,   290,   321,    13,    14,
      62,   202,   203,   279,   289,   290,   321,    13,    14,    62,
     202,   203,   279,   289,   290,   321,   287,     5,     5,     5,
     393,   393,   392,     4,     4,   392,     5,   287,     5,     5,
       5,   393,   393,   392,     4,     4,   392,     5,   287,     5,
       5,     5,   393,   393,   392,     4,     4,   392,     5,     5,
       5,     5,   393,   393,   392,     4,     4,     5,   393,     4,
       4,   393,     4,     4,   394,     5,   389,   382,   372,   372,
     382,   372,     5,   377,     5,   382,   374,     5,   382,   389,
       5,   377,   372,   372,   372,   372,   372,   372,   372,   372,
     372,     4,     4,     5,     4,     4,   372,   382,   372,     5,
     377,   374,   389,   389,   372,   381,   389,   389,   372,   389,
     389,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,    56,    67,    94,   133,   301,   303,   357,   540,   541,
     542,   554,   555,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   382,     5,   372,   372,   372,
     372,     4,     4,   389,   390,     5,     5,   381,   372,     4,
     389,   382,     4,   403,   403,   403,   377,   372,   372,   372,
     389,   372,   381,   372,   372,    11,     5,     5,   372,   372,
     372,   372,   372,   372,     4,   389,   382,   372,   372,   390,
     391,   372,     5,   372,   382,   384,     5,     5,     5,     5,
       5,   389,   391,   391,   391,   389,   391,   390,   391,   391,
     389,   391,   391,   391,   389,   391,   391,   389,   382,   391,
     389,   391,   391,   389,   391,   389,     4,   382,   384,     5,
     372,     4,   394,   393,     4,   393,     5,     5,     5,   393,
     393,   392,     4,     4,     5,     5,     5,     5,   393,   393,
     392,     4,     4,     5,     5,     5,     5,   393,   393,   392,
       4,     4,     5,   393,   394,   394,   394,   394,   394,     4,
     394,   394,     4,   393,   393,   394,   394,   394,   394,   394,
       4,   394,   394,     4,   393,   393,     4,     4,   393,     4,
     393,   393,     4,     4,     4,   383,   391,     4,   382,   391,
     372,   382,     4,   391,   391,   382,     4,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   382,   391,
     372,   382,     4,   381,   381,   382,   381,   381,   382,   382,
     381,   381,   372,   372,   372,   372,   372,   372,   377,   372,
     372,   372,   369,   369,   369,   369,   369,   369,   369,   541,
     369,   377,   372,   372,   372,   372,   377,   372,   372,   372,
     372,   372,   372,   389,   372,   321,   376,   377,   372,   372,
     390,   374,   382,   382,   390,   389,     4,   372,   381,   372,
      60,   372,     5,     5,     4,     4,   372,   372,   372,     4,
     387,   391,     5,   389,     4,     5,     4,     5,   382,     5,
     390,   391,   390,   390,   390,     5,   389,     4,   372,   394,
     393,   394,   394,   394,   394,   394,     4,   394,   394,   393,
     394,   394,   394,   394,   394,     4,   394,   394,   393,   394,
     394,   394,   394,   394,     4,   394,   394,   393,   394,   393,
       4,   394,   394,   393,     4,   394,   393,     4,   393,   393,
     389,   382,   391,     4,   389,   372,   389,   372,   372,   372,
     391,     4,   389,   372,   381,   391,   372,   381,   391,   391,
     382,   372,     4,   396,   396,   372,   372,   396,   377,   396,
     543,   382,   523,     5,   400,     4,     5,     5,     5,     4,
     374,   377,   396,   396,   372,   372,   377,   372,   372,   372,
     372,   372,   381,   372,     5,   543,   372,   396,   374,   544,
     545,   389,   389,   374,   390,     4,     5,   372,     5,     4,
       4,     4,     4,     4,     4,   372,     4,    31,   196,   297,
     437,   382,     5,    31,   196,   297,   402,   382,     4,   437,
     372,   393,   394,   393,   394,   393,   394,   394,   393,   394,
     393,   393,   372,   391,   382,   382,   372,   382,   372,   382,
     382,   372,   382,   391,     4,   543,   543,   376,   372,   543,
       4,   543,   389,     5,     4,     4,   543,   543,   376,   372,
       4,   543,   543,   372,   382,   543,   543,   543,   544,   551,
     552,   542,   549,   550,   374,     4,     5,     5,     4,     4,
       4,   199,   319,   364,   372,   428,   437,     4,   382,   437,
       4,   394,   394,   394,   394,   394,   383,   391,   391,   372,
     391,     4,   391,   391,   372,   391,   372,   543,   543,     4,
     372,   543,     5,   372,   543,     4,   372,   543,   389,   551,
     553,   554,   369,   550,     5,     5,   372,   429,   372,   429,
     389,   391,     4,   382,   384,     4,   377,   376,   372,   372,
     376,   372,   382,   554,   374,     5,     5,   372,   372,   372,
     372,   402,     5,   382,   384,   389,   382,   384,   543,   372,
       4,   543,   372,   391,     5,     5,   372,     5,   372,   389,
     389,     4,   543,     4,     5,     5,     5,   376,   376,   543,
     543,   543
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

  case 18:
#line 496 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 24:
#line 502 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 25:
#line 503 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 26:
#line 504 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 27:
#line 505 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 31:
#line 509 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 38:
#line 516 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 39:
#line 517 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 43:
#line 521 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 46:
#line 524 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 51:
#line 529 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 53:
#line 531 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 55:
#line 533 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 57:
#line 535 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 62:
#line 542 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 63:
#line 543 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 64:
#line 546 "frame/parser.Y"
    {yydebug=(yyvsp[(1) - (1)].integer);;}
    break;

  case 65:
#line 547 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 548 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 549 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 550 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 551 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 552 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 553 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 72:
#line 554 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 73:
#line 555 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 74:
#line 556 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 75:
#line 559 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 76:
#line 561 "frame/parser.Y"
    {(yyval.integer)=1;;}
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
#line 566 "frame/parser.Y"
    {(yyval.integer)=0;;}
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
#line 572 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 85:
#line 573 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 86:
#line 574 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 87:
#line 575 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 88:
#line 576 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 89:
#line 579 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 90:
#line 580 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 91:
#line 583 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 92:
#line 584 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 93:
#line 585 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 94:
#line 588 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 95:
#line 591 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 96:
#line 594 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 97:
#line 598 "frame/parser.Y"
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

  case 98:
#line 610 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 99:
#line 617 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 100:
#line 624 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 101:
#line 631 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 102:
#line 632 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 103:
#line 633 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 104:
#line 634 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 105:
#line 635 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 106:
#line 638 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 107:
#line 639 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 108:
#line 640 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 109:
#line 641 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 110:
#line 642 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 111:
#line 643 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 112:
#line 644 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 113:
#line 645 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 114:
#line 646 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 115:
#line 647 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 116:
#line 648 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 117:
#line 649 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 118:
#line 650 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 119:
#line 651 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 120:
#line 652 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 121:
#line 653 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 122:
#line 654 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 123:
#line 655 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 124:
#line 656 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 125:
#line 657 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 126:
#line 658 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 127:
#line 659 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 128:
#line 660 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 129:
#line 661 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 130:
#line 662 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 131:
#line 663 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 132:
#line 664 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 133:
#line 665 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 134:
#line 668 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 135:
#line 669 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 136:
#line 672 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 137:
#line 673 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 138:
#line 674 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 139:
#line 675 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 140:
#line 676 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 141:
#line 677 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 142:
#line 680 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 143:
#line 681 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 144:
#line 682 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 145:
#line 683 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 146:
#line 684 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 147:
#line 687 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 148:
#line 688 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 149:
#line 689 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 150:
#line 690 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 151:
#line 691 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 152:
#line 692 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 153:
#line 693 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 154:
#line 694 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 155:
#line 697 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 156:
#line 698 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 157:
#line 699 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 158:
#line 700 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 159:
#line 701 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 160:
#line 704 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 161:
#line 705 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 162:
#line 706 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 163:
#line 707 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 164:
#line 708 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 165:
#line 709 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 166:
#line 710 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 167:
#line 711 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 168:
#line 714 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 169:
#line 715 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 170:
#line 716 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 171:
#line 719 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 172:
#line 720 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 173:
#line 721 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 174:
#line 722 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 175:
#line 725 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 176:
#line 726 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 177:
#line 727 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 178:
#line 730 "frame/parser.Y"
    {;}
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
#line 735 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 182:
#line 736 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 183:
#line 737 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 184:
#line 740 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 185:
#line 741 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 186:
#line 742 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 187:
#line 743 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 188:
#line 744 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 189:
#line 745 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 190:
#line 746 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 191:
#line 747 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 192:
#line 750 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 193:
#line 751 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 194:
#line 754 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 195:
#line 755 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 196:
#line 756 "frame/parser.Y"
    {(yyval.integer)=2;;}
    break;

  case 197:
#line 759 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 198:
#line 760 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 199:
#line 761 "frame/parser.Y"
    {(yyval.integer)=2;;}
    break;

  case 200:
#line 764 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 201:
#line 765 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 202:
#line 766 "frame/parser.Y"
    {(yyval.integer)=2;;}
    break;

  case 203:
#line 769 "frame/parser.Y"
    {strcpy(yyval.str,"red");;}
    break;

  case 204:
#line 770 "frame/parser.Y"
    {strcpy(yyval.str,"green");;}
    break;

  case 205:
#line 771 "frame/parser.Y"
    {strcpy(yyval.str,"blue");;}
    break;

  case 206:
#line 772 "frame/parser.Y"
    {strcpy(yyval.str,"gray");;}
    break;

  case 207:
#line 775 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 208:
#line 776 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 209:
#line 777 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 210:
#line 778 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 211:
#line 779 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 212:
#line 780 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 213:
#line 783 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 214:
#line 784 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 215:
#line 785 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 216:
#line 786 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 217:
#line 789 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 218:
#line 790 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 219:
#line 791 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 220:
#line 792 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 221:
#line 793 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 222:
#line 794 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 227:
#line 801 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 228:
#line 802 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 229:
#line 803 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 230:
#line 804 "frame/parser.Y"
    {fr->set3dSyncCmd((yyvsp[(2) - (2)].integer));}
    break;

  case 231:
#line 806 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 232:
#line 809 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 233:
#line 810 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 234:
#line 811 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 235:
#line 814 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 236:
#line 815 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 237:
#line 816 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 238:
#line 819 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 239:
#line 820 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 240:
#line 821 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 241:
#line 824 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 242:
#line 826 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 244:
#line 830 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 245:
#line 831 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 248:
#line 834 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 250:
#line 836 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 251:
#line 839 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 252:
#line 840 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 253:
#line 843 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 254:
#line 844 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 255:
#line 846 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 256:
#line 848 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 257:
#line 849 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 258:
#line 850 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 259:
#line 852 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 260:
#line 854 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 261:
#line 857 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 262:
#line 858 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 263:
#line 861 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 264:
#line 863 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 265:
#line 866 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 266:
#line 868 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 267:
#line 871 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 268:
#line 875 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 269:
#line 876 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 271:
#line 880 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 272:
#line 881 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 273:
#line 882 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 277:
#line 888 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 278:
#line 889 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 280:
#line 892 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 281:
#line 897 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 282:
#line 898 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 283:
#line 901 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 284:
#line 902 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 285:
#line 903 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 286:
#line 904 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 287:
#line 905 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 288:
#line 908 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 289:
#line 909 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 290:
#line 910 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 291:
#line 911 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 292:
#line 914 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 293:
#line 916 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 294:
#line 921 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 295:
#line 926 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 296:
#line 933 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 297:
#line 935 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 298:
#line 937 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 299:
#line 939 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 300:
#line 940 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 302:
#line 942 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 303:
#line 946 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 304:
#line 948 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 305:
#line 950 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 306:
#line 952 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 307:
#line 954 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 308:
#line 955 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 314:
#line 966 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 315:
#line 968 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 316:
#line 970 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 317:
#line 975 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 318:
#line 979 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 319:
#line 982 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 320:
#line 983 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 321:
#line 986 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 322:
#line 987 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 323:
#line 989 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 324:
#line 995 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 325:
#line 996 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 326:
#line 997 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 327:
#line 998 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 328:
#line 1001 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 329:
#line 1002 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 330:
#line 1005 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 331:
#line 1006 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 332:
#line 1009 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 333:
#line 1010 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 334:
#line 1014 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 335:
#line 1016 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 336:
#line 1019 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 337:
#line 1021 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 338:
#line 1024 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 340:
#line 1026 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 341:
#line 1027 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 342:
#line 1028 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 343:
#line 1031 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 344:
#line 1033 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 345:
#line 1034 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 346:
#line 1035 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 347:
#line 1036 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 348:
#line 1040 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 349:
#line 1042 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 350:
#line 1043 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 351:
#line 1044 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 352:
#line 1047 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 353:
#line 1049 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 354:
#line 1051 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 355:
#line 1053 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 356:
#line 1056 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 357:
#line 1059 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 358:
#line 1060 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 359:
#line 1061 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 360:
#line 1062 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 361:
#line 1065 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 362:
#line 1066 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 363:
#line 1069 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 364:
#line 1072 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 365:
#line 1073 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 379:
#line 1087 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 382:
#line 1090 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 383:
#line 1091 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 389:
#line 1097 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 390:
#line 1098 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 393:
#line 1101 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 394:
#line 1102 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 396:
#line 1105 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 398:
#line 1107 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 400:
#line 1109 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 402:
#line 1111 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 403:
#line 1113 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 406:
#line 1116 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 407:
#line 1120 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 408:
#line 1122 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 409:
#line 1126 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 410:
#line 1128 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 411:
#line 1131 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 412:
#line 1132 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 413:
#line 1133 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 414:
#line 1134 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 415:
#line 1135 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 416:
#line 1136 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 418:
#line 1138 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 419:
#line 1141 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 420:
#line 1142 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 421:
#line 1143 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 422:
#line 1146 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 423:
#line 1149 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 424:
#line 1151 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 425:
#line 1153 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 426:
#line 1154 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 427:
#line 1155 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 429:
#line 1157 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 431:
#line 1160 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 432:
#line 1166 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 433:
#line 1167 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 434:
#line 1170 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 435:
#line 1171 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 436:
#line 1172 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 437:
#line 1175 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 438:
#line 1176 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 440:
#line 1182 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 441:
#line 1184 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 442:
#line 1186 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 443:
#line 1189 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 445:
#line 1191 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 446:
#line 1195 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 447:
#line 1199 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 449:
#line 1201 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 450:
#line 1202 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 451:
#line 1203 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 452:
#line 1204 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 453:
#line 1205 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 455:
#line 1207 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 456:
#line 1208 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 457:
#line 1211 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 458:
#line 1212 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 459:
#line 1213 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 460:
#line 1216 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 461:
#line 1217 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 462:
#line 1221 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 463:
#line 1223 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 464:
#line 1231 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 465:
#line 1233 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 466:
#line 1235 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 467:
#line 1238 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 468:
#line 1240 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 469:
#line 1241 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 470:
#line 1244 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 471:
#line 1247 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 472:
#line 1249 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 473:
#line 1253 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 474:
#line 1255 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 475:
#line 1258 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 476:
#line 1262 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 477:
#line 1263 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 478:
#line 1265 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 479:
#line 1268 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 480:
#line 1269 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 482:
#line 1273 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 483:
#line 1274 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 484:
#line 1275 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 485:
#line 1278 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 486:
#line 1280 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 487:
#line 1281 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 489:
#line 1283 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 493:
#line 1287 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 494:
#line 1288 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 495:
#line 1289 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 496:
#line 1291 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 498:
#line 1293 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 499:
#line 1296 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 500:
#line 1298 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 501:
#line 1300 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 502:
#line 1301 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 503:
#line 1302 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 504:
#line 1303 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 505:
#line 1306 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 506:
#line 1307 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 507:
#line 1311 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 508:
#line 1313 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 509:
#line 1316 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 510:
#line 1319 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 511:
#line 1320 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 512:
#line 1322 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 513:
#line 1324 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 514:
#line 1326 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 515:
#line 1329 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 516:
#line 1330 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 517:
#line 1331 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 518:
#line 1334 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 519:
#line 1335 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 520:
#line 1336 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 521:
#line 1339 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 522:
#line 1340 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 523:
#line 1341 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 524:
#line 1344 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 525:
#line 1345 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 526:
#line 1346 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 527:
#line 1347 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 528:
#line 1348 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 529:
#line 1349 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 530:
#line 1350 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 531:
#line 1353 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 532:
#line 1356 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 533:
#line 1357 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 534:
#line 1358 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 535:
#line 1361 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 536:
#line 1362 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 537:
#line 1363 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 538:
#line 1364 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 539:
#line 1365 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 540:
#line 1366 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 545:
#line 1373 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 546:
#line 1374 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 547:
#line 1375 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 548:
#line 1378 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 549:
#line 1379 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 550:
#line 1382 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 551:
#line 1383 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 552:
#line 1386 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 553:
#line 1387 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 554:
#line 1390 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 555:
#line 1391 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 556:
#line 1394 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 558:
#line 1396 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 559:
#line 1399 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 560:
#line 1400 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 562:
#line 1404 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 563:
#line 1408 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 564:
#line 1411 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 565:
#line 1418 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 566:
#line 1419 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 567:
#line 1422 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 568:
#line 1423 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 571:
#line 1426 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 572:
#line 1427 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 573:
#line 1428 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 574:
#line 1429 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 576:
#line 1431 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 577:
#line 1432 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 578:
#line 1433 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 580:
#line 1435 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 581:
#line 1436 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 582:
#line 1437 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 583:
#line 1438 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 585:
#line 1442 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 586:
#line 1445 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 587:
#line 1446 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 588:
#line 1449 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 589:
#line 1450 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 590:
#line 1451 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 591:
#line 1452 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 592:
#line 1455 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 593:
#line 1456 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 594:
#line 1457 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 595:
#line 1458 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 596:
#line 1461 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 597:
#line 1462 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 598:
#line 1463 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 599:
#line 1464 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 600:
#line 1465 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 601:
#line 1466 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 602:
#line 1469 "frame/parser.Y"
    {fr->setChannelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 603:
#line 1470 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 604:
#line 1471 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 605:
#line 1474 "frame/parser.Y"
    {fr->setChannelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 606:
#line 1475 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 607:
#line 1476 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 608:
#line 1479 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 609:
#line 1480 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 610:
#line 1481 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 613:
#line 1485 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 614:
#line 1486 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 615:
#line 1489 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 616:
#line 1492 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 617:
#line 1493 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 618:
#line 1497 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 619:
#line 1499 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 620:
#line 1500 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 627:
#line 1512 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 628:
#line 1514 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 629:
#line 1516 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 630:
#line 1517 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 631:
#line 1519 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 632:
#line 1521 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 633:
#line 1523 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 634:
#line 1525 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 635:
#line 1527 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 637:
#line 1531 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 638:
#line 1532 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 639:
#line 1533 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 640:
#line 1534 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 641:
#line 1535 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 642:
#line 1537 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 643:
#line 1538 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 644:
#line 1539 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 645:
#line 1540 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 646:
#line 1543 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 647:
#line 1547 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 648:
#line 1549 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 649:
#line 1551 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 650:
#line 1553 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 651:
#line 1555 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 652:
#line 1557 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 653:
#line 1559 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 654:
#line 1561 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 655:
#line 1564 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 656:
#line 1566 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 657:
#line 1568 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 663:
#line 1576 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 664:
#line 1577 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 665:
#line 1578 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 666:
#line 1579 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 667:
#line 1580 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 668:
#line 1581 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 669:
#line 1583 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 670:
#line 1585 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 671:
#line 1586 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 672:
#line 1587 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 673:
#line 1588 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 674:
#line 1591 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 675:
#line 1592 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 676:
#line 1593 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 677:
#line 1594 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 678:
#line 1595 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 679:
#line 1597 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 680:
#line 1598 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 681:
#line 1599 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 682:
#line 1600 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 688:
#line 1611 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 689:
#line 1614 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 690:
#line 1617 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 691:
#line 1620 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 692:
#line 1623 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 693:
#line 1626 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 694:
#line 1629 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 695:
#line 1632 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 696:
#line 1635 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 697:
#line 1640 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 698:
#line 1643 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 699:
#line 1646 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 700:
#line 1649 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 701:
#line 1652 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 702:
#line 1655 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 703:
#line 1658 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 704:
#line 1661 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 705:
#line 1664 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 706:
#line 1667 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 707:
#line 1670 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 708:
#line 1675 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 709:
#line 1678 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 710:
#line 1681 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 711:
#line 1684 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 712:
#line 1687 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 713:
#line 1690 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 714:
#line 1693 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 715:
#line 1696 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 716:
#line 1699 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 717:
#line 1704 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 718:
#line 1706 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 719:
#line 1708 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 720:
#line 1710 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 721:
#line 1712 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 722:
#line 1714 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 723:
#line 1719 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 724:
#line 1721 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 725:
#line 1723 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 726:
#line 1727 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 727:
#line 1730 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 728:
#line 1733 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 729:
#line 1736 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 730:
#line 1739 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 731:
#line 1742 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 732:
#line 1745 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 733:
#line 1748 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 734:
#line 1751 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 735:
#line 1754 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 736:
#line 1757 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 737:
#line 1761 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 738:
#line 1762 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 739:
#line 1763 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 740:
#line 1764 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 741:
#line 1765 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 742:
#line 1766 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 743:
#line 1768 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 744:
#line 1770 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 745:
#line 1771 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 746:
#line 1772 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 747:
#line 1773 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 748:
#line 1776 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 749:
#line 1777 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 750:
#line 1778 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 751:
#line 1779 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 752:
#line 1780 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 753:
#line 1782 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 754:
#line 1783 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 755:
#line 1784 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 756:
#line 1785 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 757:
#line 1789 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 758:
#line 1791 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 759:
#line 1792 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 760:
#line 1794 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 761:
#line 1796 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 762:
#line 1798 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 763:
#line 1801 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 764:
#line 1802 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 765:
#line 1805 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 766:
#line 1806 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 767:
#line 1807 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 768:
#line 1810 "frame/parser.Y"
    {;}
    break;

  case 769:
#line 1813 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 770:
#line 1814 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 771:
#line 1815 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 772:
#line 1816 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 773:
#line 1817 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 774:
#line 1818 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 775:
#line 1819 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 776:
#line 1820 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 777:
#line 1824 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 779:
#line 1832 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 780:
#line 1833 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 781:
#line 1834 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 782:
#line 1836 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 783:
#line 1838 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 784:
#line 1839 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 785:
#line 1840 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 787:
#line 1841 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 790:
#line 1844 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 791:
#line 1845 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 792:
#line 1847 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 793:
#line 1849 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 794:
#line 1851 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 795:
#line 1854 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 796:
#line 1856 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 797:
#line 1857 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 798:
#line 1859 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 799:
#line 1862 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 800:
#line 1865 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 801:
#line 1869 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 802:
#line 1872 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 803:
#line 1875 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 804:
#line 1878 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 805:
#line 1882 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 806:
#line 1886 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 807:
#line 1891 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 808:
#line 1895 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 809:
#line 1897 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 810:
#line 1898 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 811:
#line 1899 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 812:
#line 1901 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 813:
#line 1903 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 814:
#line 1905 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 815:
#line 1907 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 816:
#line 1908 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 817:
#line 1910 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 818:
#line 1912 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 819:
#line 1915 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 820:
#line 1919 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 821:
#line 1923 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 822:
#line 1925 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 823:
#line 1927 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 824:
#line 1929 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 825:
#line 1931 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 826:
#line 1933 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 827:
#line 1935 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 828:
#line 1937 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 829:
#line 1939 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 830:
#line 1941 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 831:
#line 1943 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 832:
#line 1945 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 833:
#line 1947 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 834:
#line 1949 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 835:
#line 1950 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 836:
#line 1952 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 837:
#line 1954 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 838:
#line 1955 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 839:
#line 1956 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 840:
#line 1958 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 841:
#line 1960 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 842:
#line 1961 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 843:
#line 1962 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 844:
#line 1963 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 845:
#line 1965 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 846:
#line 1967 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 847:
#line 1971 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 848:
#line 1974 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 849:
#line 1977 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 850:
#line 1981 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 851:
#line 1985 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 852:
#line 1990 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 853:
#line 1994 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 854:
#line 1995 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 855:
#line 1996 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 856:
#line 1998 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 857:
#line 2000 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 858:
#line 2004 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 859:
#line 2005 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 860:
#line 2006 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 861:
#line 2008 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 862:
#line 2011 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 863:
#line 2014 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 864:
#line 2017 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 865:
#line 2018 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 866:
#line 2022 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 867:
#line 2026 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 868:
#line 2028 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 869:
#line 2029 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 870:
#line 2031 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 871:
#line 2034 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 872:
#line 2037 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 873:
#line 2038 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 874:
#line 2040 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 875:
#line 2041 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 876:
#line 2042 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 877:
#line 2044 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 878:
#line 2045 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 879:
#line 2047 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 880:
#line 2050 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 881:
#line 2053 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 882:
#line 2055 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 883:
#line 2056 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 887:
#line 2061 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 888:
#line 2062 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 889:
#line 2064 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 890:
#line 2066 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 891:
#line 2068 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 892:
#line 2069 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 896:
#line 2075 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 897:
#line 2076 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 898:
#line 2077 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 899:
#line 2078 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 900:
#line 2079 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 901:
#line 2080 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 902:
#line 2081 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 903:
#line 2082 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 904:
#line 2083 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 905:
#line 2084 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 906:
#line 2085 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 907:
#line 2087 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 908:
#line 2089 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 909:
#line 2090 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 910:
#line 2091 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 911:
#line 2092 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 912:
#line 2093 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 913:
#line 2095 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 914:
#line 2096 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 915:
#line 2097 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 916:
#line 2098 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 917:
#line 2099 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 918:
#line 2101 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 919:
#line 2102 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 920:
#line 2103 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 921:
#line 2104 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 922:
#line 2105 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 923:
#line 2106 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 924:
#line 2109 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 925:
#line 2110 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 926:
#line 2111 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 927:
#line 2112 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 928:
#line 2113 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 929:
#line 2114 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 930:
#line 2115 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 931:
#line 2116 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 932:
#line 2117 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 933:
#line 2118 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 934:
#line 2119 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 935:
#line 2120 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 936:
#line 2121 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 937:
#line 2122 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 938:
#line 2123 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 939:
#line 2124 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 940:
#line 2125 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 941:
#line 2126 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 942:
#line 2127 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 943:
#line 2128 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 944:
#line 2129 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 945:
#line 2132 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 946:
#line 2133 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 947:
#line 2134 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 948:
#line 2135 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 949:
#line 2136 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 950:
#line 2138 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 951:
#line 2148 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 952:
#line 2156 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 953:
#line 2165 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 954:
#line 2173 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 955:
#line 2180 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 956:
#line 2187 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 957:
#line 2195 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 958:
#line 2203 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 959:
#line 2208 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 960:
#line 2213 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 961:
#line 2218 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 962:
#line 2223 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 963:
#line 2228 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 964:
#line 2233 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 965:
#line 2238 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 966:
#line 2247 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 967:
#line 2257 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 968:
#line 2267 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 969:
#line 2276 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 970:
#line 2284 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 971:
#line 2294 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 972:
#line 2304 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 973:
#line 2314 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 974:
#line 2326 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 975:
#line 2335 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 977:
#line 2343 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 978:
#line 2345 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 979:
#line 2347 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 980:
#line 2352 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 981:
#line 2355 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 982:
#line 2356 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 983:
#line 2357 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 984:
#line 2364 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 985:
#line 2366 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 986:
#line 2367 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 987:
#line 2370 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 988:
#line 2371 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 989:
#line 2372 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 990:
#line 2373 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 991:
#line 2374 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 992:
#line 2375 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 993:
#line 2376 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 995:
#line 2380 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 996:
#line 2381 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 997:
#line 2382 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 998:
#line 2383 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 999:
#line 2384 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1000:
#line 2387 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 1001:
#line 2389 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 1002:
#line 2391 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 1003:
#line 2393 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1004:
#line 2395 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1005:
#line 2397 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1006:
#line 2399 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 1007:
#line 2400 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1008:
#line 2401 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1009:
#line 2403 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1010:
#line 2405 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1011:
#line 2408 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1012:
#line 2410 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1013:
#line 2411 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1014:
#line 2412 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1015:
#line 2414 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1016:
#line 2416 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1017:
#line 2419 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1018:
#line 2422 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1019:
#line 2423 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1020:
#line 2424 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1021:
#line 2425 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1022:
#line 2427 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1023:
#line 2428 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1024:
#line 2429 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1025:
#line 2430 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1026:
#line 2431 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1027:
#line 2433 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1028:
#line 2435 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1029:
#line 2437 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1030:
#line 2439 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1031:
#line 2441 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1032:
#line 2442 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1033:
#line 2444 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1034:
#line 2446 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1035:
#line 2448 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1036:
#line 2449 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1037:
#line 2450 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1038:
#line 2452 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1039:
#line 2454 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1040:
#line 2457 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1041:
#line 2460 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1042:
#line 2461 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1043:
#line 2463 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1044:
#line 2466 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1045:
#line 2469 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1046:
#line 2470 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1047:
#line 2471 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1048:
#line 2472 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1049:
#line 2474 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1050:
#line 2476 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1051:
#line 2478 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1052:
#line 2479 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1053:
#line 2481 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1054:
#line 2482 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1055:
#line 2483 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1056:
#line 2484 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1057:
#line 2485 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1058:
#line 2487 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1059:
#line 2489 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1060:
#line 2491 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1061:
#line 2493 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1063:
#line 2495 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1064:
#line 2496 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1065:
#line 2498 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1066:
#line 2500 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1067:
#line 2501 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1068:
#line 2502 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1070:
#line 2504 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1072:
#line 2508 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1073:
#line 2509 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1074:
#line 2510 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1075:
#line 2511 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1076:
#line 2512 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1077:
#line 2513 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1078:
#line 2515 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1079:
#line 2516 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1080:
#line 2518 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1081:
#line 2521 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1082:
#line 2522 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1083:
#line 2523 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1084:
#line 2524 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1085:
#line 2527 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1086:
#line 2528 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1087:
#line 2531 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1088:
#line 2532 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1089:
#line 2535 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1090:
#line 2536 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1091:
#line 2539 "frame/parser.Y"
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

  case 1092:
#line 2552 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1093:
#line 2553 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1094:
#line 2557 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1095:
#line 2558 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1096:
#line 2562 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1097:
#line 2563 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1098:
#line 2568 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1099:
#line 2572 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1100:
#line 2577 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1101:
#line 2579 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1102:
#line 2582 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1103:
#line 2584 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1104:
#line 2587 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1105:
#line 2589 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1106:
#line 2592 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1107:
#line 2593 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1108:
#line 2594 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1109:
#line 2595 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1110:
#line 2596 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1111:
#line 2597 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1112:
#line 2599 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1115:
#line 2606 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1116:
#line 2607 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1117:
#line 2608 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1118:
#line 2609 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1119:
#line 2610 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1120:
#line 2611 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1121:
#line 2612 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1124:
#line 2617 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1125:
#line 2618 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1126:
#line 2619 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1127:
#line 2620 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1128:
#line 2621 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1129:
#line 2622 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1130:
#line 2623 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1131:
#line 2624 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1132:
#line 2625 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1133:
#line 2626 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1134:
#line 2627 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1135:
#line 2628 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1138:
#line 2635 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1139:
#line 2636 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1141:
#line 2640 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1142:
#line 2642 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1143:
#line 2643 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1144:
#line 2646 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1145:
#line 2647 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1146:
#line 2648 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1147:
#line 2649 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1148:
#line 2650 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1149:
#line 2651 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1150:
#line 2654 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1151:
#line 2655 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1154:
#line 2663 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1155:
#line 2666 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1156:
#line 2667 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1160:
#line 2674 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1161:
#line 2677 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1162:
#line 2681 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1163:
#line 2682 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1164:
#line 2683 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1165:
#line 2684 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1166:
#line 2685 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1167:
#line 2686 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1168:
#line 2687 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1169:
#line 2688 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1170:
#line 2689 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1171:
#line 2695 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1172:
#line 2696 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1173:
#line 2697 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1174:
#line 2698 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1175:
#line 2702 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1176:
#line 2703 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1177:
#line 2705 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1178:
#line 2710 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1180:
#line 2712 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1182:
#line 2714 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1183:
#line 2717 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1184:
#line 2719 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1185:
#line 2724 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1186:
#line 2727 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1187:
#line 2728 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1188:
#line 2729 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1189:
#line 2732 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1190:
#line 2734 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1191:
#line 2738 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1192:
#line 2739 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1193:
#line 2743 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1194:
#line 2744 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1195:
#line 2745 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1196:
#line 2746 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1197:
#line 2752 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1198:
#line 2753 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1199:
#line 2759 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1200:
#line 2760 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1201:
#line 2761 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1202:
#line 2762 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1205:
#line 2770 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1206:
#line 2772 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1207:
#line 2773 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1208:
#line 2774 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1209:
#line 2778 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1210:
#line 2779 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1211:
#line 2780 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1212:
#line 2781 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1213:
#line 2784 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1214:
#line 2785 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1215:
#line 2788 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1216:
#line 2789 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1217:
#line 2790 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1218:
#line 2793 "frame/parser.Y"
    {fr->setChannelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1219:
#line 2794 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1220:
#line 2795 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1221:
#line 2798 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1222:
#line 2799 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1224:
#line 2801 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1225:
#line 2802 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1226:
#line 2805 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1227:
#line 2806 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1228:
#line 2807 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1233:
#line 2814 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1234:
#line 2818 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1235:
#line 2820 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1236:
#line 2822 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1238:
#line 2827 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1239:
#line 2829 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1240:
#line 2831 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1250:
#line 2844 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1251:
#line 2845 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1252:
#line 2846 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1253:
#line 2849 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1254:
#line 2850 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1255:
#line 2851 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1256:
#line 2854 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1257:
#line 2855 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1258:
#line 2856 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1259:
#line 2859 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1260:
#line 2860 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1261:
#line 2861 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1263:
#line 2865 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1264:
#line 2866 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1265:
#line 2867 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1266:
#line 2870 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1267:
#line 2871 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1268:
#line 2872 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1269:
#line 2875 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1270:
#line 2876 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1271:
#line 2877 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1272:
#line 2880 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1273:
#line 2881 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1274:
#line 2882 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1275:
#line 2885 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1276:
#line 2886 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1277:
#line 2887 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1278:
#line 2891 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1279:
#line 2893 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1280:
#line 2895 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1281:
#line 2899 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1282:
#line 2903 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1283:
#line 2905 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1284:
#line 2909 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1285:
#line 2912 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1286:
#line 2913 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1287:
#line 2914 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1288:
#line 2915 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1289:
#line 2918 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1290:
#line 2920 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1291:
#line 2922 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1292:
#line 2925 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1294:
#line 2929 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1295:
#line 2930 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1296:
#line 2931 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1297:
#line 2934 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1298:
#line 2935 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1299:
#line 2939 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1301:
#line 2941 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1304:
#line 2946 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1305:
#line 2947 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1306:
#line 2948 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1307:
#line 2951 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1308:
#line 2952 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1309:
#line 2953 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1310:
#line 2956 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1311:
#line 2958 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1312:
#line 2963 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1313:
#line 2964 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1314:
#line 2967 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1315:
#line 2974 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1316:
#line 2976 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1317:
#line 2978 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1318:
#line 2983 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1320:
#line 2987 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1321:
#line 2988 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1322:
#line 2989 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1323:
#line 2991 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1324:
#line 2993 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1325:
#line 2998 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11368 "frame/parser.C"
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


#line 3002 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

