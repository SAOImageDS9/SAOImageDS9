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
#define YYLAST   5583

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  364
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  226
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1301
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2878

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
    1684,  1687,  1689,  1692,  1695,  1698,  1703,  1706,  1709,  1712,
    1717,  1721,  1723,  1726,  1729,  1734,  1740,  1742,  1753,  1755,
    1758,  1762,  1766,  1769,  1772,  1775,  1778,  1781,  1784,  1787,
    1792,  1797,  1802,  1806,  1810,  1816,  1821,  1826,  1831,  1835,
    1839,  1843,  1847,  1850,  1853,  1858,  1862,  1866,  1870,  1874,
    1879,  1884,  1889,  1894,  1900,  1905,  1912,  1920,  1925,  1930,
    1936,  1939,  1943,  1947,  1951,  1954,  1958,  1962,  1966,  1970,
    1975,  1979,  1985,  1992,  1996,  2000,  2005,  2009,  2013,  2017,
    2021,  2025,  2031,  2035,  2039,  2044,  2048,  2051,  2054,  2056,
    2060,  2065,  2070,  2075,  2080,  2085,  2092,  2097,  2102,  2108,
    2113,  2118,  2123,  2128,  2134,  2139,  2146,  2154,  2159,  2164,
    2170,  2176,  2182,  2188,  2194,  2200,  2208,  2214,  2220,  2227,
    2232,  2237,  2242,  2247,  2252,  2259,  2264,  2269,  2275,  2281,
    2287,  2293,  2299,  2306,  2312,  2320,  2329,  2335,  2341,  2348,
    2352,  2356,  2360,  2364,  2369,  2373,  2379,  2386,  2390,  2394,
    2399,  2403,  2407,  2411,  2415,  2419,  2425,  2429,  2433,  2438,
    2443,  2448,  2452,  2458,  2463,  2468,  2471,  2475,  2482,  2489,
    2491,  2493,  2495,  2498,  2501,  2504,  2508,  2512,  2515,  2528,
    2531,  2534,  2536,  2540,  2545,  2548,  2549,  2553,  2555,  2558,
    2561,  2564,  2567,  2570,  2575,  2580,  2585,  2589,  2594,  2600,
    2609,  2616,  2626,  2633,  2641,  2652,  2664,  2677,  2687,  2693,
    2700,  2704,  2710,  2716,  2723,  2729,  2734,  2744,  2755,  2767,
    2777,  2784,  2791,  2798,  2805,  2812,  2819,  2826,  2833,  2840,
    2848,  2856,  2859,  2864,  2869,  2874,  2879,  2885,  2890,  2895,
    2901,  2907,  2911,  2916,  2921,  2926,  2934,  2944,  2951,  2962,
    2974,  2987,  2997,  3001,  3004,  3008,  3014,  3022,  3027,  3031,
    3035,  3042,  3050,  3058,  3063,  3068,  3078,  3083,  3087,  3092,
    3100,  3108,  3111,  3115,  3119,  3123,  3128,  3131,  3134,  3139,
    3150,  3154,  3156,  3160,  3163,  3166,  3169,  3172,  3176,  3182,
    3187,  3193,  3196,  3199,  3202,  3205,  3209,  3212,  3215,  3218,
    3222,  3225,  3229,  3234,  3238,  3242,  3249,  3254,  3257,  3261,
    3264,  3267,  3272,  3276,  3280,  3283,  3287,  3289,  3292,  3294,
    3297,  3300,  3303,  3305,  3307,  3309,  3311,  3314,  3316,  3319,
    3322,  3324,  3327,  3330,  3332,  3335,  3337,  3339,  3341,  3343,
    3345,  3347,  3349,  3351,  3352,  3354,  3357,  3360,  3363,  3367,
    3373,  3381,  3389,  3396,  3403,  3410,  3417,  3423,  3430,  3437,
    3444,  3451,  3458,  3465,  3472,  3484,  3492,  3500,  3508,  3518,
    3528,  3539,  3552,  3565,  3568,  3571,  3575,  3580,  3585,  3590,
    3591,  3593,  3595,  3600,  3605,  3607,  3609,  3611,  3613,  3615,
    3617,  3619,  3621,  3624,  3626,  3628,  3630,  3634,  3638,  3647,
    3654,  3665,  3673,  3681,  3687,  3690,  3693,  3697,  3702,  3708,
    3714,  3720,  3724,  3729,  3735,  3741,  3747,  3753,  3756,  3760,
    3764,  3770,  3774,  3778,  3782,  3787,  3793,  3799,  3805,  3811,
    3815,  3820,  3826,  3832,  3835,  3838,  3842,  3848,  3855,  3862,
    3866,  3870,  3877,  3883,  3889,  3892,  3896,  3900,  3906,  3913,
    3917,  3920,  3923,  3927,  3930,  3934,  3937,  3941,  3947,  3954,
    3957,  3960,  3963,  3965,  3970,  3975,  3977,  3980,  3983,  3986,
    3989,  3992,  3995,  3998,  4002,  4005,  4009,  4012,  4016,  4018,
    4020,  4022,  4024,  4026,  4027,  4030,  4031,  4034,  4035,  4037,
    4038,  4039,  4041,  4043,  4045,  4047,  4049,  4057,  4066,  4069,
    4076,  4079,  4086,  4089,  4093,  4096,  4098,  4100,  4104,  4108,
    4110,  4115,  4118,  4120,  4124,  4128,  4133,  4137,  4141,  4145,
    4147,  4149,  4151,  4153,  4155,  4157,  4159,  4161,  4163,  4165,
    4167,  4169,  4171,  4173,  4175,  4178,  4179,  4180,  4183,  4190,
    4198,  4201,  4203,  4207,  4209,  4213,  4215,  4217,  4219,  4222,
    4225,  4227,  4231,  4232,  4233,  4236,  4239,  4241,  4245,  4251,
    4253,  4256,  4259,  4263,  4266,  4269,  4272,  4275,  4277,  4279,
    4281,  4283,  4288,  4291,  4295,  4299,  4302,  4306,  4309,  4312,
    4315,  4319,  4323,  4327,  4330,  4334,  4336,  4340,  4344,  4346,
    4349,  4352,  4355,  4358,  4368,  4375,  4377,  4379,  4381,  4383,
    4386,  4389,  4393,  4397,  4399,  4402,  4406,  4410,  4412,  4415,
    4417,  4419,  4421,  4423,  4425,  4428,  4431,  4436,  4438,  4441,
    4444,  4447,  4451,  4453,  4455,  4457,  4460,  4463,  4466,  4469,
    4472,  4476,  4480,  4484,  4488,  4492,  4496,  4500,  4502,  4505,
    4508,  4511,  4515,  4518,  4522,  4526,  4529,  4532,  4535,  4538,
    4541,  4544,  4547,  4550,  4553,  4556,  4559,  4562,  4565,  4568,
    4572,  4576,  4580,  4583,  4586,  4589,  4592,  4595,  4598,  4601,
    4604,  4607,  4610,  4613,  4616,  4620,  4624,  4628,  4633,  4640,
    4643,  4645,  4647,  4649,  4651,  4653,  4654,  4660,  4662,  4669,
    4673,  4675,  4678,  4681,  4684,  4688,  4692,  4695,  4698,  4701,
    4704,  4707,  4710,  4714,  4717,  4720,  4724,  4726,  4730,  4735,
    4738,  4740,  4743,  4749,  4756,  4763,  4766,  4768,  4771,  4774,
    4780,  4787
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
     368,    -1,   153,    66,     5,    -1,   157,   486,    -1,   158,
     485,    -1,   161,   487,    -1,   167,    15,     4,    -1,   182,
     490,    -1,   185,   508,    -1,   186,   509,    -1,   187,   510,
      -1,   190,   526,   511,    -1,   191,   546,    -1,   205,    66,
       5,    -1,   222,   547,    -1,   223,   548,    -1,   224,   551,
      -1,   245,    88,    -1,   238,   553,    -1,   236,   552,    -1,
     253,    -1,   249,   526,   555,    -1,   255,   560,    -1,   257,
     561,    -1,   262,   563,    -1,   276,    -1,   282,   578,    -1,
     298,     4,    -1,   299,   394,    -1,   310,    -1,   312,   580,
      -1,   318,    -1,   321,   582,    -1,   322,   583,    -1,   352,
     587,    -1,   359,   588,    -1,     3,    -1,     4,    -1,   368,
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
     396,    -1,   153,   397,    -1,   194,   558,    -1,    36,   559,
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
     463,    -1,   158,   464,    -1,   161,   454,    -1,   165,   453,
      -1,   167,    15,    -1,   195,    -1,   190,   526,   520,    -1,
     191,   465,    -1,   205,    66,    -1,   222,    -1,   223,   466,
      -1,   230,   294,   378,   366,   366,     4,     4,     5,    -1,
     255,   467,    -1,   257,    -1,   282,   468,    -1,   298,    -1,
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
     315,    -1,    61,    -1,   293,    -1,   316,    -1,    61,    -1,
     293,    -1,   316,    -1,    66,    -1,   189,    -1,   248,    -1,
     293,    -1,   302,    -1,    81,    -1,    45,    -1,   240,    -1,
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
     376,    -1,    61,     5,    -1,   293,   376,    -1,   316,     4,
       4,     4,    -1,    61,     5,    -1,    61,   314,    -1,   293,
     376,    -1,   316,     4,     4,     4,    -1,   208,     4,     4,
      -1,   117,    -1,   193,     5,    -1,    88,   489,    -1,   270,
     122,   204,   488,    -1,   270,     4,     4,     4,     4,    -1,
     312,    -1,   322,   366,   366,   366,   366,   366,   366,   366,
     366,     4,    -1,     5,    -1,     5,     4,    -1,     4,     4,
      56,    -1,     4,     4,   376,    -1,   201,   368,    -1,    25,
     491,    -1,   113,   493,    -1,   127,   494,    -1,   164,   507,
      -1,   215,   505,    -1,   228,   506,    -1,     5,    13,     5,
     388,    -1,     5,    14,     5,   388,    -1,     5,    61,     5,
     388,    -1,     5,   198,   388,    -1,     5,   199,   388,    -1,
       5,   273,   386,     4,   388,    -1,     5,   283,     4,   388,
      -1,     5,   284,     4,   388,    -1,     5,   315,     5,   388,
      -1,   255,    87,   492,    -1,     5,    13,     5,    -1,     5,
      14,     5,    -1,     5,    61,     5,    -1,     5,   198,    -1,
       5,   199,    -1,     5,   273,   386,     4,    -1,     5,   283,
       4,    -1,     5,   284,     4,    -1,     5,   315,     5,    -1,
       5,     5,   281,    -1,     5,    13,     5,   388,    -1,     5,
      14,     5,   388,    -1,     5,    61,     5,   388,    -1,     5,
     198,   387,   388,    -1,     5,     5,   281,   387,   388,    -1,
       5,   199,   387,   388,    -1,     5,   273,   386,     4,   387,
     388,    -1,     5,   288,   386,     4,     4,   387,   388,    -1,
       5,   283,     4,   388,    -1,     5,   284,     4,   388,    -1,
       5,   315,     5,   387,   388,    -1,   280,   495,    -1,   118,
      87,   496,    -1,   255,   162,   504,    -1,   255,    87,   503,
      -1,   200,   497,    -1,     5,    13,     5,    -1,     5,    14,
       5,    -1,     5,    61,     5,    -1,     5,   198,   387,    -1,
       5,     5,   281,   387,    -1,     5,   199,   387,    -1,     5,
     273,   386,     4,   387,    -1,     5,   288,   386,     4,     4,
     387,    -1,     5,   283,     4,    -1,     5,   284,     4,    -1,
       5,   315,     5,   387,    -1,     5,    13,     5,    -1,     5,
      14,     5,    -1,     5,    61,     5,    -1,     5,   198,   387,
      -1,     5,   199,   387,    -1,     5,   273,   386,     4,   387,
      -1,     5,   283,     4,    -1,     5,   284,     4,    -1,     5,
     315,     5,   387,    -1,   162,   167,   498,    -1,   167,   499,
      -1,   162,   500,    -1,   502,    -1,   162,   350,   501,    -1,
       5,    13,     5,   388,    -1,     5,    14,     5,   388,    -1,
       5,    61,     5,   388,    -1,     5,   198,   387,   388,    -1,
       5,   199,   387,   388,    -1,     5,   273,   386,     4,   387,
     388,    -1,     5,   283,     4,   388,    -1,     5,   284,     4,
     388,    -1,     5,   315,     5,   387,   388,    -1,     5,    13,
       5,   388,    -1,     5,    14,     5,   388,    -1,     5,    61,
       5,   388,    -1,     5,   198,   387,   388,    -1,     5,     5,
     281,   387,   388,    -1,     5,   199,   387,   388,    -1,     5,
     273,   386,     4,   387,   388,    -1,     5,   288,   386,     4,
       4,   387,   388,    -1,     5,   283,     4,   388,    -1,     5,
     284,     4,   388,    -1,     5,   315,     5,   387,   388,    -1,
     377,     5,    13,     5,   388,    -1,   377,     5,    14,     5,
     388,    -1,   377,     5,    61,     5,   388,    -1,   377,     5,
     198,   387,   388,    -1,   377,     5,   199,   387,   388,    -1,
     377,     5,   273,   386,     4,   387,   388,    -1,   377,     5,
     283,     4,   388,    -1,   377,     5,   284,     4,   388,    -1,
     377,     5,   315,     5,   387,   388,    -1,     5,    13,     5,
     388,    -1,     5,    14,     5,   388,    -1,     5,    61,     5,
     388,    -1,     5,   198,   387,   388,    -1,     5,   199,   387,
     388,    -1,     5,   273,   386,     4,   387,   388,    -1,     5,
     283,     4,   388,    -1,     5,   284,     4,   388,    -1,     5,
     315,     5,   387,   388,    -1,   377,     5,    13,     5,   388,
      -1,   377,     5,    14,     5,   388,    -1,   377,     5,    61,
       5,   388,    -1,   377,     5,   198,   387,   388,    -1,   377,
       5,     5,   281,   387,   388,    -1,   377,     5,   199,   387,
     388,    -1,   377,     5,   273,   386,     4,   387,   388,    -1,
     377,     5,   288,   386,     4,     4,   387,   388,    -1,   377,
       5,   283,     4,   388,    -1,   377,     5,   284,     4,   388,
      -1,   377,     5,   315,     5,   387,   388,    -1,     5,    13,
       5,    -1,     5,    14,     5,    -1,     5,    61,     5,    -1,
       5,   198,   387,    -1,     5,     5,   281,   387,    -1,     5,
     199,   387,    -1,     5,   273,   386,     4,   387,    -1,     5,
     288,   386,     4,     4,   387,    -1,     5,   283,     4,    -1,
       5,   284,     4,    -1,     5,   315,     5,   387,    -1,     5,
      13,     5,    -1,     5,    14,     5,    -1,     5,    61,     5,
      -1,     5,   198,   387,    -1,     5,   199,   387,    -1,     5,
     273,   386,     4,   387,    -1,     5,   283,     4,    -1,     5,
     284,     4,    -1,     5,   315,     5,   387,    -1,     5,    13,
       5,   388,    -1,     5,    61,     5,   388,    -1,     5,   198,
     388,    -1,     5,   273,   386,     4,   388,    -1,     5,   283,
       4,   388,    -1,     5,   315,     5,   388,    -1,     5,     5,
      -1,   280,     5,     5,    -1,    94,     4,     4,     4,     4,
       4,    -1,   195,     4,     4,     4,     4,     4,    -1,   112,
      -1,   239,    -1,   368,    -1,   143,   368,    -1,    88,   368,
      -1,    66,     5,    -1,     5,     4,     4,    -1,   312,   366,
     366,    -1,   359,   366,    -1,     5,     5,   377,   383,     5,
       5,   377,   383,   366,   377,   385,     5,    -1,    60,   514,
      -1,    66,     5,    -1,    80,    -1,    73,   519,     5,    -1,
      73,   519,   315,     5,    -1,    75,   100,    -1,    -1,    83,
     512,   515,    -1,    89,    -1,   100,   517,    -1,   106,   518,
      -1,   115,     4,    -1,   132,     5,    -1,   153,    16,    -1,
     153,   220,   366,   366,    -1,   153,   304,   366,   366,    -1,
       4,    19,   391,   368,    -1,     4,    20,   371,    -1,     4,
      20,   371,   378,    -1,     4,    20,   371,   376,   383,    -1,
       4,    21,   247,   366,   366,     4,   376,   385,    -1,     4,
      21,   247,     5,   376,   385,    -1,     4,    49,   247,   366,
     366,   366,     4,   376,   385,    -1,     4,    49,   247,     5,
     376,   385,    -1,     4,    48,   247,   366,   366,   376,   385,
      -1,     4,    52,   106,   371,   371,     4,   366,   366,   366,
       4,    -1,     4,    52,   106,   371,   371,     4,   366,   366,
     366,     4,   378,    -1,     4,    52,   106,   371,   371,     4,
     366,   366,   366,     4,   376,   383,    -1,     4,    52,   106,
       5,     5,   376,   383,   376,   385,    -1,     4,    55,   513,
       5,     5,    -1,     4,    62,   247,   366,   376,   385,    -1,
       4,    66,     5,    -1,     4,    74,    26,   368,   368,    -1,
       4,    74,   172,     5,     5,    -1,     4,    74,   247,   366,
     376,   385,    -1,     4,    74,   293,   376,   383,    -1,     4,
      75,   142,   368,    -1,     4,    82,   106,   371,   371,     4,
     366,   366,     4,    -1,     4,    82,   106,   371,   371,     4,
     366,   366,     4,   378,    -1,     4,    82,   106,   371,   371,
       4,   366,   366,     4,   376,   383,    -1,     4,    82,   106,
       5,     5,   376,   383,   376,   385,    -1,     4,    83,    21,
     247,   366,   366,    -1,     4,    83,    49,   247,   366,   366,
      -1,     4,    83,    52,    20,   366,   366,    -1,     4,    83,
      52,   247,   366,   366,    -1,     4,    83,   111,   247,   366,
     366,    -1,     4,    83,   114,    20,   366,   366,    -1,     4,
      83,   114,   247,   366,   366,    -1,     4,    83,    82,    20,
     366,   366,    -1,     4,    83,    82,   247,   366,   366,    -1,
       4,    83,   235,   319,     4,   366,   366,    -1,     4,    83,
     268,   319,     4,   366,   366,    -1,     4,   100,    -1,     4,
     100,    21,     4,    -1,     4,   100,    49,     4,    -1,     4,
     100,    52,     4,    -1,     4,   100,   111,     4,    -1,     4,
     100,    55,   513,     5,    -1,     4,   100,   114,     4,    -1,
       4,   100,    82,     4,    -1,     4,   100,   235,   319,     4,
      -1,     4,   100,   268,   319,     4,    -1,     4,   100,   295,
      -1,     4,   100,   295,     5,    -1,     4,   100,   295,     4,
      -1,     4,   106,    39,     4,    -1,     4,   110,   247,   366,
     366,   376,   385,    -1,     4,   111,   247,   366,   366,   366,
       4,   376,   385,    -1,     4,   111,   247,     5,   376,   385,
      -1,     4,   114,   106,   371,   371,     4,   366,   366,   366,
       4,    -1,     4,   114,   106,   371,   371,     4,   366,   366,
     366,     4,   378,    -1,     4,   114,   106,   371,   371,     4,
     366,   366,   366,     4,   376,   383,    -1,     4,   114,   106,
       5,     5,   376,   383,   376,   385,    -1,     4,   132,     5,
      -1,     4,   153,    -1,     4,   153,   220,    -1,     4,   179,
      26,   368,   368,    -1,     4,   179,   233,   376,   383,   375,
     375,    -1,     4,   203,   366,   366,    -1,     4,   203,   136,
      -1,     4,   203,    35,    -1,     4,   203,   303,   376,   383,
     375,    -1,     4,   235,   253,   366,   366,   376,   385,    -1,
       4,   268,   253,   366,   366,   376,   385,    -1,     4,   233,
     272,   389,    -1,     4,   233,   279,     4,    -1,     4,   241,
     376,   383,   375,   375,   366,   376,   385,    -1,     4,   242,
     532,   368,    -1,     4,   257,    39,    -1,     4,   258,   133,
       5,    -1,     4,   258,   233,   376,   383,   375,   375,    -1,
       4,   258,   293,   376,   383,   376,   385,    -1,     4,   269,
      -1,     4,   269,   220,    -1,     4,   295,     5,    -1,     4,
     297,     5,    -1,     4,   297,   257,   368,    -1,     4,   309,
      -1,     4,   311,    -1,     4,   317,    26,   368,    -1,     4,
     317,   233,   376,   383,   375,   376,   385,   366,   371,    -1,
       4,   351,     4,    -1,   170,    -1,   170,   366,   366,    -1,
     181,   527,    -1,   182,   528,    -1,   203,   529,    -1,   240,
     368,    -1,   242,   532,   368,    -1,   242,   532,   368,   366,
     366,    -1,   257,    39,   366,   366,    -1,   257,   202,   366,
     366,     4,    -1,   257,   112,    -1,   262,   536,    -1,   269,
     537,    -1,   276,   538,    -1,     5,    66,     5,    -1,     5,
      80,    -1,     5,   100,    -1,     5,    89,    -1,     5,   132,
       5,    -1,     5,   153,    -1,     5,   153,   220,    -1,     5,
     203,   366,   366,    -1,     5,   203,   136,    -1,     5,   203,
      35,    -1,     5,   203,   303,   376,   383,   375,    -1,     5,
     242,   532,   368,    -1,     5,   269,    -1,     5,   269,   220,
      -1,     5,   309,    -1,     5,   311,    -1,   295,   106,     5,
       5,    -1,   295,   100,     5,    -1,   295,   100,    16,    -1,
     295,     5,    -1,   295,   312,     5,    -1,   226,    -1,   226,
     376,    -1,   308,    -1,   309,    16,    -1,   311,    16,    -1,
     351,     4,    -1,   269,    -1,   311,    -1,   153,    -1,   309,
      -1,    39,   203,    -1,   203,    -1,   112,   203,    -1,    39,
     106,    -1,   106,    -1,   112,   106,    -1,    39,   257,    -1,
     257,    -1,   112,   257,    -1,   100,    -1,   297,    -1,    66,
      -1,   351,    -1,   242,    -1,   132,    -1,   170,    -1,   312,
      -1,    -1,     4,    -1,    29,   368,    -1,   247,   366,    -1,
     166,     4,    -1,   221,     4,   366,    -1,    62,   366,   366,
     366,   533,    -1,   110,   366,   366,   366,   366,   370,   533,
      -1,    48,   366,   366,   366,   366,   370,   533,    -1,   235,
     366,   366,   366,   366,   533,    -1,   268,   366,   366,   366,
     366,   533,    -1,   179,   366,   366,   366,   366,   533,    -1,
     317,   366,   366,   366,   366,   533,    -1,   297,   366,   366,
     370,   533,    -1,    62,   233,   366,   366,   390,   533,    -1,
      48,   233,   366,   366,   390,   533,    -1,   103,   233,   366,
     366,   390,   533,    -1,    85,   233,   366,   366,   390,   533,
      -1,   362,   233,   366,   366,   390,   533,    -1,    26,   233,
     366,   366,   390,   533,    -1,    51,   233,   366,   366,   390,
     533,    -1,   258,   366,   366,   366,   366,   376,   383,   376,
     385,     5,   533,    -1,    74,   366,   366,   366,   376,   383,
     533,    -1,   241,   366,   366,   366,   366,   366,   533,    -1,
      21,   366,   366,   366,   366,     4,   533,    -1,   111,   366,
     366,   366,   366,   366,     4,   370,   533,    -1,    49,   366,
     366,   366,   366,   366,     4,   370,   533,    -1,    82,   366,
     366,   371,   371,     4,   366,   366,     4,   533,    -1,   114,
     366,   366,   371,   371,     4,   366,   366,   366,     4,   370,
     533,    -1,    52,   366,   366,   371,   371,     4,   366,   366,
     366,     4,   370,   533,    -1,    75,   533,    -1,   296,   516,
      -1,     5,   366,   366,    -1,   315,     5,   366,   366,    -1,
     366,   366,   315,     5,    -1,     5,   376,   383,   375,    -1,
      -1,   269,    -1,    16,    -1,    39,   366,   366,     4,    -1,
     202,   366,   366,     4,    -1,   112,    -1,   105,    -1,   353,
      -1,    63,    -1,   261,    -1,   260,    -1,   244,    -1,   354,
      -1,    60,   521,    -1,    66,    -1,   132,    -1,   115,    -1,
     147,   366,   366,    -1,   160,   366,   366,    -1,     4,    19,
      82,     5,     5,     5,   376,     4,    -1,     4,    19,   155,
       5,     5,     4,    -1,     4,    19,   231,     5,     5,     5,
       5,   376,   383,   392,    -1,     4,    19,   232,     5,     5,
     376,   392,    -1,     4,    19,   246,     5,     5,     5,   376,
      -1,     4,    19,   289,   376,   383,    -1,   160,    16,    -1,
       4,    20,    -1,     4,    20,   378,    -1,     4,    20,   376,
     383,    -1,     4,    21,   247,   376,   385,    -1,     4,    49,
     247,   376,   385,    -1,     4,    48,   247,   376,   385,    -1,
       4,    52,    20,    -1,     4,    52,    20,   378,    -1,     4,
      52,    20,   376,   383,    -1,     4,    52,   247,   376,   385,
      -1,     4,    59,   376,   383,   384,    -1,     4,    62,   247,
     376,   385,    -1,     4,    66,    -1,     4,    74,    26,    -1,
       4,    74,   172,    -1,     4,    74,   247,   376,   385,    -1,
       4,    74,   293,    -1,     4,    75,   142,    -1,     4,    82,
      20,    -1,     4,    82,    20,   378,    -1,     4,    82,    20,
     376,   383,    -1,     4,    82,   247,   376,   385,    -1,     4,
     110,   247,   376,   385,    -1,     4,   111,   247,   376,   385,
      -1,     4,   114,    20,    -1,     4,   114,    20,   378,    -1,
       4,   114,    20,   376,   383,    -1,     4,   114,   247,   376,
     385,    -1,     4,   132,    -1,     4,   153,    -1,     4,   179,
      26,    -1,     4,   179,   174,   376,   385,    -1,     4,   179,
     233,   376,   383,   384,    -1,     4,   188,   174,   366,   376,
     385,    -1,     4,   233,   272,    -1,     4,   233,   279,    -1,
       4,   241,   233,   376,   383,   384,    -1,     4,   241,   174,
     376,   385,    -1,     4,   241,   301,   376,   385,    -1,     4,
     242,    -1,     4,   242,   532,    -1,     4,   258,   133,    -1,
       4,   258,   174,   376,   385,    -1,     4,   258,   233,   376,
     383,   384,    -1,     4,   258,   293,    -1,     4,   269,    -1,
       4,   295,    -1,     4,   295,     4,    -1,     4,   297,    -1,
       4,   297,   257,    -1,     4,   307,    -1,     4,   317,    26,
      -1,     4,   317,   174,   376,   385,    -1,     4,   317,   233,
     376,   383,   384,    -1,     4,   351,    -1,   153,   522,    -1,
     153,   216,    -1,   216,    -1,   235,   268,   366,   366,    -1,
     268,   268,   366,   366,    -1,   240,    -1,   242,   532,    -1,
     269,   523,    -1,   269,   216,    -1,   276,   524,    -1,     5,
      66,    -1,     5,   132,    -1,     5,   160,    -1,     5,   242,
     532,    -1,     5,   295,    -1,     5,   295,   216,    -1,   295,
      16,    -1,   295,    99,   204,    -1,   351,    -1,    29,    -1,
     247,    -1,   166,    -1,   221,    -1,    -1,   366,   366,    -1,
      -1,   366,   366,    -1,    -1,   297,    -1,    -1,    -1,   234,
      -1,   249,    -1,   313,    -1,    57,    -1,   134,    -1,   519,
     376,   383,   384,   368,   534,   541,    -1,   269,   519,   376,
     383,   384,   368,   534,   541,    -1,   519,     5,    -1,   519,
       5,     4,     5,   376,   383,    -1,   519,     4,    -1,   519,
       4,     4,     5,   376,   383,    -1,   127,     5,    -1,   127,
       5,     5,    -1,   366,   366,    -1,   136,    -1,    35,    -1,
      39,   366,   366,    -1,   202,   366,   366,    -1,   112,    -1,
     303,   376,   383,   375,    -1,   530,   531,    -1,   531,    -1,
     532,   363,   368,    -1,    66,   363,     5,    -1,    93,   363,
       4,     4,    -1,   351,   363,     4,    -1,   132,   363,     5,
      -1,   297,   363,     5,    -1,   544,    -1,   545,    -1,   211,
      -1,   269,    -1,   153,    -1,    92,    -1,   129,    -1,   106,
      -1,   203,    -1,   257,    -1,   100,    -1,   163,    -1,   285,
      -1,   123,    -1,   525,    -1,   525,   530,    -1,    -1,    -1,
     535,   539,    -1,     5,   519,   376,   383,   384,   368,    -1,
     269,     5,   519,   376,   383,   384,   368,    -1,   296,     5,
      -1,    16,    -1,   220,   366,   366,    -1,   304,    -1,   304,
     366,   366,    -1,   125,    -1,   173,    -1,   368,    -1,   297,
     368,    -1,   539,   540,    -1,   540,    -1,   532,   363,   368,
      -1,    -1,    -1,   542,   543,    -1,   543,   544,    -1,   544,
      -1,   295,   363,     5,    -1,    55,   363,   513,     5,     5,
      -1,    64,    -1,    66,     5,    -1,   189,   379,    -1,   248,
     366,   366,    -1,   293,   376,    -1,   302,   366,    -1,    45,
     380,    -1,   189,     4,    -1,   362,    -1,   360,    -1,   354,
      -1,   211,    -1,   366,   366,   366,   366,    -1,   366,   366,
      -1,   378,   366,   366,    -1,   376,   383,   375,    -1,   303,
     549,    -1,    38,   366,   366,    -1,   202,   550,    -1,   240,
     368,    -1,   366,   366,    -1,   378,   366,   366,    -1,   376,
     383,   375,    -1,    39,   366,   366,    -1,   366,   366,    -1,
     112,   366,   366,    -1,   368,    -1,   322,   377,   383,    -1,
       5,     4,     4,    -1,   312,    -1,    70,   554,    -1,   175,
       4,    -1,   254,     4,    -1,   263,   366,    -1,     4,     4,
       4,     4,     4,     4,     4,     4,     4,    -1,     4,     4,
       4,     4,     4,     4,    -1,    54,    -1,   144,    -1,   255,
      -1,    90,    -1,   153,   556,    -1,   269,   557,    -1,    39,
     366,   366,    -1,   202,   366,   366,    -1,   112,    -1,   274,
     112,    -1,    39,   366,   366,    -1,   202,   366,   366,    -1,
     112,    -1,   274,   112,    -1,   197,    -1,    12,    -1,   211,
      -1,    33,    -1,   108,    -1,    61,     5,    -1,   293,   376,
      -1,   316,     4,     4,     4,    -1,   366,    -1,   366,    98,
      -1,   202,   562,    -1,   303,   366,    -1,   303,   366,    98,
      -1,    39,    -1,   366,    -1,   112,    -1,    25,   564,    -1,
     127,   566,    -1,   215,   576,    -1,   113,   577,    -1,   228,
       5,    -1,   122,     5,   393,    -1,    61,     5,   393,    -1,
     283,     4,   393,    -1,   255,    87,   565,    -1,   122,     5,
     393,    -1,    61,     5,   393,    -1,   283,     4,   393,    -1,
     567,    -1,   162,   567,    -1,   294,   568,    -1,   280,   569,
      -1,   118,    87,   570,    -1,   200,   571,    -1,   255,   162,
     573,    -1,   255,    87,   574,    -1,   251,   575,    -1,   122,
       5,    -1,    61,     5,    -1,   283,     4,    -1,   122,     5,
      -1,    61,     5,    -1,   283,     4,    -1,   122,     5,    -1,
      61,     5,    -1,   283,     4,    -1,   122,     5,    -1,    61,
       5,    -1,   283,     4,    -1,   162,   572,    -1,   122,     5,
       4,    -1,    61,     5,     4,    -1,   283,     4,     4,    -1,
     122,     5,    -1,    61,     5,    -1,   283,     4,    -1,   122,
       5,    -1,    61,     5,    -1,   283,     4,    -1,   122,     5,
      -1,    61,     5,    -1,   283,     4,    -1,   122,     5,    -1,
      61,     5,    -1,   283,     4,    -1,   122,     5,   393,    -1,
      61,     5,   393,    -1,   283,     4,   393,    -1,   122,     5,
       5,   393,    -1,   579,     4,     4,   366,   366,   371,    -1,
     579,     4,    -1,   100,    -1,    50,    -1,   305,    -1,   140,
      -1,   109,    -1,    -1,     4,   366,   366,   366,   366,    -1,
     214,    -1,   214,     4,   366,   366,   366,   366,    -1,   127,
     280,   581,    -1,     4,    -1,     4,     4,    -1,   366,   376,
      -1,   366,   366,    -1,   303,   366,   366,    -1,   377,   383,
     384,    -1,    15,   586,    -1,   253,     4,    -1,   250,   585,
      -1,    22,   584,    -1,     4,     4,    -1,     4,     5,    -1,
     297,     4,     5,    -1,     4,     4,    -1,     4,     5,    -1,
     297,     4,     5,    -1,     4,    -1,     4,   377,   383,    -1,
     303,     4,   377,   383,    -1,   234,    64,    -1,   239,    -1,
     366,   366,    -1,   366,   366,    11,   366,   366,    -1,   366,
     366,    11,   378,   366,   366,    -1,   366,   366,    11,   376,
     383,   375,    -1,   303,   589,    -1,   126,    -1,   126,   366,
      -1,   366,   366,    -1,   366,   366,    11,   366,   366,    -1,
     366,   366,    11,   378,   366,   366,    -1,   366,   366,    11,
     376,   383,   375,    -1
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
    1300,  1301,  1304,  1305,  1306,  1309,  1310,  1311,  1312,  1313,
    1314,  1315,  1318,  1321,  1322,  1323,  1326,  1327,  1328,  1329,
    1330,  1331,  1334,  1335,  1336,  1337,  1338,  1339,  1340,  1343,
    1344,  1347,  1348,  1351,  1352,  1355,  1356,  1359,  1360,  1361,
    1364,  1365,  1368,  1369,  1372,  1375,  1383,  1384,  1387,  1388,
    1389,  1390,  1391,  1392,  1393,  1394,  1395,  1396,  1397,  1398,
    1399,  1400,  1401,  1402,  1403,  1404,  1407,  1410,  1411,  1414,
    1415,  1416,  1417,  1420,  1421,  1422,  1423,  1426,  1427,  1428,
    1429,  1430,  1431,  1434,  1435,  1436,  1439,  1440,  1441,  1442,
    1445,  1446,  1447,  1448,  1449,  1450,  1452,  1453,  1458,  1459,
    1462,  1464,  1466,  1469,  1470,  1471,  1472,  1473,  1474,  1477,
    1479,  1481,  1483,  1484,  1486,  1488,  1490,  1492,  1494,  1497,
    1498,  1499,  1500,  1501,  1502,  1504,  1505,  1506,  1509,  1512,
    1514,  1516,  1518,  1520,  1522,  1524,  1526,  1529,  1531,  1533,
    1535,  1536,  1537,  1538,  1539,  1542,  1543,  1544,  1545,  1546,
    1547,  1548,  1550,  1552,  1553,  1554,  1557,  1558,  1559,  1560,
    1561,  1562,  1564,  1565,  1566,  1569,  1570,  1571,  1572,  1573,
    1576,  1579,  1582,  1585,  1588,  1591,  1594,  1597,  1600,  1605,
    1608,  1611,  1614,  1617,  1620,  1623,  1626,  1629,  1632,  1635,
    1640,  1643,  1646,  1649,  1652,  1655,  1658,  1661,  1664,  1669,
    1671,  1673,  1675,  1677,  1679,  1684,  1686,  1688,  1692,  1695,
    1698,  1701,  1704,  1707,  1710,  1713,  1716,  1719,  1722,  1727,
    1728,  1729,  1730,  1731,  1732,  1733,  1735,  1737,  1738,  1739,
    1742,  1743,  1744,  1745,  1746,  1747,  1749,  1750,  1751,  1754,
    1756,  1758,  1759,  1761,  1763,  1767,  1768,  1771,  1772,  1773,
    1776,  1779,  1780,  1781,  1782,  1783,  1784,  1785,  1788,  1796,
    1797,  1798,  1799,  1801,  1803,  1804,  1804,  1805,  1806,  1807,
    1808,  1809,  1811,  1812,  1814,  1817,  1820,  1821,  1822,  1825,
    1828,  1831,  1835,  1838,  1841,  1844,  1848,  1853,  1858,  1860,
    1862,  1863,  1865,  1867,  1869,  1871,  1872,  1874,  1876,  1880,
    1885,  1887,  1889,  1891,  1893,  1895,  1897,  1899,  1901,  1903,
    1905,  1908,  1909,  1911,  1913,  1914,  1916,  1918,  1919,  1920,
    1922,  1924,  1925,  1926,  1928,  1929,  1932,  1936,  1939,  1942,
    1946,  1951,  1957,  1958,  1959,  1961,  1962,  1966,  1968,  1969,
    1970,  1973,  1976,  1979,  1981,  1983,  1988,  1991,  1992,  1993,
    1996,  2000,  2001,  2003,  2004,  2005,  2007,  2008,  2010,  2011,
    2016,  2018,  2019,  2021,  2022,  2023,  2024,  2025,  2026,  2028,
    2030,  2032,  2033,  2034,  2036,  2038,  2039,  2040,  2041,  2042,
    2043,  2044,  2045,  2046,  2047,  2048,  2050,  2052,  2053,  2054,
    2055,  2057,  2058,  2059,  2060,  2061,  2063,  2064,  2065,  2066,
    2067,  2068,  2071,  2072,  2073,  2074,  2075,  2076,  2077,  2078,
    2079,  2080,  2081,  2082,  2083,  2084,  2085,  2086,  2087,  2088,
    2089,  2090,  2091,  2094,  2095,  2096,  2097,  2098,  2099,  2107,
    2114,  2123,  2132,  2139,  2146,  2154,  2162,  2169,  2174,  2179,
    2184,  2189,  2194,  2199,  2205,  2215,  2225,  2235,  2242,  2252,
    2262,  2271,  2283,  2296,  2301,  2304,  2306,  2308,  2313,  2317,
    2318,  2319,  2325,  2327,  2329,  2332,  2333,  2334,  2335,  2336,
    2337,  2338,  2341,  2342,  2343,  2344,  2345,  2346,  2348,  2350,
    2352,  2354,  2356,  2358,  2361,  2362,  2363,  2364,  2366,  2369,
    2371,  2373,  2374,  2375,  2377,  2380,  2383,  2385,  2386,  2387,
    2388,  2390,  2391,  2392,  2393,  2394,  2396,  2398,  2400,  2403,
    2404,  2405,  2407,  2410,  2411,  2412,  2413,  2415,  2418,  2422,
    2423,  2424,  2427,  2430,  2432,  2433,  2434,  2435,  2437,  2440,
    2441,  2443,  2444,  2445,  2446,  2447,  2449,  2450,  2452,  2455,
    2456,  2457,  2458,  2459,  2461,  2463,  2464,  2465,  2466,  2468,
    2470,  2471,  2472,  2473,  2474,  2475,  2477,  2478,  2480,  2483,
    2484,  2485,  2486,  2489,  2490,  2493,  2494,  2497,  2498,  2501,
    2514,  2515,  2519,  2520,  2524,  2525,  2528,  2532,  2538,  2540,
    2543,  2545,  2548,  2550,  2554,  2555,  2556,  2557,  2558,  2559,
    2560,  2564,  2565,  2568,  2569,  2570,  2571,  2572,  2573,  2574,
    2575,  2578,  2579,  2580,  2581,  2582,  2583,  2584,  2585,  2586,
    2587,  2588,  2589,  2592,  2593,  2596,  2597,  2597,  2600,  2602,
    2604,  2607,  2608,  2609,  2610,  2611,  2612,  2615,  2616,  2619,
    2620,  2623,  2627,  2628,  2628,  2631,  2632,  2635,  2638,  2642,
    2643,  2644,  2645,  2646,  2647,  2648,  2649,  2655,  2656,  2657,
    2658,  2661,  2663,  2664,  2669,  2671,  2672,  2673,  2674,  2677,
    2678,  2683,  2687,  2688,  2689,  2692,  2693,  2698,  2699,  2702,
    2704,  2705,  2706,  2711,  2713,  2719,  2720,  2721,  2722,  2725,
    2726,  2729,  2731,  2733,  2734,  2737,  2739,  2740,  2741,  2744,
    2745,  2748,  2749,  2750,  2753,  2754,  2755,  2758,  2759,  2760,
    2761,  2762,  2765,  2766,  2767,  2770,  2771,  2772,  2773,  2774,
    2777,  2779,  2781,  2783,  2786,  2788,  2790,  2793,  2794,  2795,
    2796,  2797,  2798,  2799,  2800,  2801,  2804,  2805,  2806,  2809,
    2810,  2811,  2814,  2815,  2816,  2819,  2820,  2821,  2824,  2825,
    2826,  2827,  2830,  2831,  2832,  2835,  2836,  2837,  2840,  2841,
    2842,  2845,  2846,  2847,  2850,  2852,  2854,  2858,  2862,  2864,
    2869,  2872,  2873,  2874,  2875,  2878,  2879,  2882,  2884,  2886,
    2889,  2890,  2891,  2894,  2895,  2898,  2900,  2901,  2902,  2903,
    2906,  2907,  2908,  2911,  2912,  2913,  2916,  2917,  2922,  2924,
    2927,  2934,  2935,  2937,  2942,  2944,  2947,  2948,  2949,  2950,
    2952,  2957
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
  "hasWCS", "hls", "hsv", "iis", "iisSetFileName", "iiscursor", "load",
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
     463,   463,   464,   464,   464,   465,   465,   465,   465,   465,
     465,   465,   466,   467,   467,   467,   468,   468,   468,   468,
     468,   468,   469,   469,   469,   469,   469,   469,   469,   470,
     470,   471,   471,   472,   472,   473,   473,   474,   474,   474,
     475,   475,   476,   476,   477,   477,   478,   478,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   479,   480,   481,   481,   482,
     482,   482,   482,   483,   483,   483,   483,   484,   484,   484,
     484,   484,   484,   485,   485,   485,   486,   486,   486,   486,
     487,   487,   487,   487,   487,   487,   487,   487,   488,   488,
     489,   489,   489,   490,   490,   490,   490,   490,   490,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   493,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   496,   496,   496,   496,
     496,   496,   496,   496,   496,   497,   497,   497,   497,   497,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   505,
     505,   505,   505,   505,   505,   506,   506,   507,   507,   507,
     508,   509,   509,   509,   509,   509,   509,   509,   510,   511,
     511,   511,   511,   511,   511,   512,   511,   511,   511,   511,
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
     511,   511,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   514,   514,   514,   514,   514,   514,   515,
     515,   515,   515,   515,   515,   515,   515,   515,   515,   515,
     515,   515,   515,   515,   515,   515,   515,   515,   515,   515,
     515,   515,   515,   515,   515,   516,   516,   516,   516,   517,
     517,   517,   518,   518,   518,   519,   519,   519,   519,   519,
     519,   519,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   521,
     521,   521,   521,   522,   522,   523,   523,   524,   524,   525,
     526,   526,   526,   526,   526,   526,   527,   527,   528,   528,
     528,   528,   528,   528,   529,   529,   529,   529,   529,   529,
     529,   530,   530,   531,   531,   531,   531,   531,   531,   531,
     531,   532,   532,   532,   532,   532,   532,   532,   532,   532,
     532,   532,   532,   533,   533,   534,   535,   534,   536,   536,
     536,   537,   537,   537,   537,   537,   537,   538,   538,   539,
     539,   540,   541,   542,   541,   543,   543,   544,   545,   546,
     546,   546,   546,   546,   546,   546,   546,   547,   547,   547,
     547,   548,   548,   548,   548,   548,   548,   548,   548,   549,
     549,   549,   550,   550,   550,   551,   551,   551,   551,   552,
     552,   552,   552,   553,   553,   554,   554,   554,   554,   555,
     555,   556,   556,   556,   556,   557,   557,   557,   557,   558,
     558,   559,   559,   559,   560,   560,   560,   561,   561,   561,
     561,   561,   562,   562,   562,   563,   563,   563,   563,   563,
     564,   564,   564,   564,   565,   565,   565,   566,   566,   566,
     566,   566,   566,   566,   566,   566,   567,   567,   567,   568,
     568,   568,   569,   569,   569,   570,   570,   570,   571,   571,
     571,   571,   572,   572,   572,   573,   573,   573,   574,   574,
     574,   575,   575,   575,   576,   576,   576,   577,   578,   578,
     578,   579,   579,   579,   579,   580,   580,   580,   580,   580,
     581,   581,   581,   582,   582,   583,   583,   583,   583,   583,
     584,   584,   584,   585,   585,   585,   586,   586,   586,   586,
     587,   588,   588,   588,   588,   588,   589,   589,   589,   589,
     589,   589
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
       2,     1,     2,     2,     2,     4,     2,     2,     2,     4,
       3,     1,     2,     2,     4,     5,     1,    10,     1,     2,
       3,     3,     2,     2,     2,     2,     2,     2,     2,     4,
       4,     4,     3,     3,     5,     4,     4,     4,     3,     3,
       3,     3,     2,     2,     4,     3,     3,     3,     3,     4,
       4,     4,     4,     5,     4,     6,     7,     4,     4,     5,
       2,     3,     3,     3,     2,     3,     3,     3,     3,     4,
       3,     5,     6,     3,     3,     4,     3,     3,     3,     3,
       3,     5,     3,     3,     4,     3,     2,     2,     1,     3,
       4,     4,     4,     4,     4,     6,     4,     4,     5,     4,
       4,     4,     4,     5,     4,     6,     7,     4,     4,     5,
       5,     5,     5,     5,     5,     7,     5,     5,     6,     4,
       4,     4,     4,     4,     6,     4,     4,     5,     5,     5,
       5,     5,     6,     5,     7,     8,     5,     5,     6,     3,
       3,     3,     3,     4,     3,     5,     6,     3,     3,     4,
       3,     3,     3,     3,     3,     5,     3,     3,     4,     4,
       4,     3,     5,     4,     4,     2,     3,     6,     6,     1,
       1,     1,     2,     2,     2,     3,     3,     2,    12,     2,
       2,     1,     3,     4,     2,     0,     3,     1,     2,     2,
       2,     2,     2,     4,     4,     4,     3,     4,     5,     8,
       6,     9,     6,     7,    10,    11,    12,     9,     5,     6,
       3,     5,     5,     6,     5,     4,     9,    10,    11,     9,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     7,
       7,     2,     4,     4,     4,     4,     5,     4,     4,     5,
       5,     3,     4,     4,     4,     7,     9,     6,    10,    11,
      12,     9,     3,     2,     3,     5,     7,     4,     3,     3,
       6,     7,     7,     4,     4,     9,     4,     3,     4,     7,
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
      10,     7,     7,     5,     2,     2,     3,     4,     5,     5,
       5,     3,     4,     5,     5,     5,     5,     2,     3,     3,
       5,     3,     3,     3,     4,     5,     5,     5,     5,     3,
       4,     5,     5,     2,     2,     3,     5,     6,     6,     3,
       3,     6,     5,     5,     2,     3,     3,     5,     6,     3,
       2,     2,     3,     2,     3,     2,     3,     5,     6,     2,
       2,     2,     1,     4,     4,     1,     2,     2,     2,     2,
       2,     2,     2,     3,     2,     3,     2,     3,     1,     1,
       1,     1,     1,     0,     2,     0,     2,     0,     1,     0,
       0,     1,     1,     1,     1,     1,     7,     8,     2,     6,
       2,     6,     2,     3,     2,     1,     1,     3,     3,     1,
       4,     2,     1,     3,     3,     4,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     0,     0,     2,     6,     7,
       2,     1,     3,     1,     3,     1,     1,     1,     2,     2,
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
       0,  1070,     0,     0,     0,     0,     0,     0,     0,     0,
    1070,    43,     0,     0,     0,    48,     0,     0,     0,    52,
    1265,    54,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,  1070,     0,   371,
       0,   375,     0,     0,     0,   379,     0,   381,     0,   383,
       0,     0,   537,   387,    20,     0,   543,    21,   548,     0,
       0,   567,   552,   553,   554,   555,   569,   557,   558,   562,
     559,     0,   561,   563,     0,     0,    22,     0,    24,     0,
       0,     0,    26,     0,     0,     0,    27,     0,   591,     0,
       0,     0,   596,     0,    28,     0,     0,     0,     0,     0,
       0,     0,    30,   750,    31,     0,     0,     0,     0,     0,
       0,   751,    32,     0,    33,  1074,  1075,  1071,  1072,  1073,
       0,   139,  1139,     0,   133,     0,     0,     0,    35,     0,
    1150,  1149,  1148,  1147,    37,     0,     0,     0,     0,     0,
     157,     0,    38,     0,  1168,     0,  1165,    39,     0,     0,
       0,     0,    42,     0,    41,    40,     0,     0,     0,     0,
      45,     0,     0,  1197,    46,     0,     0,     0,     0,     0,
      47,  1261,  1260,  1264,  1263,  1262,    49,     0,    50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
       0,  1267,    53,     0,     0,    55,     0,     0,     0,     0,
     157,    56,  1290,    57,     0,     0,    58,     1,     4,     5,
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
     361,   497,   498,   362,   363,     0,     0,   499,   500,   501,
     366,   502,   503,   504,   367,     0,   461,     0,   368,    81,
     458,     0,   369,   370,     0,   511,   505,   510,   506,   507,
     508,   509,   373,   374,   512,   376,     0,   513,   514,   515,
     378,   521,   516,   517,   519,   380,   527,   529,   531,   533,
     526,   528,   535,   382,     0,     0,   540,     0,   386,   157,
     542,   549,     0,   550,   568,   551,   570,   571,   572,   556,
     573,   575,   574,   576,   560,   564,   581,     0,     0,     0,
       0,   577,   565,    25,   586,   587,   588,     0,   583,   584,
       0,     0,     0,   593,   592,     0,     0,     0,     0,    29,
       0,     0,   603,     0,   604,     0,     0,     0,     0,     0,
     605,     0,   749,     0,   606,     0,   607,     0,     0,   608,
       0,   754,   753,   752,     0,   757,     0,     0,     0,   923,
       0,     0,     0,   761,   765,   767,   959,     0,     0,     0,
       0,   861,     0,     0,     0,   896,     0,     0,     0,     0,
       0,     0,     0,   898,     0,     0,     0,    34,   142,   143,
     141,   140,  1145,  1140,  1146,   136,   137,   135,   138,   134,
    1141,     0,  1143,  1144,    36,     0,     0,     0,     0,  1157,
    1158,     0,   157,     0,  1155,  1152,     0,     0,     0,   157,
    1175,  1178,  1176,  1177,  1169,  1170,  1171,  1172,     0,     0,
       0,    44,  1194,  1195,     0,  1202,  1204,  1203,  1199,  1200,
    1198,     0,     0,     0,     0,  1205,     0,  1208,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1206,  1217,
       0,     0,     0,  1207,  1209,  1259,  1192,  1193,  1191,   212,
       0,   216,   208,     0,   218,   209,     0,   220,   210,  1190,
    1189,   211,   213,   214,   215,     0,     0,   207,     0,     0,
       0,     0,  1273,  1286,     0,     0,  1276,     0,     0,  1279,
       0,     0,  1278,  1277,   165,  1296,     0,  1295,  1291,   233,
     229,     0,   238,     0,   235,     0,   254,   152,   155,   156,
     154,   153,   269,   270,   271,   259,   258,   274,   276,   275,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   157,     0,   321,    97,    94,    95,    96,
     157,   323,   322,     0,     0,     0,     0,     0,     0,     0,
     336,     0,   332,   330,   329,   344,   395,     0,     0,   398,
     413,   414,   409,   410,   415,   417,   416,   411,   309,   310,
     406,   405,   421,   420,     0,   425,   439,   440,   429,   442,
     435,   433,   428,     0,     0,   157,   157,   165,   165,   165,
     157,     0,     0,   157,   487,   469,   480,     0,   471,    81,
     482,     0,     0,   473,   475,   157,   492,     0,     0,   478,
       0,     0,   365,     0,   463,    85,    84,   457,     0,     0,
       0,     0,   973,   975,   974,     0,  1063,     0,  1042,     0,
    1045,     0,     0,  1065,  1067,     0,  1058,   372,     0,   518,
     520,   530,   523,   532,   524,   534,   525,   536,   522,     0,
       0,   385,   541,   538,   539,   165,   566,   578,   579,   580,
     582,     0,     0,     0,   602,   590,     0,     0,     0,     0,
       0,     0,   178,   178,   172,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   175,   175,   172,     0,     0,   172,
       0,     0,     0,     0,     0,   644,   668,     0,     0,     0,
     640,     0,     0,     0,     0,   178,   172,     0,     0,   745,
       0,   755,   756,   157,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   811,     0,     0,
       0,     0,     0,   833,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   851,     0,     0,   856,   857,     0,     0,
       0,   876,   878,   877,     0,   880,     0,     0,   887,   889,
     890,   924,     0,     0,     0,     0,   759,   760,   967,   965,
     970,   969,   968,   966,   971,     0,   764,     0,   961,   960,
     768,     0,   964,     0,   769,   770,   771,   772,     0,     0,
       0,     0,     0,   863,     0,     0,   864,  1086,     0,  1089,
    1085,     0,     0,     0,   865,   897,   866,  1104,  1109,  1106,
    1112,  1105,  1103,  1110,  1107,  1101,  1108,  1102,  1111,     0,
       0,   871,     0,     0,     0,     0,   872,  1121,  1125,  1126,
       0,  1123,   873,     0,  1127,   874,   894,     0,     0,     0,
     899,   900,   901,  1142,  1156,     0,     0,  1163,  1159,     0,
       0,     0,  1154,  1153,  1167,  1166,     0,     0,  1183,     0,
       0,  1179,     0,  1187,     0,     0,  1180,     0,  1201,   201,
     201,     0,   201,     0,  1227,     0,  1226,  1218,     0,     0,
       0,     0,  1222,     0,     0,     0,  1225,     0,     0,     0,
       0,     0,  1220,  1228,     0,     0,     0,  1219,   201,   201,
     201,     0,   217,   219,   221,     0,   222,     0,    60,     0,
    1269,     0,  1274,   157,  1289,     0,  1280,  1281,     0,  1283,
    1284,     0,   166,   167,  1275,  1297,  1298,     0,   225,     0,
     239,     0,     0,     0,     0,   273,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   315,   157,
       0,     0,     0,     0,   157,     0,   335,     0,   334,   402,
     401,     0,     0,     0,   157,     0,   165,   447,   445,   449,
     453,     0,     0,     0,   165,     0,   488,   472,     0,   483,
     485,   168,     0,     0,   364,     0,     0,    60,     0,   462,
      83,    82,     0,     0,   985,     0,     0,     0,     0,     0,
       0,   997,     0,     0,     0,     0,     0,     0,  1013,  1014,
       0,     0,     0,     0,  1024,     0,  1030,  1031,  1033,  1035,
       0,  1039,  1050,  1051,  1052,     0,  1054,  1059,  1061,  1062,
    1060,   972,     0,  1041,     0,  1040,   984,     0,     0,  1046,
       0,  1048,     0,  1047,  1068,  1049,  1056,     0,     0,   384,
       0,     0,   589,   585,   600,   601,     0,   598,   594,     0,
     178,   178,   178,   179,   180,   612,   613,   174,   173,     0,
     178,   178,   178,     0,   618,   628,   175,   178,   178,   178,
     176,   177,   178,   178,     0,   178,   178,     0,   175,     0,
     641,     0,     0,     0,   667,     0,   666,     0,     0,   643,
       0,   642,     0,     0,     0,     0,   175,   175,   172,     0,
       0,   172,     0,     0,     0,   178,   178,   741,     0,   178,
     178,   746,     0,   191,   192,   193,   194,   195,   196,     0,
      89,    90,    88,   776,     0,     0,     0,     0,     0,   917,
     915,   910,     0,   920,   904,   921,   907,   919,   913,   902,
     916,   905,   903,   922,   918,     0,     0,   790,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   821,     0,     0,     0,     0,   832,   834,     0,     0,
     839,   838,     0,     0,   181,     0,     0,   157,     0,   847,
       0,     0,     0,     0,   852,   853,   854,     0,     0,     0,
     860,   875,   879,   881,   884,   883,     0,     0,     0,   888,
     925,   927,     0,   926,   762,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1069,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     766,     0,     0,     0,     0,   862,     0,   157,  1082,  1080,
    1078,     0,     0,   157,  1084,   867,     0,     0,     0,     0,
    1120,     0,     0,  1128,   892,   893,     0,   895,  1162,  1164,
    1161,  1160,  1151,     0,     0,     0,  1184,     0,     0,  1188,
    1196,   203,   204,   205,   206,   202,  1211,  1210,     0,     0,
       0,  1213,  1212,   201,     0,     0,     0,  1221,     0,     0,
       0,     0,     0,  1238,     0,  1252,  1251,  1253,     0,     0,
       0,  1224,     0,     0,     0,  1223,  1233,  1232,  1234,  1230,
    1229,  1231,  1255,  1254,  1256,     0,     0,     0,  1271,  1272,
       0,  1287,   157,  1282,  1285,     0,     0,   157,     0,     0,
       0,   236,     0,     0,     0,     0,   277,     0,     0,     0,
       0,     0,     0,     0,   312,   311,     0,     0,   303,   314,
     316,     0,   326,   328,   327,   325,   157,   333,     0,     0,
       0,   165,   157,     0,     0,     0,     0,   467,   481,   490,
       0,   484,   170,   171,   169,   477,     0,   493,     0,     0,
     460,   465,    81,     0,     0,     0,     0,     0,     0,   157,
     986,     0,     0,     0,   991,     0,   157,     0,   998,   999,
       0,  1001,  1002,  1003,     0,     0,     0,  1009,     0,  1015,
       0,     0,     0,  1019,  1020,     0,     0,     0,  1025,  1026,
       0,     0,  1029,  1032,  1034,  1036,     0,     0,  1053,  1055,
     976,  1064,   977,     0,     0,  1066,  1057,     0,     0,   546,
     547,     0,   595,   599,     0,   609,   610,   611,   178,   615,
     616,   617,     0,     0,     0,   622,   623,   172,     0,     0,
       0,   178,   629,   630,   631,   632,   634,   175,   637,   638,
       0,   178,     0,     0,     0,   175,   175,   172,     0,     0,
       0,     0,   665,     0,   669,     0,     0,     0,     0,     0,
     175,   175,   172,     0,     0,   172,     0,     0,     0,     0,
       0,   175,   175,   172,     0,     0,   172,     0,     0,     0,
       0,     0,   175,   175,   172,     0,     0,   172,     0,     0,
       0,     0,   175,   175,   172,     0,     0,     0,   175,   645,
     646,   647,   648,   650,     0,   653,   654,     0,   175,     0,
       0,   739,   740,   178,   743,   744,     0,   775,   157,   777,
       0,     0,     0,     0,     0,     0,     0,   909,   906,   912,
     911,   908,   914,     0,     0,     0,     0,     0,   157,   795,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   812,   813,   814,     0,   818,   815,   817,
       0,     0,   823,   822,   824,     0,     0,     0,     0,     0,
       0,   157,   157,   837,   187,   183,   188,   182,   185,   184,
     186,   843,   844,     0,     0,   846,   848,   157,   157,     0,
     855,   858,   157,   157,   882,   886,   928,   763,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1113,   953,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   954,     0,     0,     0,     0,     0,
     773,   774,   157,   165,  1083,     0,     0,  1087,  1088,     0,
       0,   869,     0,   157,     0,  1122,  1124,   891,     0,  1181,
    1182,  1185,  1186,   201,   201,   201,  1257,  1236,  1235,  1237,
    1240,  1239,  1243,  1242,  1244,  1241,  1249,  1248,  1250,  1246,
    1245,  1247,     0,     0,  1266,     0,  1288,     0,   157,     0,
    1292,     0,     0,   240,     0,   237,     0,     0,     0,     0,
       0,   284,     0,     0,     0,     0,     0,   157,     0,   318,
     145,     0,   422,     0,   443,   165,   168,     0,     0,   456,
       0,   494,   495,     0,   459,     0,     0,     0,     0,     0,
     157,   987,   168,   168,   168,   157,   992,   168,   165,   168,
     168,   157,  1004,   168,   168,   168,   157,  1010,   168,   168,
     157,     0,   168,   157,   168,   168,   157,   168,   157,  1043,
    1044,     0,     0,   545,     0,   614,   619,   620,   621,     0,
     625,   626,   627,   633,   178,   175,   639,   656,   657,   658,
     659,   660,     0,   662,   663,   175,     0,     0,     0,   175,
     175,   172,     0,     0,     0,     0,     0,     0,   175,   175,
     172,     0,     0,     0,     0,     0,     0,   175,   175,   172,
       0,     0,     0,   175,   178,   178,   178,   178,   178,     0,
     178,   178,     0,   175,   175,   178,   178,   178,   178,   178,
       0,   178,   178,     0,   175,   175,   719,   720,   721,   722,
     724,     0,   727,   728,     0,   175,   730,   731,   732,   733,
     734,     0,   736,   737,   175,   649,   175,     0,   655,     0,
       0,   742,     0,   778,   168,     0,     0,   168,     0,     0,
       0,   788,   168,   791,   792,   168,   794,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     816,   819,   820,     0,   168,     0,     0,     0,   835,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1114,  1092,     0,  1099,  1100,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   157,     0,     0,    86,     0,     0,   962,   963,
     165,     0,     0,     0,  1090,   868,   870,   165,   157,  1174,
    1215,  1214,  1216,  1258,     0,  1268,  1299,     0,     0,  1294,
    1293,   241,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   304,   168,   423,   427,   444,   446,     0,   454,
     489,   157,     0,     0,     0,     0,     0,     0,   983,   988,
     990,   989,   993,   994,   995,   996,  1000,  1005,  1006,  1007,
    1008,  1011,  1012,  1016,   165,   168,  1022,   165,  1023,  1027,
     165,  1037,   165,     0,   157,     0,   544,     0,   624,   635,
     178,   175,   664,   178,   178,   178,   178,   178,     0,   178,
     178,   175,   178,   178,   178,   178,   178,     0,   178,   178,
     175,   178,   178,   178,   178,   178,     0,   178,   178,   175,
     178,   679,   680,   681,   682,   684,   175,   687,   688,     0,
     178,   178,   708,   709,   710,   711,   713,   175,   716,   717,
       0,   178,   723,   175,     0,   729,   175,   738,   651,   175,
     747,   748,   157,   780,     0,   168,   782,     0,   157,     0,
     789,   793,   157,     0,   800,   801,   802,   803,   807,   808,
     804,   805,   806,     0,     0,   168,   827,     0,   157,     0,
       0,   840,   168,     0,     0,   168,   168,     0,   885,     0,
     189,   189,     0,     0,   189,     0,   189,  1069,     0,     0,
       0,     0,     0,     0,     0,     0,  1091,     0,     0,   189,
     189,     0,     0,     0,     0,     0,     0,     0,     0,   955,
       0,     0,     0,  1069,    87,     0,   189,     0,  1116,   157,
     157,     0,   165,     0,   223,  1301,  1300,     0,     0,   245,
       0,     0,     0,     0,     0,     0,     0,     0,   319,   455,
       0,   338,     0,   979,     0,   197,     0,  1017,  1018,  1021,
    1028,  1038,   377,     0,   338,     0,   636,   661,   670,   671,
     672,   673,   674,   175,   676,   677,   178,   699,   700,   701,
     702,   703,   175,   705,   706,   178,   690,   691,   692,   693,
     694,   175,   696,   697,   178,   683,   178,   175,   689,   712,
     178,   175,   718,   725,   175,   735,   652,     0,   168,   783,
       0,     0,     0,     0,     0,   809,   810,   825,     0,     0,
       0,   836,   841,     0,   849,   850,   842,   168,     0,   190,
    1069,  1069,    86,     0,  1069,     0,  1069,   929,   157,     0,
    1094,     0,  1097,  1137,  1098,  1096,  1093,     0,  1069,  1069,
      86,     0,     0,  1069,  1069,     0,     0,  1069,   958,   956,
     957,   936,  1069,  1069,  1116,  1132,     0,  1081,  1079,  1118,
       0,     0,     0,     0,   247,   279,   280,     0,     0,     0,
     278,     0,   338,   339,   341,   340,   388,     0,     0,   198,
     200,   199,   981,   982,   338,   390,     0,   178,   678,   178,
     707,   178,   698,   685,   178,   714,   178,   726,     0,   779,
     168,   168,     0,   168,     0,   168,   168,     0,   168,     0,
    1069,   942,   938,  1069,     0,   943,     0,   937,  1069,     0,
    1095,     0,   940,   939,  1069,     0,     0,   934,   932,  1069,
     157,   933,   935,   941,  1132,  1076,     0,     0,  1117,  1130,
    1119,  1173,     0,     0,   286,   287,   285,   305,   308,   306,
       0,     0,   389,   978,   157,   391,   597,   675,   704,   695,
     686,   715,   168,   781,   787,     0,   799,   796,   826,   831,
       0,   845,     0,   947,   931,    86,     0,   945,  1138,     0,
     930,    86,     0,   946,     0,  1077,  1134,  1136,     0,  1129,
       0,     0,     0,     0,     0,     0,   197,     0,   784,   157,
     797,   828,   859,  1069,     0,     0,  1069,     0,   168,  1135,
    1131,   246,     0,     0,     0,     0,     0,   980,   758,   157,
     785,   798,   157,   829,   949,     0,  1069,   948,     0,     0,
     248,   298,     0,   297,     0,   786,   830,    86,   950,    86,
    1069,   296,   295,  1069,  1069,   944,   952,   951
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    56,  1472,   175,   157,   957,  2543,  2544,   450,   451,
     452,   453,   158,   159,   160,   730,   722,    96,   852,   473,
    1264,  1735,  1409,  1422,  1405,  1971,  2650,  1469,  2712,  1636,
     358,   802,   805,   808,   817,    66,   382,   388,   392,   395,
      71,   398,    78,   414,   410,   404,   421,    87,   430,    97,
     103,   435,   437,   439,   507,   910,  1706,   441,   444,   110,
     460,   161,   163,  2706,   179,   181,   224,   952,   991,   496,
     899,   498,   508,   902,   907,   510,   512,   913,   515,   915,
     526,   918,   920,   529,   533,   537,   539,   542,   546,   582,
     578,  1329,   560,   938,   943,   935,  1317,   949,   563,   570,
     574,   592,   595,   600,   605,   613,   982,   984,   986,   988,
     618,   993,   227,   620,  1801,   246,   623,   625,   629,   634,
     642,   256,   252,   264,  1398,   653,   272,   662,  1414,   664,
     670,  1040,  1430,  1035,  1842,  1436,  1434,  1844,  1036,  1439,
    1441,   676,   679,   674,   274,   282,   284,   717,  1117,  1495,
    1106,  1590,  2014,  1120,  1124,  1115,   977,  1371,  1375,  1383,
    1385,  1998,   290,  1133,  1136,  1144,  2305,  2306,  2307,  1999,
    2685,  2686,  1166,  1172,  1175,  2768,  2769,  2765,  2766,  2816,
    2308,  2309,   298,   304,   312,   744,   739,   317,   322,   324,
     754,   761,  1201,  1206,   811,   799,   330,   334,   768,   340,
     775,  1641,   788,   789,  1237,  1232,  1647,  1222,  1653,  1665,
    1661,  1226,   793,   777,   346,   347,   362,  1250,   365,   371,
     829,   832,   826,   373,   376,   837
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2655
static const yytype_int16 yypact[] =
{
    4996,    55,    85,    54, -2655, -2655,  1106,  -185,   943,   463,
    1139,   173,  2951,   149,   317,   363,   945,    52,  5196,   400,
    2325, -2655,   249,   200,   210,  1301,   179,  1319,    -9,   192,
     238,   182,   694,   186,   724,  2686,    19,   995,   465,   397,
     182, -2655,   253,   105,  1087, -2655,    95,   490,  1187, -2655,
      90, -2655,   115,   700,   257,   130,   517,    32,   621,   241,
     602,   623,   132,   631,    64,   162, -2655, -2655, -2655,   980,
     827, -2655,   240,    11,   317,    -5,   617,   525, -2655,   633,
     827, -2655, -2655,   827,   827,    44,   827, -2655, -2655, -2655,
   -2655,   827, -2655, -2655, -2655, -2655, -2655, -2655,    58,   610,
     639,   656,   183, -2655,   827,  1421,   827,   827,  1176,   827,
   -2655, -2655, -2655,   469, -2655, -2655, -2655, -2655,  4496, -2655,
   -2655, -2655, -2655, -2655, -2655,   827, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655,  1678, -2655,
     827, -2655,   675, -2655, -2655,   317,   317,   317,   317,   317,
     317,   317,   317,   317,   317, -2655, -2655, -2655, -2655, -2655,
     570, -2655,   661,  1725,   577,   373,   434,   530,    70,  3883,
     722,  4547,  4347,   735,  4496,  3442, -2655,   314,  -131,   690,
     771,   717,   303,   484,   507,   889,   793,   182,   829, -2655,
     744, -2655,   581,   534,   495, -2655,   385, -2655,  1101, -2655,
      23,   748,    69, -2655, -2655,  4621, -2655, -2655, -2655,   758,
     798,   849, -2655, -2655, -2655, -2655,   736, -2655, -2655, -2655,
   -2655,   609, -2655, -2655,  4621,  4131, -2655,   888, -2655,    25,
    4621,   904, -2655,   909,  4621,   919, -2655,    56, -2655,   922,
     929,    71, -2655,   827, -2655,   940,    41,   947,   263,    29,
     954,   106, -2655, -2655, -2655,   957,   962,   317,   317,   827,
     827, -2655, -2655,   969, -2655, -2655, -2655, -2655, -2655, -2655,
    3255,   822, -2655,   986,    43,   827,  4621,   827, -2655,   992,
   -2655, -2655, -2655, -2655, -2655,   827,  1173,   317,  3376,   827,
    1678,   827, -2655,   981, -2655,  5234, -2655, -2655,   868,  1002,
    1006,   827, -2655,  1009, -2655, -2655,   -10,   994,  4621,  1011,
   -2655,  1400,   827,   956, -2655,   531,   934,  1478,   118,  1056,
   -2655, -2655, -2655, -2655, -2655, -2655, -2655,  1081, -2655,   726,
     296,   493,   571,    66,   827,  1084,   827,   204, -2655,   827,
     800,  1090, -2655,   827,   827, -2655,     7,    35,    50,  1095,
    1678, -2655, -2655, -2655,   989,   827, -2655, -2655, -2655, -2655,
   -2655,   827, -2655,  1104,  1100, -2655,   827,   710, -2655, -2655,
   -2655, -2655, -2655, -2655,   827, -2655, -2655,   827, -2655, -2655,
     579,   579, -2655,  1115, -2655, -2655, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655, -2655,   948,   827,   827,  1120,  1135,
    1154, -2655, -2655,   827,   827,   827,   827,   827,   827,   827,
   -2655,   827, -2655,  1158, -2655, -2655, -2655, -2655,   967, -2655,
    1164, -2655,  4621,  1169, -2655,   827, -2655, -2655, -2655,   827,
    1181,  1185,  1185,  4621,   827,   827,   827,   827,   827,   827,
   -2655,   827,  4496,  1421,   827,   827, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655,  1421,   827, -2655, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655, -2655, -2655,  1186, -2655,   923,    24,
   -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655,   -69,
   -2655, -2655, -2655,  1033, -2655,   312,   408,   408, -2655, -2655,
   -2655,  1207, -2655,  1209, -2655, -2655,   -30, -2655,  1041, -2655,
   -2655, -2655,  1042, -2655, -2655,  1678, -2655,   827,   827, -2655,
    4621,  4621,  1678, -2655, -2655,  1678, -2655, -2655, -2655, -2655,
    1678, -2655, -2655,  4621,  1678,   827, -2655, -2655,  4621, -2655,
    1225,   663,  1027,    18, -2655, -2655,  1029,  4621,    16, -2655,
   -2655, -2655, -2655, -2655, -2655,  1230,  1236, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655, -2655,  1239, -2655,  1046, -2655,   -81,
   -2655,   827, -2655, -2655,   841, -2655, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655, -2655, -2655,    23, -2655, -2655, -2655,
   -2655, -2655, -2655,  1049,  1059, -2655, -2655,  1191,  1193,  1199,
   -2655, -2655,  1043, -2655,   827,  1279,  1052,  5234, -2655,  1678,
   -2655, -2655,  1287, -2655, -2655, -2655, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655, -2655, -2655, -2655,  4621,  4621,  4621,
    4621, -2655, -2655, -2655, -2655, -2655, -2655,  1292, -2655, -2655,
    1306,  1312,   317, -2655, -2655,  1314,  1331,  1119,   827, -2655,
     693,  1251, -2655,  1334, -2655,   584,  1256,  4649,   104,  1340,
   -2655,  1343, -2655,  1349, -2655,    28, -2655,  1350,  1352, -2655,
    1357, -2655, -2655, -2655,   827, -2655,  5234,  4464,  1217,   554,
    1368,   340,  1276, -2655, -2655, -2655,     0,   634,  1376,  1379,
      13,   827,   536,   543,   713,  4621,   317,  1659,   714,    67,
     432,   545,    14, -2655,  1370,  1372,  1388, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655,
   -2655,   827, -2655, -2655, -2655,   827,   827,   827,   827, -2655,
   -2655,   827,  1678,   827, -2655,   827,  1421,   827,  1393,  1678,
   -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655,  1395,    68,
     410, -2655, -2655, -2655,  1396, -2655, -2655, -2655, -2655,  1307,
   -2655,  1416,  1422,  1347,  1433, -2655,  1436, -2655,  1437,  1351,
    1438,   426,    63,   509,   402,   567,  1441,   569, -2655, -2655,
    1442,  1446,  1448, -2655, -2655,  1451, -2655, -2655, -2655, -2655,
    1452, -2655, -2655,  1453, -2655, -2655,  1457, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655, -2655,   827,   827, -2655,   827,  1066,
     827,   827, -2655,  5234,  1399,  1462, -2655,  1086,  1466, -2655,
    1180,  1470, -2655, -2655,    -6,   827,   827, -2655,  1471, -2655,
   -2655,  1484,  1162,   827,  1479,   622, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655,
    1487,  1492,   827,   827,   827,   827,   827,   827,   827,  1498,
     317,  1500,  1501,  1678,  4621, -2655, -2655, -2655, -2655, -2655,
    1678, -2655, -2655,   827,   827,   827,  4621,   827,  1421,   827,
   -2655,   827, -2655, -2655, -2655, -2655, -2655,  1510,  1512, -2655,
   -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655,
   -2655, -2655,   722, -2655,   827, -2655, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655,  4621,   827,  1678,  1678,    -6,    -6,    -6,
    1678,  1421,   827,  1678, -2655, -2655, -2655,   827, -2655,   -81,
    1348,  1513,  1518, -2655, -2655,  1678, -2655,  1361,  1367, -2655,
    1527,  1530, -2655,  1528,  1216,  1499,  1504, -2655,   827,  1374,
     809,   421, -2655, -2655, -2655,   827,   529,  1224, -2655,  1270,
   -2655,  1659,  1277,   558,  1249,    99, -2655, -2655,   827, -2655,
   -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655,   827,
    1550, -2655, -2655, -2655, -2655,    -6, -2655, -2655, -2655, -2655,
   -2655,  1552,  1553,  4686, -2655, -2655,  1554,  1555,   827,  1556,
    1559,  1562,   376,   376,   -53,  1569,  1570,  1587,  1588,  1316,
    1320,  1600,  1601,  1605,   110,   110,   -53,  1607,  1608,   -53,
    1614,  1621,  5197,  1622,  1625, -2655, -2655,  1626,  1629,   780,
   -2655,  1631,  1632,  1636,  1639,   376,   -53,  1633,  1643, -2655,
    1644, -2655, -2655,  1678,   918,  1507,  1405,  1414,  1417,  1560,
    2311,  1418,  1646,     2,  1525,  1564,   968,  1565,  1641,  1428,
    1449,  1582,  1663,  1473,    42,    47,   411,  1450,  4621,  1659,
    1662,   687,  1454,  1482,  1699,    40, -2655, -2655,   116,  1701,
    1704, -2655, -2655, -2655,  1705,  1486,   126,  1659,  1494, -2655,
   -2655, -2655,   317,  1711,  1713,   827, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655, -2655,     5, -2655,  1776, -2655, -2655,
   -2655,   827, -2655,   827, -2655, -2655, -2655, -2655,   827,   827,
     827,   340,  4621, -2655,  1714,  1258, -2655, -2655,   827, -2655,
   -2655,   827,  4621,   827, -2655, -2655, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655,   317,
     827, -2655,   827,   340,  1721,  1727, -2655, -2655, -2655, -2655,
     827,   827, -2655,   317, -2655, -2655, -2655,   194,  1729,  1730,
   -2655, -2655, -2655, -2655, -2655,   827,   827, -2655, -2655,  1421,
     827,   827, -2655, -2655, -2655, -2655,  1736,   827, -2655,   827,
    1606, -2655,   827, -2655,   827,  1630, -2655,  1739, -2655,  1205,
    1205,   573,  1205,  1740, -2655,   588, -2655, -2655,  1741,  1745,
     615,  1749, -2655,  1751,  1752,  1756, -2655,   635,   647,  1758,
    1759,  1762, -2655, -2655,  1766,  1768,  1770, -2655,  1205,  1205,
    1205,   827, -2655, -2655, -2655,   827, -2655,   827,   572,  4621,
   -2655,   827, -2655,  1678, -2655,  5234, -2655, -2655,  1771, -2655,
   -2655,  1778, -2655, -2655, -2655, -2655,  1733,  3376, -2655,   827,
    1764,   827,   827,   827,  1000, -2655,  1777,   827,   827,  1782,
     827,   827,   827,   827,   -15,  1787,   317,   317, -2655,  1678,
     827,  1783,  1790,  1794,  1678,  4621, -2655,   827, -2655, -2655,
   -2655,   827,   827,   827,  1678,  4621,    -6, -2655, -2655, -2655,
   -2655,  1421,   827,  1795,    -6,   827,   695, -2655,  1798, -2655,
   -2655,   556,  3796,   827, -2655,   827,  1800,  1805,   827, -2655,
   -2655, -2655,  1802,   978,  4496,  1567,  1568,  1571,    80,  4621,
    1572, -2655,   272,  1679,   119,  1573,  1576,   172, -2655, -2655,
     528,  1655,   519,   -87,  1659,   878, -2655,  1826,  1574, -2655,
     769, -2655, -2655, -2655, -2655,  1659,  1616, -2655, -2655, -2655,
   -2655, -2655,   827, -2655,   827, -2655, -2655,   827,   827, -2655,
     827, -2655,   827, -2655, -2655, -2655, -2655,  1635,   827, -2655,
     827,    46, -2655, -2655, -2655, -2655,  1830,  1831, -2655,   827,
     376,   376,   376, -2655, -2655, -2655, -2655, -2655, -2655,  1836,
     376,   376,   376,  1083, -2655, -2655,   110,   376,   376,   376,
   -2655, -2655,   376,   376,  1837,   376,   376,  1838,   110,  1129,
   -2655,  1839,  1843,  1847, -2655,  1053, -2655,  1192,  1345, -2655,
    1440, -2655,  1578,  1848,  1849,  1852,   110,   110,   -53,  1860,
    1861,   -53,  1862,  1864,  1865,   376,   376, -2655,  1867,   376,
     376, -2655,  1868, -2655, -2655, -2655, -2655, -2655, -2655,   317,
   -2655, -2655, -2655,  4496,  1286,   827,  1404,  1326,   859, -2655,
   -2655, -2655,   884, -2655, -2655, -2655, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655, -2655,  1869,   827, -2655,   317,  1870,
     827,  4621,   317,  1545,  1596,  1634,   258,   292,  1637,   313,
    1558,  1561,  1874,  1878,  1879,  2311,  1881,  1884,  1885,  1575,
    1579,  1268,  1887,   827,  1411,  1652, -2655, -2655,   317,  4621,
   -2655, -2655,  4621,   827,    65,  1893,   827,  1678,   317, -2655,
    1896,  4621,  4621,   827, -2655, -2655, -2655,   317,   317,  4621,
   -2655, -2655, -2655, -2655, -2655, -2655,  4621,   827,   317, -2655,
   -2655, -2655,   827, -2655, -2655,  1897,   827,  1670,   224,   827,
    1671,   827,   280,   827, -2655,   827,  1672,  1674,   827,   827,
     827,   827,   827,   827,   827,   827,    30,   827,   827,  1677,
   -2655,   827,   827,   827,   827, -2655,  4621,  1678,  1907,  1909,
    1911,   827,   827,  1678, -2655,   827,   827,   827,  4621,   340,
   -2655,   827,   827, -2655, -2655, -2655,  1912, -2655, -2655, -2655,
   -2655, -2655, -2655,  1914,   827,   827, -2655,   827,   827, -2655,
   -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655,  1915,  1916,
    1918, -2655, -2655,  1205,  1919,  1920,  1922, -2655,  1923,  1934,
    1935,  1936,  1938, -2655,  1939, -2655, -2655, -2655,  1941,  1942,
    1944, -2655,  1945,  1946,  1949, -2655, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655, -2655,   827,   827,   827, -2655, -2655,
     827, -2655,  1678, -2655, -2655,  3376,   827,  1678,   827,   827,
     827, -2655,   827,   827,  1951,   827, -2655,   827,   827,  1953,
     827,   827,   827,   827, -2655, -2655,  1954,  4621, -2655, -2655,
   -2655,   827, -2655, -2655, -2655, -2655,  1678, -2655,  1076,   827,
    1076,    -6,  1678,  4621,   827,   827,  1955, -2655, -2655, -2655,
     827, -2655, -2655, -2655, -2655, -2655,  4621, -2655,  4621,   827,
   -2655, -2655,   -81,  1956,  1957,  1958,  1959,  1960,  4621,  1678,
   -2655,  4621,  4621,  4621,  4496,  4621,  1678,  4621, -2655, -2655,
    4621, -2655, -2655,  4496,  4621,  4621,  4621,  4496,  4621, -2655,
    4621,  4621,   827, -2655, -2655,  4621,  4621,  4621, -2655, -2655,
    4621,  4621, -2655, -2655, -2655, -2655,  4621,  4621, -2655, -2655,
   -2655, -2655, -2655,   827,   827, -2655, -2655,  1962,   827, -2655,
   -2655,  1963, -2655, -2655,   827, -2655, -2655, -2655,   376, -2655,
   -2655, -2655,  1964,  1967,  1968, -2655, -2655,   -53,  1970,  1971,
    1972,   376, -2655, -2655, -2655, -2655, -2655,   110, -2655, -2655,
    1974,   376,  1975,  1976,  1977,   110,   110,   -53,  1979,  1980,
    1990,  1447, -2655,  1455, -2655,  1464,  1591,  2004,  2010,  2011,
     110,   110,   -53,  2014,  2015,   -53,  2016,  1638,  2017,  2018,
    2019,   110,   110,   -53,  2021,  2025,   -53,  2027,  1642,  2028,
    2030,  2031,   110,   110,   -53,  2026,  2033,   -53,  2034,  2035,
    2037,  2038,   110,   110,   -53,  2041,  2043,  2044,   110, -2655,
   -2655, -2655, -2655, -2655,  2047, -2655, -2655,  2048,   110,  2049,
    2050, -2655, -2655,   376, -2655, -2655,  2051, -2655,  1678, -2655,
    4621,   827,   827,  4621,   827,  2052,  1507, -2655, -2655, -2655,
   -2655, -2655, -2655,  2053,  4621,   317,  2054,  4621,  1678, -2655,
    2056,  1507,   827,   827,   827,   827,   827,   827,   827,   827,
     827,  2059,  2061, -2655, -2655, -2655,  2062, -2655, -2655, -2655,
    2066,  2070, -2655, -2655, -2655,   827,  4621,   827,  2078,  1507,
     317,  1678,  1678, -2655, -2655, -2655, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655,   827,  1421, -2655, -2655,  1678,  1678,   827,
   -2655, -2655,  1678,  1678, -2655, -2655, -2655, -2655,   827,   827,
     827,   827,   827,   827,   827,   827,   827,   827,  2587, -2655,
     827,   827,   827,   827,   827,   827,   827,   827,   827,   827,
     827,  3406,  2079,   827, -2655,   827,   827,   827,  2071,  2081,
   -2655, -2655,  1678,    -6, -2655,  2082,  2084, -2655, -2655,  1421,
     827, -2655,  2087,  1678,  4621, -2655, -2655, -2655,  2088, -2655,
   -2655, -2655, -2655,  1205,  1205,  1205, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655,
   -2655, -2655,  1507,   827, -2655,   827, -2655,   827,  1678,   827,
   -2655,  1421,   827, -2655,   827, -2655,  1903,  2090,  2091,   827,
     827, -2655,   827,   827,   827,   827,  2094,  1678,  4621, -2655,
   -2655,   827, -2655,   827, -2655,    -6,   556,   827,  2095, -2655,
     827, -2655, -2655,  4496, -2655,  2098,  2101,  2102,  2103,  2104,
    1678, -2655,   556,   556,   556,  1678, -2655,   556,    -6,   556,
     556,  1678, -2655,   556,   556,   556,  1678, -2655,   556,   556,
    1678,  4621,   556,  1678,   556,   556,  1678,   556,  1678, -2655,
   -2655,  2106,  4496,  2107,   827, -2655, -2655, -2655, -2655,  2110,
   -2655, -2655, -2655, -2655,   376,   110, -2655, -2655, -2655, -2655,
   -2655, -2655,  2111, -2655, -2655,   110,  2113,  2114,  2115,   110,
     110,   -53,  2112,  2117,  2118,  2119,  2121,  2122,   110,   110,
     -53,  2124,  2126,  2128,  2129,  2131,  2132,   110,   110,   -53,
    2127,  2135,  2137,   110,   376,   376,   376,   376,   376,  2136,
     376,   376,  2139,   110,   110,   376,   376,   376,   376,   376,
    2141,   376,   376,  2142,   110,   110, -2655, -2655, -2655, -2655,
   -2655,  2143, -2655, -2655,  2144,   110, -2655, -2655, -2655, -2655,
   -2655,  2145, -2655, -2655,   110, -2655,   110,  2146, -2655,  2147,
    2148, -2655,  5234, -2655,   556,  2152,  4621,   556,   827,  4621,
    2153, -2655,   556, -2655, -2655,   556, -2655,  4621,  2154,   827,
     827,   827,   827,   827,   827,   827,   827,   827,   827,   827,
   -2655, -2655, -2655,  4621,   556,   827,  4621,  2155, -2655,  1421,
    1421,  4621,  1421,  1421,  4621,  4621,  1421,  1421,   827,   827,
     827,   827,   827,   827,  1507,   827,   827,   827,  1586,  1604,
    1657,  1685,  1692,  1723,  1748,  2587, -2655,  1803, -2655, -2655,
    1507,   827,   827,   827,   827,  1507,   827,   827,   827,   827,
     827,   827,  1678,   827,  1624,  1507,   827,   827, -2655, -2655,
      -6,   317,  4621,  4621, -2655, -2655, -2655,    -6,  1678,  2157,
   -2655, -2655, -2655, -2655,   827, -2655, -2655,  1421,   827, -2655,
   -2655, -2655,  1071,  2160,  2162,  2165,  2166,   827,   827,   827,
    2167,  1076, -2655,   556, -2655, -2655, -2655, -2655,  2168, -2655,
   -2655,  1678,  2170,  2171,  2173,  2174,  4621,  2175, -2655, -2655,
   -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655,    -6,   556, -2655,    -6, -2655, -2655,
      -6, -2655,    -6,  2176,  1678,  2178, -2655,   827, -2655, -2655,
     376,   110, -2655,   376,   376,   376,   376,   376,  2179,   376,
     376,   110,   376,   376,   376,   376,   376,  2180,   376,   376,
     110,   376,   376,   376,   376,   376,  2181,   376,   376,   110,
     376, -2655, -2655, -2655, -2655, -2655,   110, -2655, -2655,  2182,
     376,   376, -2655, -2655, -2655, -2655, -2655,   110, -2655, -2655,
    2183,   376, -2655,   110,  2184, -2655,   110, -2655, -2655,   110,
   -2655, -2655,  1678, -2655,  4621,   556, -2655,  2185,  1678,   827,
   -2655, -2655,  1678,   827, -2655, -2655, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655,   827,   827,   556, -2655,  2186,  1678,   827,
    1421, -2655,   556,   827,  1421,   556,   556,  4621, -2655,   827,
    2188,  2188,   827,   827,  2188,  1507,  2188, -2655,  4621,  2311,
    2189,  2191,  2192,  2193,  2194,  2196, -2655,   317,  1507,  2188,
    2188,   827,   827,  1507,   827,   827,   827,   827,   827, -2655,
    1421,   827,  2197, -2655, -2655,   827,  2188,   317,    53,  1678,
    1678,   317,    -6,  2199, -2655, -2655, -2655,  2200,   827, -2655,
    2202,  2204,  2205,  2206,  2207,  2208,  2209,   827, -2655, -2655,
    2210,   -19,  4621, -2655,  2211,    94,  4621, -2655, -2655, -2655,
   -2655, -2655, -2655,  2213,   -19,   827, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655,   110, -2655, -2655,   376, -2655, -2655, -2655,
   -2655, -2655,   110, -2655, -2655,   376, -2655, -2655, -2655, -2655,
   -2655,   110, -2655, -2655,   376, -2655,   376,   110, -2655, -2655,
     376,   110, -2655, -2655,   110, -2655, -2655,   827,   556, -2655,
    4621,  4621,   827,  4621,   827, -2655, -2655, -2655,  4621,  4621,
     827, -2655, -2655,  4621, -2655, -2655, -2655,   556,  2215, -2655,
   -2655, -2655,  1507,   827, -2655,  2216, -2655, -2655,  1678,  2217,
   -2655,  2219, -2655, -2655, -2655, -2655, -2655,  2220, -2655, -2655,
    1507,   827,  2221, -2655, -2655,   827,  4621, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655,    53,  1684,  1659, -2655, -2655, -2655,
     317,  2222,  2223,  2224, -2655, -2655, -2655,  2226,  2227,  2228,
   -2655,    39,   -19, -2655, -2655, -2655, -2655,  2230,  4621, -2655,
   -2655, -2655, -2655, -2655,   -19, -2655,  2231,   376, -2655,   376,
   -2655,   376, -2655, -2655,   376, -2655,   376, -2655,  5234, -2655,
     556,   556,   827,   556,  2232,   556,   556,   827,   556,   827,
   -2655, -2655, -2655, -2655,  2233, -2655,   827, -2655, -2655,  2234,
   -2655,   827, -2655, -2655, -2655,  2236,   827, -2655, -2655, -2655,
    1678, -2655, -2655, -2655,  1684, -2655,  1827,  1809,  1659, -2655,
   -2655, -2655,  2237,  2238, -2655, -2655, -2655, -2655, -2655, -2655,
     504,   504, -2655, -2655,  1678, -2655, -2655, -2655, -2655, -2655,
   -2655, -2655,   556, -2655, -2655,  2240, -2655,  4496, -2655, -2655,
    2242, -2655,  1507, -2655, -2655,  1507,   827, -2655, -2655,   827,
   -2655,  1507,   827, -2655,  4621, -2655,  1827, -2655,   317, -2655,
    2244,  2245,   827,   827,   827,   827,    94,  2246,  4496,  1678,
   -2655,  4496, -2655, -2655,   827,  2243, -2655,   827,   556, -2655,
   -2655, -2655,  2247,  2248,   827,  2249,   827, -2655, -2655,  1678,
   -2655, -2655,  1678, -2655, -2655,  2263, -2655, -2655,  2265,  2266,
   -2655, -2655,  2268, -2655,  2273, -2655, -2655,  1507, -2655,  1507,
   -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2655, -2655,    -3, -2655,   308,  -935, -1713,  -991,  1728, -2655,
     853,  -387,  1910,   -51,    26, -2655, -2655, -1711,  1774,  1506,
    -902, -1965, -1008,   716,  1656, -2655,  -762, -2655,  -633, -1141,
   -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655,  -505,  -506, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655, -2499, -2655, -2655, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -1512,
   -2655, -2655, -2655, -2655, -2655,  -697, -2655, -2655, -2655, -2655,
   -2655, -2655,     4, -2655, -2655, -2655, -2655,  -104,  -690, -1522,
    -480, -2655, -2655, -2655, -2655, -2655,  -553,  -543, -2655, -2655,
   -2654, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655,  1460, -2655, -2655, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655, -2655,
   -2655, -2655, -2655, -2655, -2655, -2655
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1271
static const yytype_int16 yytable[] =
{
      70,   911,   370,  1946,  1316,  1132,  1135,  2091,   109,  2093,
    1564,   823,  2703,   178,    67,    68,  1118,  1159,  1424,  1176,
     946,  1427,   940,   111,   313,  1308,  1309,  1310,  1498,  1127,
     644,  1704,   309,    67,    68,  2011,   111,   378,  1458,   827,
     333,  1043,    67,    68,   326,  1546,   660,   724,   426,   364,
      67,    68,   375, -1115,   830,   381,   955,    67,    68,   387,
     651,   311,   394,   433,  1473,  1799,   397,   399,  1528,  1637,
     409,  1642,  1163,   416,   420,   656,   890,   423,   809,   114,
     424,   425,  1530,   431,   616,  2715,   893,  1775,   432,  1044,
     561,  1964,  1262,  1391,   359,   390,    58,  1672,  1673,  1674,
    1754,   445,   449,   454,   455,   459,   461,  1197,    67,    68,
      79,   677,  2817,  1965,  1177,  1386,  1966,  1407,    67,    68,
    1178,    57,   465,   671,  1218,  2709,  1420,  1967,   897,    67,
      68,  2367,   900,    67,    68,    67,    68,   412,    59,  1763,
     116,   672,  1548,   759,   464,   341,  1776,  2379,  2380,  2381,
    1968,   947,  2383,   116,  2385,  2386,    60,   474,  2388,  2389,
    2390,  1554,  2839,  2392,  2393,    67,    68,  2396,  1969,  2398,
    2399,   916,  2401,  2704,  1499,   956,    67,    68,   413,   790,
    1198,   162,   506,  1531,   562,  1219,    61,   527,   442,   941,
     901,  1037,  1767,   657,   265,   342,   111,   275,  1387,  1614,
     180,   427,   428,  2782,   343,    62,   405,    67,    68,    63,
    1615,   584,   104,   443,  1777,  2785,   528,   360,   536,   898,
     541,   545,  1408,    64,   673,  1220,  1045,    67,    68,   119,
     273,   581,   105,  1128,  2777,   344,   917,   120,   121,   285,
     791,   824,   119,   283,   400,   513,   614,   122,   725,  1500,
     120,   121,   299,   111,   514,   726,   727,   652,   276,   760,
     658,   249,  1555,   810,   749,  1263,  1038,  1705,   665,  1119,
    1199,   253,  2705,   617,  1421,  1529,   684,   685,  1934,  2473,
     277,  1379,  2476,    67,    68,   106,  2710,  2480,   393,  1800,
    2481,   728,   731,   434,   733,  1501,   661,  1547,  1758,   429,
     111,  1046,   735,   738,   361,   741,   745,   331,   747,  2496,
     825,  1047,  1936,   116,   327,   247,   286,  1129,   757,   948,
    1565,   111,   164,   176,   406,   124,  1179,  1755,   767,   769,
     248,   314,   828,  1939,   743,   278,  1164,   281,   124,   645,
     942,   315,  1200,  1048,   316,  2012,  1221,   831, -1115,  1549,
    1532,   812,  2778,   814,   816,   391,   818,    69,   547,  1192,
     821,   822,   800,  1165,   567,   379,  1764,   111,   407,   408,
     116,   836,   838,   548,   154,   107,    67,    68,   839,   155,
     156,   666,   411,   842,   844,  2711,   678,   154,    65,  1538,
     904,   845,   155,   156,   846,   549,   504,  2779,  2568,   729,
     345,   792,   119,  1108,  1723,   601,   165,  1558,   332,   166,
     120,   121,  1727,   856,   857,   550,   287,   116,   363,  1768,
     861,   862,   863,   864,   865,   866,   867,  1970,   868,  1556,
    2578,   288,   551,   374,  1596,   386,   552,   815,   116,   167,
    1894,   401,   875,  1897,  1759,  1109,   876,   168,  1167,  1202,
    1367,   881,   882,   883,   884,   885,   886,  1990,   887,   119,
     449,   891,   892,   667,   553,   554,  1608,   120,   121,   323,
     449,   894,   108,   476,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   225,   116,   325,  1916,   778,   889,  1227,
      88,   905,   402,   250,   348,   289,   372,   111,   124,   403,
     226,  1296,  2046,   254,   279,  1935,   119,    67,    68,   169,
    2629,   575,  1931,  1995,   120,   121,   251,   377,   668,  1760,
     383,   555,  1203,   602,   923,   924,   255,   119,    67,    68,
    2637,   556,    67,    68,  1959,   120,   121,  2642,  1403,  1937,
    2645,  2646,   932,   669,  1312,   571,   328,   154,   780,   111,
     908,   280,   155,   156,  1769,   124,   597,  1168,  1101,   803,
    1940,    67,    68,   170,  1228,  1761,   994,  1404,   499,   329,
    1223,   906, -1270,   119,   500,   111,  1678,   937,   958,  1732,
    1733,   120,   121,  1102,  1110,   682,   683,  1368,   171,  1020,
     172,   909,   771,   557,   558,   576,   568,  1021,  1022,  1108,
    1111,  1112,   124,   417,   154,  1169,  1108,   384,   847,   155,
     156,   989,  1204,   501,   116,   740,  1034,    89,   173,   569,
      67,    68,   978,   124,    67,    68,  1273,   385,  1229,   577,
    1234,  1224,   603,  1274,  1638,  1053,   389,   806,   422,   502,
     436,  1109,  1369,    90,   438,  1023,   908,    91,  1109,  1644,
    2567,   154,  1170,   772,  1734,  1008,   155,   156,   801,   804,
     807,   440,   604,  2729,  1778,   559,   116,   936,  1370,   124,
    1134,   462,   154,  1121,   848,  1788,  1650,   155,   156,   475,
     380,  1052,  2739,  1534,  1205,   174,   503,   909,   486,  1230,
    1535,  1235,   116,  1113,  1114,  1639,  1658,   497,  1130,  1729,
      92,  1143,  1770,   119,   418,   511,  1009,  1010,  1662,   786,
    1645,   120,   121,    67,    68,   366,    67,    68,   154,   114,
    1103,   843,   367,   155,   156,    67,    68,   487,  1183,   509,
     504,   505,  1184,  1185,  1186,  1187,  1171,  1651,  1188,   291,
    1190,    93,  1191,   449,  1193,  1373,  1122,   849,  1137,    94,
      95,   114,  1138,  1160,  1011,   119,   564,  1659,   292,   796,
     293,  1771,   630,   120,   121,  2793,  2794,   538,  2796,  1663,
    2798,  2799,  1253,  2801,  1381,  1104,   565,   572,   114,   626,
    1110,   119,  1024,  1025,   419,  1442,   773,  1110,   598,   120,
     121,  1773,  1225,  1443,  1444,  1785,  1111,  1112,  1774,   124,
     573,  1105,  1620,  1111,  1112,  1131,   566,  2104,   583,  2149,
     593,   599,  1245,  1246,   774,  1247,  1249,  1251,  1252,  2094,
    1540,   594,   415,   627,   621,  1139,  1161,  2827,   596,  2162,
      67,    68,  1265,  1266,   797,   631,  1123,   615,   850,  1270,
    1271,  1445,  1173,   851,  2199,   959,   960,  2202,   154,  1140,
    1231,   124,  1236,   155,   156,  2210,  1640,  1026,  2213,  1277,
    1278,  1279,  1280,  1281,  1282,  1283,  2221,  1027,  1028,  2224,
     622,  1646,  1029,  2859,   585,  1362,  2231,   124,   632,   624,
    1291,  1292,  1293,   294,  1295,   449,  1297,   122,  1298,  1113,
    1114,  1012,  1013,   643,   579,   586,  1113,  1114,  1652,  1030,
     154,   961,  2340,  2341,  2342,   155,   156,   962,   647,  1301,
     587,  1303,  2034,   718,   648,  1141,  1162,   633,  1660,   122,
    1541,  1305,   750,   650,  1724,  2250,   154,   654,   449,  1313,
    1664,   155,   156,   655,  1315,   300,   628,   798,  1302,  2743,
    2258,  1363,   295,  1786,   659,   114,   122,    80,    67,    68,
     368,  1328,   663,   369,   580,  1332,   963,  2754,   751,   675,
    1004,   680,  1372,  1374,  1377,  1917,  1014,   681,  2277,  1364,
    1382,   870,   871,   964,   686,  1388,  1015,  1016,  1446,  1447,
    1542,  1433,    81,    67,    68,   748,  1389,   296,   965,  1504,
    1920,   723,    67,    68,   966,  2657,   297,   734,   719,   762,
    1463,   967,  1787,    67,    68,  1399,   755,  2659,  1017,   177,
     756,  1779,   752,   758,  1146,   764,  1142,  1505,   588,  1174,
    1506,  2681,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
    1507,  1365,  1780,  1448,   770,    82,   776,   968,  1846,  1694,
    1743,   794,  1918,  1449,  1450,   318,  1847,  1848,  1451,    67,
    1248,  2343,  1533,  1464,    67,    68,   969,   589,   301,  1508,
     819,   970,  1509,   971,   302,   795,   303,  1921,   813,   720,
    1256,  1257,  2833,  1557,   820,  1452,  1812,  1813,  2836,   833,
      83,    84,  1563,    88,  1366,   841,   396,   721,   840,   972,
     973,  1781,   335,   122,  1849,   835,  1919,   974,  1591,   854,
    1592,  2331,   590,   753,   858,  1593,  1594,  1595,  2741,  2742,
    2557,   591,  2745,  1744,  2747,  1601,   975,   606,  1602,   859,
    1604,  1922,  1832,  1833,  1814,    85,  2752,  2753,   607,  1465,
    1466,  2757,  2758,   855,  2873,  2761,  2874,  1606,   860,  1607,
    2762,  2763,   869,  2418,  1467,    67,    68,  1611,  1612,   872,
     319,  1782,  2427,  1269,   874,   608,    67,    68,  1285,    67,
      68,  2436,  1618,  1619,  1259,  1260,   449,  1621,  1622,   446,
    1834,   895,   976,  2366,  1624,   448,  1625,  1857,    86,  1627,
     336,  1628,   896,  1510,  1682,  1858,  1859,  1468,   903,  1745,
    1746,   912,   736,   914,   337,   456,  2384,   921,  2803,    67,
    1327,  2804,    98,   349,  1747,   919,  2807,    67,    68,   934,
      89,   939,  2810,   944,   350,   950,  1511,  2813,  1675,    99,
    1376,   951,  1676,   953,  1677,   979,  1631,  1632,  1680,   320,
     954,  1850,  1851,  1860,   609,   980,    90,   981,   321,   983,
    2090,   351,  1599,  1600,  1686,   985,  1689,  1748,  1691,  1692,
    1693,  1695,  1952,  1953,  1697,  1698,   987,  1700,  1701,  1702,
    1703,  1815,  1816,  1090,   990,   737,   992,  1711,   457,    67,
      68,  1910,   996,  1688,  1717,   610,  1001,  1091,  1718,  1719,
    1720,    72,   338,  2515,   878,   879,  1092,    73,   449,  1725,
    1002,  2854,  1728,    92,  2857,   339,  1003,  1093,  1005,  2528,
    1738,   100,  1739,  1007,  2533,  1741,  1852,  1835,  1836,    67,
      68,  1915,  1470,  1471,  2868,  1006,  1853,  1854,  1018,  1019,
     352,  1855,  1730,  1031,   266,  1039,    74,  1041,  2875,  1094,
    1868,  2876,  2877,  1042,    93,  1049,  1817,  1050,  1869,  1870,
    1750,  1051,    94,    95,   611,   101,  1818,  1819,  1856,  1790,
    1095,  1791,    75,  1107,  1792,  1793,  1116,  1794,   458,  1795,
    1125,   353,  1633,  1634,  1126,  1797,  1180,  1798,  1181,   257,
    1861,  1862,  1182,  1333,  1334,  1335,  1804,  1194,  1820,  1196,
    1207,   102,  1837,    67,    68,  1208,  1871,    67,    68,  1913,
    1560,  1635,  1838,  1839,    67,    68,  1956,   612,   258,    76,
    1096,  1209,  1336,  1337,    67,    68,  1338,  1210,  2547,   446,
     447,   448,   267,  1339,  1211,  2551,  1340,  1212,  1215,   765,
    1341,  1213,  1214,  1216,  1840,  1233,   268,  1238,  1342,  1343,
     354,  1239,  1240,  1879,  1880,  1241,  1344,  1242,  1243,  1097,
    2166,  2167,  1244,  1254,    77,  1863,  1255,  1605,  2175,  2176,
    1258,  1911,  1912,  1914,  1261,  1864,  1865,  2184,  2185,   355,
    1866,  1613,  1267,   269,  1345,  1346,  1098,   356,  1347,  1268,
    1272,  1275,  2577,  1924,   259,  2579,  1276,  1927,  2580,  1909,
    2581,  1881,  1284,   357,  1286,  1287,  1348,  1867,  2168,   260,
      67,    68,   766,  1470,  1471,  1299,  2177,  1300,  1319,  1318,
    1955,  1957,  1320,  1322,  2655,  2186,  1099,  1349,  1100,  1323,
    1963,  1324,  1326,  1973,   270,  1325,  1330,  2667,  1378,   778,
    1979,  1331,  2672,  1872,  1873,  1380,  1384,   271,    67,    68,
    1930,  1470,  1471,  1350,  1984,  1390,  1392,  1393,  1396,  1986,
    1397,  1400,  1351,  1988,  1401,  1991,  1992,  1402,  1994,  1996,
    1997,   261,  2000,  1410,  1411,  2003,  2004,  2005,  2006,  2007,
    2008,  2009,  2010,  2013,  2015,  2016,  1512,  2282,  2018,  2019,
    2020,  2021,  1412,  1413,  1708,  1709,   779,  1415,  2027,  2028,
     780,  1416,  2030,  2031,  2032,  1417,  1418,  1352,  2035,  2036,
    1419,  1425,  1426,   262,  1513,  1353,  1354,  1514,  1874,  1428,
    1515,  2039,  2040,   263,  2041,  2042,  1429,  1435,  1875,  1876,
    1437,  1438,  1355,  1877,  1440,  1453,  1454,  1459,  1882,  1883,
     781,  1455,  2334,  1356,  1456,  2169,  2170,  1516,  1460,  1461,
    2690,  1497,  1474,  2178,  2179,    67,    68,  1958,  1470,  1471,
    1878,  1475,  2187,  2188,  1476,  1496,  1477,  1502,  1526,  1357,
    1503,  1358,  2062,  2063,  2064,  1523,  1517,  2065,   782,  1518,
    1522,  1359,  2067,  2070,  2349,  2072,  2073,  2074,  1525,  2075,
    2076,  1360,  2078,  1527,  2079,  2080,  1524,  2082,  2083,  2084,
    2085,  1539,  1544,  1536,  1545,  1550,  1553,  1543,  2088,  1551,
    1552,  2069,   466,  1884,  1559,  1561,  2092,  1562,  1626,  1598,
    2171,  2097,  2098,  1885,  1886,  1361,  1609,  2100,  2180,   783,
    2172,  2173,  1610,   784,  1616,  1617,  2103,  2189,  2181,  2182,
    1623,  1423,  1629,  1630,  1685,  1643,  1648,  2190,  2191,  2651,
    1649,  1147,  2654,  1654,  2656,  1887,  1655,  1656,   785,  1148,
    1657,   786,  2174,  1666,  1667,  1149,  1668,  2668,  2669,  2131,
    2183,  1669,   787,  1670,  1671,  1690,  1683,  1907,   488,  2192,
    2116,  1696,  1150,  1684,  2683,   467,  1699,  1712,  1151,  2122,
    2139,  2140,  1707,  2127,  1713,  2142,   489,  1566,  1714,  1726,
    1519,  2144,  1567,  1731,  1740,  -464,  1925,  1742,   468,   469,
    1929,  2832,  1152,   490,  1751,  1752,   746,   470,  1753,  1757,
    1765,  1762,  1153,  1766,  1568,  1569,   491,  1570,  1571,  1772,
    1783,  1784,  1789,  1520,  1802,  1803,  1960,   471,  1572,  1796,
    1808,  1827,  1830,  1932,  1841,   492,  1975,   472,  1843,   493,
    1573,  1574,  1845,  1889,  1890,  1980,  1981,  1891,  1575,  1888,
    1521,  1576,  1154,   494,  1895,  1896,  1985,  1898,  1899,  1900,
    1155,  1903,  2193,  1906,  1923,  1926,   834,  1941,  1943,  1577,
    1942,  1933,  1944,  1945,  1938,  1947,  1578,  1579,  1948,  1949,
    1580,  1954,  2500,  2501,  1950,  2503,  2504,  1972,  1951,  2507,
    2508,  1976,  1987,  1989,  1993,  2001,   495,  2002,  2245,  2246,
    2017,  2248,  2024,  2025,  2352,  2026,  1156,  2037,  2038,  2204,
    2043,  2044,  2045,  2215,  2047,  2048,  2049,  2050,  1157,  2259,
    2260,  2261,  2262,  2263,  2264,  2265,  2266,  2267,  2051,  2542,
    2052,  2053,  2054,  2055,  1158,   310,  2056,  2057,  2058,  2519,
    2059,  2060,  2273,  2061,  2275,  1581,  2077,  2081,  2086,  2099,
    2555,  2105,  2106,  2107,  2108,  2109,  2141,  2520,  2143,  2146,
    2281,   449,  2147,  2148,  2150,  2151,  2285,  2152,  2155, -1133,
    2157,  2158,  2159,  2163,  2164,  2288,  2289,  2290,  2291,  2292,
    2293,  2294,  2295,  2296,  2297,  2165,  2767,  2310,  2311,  2312,
    2313,  2314,  2315,  2316,  2317,  2318,  2319,  2320,  2321,  2194,
    2324,  1582,  2325,  2326,  2327,  2195,  2196,  1583,  2200,  2201,
    2521,  2203,  2205,  2206,  2207,  2211,   449,  2335,   463,  2212,
    2222,   922,  2214,  2216,  1584,  2217,  2218,  2223,   927,  2225,
    2226,   928,  2227,  2228,  1585,  2232,   929,  2233,  2522,  2234,
     931,  2236,  2237,  2239,  2240,  2523,  2242,  2249,  2251,  2254,
    2344,  2257,  2345,  2268,  2346,  2269,  2348,  2270,   449,  2350,
    2271,  2351,  1586,  1587,  2272,  2328,  2355,  2356,  2767,  2357,
    2358,  2359,  2360,  2276,  2323,  2329,  2524,  2332,  2364,  2333,
    2365,  2336,  2339,  1588,  2368,  2353,  2354,  2370,  2361,   525,
    2369,   532,   535,  2373,   540,   544,  2374,  2375,  2376,  2377,
    2403,  2525,  2406,  2641,  2408,  2411,  2419,  2644,  2413,  2414,
    2415,  2420,  2302,  2421,  2422,   995,  2423,  2424,  2428,  2372,
    2429,  2437,  1821,  2430,  2431,   619,  2432,  2433,  1589,  2438,
    2446,  2407,  2439,  2449,  1831,  2457,  2460,  2463,  2464,  2466,
    2469,  2470,  2471,  2678,   635,   641,  2474,  2479,  2483,  2499,
     646,  2553,  1892,  1893,   649,  2559,  2527,  2560,  2405,  2561,
    2562,  2566,  2818,  2569,  2571,   853,  2572,  2573,   877,  2574,
    2576,  2582,  2584,  2593,  2602,  2611,  2617,  2621,  2624,  2630,
    2638,  2472,  2649,  2847,  2660,  2661,  2781,  2662,  2663,  2664,
    2665,  2526,  2680,  2691,  2764,  2692,   732,  2694,  2695,  2696,
    2697,  2698,  2699,  2700,  2702,  2819,  2708,  2714,   742,  2740,
    2746,  2815,  2749,  2750,  2751,  2756,  2771,     0,  2772,  2773,
    2774,  2775,  2776,  2253,  2783,  2786,  2797,  2805,   763,  2808,
    2811,  1217,  2820,  2821,  2828,  2477,  2831,  2856,  1189,  2841,
    2842,  2848,  2860,  2861,  2863,  1195,  2484,  2485,  2486,  2487,
    2488,  2489,  2490,  2491,  2492,  2493,  2494,  2867,  2278,  2869,
       0,  2870,  2497,  2871,  2823,  2825,   449,   449,  2872,   449,
     449,     0,     0,   449,   449,  2509,  2510,  2511,  2512,  2513,
    2514,     0,  2516,  2517,  2518,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2529,  2530,
    2531,  2532,     0,  2534,  2535,  2536,  2537,  2538,  2539,     0,
    2541,     0,     0,  2545,  2546,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2554,     0,   228,   449,  2556,     0,     0,     0,  2558,
    1478,     0,   873,     0,  2563,  2564,  2565,     0,     0,     0,
       0,     0,     0,   880,     0,   229,     0,     0,   230,     0,
       0,     0,   888,     0,     0,     0,     0,  1479,     0,  1288,
       0,     0,     0,     0,     0,     0,  1290,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   231,     0,  2585,     0,     0,     0,     0,   232,
       0,  1480,     0,     0,     0,     0,     0,  1481,     0,     0,
     233,   234,     0,  1482,     0,     0,     0,   235,     0,     0,
       0,  1306,  1307,     0,     0,     0,  1311,     0,     0,  1314,
     925,   926,     0,  1483,     0,     0,     0,     0,     0,     0,
       0,  1321,   236,   930,     0,     0,     0,     0,   933,     0,
       0,     0,     0,     0,  1484,     0,     0,   945,     0,     0,
     237,     0,     0,     0,     0,     0,  2632,     0,     0,     0,
    2634,  1485,     0,     0,     0,     0,   238,   239,     0,     0,
    2635,  2636,     0,   240,     0,     0,  2640,   449,     0,     0,
    2643,   449,     0,     0,     0,     0,  2648,     0,     0,  2652,
    2653,     0,     0,     0,  1486,   241,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2670,  2671,
       0,  2673,  2674,  2675,  2676,  2677,     0,   449,  2679,     0,
       0,     0,  2682,  2154,     0,     0,     0,   997,   998,   999,
    1000,  2160,  2161,  1487,   242,  2693,     0,     0,     0,  1462,
       0,     0,     0,     0,  2701,     0,  2197,  2198,  1488,     0,
       0,     0,     0,     0,     0,     0,     0,  2208,  2209,     0,
    1489,     0,  2716,     0,     0,     0,     0,     0,  2219,  2220,
       0,     0,     0,     0,     0,     0,     0,     0,  2229,  2230,
       0,     0,     0,     0,  2235,     0,     0,   243,  1490,     0,
       0,     0,     0,     0,  2238,  1145,     0,     0,   244,     0,
    1491,     0,  1492,  1493,  2728,     0,     0,     0,     0,  2732,
       0,  2734,     0,     0,     0,     0,     0,  2737,     0,  2548,
       0,     0,  2298,     0,     0,     0,     0,   245,     0,     0,
    2744,     0,     0,  2299,     0,     0,     0,     0,     0,     0,
       0,     0,  1494,     0,     0,     0,     0,     0,  2755,  1406,
       0,     0,  2759,     0,     0,     0,     0,  2792,     0,  1147,
    2300,     0,     0,     0,     0,     0,     0,  1148,     0,    67,
      68,     0,     0,  1149,     0,     0,     0,     0,  2780,     0,
       0,  1457,     0,     0,   112,     0,     0,     0,     0,     0,
    1150,     0,     0,     0,     0,     0,  1151,     0,     0,  2301,
       0,     0,     0,     0,   305,     0,     0,     0,     0,  2795,
       0,     0,     0,     0,  2800,     0,  2802,     0,     0,     0,
    1152,     0,   114,  2806,     0,     0,     0,     0,  2809,     0,
    1153,     0,     0,  2812,     0,     0,     0,     0,     0,  1681,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2822,  2824,     0,
       0,     0,     0,     0,  1289,     0,     0,     0,   115,     0,
    1154,     0,     0,     0,     0,  1710,  1294,     0,  1155,     0,
    1715,     0,     0,  2834,     0,     0,  2835,     0,     0,  2837,
    1721,     0,     0,     0,     0,     0,     0,     0,     0,  2843,
    2844,  2845,  2846,  2830,     0,     0,     0,     0,     0,     0,
       0,  2855,     0,  1304,  2858,  2666,     0,     0,     0,     0,
       0,  2862,     0,  2864,  1156,     0,     0,     0,   117,     0,
       0,     0,     0,     0,  2850,  2684,  1157,  2853,     0,  2689,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2410,  1158,     0,     0,     0,     0,     0,     0,     0,
       0,  2412,  2302,     0,  2303,  2416,  2417,     0,   306,     0,
       0,     0,     0,     0,  2425,  2426,     0,     0,     0,     0,
       0,     0,     0,  2434,  2435,     0,     0,     0,     0,  2440,
     122,     0,     0,  1395,     0,   123,     0,     0,     0,  2450,
    2451,     0,     0,     0,     0,     0,   307,     0,     0,     0,
    2461,  2462,     0,     0,     0,     0,     0,     0,  2304,     0,
       0,  2465,     0,     0,     0,     0,     0,     0,     0,     0,
    2467,     0,  2468,     0,     0,   111,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1537,   308,
     113,     0,     0,     0,     0,     0,     0,     0,  2770,     0,
       0,     0,     0,     0,     0,     0,     0,   114,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,     0,     0,     0,     0,
       0,     0,  1597,  1974,     0,     0,     0,     0,     0,     0,
       0,     0,  1603,   115,     0,     0,  1805,  1806,  1807,     0,
       0,     0,     0,     0,     0,     0,  1809,  1810,  1811,     0,
       0,     0,   116,  1822,  1823,  1824,     0,     0,  1825,  1826,
       0,  1828,  1829,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2023,     0,     0,     0,     0,     0,  2029,
       0,  1901,  1902,   117,     0,  1904,  1905,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2840,  2587,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2596,     0,     0,
       0,     0,     0,     0,     0,     0,  2605,     0,     0,     0,
       0,     0,     0,   118,     0,  2614,     0,     0,     0,  1679,
       0,   119,  2616,     0,     0,     0,     0,     0,     0,   120,
     121,     0,     0,  2620,     0,   122,     0,  1687,     0,  2623,
     123,     0,  2625,     0,     0,  2626,     0,     0,  2066,     0,
       0,     0,     0,  2071,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1716,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1722,     0,     0,     0,     0,
       0,     0,  2089,     0,     0,     0,     0,     0,  2095,     0,
       0,     0,  1737,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1749,     0,     0,     0,     0,  1756,
       0,     0,     0,     0,     0,  2111,     0,   124,     0,   687,
     688,     0,  2118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,     0,     0,     0,     0,     0,   154,     0,     0,  2717,
       0,   155,   156,     0,     0,   689,     0,     0,  2719,     0,
       0,   690,     0,     0,     0,     0,     0,  2721,   691,     0,
     692,     0,     0,  2724,     0,   693,     0,  2726,   694,     0,
    2727,     0,     0,     0,   695,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   696,     0,     0,     0,     0,
       0,   697,     0,     0,     0,     0,     0,     0,     0,     0,
     698,     0,     0,     0,     0,     0,     0,     0,     0,    67,
      68,     0,     0,  1908,     0,     0,     0,   699,     0,     0,
       0,     0,     0,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   700,    67,
      68,  1928,     0,     0,  2243,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   112,   701,     0,     0,     0,     0,
       0,     0,   114,     0,  2256,     0,   702,   703,     0,  1961,
       0,     0,  1962,     0,     0,     0,   543,     0,     0,     0,
       0,  1977,  1978,     0,     0,     0,     0,     0,   704,  1982,
     112,     0,     0,     0,  2145,     0,  1983,  2279,  2280,     0,
       0,     0,     0,     0,     0,     0,     0,  2153,   115,     0,
       0,   705,     0,  2283,  2284,     0,     0,  2156,  2286,  2287,
       0,     0,     0,     0,     0,   706,     0,   707,   114,     0,
       0,     0,     0,     0,     0,     0,  2022,     0,   115,     0,
       0,     0,   708,     0,     0,     0,     0,   709,  2033,     0,
       0,     0,     0,     0,   710,     0,     0,     0,  2330,     0,
       0,   711,     0,     0,     0,     0,     0,     0,   117,  2337,
       0,     0,     0,     0,   115,     0,     0,     0,     0,     0,
     712,     0,     0,     0,     0,     0,     0,     0,     0,  2241,
       0,     0,     0,   713,   714,     0,   715,     0,   117,     0,
       0,     0,     0,     0,  2347,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2362,     0,  2068,     0,     0,     0,     0,
     122,     0,     0,     0,   117,   123,   716,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2378,  2087,     0,     0,
       0,  2382,     0,     0,     0,     0,     0,  2387,     0,     0,
       0,     0,  2391,  2096,     0,   123,  2394,     0,     0,  2397,
       0,     0,  2400,     0,  2402,     0,  2101,     0,  2102,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2110,     0,
       0,  2112,  2113,  2114,  2115,  2117,   122,  2119,     0,     0,
    2120,   123,     0,  2121,  2123,  2124,  2125,  2126,  2128,     0,
    2129,  2130,     0,     0,     0,  2132,  2133,  2134,     0,     0,
    2135,  2136,     0,     0,     0,     0,  2137,  2138,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,     0,     0,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,     0,     0,     0,     0,
       0,     0,     0,     0,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,     0,     0,     0,     0,     0,     0,     0,     0,
    1736,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2409,     0,     0,     0,   112,     0,     0,     0,     0,     0,
    2244,     0,     0,  2247,     0,     0,     0,     0,  2540,     0,
       0,     0,     0,     0,  2252,     0,     0,  2255,     0,     0,
       0,     0,     0,     0,  2552,     0,     0,     0,     0,     0,
    2441,  2442,  2443,  2444,  2445,     0,  2447,  2448,     0,     0,
       0,  2452,  2453,  2454,  2455,  2456,  2274,  2458,  2459,     0,
       0,     0,     0,     0,     0,     0,     0,  2570,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   115,     0,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
    2583,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2322,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2338,     0,     0,     0,   516,   517,
       0,     0,   518,     0,     0,     0,     0,     0,   117,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   519,     0,     0,  2627,     0,
       0,     0,     0,     0,  2631,   115,     0,     0,  2633,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2363,     0,
       0,     0,     0,     0,  2639,     0,     0,     0,     0,     0,
       0,     0,     0,  2371,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   123,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2395,     0,     0,     0,   117,     0,     0,     0,     0,
       0,     0,  2404,     0,     0,  2687,  2688,     0,   520,     0,
       0,     0,     0,     0,     0,     0,  2586,     0,     0,  2588,
    2589,  2590,  2591,  2592,     0,  2594,  2595,   521,  2597,  2598,
    2599,  2600,  2601,     0,  2603,  2604,     0,  2606,  2607,  2608,
    2609,  2610,     0,  2612,  2613,     0,  2615,     0,     0,   522,
       0,     0,     0,     0,     0,     0,  2618,  2619,     0,     0,
       0,     0,   123,     0,     0,     0,     0,  2622,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,     0,     0,   636,   112,
       0,     0,     0,     0,     0,     0,  2475,     0,     0,  2478,
       0,     0,     0,     0,  2748,   523,     0,  2482,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2495,     0,     0,  2498,     0,     0,   637,
       0,  2502,     0,     0,  2505,  2506,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   115,   524,     0,     0,     0,     0,     0,
       0,     0,  2549,  2550,     0,     0,     0,   638,     0,     0,
       0,     0,  2718,     0,     0,     0,     0,     0,     0,     0,
       0,  2720,     0,     0,     0,     0,  2814,     0,     0,     0,
    2722,     0,  2723,     0,     0,     0,  2725,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2575,     0,     0,     0,
    2826,     0,     0,   117,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   639,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2851,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2865,     0,     0,  2866,     0,
     123,     0,     0,     0,     0,   112,     0,     0,     0,     0,
       0,     0,     0,  2787,     0,  2788,     0,  2789,     0,     0,
    2790,     0,  2791,     0,  2628,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2647,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2658,     0,
     640,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   115,
       0,     0,     0,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,     0,  2707,  1054,  1055,  1056,  2713,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
       0,     0,  1057,  1058,   112,     0,  1059,     0,     0,  1060,
       0,     0,     0,     0,     0,     0,  1061,     0,     0,     0,
    1062,     0,     0,     0,     0,     0,     0,     0,  1063,  1064,
    2730,  2731,     0,  2733,     0,     0,  1065,  1066,  2735,  2736,
       0,     0,   114,  2738,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1067,   112,     0,     0,     0,     0,
    1068,   122,     0,     0,  1069,  1070,   123,     0,  1071,     0,
       0,     0,     0,     0,     0,     0,  2760,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1072,     0,   115,     0,
       0,     0,     0,     0,     0,     0,   530,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1073,  2784,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   534,     0,   112,
       0,     0,     0,  1074,     0,     0,     0,     0,     0,   115,
       0,     0,     0,     0,     0,     0,     0,     0,   117,     0,
       0,     0,     0,     0,     0,     0,     0,  1075,     0,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,  1076,     0,  1077,
       0,     0,     0,     0,   112,  1078,  1079,  2829,     0,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,  1080,  1081,   115,  2838,   123,     0,     0,     0,     0,
       0,     0,  1082,  1083,     0,     0,     0,     0,  2849,     0,
       0,  2852,  1394,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1084,
       0,  1085,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1086,     0,  1087,   123,     0,     0,     0,
       0,  1088,     0,   117,     0,     0,     0,     0,   115,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1032,     0,     0,     0,  1089,  1033,     0,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   531,     0,   117,     0,
     123,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   123,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,     1,     0,     0,     2,
       0,     0,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     0,     0,     0,     0,
       5,     6,     0,     7,     8,     9,     0,     0,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
      11,     0,    12,    13,     0,     0,     0,     0,     0,     0,
       0,     0,    14,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    16,     0,     0,     0,     0,
       0,     0,     0,     0,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    18,     0,     0,
       0,    19,     0,     0,    20,     0,     0,     0,    21,    22,
       0,     0,     0,    23,    24,     0,     0,    25,     0,     0,
       0,     0,     0,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
       0,    28,    29,    30,     0,     0,    31,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,    35,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    37,     0,    38,     0,   182,     0,     0,   183,
       0,    39,   184,     0,     0,    40,     0,     0,     0,    41,
       0,    42,     0,    43,     0,     0,     0,     0,    44,     0,
       0,   185,     0,   186,   187,   188,     0,     0,     0,     0,
       0,     0,    45,   189,     0,   190,     0,     0,    46,     0,
     191,     0,   192,   193,   194,     0,     0,     0,     0,     0,
     195,     0,   196,     0,    47,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,     0,    50,     0,
       0,     0,     0,     0,    51,     0,     0,    52,    53,     0,
       0,     0,     0,   197,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   198,     0,     0,     0,     0,     0,     0,    54,   199,
       0,   200,   201,   202,   203,    55,     0,   204,     0,     0,
       0,   205,     0,   206,  1431,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   207,   208,     0,     0,
       0,   209,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   210,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   211,   212,
       0,     0,     0,     0,     0,     0,   213,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   214,     0,   215,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   216,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   217,   218,     0,     0,     0,     0,
       0,     0,     0,   219,     0,     0,     0,     0,     0,     0,
     220,     0,     0,     0,     0,     0,   221,     0,   222,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,  1432,     0,     0,
       0,     0,     0,     0,     0,   223,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153
};

static const yytype_int16 yycheck[] =
{
       3,   507,    53,  1515,   939,   702,   703,  1718,    11,  1720,
       5,     4,    31,    16,     3,     4,    16,   707,  1026,     5,
       4,  1029,     4,     4,     5,   927,   928,   929,    26,    16,
       5,    46,    35,     3,     4,     5,     4,     5,  1046,     4,
      43,    13,     3,     4,    40,     5,     5,     4,     4,    52,
       3,     4,    55,     0,     4,    58,   137,     3,     4,    62,
       4,    35,    65,     5,  1055,    19,    69,    70,    26,  1210,
      73,  1212,     5,    76,    77,     4,   463,    80,    12,    56,
      83,    84,    35,    86,    15,  2584,   473,   174,    91,    61,
     221,    26,    98,   995,     4,    31,    11,  1238,  1239,  1240,
      20,   104,   105,   106,   107,   108,   109,    39,     3,     4,
     295,     5,  2766,    48,   100,    16,    51,   170,     3,     4,
     106,    66,   125,    94,    61,    31,    16,    62,   104,     3,
       4,  2096,   201,     3,     4,     3,     4,   142,    53,    20,
     121,   112,    26,   153,   118,    50,   233,  2112,  2113,  2114,
      85,   135,  2117,   121,  2119,  2120,    71,   160,  2123,  2124,
    2125,    35,  2816,  2128,  2129,     3,     4,  2132,   103,  2134,
    2135,   201,  2137,   192,   172,   256,     3,     4,   183,    61,
     112,    32,   185,   136,   315,   122,   101,   190,     5,   171,
     259,    87,    20,   122,    15,   100,     4,     5,    99,     5,
     148,   157,   158,  2702,   109,   120,   195,     3,     4,   124,
      16,   207,    39,    30,   301,  2714,   190,   127,   192,   195,
     194,   195,   275,   138,   195,   162,   198,     3,     4,   210,
     239,   205,    59,   220,   195,   140,   266,   218,   219,    57,
     122,   234,   210,     5,     4,   175,   220,   224,   205,   247,
     218,   219,    66,     4,   184,   212,   213,   201,    66,   269,
     263,    61,   136,   197,   315,   271,   162,   282,     5,   269,
     202,    61,   291,   204,   164,   233,   279,   280,    20,  2244,
      88,   971,  2247,     3,     4,   112,   192,  2252,   126,   243,
    2255,   248,   295,   235,   297,   293,   255,   257,    26,   255,
       4,   273,   305,   306,   214,   308,   309,   202,   311,  2274,
     303,   283,    20,   121,    61,    66,   134,   304,   321,   303,
     315,     4,    14,    15,   313,   306,   312,   247,   331,   332,
      22,   312,   297,    20,   308,   143,   269,    29,   306,   314,
     322,   322,   274,   315,    36,   315,   283,   297,   295,   233,
     303,   354,   313,   356,   357,   291,   359,   303,    44,   746,
     363,   364,    66,   296,    61,    57,   247,     4,   357,   358,
     121,   374,   375,    59,   355,   202,     3,     4,   381,   360,
     361,   118,    74,   386,   387,   291,   280,   355,   303,  1079,
      78,   394,   360,   361,   397,    81,   357,   358,  2363,   356,
     305,   283,   210,    63,  1306,    20,    43,  1097,   303,    46,
     218,   219,  1314,   416,   417,   101,   234,   121,   303,   247,
     423,   424,   425,   426,   427,   428,   429,   362,   431,   303,
    2395,   249,   118,   303,  1131,   303,   122,   233,   121,    76,
    1448,   201,   445,  1451,   172,   105,   449,    84,    16,    39,
      29,   454,   455,   456,   457,   458,   459,   233,   461,   210,
     463,   464,   465,   200,   150,   151,  1163,   218,   219,     4,
     473,   474,   299,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,    83,   121,    88,  1477,    61,   462,    87,
      27,   179,   252,   293,     4,   313,   239,     4,   306,   259,
     100,   888,  1643,   293,   312,   247,   210,     3,     4,   146,
    2475,     4,  1503,   233,   218,   219,   316,     0,   255,   247,
     279,   207,   112,   138,   527,   528,   316,   210,     3,     4,
    2495,   217,     3,     4,  1525,   218,   219,  2502,   162,   247,
    2505,  2506,   545,   280,   931,    61,   293,   355,   122,     4,
     142,   359,   360,   361,    26,   306,    61,   125,     4,    66,
     247,     3,     4,   200,   162,   293,   617,   191,   195,   316,
      61,   259,     0,   210,   201,     4,     4,   551,   581,    23,
      24,   218,   219,    29,   244,   277,   278,   166,   225,     5,
     227,   183,    61,   279,   280,    88,   293,    13,    14,    63,
     260,   261,   306,    78,   355,   173,    63,     5,    29,   360,
     361,   614,   202,   240,   121,   307,   667,   154,   255,   316,
       3,     4,   596,   306,     3,     4,     4,     4,    61,   122,
      61,   122,   247,    11,    61,   686,     5,    66,     5,   266,
      30,   105,   221,   180,     5,    61,   142,   184,   105,    61,
    2361,   355,   220,   122,    98,   658,   360,   361,   350,   351,
     352,     5,   277,  2628,  1354,   351,   121,     4,   247,   306,
     127,   202,   355,    39,    95,  1365,    61,   360,   361,     4,
      59,   684,  2647,   272,   274,   322,   313,   183,   118,   122,
     279,   122,   121,   353,   354,   122,    61,   120,   701,     4,
     237,   704,   174,   210,   179,   175,    13,    14,    61,   283,
     122,   218,   219,     3,     4,    15,     3,     4,   355,    56,
     166,    11,    22,   360,   361,     3,     4,    66,   731,   295,
     357,   358,   735,   736,   737,   738,   304,   122,   741,    45,
     743,   278,   745,   746,   747,   216,   112,   168,    35,   286,
     287,    56,    39,    39,    61,   210,    66,   122,    64,    33,
      66,   233,   153,   218,   219,  2730,  2731,    32,  2733,   122,
    2735,  2736,   823,  2738,   216,   221,     5,   293,    56,    43,
     244,   210,   198,   199,   259,     5,   255,   244,   293,   218,
     219,   272,   283,    13,    14,    26,   260,   261,   279,   306,
     316,   247,  1189,   260,   261,   269,    89,  1742,    15,  1817,
      66,   316,   815,   816,   283,   818,   819,   820,   821,  1721,
     133,   240,   205,    87,    66,   112,   112,  2792,   294,  1837,
       3,     4,   835,   836,   108,   226,   202,    89,   259,   842,
     843,    61,   297,   264,  1852,     4,     5,  1855,   355,   136,
     283,   306,   283,   360,   361,  1863,   283,   273,  1866,   862,
     863,   864,   865,   866,   867,   868,  1874,   283,   284,  1877,
      72,   283,   288,  2838,    45,    66,  1884,   306,   269,    30,
     883,   884,   885,   189,   887,   888,   889,   224,   891,   353,
     354,   198,   199,     5,     5,    66,   353,   354,   283,   315,
     355,    60,  2043,  2044,  2045,   360,   361,    66,     4,   912,
      81,   914,  1609,    91,     5,   202,   202,   308,   283,   224,
     233,   924,    54,     4,  1311,  1916,   355,     5,   931,   932,
     283,   360,   361,     4,   937,   211,   200,   211,   912,  2652,
    1931,   132,   248,   174,     4,    56,   224,     4,     3,     4,
     250,   954,     5,   253,    65,   958,   115,  2670,    90,     5,
     652,     4,   965,   966,   967,   106,   273,     5,  1959,   160,
     973,     4,     5,   132,     5,   978,   283,   284,   198,   199,
     293,  1032,    39,     3,     4,     4,   989,   293,   147,    21,
     106,     5,     3,     4,   153,  2517,   302,     5,   176,     5,
      82,   160,   233,     3,     4,  1008,     4,  2519,   315,    64,
       4,   133,   144,     4,   706,     4,   303,    49,   189,   711,
      52,  2543,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
      82,   242,   174,   273,    98,   112,   122,   216,     5,    59,
      82,     5,   203,   283,   284,    70,    13,    14,   288,     3,
       4,  2062,  1075,   155,     3,     4,   235,   248,   354,   111,
     280,   240,   114,   242,   360,     4,   362,   203,     4,   267,
       4,     5,  2805,  1096,     4,   315,    13,    14,  2811,     4,
     157,   158,  1105,    27,   295,     5,   126,   285,     4,   268,
     269,   233,    25,   224,    61,   126,   257,   276,  1121,     4,
    1123,  2023,   293,   255,     4,  1128,  1129,  1130,  2650,  2651,
      59,   302,  2654,   155,  2656,  1138,   295,    36,  1141,     4,
    1143,   257,    13,    14,    61,   202,  2668,  2669,    47,   231,
     232,  2673,  2674,   205,  2867,  2677,  2869,  1160,     4,  1162,
    2682,  2683,     4,  2171,   246,     3,     4,  1170,  1171,     5,
     175,   293,  2180,    11,     5,    74,     3,     4,   870,     3,
       4,  2189,  1185,  1186,     4,     5,  1189,  1190,  1191,     8,
      61,     5,   351,  2095,  1197,    10,  1199,     5,   255,  1202,
     113,  1204,   279,   235,  1255,    13,    14,   289,   175,   231,
     232,     4,    39,     4,   127,    39,  2118,   175,  2740,     3,
       4,  2743,    83,    36,   246,   184,  2748,     3,     4,     4,
     154,   204,  2754,   204,    47,     5,   268,  2759,  1241,   100,
      16,     5,  1245,     4,  1247,   196,    41,    42,  1251,   254,
     204,   198,   199,    61,   153,   196,   180,    66,   263,    66,
     184,    74,     4,     5,  1267,    66,  1269,   289,  1271,  1272,
    1273,  1274,     4,     5,  1277,  1278,   233,  1280,  1281,  1282,
    1283,   198,   199,    66,     5,   112,   234,  1290,   112,     3,
       4,     5,     5,  1267,  1297,   194,     4,    80,  1301,  1302,
    1303,   195,   215,  2294,   451,   452,    89,   201,  1311,  1312,
       4,  2833,  1315,   237,  2836,   228,     4,   100,     4,  2310,
    1323,   182,  1325,   204,  2315,  1328,   273,   198,   199,     3,
       4,     5,     6,     7,  2856,     4,   283,   284,    87,     5,
     153,   288,  1316,    87,    25,     5,   240,     4,  2870,   132,
       5,  2873,  2874,     4,   278,     5,   273,     5,    13,    14,
    1334,     4,   286,   287,   263,   226,   283,   284,   315,  1372,
     153,  1374,   266,     5,  1377,  1378,   100,  1380,   202,  1382,
       4,   194,   177,   178,     5,  1388,    16,  1390,    16,    88,
     198,   199,     4,    19,    20,    21,  1399,     4,   315,     4,
       4,   262,   273,     3,     4,    98,    61,     3,     4,     5,
    1102,   206,   283,   284,     3,     4,     5,   316,   117,   313,
     203,     5,    48,    49,     3,     4,    52,     5,  2330,     8,
       9,    10,   113,    59,    87,  2337,    62,     4,    87,    39,
      66,     5,     5,     5,   315,     4,   127,     5,    74,    75,
     263,     5,     4,    13,    14,     4,    82,     5,     5,   242,
      13,    14,     5,    64,   358,   273,     4,  1159,    13,    14,
       4,  1474,  1475,  1476,     4,   283,   284,    13,    14,   292,
     288,  1173,    11,   164,   110,   111,   269,   300,   114,     5,
      11,     4,  2394,  1496,   193,  2397,     4,  1500,  2400,  1473,
    2402,    61,     4,   316,     4,     4,   132,   315,    61,   208,
       3,     4,   112,     6,     7,     5,    61,     5,     5,   171,
    1523,  1524,     4,   162,  2515,    61,   309,   153,   311,   162,
    1533,     4,     4,  1536,   215,     5,    37,  2528,   268,    61,
    1543,    37,  2533,   198,   199,   268,   297,   228,     3,     4,
       5,     6,     7,   179,  1557,     5,     4,     4,     4,  1562,
       5,     5,   188,  1566,     5,  1568,  1569,     5,  1571,  1572,
    1573,   270,  1575,     4,     4,  1578,  1579,  1580,  1581,  1582,
    1583,  1584,  1585,  1586,  1587,  1588,    21,  1974,  1591,  1592,
    1593,  1594,     5,     5,  1286,  1287,   118,   281,  1601,  1602,
     122,   281,  1605,  1606,  1607,     5,     5,   233,  1611,  1612,
       5,     4,     4,   312,    49,   241,   242,    52,   273,     5,
      55,  1624,  1625,   322,  1627,  1628,     5,     5,   283,   284,
       5,     5,   258,   288,     5,     4,     4,     4,   198,   199,
     162,     5,  2029,   269,     5,   198,   199,    82,     5,     5,
    2552,     5,   247,   198,   199,     3,     4,     5,     6,     7,
     315,   247,   198,   199,   247,   247,   106,   142,     5,   295,
     106,   297,  1675,  1676,  1677,   247,   111,  1680,   200,   114,
      39,   307,  1685,  1686,  2071,  1688,  1689,  1690,   106,  1692,
    1693,   317,  1695,   220,  1697,  1698,   247,  1700,  1701,  1702,
    1703,    39,   220,   253,     5,     4,   220,   253,  1711,     5,
       5,  1685,    34,   273,   220,     4,  1719,     4,   112,     5,
     273,  1724,  1725,   283,   284,   351,     5,  1730,   273,   251,
     283,   284,     5,   255,     5,     5,  1739,   273,   283,   284,
       4,  1025,   112,     4,    11,     5,     5,   283,   284,  2511,
       5,    92,  2514,     4,  2516,   315,     5,     5,   280,   100,
       4,   283,   315,     5,     5,   106,     4,  2529,  2530,  1772,
     315,     5,   294,     5,     4,    11,     5,  1469,    53,   315,
    1754,     4,   123,     5,  2546,   107,     4,     4,   129,  1763,
    1793,  1794,     5,  1767,     4,  1798,    71,    21,     4,     4,
     235,  1804,    26,     5,     4,     0,  1498,     5,   130,   131,
    1502,  2802,   153,    88,   247,   247,   310,   139,   247,   247,
     247,   142,   163,   247,    48,    49,   101,    51,    52,   174,
       4,   257,   216,   268,     4,     4,  1528,   159,    62,   204,
       4,     4,     4,   247,     5,   120,  1538,   169,     5,   124,
      74,    75,     5,     5,     5,  1547,  1548,     5,    82,   281,
     295,    85,   203,   138,     4,     4,  1558,     5,     4,     4,
     211,     4,   281,     5,     5,     5,   370,   319,     4,   103,
     319,   247,     4,     4,   247,     4,   110,   111,     4,     4,
     114,     4,  2279,  2280,   319,  2282,  2283,     4,   319,  2286,
    2287,     5,     5,   233,   233,   233,   181,   233,  1911,  1912,
     233,  1914,     5,     4,    11,     4,   257,     5,     4,   281,
       5,     5,     4,   281,     5,     5,     4,     4,   269,  1932,
    1933,  1934,  1935,  1936,  1937,  1938,  1939,  1940,     4,   315,
       5,     5,     4,     4,   285,    35,     5,     5,     4,   363,
       5,     5,  1955,     4,  1957,   179,     5,     4,     4,     4,
    2347,     5,     5,     5,     5,     5,     4,   363,     5,     5,
    1973,  1974,     5,     5,     4,     4,  1979,     5,     4,   295,
       5,     5,     5,     4,     4,  1988,  1989,  1990,  1991,  1992,
    1993,  1994,  1995,  1996,  1997,     5,  2686,  2000,  2001,  2002,
    2003,  2004,  2005,  2006,  2007,  2008,  2009,  2010,  2011,     5,
    2013,   235,  2015,  2016,  2017,     5,     5,   241,     4,     4,
     363,     5,     5,     5,     5,     4,  2029,  2030,   118,     4,
       4,   525,     5,     5,   258,     5,     5,     4,   532,     5,
       5,   535,     5,     5,   268,     4,   540,     4,   363,     5,
     544,     4,     4,     4,     4,   363,     5,     5,     5,     5,
    2063,     5,  2065,     4,  2067,     4,  2069,     5,  2071,  2072,
       4,  2074,   296,   297,     4,     4,  2079,  2080,  2768,  2082,
    2083,  2084,  2085,     5,     5,     4,   363,     5,  2091,     5,
    2093,     4,     4,   317,  2097,     5,     5,  2100,     4,   189,
       5,   191,   192,     5,   194,   195,     5,     5,     5,     5,
       4,   363,     5,  2500,     4,     4,     4,  2504,     5,     5,
       5,     4,   295,     5,     5,   619,     5,     5,     4,  2103,
       4,     4,  1416,     5,     5,   225,     5,     5,   362,     4,
       4,  2144,     5,     4,  1428,     4,     4,     4,     4,     4,
       4,     4,     4,  2540,   244,   245,     4,     4,     4,     4,
     250,     4,  1446,  1447,   254,     5,   363,     5,  2142,     4,
       4,     4,   363,     5,     4,   401,     5,     4,   450,     5,
       5,     5,     4,     4,     4,     4,     4,     4,     4,     4,
       4,  2242,     4,  2826,     5,     4,  2701,     5,     5,     5,
       4,  2305,     5,     4,  2684,     5,   296,     5,     4,     4,
       4,     4,     4,     4,     4,  2768,     5,     4,   308,     4,
       4,  2764,     5,     4,     4,     4,     4,    -1,     5,     5,
       4,     4,     4,  1925,     4,     4,     4,     4,   328,     5,
       4,   781,     5,     5,     4,  2248,     4,     4,   742,     5,
       5,     5,     5,     5,     5,   749,  2259,  2260,  2261,  2262,
    2263,  2264,  2265,  2266,  2267,  2268,  2269,     4,  1960,     4,
      -1,     5,  2275,     5,  2780,  2781,  2279,  2280,     5,  2282,
    2283,    -1,    -1,  2286,  2287,  2288,  2289,  2290,  2291,  2292,
    2293,    -1,  2295,  2296,  2297,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2311,  2312,
    2313,  2314,    -1,  2316,  2317,  2318,  2319,  2320,  2321,    -1,
    2323,    -1,    -1,  2326,  2327,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2344,    -1,    18,  2347,  2348,    -1,    -1,    -1,  2352,
      39,    -1,   442,    -1,  2357,  2358,  2359,    -1,    -1,    -1,
      -1,    -1,    -1,   453,    -1,    40,    -1,    -1,    43,    -1,
      -1,    -1,   462,    -1,    -1,    -1,    -1,    66,    -1,   873,
      -1,    -1,    -1,    -1,    -1,    -1,   880,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,  2407,    -1,    -1,    -1,    -1,    84,
      -1,   100,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,
      95,    96,    -1,   112,    -1,    -1,    -1,   102,    -1,    -1,
      -1,   925,   926,    -1,    -1,    -1,   930,    -1,    -1,   933,
     530,   531,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   945,   127,   543,    -1,    -1,    -1,    -1,   548,    -1,
      -1,    -1,    -1,    -1,   153,    -1,    -1,   557,    -1,    -1,
     145,    -1,    -1,    -1,    -1,    -1,  2479,    -1,    -1,    -1,
    2483,   170,    -1,    -1,    -1,    -1,   161,   162,    -1,    -1,
    2493,  2494,    -1,   168,    -1,    -1,  2499,  2500,    -1,    -1,
    2503,  2504,    -1,    -1,    -1,    -1,  2509,    -1,    -1,  2512,
    2513,    -1,    -1,    -1,   203,   190,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2531,  2532,
      -1,  2534,  2535,  2536,  2537,  2538,    -1,  2540,  2541,    -1,
      -1,    -1,  2545,  1827,    -1,    -1,    -1,   637,   638,   639,
     640,  1835,  1836,   242,   229,  2558,    -1,    -1,    -1,  1053,
      -1,    -1,    -1,    -1,  2567,    -1,  1850,  1851,   257,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1861,  1862,    -1,
     269,    -1,  2585,    -1,    -1,    -1,    -1,    -1,  1872,  1873,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1882,  1883,
      -1,    -1,    -1,    -1,  1888,    -1,    -1,   282,   297,    -1,
      -1,    -1,    -1,    -1,  1898,   705,    -1,    -1,   293,    -1,
     309,    -1,   311,   312,  2627,    -1,    -1,    -1,    -1,  2632,
      -1,  2634,    -1,    -1,    -1,    -1,    -1,  2640,    -1,  2331,
      -1,    -1,    55,    -1,    -1,    -1,    -1,   322,    -1,    -1,
    2653,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   351,    -1,    -1,    -1,    -1,    -1,  2671,  1013,
      -1,    -1,  2675,    -1,    -1,    -1,    -1,  2728,    -1,    92,
      93,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,     3,
       4,    -1,    -1,   106,    -1,    -1,    -1,    -1,  2701,    -1,
      -1,  1045,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,
     123,    -1,    -1,    -1,    -1,    -1,   129,    -1,    -1,   132,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,  2732,
      -1,    -1,    -1,    -1,  2737,    -1,  2739,    -1,    -1,    -1,
     153,    -1,    56,  2746,    -1,    -1,    -1,    -1,  2751,    -1,
     163,    -1,    -1,  2756,    -1,    -1,    -1,    -1,    -1,  1253,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2780,  2781,    -1,
      -1,    -1,    -1,    -1,   874,    -1,    -1,    -1,   102,    -1,
     203,    -1,    -1,    -1,    -1,  1289,   886,    -1,   211,    -1,
    1294,    -1,    -1,  2806,    -1,    -1,  2809,    -1,    -1,  2812,
    1304,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2822,
    2823,  2824,  2825,  2797,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2834,    -1,   923,  2837,  2527,    -1,    -1,    -1,    -1,
      -1,  2844,    -1,  2846,   257,    -1,    -1,    -1,   162,    -1,
      -1,    -1,    -1,    -1,  2828,  2547,   269,  2831,    -1,  2551,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2155,   285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2165,   295,    -1,   297,  2169,  2170,    -1,   202,    -1,
      -1,    -1,    -1,    -1,  2178,  2179,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2187,  2188,    -1,    -1,    -1,    -1,  2193,
     224,    -1,    -1,  1003,    -1,   229,    -1,    -1,    -1,  2203,
    2204,    -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,    -1,
    2214,  2215,    -1,    -1,    -1,    -1,    -1,    -1,   351,    -1,
      -1,  2225,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2234,    -1,  2236,    -1,    -1,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1078,   303,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2690,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,    -1,    -1,    -1,    -1,
      -1,    -1,  1132,  1537,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1142,   102,    -1,    -1,  1400,  1401,  1402,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1410,  1411,  1412,    -1,
      -1,    -1,   121,  1417,  1418,  1419,    -1,    -1,  1422,  1423,
      -1,  1425,  1426,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1597,    -1,    -1,    -1,    -1,    -1,  1603,
      -1,  1455,  1456,   162,    -1,  1459,  1460,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2818,  2411,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2421,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2430,    -1,    -1,    -1,
      -1,    -1,    -1,   202,    -1,  2439,    -1,    -1,    -1,  1249,
      -1,   210,  2446,    -1,    -1,    -1,    -1,    -1,    -1,   218,
     219,    -1,    -1,  2457,    -1,   224,    -1,  1267,    -1,  2463,
     229,    -1,  2466,    -1,    -1,  2469,    -1,    -1,  1682,    -1,
      -1,    -1,    -1,  1687,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1295,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1305,    -1,    -1,    -1,    -1,
      -1,    -1,  1716,    -1,    -1,    -1,    -1,    -1,  1722,    -1,
      -1,    -1,  1322,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1334,    -1,    -1,    -1,    -1,  1339,
      -1,    -1,    -1,    -1,    -1,  1749,    -1,   306,    -1,     4,
       5,    -1,  1756,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,    -1,    -1,    -1,    -1,    -1,   355,    -1,    -1,  2593,
      -1,   360,   361,    -1,    -1,    60,    -1,    -1,  2602,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    -1,  2611,    73,    -1,
      75,    -1,    -1,  2617,    -1,    80,    -1,  2621,    83,    -1,
    2624,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,    -1,  1473,    -1,    -1,    -1,   132,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,     3,
       4,  1501,    -1,    -1,  1908,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,   170,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    -1,  1928,    -1,   181,   182,    -1,  1529,
      -1,    -1,  1532,    -1,    -1,    -1,     4,    -1,    -1,    -1,
      -1,  1541,  1542,    -1,    -1,    -1,    -1,    -1,   203,  1549,
      18,    -1,    -1,    -1,  1808,    -1,  1556,  1961,  1962,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1821,   102,    -1,
      -1,   226,    -1,  1977,  1978,    -1,    -1,  1831,  1982,  1983,
      -1,    -1,    -1,    -1,    -1,   240,    -1,   242,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1596,    -1,   102,    -1,
      -1,    -1,   257,    -1,    -1,    -1,    -1,   262,  1608,    -1,
      -1,    -1,    -1,    -1,   269,    -1,    -1,    -1,  2022,    -1,
      -1,   276,    -1,    -1,    -1,    -1,    -1,    -1,   162,  2033,
      -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,
     295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1903,
      -1,    -1,    -1,   308,   309,    -1,   311,    -1,   162,    -1,
      -1,    -1,    -1,    -1,  2068,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2087,    -1,  1685,    -1,    -1,    -1,    -1,
     224,    -1,    -1,    -1,   162,   229,   351,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2110,  1707,    -1,    -1,
      -1,  2115,    -1,    -1,    -1,    -1,    -1,  2121,    -1,    -1,
      -1,    -1,  2126,  1723,    -1,   229,  2130,    -1,    -1,  2133,
      -1,    -1,  2136,    -1,  2138,    -1,  1736,    -1,  1738,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1748,    -1,
      -1,  1751,  1752,  1753,  1754,  1755,   224,  1757,    -1,    -1,
    1760,   229,    -1,  1763,  1764,  1765,  1766,  1767,  1768,    -1,
    1770,  1771,    -1,    -1,    -1,  1775,  1776,  1777,    -1,    -1,
    1780,  1781,    -1,    -1,    -1,    -1,  1786,  1787,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,    -1,    -1,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2154,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,
    1910,    -1,    -1,  1913,    -1,    -1,    -1,    -1,  2322,    -1,
      -1,    -1,    -1,    -1,  1924,    -1,    -1,  1927,    -1,    -1,
      -1,    -1,    -1,    -1,  2338,    -1,    -1,    -1,    -1,    -1,
    2194,  2195,  2196,  2197,  2198,    -1,  2200,  2201,    -1,    -1,
      -1,  2205,  2206,  2207,  2208,  2209,  1956,  2211,  2212,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2371,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2404,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2011,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2034,    -1,    -1,    -1,    65,    66,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,   162,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,  2472,    -1,
      -1,    -1,    -1,    -1,  2478,   102,    -1,    -1,  2482,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2088,    -1,
      -1,    -1,    -1,    -1,  2498,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2131,    -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,
      -1,    -1,  2142,    -1,    -1,  2549,  2550,    -1,   175,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2410,    -1,    -1,  2413,
    2414,  2415,  2416,  2417,    -1,  2419,  2420,   194,  2422,  2423,
    2424,  2425,  2426,    -1,  2428,  2429,    -1,  2431,  2432,  2433,
    2434,  2435,    -1,  2437,  2438,    -1,  2440,    -1,    -1,   216,
      -1,    -1,    -1,    -1,    -1,    -1,  2450,  2451,    -1,    -1,
      -1,    -1,   229,    -1,    -1,    -1,    -1,  2461,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,  2246,    -1,    -1,  2249,
      -1,    -1,    -1,    -1,  2658,   282,    -1,  2257,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2273,    -1,    -1,  2276,    -1,    -1,    58,
      -1,  2281,    -1,    -1,  2284,  2285,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   102,   351,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2332,  2333,    -1,    -1,    -1,   116,    -1,    -1,
      -1,    -1,  2596,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2605,    -1,    -1,    -1,    -1,  2760,    -1,    -1,    -1,
    2614,    -1,  2616,    -1,    -1,    -1,  2620,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2376,    -1,    -1,    -1,
    2784,    -1,    -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   180,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2829,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2849,    -1,    -1,  2852,    -1,
     229,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2717,    -1,  2719,    -1,  2721,    -1,    -1,
    2724,    -1,  2726,    -1,  2474,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2507,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2518,    -1,
     299,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
      -1,    -1,    -1,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,    -1,  2572,    19,    20,    21,  2576,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,
      -1,    -1,    48,    49,    18,    -1,    52,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,
    2630,  2631,    -1,  2633,    -1,    -1,    82,    83,  2638,  2639,
      -1,    -1,    56,  2643,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    18,    -1,    -1,    -1,    -1,
     106,   224,    -1,    -1,   110,   111,   229,    -1,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2676,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,   102,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,  2708,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   290,    -1,    18,
      -1,    -1,    -1,   179,    -1,    -1,    -1,    -1,    -1,   102,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,    -1,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   233,    -1,   235,
      -1,    -1,    -1,    -1,    18,   241,   242,  2797,    -1,   162,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     224,   257,   258,   102,  2814,   229,    -1,    -1,    -1,    -1,
      -1,    -1,   268,   269,    -1,    -1,    -1,    -1,  2828,    -1,
      -1,  2831,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   295,
      -1,   297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   309,    -1,   311,   229,    -1,    -1,    -1,
      -1,   317,    -1,   162,    -1,    -1,    -1,    -1,   102,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   162,    -1,    -1,    -1,   351,   167,    -1,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   299,    -1,   162,    -1,
     229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,    40,    -1,    -1,    43,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,
      64,    65,    -1,    67,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   128,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,
      -1,   145,    -1,    -1,   148,    -1,    -1,    -1,   152,   153,
      -1,    -1,    -1,   157,   158,    -1,    -1,   161,    -1,    -1,
      -1,    -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,    -1,
      -1,   185,   186,   187,    -1,    -1,   190,   191,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   222,   223,
     224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   236,    -1,   238,    -1,    40,    -1,    -1,    43,
      -1,   245,    46,    -1,    -1,   249,    -1,    -1,    -1,   253,
      -1,   255,    -1,   257,    -1,    -1,    -1,    -1,   262,    -1,
      -1,    65,    -1,    67,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,   276,    77,    -1,    79,    -1,    -1,   282,    -1,
      84,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    96,    -1,   298,   299,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   310,    -1,   312,    -1,
      -1,    -1,    -1,    -1,   318,    -1,    -1,   321,   322,    -1,
      -1,    -1,    -1,   127,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   145,    -1,    -1,    -1,    -1,    -1,    -1,   352,   153,
      -1,   155,   156,   157,   158,   359,    -1,   161,    -1,    -1,
      -1,   165,    -1,   167,   167,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   190,   191,    -1,    -1,
      -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   222,   223,
      -1,    -1,    -1,    -1,    -1,    -1,   230,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   255,    -1,   257,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   282,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   298,   299,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   307,    -1,    -1,    -1,    -1,    -1,    -1,
     314,    -1,    -1,    -1,    -1,    -1,   320,    -1,   322,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   359,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349
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
     293,   316,   486,    61,   293,   316,   485,    88,   117,   193,
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
     377,   583,   239,   587,   303,   366,   588,     0,     5,   368,
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
     463,    61,   293,   316,   464,     4,    88,   122,   454,     5,
      65,   378,   453,    15,   526,    45,    66,    81,   189,   248,
     293,   302,   465,    66,   240,   466,   294,    61,   293,   316,
     467,    20,   138,   247,   277,   468,    36,    47,    74,   153,
     194,   263,   316,   469,   378,    89,    15,   204,   474,   376,
     477,    66,    72,   480,    30,   481,    43,    87,   200,   482,
     153,   226,   269,   308,   483,   376,    17,    58,   116,   180,
     299,   376,   484,     5,     5,   314,   376,     4,     5,   376,
       4,     4,   201,   489,     5,     4,     4,   122,   366,     4,
       5,   255,   491,     5,   493,     5,   118,   200,   255,   280,
     494,    94,   112,   195,   507,     5,   505,     5,   280,   506,
       4,     5,   368,   368,   366,   366,     5,     4,     5,    60,
      66,    73,    75,    80,    83,    89,   100,   106,   115,   132,
     153,   170,   181,   182,   203,   226,   240,   242,   257,   262,
     269,   276,   295,   308,   309,   311,   351,   511,    91,   176,
     267,   285,   380,     5,     4,   205,   212,   213,   248,   356,
     379,   366,   376,   366,     5,   366,    39,   112,   366,   550,
     368,   366,   376,   378,   549,   366,   383,   366,     4,   377,
      54,    90,   144,   255,   554,     4,     4,   366,     4,   153,
     269,   555,     5,   376,     4,    39,   112,   366,   562,   366,
      98,    61,   122,   255,   283,   564,   122,   577,    61,   118,
     122,   162,   200,   251,   255,   280,   283,   294,   566,   567,
      61,   122,   283,   576,     5,     4,    33,   108,   211,   559,
      66,   368,   395,    66,   368,   396,    66,   368,   397,    12,
     197,   558,   366,     4,   366,   233,   366,   398,   366,   280,
       4,   366,   366,     4,   234,   303,   586,     4,   297,   584,
       4,   297,   585,     4,   383,   126,   366,   589,   366,   366,
       4,     5,   366,    11,   366,   366,   366,    29,    95,   168,
     259,   264,   382,   382,     4,   205,   366,   366,     4,     4,
       4,   366,   366,   366,   366,   366,   366,   366,   366,     4,
       4,     5,     5,   376,     5,   366,   366,   372,   374,   374,
     376,   366,   366,   366,   366,   366,   366,   366,   376,   378,
     375,   366,   366,   375,   366,     5,   279,   104,   195,   434,
     201,   259,   437,   175,    78,   179,   259,   438,   142,   183,
     419,   419,     4,   441,     4,   443,   201,   266,   445,   184,
     446,   175,   383,   366,   366,   376,   376,   383,   383,   383,
     376,   383,   366,   376,     4,   459,     4,   378,   457,   204,
       4,   171,   322,   458,   204,   376,     4,   135,   303,   461,
       5,     5,   431,     4,   204,   137,   256,   369,   366,     4,
       5,    60,    66,   115,   132,   147,   153,   160,   216,   235,
     240,   242,   268,   269,   276,   295,   351,   520,   378,   196,
     196,    66,   470,    66,   471,    66,   472,   233,   473,   366,
       5,   432,   234,   475,   377,   383,     5,   376,   376,   376,
     376,     4,     4,     4,   368,     4,     4,   204,   366,    13,
      14,    61,   198,   199,   273,   283,   284,   315,    87,     5,
       5,    13,    14,    61,   198,   199,   273,   283,   284,   288,
     315,    87,   162,   167,   377,   497,   502,    87,   162,     5,
     495,     4,     4,    13,    61,   198,   273,   283,   315,     5,
       5,     4,   366,   377,    19,    20,    21,    48,    49,    52,
      55,    62,    66,    74,    75,    82,    83,   100,   106,   110,
     111,   114,   132,   153,   179,   203,   233,   235,   241,   242,
     257,   258,   268,   269,   295,   297,   309,   311,   317,   351,
      66,    80,    89,   100,   132,   153,   203,   242,   269,   309,
     311,     4,    29,   166,   221,   247,   514,     5,    63,   105,
     244,   260,   261,   353,   354,   519,   100,   512,    16,   269,
     517,    39,   112,   202,   518,     4,     5,    16,   220,   304,
     366,   269,   519,   527,   127,   519,   528,    35,    39,   112,
     136,   202,   303,   366,   529,   376,   368,    92,   100,   106,
     123,   129,   153,   163,   203,   211,   257,   269,   285,   532,
      39,   112,   202,     5,   269,   296,   536,    16,   125,   173,
     220,   304,   537,   297,   368,   538,     5,   100,   106,   312,
      16,    16,     4,   366,   366,   366,   366,   366,   366,   383,
     366,   366,   375,   366,     4,   383,     4,    39,   112,   202,
     274,   556,    39,   112,   202,   274,   557,     4,    98,     5,
       5,    87,     4,     5,     5,    87,     5,   567,    61,   122,
     162,   283,   571,    61,   122,   283,   575,    87,   162,    61,
     122,   283,   569,     4,    61,   122,   283,   568,     5,     5,
       4,     4,     5,     5,     5,   366,   366,   366,     4,   366,
     581,   366,   366,   377,    64,     4,     4,     5,     4,     4,
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
     247,   521,   366,   216,   366,   522,    16,   366,   268,   532,
     268,   216,   366,   523,   297,   524,    16,    99,   366,   366,
       5,   384,     4,     4,    56,   376,     4,     5,   488,   366,
       5,     5,     5,   162,   191,   388,   388,   170,   275,   386,
       4,     4,     5,     5,   492,   281,   281,     5,     5,     5,
      16,   164,   387,   387,   386,     4,     4,   386,     5,     5,
     496,   167,   350,   377,   500,     5,   499,     5,     5,   503,
       5,   504,     5,    13,    14,    61,   198,   199,   273,   283,
     284,   288,   315,     4,     4,     5,     5,   388,   386,     4,
       5,     5,   383,    82,   155,   231,   232,   246,   289,   391,
       6,     7,   366,   371,   247,   247,   247,   106,    39,    66,
     100,   106,   112,   132,   153,   170,   203,   242,   257,   269,
     297,   309,   311,   312,   351,   513,   247,     5,    26,   172,
     247,   293,   142,   106,    21,    49,    52,    82,   111,   114,
     235,   268,    21,    49,    52,    55,    82,   111,   114,   235,
     268,   295,    39,   247,   247,   106,     5,   220,    26,   233,
      35,   136,   303,   366,   272,   279,   253,   376,   532,    39,
     133,   233,   293,   253,   220,     5,     5,   257,    26,   233,
       4,     5,     5,   220,    35,   136,   303,   366,   532,   220,
     368,     4,     4,   366,     5,   315,    21,    26,    48,    49,
      51,    52,    62,    74,    75,    82,    85,   103,   110,   111,
     114,   179,   235,   241,   258,   268,   296,   297,   317,   362,
     515,   366,   366,   366,   366,   366,   519,   376,     5,     4,
       5,   366,   366,   376,   366,   368,   366,   366,   519,     5,
       5,   366,   366,   368,     5,    16,     5,     5,   366,   366,
     375,   366,   366,     4,   366,   366,   112,   366,   366,   112,
       4,    41,    42,   177,   178,   206,   393,   393,    61,   122,
     283,   565,   393,     5,    61,   122,   283,   570,     5,     5,
      61,   122,   283,   572,     4,     5,     5,     4,    61,   122,
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
     174,   233,   174,   272,   279,   174,   233,   301,   532,   133,
     174,   233,   293,     4,   257,    26,   174,   233,   532,   216,
     366,   366,   366,   366,   366,   366,   204,   366,   366,    19,
     243,   478,     4,     4,   366,   388,   388,   388,     4,   388,
     388,   388,    13,    14,    61,   198,   199,   273,   283,   284,
     315,   387,   388,   388,   388,   388,   388,     4,   388,   388,
       4,   387,    13,    14,    61,   198,   199,   273,   283,   284,
     315,     5,   498,     5,   501,     5,     5,    13,    14,    61,
     198,   199,   273,   283,   284,   288,   315,     5,    13,    14,
      61,   198,   199,   273,   283,   284,   288,   315,     5,    13,
      14,    61,   198,   199,   273,   283,   284,   288,   315,    13,
      14,    61,   198,   199,   273,   283,   284,   315,   281,     5,
       5,     5,   387,   387,   386,     4,     4,   386,     5,     4,
       4,   388,   388,     4,   388,   388,     5,   368,   376,   378,
       5,   366,   366,     5,   366,     5,   371,   106,   203,   257,
     106,   203,   257,     5,   366,   368,     5,   366,   376,   368,
       5,   371,   247,   247,    20,   247,    20,   247,   247,    20,
     247,   319,   319,     4,     4,     4,   513,     4,     4,     4,
     319,   319,     4,     5,     4,   366,     5,   366,     5,   371,
     368,   376,   376,   366,    26,    48,    51,    62,    85,   103,
     362,   389,     4,   366,   383,   368,     5,   376,   376,   366,
     368,   368,   376,   376,   366,   368,   366,     5,   366,   233,
     233,   366,   366,   233,   366,   233,   366,   366,   525,   533,
     366,   233,   233,   366,   366,   366,   366,   366,   366,   366,
     366,     5,   315,   366,   516,   366,   366,   233,   366,   366,
     366,   366,   376,   383,     5,     4,     4,   366,   366,   383,
     366,   366,   366,   376,   519,   366,   366,     5,     4,   366,
     366,   366,   366,     5,     5,     4,   393,     5,     5,     4,
       4,     4,     5,     5,     4,     4,     5,     5,     4,     5,
       5,     4,   366,   366,   366,   366,   383,   366,   376,   378,
     366,   383,   366,   366,   366,   366,   366,     5,   366,   366,
     366,     4,   366,   366,   366,   366,     4,   376,   366,   383,
     184,   381,   366,   381,   384,   383,   376,   366,   366,     4,
     366,   376,   376,   366,   369,     5,     5,     5,     5,     5,
     376,   383,   376,   376,   376,   376,   378,   376,   383,   376,
     376,   376,   378,   376,   376,   376,   376,   378,   376,   376,
     376,   366,   376,   376,   376,   376,   376,   376,   376,   366,
     366,     4,   366,     5,   366,   388,     5,     5,     5,   386,
       4,     4,     5,   388,   387,     4,   388,     5,     5,     5,
     387,   387,   386,     4,     4,     5,    13,    14,    61,   198,
     199,   273,   283,   284,   315,    13,    14,    61,   198,   199,
     273,   283,   284,   315,    13,    14,    61,   198,   199,   273,
     283,   284,   315,   281,     5,     5,     5,   387,   387,   386,
       4,     4,   386,     5,   281,     5,     5,     5,   387,   387,
     386,     4,     4,   386,     5,   281,     5,     5,     5,   387,
     387,   386,     4,     4,   386,     5,     5,     5,     5,   387,
     387,   386,     4,     4,     5,   387,     4,     4,   387,     4,
       4,   388,     5,   383,   376,   366,   366,   376,   366,     5,
     371,     5,   376,   368,     5,   376,   383,     5,   371,   366,
     366,   366,   366,   366,   366,   366,   366,   366,     4,     4,
       5,     4,     4,   366,   376,   366,     5,   371,   368,   383,
     383,   366,   375,   383,   383,   366,   383,   383,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,    55,    66,
      93,   132,   295,   297,   351,   530,   531,   532,   544,   545,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   376,     5,   366,   366,   366,   366,     4,     4,
     383,   384,     5,     5,   375,   366,     4,   383,   376,     4,
     393,   393,   393,   371,   366,   366,   366,   383,   366,   375,
     366,   366,    11,     5,     5,   366,   366,   366,   366,   366,
     366,     4,   383,   376,   366,   366,   384,   385,   366,     5,
     366,   376,   378,     5,     5,     5,     5,     5,   383,   385,
     385,   385,   383,   385,   384,   385,   385,   383,   385,   385,
     385,   383,   385,   385,   383,   376,   385,   383,   385,   385,
     383,   385,   383,     4,   376,   378,     5,   366,     4,   388,
     387,     4,   387,     5,     5,     5,   387,   387,   386,     4,
       4,     5,     5,     5,     5,   387,   387,   386,     4,     4,
       5,     5,     5,     5,   387,   387,   386,     4,     4,     5,
     387,   388,   388,   388,   388,   388,     4,   388,   388,     4,
     387,   387,   388,   388,   388,   388,   388,     4,   388,   388,
       4,   387,   387,     4,     4,   387,     4,   387,   387,     4,
       4,     4,   377,   385,     4,   376,   385,   366,   376,     4,
     385,   385,   376,     4,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   376,   385,   366,   376,     4,
     375,   375,   376,   375,   375,   376,   376,   375,   375,   366,
     366,   366,   366,   366,   366,   371,   366,   366,   366,   363,
     363,   363,   363,   363,   363,   363,   531,   363,   371,   366,
     366,   366,   366,   371,   366,   366,   366,   366,   366,   366,
     383,   366,   315,   370,   371,   366,   366,   384,   368,   376,
     376,   384,   383,     4,   366,   375,   366,    59,   366,     5,
       5,     4,     4,   366,   366,   366,     4,   381,   385,     5,
     383,     4,     5,     4,     5,   376,     5,   384,   385,   384,
     384,   384,     5,   383,     4,   366,   388,   387,   388,   388,
     388,   388,   388,     4,   388,   388,   387,   388,   388,   388,
     388,   388,     4,   388,   388,   387,   388,   388,   388,   388,
     388,     4,   388,   388,   387,   388,   387,     4,   388,   388,
     387,     4,   388,   387,     4,   387,   387,   383,   376,   385,
       4,   383,   366,   383,   366,   366,   366,   385,     4,   383,
     366,   375,   385,   366,   375,   385,   385,   376,   366,     4,
     390,   390,   366,   366,   390,   371,   390,   533,   376,   513,
       5,     4,     5,     5,     5,     4,   368,   371,   390,   390,
     366,   366,   371,   366,   366,   366,   366,   366,   375,   366,
       5,   533,   366,   390,   368,   534,   535,   383,   383,   368,
     384,     4,     5,   366,     5,     4,     4,     4,     4,     4,
       4,   366,     4,    31,   192,   291,   427,   376,     5,    31,
     192,   291,   392,   376,     4,   427,   366,   387,   388,   387,
     388,   387,   388,   388,   387,   388,   387,   387,   366,   385,
     376,   376,   366,   376,   366,   376,   376,   366,   376,   385,
       4,   533,   533,   370,   366,   533,     4,   533,   383,     5,
       4,     4,   533,   533,   370,   366,     4,   533,   533,   366,
     376,   533,   533,   533,   534,   541,   542,   532,   539,   540,
     368,     4,     5,     5,     4,     4,     4,   195,   313,   358,
     366,   418,   427,     4,   376,   427,     4,   388,   388,   388,
     388,   388,   377,   385,   385,   366,   385,     4,   385,   385,
     366,   385,   366,   533,   533,     4,   366,   533,     5,   366,
     533,     4,   366,   533,   383,   541,   543,   544,   363,   540,
       5,     5,   366,   419,   366,   419,   383,   385,     4,   376,
     378,     4,   371,   370,   366,   366,   370,   366,   376,   544,
     368,     5,     5,   366,   366,   366,   366,   392,     5,   376,
     378,   383,   376,   378,   533,   366,     4,   533,   366,   385,
       5,     5,   366,     5,   366,   383,   383,     4,   533,     4,
       5,     5,     5,   370,   370,   533,   533,   533
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
    {fr->getHSVChannelCmd();;}
    break;

  case 500:
#line 1300 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 501:
#line 1301 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 502:
#line 1304 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 503:
#line 1305 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 504:
#line 1306 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 505:
#line 1309 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 506:
#line 1310 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 507:
#line 1311 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 508:
#line 1312 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 509:
#line 1313 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 510:
#line 1314 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 511:
#line 1315 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 512:
#line 1318 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 513:
#line 1321 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 514:
#line 1322 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 515:
#line 1323 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
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
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 584:
#line 1435 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 585:
#line 1436 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 586:
#line 1439 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 587:
#line 1440 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 588:
#line 1441 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 589:
#line 1442 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 590:
#line 1445 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 591:
#line 1446 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 592:
#line 1447 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 595:
#line 1451 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 596:
#line 1452 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 597:
#line 1455 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 598:
#line 1458 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 599:
#line 1459 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 600:
#line 1463 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 601:
#line 1465 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 602:
#line 1466 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 609:
#line 1478 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 610:
#line 1480 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 611:
#line 1482 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 612:
#line 1483 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 613:
#line 1485 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 614:
#line 1487 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 615:
#line 1489 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 616:
#line 1491 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 617:
#line 1493 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 619:
#line 1497 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 620:
#line 1498 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 621:
#line 1499 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 622:
#line 1500 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 623:
#line 1501 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 624:
#line 1503 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 625:
#line 1504 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 626:
#line 1505 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 627:
#line 1506 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 628:
#line 1509 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 629:
#line 1513 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 630:
#line 1515 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 631:
#line 1517 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 632:
#line 1519 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 633:
#line 1521 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 634:
#line 1523 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 635:
#line 1525 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 636:
#line 1527 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 637:
#line 1530 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 638:
#line 1532 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 639:
#line 1534 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 645:
#line 1542 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 646:
#line 1543 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 647:
#line 1544 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 648:
#line 1545 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 649:
#line 1546 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 650:
#line 1547 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 651:
#line 1549 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 652:
#line 1551 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 653:
#line 1552 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 654:
#line 1553 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 655:
#line 1554 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 656:
#line 1557 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 657:
#line 1558 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 658:
#line 1559 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 659:
#line 1560 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 660:
#line 1561 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 661:
#line 1563 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 662:
#line 1564 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 663:
#line 1565 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 664:
#line 1566 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 670:
#line 1577 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 671:
#line 1580 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 672:
#line 1583 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 673:
#line 1586 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 674:
#line 1589 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 675:
#line 1592 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 676:
#line 1595 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 677:
#line 1598 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 678:
#line 1601 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 679:
#line 1606 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 680:
#line 1609 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 681:
#line 1612 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 682:
#line 1615 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 683:
#line 1618 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 684:
#line 1621 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 685:
#line 1624 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 686:
#line 1627 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 687:
#line 1630 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 688:
#line 1633 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 689:
#line 1636 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 690:
#line 1641 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 691:
#line 1644 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 692:
#line 1647 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 693:
#line 1650 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 694:
#line 1653 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 695:
#line 1656 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 696:
#line 1659 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 697:
#line 1662 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 698:
#line 1665 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 699:
#line 1670 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 700:
#line 1672 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 701:
#line 1674 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 702:
#line 1676 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 703:
#line 1678 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 704:
#line 1680 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 705:
#line 1685 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 706:
#line 1687 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 707:
#line 1689 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 708:
#line 1693 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 709:
#line 1696 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 710:
#line 1699 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 711:
#line 1702 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 712:
#line 1705 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 713:
#line 1708 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 714:
#line 1711 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 715:
#line 1714 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 716:
#line 1717 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 717:
#line 1720 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 718:
#line 1723 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 719:
#line 1727 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 720:
#line 1728 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 721:
#line 1729 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 722:
#line 1730 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 723:
#line 1731 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 724:
#line 1732 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 725:
#line 1734 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 726:
#line 1736 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 727:
#line 1737 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 728:
#line 1738 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 729:
#line 1739 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 730:
#line 1742 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 731:
#line 1743 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 732:
#line 1744 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 733:
#line 1745 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 734:
#line 1746 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 735:
#line 1748 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 736:
#line 1749 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 737:
#line 1750 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 738:
#line 1751 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 739:
#line 1755 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 740:
#line 1757 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 741:
#line 1758 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 742:
#line 1760 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 743:
#line 1762 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 744:
#line 1764 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 745:
#line 1767 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 746:
#line 1768 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 747:
#line 1771 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 748:
#line 1772 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 749:
#line 1773 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 750:
#line 1776 "frame/parser.Y"
    {;}
    break;

  case 751:
#line 1779 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 752:
#line 1780 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 753:
#line 1781 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 754:
#line 1782 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 755:
#line 1783 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 756:
#line 1784 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 757:
#line 1785 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 758:
#line 1789 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 760:
#line 1797 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 761:
#line 1798 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 762:
#line 1800 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 763:
#line 1802 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 764:
#line 1803 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 765:
#line 1804 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 767:
#line 1805 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 770:
#line 1808 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 771:
#line 1809 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 772:
#line 1811 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 773:
#line 1813 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 774:
#line 1815 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 775:
#line 1818 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 776:
#line 1820 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 777:
#line 1821 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 778:
#line 1823 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 779:
#line 1826 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 780:
#line 1829 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 781:
#line 1833 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 782:
#line 1836 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 783:
#line 1839 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 784:
#line 1842 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 785:
#line 1846 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 786:
#line 1850 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 787:
#line 1855 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 788:
#line 1859 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 789:
#line 1861 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 790:
#line 1862 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 791:
#line 1864 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 792:
#line 1866 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 793:
#line 1868 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 794:
#line 1870 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 795:
#line 1871 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 796:
#line 1873 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 797:
#line 1875 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 798:
#line 1878 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 799:
#line 1882 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 800:
#line 1886 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 801:
#line 1888 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 802:
#line 1890 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 803:
#line 1892 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 804:
#line 1894 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 805:
#line 1896 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 806:
#line 1898 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 807:
#line 1900 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 808:
#line 1902 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 809:
#line 1904 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 810:
#line 1906 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 811:
#line 1908 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 812:
#line 1910 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 813:
#line 1912 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 814:
#line 1913 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 815:
#line 1915 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 816:
#line 1917 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 817:
#line 1918 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 818:
#line 1919 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 819:
#line 1921 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 820:
#line 1923 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 821:
#line 1924 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 822:
#line 1925 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 823:
#line 1926 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 824:
#line 1928 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 825:
#line 1930 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 826:
#line 1934 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 827:
#line 1937 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 828:
#line 1940 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 829:
#line 1944 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 830:
#line 1948 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 831:
#line 1953 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 832:
#line 1957 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 833:
#line 1958 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 834:
#line 1959 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 835:
#line 1961 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 836:
#line 1963 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 837:
#line 1967 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 838:
#line 1968 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 839:
#line 1969 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 840:
#line 1971 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 841:
#line 1974 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 842:
#line 1977 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 843:
#line 1980 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 844:
#line 1981 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 845:
#line 1985 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 846:
#line 1989 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 847:
#line 1991 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 848:
#line 1992 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 849:
#line 1994 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 850:
#line 1997 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 851:
#line 2000 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 852:
#line 2001 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 853:
#line 2003 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 854:
#line 2004 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 855:
#line 2005 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 856:
#line 2007 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 857:
#line 2008 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 858:
#line 2010 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 859:
#line 2013 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 860:
#line 2016 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 861:
#line 2018 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 862:
#line 2019 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 866:
#line 2024 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 867:
#line 2025 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 868:
#line 2027 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 869:
#line 2029 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 870:
#line 2031 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 871:
#line 2032 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 875:
#line 2038 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 876:
#line 2039 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 877:
#line 2040 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 878:
#line 2041 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 879:
#line 2042 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 880:
#line 2043 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 881:
#line 2044 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 882:
#line 2045 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 883:
#line 2046 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 884:
#line 2047 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 885:
#line 2049 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 886:
#line 2051 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 887:
#line 2052 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 888:
#line 2053 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 889:
#line 2054 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 890:
#line 2055 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 891:
#line 2057 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 892:
#line 2058 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 893:
#line 2059 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 894:
#line 2060 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 895:
#line 2061 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 896:
#line 2063 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 897:
#line 2064 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 898:
#line 2065 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 899:
#line 2066 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 900:
#line 2067 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 901:
#line 2068 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 902:
#line 2071 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 903:
#line 2072 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 904:
#line 2073 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 905:
#line 2074 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 906:
#line 2075 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 907:
#line 2076 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 908:
#line 2077 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 909:
#line 2078 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 910:
#line 2079 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 911:
#line 2080 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 912:
#line 2081 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 913:
#line 2082 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 914:
#line 2083 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 915:
#line 2084 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 916:
#line 2085 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 917:
#line 2086 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 918:
#line 2087 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 919:
#line 2088 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 920:
#line 2089 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 921:
#line 2090 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 922:
#line 2091 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 923:
#line 2094 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 924:
#line 2095 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 925:
#line 2096 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 926:
#line 2097 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 927:
#line 2098 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 928:
#line 2100 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 929:
#line 2110 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 930:
#line 2118 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 931:
#line 2127 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 932:
#line 2135 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 933:
#line 2142 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 934:
#line 2149 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 935:
#line 2157 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 936:
#line 2165 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 937:
#line 2170 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 938:
#line 2175 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 939:
#line 2180 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 940:
#line 2185 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 941:
#line 2190 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 942:
#line 2195 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 943:
#line 2200 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 944:
#line 2209 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 945:
#line 2219 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 946:
#line 2229 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 947:
#line 2238 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 948:
#line 2246 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 949:
#line 2256 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 950:
#line 2266 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 951:
#line 2276 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 952:
#line 2288 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 953:
#line 2297 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 955:
#line 2305 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 956:
#line 2307 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 957:
#line 2309 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 958:
#line 2314 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 959:
#line 2317 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 960:
#line 2318 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 961:
#line 2319 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 962:
#line 2326 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 963:
#line 2328 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 964:
#line 2329 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 965:
#line 2332 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 966:
#line 2333 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 967:
#line 2334 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 968:
#line 2335 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 969:
#line 2336 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 970:
#line 2337 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 971:
#line 2338 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 973:
#line 2342 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 974:
#line 2343 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 975:
#line 2344 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 976:
#line 2345 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 977:
#line 2346 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 978:
#line 2349 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 979:
#line 2351 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 980:
#line 2353 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 981:
#line 2355 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 982:
#line 2357 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 983:
#line 2359 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 984:
#line 2361 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 985:
#line 2362 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 986:
#line 2363 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 987:
#line 2365 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 988:
#line 2367 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 989:
#line 2370 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 990:
#line 2372 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 991:
#line 2373 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 992:
#line 2374 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 993:
#line 2376 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 994:
#line 2378 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 995:
#line 2381 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 996:
#line 2384 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 997:
#line 2385 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 998:
#line 2386 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 999:
#line 2387 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1000:
#line 2389 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1001:
#line 2390 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1002:
#line 2391 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1003:
#line 2392 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1004:
#line 2393 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1005:
#line 2395 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1006:
#line 2397 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1007:
#line 2399 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1008:
#line 2401 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1009:
#line 2403 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1010:
#line 2404 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1011:
#line 2406 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1012:
#line 2408 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1013:
#line 2410 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1014:
#line 2411 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1015:
#line 2412 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1016:
#line 2414 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1017:
#line 2416 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1018:
#line 2419 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1019:
#line 2422 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1020:
#line 2423 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1021:
#line 2425 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1022:
#line 2428 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1023:
#line 2431 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1024:
#line 2432 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1025:
#line 2433 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1026:
#line 2434 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1027:
#line 2436 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1028:
#line 2438 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1029:
#line 2440 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1030:
#line 2441 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1031:
#line 2443 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1032:
#line 2444 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1033:
#line 2445 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1034:
#line 2446 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1035:
#line 2447 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1036:
#line 2449 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1037:
#line 2451 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1038:
#line 2453 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1039:
#line 2455 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1041:
#line 2457 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1042:
#line 2458 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1043:
#line 2460 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1044:
#line 2462 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1045:
#line 2463 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1046:
#line 2464 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1048:
#line 2466 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1050:
#line 2470 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1051:
#line 2471 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1052:
#line 2472 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1053:
#line 2473 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1054:
#line 2474 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1055:
#line 2475 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1056:
#line 2477 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1057:
#line 2478 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1058:
#line 2480 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1059:
#line 2483 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1060:
#line 2484 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1061:
#line 2485 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1062:
#line 2486 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1063:
#line 2489 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1064:
#line 2490 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1065:
#line 2493 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1066:
#line 2494 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1067:
#line 2497 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1068:
#line 2498 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1069:
#line 2501 "frame/parser.Y"
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

  case 1070:
#line 2514 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1071:
#line 2515 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1072:
#line 2519 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1073:
#line 2520 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1074:
#line 2524 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1075:
#line 2525 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1076:
#line 2530 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1077:
#line 2534 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1078:
#line 2539 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1079:
#line 2541 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1080:
#line 2544 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1081:
#line 2546 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1082:
#line 2549 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1083:
#line 2551 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1084:
#line 2554 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1085:
#line 2555 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1086:
#line 2556 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1087:
#line 2557 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1088:
#line 2558 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1089:
#line 2559 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1090:
#line 2561 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1093:
#line 2568 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1094:
#line 2569 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1095:
#line 2570 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1096:
#line 2571 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1097:
#line 2572 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1098:
#line 2573 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1101:
#line 2578 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1102:
#line 2579 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1103:
#line 2580 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1104:
#line 2581 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1105:
#line 2582 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1106:
#line 2583 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1107:
#line 2584 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1108:
#line 2585 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1109:
#line 2586 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1110:
#line 2587 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1111:
#line 2588 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1112:
#line 2589 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1115:
#line 2596 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1116:
#line 2597 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1118:
#line 2601 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1119:
#line 2603 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1120:
#line 2604 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1121:
#line 2607 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1122:
#line 2608 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1123:
#line 2609 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1124:
#line 2610 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1125:
#line 2611 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1126:
#line 2612 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1127:
#line 2615 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1128:
#line 2616 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1131:
#line 2624 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1132:
#line 2627 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1133:
#line 2628 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1137:
#line 2635 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1138:
#line 2638 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1139:
#line 2642 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1140:
#line 2643 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1141:
#line 2644 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1142:
#line 2645 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1143:
#line 2646 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1144:
#line 2647 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1145:
#line 2648 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1146:
#line 2649 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1147:
#line 2655 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1148:
#line 2656 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1149:
#line 2657 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1150:
#line 2658 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1151:
#line 2662 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1152:
#line 2663 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1153:
#line 2665 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1154:
#line 2670 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1156:
#line 2672 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1158:
#line 2674 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1159:
#line 2677 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1160:
#line 2679 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1161:
#line 2684 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1162:
#line 2687 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1163:
#line 2688 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1164:
#line 2689 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1165:
#line 2692 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1166:
#line 2694 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1167:
#line 2698 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1168:
#line 2699 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1169:
#line 2703 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1170:
#line 2704 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1171:
#line 2705 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1172:
#line 2706 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1173:
#line 2712 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1174:
#line 2713 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1175:
#line 2719 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1176:
#line 2720 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1177:
#line 2721 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1178:
#line 2722 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1181:
#line 2730 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1182:
#line 2732 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1183:
#line 2733 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1184:
#line 2734 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1185:
#line 2738 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1186:
#line 2739 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1187:
#line 2740 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1188:
#line 2741 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1189:
#line 2744 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1190:
#line 2745 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1191:
#line 2748 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1192:
#line 2749 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1193:
#line 2750 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1194:
#line 2753 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1195:
#line 2754 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1196:
#line 2755 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1197:
#line 2758 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1198:
#line 2759 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1200:
#line 2761 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1201:
#line 2762 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1202:
#line 2765 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1203:
#line 2766 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1204:
#line 2767 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1209:
#line 2774 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1210:
#line 2778 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1211:
#line 2780 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1212:
#line 2782 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1214:
#line 2787 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1215:
#line 2789 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1216:
#line 2791 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1226:
#line 2804 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1227:
#line 2805 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1228:
#line 2806 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1229:
#line 2809 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1230:
#line 2810 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1231:
#line 2811 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1232:
#line 2814 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1233:
#line 2815 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1234:
#line 2816 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1235:
#line 2819 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1236:
#line 2820 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1237:
#line 2821 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1239:
#line 2825 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1240:
#line 2826 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1241:
#line 2827 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1242:
#line 2830 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1243:
#line 2831 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1244:
#line 2832 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1245:
#line 2835 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1246:
#line 2836 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1247:
#line 2837 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1248:
#line 2840 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1249:
#line 2841 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1250:
#line 2842 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1251:
#line 2845 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1252:
#line 2846 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1253:
#line 2847 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1254:
#line 2851 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1255:
#line 2853 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1256:
#line 2855 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1257:
#line 2859 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1258:
#line 2863 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1259:
#line 2865 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1260:
#line 2869 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1261:
#line 2872 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1262:
#line 2873 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1263:
#line 2874 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1264:
#line 2875 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1265:
#line 2878 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1266:
#line 2880 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1267:
#line 2882 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1268:
#line 2885 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1270:
#line 2889 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1271:
#line 2890 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1272:
#line 2891 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1273:
#line 2894 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1274:
#line 2895 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1275:
#line 2899 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1277:
#line 2901 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1280:
#line 2906 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1281:
#line 2907 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1282:
#line 2908 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1283:
#line 2911 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1284:
#line 2912 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1285:
#line 2913 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1286:
#line 2916 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1287:
#line 2918 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1288:
#line 2923 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1289:
#line 2924 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1290:
#line 2927 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1291:
#line 2934 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1292:
#line 2936 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1293:
#line 2938 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1294:
#line 2943 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1296:
#line 2947 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1297:
#line 2948 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1298:
#line 2949 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1299:
#line 2951 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1300:
#line 2953 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1301:
#line 2958 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11148 "frame/parser.C"
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


#line 2962 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

