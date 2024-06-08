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
#define YYLAST   5629

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  364
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  226
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1307
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2894

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
    1839,  1843,  1847,  1851,  1855,  1858,  1861,  1866,  1870,  1874,
    1878,  1882,  1887,  1892,  1897,  1902,  1908,  1913,  1920,  1928,
    1933,  1938,  1944,  1947,  1951,  1955,  1959,  1963,  1967,  1971,
    1975,  1978,  1982,  1986,  1990,  1994,  1999,  2003,  2009,  2016,
    2020,  2024,  2029,  2033,  2037,  2041,  2045,  2049,  2055,  2059,
    2063,  2068,  2072,  2075,  2078,  2080,  2084,  2089,  2094,  2099,
    2104,  2109,  2116,  2121,  2126,  2132,  2137,  2142,  2147,  2152,
    2158,  2163,  2170,  2178,  2183,  2188,  2194,  2200,  2206,  2212,
    2218,  2224,  2232,  2238,  2244,  2251,  2256,  2261,  2266,  2271,
    2276,  2283,  2288,  2293,  2299,  2305,  2311,  2317,  2323,  2330,
    2336,  2344,  2353,  2359,  2365,  2372,  2376,  2380,  2384,  2388,
    2393,  2397,  2403,  2410,  2414,  2418,  2423,  2427,  2431,  2435,
    2439,  2443,  2449,  2453,  2457,  2462,  2467,  2472,  2476,  2482,
    2487,  2492,  2495,  2499,  2506,  2513,  2515,  2517,  2519,  2522,
    2525,  2528,  2532,  2536,  2539,  2552,  2555,  2558,  2560,  2564,
    2569,  2572,  2573,  2577,  2579,  2582,  2585,  2588,  2591,  2594,
    2599,  2604,  2609,  2613,  2618,  2624,  2633,  2640,  2650,  2657,
    2665,  2676,  2688,  2701,  2711,  2717,  2724,  2728,  2734,  2740,
    2747,  2753,  2758,  2768,  2779,  2791,  2801,  2808,  2815,  2822,
    2829,  2836,  2843,  2850,  2857,  2864,  2872,  2880,  2883,  2888,
    2893,  2898,  2903,  2909,  2914,  2919,  2925,  2931,  2935,  2940,
    2945,  2950,  2958,  2968,  2975,  2986,  2998,  3011,  3021,  3025,
    3028,  3032,  3038,  3046,  3051,  3055,  3059,  3066,  3074,  3082,
    3087,  3092,  3102,  3107,  3111,  3116,  3124,  3132,  3135,  3139,
    3143,  3147,  3152,  3155,  3158,  3163,  3174,  3178,  3180,  3184,
    3187,  3190,  3193,  3196,  3200,  3206,  3211,  3217,  3220,  3223,
    3226,  3229,  3233,  3236,  3239,  3242,  3246,  3249,  3253,  3258,
    3262,  3266,  3273,  3278,  3281,  3285,  3288,  3291,  3296,  3300,
    3304,  3307,  3311,  3313,  3316,  3318,  3321,  3324,  3327,  3329,
    3331,  3333,  3335,  3338,  3340,  3343,  3346,  3348,  3351,  3354,
    3356,  3359,  3361,  3363,  3365,  3367,  3369,  3371,  3373,  3375,
    3376,  3378,  3381,  3384,  3387,  3391,  3397,  3405,  3413,  3420,
    3427,  3434,  3441,  3447,  3454,  3461,  3468,  3475,  3482,  3489,
    3496,  3508,  3516,  3524,  3532,  3542,  3552,  3563,  3576,  3589,
    3592,  3595,  3599,  3604,  3609,  3614,  3615,  3617,  3619,  3624,
    3629,  3631,  3633,  3635,  3637,  3639,  3641,  3643,  3645,  3648,
    3650,  3652,  3654,  3658,  3662,  3671,  3678,  3689,  3697,  3705,
    3711,  3714,  3717,  3721,  3726,  3732,  3738,  3744,  3748,  3753,
    3759,  3765,  3771,  3777,  3780,  3784,  3788,  3794,  3798,  3802,
    3806,  3811,  3817,  3823,  3829,  3835,  3839,  3844,  3850,  3856,
    3859,  3862,  3866,  3872,  3879,  3886,  3890,  3894,  3901,  3907,
    3913,  3916,  3920,  3924,  3930,  3937,  3941,  3944,  3947,  3951,
    3954,  3958,  3961,  3965,  3971,  3978,  3981,  3984,  3987,  3989,
    3994,  3999,  4001,  4004,  4007,  4010,  4013,  4016,  4019,  4022,
    4026,  4029,  4033,  4036,  4040,  4042,  4044,  4046,  4048,  4050,
    4051,  4054,  4055,  4058,  4059,  4061,  4062,  4063,  4065,  4067,
    4069,  4071,  4073,  4081,  4090,  4093,  4100,  4103,  4110,  4113,
    4117,  4120,  4122,  4124,  4128,  4132,  4134,  4139,  4142,  4144,
    4148,  4152,  4157,  4161,  4165,  4169,  4171,  4173,  4175,  4177,
    4179,  4181,  4183,  4185,  4187,  4189,  4191,  4193,  4195,  4197,
    4199,  4202,  4203,  4204,  4207,  4214,  4222,  4225,  4227,  4231,
    4233,  4237,  4239,  4241,  4243,  4246,  4249,  4251,  4255,  4256,
    4257,  4260,  4263,  4265,  4269,  4275,  4277,  4280,  4283,  4287,
    4290,  4293,  4296,  4299,  4301,  4303,  4305,  4307,  4312,  4315,
    4319,  4323,  4326,  4330,  4333,  4336,  4339,  4343,  4347,  4351,
    4354,  4358,  4360,  4364,  4368,  4370,  4373,  4376,  4379,  4382,
    4392,  4399,  4401,  4403,  4405,  4407,  4410,  4413,  4417,  4421,
    4423,  4426,  4430,  4434,  4436,  4439,  4441,  4443,  4445,  4447,
    4449,  4452,  4455,  4460,  4462,  4465,  4468,  4471,  4475,  4477,
    4479,  4481,  4484,  4487,  4490,  4493,  4496,  4500,  4504,  4508,
    4512,  4516,  4520,  4524,  4526,  4529,  4532,  4535,  4539,  4542,
    4546,  4550,  4553,  4556,  4559,  4562,  4565,  4568,  4571,  4574,
    4577,  4580,  4583,  4586,  4589,  4592,  4596,  4600,  4604,  4607,
    4610,  4613,  4616,  4619,  4622,  4625,  4628,  4631,  4634,  4637,
    4640,  4644,  4648,  4652,  4657,  4664,  4667,  4669,  4671,  4673,
    4675,  4677,  4678,  4684,  4686,  4693,  4697,  4699,  4702,  4705,
    4708,  4712,  4716,  4719,  4722,  4725,  4728,  4731,  4734,  4738,
    4741,  4744,  4748,  4750,  4754,  4759,  4762,  4764,  4767,  4773,
    4780,  4787,  4790,  4792,  4795,  4798,  4804,  4811
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
      -1,   255,    87,   492,    -1,   158,    87,   492,    -1,   157,
      87,   492,    -1,     5,    13,     5,    -1,     5,    14,     5,
      -1,     5,    61,     5,    -1,     5,   198,    -1,     5,   199,
      -1,     5,   273,   386,     4,    -1,     5,   283,     4,    -1,
       5,   284,     4,    -1,     5,   315,     5,    -1,     5,     5,
     281,    -1,     5,    13,     5,   388,    -1,     5,    14,     5,
     388,    -1,     5,    61,     5,   388,    -1,     5,   198,   387,
     388,    -1,     5,     5,   281,   387,   388,    -1,     5,   199,
     387,   388,    -1,     5,   273,   386,     4,   387,   388,    -1,
       5,   288,   386,     4,     4,   387,   388,    -1,     5,   283,
       4,   388,    -1,     5,   284,     4,   388,    -1,     5,   315,
       5,   387,   388,    -1,   280,   495,    -1,   118,    87,   496,
      -1,   255,   162,   504,    -1,   255,    87,   503,    -1,   158,
     162,   504,    -1,   158,    87,   503,    -1,   157,   162,   504,
      -1,   157,    87,   503,    -1,   200,   497,    -1,     5,    13,
       5,    -1,     5,    14,     5,    -1,     5,    61,     5,    -1,
       5,   198,   387,    -1,     5,     5,   281,   387,    -1,     5,
     199,   387,    -1,     5,   273,   386,     4,   387,    -1,     5,
     288,   386,     4,     4,   387,    -1,     5,   283,     4,    -1,
       5,   284,     4,    -1,     5,   315,     5,   387,    -1,     5,
      13,     5,    -1,     5,    14,     5,    -1,     5,    61,     5,
      -1,     5,   198,   387,    -1,     5,   199,   387,    -1,     5,
     273,   386,     4,   387,    -1,     5,   283,     4,    -1,     5,
     284,     4,    -1,     5,   315,     5,   387,    -1,   162,   167,
     498,    -1,   167,   499,    -1,   162,   500,    -1,   502,    -1,
     162,   350,   501,    -1,     5,    13,     5,   388,    -1,     5,
      14,     5,   388,    -1,     5,    61,     5,   388,    -1,     5,
     198,   387,   388,    -1,     5,   199,   387,   388,    -1,     5,
     273,   386,     4,   387,   388,    -1,     5,   283,     4,   388,
      -1,     5,   284,     4,   388,    -1,     5,   315,     5,   387,
     388,    -1,     5,    13,     5,   388,    -1,     5,    14,     5,
     388,    -1,     5,    61,     5,   388,    -1,     5,   198,   387,
     388,    -1,     5,     5,   281,   387,   388,    -1,     5,   199,
     387,   388,    -1,     5,   273,   386,     4,   387,   388,    -1,
       5,   288,   386,     4,     4,   387,   388,    -1,     5,   283,
       4,   388,    -1,     5,   284,     4,   388,    -1,     5,   315,
       5,   387,   388,    -1,   377,     5,    13,     5,   388,    -1,
     377,     5,    14,     5,   388,    -1,   377,     5,    61,     5,
     388,    -1,   377,     5,   198,   387,   388,    -1,   377,     5,
     199,   387,   388,    -1,   377,     5,   273,   386,     4,   387,
     388,    -1,   377,     5,   283,     4,   388,    -1,   377,     5,
     284,     4,   388,    -1,   377,     5,   315,     5,   387,   388,
      -1,     5,    13,     5,   388,    -1,     5,    14,     5,   388,
      -1,     5,    61,     5,   388,    -1,     5,   198,   387,   388,
      -1,     5,   199,   387,   388,    -1,     5,   273,   386,     4,
     387,   388,    -1,     5,   283,     4,   388,    -1,     5,   284,
       4,   388,    -1,     5,   315,     5,   387,   388,    -1,   377,
       5,    13,     5,   388,    -1,   377,     5,    14,     5,   388,
      -1,   377,     5,    61,     5,   388,    -1,   377,     5,   198,
     387,   388,    -1,   377,     5,     5,   281,   387,   388,    -1,
     377,     5,   199,   387,   388,    -1,   377,     5,   273,   386,
       4,   387,   388,    -1,   377,     5,   288,   386,     4,     4,
     387,   388,    -1,   377,     5,   283,     4,   388,    -1,   377,
       5,   284,     4,   388,    -1,   377,     5,   315,     5,   387,
     388,    -1,     5,    13,     5,    -1,     5,    14,     5,    -1,
       5,    61,     5,    -1,     5,   198,   387,    -1,     5,     5,
     281,   387,    -1,     5,   199,   387,    -1,     5,   273,   386,
       4,   387,    -1,     5,   288,   386,     4,     4,   387,    -1,
       5,   283,     4,    -1,     5,   284,     4,    -1,     5,   315,
       5,   387,    -1,     5,    13,     5,    -1,     5,    14,     5,
      -1,     5,    61,     5,    -1,     5,   198,   387,    -1,     5,
     199,   387,    -1,     5,   273,   386,     4,   387,    -1,     5,
     283,     4,    -1,     5,   284,     4,    -1,     5,   315,     5,
     387,    -1,     5,    13,     5,   388,    -1,     5,    61,     5,
     388,    -1,     5,   198,   388,    -1,     5,   273,   386,     4,
     388,    -1,     5,   283,     4,   388,    -1,     5,   315,     5,
     388,    -1,     5,     5,    -1,   280,     5,     5,    -1,    94,
       4,     4,     4,     4,     4,    -1,   195,     4,     4,     4,
       4,     4,    -1,   112,    -1,   239,    -1,   368,    -1,   143,
     368,    -1,    88,   368,    -1,    66,     5,    -1,     5,     4,
       4,    -1,   312,   366,   366,    -1,   359,   366,    -1,     5,
       5,   377,   383,     5,     5,   377,   383,   366,   377,   385,
       5,    -1,    60,   514,    -1,    66,     5,    -1,    80,    -1,
      73,   519,     5,    -1,    73,   519,   315,     5,    -1,    75,
     100,    -1,    -1,    83,   512,   515,    -1,    89,    -1,   100,
     517,    -1,   106,   518,    -1,   115,     4,    -1,   132,     5,
      -1,   153,    16,    -1,   153,   220,   366,   366,    -1,   153,
     304,   366,   366,    -1,     4,    19,   391,   368,    -1,     4,
      20,   371,    -1,     4,    20,   371,   378,    -1,     4,    20,
     371,   376,   383,    -1,     4,    21,   247,   366,   366,     4,
     376,   385,    -1,     4,    21,   247,     5,   376,   385,    -1,
       4,    49,   247,   366,   366,   366,     4,   376,   385,    -1,
       4,    49,   247,     5,   376,   385,    -1,     4,    48,   247,
     366,   366,   376,   385,    -1,     4,    52,   106,   371,   371,
       4,   366,   366,   366,     4,    -1,     4,    52,   106,   371,
     371,     4,   366,   366,   366,     4,   378,    -1,     4,    52,
     106,   371,   371,     4,   366,   366,   366,     4,   376,   383,
      -1,     4,    52,   106,     5,     5,   376,   383,   376,   385,
      -1,     4,    55,   513,     5,     5,    -1,     4,    62,   247,
     366,   376,   385,    -1,     4,    66,     5,    -1,     4,    74,
      26,   368,   368,    -1,     4,    74,   172,     5,     5,    -1,
       4,    74,   247,   366,   376,   385,    -1,     4,    74,   293,
     376,   383,    -1,     4,    75,   142,   368,    -1,     4,    82,
     106,   371,   371,     4,   366,   366,     4,    -1,     4,    82,
     106,   371,   371,     4,   366,   366,     4,   378,    -1,     4,
      82,   106,   371,   371,     4,   366,   366,     4,   376,   383,
      -1,     4,    82,   106,     5,     5,   376,   383,   376,   385,
      -1,     4,    83,    21,   247,   366,   366,    -1,     4,    83,
      49,   247,   366,   366,    -1,     4,    83,    52,    20,   366,
     366,    -1,     4,    83,    52,   247,   366,   366,    -1,     4,
      83,   111,   247,   366,   366,    -1,     4,    83,   114,    20,
     366,   366,    -1,     4,    83,   114,   247,   366,   366,    -1,
       4,    83,    82,    20,   366,   366,    -1,     4,    83,    82,
     247,   366,   366,    -1,     4,    83,   235,   319,     4,   366,
     366,    -1,     4,    83,   268,   319,     4,   366,   366,    -1,
       4,   100,    -1,     4,   100,    21,     4,    -1,     4,   100,
      49,     4,    -1,     4,   100,    52,     4,    -1,     4,   100,
     111,     4,    -1,     4,   100,    55,   513,     5,    -1,     4,
     100,   114,     4,    -1,     4,   100,    82,     4,    -1,     4,
     100,   235,   319,     4,    -1,     4,   100,   268,   319,     4,
      -1,     4,   100,   295,    -1,     4,   100,   295,     5,    -1,
       4,   100,   295,     4,    -1,     4,   106,    39,     4,    -1,
       4,   110,   247,   366,   366,   376,   385,    -1,     4,   111,
     247,   366,   366,   366,     4,   376,   385,    -1,     4,   111,
     247,     5,   376,   385,    -1,     4,   114,   106,   371,   371,
       4,   366,   366,   366,     4,    -1,     4,   114,   106,   371,
     371,     4,   366,   366,   366,     4,   378,    -1,     4,   114,
     106,   371,   371,     4,   366,   366,   366,     4,   376,   383,
      -1,     4,   114,   106,     5,     5,   376,   383,   376,   385,
      -1,     4,   132,     5,    -1,     4,   153,    -1,     4,   153,
     220,    -1,     4,   179,    26,   368,   368,    -1,     4,   179,
     233,   376,   383,   375,   375,    -1,     4,   203,   366,   366,
      -1,     4,   203,   136,    -1,     4,   203,    35,    -1,     4,
     203,   303,   376,   383,   375,    -1,     4,   235,   253,   366,
     366,   376,   385,    -1,     4,   268,   253,   366,   366,   376,
     385,    -1,     4,   233,   272,   389,    -1,     4,   233,   279,
       4,    -1,     4,   241,   376,   383,   375,   375,   366,   376,
     385,    -1,     4,   242,   532,   368,    -1,     4,   257,    39,
      -1,     4,   258,   133,     5,    -1,     4,   258,   233,   376,
     383,   375,   375,    -1,     4,   258,   293,   376,   383,   376,
     385,    -1,     4,   269,    -1,     4,   269,   220,    -1,     4,
     295,     5,    -1,     4,   297,     5,    -1,     4,   297,   257,
     368,    -1,     4,   309,    -1,     4,   311,    -1,     4,   317,
      26,   368,    -1,     4,   317,   233,   376,   383,   375,   376,
     385,   366,   371,    -1,     4,   351,     4,    -1,   170,    -1,
     170,   366,   366,    -1,   181,   527,    -1,   182,   528,    -1,
     203,   529,    -1,   240,   368,    -1,   242,   532,   368,    -1,
     242,   532,   368,   366,   366,    -1,   257,    39,   366,   366,
      -1,   257,   202,   366,   366,     4,    -1,   257,   112,    -1,
     262,   536,    -1,   269,   537,    -1,   276,   538,    -1,     5,
      66,     5,    -1,     5,    80,    -1,     5,   100,    -1,     5,
      89,    -1,     5,   132,     5,    -1,     5,   153,    -1,     5,
     153,   220,    -1,     5,   203,   366,   366,    -1,     5,   203,
     136,    -1,     5,   203,    35,    -1,     5,   203,   303,   376,
     383,   375,    -1,     5,   242,   532,   368,    -1,     5,   269,
      -1,     5,   269,   220,    -1,     5,   309,    -1,     5,   311,
      -1,   295,   106,     5,     5,    -1,   295,   100,     5,    -1,
     295,   100,    16,    -1,   295,     5,    -1,   295,   312,     5,
      -1,   226,    -1,   226,   376,    -1,   308,    -1,   309,    16,
      -1,   311,    16,    -1,   351,     4,    -1,   269,    -1,   311,
      -1,   153,    -1,   309,    -1,    39,   203,    -1,   203,    -1,
     112,   203,    -1,    39,   106,    -1,   106,    -1,   112,   106,
      -1,    39,   257,    -1,   257,    -1,   112,   257,    -1,   100,
      -1,   297,    -1,    66,    -1,   351,    -1,   242,    -1,   132,
      -1,   170,    -1,   312,    -1,    -1,     4,    -1,    29,   368,
      -1,   247,   366,    -1,   166,     4,    -1,   221,     4,   366,
      -1,    62,   366,   366,   366,   533,    -1,   110,   366,   366,
     366,   366,   370,   533,    -1,    48,   366,   366,   366,   366,
     370,   533,    -1,   235,   366,   366,   366,   366,   533,    -1,
     268,   366,   366,   366,   366,   533,    -1,   179,   366,   366,
     366,   366,   533,    -1,   317,   366,   366,   366,   366,   533,
      -1,   297,   366,   366,   370,   533,    -1,    62,   233,   366,
     366,   390,   533,    -1,    48,   233,   366,   366,   390,   533,
      -1,   103,   233,   366,   366,   390,   533,    -1,    85,   233,
     366,   366,   390,   533,    -1,   362,   233,   366,   366,   390,
     533,    -1,    26,   233,   366,   366,   390,   533,    -1,    51,
     233,   366,   366,   390,   533,    -1,   258,   366,   366,   366,
     366,   376,   383,   376,   385,     5,   533,    -1,    74,   366,
     366,   366,   376,   383,   533,    -1,   241,   366,   366,   366,
     366,   366,   533,    -1,    21,   366,   366,   366,   366,     4,
     533,    -1,   111,   366,   366,   366,   366,   366,     4,   370,
     533,    -1,    49,   366,   366,   366,   366,   366,     4,   370,
     533,    -1,    82,   366,   366,   371,   371,     4,   366,   366,
       4,   533,    -1,   114,   366,   366,   371,   371,     4,   366,
     366,   366,     4,   370,   533,    -1,    52,   366,   366,   371,
     371,     4,   366,   366,   366,     4,   370,   533,    -1,    75,
     533,    -1,   296,   516,    -1,     5,   366,   366,    -1,   315,
       5,   366,   366,    -1,   366,   366,   315,     5,    -1,     5,
     376,   383,   375,    -1,    -1,   269,    -1,    16,    -1,    39,
     366,   366,     4,    -1,   202,   366,   366,     4,    -1,   112,
      -1,   105,    -1,   353,    -1,    63,    -1,   261,    -1,   260,
      -1,   244,    -1,   354,    -1,    60,   521,    -1,    66,    -1,
     132,    -1,   115,    -1,   147,   366,   366,    -1,   160,   366,
     366,    -1,     4,    19,    82,     5,     5,     5,   376,     4,
      -1,     4,    19,   155,     5,     5,     4,    -1,     4,    19,
     231,     5,     5,     5,     5,   376,   383,   392,    -1,     4,
      19,   232,     5,     5,   376,   392,    -1,     4,    19,   246,
       5,     5,     5,   376,    -1,     4,    19,   289,   376,   383,
      -1,   160,    16,    -1,     4,    20,    -1,     4,    20,   378,
      -1,     4,    20,   376,   383,    -1,     4,    21,   247,   376,
     385,    -1,     4,    49,   247,   376,   385,    -1,     4,    48,
     247,   376,   385,    -1,     4,    52,    20,    -1,     4,    52,
      20,   378,    -1,     4,    52,    20,   376,   383,    -1,     4,
      52,   247,   376,   385,    -1,     4,    59,   376,   383,   384,
      -1,     4,    62,   247,   376,   385,    -1,     4,    66,    -1,
       4,    74,    26,    -1,     4,    74,   172,    -1,     4,    74,
     247,   376,   385,    -1,     4,    74,   293,    -1,     4,    75,
     142,    -1,     4,    82,    20,    -1,     4,    82,    20,   378,
      -1,     4,    82,    20,   376,   383,    -1,     4,    82,   247,
     376,   385,    -1,     4,   110,   247,   376,   385,    -1,     4,
     111,   247,   376,   385,    -1,     4,   114,    20,    -1,     4,
     114,    20,   378,    -1,     4,   114,    20,   376,   383,    -1,
       4,   114,   247,   376,   385,    -1,     4,   132,    -1,     4,
     153,    -1,     4,   179,    26,    -1,     4,   179,   174,   376,
     385,    -1,     4,   179,   233,   376,   383,   384,    -1,     4,
     188,   174,   366,   376,   385,    -1,     4,   233,   272,    -1,
       4,   233,   279,    -1,     4,   241,   233,   376,   383,   384,
      -1,     4,   241,   174,   376,   385,    -1,     4,   241,   301,
     376,   385,    -1,     4,   242,    -1,     4,   242,   532,    -1,
       4,   258,   133,    -1,     4,   258,   174,   376,   385,    -1,
       4,   258,   233,   376,   383,   384,    -1,     4,   258,   293,
      -1,     4,   269,    -1,     4,   295,    -1,     4,   295,     4,
      -1,     4,   297,    -1,     4,   297,   257,    -1,     4,   307,
      -1,     4,   317,    26,    -1,     4,   317,   174,   376,   385,
      -1,     4,   317,   233,   376,   383,   384,    -1,     4,   351,
      -1,   153,   522,    -1,   153,   216,    -1,   216,    -1,   235,
     268,   366,   366,    -1,   268,   268,   366,   366,    -1,   240,
      -1,   242,   532,    -1,   269,   523,    -1,   269,   216,    -1,
     276,   524,    -1,     5,    66,    -1,     5,   132,    -1,     5,
     160,    -1,     5,   242,   532,    -1,     5,   295,    -1,     5,
     295,   216,    -1,   295,    16,    -1,   295,    99,   204,    -1,
     351,    -1,    29,    -1,   247,    -1,   166,    -1,   221,    -1,
      -1,   366,   366,    -1,    -1,   366,   366,    -1,    -1,   297,
      -1,    -1,    -1,   234,    -1,   249,    -1,   313,    -1,    57,
      -1,   134,    -1,   519,   376,   383,   384,   368,   534,   541,
      -1,   269,   519,   376,   383,   384,   368,   534,   541,    -1,
     519,     5,    -1,   519,     5,     4,     5,   376,   383,    -1,
     519,     4,    -1,   519,     4,     4,     5,   376,   383,    -1,
     127,     5,    -1,   127,     5,     5,    -1,   366,   366,    -1,
     136,    -1,    35,    -1,    39,   366,   366,    -1,   202,   366,
     366,    -1,   112,    -1,   303,   376,   383,   375,    -1,   530,
     531,    -1,   531,    -1,   532,   363,   368,    -1,    66,   363,
       5,    -1,    93,   363,     4,     4,    -1,   351,   363,     4,
      -1,   132,   363,     5,    -1,   297,   363,     5,    -1,   544,
      -1,   545,    -1,   211,    -1,   269,    -1,   153,    -1,    92,
      -1,   129,    -1,   106,    -1,   203,    -1,   257,    -1,   100,
      -1,   163,    -1,   285,    -1,   123,    -1,   525,    -1,   525,
     530,    -1,    -1,    -1,   535,   539,    -1,     5,   519,   376,
     383,   384,   368,    -1,   269,     5,   519,   376,   383,   384,
     368,    -1,   296,     5,    -1,    16,    -1,   220,   366,   366,
      -1,   304,    -1,   304,   366,   366,    -1,   125,    -1,   173,
      -1,   368,    -1,   297,   368,    -1,   539,   540,    -1,   540,
      -1,   532,   363,   368,    -1,    -1,    -1,   542,   543,    -1,
     543,   544,    -1,   544,    -1,   295,   363,     5,    -1,    55,
     363,   513,     5,     5,    -1,    64,    -1,    66,     5,    -1,
     189,   379,    -1,   248,   366,   366,    -1,   293,   376,    -1,
     302,   366,    -1,    45,   380,    -1,   189,     4,    -1,   362,
      -1,   360,    -1,   354,    -1,   211,    -1,   366,   366,   366,
     366,    -1,   366,   366,    -1,   378,   366,   366,    -1,   376,
     383,   375,    -1,   303,   549,    -1,    38,   366,   366,    -1,
     202,   550,    -1,   240,   368,    -1,   366,   366,    -1,   378,
     366,   366,    -1,   376,   383,   375,    -1,    39,   366,   366,
      -1,   366,   366,    -1,   112,   366,   366,    -1,   368,    -1,
     322,   377,   383,    -1,     5,     4,     4,    -1,   312,    -1,
      70,   554,    -1,   175,     4,    -1,   254,     4,    -1,   263,
     366,    -1,     4,     4,     4,     4,     4,     4,     4,     4,
       4,    -1,     4,     4,     4,     4,     4,     4,    -1,    54,
      -1,   144,    -1,   255,    -1,    90,    -1,   153,   556,    -1,
     269,   557,    -1,    39,   366,   366,    -1,   202,   366,   366,
      -1,   112,    -1,   274,   112,    -1,    39,   366,   366,    -1,
     202,   366,   366,    -1,   112,    -1,   274,   112,    -1,   197,
      -1,    12,    -1,   211,    -1,    33,    -1,   108,    -1,    61,
       5,    -1,   293,   376,    -1,   316,     4,     4,     4,    -1,
     366,    -1,   366,    98,    -1,   202,   562,    -1,   303,   366,
      -1,   303,   366,    98,    -1,    39,    -1,   366,    -1,   112,
      -1,    25,   564,    -1,   127,   566,    -1,   215,   576,    -1,
     113,   577,    -1,   228,     5,    -1,   122,     5,   393,    -1,
      61,     5,   393,    -1,   283,     4,   393,    -1,   255,    87,
     565,    -1,   122,     5,   393,    -1,    61,     5,   393,    -1,
     283,     4,   393,    -1,   567,    -1,   162,   567,    -1,   294,
     568,    -1,   280,   569,    -1,   118,    87,   570,    -1,   200,
     571,    -1,   255,   162,   573,    -1,   255,    87,   574,    -1,
     251,   575,    -1,   122,     5,    -1,    61,     5,    -1,   283,
       4,    -1,   122,     5,    -1,    61,     5,    -1,   283,     4,
      -1,   122,     5,    -1,    61,     5,    -1,   283,     4,    -1,
     122,     5,    -1,    61,     5,    -1,   283,     4,    -1,   162,
     572,    -1,   122,     5,     4,    -1,    61,     5,     4,    -1,
     283,     4,     4,    -1,   122,     5,    -1,    61,     5,    -1,
     283,     4,    -1,   122,     5,    -1,    61,     5,    -1,   283,
       4,    -1,   122,     5,    -1,    61,     5,    -1,   283,     4,
      -1,   122,     5,    -1,    61,     5,    -1,   283,     4,    -1,
     122,     5,   393,    -1,    61,     5,   393,    -1,   283,     4,
     393,    -1,   122,     5,     5,   393,    -1,   579,     4,     4,
     366,   366,   371,    -1,   579,     4,    -1,   100,    -1,    50,
      -1,   305,    -1,   140,    -1,   109,    -1,    -1,     4,   366,
     366,   366,   366,    -1,   214,    -1,   214,     4,   366,   366,
     366,   366,    -1,   127,   280,   581,    -1,     4,    -1,     4,
       4,    -1,   366,   376,    -1,   366,   366,    -1,   303,   366,
     366,    -1,   377,   383,   384,    -1,    15,   586,    -1,   253,
       4,    -1,   250,   585,    -1,    22,   584,    -1,     4,     4,
      -1,     4,     5,    -1,   297,     4,     5,    -1,     4,     4,
      -1,     4,     5,    -1,   297,     4,     5,    -1,     4,    -1,
       4,   377,   383,    -1,   303,     4,   377,   383,    -1,   234,
      64,    -1,   239,    -1,   366,   366,    -1,   366,   366,    11,
     366,   366,    -1,   366,   366,    11,   378,   366,   366,    -1,
     366,   366,    11,   376,   383,   375,    -1,   303,   589,    -1,
     126,    -1,   126,   366,    -1,   366,   366,    -1,   366,   366,
      11,   366,   366,    -1,   366,   366,    11,   378,   366,   366,
      -1,   366,   366,    11,   376,   383,   375,    -1
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
    1479,  1481,  1483,  1484,  1486,  1488,  1490,  1492,  1494,  1495,
    1496,  1499,  1500,  1501,  1502,  1503,  1504,  1506,  1507,  1508,
    1511,  1514,  1516,  1518,  1520,  1522,  1524,  1526,  1528,  1531,
    1533,  1535,  1537,  1538,  1539,  1540,  1541,  1542,  1543,  1544,
    1545,  1548,  1549,  1550,  1551,  1552,  1553,  1554,  1556,  1558,
    1559,  1560,  1563,  1564,  1565,  1566,  1567,  1568,  1570,  1571,
    1572,  1575,  1576,  1577,  1578,  1579,  1582,  1585,  1588,  1591,
    1594,  1597,  1600,  1603,  1606,  1611,  1614,  1617,  1620,  1623,
    1626,  1629,  1632,  1635,  1638,  1641,  1646,  1649,  1652,  1655,
    1658,  1661,  1664,  1667,  1670,  1675,  1677,  1679,  1681,  1683,
    1685,  1690,  1692,  1694,  1698,  1701,  1704,  1707,  1710,  1713,
    1716,  1719,  1722,  1725,  1728,  1733,  1734,  1735,  1736,  1737,
    1738,  1739,  1741,  1743,  1744,  1745,  1748,  1749,  1750,  1751,
    1752,  1753,  1755,  1756,  1757,  1760,  1762,  1764,  1765,  1767,
    1769,  1773,  1774,  1777,  1778,  1779,  1782,  1785,  1786,  1787,
    1788,  1789,  1790,  1791,  1794,  1802,  1803,  1804,  1805,  1807,
    1809,  1810,  1810,  1811,  1812,  1813,  1814,  1815,  1817,  1818,
    1820,  1823,  1826,  1827,  1828,  1831,  1834,  1837,  1841,  1844,
    1847,  1850,  1854,  1859,  1864,  1866,  1868,  1869,  1871,  1873,
    1875,  1877,  1878,  1880,  1882,  1886,  1891,  1893,  1895,  1897,
    1899,  1901,  1903,  1905,  1907,  1909,  1911,  1914,  1915,  1917,
    1919,  1920,  1922,  1924,  1925,  1926,  1928,  1930,  1931,  1932,
    1934,  1935,  1938,  1942,  1945,  1948,  1952,  1957,  1963,  1964,
    1965,  1967,  1968,  1972,  1974,  1975,  1976,  1979,  1982,  1985,
    1987,  1989,  1994,  1997,  1998,  1999,  2002,  2006,  2007,  2009,
    2010,  2011,  2013,  2014,  2016,  2017,  2022,  2024,  2025,  2027,
    2028,  2029,  2030,  2031,  2032,  2034,  2036,  2038,  2039,  2040,
    2042,  2044,  2045,  2046,  2047,  2048,  2049,  2050,  2051,  2052,
    2053,  2054,  2056,  2058,  2059,  2060,  2061,  2063,  2064,  2065,
    2066,  2067,  2069,  2070,  2071,  2072,  2073,  2074,  2077,  2078,
    2079,  2080,  2081,  2082,  2083,  2084,  2085,  2086,  2087,  2088,
    2089,  2090,  2091,  2092,  2093,  2094,  2095,  2096,  2097,  2100,
    2101,  2102,  2103,  2104,  2105,  2113,  2120,  2129,  2138,  2145,
    2152,  2160,  2168,  2175,  2180,  2185,  2190,  2195,  2200,  2205,
    2211,  2221,  2231,  2241,  2248,  2258,  2268,  2277,  2289,  2302,
    2307,  2310,  2312,  2314,  2319,  2323,  2324,  2325,  2331,  2333,
    2335,  2338,  2339,  2340,  2341,  2342,  2343,  2344,  2347,  2348,
    2349,  2350,  2351,  2352,  2354,  2356,  2358,  2360,  2362,  2364,
    2367,  2368,  2369,  2370,  2372,  2375,  2377,  2379,  2380,  2381,
    2383,  2386,  2389,  2391,  2392,  2393,  2394,  2396,  2397,  2398,
    2399,  2400,  2402,  2404,  2406,  2409,  2410,  2411,  2413,  2416,
    2417,  2418,  2419,  2421,  2424,  2428,  2429,  2430,  2433,  2436,
    2438,  2439,  2440,  2441,  2443,  2446,  2447,  2449,  2450,  2451,
    2452,  2453,  2455,  2456,  2458,  2461,  2462,  2463,  2464,  2465,
    2467,  2469,  2470,  2471,  2472,  2474,  2476,  2477,  2478,  2479,
    2480,  2481,  2483,  2484,  2486,  2489,  2490,  2491,  2492,  2495,
    2496,  2499,  2500,  2503,  2504,  2507,  2520,  2521,  2525,  2526,
    2530,  2531,  2534,  2538,  2544,  2546,  2549,  2551,  2554,  2556,
    2560,  2561,  2562,  2563,  2564,  2565,  2566,  2570,  2571,  2574,
    2575,  2576,  2577,  2578,  2579,  2580,  2581,  2584,  2585,  2586,
    2587,  2588,  2589,  2590,  2591,  2592,  2593,  2594,  2595,  2598,
    2599,  2602,  2603,  2603,  2606,  2608,  2610,  2613,  2614,  2615,
    2616,  2617,  2618,  2621,  2622,  2625,  2626,  2629,  2633,  2634,
    2634,  2637,  2638,  2641,  2644,  2648,  2649,  2650,  2651,  2652,
    2653,  2654,  2655,  2661,  2662,  2663,  2664,  2667,  2669,  2670,
    2675,  2677,  2678,  2679,  2680,  2683,  2684,  2689,  2693,  2694,
    2695,  2698,  2699,  2704,  2705,  2708,  2710,  2711,  2712,  2717,
    2719,  2725,  2726,  2727,  2728,  2731,  2732,  2735,  2737,  2739,
    2740,  2743,  2745,  2746,  2747,  2750,  2751,  2754,  2755,  2756,
    2759,  2760,  2761,  2764,  2765,  2766,  2767,  2768,  2771,  2772,
    2773,  2776,  2777,  2778,  2779,  2780,  2783,  2785,  2787,  2789,
    2792,  2794,  2796,  2799,  2800,  2801,  2802,  2803,  2804,  2805,
    2806,  2807,  2810,  2811,  2812,  2815,  2816,  2817,  2820,  2821,
    2822,  2825,  2826,  2827,  2830,  2831,  2832,  2833,  2836,  2837,
    2838,  2841,  2842,  2843,  2846,  2847,  2848,  2851,  2852,  2853,
    2856,  2858,  2860,  2864,  2868,  2870,  2875,  2878,  2879,  2880,
    2881,  2884,  2885,  2888,  2890,  2892,  2895,  2896,  2897,  2900,
    2901,  2904,  2906,  2907,  2908,  2909,  2912,  2913,  2914,  2917,
    2918,  2919,  2922,  2923,  2928,  2930,  2933,  2940,  2941,  2943,
    2948,  2950,  2953,  2954,  2955,  2956,  2958,  2963
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
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   492,   492,   492,   492,   492,   492,   492,   492,   492,
     493,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   496,   496,   496,   496,   496,   496,   496,   496,
     496,   497,   497,   497,   497,   497,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   503,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   503,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   505,   505,   505,   505,   505,
     505,   506,   506,   507,   507,   507,   508,   509,   509,   509,
     509,   509,   509,   509,   510,   511,   511,   511,   511,   511,
     511,   512,   511,   511,   511,   511,   511,   511,   511,   511,
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
     511,   511,   511,   511,   511,   511,   511,   511,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   514,
     514,   514,   514,   514,   514,   515,   515,   515,   515,   515,
     515,   515,   515,   515,   515,   515,   515,   515,   515,   515,
     515,   515,   515,   515,   515,   515,   515,   515,   515,   515,
     515,   516,   516,   516,   516,   517,   517,   517,   518,   518,
     518,   519,   519,   519,   519,   519,   519,   519,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   521,   521,   521,   521,   522,
     522,   523,   523,   524,   524,   525,   526,   526,   526,   526,
     526,   526,   527,   527,   528,   528,   528,   528,   528,   528,
     529,   529,   529,   529,   529,   529,   529,   530,   530,   531,
     531,   531,   531,   531,   531,   531,   531,   532,   532,   532,
     532,   532,   532,   532,   532,   532,   532,   532,   532,   533,
     533,   534,   535,   534,   536,   536,   536,   537,   537,   537,
     537,   537,   537,   538,   538,   539,   539,   540,   541,   542,
     541,   543,   543,   544,   545,   546,   546,   546,   546,   546,
     546,   546,   546,   547,   547,   547,   547,   548,   548,   548,
     548,   548,   548,   548,   548,   549,   549,   549,   550,   550,
     550,   551,   551,   551,   551,   552,   552,   552,   552,   553,
     553,   554,   554,   554,   554,   555,   555,   556,   556,   556,
     556,   557,   557,   557,   557,   558,   558,   559,   559,   559,
     560,   560,   560,   561,   561,   561,   561,   561,   562,   562,
     562,   563,   563,   563,   563,   563,   564,   564,   564,   564,
     565,   565,   565,   566,   566,   566,   566,   566,   566,   566,
     566,   566,   567,   567,   567,   568,   568,   568,   569,   569,
     569,   570,   570,   570,   571,   571,   571,   571,   572,   572,
     572,   573,   573,   573,   574,   574,   574,   575,   575,   575,
     576,   576,   576,   577,   578,   578,   578,   579,   579,   579,
     579,   580,   580,   580,   580,   580,   581,   581,   581,   582,
     582,   583,   583,   583,   583,   583,   584,   584,   584,   585,
     585,   585,   586,   586,   586,   586,   587,   588,   588,   588,
     588,   588,   589,   589,   589,   589,   589,   589
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
       3,     3,     3,     3,     2,     2,     4,     3,     3,     3,
       3,     4,     4,     4,     4,     5,     4,     6,     7,     4,
       4,     5,     2,     3,     3,     3,     3,     3,     3,     3,
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
       4,     4,     3,     4,     5,     8,     6,     9,     6,     7,
      10,    11,    12,     9,     5,     6,     3,     5,     5,     6,
       5,     4,     9,    10,    11,     9,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     7,     7,     2,     4,     4,
       4,     4,     5,     4,     4,     5,     5,     3,     4,     4,
       4,     7,     9,     6,    10,    11,    12,     9,     3,     2,
       3,     5,     7,     4,     3,     3,     6,     7,     7,     4,
       4,     9,     4,     3,     4,     7,     7,     2,     3,     3,
       3,     4,     2,     2,     4,    10,     3,     1,     3,     2,
       2,     2,     2,     3,     5,     4,     5,     2,     2,     2,
       2,     3,     2,     2,     2,     3,     2,     3,     4,     3,
       3,     6,     4,     2,     3,     2,     2,     4,     3,     3,
       2,     3,     1,     2,     1,     2,     2,     2,     1,     1,
       1,     1,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     2,     2,     2,     3,     5,     7,     7,     6,     6,
       6,     6,     5,     6,     6,     6,     6,     6,     6,     6,
      11,     7,     7,     7,     9,     9,    10,    12,    12,     2,
       2,     3,     4,     4,     4,     0,     1,     1,     4,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     3,     3,     8,     6,    10,     7,     7,     5,
       2,     2,     3,     4,     5,     5,     5,     3,     4,     5,
       5,     5,     5,     2,     3,     3,     5,     3,     3,     3,
       4,     5,     5,     5,     5,     3,     4,     5,     5,     2,
       2,     3,     5,     6,     6,     3,     3,     6,     5,     5,
       2,     3,     3,     5,     6,     3,     2,     2,     3,     2,
       3,     2,     3,     5,     6,     2,     2,     2,     1,     4,
       4,     1,     2,     2,     2,     2,     2,     2,     2,     3,
       2,     3,     2,     3,     1,     1,     1,     1,     1,     0,
       2,     0,     2,     0,     1,     0,     0,     1,     1,     1,
       1,     1,     7,     8,     2,     6,     2,     6,     2,     3,
       2,     1,     1,     3,     3,     1,     4,     2,     1,     3,
       3,     4,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     0,     2,     6,     7,     2,     1,     3,     1,
       3,     1,     1,     1,     2,     2,     1,     3,     0,     0,
       2,     2,     1,     3,     5,     1,     2,     2,     3,     2,
       2,     2,     2,     1,     1,     1,     1,     4,     2,     3,
       3,     2,     3,     2,     2,     2,     3,     3,     3,     2,
       3,     1,     3,     3,     1,     2,     2,     2,     2,     9,
       6,     1,     1,     1,     1,     2,     2,     3,     3,     1,
       2,     3,     3,     1,     2,     1,     1,     1,     1,     1,
       2,     2,     4,     1,     2,     2,     2,     3,     1,     1,
       1,     2,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     1,     2,     2,     2,     3,     2,     3,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     3,     3,     3,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       0,   317,     0,     0,     0,     0,     0,     0,   345,     0,
       0,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1076,     0,     0,     0,     0,     0,     0,     0,     0,
    1076,    43,     0,     0,     0,    48,     0,     0,     0,    52,
    1271,    54,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,  1076,     0,   371,
       0,   375,     0,     0,     0,   379,     0,   381,     0,   383,
       0,     0,   537,   387,    20,     0,   543,    21,   548,     0,
       0,   567,   552,   553,   554,   555,   569,   557,   558,   562,
     559,     0,   561,   563,     0,     0,    22,     0,    24,     0,
       0,     0,    26,     0,     0,     0,    27,     0,   591,     0,
       0,     0,   596,     0,    28,     0,     0,     0,     0,     0,
       0,     0,    30,   756,    31,     0,     0,     0,     0,     0,
       0,   757,    32,     0,    33,  1080,  1081,  1077,  1078,  1079,
       0,   139,  1145,     0,   133,     0,     0,     0,    35,     0,
    1156,  1155,  1154,  1153,    37,     0,     0,     0,     0,     0,
     157,     0,    38,     0,  1174,     0,  1171,    39,     0,     0,
       0,     0,    42,     0,    41,    40,     0,     0,     0,     0,
      45,     0,     0,  1203,    46,     0,     0,     0,     0,     0,
      47,  1267,  1266,  1270,  1269,  1268,    49,     0,    50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
       0,  1273,    53,     0,     0,    55,     0,     0,     0,     0,
     157,    56,  1296,    57,     0,     0,    58,     1,     4,     5,
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
       0,     0,     0,     0,   603,     0,   604,     0,     0,     0,
       0,     0,     0,     0,   605,     0,   755,     0,   606,     0,
     607,     0,     0,   608,     0,   760,   759,   758,     0,   763,
       0,     0,     0,   929,     0,     0,     0,   767,   771,   773,
     965,     0,     0,     0,     0,   867,     0,     0,     0,   902,
       0,     0,     0,     0,     0,     0,     0,   904,     0,     0,
       0,    34,   142,   143,   141,   140,  1151,  1146,  1152,   136,
     137,   135,   138,   134,  1147,     0,  1149,  1150,    36,     0,
       0,     0,     0,  1163,  1164,     0,   157,     0,  1161,  1158,
       0,     0,     0,   157,  1181,  1184,  1182,  1183,  1175,  1176,
    1177,  1178,     0,     0,     0,    44,  1200,  1201,     0,  1208,
    1210,  1209,  1205,  1206,  1204,     0,     0,     0,     0,  1211,
       0,  1214,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1212,  1223,     0,     0,     0,  1213,  1215,  1265,
    1198,  1199,  1197,   212,     0,   216,   208,     0,   218,   209,
       0,   220,   210,  1196,  1195,   211,   213,   214,   215,     0,
       0,   207,     0,     0,     0,     0,  1279,  1292,     0,     0,
    1282,     0,     0,  1285,     0,     0,  1284,  1283,   165,  1302,
       0,  1301,  1297,   233,   229,     0,   238,     0,   235,     0,
     254,   152,   155,   156,   154,   153,   269,   270,   271,   259,
     258,   274,   276,   275,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   157,     0,   321,
      97,    94,    95,    96,   157,   323,   322,     0,     0,     0,
       0,     0,     0,     0,   336,     0,   332,   330,   329,   344,
     395,     0,     0,   398,   413,   414,   409,   410,   415,   417,
     416,   411,   309,   310,   406,   405,   421,   420,     0,   425,
     439,   440,   429,   442,   435,   433,   428,     0,     0,   157,
     157,   165,   165,   165,   157,     0,     0,   157,   487,   469,
     480,     0,   471,    81,   482,     0,     0,   473,   475,   157,
     492,     0,     0,   478,     0,     0,   365,     0,   463,    85,
      84,   457,     0,     0,     0,     0,   979,   981,   980,     0,
    1069,     0,  1048,     0,  1051,     0,     0,  1071,  1073,     0,
    1064,   372,     0,   518,   520,   530,   523,   532,   524,   534,
     525,   536,   522,     0,     0,   385,   541,   538,   539,   165,
     566,   578,   579,   580,   582,     0,     0,     0,   602,   590,
       0,     0,     0,     0,     0,     0,   178,   178,   172,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     175,   175,   172,     0,     0,   172,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   650,   674,     0,     0,     0,
     642,     0,     0,     0,     0,   178,   172,     0,     0,   751,
       0,   761,   762,   157,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   817,     0,     0,
       0,     0,     0,   839,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   857,     0,     0,   862,   863,     0,     0,
       0,   882,   884,   883,     0,   886,     0,     0,   893,   895,
     896,   930,     0,     0,     0,     0,   765,   766,   973,   971,
     976,   975,   974,   972,   977,     0,   770,     0,   967,   966,
     774,     0,   970,     0,   775,   776,   777,   778,     0,     0,
       0,     0,     0,   869,     0,     0,   870,  1092,     0,  1095,
    1091,     0,     0,     0,   871,   903,   872,  1110,  1115,  1112,
    1118,  1111,  1109,  1116,  1113,  1107,  1114,  1108,  1117,     0,
       0,   877,     0,     0,     0,     0,   878,  1127,  1131,  1132,
       0,  1129,   879,     0,  1133,   880,   900,     0,     0,     0,
     905,   906,   907,  1148,  1162,     0,     0,  1169,  1165,     0,
       0,     0,  1160,  1159,  1173,  1172,     0,     0,  1189,     0,
       0,  1185,     0,  1193,     0,     0,  1186,     0,  1207,   201,
     201,     0,   201,     0,  1233,     0,  1232,  1224,     0,     0,
       0,     0,  1228,     0,     0,     0,  1231,     0,     0,     0,
       0,     0,  1226,  1234,     0,     0,     0,  1225,   201,   201,
     201,     0,   217,   219,   221,     0,   222,     0,    60,     0,
    1275,     0,  1280,   157,  1295,     0,  1286,  1287,     0,  1289,
    1290,     0,   166,   167,  1281,  1303,  1304,     0,   225,     0,
     239,     0,     0,     0,     0,   273,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   315,   157,
       0,     0,     0,     0,   157,     0,   335,     0,   334,   402,
     401,     0,     0,     0,   157,     0,   165,   447,   445,   449,
     453,     0,     0,     0,   165,     0,   488,   472,     0,   483,
     485,   168,     0,     0,   364,     0,     0,    60,     0,   462,
      83,    82,     0,     0,   991,     0,     0,     0,     0,     0,
       0,  1003,     0,     0,     0,     0,     0,     0,  1019,  1020,
       0,     0,     0,     0,  1030,     0,  1036,  1037,  1039,  1041,
       0,  1045,  1056,  1057,  1058,     0,  1060,  1065,  1067,  1068,
    1066,   978,     0,  1047,     0,  1046,   990,     0,     0,  1052,
       0,  1054,     0,  1053,  1074,  1055,  1062,     0,     0,   384,
       0,     0,   589,   585,   600,   601,     0,   598,   594,     0,
     178,   178,   178,   179,   180,   612,   613,   174,   173,     0,
     178,   178,   178,     0,   620,   619,   618,   630,   175,   178,
     178,   178,   176,   177,   178,   178,     0,   178,   178,     0,
     175,     0,   643,     0,   649,     0,   648,   647,   646,     0,
       0,     0,   673,     0,   672,     0,   645,   644,     0,     0,
       0,     0,   175,   175,   172,     0,     0,   172,     0,     0,
       0,   178,   178,   747,     0,   178,   178,   752,     0,   191,
     192,   193,   194,   195,   196,     0,    89,    90,    88,   782,
       0,     0,     0,     0,     0,   923,   921,   916,     0,   926,
     910,   927,   913,   925,   919,   908,   922,   911,   909,   928,
     924,     0,     0,   796,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   827,     0,     0,
       0,     0,   838,   840,     0,     0,   845,   844,     0,     0,
     181,     0,     0,   157,     0,   853,     0,     0,     0,     0,
     858,   859,   860,     0,     0,     0,   866,   881,   885,   887,
     890,   889,     0,     0,     0,   894,   931,   933,     0,   932,
     768,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1075,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   772,     0,     0,     0,
       0,   868,     0,   157,  1088,  1086,  1084,     0,     0,   157,
    1090,   873,     0,     0,     0,     0,  1126,     0,     0,  1134,
     898,   899,     0,   901,  1168,  1170,  1167,  1166,  1157,     0,
       0,     0,  1190,     0,     0,  1194,  1202,   203,   204,   205,
     206,   202,  1217,  1216,     0,     0,     0,  1219,  1218,   201,
       0,     0,     0,  1227,     0,     0,     0,     0,     0,  1244,
       0,  1258,  1257,  1259,     0,     0,     0,  1230,     0,     0,
       0,  1229,  1239,  1238,  1240,  1236,  1235,  1237,  1261,  1260,
    1262,     0,     0,     0,  1277,  1278,     0,  1293,   157,  1288,
    1291,     0,     0,   157,     0,     0,     0,   236,     0,     0,
       0,     0,   277,     0,     0,     0,     0,     0,     0,     0,
     312,   311,     0,     0,   303,   314,   316,     0,   326,   328,
     327,   325,   157,   333,     0,     0,     0,   165,   157,     0,
       0,     0,     0,   467,   481,   490,     0,   484,   170,   171,
     169,   477,     0,   493,     0,     0,   460,   465,    81,     0,
       0,     0,     0,     0,     0,   157,   992,     0,     0,     0,
     997,     0,   157,     0,  1004,  1005,     0,  1007,  1008,  1009,
       0,     0,     0,  1015,     0,  1021,     0,     0,     0,  1025,
    1026,     0,     0,     0,  1031,  1032,     0,     0,  1035,  1038,
    1040,  1042,     0,     0,  1059,  1061,   982,  1070,   983,     0,
       0,  1072,  1063,     0,     0,   546,   547,     0,   595,   599,
       0,   609,   610,   611,   178,   615,   616,   617,     0,     0,
       0,   624,   625,   172,     0,     0,     0,   178,   631,   632,
     633,   634,   636,   175,   639,   640,     0,   178,     0,     0,
       0,   175,   175,   172,     0,     0,     0,     0,     0,     0,
       0,   175,   175,   172,     0,     0,   172,     0,     0,     0,
       0,   175,   175,   172,     0,     0,     0,     0,   671,     0,
     675,     0,     0,     0,     0,     0,   175,   175,   172,     0,
       0,   172,     0,     0,     0,     0,     0,   175,   175,   172,
       0,     0,   172,     0,   175,   651,   652,   653,   654,   656,
       0,   659,   660,     0,   175,     0,     0,   745,   746,   178,
     749,   750,     0,   781,   157,   783,     0,     0,     0,     0,
       0,     0,     0,   915,   912,   918,   917,   914,   920,     0,
       0,     0,     0,     0,   157,   801,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   818,
     819,   820,     0,   824,   821,   823,     0,     0,   829,   828,
     830,     0,     0,     0,     0,     0,     0,   157,   157,   843,
     187,   183,   188,   182,   185,   184,   186,   849,   850,     0,
       0,   852,   854,   157,   157,     0,   861,   864,   157,   157,
     888,   892,   934,   769,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1119,   959,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     960,     0,     0,     0,     0,     0,   779,   780,   157,   165,
    1089,     0,     0,  1093,  1094,     0,     0,   875,     0,   157,
       0,  1128,  1130,   897,     0,  1187,  1188,  1191,  1192,   201,
     201,   201,  1263,  1242,  1241,  1243,  1246,  1245,  1249,  1248,
    1250,  1247,  1255,  1254,  1256,  1252,  1251,  1253,     0,     0,
    1272,     0,  1294,     0,   157,     0,  1298,     0,     0,   240,
       0,   237,     0,     0,     0,     0,     0,   284,     0,     0,
       0,     0,     0,   157,     0,   318,   145,     0,   422,     0,
     443,   165,   168,     0,     0,   456,     0,   494,   495,     0,
     459,     0,     0,     0,     0,     0,   157,   993,   168,   168,
     168,   157,   998,   168,   165,   168,   168,   157,  1010,   168,
     168,   168,   157,  1016,   168,   168,   157,     0,   168,   157,
     168,   168,   157,   168,   157,  1049,  1050,     0,     0,   545,
       0,   614,   621,   622,   623,     0,   627,   628,   629,   635,
     178,   175,   641,   662,   663,   664,   665,   666,     0,   668,
     669,   175,   175,   725,   726,   727,   728,   730,     0,   733,
     734,     0,   175,   736,   737,   738,   739,   740,     0,   742,
     743,   175,     0,     0,     0,   175,   175,   172,     0,     0,
       0,     0,     0,     0,   175,   175,   172,     0,     0,     0,
       0,     0,     0,   175,   175,   172,     0,     0,     0,   175,
     178,   178,   178,   178,   178,     0,   178,   178,     0,   175,
     175,   178,   178,   178,   178,   178,     0,   178,   178,     0,
     175,   655,   175,     0,   661,     0,     0,   748,     0,   784,
     168,     0,     0,   168,     0,     0,     0,   794,   168,   797,
     798,   168,   800,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   822,   825,   826,     0,
     168,     0,     0,     0,   841,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1120,  1098,     0,  1105,  1106,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   157,     0,
       0,    86,     0,     0,   968,   969,   165,     0,     0,     0,
    1096,   874,   876,   165,   157,  1180,  1221,  1220,  1222,  1264,
       0,  1274,  1305,     0,     0,  1300,  1299,   241,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   304,   168,
     423,   427,   444,   446,     0,   454,   489,   157,     0,     0,
       0,     0,     0,     0,   989,   994,   996,   995,   999,  1000,
    1001,  1002,  1006,  1011,  1012,  1013,  1014,  1017,  1018,  1022,
     165,   168,  1028,   165,  1029,  1033,   165,  1043,   165,     0,
     157,     0,   544,     0,   626,   637,   178,   175,   670,   729,
     175,     0,   735,   175,   744,   178,   178,   178,   178,   178,
       0,   178,   178,   175,   178,   178,   178,   178,   178,     0,
     178,   178,   175,   178,   178,   178,   178,   178,     0,   178,
     178,   175,   178,   685,   686,   687,   688,   690,   175,   693,
     694,     0,   178,   178,   714,   715,   716,   717,   719,   175,
     722,   723,     0,   178,   657,   175,   753,   754,   157,   786,
       0,   168,   788,     0,   157,     0,   795,   799,   157,     0,
     806,   807,   808,   809,   813,   814,   810,   811,   812,     0,
       0,   168,   833,     0,   157,     0,     0,   846,   168,     0,
       0,   168,   168,     0,   891,     0,   189,   189,     0,     0,
     189,     0,   189,  1075,     0,     0,     0,     0,     0,     0,
       0,     0,  1097,     0,     0,   189,   189,     0,     0,     0,
       0,     0,     0,     0,     0,   961,     0,     0,     0,  1075,
      87,     0,   189,     0,  1122,   157,   157,     0,   165,     0,
     223,  1307,  1306,     0,     0,   245,     0,     0,     0,     0,
       0,     0,     0,     0,   319,   455,     0,   338,     0,   985,
       0,   197,     0,  1023,  1024,  1027,  1034,  1044,   377,     0,
     338,     0,   638,   667,   731,   175,   741,   676,   677,   678,
     679,   680,   175,   682,   683,   178,   705,   706,   707,   708,
     709,   175,   711,   712,   178,   696,   697,   698,   699,   700,
     175,   702,   703,   178,   689,   178,   175,   695,   718,   178,
     175,   724,   658,     0,   168,   789,     0,     0,     0,     0,
       0,   815,   816,   831,     0,     0,     0,   842,   847,     0,
     855,   856,   848,   168,     0,   190,  1075,  1075,    86,     0,
    1075,     0,  1075,   935,   157,     0,  1100,     0,  1103,  1143,
    1104,  1102,  1099,     0,  1075,  1075,    86,     0,     0,  1075,
    1075,     0,     0,  1075,   964,   962,   963,   942,  1075,  1075,
    1122,  1138,     0,  1087,  1085,  1124,     0,     0,     0,     0,
     247,   279,   280,     0,     0,     0,   278,     0,   338,   339,
     341,   340,   388,     0,     0,   198,   200,   199,   987,   988,
     338,   390,     0,   732,   178,   684,   178,   713,   178,   704,
     691,   178,   720,   178,     0,   785,   168,   168,     0,   168,
       0,   168,   168,     0,   168,     0,  1075,   948,   944,  1075,
       0,   949,     0,   943,  1075,     0,  1101,     0,   946,   945,
    1075,     0,     0,   940,   938,  1075,   157,   939,   941,   947,
    1138,  1082,     0,     0,  1123,  1136,  1125,  1179,     0,     0,
     286,   287,   285,   305,   308,   306,     0,     0,   389,   984,
     157,   391,   597,   681,   710,   701,   692,   721,   168,   787,
     793,     0,   805,   802,   832,   837,     0,   851,     0,   953,
     937,    86,     0,   951,  1144,     0,   936,    86,     0,   952,
       0,  1083,  1140,  1142,     0,  1135,     0,     0,     0,     0,
       0,     0,   197,     0,   790,   157,   803,   834,   865,  1075,
       0,     0,  1075,     0,   168,  1141,  1137,   246,     0,     0,
       0,     0,     0,   986,   764,   157,   791,   804,   157,   835,
     955,     0,  1075,   954,     0,     0,   248,   298,     0,   297,
       0,   792,   836,    86,   956,    86,  1075,   296,   295,  1075,
    1075,   950,   958,   957
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    56,  1488,   175,   157,   961,  2559,  2560,   450,   451,
     452,   453,   158,   159,   160,   734,   726,    96,   856,   473,
    1274,  1751,  1419,  1434,  1415,  1987,  2666,  1485,  2728,  1652,
     358,   806,   809,   812,   821,    66,   382,   388,   392,   395,
      71,   398,    78,   414,   410,   404,   421,    87,   430,    97,
     103,   435,   437,   439,   507,   914,  1722,   441,   444,   110,
     460,   161,   163,  2722,   179,   181,   224,   956,   995,   496,
     903,   498,   508,   906,   911,   510,   512,   917,   515,   919,
     526,   922,   924,   529,   533,   537,   539,   542,   546,   582,
     578,  1339,   560,   942,   947,   939,  1327,   953,   563,   570,
     574,   592,   595,   600,   605,   613,   986,   988,   990,   992,
     618,   997,   227,   620,  1817,   246,   623,   625,   629,   634,
     642,   256,   252,   264,  1408,   653,   272,   664,  1424,   666,
     674,  1050,  1442,  1045,  1878,  1454,  1452,  1880,  1046,  1444,
    1446,   680,   683,   678,   274,   282,   284,   721,  1127,  1511,
    1116,  1606,  2030,  1130,  1134,  1125,   981,  1381,  1385,  1393,
    1395,  2014,   290,  1143,  1146,  1154,  2321,  2322,  2323,  2015,
    2701,  2702,  1176,  1182,  1185,  2784,  2785,  2781,  2782,  2832,
    2324,  2325,   298,   304,   312,   748,   743,   317,   322,   324,
     758,   765,  1211,  1216,   815,   803,   330,   334,   772,   340,
     779,  1657,   792,   793,  1247,  1242,  1663,  1232,  1669,  1681,
    1677,  1236,   797,   781,   346,   347,   362,  1260,   365,   371,
     833,   836,   830,   373,   376,   841
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2632
static const yytype_int16 yypact[] =
{
    5070,    57,   511,    13, -2632, -2632,  1421,  -114,  1125,  1192,
    1256,   234,  2555,   170,   282,   373,   936,    62,  5270,   551,
    1335, -2632,   157,    -5,   186,   905,   197,  1198,     5,   129,
     221,   442,   651,   382,   754,  2986,   125,   940,   232,   395,
     442, -2632,   198,    20,    26, -2632,   477,   499,  1049, -2632,
     517, -2632,    27,   728,   333,    30,   575,   189,   946,   311,
     597,   620,    60,   661,    40,   877, -2632, -2632, -2632,   968,
     913, -2632,   322,    11,   282,     0,   576,   122, -2632,   670,
     913, -2632, -2632,   913,   913,   507,   913, -2632, -2632, -2632,
   -2632,   913, -2632, -2632, -2632, -2632, -2632, -2632,    56,   657,
     676,   698,   602, -2632,   913,  1535,   913,   913,  1259,   913,
   -2632, -2632, -2632,   487, -2632, -2632, -2632, -2632,  4703, -2632,
   -2632, -2632, -2632, -2632, -2632,   913, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632,  1393, -2632,
     913, -2632,   710, -2632, -2632,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282, -2632, -2632, -2632, -2632, -2632,
     609, -2632,   663,  1709,   637,   361,   488,   659,   470,  4142,
     591,  4670,   464,   873,  4703,  3501, -2632,  1687,  -123,   841,
     932,   837,   200,   220,   167,   594,   926,   442,  1485, -2632,
     890, -2632,   688,   664,   253, -2632,   413, -2632,   824, -2632,
      28,   871,    63, -2632, -2632,  4760, -2632, -2632, -2632,   914,
     916,   974, -2632, -2632, -2632, -2632,    69, -2632, -2632, -2632,
   -2632,   770, -2632, -2632,  4760,  4336, -2632,   993, -2632,    24,
    4760,  1003, -2632,  1018,  4760,  1023, -2632,   139, -2632,  1039,
    1043,    64, -2632,   913, -2632,  1080,   350,  1083,   504,   833,
    1085,    41, -2632, -2632, -2632,  1091,  1092,   282,   282,   913,
     913, -2632, -2632,  1106, -2632, -2632, -2632, -2632, -2632, -2632,
    2868,   685, -2632,  1114,     3,   913,  4760,   913, -2632,  1120,
   -2632, -2632, -2632, -2632, -2632,   913,  1334,   282,  3036,   913,
    1393,   913, -2632,  1147, -2632,  3666, -2632, -2632,   935,  1155,
    1159,   913, -2632,  1161, -2632, -2632,   -78,  1175,  4760,  1179,
   -2632,  1417,   913,  1089, -2632,   384,  1073,  2068,    75,  1209,
   -2632, -2632, -2632, -2632, -2632, -2632, -2632,  1216, -2632,   921,
     192,   249,   259,    67,   913,  1222,   913,   201, -2632,   913,
     948,  1229, -2632,   913,   913, -2632,    49,    44,   104,  1245,
    1393, -2632, -2632, -2632,  1016,   913, -2632, -2632, -2632, -2632,
   -2632,   913, -2632,  1247,  1250, -2632,   913,   669, -2632, -2632,
   -2632, -2632, -2632, -2632,   913, -2632, -2632,   913, -2632, -2632,
      16,    16, -2632,  1253, -2632, -2632, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632, -2632, -2632,  1059,   913,   913,  1263,  1269,
    1295, -2632, -2632,   913,   913,   913,   913,   913,   913,   913,
   -2632,   913, -2632,  1297, -2632, -2632, -2632, -2632,   971, -2632,
    1302, -2632,  4760,  1312, -2632,   913, -2632, -2632, -2632,   913,
    1321,  1323,  1323,  4760,   913,   913,   913,   913,   913,   913,
   -2632,   913,  4703,  1535,   913,   913, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632,  1535,   913, -2632, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632, -2632, -2632, -2632,  1337, -2632,  1069,   -54,
   -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632,   -26,
   -2632, -2632, -2632,  1176, -2632,    -2,    47,    47, -2632, -2632,
   -2632,  1346, -2632,  1348, -2632, -2632,   342, -2632,  1170, -2632,
   -2632, -2632,  1180, -2632, -2632,  1393, -2632,   913,   913, -2632,
    4760,  4760,  1393, -2632, -2632,  1393, -2632, -2632, -2632, -2632,
    1393, -2632, -2632,  4760,  1393,   913, -2632, -2632,  4760, -2632,
    1353,   614,  1154,    14, -2632, -2632,  1156,  4760,    90, -2632,
   -2632, -2632, -2632, -2632, -2632,  1359,  1361, -2632, -2632, -2632,
   -2632, -2632, -2632, -2632, -2632,  1363, -2632,  1164, -2632,   -13,
   -2632,   913, -2632, -2632,  1026, -2632, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632, -2632, -2632, -2632,    28, -2632, -2632, -2632,
   -2632, -2632, -2632,  1190,  1195, -2632, -2632,  1322,  1326,  1330,
   -2632, -2632,  1172, -2632,   913,  1395,  1174,  3666, -2632,  1393,
   -2632, -2632,  1399, -2632, -2632, -2632, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632, -2632, -2632, -2632, -2632,  4760,  4760,  4760,
    4760, -2632, -2632, -2632, -2632, -2632, -2632,  1405, -2632, -2632,
    1406,  1414,   282, -2632, -2632,  1418,  1419,  1210,   913, -2632,
     765,  1328,  1352,  1355, -2632,  1438, -2632,   711,  1358,    45,
      58,  3425,    86,  1442, -2632,  1447, -2632,  1449, -2632,    34,
   -2632,  1443,  1455, -2632,  1464, -2632, -2632, -2632,   913, -2632,
    3666,  4671,  1770,   528,  1466,   369,  1369, -2632, -2632, -2632,
     105,   524,  1469,  1476,    84,   913,   324,   658,    54,  4760,
     282,  1612,   644,   110,   146,   199,    38, -2632,  1467,  1468,
    1487, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632, -2632, -2632,   913, -2632, -2632, -2632,   913,
     913,   913,   913, -2632, -2632,   913,  1393,   913, -2632,   913,
    1535,   913,  1488,  1393, -2632, -2632, -2632, -2632, -2632, -2632,
   -2632, -2632,  1490,    68,   436, -2632, -2632, -2632,  1495, -2632,
   -2632, -2632, -2632,  1404, -2632,  1502,  1510,  1430,  1515, -2632,
    1516, -2632,  1522,  1433,  1523,   562,   484,   587,   134,   608,
    1527,   631, -2632, -2632,  1528,  1536,  1544, -2632, -2632,  1546,
   -2632, -2632, -2632, -2632,  1548, -2632, -2632,  1552, -2632, -2632,
    1555, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632,   913,
     913, -2632,   913,  1151,   913,   913, -2632,  3666,  1497,  1561,
   -2632,  1196,  1563, -2632,  1203,  1564, -2632, -2632,   -29,   913,
     913, -2632,  1529, -2632, -2632,  1566,  1178,   913,  1558,   592,
   -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632, -2632,  1568,  1569,   913,   913,   913,   913,
     913,   913,   913,  1572,   282,  1573,  1574,  1393,  4760, -2632,
   -2632, -2632, -2632, -2632,  1393, -2632, -2632,   913,   913,   913,
    4760,   913,  1535,   913, -2632,   913, -2632, -2632, -2632, -2632,
   -2632,  1578,  1582, -2632, -2632, -2632, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632, -2632, -2632, -2632,   591, -2632,   913, -2632,
   -2632, -2632, -2632, -2632, -2632, -2632, -2632,  4760,   913,  1393,
    1393,   -29,   -29,   -29,  1393,  1535,   913,  1393, -2632, -2632,
   -2632,   913, -2632,   -13,  1432,  1584,  1586, -2632, -2632,  1393,
   -2632,  1446,  1450, -2632,  1607,  1616, -2632,  1619,  1237,  1590,
    1597, -2632,   913,  2681,   465,    53, -2632, -2632, -2632,   913,
     281,  1158, -2632,  1371, -2632,  1612,  1381,   535,  1354,   542,
   -2632, -2632,   913, -2632, -2632, -2632, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632,   913,  1645, -2632, -2632, -2632, -2632,   -29,
   -2632, -2632, -2632, -2632, -2632,  1649,  1650,  4731, -2632, -2632,
    1651,  1653,   913,  1654,  1655,  1657,   425,   425,   -30,  1659,
    1660,  1661,  1663,  1663,  1663,  1384,  1388,  1665,  1666,  1667,
      98,    98,   -30,  1669,  1671,   -30,  1672,  1673,  1675,  1677,
    1675,  1677,  5271,  1680,  1681, -2632, -2632,  1675,  1677,   818,
   -2632,  1688,  1696,  1686,  1704,   425,   -30,  1721,  1731, -2632,
    1737, -2632, -2632,  1393,   751,  1232,  1429,  1500,  1501,  1639,
    1410,  1503,  1744,     2,  1609,  1647,  1139,  1279,  1715,  1508,
    1509,  1664,  1752,  1538,   162,    82,   473,  1507,  4760,  1612,
    1724,   641,  1513,  1547,  1764,    55, -2632, -2632,   205,  1768,
    1769, -2632, -2632, -2632,  1771,  1553,    93,  1612,  1557, -2632,
   -2632, -2632,   282,  1779,  1780,   913, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632, -2632, -2632,    17, -2632,  2933, -2632, -2632,
   -2632,   913, -2632,   913, -2632, -2632, -2632, -2632,   913,   913,
     913,   369,  4760, -2632,  1781,  1240, -2632, -2632,   913, -2632,
   -2632,   913,  4760,   913, -2632, -2632, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632,   282,
     913, -2632,   913,   369,  1785,  1786, -2632, -2632, -2632, -2632,
     913,   913, -2632,   282, -2632, -2632, -2632,   510,  1787,  1788,
   -2632, -2632, -2632, -2632, -2632,   913,   913, -2632, -2632,  1535,
     913,   913, -2632, -2632, -2632, -2632,  1790,   913, -2632,   913,
    1683, -2632,   913, -2632,   913,  1689, -2632,  1795, -2632,  1205,
    1205,   639,  1205,  1798, -2632,   719, -2632, -2632,  1799,  1803,
     798,  1796, -2632,  1807,  1811,  1814, -2632,   826,   851,  1817,
    1821,  1815, -2632, -2632,  1822,  1825,  1827, -2632,  1205,  1205,
    1205,   913, -2632, -2632, -2632,   913, -2632,   913,   697,  4760,
   -2632,   913, -2632,  1393, -2632,  3666, -2632, -2632,  1829, -2632,
   -2632,  1830, -2632, -2632, -2632, -2632,  1828,  3036, -2632,   913,
    1831,   913,   913,   913,   982, -2632,  1836,   913,   913,  1837,
     913,   913,   913,   913,   133,  1838,   282,   282, -2632,  1393,
     913,  1840,  1841,  1842,  1393,  4760, -2632,   913, -2632, -2632,
   -2632,   913,   913,   913,  1393,  4760,   -29, -2632, -2632, -2632,
   -2632,  1535,   913,  1844,   -29,   913,   652, -2632,  1846, -2632,
   -2632,   923,  3580,   913, -2632,   913,  1845,  1832,   913, -2632,
   -2632, -2632,  1847,  1204,  4703,  1610,  1611,  1613,    52,  4760,
    1614, -2632,   150,  1712,   115,  1615,  1618,   126, -2632, -2632,
     478,  1692,   622,   595,  1612,   972, -2632,  1864,  1620, -2632,
     709, -2632, -2632, -2632, -2632,  1612,  1656, -2632, -2632, -2632,
   -2632, -2632,   913, -2632,   913, -2632, -2632,   913,   913, -2632,
     913, -2632,   913, -2632, -2632, -2632, -2632,  1674,   913, -2632,
     913,    23, -2632, -2632, -2632, -2632,  1867,  1871, -2632,   913,
     425,   425,   425, -2632, -2632, -2632, -2632, -2632, -2632,  1872,
     425,   425,   425,   816, -2632, -2632, -2632, -2632,    98,   425,
     425,   425, -2632, -2632,   425,   425,  1875,   425,   425,  1876,
      98,  1411, -2632,   834, -2632,  1444, -2632, -2632, -2632,  1877,
    1880,  1881, -2632,  1032, -2632,  1171, -2632, -2632,  1606,  1884,
    1886,  1887,    98,    98,   -30,  1889,  1892,   -30,  1895,  1897,
    1899,   425,   425, -2632,  1903,   425,   425, -2632,  1906, -2632,
   -2632, -2632, -2632, -2632, -2632,   282, -2632, -2632, -2632,  4703,
    1167,   913,  1266,  1460,   455, -2632, -2632, -2632,   483, -2632,
   -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632,
   -2632,  1907,   913, -2632,   282,  1908,   913,  4760,   282,  1626,
    1668,  1670,   145,   158,  1682,   424,  1589,  1595,  1914,  1915,
    1916,  1410,  1917,  1918,  1924,  1617,  1621,  1255,  1929,   913,
    1288,  1641, -2632, -2632,   282,  4760, -2632, -2632,  4760,   913,
      65,  1937,   913,  1393,   282, -2632,  1925,  4760,  4760,   913,
   -2632, -2632, -2632,   282,   282,  4760, -2632, -2632, -2632, -2632,
   -2632, -2632,  4760,   913,   282, -2632, -2632, -2632,   913, -2632,
   -2632,  1938,   913,  1711,   231,   913,  1723,   913,   531,   913,
   -2632,   913,  1725,  1727,   913,   913,   913,   913,   913,   913,
     913,   913,    22,   913,   913,  1729, -2632,   913,   913,   913,
     913, -2632,  4760,  1393,  1949,  1953,  1955,   913,   913,  1393,
   -2632,   913,   913,   913,  4760,   369, -2632,   913,   913, -2632,
   -2632, -2632,  1958, -2632, -2632, -2632, -2632, -2632, -2632,  1960,
     913,   913, -2632,   913,   913, -2632, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632, -2632,  1964,  1966,  1961, -2632, -2632,  1205,
    1967,  1969,  1971, -2632,  1972,  1973,  1974,  1977,  1979, -2632,
    1980, -2632, -2632, -2632,  1983,  1984,  1981, -2632,  1985,  1986,
    1989, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632,
   -2632,   913,   913,   913, -2632, -2632,   913, -2632,  1393, -2632,
   -2632,  3036,   913,  1393,   913,   913,   913, -2632,   913,   913,
    1991,   913, -2632,   913,   913,  1990,   913,   913,   913,   913,
   -2632, -2632,  1993,  4760, -2632, -2632, -2632,   913, -2632, -2632,
   -2632, -2632,  1393, -2632,  1248,   913,  1248,   -29,  1393,  4760,
     913,   913,  1994, -2632, -2632, -2632,   913, -2632, -2632, -2632,
   -2632, -2632,  4760, -2632,  4760,   913, -2632, -2632,   -13,  1995,
    2006,  2020,  2022,  2026,  4760,  1393, -2632,  4760,  4760,  4760,
    4703,  4760,  1393,  4760, -2632, -2632,  4760, -2632, -2632,  4703,
    4760,  4760,  4760,  4703,  4760, -2632,  4760,  4760,   913, -2632,
   -2632,  4760,  4760,  4760, -2632, -2632,  4760,  4760, -2632, -2632,
   -2632, -2632,  4760,  4760, -2632, -2632, -2632, -2632, -2632,   913,
     913, -2632, -2632,  2028,   913, -2632, -2632,  2029, -2632, -2632,
     913, -2632, -2632, -2632,   425, -2632, -2632, -2632,  2030,  2031,
    2032, -2632, -2632,   -30,  2036,  2037,  2040,   425, -2632, -2632,
   -2632, -2632, -2632,    98, -2632, -2632,  2042,   425,  2078,  2081,
    2083,    98,    98,   -30,  2085,  2086,  2089,  1697,  2094,  2095,
    2096,    98,    98,   -30,  2087,  2098,   -30,  2100,  2102,  2103,
    2104,    98,    98,   -30,  2099,  2107,  2109,  1498, -2632,  1541,
   -2632,  1622,  1766,  2111,  2114,  2117,    98,    98,   -30,  2108,
    2119,   -30,  2120,  1843,  2121,  2122,  2123,    98,    98,   -30,
    2126,  2127,   -30,  2128,    98, -2632, -2632, -2632, -2632, -2632,
    2130, -2632, -2632,  2131,    98,  2132,  2133, -2632, -2632,   425,
   -2632, -2632,  2134, -2632,  1393, -2632,  4760,   913,   913,  4760,
     913,  2135,  1232, -2632, -2632, -2632, -2632, -2632, -2632,  2136,
    4760,   282,  2137,  4760,  1393, -2632,  2138,  1232,   913,   913,
     913,   913,   913,   913,   913,   913,   913,  2140,  2141, -2632,
   -2632, -2632,  2142, -2632, -2632, -2632,  2144,  2145, -2632, -2632,
   -2632,   913,  4760,   913,  2148,  1232,   282,  1393,  1393, -2632,
   -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632,   913,
    1535, -2632, -2632,  1393,  1393,   913, -2632, -2632,  1393,  1393,
   -2632, -2632, -2632, -2632,   913,   913,   913,   913,   913,   913,
     913,   913,   913,   913,  2300, -2632,   913,   913,   913,   913,
     913,   913,   913,   913,   913,   913,   913,  1726,  2149,   913,
   -2632,   913,   913,   913,  2146,  2151, -2632, -2632,  1393,   -29,
   -2632,  2153,  2154, -2632, -2632,  1535,   913, -2632,  2156,  1393,
    4760, -2632, -2632, -2632,  2157, -2632, -2632, -2632, -2632,  1205,
    1205,  1205, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632,  1232,   913,
   -2632,   913, -2632,   913,  1393,   913, -2632,  1535,   913, -2632,
     913, -2632,  1931,  2158,  2159,   913,   913, -2632,   913,   913,
     913,   913,  2161,  1393,  4760, -2632, -2632,   913, -2632,   913,
   -2632,   -29,   923,   913,  2162, -2632,   913, -2632, -2632,  4703,
   -2632,  2163,  2167,  2168,  2169,  2170,  1393, -2632,   923,   923,
     923,  1393, -2632,   923,   -29,   923,   923,  1393, -2632,   923,
     923,   923,  1393, -2632,   923,   923,  1393,  4760,   923,  1393,
     923,   923,  1393,   923,  1393, -2632, -2632,  2174,  4703,  2176,
     913, -2632, -2632, -2632, -2632,  2175, -2632, -2632, -2632, -2632,
     425,    98, -2632, -2632, -2632, -2632, -2632, -2632,  2178, -2632,
   -2632,    98,    98, -2632, -2632, -2632, -2632, -2632,  2180, -2632,
   -2632,  2181,    98, -2632, -2632, -2632, -2632, -2632,  2183, -2632,
   -2632,    98,  2184,  2186,  2190,    98,    98,   -30,  2192,  2193,
    2194,  2195,  2196,  2198,    98,    98,   -30,  2201,  2202,  2204,
    2205,  2206,  2207,    98,    98,   -30,  2203,  2210,  2211,    98,
     425,   425,   425,   425,   425,  2215,   425,   425,  2216,    98,
      98,   425,   425,   425,   425,   425,  2217,   425,   425,  2219,
      98, -2632,    98,  2220, -2632,  2221,  2225, -2632,  3666, -2632,
     923,  2227,  4760,   923,   913,  4760,  2228, -2632,   923, -2632,
   -2632,   923, -2632,  4760,  2229,   913,   913,   913,   913,   913,
     913,   913,   913,   913,   913,   913, -2632, -2632, -2632,  4760,
     923,   913,  4760,  2233, -2632,  1535,  1535,  4760,  1535,  1535,
    4760,  4760,  1535,  1535,   913,   913,   913,   913,   913,   913,
    1232,   913,   913,   913,  1783,  1852,  1879,  1882,  1883,  1890,
    1893,  2300, -2632,  1894, -2632, -2632,  1232,   913,   913,   913,
     913,  1232,   913,   913,   913,   913,   913,   913,  1393,   913,
    1718,  1232,   913,   913, -2632, -2632,   -29,   282,  4760,  4760,
   -2632, -2632, -2632,   -29,  1393,  2235, -2632, -2632, -2632, -2632,
     913, -2632, -2632,  1535,   913, -2632, -2632, -2632,  1153,  2238,
    2239,  2236,  2245,   913,   913,   913,  2246,  1248, -2632,   923,
   -2632, -2632, -2632, -2632,  2250, -2632, -2632,  1393,  2255,  2258,
    2256,  2260,  4760,  2261, -2632, -2632, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632,
     -29,   923, -2632,   -29, -2632, -2632,   -29, -2632,   -29,  2262,
    1393,  2265, -2632,   913, -2632, -2632,   425,    98, -2632, -2632,
      98,  2266, -2632,    98, -2632,   425,   425,   425,   425,   425,
    2267,   425,   425,    98,   425,   425,   425,   425,   425,  2279,
     425,   425,    98,   425,   425,   425,   425,   425,  2280,   425,
     425,    98,   425, -2632, -2632, -2632, -2632, -2632,    98, -2632,
   -2632,  2281,   425,   425, -2632, -2632, -2632, -2632, -2632,    98,
   -2632, -2632,  2282,   425, -2632,    98, -2632, -2632,  1393, -2632,
    4760,   923, -2632,  2283,  1393,   913, -2632, -2632,  1393,   913,
   -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632,   913,
     913,   923, -2632,  2285,  1393,   913,  1535, -2632,   923,   913,
    1535,   923,   923,  4760, -2632,   913,  2290,  2290,   913,   913,
    2290,  1232,  2290, -2632,  4760,  1410,  2292,  2294,  2302,  2306,
    2307,  2309, -2632,   282,  1232,  2290,  2290,   913,   913,  1232,
     913,   913,   913,   913,   913, -2632,  1535,   913,  2310, -2632,
   -2632,   913,  2290,   282,    39,  1393,  1393,   282,   -29,  2312,
   -2632, -2632, -2632,  2313,   913, -2632,  2315,  2317,  2318,  2324,
    2331,  2333,  2334,   913, -2632, -2632,  2337,     6,  4760, -2632,
    2338,     7,  4760, -2632, -2632, -2632, -2632, -2632, -2632,  2340,
       6,   913, -2632, -2632, -2632,    98, -2632, -2632, -2632, -2632,
   -2632, -2632,    98, -2632, -2632,   425, -2632, -2632, -2632, -2632,
   -2632,    98, -2632, -2632,   425, -2632, -2632, -2632, -2632, -2632,
      98, -2632, -2632,   425, -2632,   425,    98, -2632, -2632,   425,
      98, -2632, -2632,   913,   923, -2632,  4760,  4760,   913,  4760,
     913, -2632, -2632, -2632,  4760,  4760,   913, -2632, -2632,  4760,
   -2632, -2632, -2632,   923,  2341, -2632, -2632, -2632,  1232,   913,
   -2632,  2342, -2632, -2632,  1393,  2344, -2632,  2343, -2632, -2632,
   -2632, -2632, -2632,  2346, -2632, -2632,  1232,   913,  2348, -2632,
   -2632,   913,  4760, -2632, -2632, -2632, -2632, -2632, -2632, -2632,
      39,  2019,  1612, -2632, -2632, -2632,   282,  2350,  2351,  2353,
   -2632, -2632, -2632,  2355,  2359,  2360, -2632,    32,     6, -2632,
   -2632, -2632, -2632,  2363,  4760, -2632, -2632, -2632, -2632, -2632,
       6, -2632,  2365, -2632,   425, -2632,   425, -2632,   425, -2632,
   -2632,   425, -2632,   425,  3666, -2632,   923,   923,   913,   923,
    2369,   923,   923,   913,   923,   913, -2632, -2632, -2632, -2632,
    2370, -2632,   913, -2632, -2632,  2371, -2632,   913, -2632, -2632,
   -2632,  2373,   913, -2632, -2632, -2632,  1393, -2632, -2632, -2632,
    2019, -2632,  2047,  1954,  1612, -2632, -2632, -2632,  2375,  2376,
   -2632, -2632, -2632, -2632, -2632, -2632,   900,   900, -2632, -2632,
    1393, -2632, -2632, -2632, -2632, -2632, -2632, -2632,   923, -2632,
   -2632,  2374, -2632,  4703, -2632, -2632,  2378, -2632,  1232, -2632,
   -2632,  1232,   913, -2632, -2632,   913, -2632,  1232,   913, -2632,
    4760, -2632,  2047, -2632,   282, -2632,  2379,  2380,   913,   913,
     913,   913,     7,  2381,  4703,  1393, -2632,  4703, -2632, -2632,
     913,  2383, -2632,   913,   923, -2632, -2632, -2632,  2384,  2385,
     913,  2386,   913, -2632, -2632,  1393, -2632, -2632,  1393, -2632,
   -2632,  2390, -2632, -2632,  2391,  2392, -2632, -2632,  2393, -2632,
    2394, -2632, -2632,  1232, -2632,  1232, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632, -2632
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2632, -2632,    -3, -2632,   684,  -934, -1717, -1054,  1716, -2632,
     862,  -364,  1926,   -50,    19, -2632, -2632, -1724,  1761,  2043,
    -912, -1981,  -991,    12,  1652, -2632, -1129, -2632,  -710, -1130,
   -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632, -2632,  -529,  -506, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632, -2490, -2632, -2632, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632,   300, -2632,
   -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632,  -104,
     -40, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -1529,
   -2632, -2632, -2632, -2632, -2632,  -701, -2632, -2632, -2632, -2632,
   -2632, -2632,   426, -2632, -2632, -2632, -2632,    80,  -707, -1546,
    -325, -2632, -2632, -2632, -2632, -2632,  -401,  -384, -2632, -2632,
   -2631, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632,  1623, -2632, -2632, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632, -2632,
   -2632, -2632, -2632, -2632, -2632, -2632
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1277
static const yytype_int16 yytable[] =
{
      70,   915,  1962,   370,  1169,  1142,  1145,   728,   109,  1326,
    2107,  1489,  2109,   178,    67,    68,    67,    68,   944,  1318,
    1319,  1320,  1580,    67,    68,    67,    68,  2027,  1514,   644,
      67,    68,   309,    67,    68,    67,    68,  2719,  2725, -1121,
     333,  1436,  1815,  1186,  1439,   851,   681,  1053,   831,   364,
     901,   335,   375,   827,   311,   381,   249,    67,    68,   387,
    1562,   433,   394,    67,    68,  1474,   397,   399,   656,  1272,
     409,   390,  1770,   416,   420,   763,   908,   423,   616,   813,
     424,   425,  1377,   431,   114,    67,    68,  1401,   432,  1147,
    1653,  1980,  1658,  1148,   950,  1054,    67,    68,   561,   894,
    1137,   445,   449,   454,   455,   459,   461,  1207,   834,   897,
    2731,   852,   626,  1981,  1432,  1173,  1982,  1546,  1688,  1689,
    1690,  1128,   465,    57,   959,    67,    68,  1983,  1570,   111,
     313,  2383,  1038,   111,   275,  1779,   794,   464,  1187,   336,
    1417,   902,   412,   651,  1188,  1040,  1783,  2395,  2396,  2397,
    1984,  2833,  2399,   337,  2401,  2402,   627,   474,  2404,  2405,
    2406,   111,  1177,  2408,  2409,  1950,  1149,  2412,  1985,  2414,
    2415,   575,  2417,  1047,  1515,   904,  1774,   909,  1952,  1720,
    1208,    79,   506,   413,   853,   945,   657,   527,  1544,   912,
    1150,   764,   562,   111,   378,   276,   111,   795,  2720,  2726,
     417,  2855,   162,   111,    67,    68,   405,  1039,   729,   528,
     180,   536,   265,   541,   545,   730,   731,   277,  1547,  1378,
    1041,  1237,   331,   247,   581,   951,   283,  2793,  2798,  1571,
     913,  1564,  1055,   905,    67,    68,   323,    67,    68,   614,
    2801,   338,  1273,   960,   273,  1418,   116,   253,  1048,  1516,
     116,   732,   122,   111,   339,   576,  1151,   910,   804,   327,
     658,   567,  1433,   111,   814,   753,  1816,   617,  1389,   628,
    1209,  1178,   278,   104,  1379,   854,   688,   689,   116,  2489,
     855,   571,  2492,   828,    67,    68,   111,  2496,   250,   577,
    2497,   434,   735,   105,   737,  1517,  1238,  2721,  2727,  1771,
    1380,   418,   739,   742,  1138,   745,   749,  1056,   751,  2512,
     116,   251,  1563,   116,   597,   807,    69,  1057,   761,  1179,
     116,   682,  1775,   332,   406,   810,   400,   747,   771,   773,
     363,   391,  1581,   374, -1121,   119,   946,  2028,   645,   119,
     652,   832,  1210,   120,   121,  2794,   106,   120,   121,  1058,
    1189,   816,   829,   818,   820,   660,   822,  1152,   796,   733,
     825,   826,  1780,   386,    67,    68,  1180,   119,   407,   408,
     116,   840,   842,  1784,  1129,   120,   121,   111,   843,  1174,
     116,   419,  1554,   846,   848,  1548,  1202,  1118,  1139,   504,
    2795,   849,  1951,   952,   850,  1545,  1572,  1776,  2584,   119,
    1574,   835,   119,   116,  1739,  1953,  1175,   120,   121,   119,
     120,   121,  1743,   860,   861,  1721,   165,   120,   121,   166,
     865,   866,   867,   868,   869,   870,   871,  1986,   872,  1119,
    2594,   124,  1118,   601,   819,   124,   107,   314,  1565,  1932,
    1612,   279,   879,  1777,  1955,   775,   880,   315,   299,   167,
    1181,   885,   886,   887,   888,   889,   890,   168,   891,   119,
     449,   895,   896,   124,  2006,  1947,   326,   120,   121,   119,
     449,   898,  1624,  1910,  1119,  1212,  1913,   120,   121,   254,
     154,   893,   112,   325,   154,   155,   156,  1975,   280,   155,
     156,   328,   119,   568,   116,   124,  1183,  1383,   124,   285,
     120,   121,   255,   348,  1785,   124,   776,   661,   662,   667,
    2645,   426,   154,   572,   329,  1630,   569,   155,   156,   169,
     114,   359,    58,   401,   927,   928,  1631,   341,  1306,  2062,
    2653,  1372,  1111,   108,    67,    68,   573,  2658,    67,    68,
    2661,  2662,   936,   920,   154,  1228,   598,   154,  1213,   155,
     156,   602,   155,   156,   154,   124,   499,  1112,  1396,   155,
     156,  1933,   500,  1131,    59,   124,   115,   998,  1120,   599,
     941,  1322,   372,   170,   402,   377,   286,   342,   962,    67,
      68,   403,    60,   119,  1121,  1122,   343,  1413,   124,  1936,
     383,   120,   121,  1141,    67,    68,  1283,  1373,   171,   579,
     172,   501,   384,  1284,   154,   663,  1229,   442,   921,   155,
     156,   993,    61,  1120,   154,   982,  1414,   344,   940,   155,
     156,  1044,   668,   782,   385,  1374,   117,   502,   173,  1121,
    1122,    62,   443,   584,   225,    63,  1132,   154,  1214,   777,
    1063,  1397,   155,   156,   360,   513,  1230,   114,  1233,    64,
     114,   226,  1786,  2583,   514,  1012,  1745,  1794,  1934,   580,
     603,   669,   670,  2745,   427,   428,   389,   778,  1804,  1239,
     114,  1956,    67,    68,   503,   422,   287,  1123,  1124,   124,
     847,   438,  2755,  1170,   784,  1062,  1937,   436,   122,   462,
     604,   288,  1244,   123,  1113,   174,   291, -1276,   164,   176,
    1654,  1694,  1140,   440,   671,  1153,   248,  1375,   114,  1234,
    1215,  1787,  1935,   281,   475,   292,  1026,   293,   504,   505,
     316,  1118,  1123,  1124,  1027,  1028,  1133,   486,   154,   487,
    1240,   361,  1193,   155,   156,  1801,  1194,  1195,  1196,  1197,
    1938,   379,  1198,   366,  1200,  1550,  1201,   449,  1203,  1114,
     367,  1391,  1551,  1245,   534,   289,  1171,   497,   411,   672,
    1376,  1655,   429,  1119,  2011,  2809,  2810,  1231,  2812,  1791,
    2814,  2815,  1029,  2817,  1556,  1115,   722,  1263,  1013,  1014,
    1660,   415,   345,   509,   673,  1144,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,    65,   122,  1255,  1256,   122,  1257,
    1259,  1261,  1262,  1458,  2120,  2110,  1015,  2843,  1792,  1828,
    1829,  1459,  1460,  1479,   511,  1636,  1275,  1276,   122,  1857,
     294,  1661,  2165,  1280,  1281,   790,  1172,  1858,  1859,   476,
     477,   478,   479,   480,   481,   482,   483,   484,   485,  1666,
     606,   723,  2178,  1287,  1288,  1289,  1290,  1291,  1292,  1293,
    1235,   607,  2188,  2875,  1557,  2191,   122,  1830,  2266,  1461,
      67,    68,  2198,  1802,  1301,  1302,  1303,  1674,  1305,   449,
    1307,  1241,  1308,  2274,  1789,  1860,  1793,  2235,   608,   295,
    2238,  1790,  1120,    67,    68,   538,  1480,   564,  2246,  1030,
    1031,  2249,  1678,  1311,  1246,  1313,    67,    68,  1121,  1122,
    1667,  2293,  1656,   630,  2050,  1315,   566,   675,   594,  2356,
    2357,  2358,   449,  1323,  1558,  1312,  1447,   565,  1325,    67,
      68,   583,  1803,  1456,   296,   676,  1748,  1749,  1675,    67,
      68,  2759,   724,   297,   800,  1338,   593,  1740,   596,  1342,
     615,   686,   687,  1016,  1017,   300,  1382,  1384,  1387,  2770,
     725,    67,    68,  1679,  1392,   874,   875,   609,   368,  1398,
     621,   369,  1481,  1482,  1032,    67,    68,  2673,   622,   754,
    1399,   744,  1451,   257,  1033,  1034,   631,  1483,   643,  1035,
     177,  1448,  1662,   393,   624,   380,  2675,   647,  1457,  1409,
     318,  1123,  1124,  2697,  1831,  1832,  1462,  1463,   610,    67,
      68,  1750,   258,   648,  2359,   755,  1036,   650,   677,   801,
     963,   964,  1861,  1862,   805,   808,   811,  1882,  1018,   632,
    1484,  1710,   912,  1435,   654,  1883,  1884,   655,  1019,  1020,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   633,   756,
    1021,  1668,  1549,   913,   659,   349,   965,   611,   665,  1833,
     679,  1464,   966,  1885,   396,   684,   350,   685,   259,  1834,
    1835,  1465,  1466,  1573,  2849,  1795,  1467,  1863,   301,  1676,
    2852,   690,  1579,   260,   302,   319,   303,  1864,  1865,   727,
    2757,  2758,  1866,   351,  2761,   738,  2763,  2347,  1607,    80,
    1608,  1836,   802,  1468,  1680,  1609,  1610,  1611,  2768,  2769,
     612,   967,   839,  2773,  2774,  1617,  1796,  2777,  1618,  1867,
    1620,   752,  2778,  2779,    67,  1258,    67,    68,   968,   759,
    1520,    67,    68,   760,    81,   762,  2889,  1622,  2890,  1623,
      67,    68,  1926,   969,  1386,   261,  1893,  1627,  1628,   970,
     766,    67,    68,   768,  1894,  1895,   971,   774,  1521,  1279,
     757,  1522,  1634,  1635,   320,   780,   449,  1637,  1638,  2382,
    1266,  1267,   352,   321,  1640,  1797,  1641,  1269,  1270,  1643,
    2819,  1644,  2573,  2820,   798,  1698,  2440,   262,  2823,    88,
     799,  1523,  2400,   266,  2826,  2449,   817,   263,   823,  2829,
    1886,  1887,  1896,   824,  2458,    67,    68,    82,  1486,  1487,
      67,  1337,   972,   353,  1615,  1616,  1647,  1648,  1691,   837,
    1524,   844,  1692,  1525,  1693,   845,  2531,   858,  1696,  1968,
    1969,   973,    67,    68,   859,  1798,   974,   862,   975,    67,
      68,  1929,  2544,   863,  1702,    88,  1705,  2549,  1707,  1708,
    1709,  1711,    83,    84,  1713,  1714,  1759,  1716,  1717,  1718,
    1719,    67,    68,  1972,   976,   977,  1704,  1727,   456,   864,
    1528,   873,   978,  2870,  1733,  1888,  2873,   876,  1734,  1735,
    1736,   267,   354,   882,   883,  1889,  1890,   878,   449,  1741,
    1891,   979,  1744,  1425,  1426,   268,  2884,    85,  1529,   446,
    1754,  1530,  1755,   448,  1531,  1757,  1008,    67,    68,    98,
    2891,   355,   899,  2892,  2893,  1746,    89,  1892,   900,   356,
     916,   907,   918,   228,   923,   925,    99,   938,   943,  1760,
     948,  1532,   269,  1766,   954,   357,   955,   957,   958,  1897,
    1898,   457,    90,   740,  1526,   229,    91,   980,   230,  1806,
      86,  1807,  1649,  1650,  1808,  1809,   983,  1810,   985,  1811,
    1533,   984,   987,  1534,  1156,  1813,   989,  1814,  2667,  1184,
     994,  2670,    89,  2672,  1000,   991,  1820,  1527,   996,  1005,
    1006,  1651,   231,   270,  1011,  1022,  2684,  2685,  1007,   232,
      67,    68,  1009,  1010,  1848,  1849,   271,   466,    90,    92,
     233,   234,  2106,  2699,  2563,  1761,  1762,   235,   100,  1023,
    1837,  2567,  1024,  1025,  1899,  1037,   741,  1049,  1059,  1494,
    1763,  1051,  1847,  1052,  1900,  1901,   769,  1868,  1869,  1902,
    1060,   458,   236,    67,    68,  1931,  1486,  1487,  1061,  1126,
      93,  1117,  1850,  1135,  1908,  1909,  1495,  2671,    94,    95,
     237,  1136,   101,  1190,  1191,    92,  1903,  1927,  1928,  1930,
    2683,  1192,  1204,  1764,  1206,  2688,   238,   239,  2593,  1217,
     467,  2595,  1218,   240,  2596,  1870,  2597,  1219,  1925,  1940,
    1496,  2202,  2203,  1943,  1535,  1220,  1497,  1221,   102,  1222,
    1225,  1223,  1498,   468,   469,   241,    93,  1224,  1226,   770,
     585,  1243,   470,  1248,    94,    95,  1971,  1973,    67,    68,
    1277,  1249,  1499,   446,   447,   448,  1979,  1536,  1250,  1989,
    1251,   586,   471,  1252,  2211,  2212,  1995,  1253,  1295,  2204,
    1254,  1264,   472,  1500,   242,  1265,   587,  1268,  1271,  1282,
    2000,  1278,  1285,  1286,  1537,  2002,  1294,  1296,  1297,  2004,
    1501,  2007,  2008,  1309,  2010,  2012,  2013,  1310,  2016,  1329,
    1330,  2019,  2020,  2021,  2022,  2023,  2024,  2025,  2026,  2029,
    2031,  2032,  2213,  1328,  2034,  2035,  2036,  2037,  1332,  1851,
    1852,  1334,  1333,  1502,  2043,  2044,    72,   243,  2046,  2047,
    2048,  1335,    73,  1336,  2051,  2052,  2298,  1340,   244,    67,
      68,  1946,  1486,  1487,  1341,  2220,  2221,  2055,  2056,  1388,
    2057,  2058,  1871,  1872,    67,    68,  1974,  1486,  1487,  1390,
    1400,  1394,  1503,  1402,  1403,  1406,  2706,   245,  1407,  1410,
    1411,    74,  1412,  1420,  1421,  1427,  1422,  1504,  1423,  1428,
    1429,  1430,  1431,  1437,   588,  1438,  1490,  1440,  1441,  1505,
    1443,  2350,  1445,  2222,  1853,  1453,  1455,    75,  2078,  2079,
    2080,  1471,  1469,  2081,  1854,  1855,  2205,  2206,  2083,  2086,
    1470,  2088,  2089,  2090,  1157,  2091,  2092,  1506,  2094,  1472,
    2095,  2096,  1158,  2098,  2099,  2100,  2101,  1873,  1159,  1507,
    2085,  1508,  1509,  2365,  2104,  1475,  1856,  1874,  1875,    67,
      68,   547,  2108,   589,    76,  1160,  1476,  2113,  2114,  2214,
    2215,  1161,  1477,  2116,   112,  1493,   548,  1491,  1492,  1513,
    1512,  1518,  2119,  1519,  1538,  1539,  1540,  1542,  1543,  1876,
    1552,  1510,   488,  1555,  2848,  1162,  1559,  1560,   549,  1561,
    1541,  2207,  1566,  1569,  1567,  1163,  1568,  1575,   590,    77,
     489,  2208,  2209,  1577,  1578,  2147,  1614,   591,   550,  2132,
    1625,  1626,  1632,  1633,  1639,  1642,  1576,   490,  2138,  1646,
    1670,  1645,  2143,  1659,  1664,   551,  2155,  2156,  1665,   552,
     491,  2158,  1671,  2210,  2216,  1164,  1672,  2160,  1673,  1684,
    2223,  2224,  1682,  1165,  2217,  2218,  1683,  1685,   115,   492,
    1686,  1687,  -464,   493,  1699,  1700,  1100,   553,   554,  1701,
    1712,  1715,  1706,  1723,  1728,  1729,  1730,   494,  1742,  1756,
    1101,  1747,  1758,  1621,  1778,  2170,  2219,  1767,  1768,  1102,
    1769,  1773,  1781,  2176,  2177,  1782,  1788,  1629,  1799,  1166,
    1103,  1818,  1805,  2186,  2187,  1819,  1824,  1800,  1812,  1843,
    1846,  1167,  1877,  2196,  2197,  1879,  1881,  1904,   117,  1905,
     495,  1906,  1907,  1911,   555,  2225,  1912,  1168,  2233,  2234,
    1914,  1915,  1104,  1916,   556,  2226,  2227,  1919,  1957,  2244,
    2245,  1922,  1939,  1942,  1958,  1948,  2251,  1949,  1959,  1960,
    1961,  1963,  1964,  1105,  2261,  2262,  2254,  2264,  1965,  1954,
    1992,  2516,  2517,  1970,  2519,  2520,  1966,  2228,  2523,  2524,
    1967,  1988,  2368,  2003,  2005,  2275,  2276,  2277,  2278,  2279,
    2280,  2281,  2282,  2283,  2040,   123,  2009,  2041,  2017,  2042,
    2018,   310,  2033,  2053,  2054,  2061,   557,   558,  2289,  2059,
    2291,  2060,  2063,  1106,  2064,  2065,  2066,  2067,  2182,  2068,
    1724,  1725,  2069,  2070,  2071,  2074,  2297,   449,  2072,  2073,
    2075,  2076,  2301,  2077,  2097,  2783,  2093,  2102,  2115,  2571,
    2121,  2304,  2305,  2306,  2307,  2308,  2309,  2310,  2311,  2312,
    2313,  2122,  1107,  2326,  2327,  2328,  2329,  2330,  2331,  2332,
    2333,  2334,  2335,  2336,  2337,  2123,  2340,  2124,  2341,  2342,
    2343,  2125,  2157,  2558,  2159,  2162,  2163,  2164,   559,  1108,
    2166,  2167,   449,  2351,   463,  2168,  2171,  2229,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,  2360,  2783,  2361,  1109,
    2362,  1110,  2364,  2173,   449,  2366,  2174,  2367,  2175,  2179,
    2180,  2189,  2371,  2372,  2181,  2373,  2374,  2375,  2376,  2183,
    2184,  2185,  2190,  2199,  2380,  2192,  2381,  2193,  2194,  2195,
    2384,  2200,  2236,  2386,  2201,   525,  2230,   532,   535,  2231,
     540,   544,  2232,  2237,  2240,  2239,  2241,  2242,  2243,   782,
    2247,  2248,  2863,  2250,  2252,  2253,  2255,  2256,  2388,  2258,
    2265,  2267,  2270,  2273,  2284,  2285,  2535,  2286,  2287,  2288,
    2344,   619,  2657,  2292,  2339,  2345,  2660,  2423,  2348,  2349,
    2352,  2355,   857,  2369,  2370,  2377,   881,  2385,  2389,  1923,
     635,   641,  2390,  2391,  2392,  2393,   646,  2421,  2419,  2424,
     649,  2422,  2427,  2426,  2430,  2431,   783,  2433,  2797,  2435,
     784,  2436,  2694,  2428,  2429,  2437,  2441,  2442,  1941,  2443,
    2444,  2445,  1945,  2446,  2432,  2450,  2451,  2459,  2488,  2452,
    2453,  2454,  2455,  2434,  2460,  2536,  2461,  2438,  2439,  2468,
    2471,  2479,   736,  2482,  2485,  2486,  2447,  2448,  1976,  2487,
     785,  2490,  2495,  2499,   746,  2456,  2457,  2515,  1991,  2569,
    2577,  2462,  2537,  2575,  2576,  2538,  2539,  1996,  1997,  2578,
    2582,  2472,  2473,  2540,   767,  2585,  2541,  2543,  2001,  2587,
    2589,  2493,  2483,  2588,  2484,  2590,  2592,  2598,   786,  2600,
    2605,  2612,  2500,  2501,  2502,  2503,  2504,  2505,  2506,  2507,
    2508,  2509,  2510,  2621,  2630,  2636,  2640,  2646,  2513,  2654,
    2839,  2841,   449,   449,  2665,   449,   449,  2676,  2677,   449,
     449,  2525,  2526,  2527,  2528,  2529,  2530,  2678,  2532,  2533,
    2534,  2679,  2680,  2681, -1139,  2696,  2707,  2834,  2708,   787,
    2710,  2711,  2712,   788,  2545,  2546,  2547,  2548,  2713,  2550,
    2551,  2552,  2553,  2554,  2555,  2714,  2557,  2715,  2716,  2561,
    2562,  2718,  2318,  2724,  2730,  2756,  2762,  2766,   789,  2765,
    2767,   790,  2772,   750,  2787,  2314,  2788,  2570,  2789,  2790,
     449,  2572,   791,  2791,  2792,  2574,  2315,  2799,   877,  2802,
    2579,  2580,  2581,  2813,  2821,  2780,  2824,  2827,  2844,   884,
    2836,  2837,  2847,  2835,  2857,  2858,  2864,  2872,   892,  2876,
    2877,  2879,  1157,  2316,  2883,  2885,  2831,  2886,  2887,  2888,
    1158,  2542,     0,     0,     0,     0,  1159,     0,  1227,     0,
       0,     0,     0,   838,     0,     0,     0,     0,     0,     0,
    2601,     0,     0,  1160,     0,     0,     0,     0,     0,  1161,
       0,     0,  2317,     0,     0,     0,     0,     0,     0,  2603,
       0,     0,  2604,     0,     0,  2606,     0,     0,     0,     0,
       0,     0,     0,  1162,     0,  2615,   929,   930,     0,     0,
       0,     0,     0,  1163,  2624,     0,     0,     0,     0,   934,
       0,     0,     0,  2633,   937,     0,     0,     0,     0,     0,
    2635,     0,     0,   949,     0,     0,     0,     0,     0,     0,
       0,  2639,  2648,     0,     0,     0,  2650,  2642,     0,     0,
       0,     0,     0,  1164,     0,     0,  2651,  2652,     0,     0,
       0,  1165,  2656,   449,     0,     0,  2659,   449,     0,     0,
       0,     0,  2664,     0,     0,  2668,  2669,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2686,  2687,     0,  2689,  2690,  2691,
    2692,  2693,     0,   449,  2695,     0,     0,  1166,  2698,   111,
       0,     0,     0,  1001,  1002,  1003,  1004,     0,   926,  1167,
       0,  2709,     0,   112,     0,   931,     0,     0,   932,     0,
    2717,     0,     0,   933,     0,  1168,     0,   935,     0,     0,
       0,     0,     0,     0,   113,  2318,     0,  2319,  2732,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   114,     0,     0,     0,     0,     0,  2733,     0,     0,
       0,     0,     0,     0,  2734,  2269,     0,     0,     0,     0,
       0,     0,     0,  2736,     0,  1155,     0,     0,     0,     0,
    2744,     0,  2738,     0,     0,  2748,     0,  2750,  2741,     0,
       0,  2320,  2743,  2753,     0,     0,     0,   115,     0,     0,
    2294,     0,   999,     0,     0,     0,  2760,     0,     0,  1416,
       0,     0,     0,     0,     0,     0,   116,     0,     0,     0,
       0,     0,     0,     0,  2771,     0,     0,     0,  2775,     0,
       0,     0,     0,     0,  2808,     0,     0,     0,     0,     0,
    1343,  1344,  1345,     0,     0,     0,     0,  1473,     0,     0,
       0,     0,     0,     0,  2796,     0,     0,   117,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1346,
    1347,     0,     0,  1348,     0,     0,     0,     0,     0,     0,
    1349,     0,     0,  1350,     0,  2811,     0,  1351,     0,     0,
    2816,     0,  2818,     0,     0,  1352,  1353,   118,     0,  2822,
       0,     0,     0,  1354,  2825,   119,     0,     0,     0,  2828,
       0,     0,     0,   120,   121,     0,     0,     0,     0,   122,
       0,     0,     0,     0,   123,     0,     0,     0,     0,  1199,
       0,  1355,  1356,  2838,  2840,  1357,  1205,     0,     0,     0,
       0,     0,     0,     0,  1299,     0,     0,     0,     0,     0,
       0,     0,     0,  1358,     0,     0,  1304,     0,     0,  2850,
       0,     0,  2851,     0,     0,  2853,     0,     0,     0,     0,
       0,     0,  2846,     0,  1359,  2859,  2860,  2861,  2862,     0,
       0,     0,     0,     0,     0,     0,     0,  2871,     0,     0,
    2874,     0,     0,  1314,     0,     0,     0,  2878,     0,  2880,
    1360,   124,     0,  2866,     0,     0,  2869,     0,     0,  1361,
       0,     0,   691,   692,     0,     0,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,     0,     0,     0,     0,     0,
     154,     0,     0,     0,  1362,   155,   156,     0,     0,     0,
    1298,     0,  1363,  1364,     0,     0,     0,  1300,   693,     0,
       0,     0,     0,  1405,   694,     0,     0,     0,     0,  1365,
       0,   695,     0,   696,     0,     0,     0,     0,   697,     0,
    1366,   698,     0,     0,  1582,     0,     0,   699,     0,  1583,
       0,     0,     0,     0,     0,     0,     0,     0,   700,     0,
       0,     0,  1316,  1317,   701,     0,  1367,  1321,  1368,     0,
    1324,  1584,  1585,   702,  1586,  1587,     0,     0,  1369,    67,
      68,     0,  1331,     0,     0,  1588,     0,     0,  1370,     0,
     703,     0,     0,     0,   112,     0,     0,  1589,  1590,     0,
       0,     0,     0,     0,  1553,  1591,     0,     0,  1592,     0,
       0,   704,     0,     0,   305,     0,     0,     0,     0,     0,
       0,  2564,  1371,     0,     0,     0,  1593,     0,   705,    67,
      68,     0,   114,  1594,  1595,     0,     0,  1596,     0,   706,
     707,     0,     0,     0,   112,     0,     0,     0,     0,     0,
       0,     0,  1821,  1822,  1823,     0,     0,     0,  1613,     0,
       0,   708,  1825,  1826,  1827,     0,     0,     0,  1619,     0,
       0,  1838,  1839,  1840,     0,     0,  1841,  1842,   115,  1844,
    1845,     0,   114,     0,   709,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1478,     0,   710,     0,
     711,     0,  1597,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1917,  1918,   712,     0,  1920,  1921,     0,
     713,     0,     0,     0,     0,     0,     0,   714,   115,     0,
       0,     0,     0,     0,   715,     0,     0,     0,   117,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   716,     0,     0,     0,     0,  1598,     0,
       0,     0,     0,     0,  1599,     0,   717,   718,     0,   719,
       0,     0,     0,     0,     0,  1695,     0,     0,   306,     0,
       0,  1600,     0,     0,     0,     0,     0,     0,   117,     0,
       0,  1601,     0,  1703,     0,     0,     0,     0,     0,     0,
     122,     0,     0,     0,     0,   123,     0,     0,     0,   720,
       0,     0,     0,     0,     0,     0,   307,  2682,     0,  1602,
    1603,  1732,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1738,     0,     0,     0,     0,     0,  2700,     0,     0,
    1604,  2705,     0,     0,     0,     0,     0,     0,  1753,     0,
     122,     0,     0,     0,     0,   123,     0,     0,     0,     0,
    1765,     0,     0,     0,     0,  1772,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   308,
       0,     0,     0,     0,     0,  1605,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1697,     0,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,     0,     0,     0,     0,
       0,     0,  1726,     0,     0,     0,     0,  1731,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1737,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,     0,     0,     0,     0,
    2786,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1924,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1944,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1977,     0,     0,  1978,     0,  2161,     0,     0,     0,
       0,     0,     0,  1993,  1994,     0,     0,     0,     0,  2169,
       0,  1998,     0,     0,     0,     0,     0,     0,  1999,  2172,
       0,     0,     0,     0,     0,   543,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2856,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2038,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2049,     0,     0,     0,     0,     0,     0,   114,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2257,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1752,     0,     0,  1042,     0,     0,
       0,     0,  1043,     0,     0,     0,  1990,     0,   112,     0,
       0,     0,     0,   115,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2084,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2103,
       0,     0,     0,     0,     0,     0,  2039,     0,     0,     0,
       0,     0,  2045,   117,     0,  2112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2117,     0,
    2118,     0,   115,     0,     0,     0,     0,     0,     0,     0,
    2126,     0,     0,  2128,  2129,  2130,  2131,  2133,     0,  2135,
       0,     0,  2136,     0,     0,  2137,  2139,  2140,  2141,  2142,
    2144,     0,  2145,  2146,     0,     0,     0,  2148,  2149,  2150,
       0,     0,  2151,  2152,     0,   122,     0,     0,  2153,  2154,
     123,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2082,   117,     0,     0,     0,  2087,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,  2105,     0,     0,     0,     0,
       0,  2111,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2127,   123,
       0,     0,     0,     0,     0,  2134,     0,     0,     0,     0,
       0,     0,  2425,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,     0,  2260,     0,     0,  2263,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2268,     0,     0,  2271,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2463,  2464,  2465,  2466,  2467,     0,  2469,  2470,
       0,     0,     0,  2474,  2475,  2476,  2477,  2478,  2290,  2480,
    2481,     0,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2338,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2259,     0,     0,
       0,     0,     0,     0,     0,     0,  2354,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2272,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,     0,     0,     0,     0,
    2295,  2296,     0,     0,     0,     0,     0,     0,     0,     0,
    2379,     0,     0,     0,     0,     0,  2299,  2300,     0,     0,
       0,  2302,  2303,     0,     0,  2387,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2411,     0,     0,     0,     0,  2602,     0,
       0,  2346,     0,     0,  2420,     0,     0,  2607,  2608,  2609,
    2610,  2611,  2353,  2613,  2614,     0,  2616,  2617,  2618,  2619,
    2620,     0,  2622,  2623,     0,  2625,  2626,  2627,  2628,  2629,
       0,  2631,  2632,     0,  2634,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2637,  2638,     0,  2363,     0,     0,
       0,     0,     0,     0,     0,  2641,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2378,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,  2394,
       0,     0,     0,     0,  2398,     0,     0,     0,     0,     0,
    2403,     0,     0,     0,     0,  2407,     0,     0,  2491,  2410,
       0,  2494,  2413,     0,     0,  2416,     0,  2418,     0,  2498,
       0,     0,     0,     0,     0,     0,     0,   516,   517,     0,
       0,   518,     0,     0,     0,  2511,     0,     0,  2514,     0,
       0,     0,     0,  2518,     0,     0,  2521,  2522,     0,     0,
       0,     0,     0,     0,   519,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   115,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2735,     0,     0,
       0,     0,     0,     0,  2565,  2566,  2737,     0,     0,     0,
       0,     0,     0,     0,     0,  2739,     0,  2740,     0,     0,
       0,  2742,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   117,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   520,  2591,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   521,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   636,   112,     0,     0,     0,   522,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   123,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2556,     0,     0,     0,     0,  2803,     0,  2804,     0,
    2805,     0,     0,  2806,   637,  2807,     0,  2568,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2644,     0,     0,     0,
       0,     0,     0,     0,   523,     0,     0,     0,     0,     0,
    2586,     0,     0,     0,     0,     0,     0,     0,   115,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2663,
       0,     0,   638,     0,     0,     0,     0,     0,     0,     0,
    2674,     0,     0,  2599,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,     0,   524,     0,     0,     0,     0,   117,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2723,     0,   639,     0,  2729,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2643,     0,     0,     0,     0,     0,  2647,     0,     0,
       0,  2649,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2655,     0,     0,
       0,     0,     0,     0,     0,   123,     0,     0,     0,     0,
       0,     0,  2746,  2747,     0,  2749,     0,     0,     0,     0,
    2751,  2752,     0,     0,     0,  2754,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2703,  2704,
       0,     0,     0,     0,     0,     0,     0,     0,  2776,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   640,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2800,     0,     0,     0,     0,     0,     0,     0,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,     0,     0,   112,     0,
    1064,  1065,  1066,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2764,     0,  1067,
    1068,   112,     0,  1069,     0,     0,  1070,     0,     0,   530,
       0,     0,     0,  1071,     0,     0,     0,  1072,     0,  2845,
       0,     0,     0,     0,     0,  1073,  1074,     0,     0,   112,
       0,     0,     0,  1075,  1076,     0,  2854,     0,     0,   114,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2865,  1077,   115,  2868,     0,     0,     0,  1078,   112,     0,
       0,  1079,  1080,     0,     0,  1081,     0,  1404,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1082,     0,   115,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2830,
       0,     0,     0,     0,  1083,     0,     0,     0,     0,     0,
       0,     0,   117,   115,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2842,     0,     0,     0,     0,     0,     0,
    1084,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   115,     0,     0,   117,     0,     0,     0,     0,
       0,     0,     0,     0,  1085,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2867,     0,
       0,     0,     0,   117,     0,     0,     0,     0,     0,   123,
       0,     0,     0,     0,  1086,     0,  1087,     0,  2881,     0,
       0,  2882,  1088,  1089,     0,     0,     0,     0,     0,     0,
       0,     0,   117,     0,     0,     0,     0,   122,  1090,  1091,
       0,     0,   123,     0,     0,     0,     0,     0,     0,  1092,
    1093,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     123,     0,     0,     0,     0,     0,  1094,     0,  1095,   531,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1096,     0,  1097,     0,     0,     0,     0,     0,  1098,   123,
       0,     0,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
       0,     0,  1099,     0,     0,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,     0,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
       1,     0,     0,     2,     0,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       0,     0,     0,     0,     5,     6,     0,     7,     8,     9,
       0,     0,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,    11,     0,    12,    13,     0,     0,
       0,     0,     0,     0,     0,     0,    14,    15,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    16,
       0,     0,     0,     0,     0,     0,     0,     0,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    18,     0,     0,     0,    19,     0,     0,    20,     0,
       0,     0,    21,    22,     0,     0,     0,    23,    24,     0,
       0,    25,     0,     0,     0,     0,     0,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,     0,    28,    29,    30,     0,     0,
      31,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    34,    35,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    37,     0,    38,     0,
     182,     0,     0,   183,     0,    39,   184,     0,     0,    40,
       0,     0,     0,    41,     0,    42,     0,    43,     0,     0,
       0,     0,    44,     0,     0,   185,     0,   186,   187,   188,
       0,     0,     0,     0,     0,     0,    45,   189,     0,   190,
       0,     0,    46,     0,   191,     0,   192,   193,   194,     0,
       0,     0,     0,     0,   195,     0,   196,     0,    47,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,    50,     0,     0,     0,     0,     0,    51,     0,
       0,    52,    53,     0,     0,     0,     0,   197,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   198,     0,     0,     0,     0,
       0,     0,    54,   199,     0,   200,   201,   202,   203,    55,
       0,   204,     0,     0,     0,   205,     0,   206,  1449,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     207,   208,     0,     0,     0,   209,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   210,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   211,   212,     0,     0,     0,     0,     0,     0,
     213,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   214,     0,   215,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   216,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   217,   218,
       0,     0,     0,     0,     0,     0,     0,   219,     0,     0,
       0,     0,     0,     0,   220,     0,     0,     0,     0,     0,
     221,     0,   222,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,  1450,     0,     0,     0,     0,     0,     0,     0,   223
};

static const yytype_int16 yycheck[] =
{
       3,   507,  1531,    53,   711,   706,   707,     4,    11,   943,
    1734,  1065,  1736,    16,     3,     4,     3,     4,     4,   931,
     932,   933,     5,     3,     4,     3,     4,     5,    26,     5,
       3,     4,    35,     3,     4,     3,     4,    31,    31,     0,
      43,  1032,    19,     5,  1035,    29,     5,    13,     4,    52,
     104,    25,    55,     4,    35,    58,    61,     3,     4,    62,
       5,     5,    65,     3,     4,  1056,    69,    70,     4,    98,
      73,    31,    20,    76,    77,   153,    78,    80,    15,    12,
      83,    84,    29,    86,    56,     3,     4,   999,    91,    35,
    1220,    26,  1222,    39,     4,    61,     3,     4,   221,   463,
      16,   104,   105,   106,   107,   108,   109,    39,     4,   473,
    2600,    95,    43,    48,    16,     5,    51,    35,  1248,  1249,
    1250,    16,   125,    66,   137,     3,     4,    62,    35,     4,
       5,  2112,    87,     4,     5,    20,    61,   118,   100,   113,
     170,   195,   142,     4,   106,    87,    20,  2128,  2129,  2130,
      85,  2782,  2133,   127,  2135,  2136,    87,   160,  2139,  2140,
    2141,     4,    16,  2144,  2145,    20,   112,  2148,   103,  2150,
    2151,     4,  2153,    87,   172,   201,    26,   179,    20,    46,
     112,   295,   185,   183,   168,   171,   122,   190,    26,   142,
     136,   269,   315,     4,     5,    66,     4,   122,   192,   192,
      78,  2832,    32,     4,     3,     4,   195,   162,   205,   190,
     148,   192,    15,   194,   195,   212,   213,    88,   136,   166,
     162,    87,   202,    66,   205,   135,     5,   195,  2718,   136,
     183,    26,   198,   259,     3,     4,     4,     3,     4,   220,
    2730,   215,   271,   256,   239,   275,   121,    61,   162,   247,
     121,   248,   224,     4,   228,    88,   202,   259,    66,    61,
     263,    61,   164,     4,   197,   315,   243,   204,   975,   200,
     202,   125,   143,    39,   221,   259,   279,   280,   121,  2260,
     264,    61,  2263,   234,     3,     4,     4,  2268,   293,   122,
    2271,   235,   295,    59,   297,   293,   162,   291,   291,   247,
     247,   179,   305,   306,   220,   308,   309,   273,   311,  2290,
     121,   316,   257,   121,    61,    66,   303,   283,   321,   173,
     121,   280,   172,   303,   313,    66,     4,   308,   331,   332,
     303,   291,   315,   303,   295,   210,   322,   315,   314,   210,
     201,   297,   274,   218,   219,   313,   112,   218,   219,   315,
     312,   354,   303,   356,   357,     5,   359,   303,   283,   356,
     363,   364,   247,   303,     3,     4,   220,   210,   357,   358,
     121,   374,   375,   247,   269,   218,   219,     4,   381,   269,
     121,   259,  1089,   386,   387,   303,   750,    63,   304,   357,
     358,   394,   247,   303,   397,   233,   303,   247,  2379,   210,
    1107,   297,   210,   121,  1316,   247,   296,   218,   219,   210,
     218,   219,  1324,   416,   417,   282,    43,   218,   219,    46,
     423,   424,   425,   426,   427,   428,   429,   362,   431,   105,
    2411,   306,    63,    20,   233,   306,   202,   312,   233,  1493,
    1141,   312,   445,   293,    20,    61,   449,   322,    66,    76,
     304,   454,   455,   456,   457,   458,   459,    84,   461,   210,
     463,   464,   465,   306,   233,  1519,    40,   218,   219,   210,
     473,   474,  1173,  1464,   105,    39,  1467,   218,   219,   293,
     355,   462,    18,    88,   355,   360,   361,  1541,   359,   360,
     361,   293,   210,   293,   121,   306,   297,   216,   306,    57,
     218,   219,   316,     4,    26,   306,   122,   157,   158,     5,
    2491,     4,   355,   293,   316,     5,   316,   360,   361,   146,
      56,     4,    11,   201,   527,   528,    16,    50,   892,  1659,
    2511,    66,     4,   299,     3,     4,   316,  2518,     3,     4,
    2521,  2522,   545,   201,   355,    61,   293,   355,   112,   360,
     361,   138,   360,   361,   355,   306,   195,    29,    16,   360,
     361,   106,   201,    39,    53,   306,   102,   617,   244,   316,
     551,   935,   239,   200,   252,     0,   134,   100,   581,     3,
       4,   259,    71,   210,   260,   261,   109,   162,   306,   106,
     279,   218,   219,   269,     3,     4,     4,   132,   225,     5,
     227,   240,     5,    11,   355,   255,   122,     5,   266,   360,
     361,   614,   101,   244,   355,   596,   191,   140,     4,   360,
     361,   671,   118,    61,     4,   160,   162,   266,   255,   260,
     261,   120,    30,   207,    83,   124,   112,   355,   202,   255,
     690,    99,   360,   361,   127,   175,   162,    56,    61,   138,
      56,   100,   174,  2377,   184,   658,     4,  1364,   203,    65,
     247,   157,   158,  2644,   157,   158,     5,   283,  1375,    61,
      56,   247,     3,     4,   313,     5,   234,   353,   354,   306,
      11,     5,  2663,    39,   122,   688,   203,    30,   224,   202,
     277,   249,    61,   229,   166,   322,    45,     0,    14,    15,
      61,     4,   705,     5,   200,   708,    22,   242,    56,   122,
     274,   233,   257,    29,     4,    64,     5,    66,   357,   358,
      36,    63,   353,   354,    13,    14,   202,   118,   355,    66,
     122,   214,   735,   360,   361,    26,   739,   740,   741,   742,
     257,    57,   745,    15,   747,   272,   749,   750,   751,   221,
      22,   216,   279,   122,   290,   313,   112,   120,    74,   255,
     295,   122,   255,   105,   233,  2746,  2747,   283,  2749,   174,
    2751,  2752,    61,  2754,   133,   247,    91,   827,    13,    14,
      61,   205,   305,   295,   280,   127,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   303,   224,   819,   820,   224,   822,
     823,   824,   825,     5,  1758,  1737,    61,  2808,   233,    13,
      14,    13,    14,    82,   175,  1199,   839,   840,   224,     5,
     189,   122,  1833,   846,   847,   283,   202,    13,    14,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,    61,
      36,   176,  1853,   866,   867,   868,   869,   870,   871,   872,
     283,    47,  1863,  2854,   233,  1866,   224,    61,  1932,    61,
       3,     4,  1873,   174,   887,   888,   889,    61,   891,   892,
     893,   283,   895,  1947,   272,    61,   301,  1888,    74,   248,
    1891,   279,   244,     3,     4,    32,   155,    66,  1899,   198,
     199,  1902,    61,   916,   283,   918,     3,     4,   260,   261,
     122,  1975,   283,   153,  1625,   928,    89,    94,   240,  2059,
    2060,  2061,   935,   936,   293,   916,  1040,     5,   941,     3,
       4,    15,   233,  1047,   293,   112,    23,    24,   122,     3,
       4,  2668,   267,   302,    33,   958,    66,  1321,   294,   962,
      89,   277,   278,   198,   199,   211,   969,   970,   971,  2686,
     285,     3,     4,   122,   977,     4,     5,   153,   250,   982,
      66,   253,   231,   232,   273,     3,     4,  2533,    72,    54,
     993,   307,  1042,    88,   283,   284,   226,   246,     5,   288,
      64,  1041,   283,   126,    30,    59,  2535,     4,  1048,  1012,
      70,   353,   354,  2559,   198,   199,   198,   199,   194,     3,
       4,    98,   117,     5,  2078,    90,   315,     4,   195,   108,
       4,     5,   198,   199,   350,   351,   352,     5,   273,   269,
     289,    59,   142,  1031,     5,    13,    14,     4,   283,   284,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   308,   144,
     315,   283,  1085,   183,     4,    36,    60,   263,     5,   273,
       5,   273,    66,    61,   126,     4,    47,     5,   193,   283,
     284,   283,   284,  1106,  2821,   133,   288,   273,   354,   283,
    2827,     5,  1115,   208,   360,   175,   362,   283,   284,     5,
    2666,  2667,   288,    74,  2670,     5,  2672,  2039,  1131,     4,
    1133,   315,   211,   315,   283,  1138,  1139,  1140,  2684,  2685,
     316,   115,   126,  2689,  2690,  1148,   174,  2693,  1151,   315,
    1153,     4,  2698,  2699,     3,     4,     3,     4,   132,     4,
      21,     3,     4,     4,    39,     4,  2883,  1170,  2885,  1172,
       3,     4,     5,   147,    16,   270,     5,  1180,  1181,   153,
       5,     3,     4,     4,    13,    14,   160,    98,    49,    11,
     255,    52,  1195,  1196,   254,   122,  1199,  1200,  1201,  2111,
       4,     5,   153,   263,  1207,   233,  1209,     4,     5,  1212,
    2756,  1214,    59,  2759,     5,  1265,  2207,   312,  2764,    27,
       4,    82,  2134,    25,  2770,  2216,     4,   322,   280,  2775,
     198,   199,    61,     4,  2225,     3,     4,   112,     6,     7,
       3,     4,   216,   194,     4,     5,    41,    42,  1251,     4,
     111,     4,  1255,   114,  1257,     5,  2310,     4,  1261,     4,
       5,   235,     3,     4,   205,   293,   240,     4,   242,     3,
       4,     5,  2326,     4,  1277,    27,  1279,  2331,  1281,  1282,
    1283,  1284,   157,   158,  1287,  1288,    82,  1290,  1291,  1292,
    1293,     3,     4,     5,   268,   269,  1277,  1300,    39,     4,
      21,     4,   276,  2849,  1307,   273,  2852,     5,  1311,  1312,
    1313,   113,   263,   451,   452,   283,   284,     5,  1321,  1322,
     288,   295,  1325,  1023,  1024,   127,  2872,   202,    49,     8,
    1333,    52,  1335,    10,    55,  1338,   652,     3,     4,    83,
    2886,   292,     5,  2889,  2890,  1326,   154,   315,   279,   300,
       4,   175,     4,    18,   184,   175,   100,     4,   204,   155,
     204,    82,   164,  1344,     5,   316,     5,     4,   204,   198,
     199,   112,   180,    39,   235,    40,   184,   351,    43,  1382,
     255,  1384,   177,   178,  1387,  1388,   196,  1390,    66,  1392,
     111,   196,    66,   114,   710,  1398,    66,  1400,  2527,   715,
       5,  2530,   154,  2532,     5,   233,  1409,   268,   234,     4,
       4,   206,    77,   215,   204,    87,  2545,  2546,     4,    84,
       3,     4,     4,     4,    13,    14,   228,    34,   180,   237,
      95,    96,   184,  2562,  2346,   231,   232,   102,   182,    87,
    1428,  2353,    87,     5,   273,    87,   112,     5,     5,    39,
     246,     4,  1440,     4,   283,   284,    39,    13,    14,   288,
       5,   202,   127,     3,     4,     5,     6,     7,     4,   100,
     278,     5,    61,     4,  1462,  1463,    66,  2531,   286,   287,
     145,     5,   226,    16,    16,   237,   315,  1490,  1491,  1492,
    2544,     4,     4,   289,     4,  2549,   161,   162,  2410,     4,
     107,  2413,    98,   168,  2416,    61,  2418,     5,  1489,  1512,
     100,    13,    14,  1516,   235,     5,   106,    87,   262,     4,
      87,     5,   112,   130,   131,   190,   278,     5,     5,   112,
      45,     4,   139,     5,   286,   287,  1539,  1540,     3,     4,
      11,     5,   132,     8,     9,    10,  1549,   268,     4,  1552,
       4,    66,   159,     5,    13,    14,  1559,     5,   874,    61,
       5,    64,   169,   153,   229,     4,    81,     4,     4,    11,
    1573,     5,     4,     4,   295,  1578,     4,     4,     4,  1582,
     170,  1584,  1585,     5,  1587,  1588,  1589,     5,  1591,     5,
       4,  1594,  1595,  1596,  1597,  1598,  1599,  1600,  1601,  1602,
    1603,  1604,    61,   171,  1607,  1608,  1609,  1610,   162,   198,
     199,     4,   162,   203,  1617,  1618,   195,   282,  1621,  1622,
    1623,     5,   201,     4,  1627,  1628,  1990,    37,   293,     3,
       4,     5,     6,     7,    37,    13,    14,  1640,  1641,   268,
    1643,  1644,   198,   199,     3,     4,     5,     6,     7,   268,
       5,   297,   242,     4,     4,     4,  2568,   322,     5,     5,
       5,   240,     5,     4,     4,   281,     5,   257,     5,   281,
       5,     5,     5,     4,   189,     4,   247,     5,     5,   269,
       5,  2045,     5,    61,   273,     5,     5,   266,  1691,  1692,
    1693,     5,     4,  1696,   283,   284,   198,   199,  1701,  1702,
       4,  1704,  1705,  1706,    92,  1708,  1709,   297,  1711,     5,
    1713,  1714,   100,  1716,  1717,  1718,  1719,   273,   106,   309,
    1701,   311,   312,  2087,  1727,     4,   315,   283,   284,     3,
       4,    44,  1735,   248,   313,   123,     5,  1740,  1741,   198,
     199,   129,     5,  1746,    18,   106,    59,   247,   247,     5,
     247,   142,  1755,   106,    39,   247,   247,     5,   220,   315,
     253,   351,    53,    39,  2818,   153,   253,   220,    81,     5,
     106,   273,     4,   220,     5,   163,     5,   220,   293,   358,
      71,   283,   284,     4,     4,  1788,     5,   302,   101,  1770,
       5,     5,     5,     5,     4,   112,  1112,    88,  1779,     4,
       4,   112,  1783,     5,     5,   118,  1809,  1810,     5,   122,
     101,  1814,     5,   315,   273,   203,     5,  1820,     4,     4,
     198,   199,     5,   211,   283,   284,     5,     5,   102,   120,
       5,     4,     0,   124,     5,     5,    66,   150,   151,    11,
       4,     4,    11,     5,     4,     4,     4,   138,     4,     4,
      80,     5,     5,  1169,   142,  1843,   315,   247,   247,    89,
     247,   247,   247,  1851,  1852,   247,   174,  1183,     4,   257,
     100,     4,   216,  1861,  1862,     4,     4,   257,   204,     4,
       4,   269,     5,  1871,  1872,     5,     5,   281,   162,     5,
     181,     5,     5,     4,   207,   273,     4,   285,  1886,  1887,
       5,     4,   132,     4,   217,   283,   284,     4,   319,  1897,
    1898,     5,     5,     5,   319,   247,  1904,   247,     4,     4,
       4,     4,     4,   153,  1927,  1928,  1914,  1930,     4,   247,
       5,  2295,  2296,     4,  2298,  2299,   319,   315,  2302,  2303,
     319,     4,    11,     5,   233,  1948,  1949,  1950,  1951,  1952,
    1953,  1954,  1955,  1956,     5,   229,   233,     4,   233,     4,
     233,    35,   233,     5,     4,     4,   279,   280,  1971,     5,
    1973,     5,     5,   203,     5,     4,     4,     4,   281,     5,
    1296,  1297,     5,     4,     4,     4,  1989,  1990,     5,     5,
       5,     5,  1995,     4,     4,  2702,     5,     4,     4,  2363,
       5,  2004,  2005,  2006,  2007,  2008,  2009,  2010,  2011,  2012,
    2013,     5,   242,  2016,  2017,  2018,  2019,  2020,  2021,  2022,
    2023,  2024,  2025,  2026,  2027,     5,  2029,     5,  2031,  2032,
    2033,     5,     4,   315,     5,     5,     5,     5,   351,   269,
       4,     4,  2045,  2046,   118,     5,     4,   281,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,  2079,  2784,  2081,   309,
    2083,   311,  2085,     5,  2087,  2088,     5,  2090,     5,     4,
       4,     4,  2095,  2096,     5,  2098,  2099,  2100,  2101,     5,
       5,     5,     4,     4,  2107,     5,  2109,     5,     5,     5,
    2113,     4,     4,  2116,     5,   189,     5,   191,   192,     5,
     194,   195,     5,     4,   281,     5,     5,     5,     5,    61,
       4,     4,  2842,     5,     4,     4,     4,     4,  2119,     5,
       5,     5,     5,     5,     4,     4,   363,     5,     4,     4,
       4,   225,  2516,     5,     5,     4,  2520,  2160,     5,     5,
       4,     4,   401,     5,     5,     4,   450,     5,     5,  1485,
     244,   245,     5,     5,     5,     5,   250,  2158,     4,     4,
     254,     5,     4,  2171,     4,     4,   118,     4,  2717,     5,
     122,     5,  2556,  2181,  2182,     5,     4,     4,  1514,     5,
       5,     5,  1518,     5,  2192,     4,     4,     4,  2258,     5,
       5,     5,     5,  2201,     4,   363,     5,  2205,  2206,     4,
       4,     4,   296,     4,     4,     4,  2214,  2215,  1544,     4,
     162,     4,     4,     4,   308,  2223,  2224,     4,  1554,     4,
       4,  2229,   363,     5,     5,   363,   363,  1563,  1564,     4,
       4,  2239,  2240,   363,   328,     5,   363,   363,  1574,     4,
       4,  2264,  2250,     5,  2252,     5,     5,     5,   200,     4,
       4,     4,  2275,  2276,  2277,  2278,  2279,  2280,  2281,  2282,
    2283,  2284,  2285,     4,     4,     4,     4,     4,  2291,     4,
    2796,  2797,  2295,  2296,     4,  2298,  2299,     5,     4,  2302,
    2303,  2304,  2305,  2306,  2307,  2308,  2309,     5,  2311,  2312,
    2313,     5,     5,     4,   295,     5,     4,   363,     5,   251,
       5,     4,     4,   255,  2327,  2328,  2329,  2330,     4,  2332,
    2333,  2334,  2335,  2336,  2337,     4,  2339,     4,     4,  2342,
    2343,     4,   295,     5,     4,     4,     4,     4,   280,     5,
       4,   283,     4,   310,     4,    55,     5,  2360,     5,     4,
    2363,  2364,   294,     4,     4,  2368,    66,     4,   442,     4,
    2373,  2374,  2375,     4,     4,  2700,     5,     4,     4,   453,
       5,     5,     4,  2784,     5,     5,     5,     4,   462,     5,
       5,     5,    92,    93,     4,     4,  2780,     5,     5,     5,
     100,  2321,    -1,    -1,    -1,    -1,   106,    -1,   785,    -1,
      -1,    -1,    -1,   370,    -1,    -1,    -1,    -1,    -1,    -1,
    2423,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,   129,
      -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,  2427,
      -1,    -1,  2430,    -1,    -1,  2433,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    -1,  2443,   530,   531,    -1,    -1,
      -1,    -1,    -1,   163,  2452,    -1,    -1,    -1,    -1,   543,
      -1,    -1,    -1,  2461,   548,    -1,    -1,    -1,    -1,    -1,
    2468,    -1,    -1,   557,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2479,  2495,    -1,    -1,    -1,  2499,  2485,    -1,    -1,
      -1,    -1,    -1,   203,    -1,    -1,  2509,  2510,    -1,    -1,
      -1,   211,  2515,  2516,    -1,    -1,  2519,  2520,    -1,    -1,
      -1,    -1,  2525,    -1,    -1,  2528,  2529,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2547,  2548,    -1,  2550,  2551,  2552,
    2553,  2554,    -1,  2556,  2557,    -1,    -1,   257,  2561,     4,
      -1,    -1,    -1,   637,   638,   639,   640,    -1,   525,   269,
      -1,  2574,    -1,    18,    -1,   532,    -1,    -1,   535,    -1,
    2583,    -1,    -1,   540,    -1,   285,    -1,   544,    -1,    -1,
      -1,    -1,    -1,    -1,    39,   295,    -1,   297,  2601,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,  2605,    -1,    -1,
      -1,    -1,    -1,    -1,  2612,  1941,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2621,    -1,   709,    -1,    -1,    -1,    -1,
    2643,    -1,  2630,    -1,    -1,  2648,    -1,  2650,  2636,    -1,
      -1,   351,  2640,  2656,    -1,    -1,    -1,   102,    -1,    -1,
    1976,    -1,   619,    -1,    -1,    -1,  2669,    -1,    -1,  1017,
      -1,    -1,    -1,    -1,    -1,    -1,   121,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2687,    -1,    -1,    -1,  2691,    -1,
      -1,    -1,    -1,    -1,  2744,    -1,    -1,    -1,    -1,    -1,
      19,    20,    21,    -1,    -1,    -1,    -1,  1055,    -1,    -1,
      -1,    -1,    -1,    -1,  2717,    -1,    -1,   162,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    -1,    -1,    62,    -1,  2748,    -1,    66,    -1,    -1,
    2753,    -1,  2755,    -1,    -1,    74,    75,   202,    -1,  2762,
      -1,    -1,    -1,    82,  2767,   210,    -1,    -1,    -1,  2772,
      -1,    -1,    -1,   218,   219,    -1,    -1,    -1,    -1,   224,
      -1,    -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,   746,
      -1,   110,   111,  2796,  2797,   114,   753,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   878,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   132,    -1,    -1,   890,    -1,    -1,  2822,
      -1,    -1,  2825,    -1,    -1,  2828,    -1,    -1,    -1,    -1,
      -1,    -1,  2813,    -1,   153,  2838,  2839,  2840,  2841,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2850,    -1,    -1,
    2853,    -1,    -1,   927,    -1,    -1,    -1,  2860,    -1,  2862,
     179,   306,    -1,  2844,    -1,    -1,  2847,    -1,    -1,   188,
      -1,    -1,     4,     5,    -1,    -1,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,    -1,    -1,    -1,    -1,    -1,
     355,    -1,    -1,    -1,   233,   360,   361,    -1,    -1,    -1,
     877,    -1,   241,   242,    -1,    -1,    -1,   884,    60,    -1,
      -1,    -1,    -1,  1007,    66,    -1,    -1,    -1,    -1,   258,
      -1,    73,    -1,    75,    -1,    -1,    -1,    -1,    80,    -1,
     269,    83,    -1,    -1,    21,    -1,    -1,    89,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,
      -1,    -1,   929,   930,   106,    -1,   295,   934,   297,    -1,
     937,    48,    49,   115,    51,    52,    -1,    -1,   307,     3,
       4,    -1,   949,    -1,    -1,    62,    -1,    -1,   317,    -1,
     132,    -1,    -1,    -1,    18,    -1,    -1,    74,    75,    -1,
      -1,    -1,    -1,    -1,  1088,    82,    -1,    -1,    85,    -1,
      -1,   153,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      -1,  2347,   351,    -1,    -1,    -1,   103,    -1,   170,     3,
       4,    -1,    56,   110,   111,    -1,    -1,   114,    -1,   181,
     182,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1410,  1411,  1412,    -1,    -1,    -1,  1142,    -1,
      -1,   203,  1420,  1421,  1422,    -1,    -1,    -1,  1152,    -1,
      -1,  1429,  1430,  1431,    -1,    -1,  1434,  1435,   102,  1437,
    1438,    -1,    56,    -1,   226,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1063,    -1,   240,    -1,
     242,    -1,   179,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1471,  1472,   257,    -1,  1475,  1476,    -1,
     262,    -1,    -1,    -1,    -1,    -1,    -1,   269,   102,    -1,
      -1,    -1,    -1,    -1,   276,    -1,    -1,    -1,   162,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   295,    -1,    -1,    -1,    -1,   235,    -1,
      -1,    -1,    -1,    -1,   241,    -1,   308,   309,    -1,   311,
      -1,    -1,    -1,    -1,    -1,  1259,    -1,    -1,   202,    -1,
      -1,   258,    -1,    -1,    -1,    -1,    -1,    -1,   162,    -1,
      -1,   268,    -1,  1277,    -1,    -1,    -1,    -1,    -1,    -1,
     224,    -1,    -1,    -1,    -1,   229,    -1,    -1,    -1,   351,
      -1,    -1,    -1,    -1,    -1,    -1,   240,  2543,    -1,   296,
     297,  1305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1315,    -1,    -1,    -1,    -1,    -1,  2563,    -1,    -1,
     317,  2567,    -1,    -1,    -1,    -1,    -1,    -1,  1332,    -1,
     224,    -1,    -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,
    1344,    -1,    -1,    -1,    -1,  1349,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   303,
      -1,    -1,    -1,    -1,    -1,   362,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1263,    -1,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,    -1,    -1,    -1,    -1,
      -1,    -1,  1299,    -1,    -1,    -1,    -1,  1304,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1314,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,    -1,    -1,    -1,    -1,
    2706,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1489,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1517,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1545,    -1,    -1,  1548,    -1,  1824,    -1,    -1,    -1,
      -1,    -1,    -1,  1557,  1558,    -1,    -1,    -1,    -1,  1837,
      -1,  1565,    -1,    -1,    -1,    -1,    -1,    -1,  1572,  1847,
      -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2834,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1612,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1624,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1919,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    -1,    -1,   162,    -1,    -1,
      -1,    -1,   167,    -1,    -1,    -1,  1553,    -1,    18,    -1,
      -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1701,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1723,
      -1,    -1,    -1,    -1,    -1,    -1,  1613,    -1,    -1,    -1,
      -1,    -1,  1619,   162,    -1,  1739,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1752,    -1,
    1754,    -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1764,    -1,    -1,  1767,  1768,  1769,  1770,  1771,    -1,  1773,
      -1,    -1,  1776,    -1,    -1,  1779,  1780,  1781,  1782,  1783,
    1784,    -1,  1786,  1787,    -1,    -1,    -1,  1791,  1792,  1793,
      -1,    -1,  1796,  1797,    -1,   224,    -1,    -1,  1802,  1803,
     229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1698,   162,    -1,    -1,    -1,  1703,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,  1732,    -1,    -1,    -1,    -1,
      -1,  1738,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1765,   229,
      -1,    -1,    -1,    -1,    -1,  1772,    -1,    -1,    -1,    -1,
      -1,    -1,  2170,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,    -1,  1926,    -1,    -1,  1929,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1940,    -1,    -1,  1943,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2230,  2231,  2232,  2233,  2234,    -1,  2236,  2237,
      -1,    -1,    -1,  2241,  2242,  2243,  2244,  2245,  1972,  2247,
    2248,    -1,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2027,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1924,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2050,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1944,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,    -1,    -1,    -1,    -1,
    1977,  1978,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2104,    -1,    -1,    -1,    -1,    -1,  1993,  1994,    -1,    -1,
      -1,  1998,  1999,    -1,    -1,  2119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2147,    -1,    -1,    -1,    -1,  2426,    -1,
      -1,  2038,    -1,    -1,  2158,    -1,    -1,  2435,  2436,  2437,
    2438,  2439,  2049,  2441,  2442,    -1,  2444,  2445,  2446,  2447,
    2448,    -1,  2450,  2451,    -1,  2453,  2454,  2455,  2456,  2457,
      -1,  2459,  2460,    -1,  2462,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2472,  2473,    -1,  2084,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2483,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2103,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2126,
      -1,    -1,    -1,    -1,  2131,    -1,    -1,    -1,    -1,    -1,
    2137,    -1,    -1,    -1,    -1,  2142,    -1,    -1,  2262,  2146,
      -1,  2265,  2149,    -1,    -1,  2152,    -1,  2154,    -1,  2273,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    -1,
      -1,    69,    -1,    -1,    -1,  2289,    -1,    -1,  2292,    -1,
      -1,    -1,    -1,  2297,    -1,    -1,  2300,  2301,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2615,    -1,    -1,
      -1,    -1,    -1,    -1,  2348,  2349,  2624,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2633,    -1,  2635,    -1,    -1,
      -1,  2639,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,  2392,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   194,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    -1,    -1,    -1,   216,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2338,    -1,    -1,    -1,    -1,  2734,    -1,  2736,    -1,
    2738,    -1,    -1,  2741,    58,  2743,    -1,  2354,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2490,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   282,    -1,    -1,    -1,    -1,    -1,
    2387,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2523,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2534,    -1,    -1,  2420,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,    -1,   351,    -1,    -1,    -1,    -1,   162,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2588,    -1,   180,    -1,  2592,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2488,    -1,    -1,    -1,    -1,    -1,  2494,    -1,    -1,
      -1,  2498,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2514,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,
      -1,    -1,  2646,  2647,    -1,  2649,    -1,    -1,    -1,    -1,
    2654,  2655,    -1,    -1,    -1,  2659,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2565,  2566,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2692,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   299,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2724,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,    -1,    -1,    18,    -1,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2674,    -1,    48,
      49,    18,    -1,    52,    -1,    -1,    55,    -1,    -1,    59,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    -1,  2813,
      -1,    -1,    -1,    -1,    -1,    74,    75,    -1,    -1,    18,
      -1,    -1,    -1,    82,    83,    -1,  2830,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2844,   100,   102,  2847,    -1,    -1,    -1,   106,    18,    -1,
      -1,   110,   111,    -1,    -1,   114,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   132,    -1,   102,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2776,
      -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   162,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2800,    -1,    -1,    -1,    -1,    -1,    -1,
     179,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,    -1,    -1,   162,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2845,    -1,
      -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,    -1,   229,
      -1,    -1,    -1,    -1,   233,    -1,   235,    -1,  2865,    -1,
      -1,  2868,   241,   242,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   162,    -1,    -1,    -1,    -1,   224,   257,   258,
      -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,    -1,   268,
     269,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     229,    -1,    -1,    -1,    -1,    -1,   295,    -1,   297,   299,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     309,    -1,   311,    -1,    -1,    -1,    -1,    -1,   317,   229,
      -1,    -1,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
      -1,    -1,   351,    -1,    -1,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,    -1,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
      40,    -1,    -1,    43,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    -1,    -1,    64,    65,    -1,    67,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    86,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,    -1,    -1,    -1,   145,    -1,    -1,   148,    -1,
      -1,    -1,   152,   153,    -1,    -1,    -1,   157,   158,    -1,
      -1,   161,    -1,    -1,    -1,    -1,    -1,   167,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   182,    -1,    -1,   185,   186,   187,    -1,    -1,
     190,   191,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   222,   223,   224,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   236,    -1,   238,    -1,
      40,    -1,    -1,    43,    -1,   245,    46,    -1,    -1,   249,
      -1,    -1,    -1,   253,    -1,   255,    -1,   257,    -1,    -1,
      -1,    -1,   262,    -1,    -1,    65,    -1,    67,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,   276,    77,    -1,    79,
      -1,    -1,   282,    -1,    84,    -1,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    94,    -1,    96,    -1,   298,   299,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     310,    -1,   312,    -1,    -1,    -1,    -1,    -1,   318,    -1,
      -1,   321,   322,    -1,    -1,    -1,    -1,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,
      -1,    -1,   352,   153,    -1,   155,   156,   157,   158,   359,
      -1,   161,    -1,    -1,    -1,   165,    -1,   167,   167,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     190,   191,    -1,    -1,    -1,   195,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   222,   223,    -1,    -1,    -1,    -1,    -1,    -1,
     230,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   255,    -1,   257,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   282,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   298,   299,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   307,    -1,    -1,
      -1,    -1,    -1,    -1,   314,    -1,    -1,    -1,    -1,    -1,
     320,    -1,   322,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   359
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
       5,   157,   158,   255,   491,     5,   493,     5,   118,   157,
     158,   200,   255,   280,   494,    94,   112,   195,   507,     5,
     505,     5,   280,   506,     4,     5,   368,   368,   366,   366,
       5,     4,     5,    60,    66,    73,    75,    80,    83,    89,
     100,   106,   115,   132,   153,   170,   181,   182,   203,   226,
     240,   242,   257,   262,   269,   276,   295,   308,   309,   311,
     351,   511,    91,   176,   267,   285,   380,     5,     4,   205,
     212,   213,   248,   356,   379,   366,   376,   366,     5,   366,
      39,   112,   366,   550,   368,   366,   376,   378,   549,   366,
     383,   366,     4,   377,    54,    90,   144,   255,   554,     4,
       4,   366,     4,   153,   269,   555,     5,   376,     4,    39,
     112,   366,   562,   366,    98,    61,   122,   255,   283,   564,
     122,   577,    61,   118,   122,   162,   200,   251,   255,   280,
     283,   294,   566,   567,    61,   122,   283,   576,     5,     4,
      33,   108,   211,   559,    66,   368,   395,    66,   368,   396,
      66,   368,   397,    12,   197,   558,   366,     4,   366,   233,
     366,   398,   366,   280,     4,   366,   366,     4,   234,   303,
     586,     4,   297,   584,     4,   297,   585,     4,   383,   126,
     366,   589,   366,   366,     4,     5,   366,    11,   366,   366,
     366,    29,    95,   168,   259,   264,   382,   382,     4,   205,
     366,   366,     4,     4,     4,   366,   366,   366,   366,   366,
     366,   366,   366,     4,     4,     5,     5,   376,     5,   366,
     366,   372,   374,   374,   376,   366,   366,   366,   366,   366,
     366,   366,   376,   378,   375,   366,   366,   375,   366,     5,
     279,   104,   195,   434,   201,   259,   437,   175,    78,   179,
     259,   438,   142,   183,   419,   419,     4,   441,     4,   443,
     201,   266,   445,   184,   446,   175,   383,   366,   366,   376,
     376,   383,   383,   383,   376,   383,   366,   376,     4,   459,
       4,   378,   457,   204,     4,   171,   322,   458,   204,   376,
       4,   135,   303,   461,     5,     5,   431,     4,   204,   137,
     256,   369,   366,     4,     5,    60,    66,   115,   132,   147,
     153,   160,   216,   235,   240,   242,   268,   269,   276,   295,
     351,   520,   378,   196,   196,    66,   470,    66,   471,    66,
     472,   233,   473,   366,     5,   432,   234,   475,   377,   383,
       5,   376,   376,   376,   376,     4,     4,     4,   368,     4,
       4,   204,   366,    13,    14,    61,   198,   199,   273,   283,
     284,   315,    87,    87,    87,     5,     5,    13,    14,    61,
     198,   199,   273,   283,   284,   288,   315,    87,    87,   162,
      87,   162,   162,   167,   377,   497,   502,    87,   162,     5,
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
       4,     4,     5,     5,   492,   492,   492,   281,   281,     5,
       5,     5,    16,   164,   387,   387,   386,     4,     4,   386,
       5,     5,   496,     5,   503,     5,   504,   503,   504,   167,
     350,   377,   500,     5,   499,     5,   503,   504,     5,    13,
      14,    61,   198,   199,   273,   283,   284,   288,   315,     4,
       4,     5,     5,   388,   386,     4,     5,     5,   383,    82,
     155,   231,   232,   246,   289,   391,     6,     7,   366,   371,
     247,   247,   247,   106,    39,    66,   100,   106,   112,   132,
     153,   170,   203,   242,   257,   269,   297,   309,   311,   312,
     351,   513,   247,     5,    26,   172,   247,   293,   142,   106,
      21,    49,    52,    82,   111,   114,   235,   268,    21,    49,
      52,    55,    82,   111,   114,   235,   268,   295,    39,   247,
     247,   106,     5,   220,    26,   233,    35,   136,   303,   366,
     272,   279,   253,   376,   532,    39,   133,   233,   293,   253,
     220,     5,     5,   257,    26,   233,     4,     5,     5,   220,
      35,   136,   303,   366,   532,   220,   368,     4,     4,   366,
       5,   315,    21,    26,    48,    49,    51,    52,    62,    74,
      75,    82,    85,   103,   110,   111,   114,   179,   235,   241,
     258,   268,   296,   297,   317,   362,   515,   366,   366,   366,
     366,   366,   519,   376,     5,     4,     5,   366,   366,   376,
     366,   368,   366,   366,   519,     5,     5,   366,   366,   368,
       5,    16,     5,     5,   366,   366,   375,   366,   366,     4,
     366,   366,   112,   366,   366,   112,     4,    41,    42,   177,
     178,   206,   393,   393,    61,   122,   283,   565,   393,     5,
      61,   122,   283,   570,     5,     5,    61,   122,   283,   572,
       4,     5,     5,     4,    61,   122,   283,   574,    61,   122,
     283,   573,     5,     5,     4,     5,     5,     4,   393,   393,
     393,   366,   366,   366,     4,   376,   366,   383,   377,     5,
       5,    11,   366,   376,   378,   366,    11,   366,   366,   366,
      59,   366,     4,   366,   366,     4,   366,   366,   366,   366,
      46,   282,   420,     5,   368,   368,   383,   366,     4,     4,
       4,   383,   376,   366,   366,   366,   366,   383,   376,   384,
     375,   366,     4,   384,   366,     4,   378,     5,    23,    24,
      98,   385,     4,   376,   366,   366,     4,   366,     5,    82,
     155,   231,   232,   246,   289,   376,   378,   247,   247,   247,
      20,   247,   376,   247,    26,   172,   247,   293,   142,    20,
     247,   247,   247,    20,   247,    26,   174,   233,   174,   272,
     279,   174,   233,   301,   532,   133,   174,   233,   293,     4,
     257,    26,   174,   233,   532,   216,   366,   366,   366,   366,
     366,   366,   204,   366,   366,    19,   243,   478,     4,     4,
     366,   388,   388,   388,     4,   388,   388,   388,    13,    14,
      61,   198,   199,   273,   283,   284,   315,   387,   388,   388,
     388,   388,   388,     4,   388,   388,     4,   387,    13,    14,
      61,   198,   199,   273,   283,   284,   315,     5,    13,    14,
      61,   198,   199,   273,   283,   284,   288,   315,    13,    14,
      61,   198,   199,   273,   283,   284,   315,     5,   498,     5,
     501,     5,     5,    13,    14,    61,   198,   199,   273,   283,
     284,   288,   315,     5,    13,    14,    61,   198,   199,   273,
     283,   284,   288,   315,   281,     5,     5,     5,   387,   387,
     386,     4,     4,   386,     5,     4,     4,   388,   388,     4,
     388,   388,     5,   368,   376,   378,     5,   366,   366,     5,
     366,     5,   371,   106,   203,   257,   106,   203,   257,     5,
     366,   368,     5,   366,   376,   368,     5,   371,   247,   247,
      20,   247,    20,   247,   247,    20,   247,   319,   319,     4,
       4,     4,   513,     4,     4,     4,   319,   319,     4,     5,
       4,   366,     5,   366,     5,   371,   368,   376,   376,   366,
      26,    48,    51,    62,    85,   103,   362,   389,     4,   366,
     383,   368,     5,   376,   376,   366,   368,   368,   376,   376,
     366,   368,   366,     5,   366,   233,   233,   366,   366,   233,
     366,   233,   366,   366,   525,   533,   366,   233,   233,   366,
     366,   366,   366,   366,   366,   366,   366,     5,   315,   366,
     516,   366,   366,   233,   366,   366,   366,   366,   376,   383,
       5,     4,     4,   366,   366,   383,   366,   366,   366,   376,
     519,   366,   366,     5,     4,   366,   366,   366,   366,     5,
       5,     4,   393,     5,     5,     4,     4,     4,     5,     5,
       4,     4,     5,     5,     4,     5,     5,     4,   366,   366,
     366,   366,   383,   366,   376,   378,   366,   383,   366,   366,
     366,   366,   366,     5,   366,   366,   366,     4,   366,   366,
     366,   366,     4,   376,   366,   383,   184,   381,   366,   381,
     384,   383,   376,   366,   366,     4,   366,   376,   376,   366,
     369,     5,     5,     5,     5,     5,   376,   383,   376,   376,
     376,   376,   378,   376,   383,   376,   376,   376,   378,   376,
     376,   376,   376,   378,   376,   376,   376,   366,   376,   376,
     376,   376,   376,   376,   376,   366,   366,     4,   366,     5,
     366,   388,     5,     5,     5,   386,     4,     4,     5,   388,
     387,     4,   388,     5,     5,     5,   387,   387,   386,     4,
       4,     5,   281,     5,     5,     5,   387,   387,   386,     4,
       4,   386,     5,     5,     5,     5,   387,   387,   386,     4,
       4,     5,    13,    14,    61,   198,   199,   273,   283,   284,
     315,    13,    14,    61,   198,   199,   273,   283,   284,   315,
      13,    14,    61,   198,   199,   273,   283,   284,   315,   281,
       5,     5,     5,   387,   387,   386,     4,     4,   386,     5,
     281,     5,     5,     5,   387,   387,   386,     4,     4,   386,
       5,   387,     4,     4,   387,     4,     4,   388,     5,   383,
     376,   366,   366,   376,   366,     5,   371,     5,   376,   368,
       5,   376,   383,     5,   371,   366,   366,   366,   366,   366,
     366,   366,   366,   366,     4,     4,     5,     4,     4,   366,
     376,   366,     5,   371,   368,   383,   383,   366,   375,   383,
     383,   366,   383,   383,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,    55,    66,    93,   132,   295,   297,
     351,   530,   531,   532,   544,   545,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   376,     5,
     366,   366,   366,   366,     4,     4,   383,   384,     5,     5,
     375,   366,     4,   383,   376,     4,   393,   393,   393,   371,
     366,   366,   366,   383,   366,   375,   366,   366,    11,     5,
       5,   366,   366,   366,   366,   366,   366,     4,   383,   376,
     366,   366,   384,   385,   366,     5,   366,   376,   378,     5,
       5,     5,     5,     5,   383,   385,   385,   385,   383,   385,
     384,   385,   385,   383,   385,   385,   385,   383,   385,   385,
     383,   376,   385,   383,   385,   385,   383,   385,   383,     4,
     376,   378,     5,   366,     4,   388,   387,     4,   387,   387,
       4,     4,   387,     4,   387,     5,     5,     5,   387,   387,
     386,     4,     4,     5,     5,     5,     5,   387,   387,   386,
       4,     4,     5,     5,     5,     5,   387,   387,   386,     4,
       4,     5,   387,   388,   388,   388,   388,   388,     4,   388,
     388,     4,   387,   387,   388,   388,   388,   388,   388,     4,
     388,   388,     4,   387,   387,     4,     4,     4,   377,   385,
       4,   376,   385,   366,   376,     4,   385,   385,   376,     4,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   376,   385,   366,   376,     4,   375,   375,   376,   375,
     375,   376,   376,   375,   375,   366,   366,   366,   366,   366,
     366,   371,   366,   366,   366,   363,   363,   363,   363,   363,
     363,   363,   531,   363,   371,   366,   366,   366,   366,   371,
     366,   366,   366,   366,   366,   366,   383,   366,   315,   370,
     371,   366,   366,   384,   368,   376,   376,   384,   383,     4,
     366,   375,   366,    59,   366,     5,     5,     4,     4,   366,
     366,   366,     4,   381,   385,     5,   383,     4,     5,     4,
       5,   376,     5,   384,   385,   384,   384,   384,     5,   383,
       4,   366,   388,   387,   387,     4,   387,   388,   388,   388,
     388,   388,     4,   388,   388,   387,   388,   388,   388,   388,
     388,     4,   388,   388,   387,   388,   388,   388,   388,   388,
       4,   388,   388,   387,   388,   387,     4,   388,   388,   387,
       4,   388,   387,   383,   376,   385,     4,   383,   366,   383,
     366,   366,   366,   385,     4,   383,   366,   375,   385,   366,
     375,   385,   385,   376,   366,     4,   390,   390,   366,   366,
     390,   371,   390,   533,   376,   513,     5,     4,     5,     5,
       5,     4,   368,   371,   390,   390,   366,   366,   371,   366,
     366,   366,   366,   366,   375,   366,     5,   533,   366,   390,
     368,   534,   535,   383,   383,   368,   384,     4,     5,   366,
       5,     4,     4,     4,     4,     4,     4,   366,     4,    31,
     192,   291,   427,   376,     5,    31,   192,   291,   392,   376,
       4,   427,   366,   387,   387,   388,   387,   388,   387,   388,
     388,   387,   388,   387,   366,   385,   376,   376,   366,   376,
     366,   376,   376,   366,   376,   385,     4,   533,   533,   370,
     366,   533,     4,   533,   383,     5,     4,     4,   533,   533,
     370,   366,     4,   533,   533,   366,   376,   533,   533,   533,
     534,   541,   542,   532,   539,   540,   368,     4,     5,     5,
       4,     4,     4,   195,   313,   358,   366,   418,   427,     4,
     376,   427,     4,   388,   388,   388,   388,   388,   377,   385,
     385,   366,   385,     4,   385,   385,   366,   385,   366,   533,
     533,     4,   366,   533,     5,   366,   533,     4,   366,   533,
     383,   541,   543,   544,   363,   540,     5,     5,   366,   419,
     366,   419,   383,   385,     4,   376,   378,     4,   371,   370,
     366,   366,   370,   366,   376,   544,   368,     5,     5,   366,
     366,   366,   366,   392,     5,   376,   378,   383,   376,   378,
     533,   366,     4,   533,   366,   385,     5,     5,   366,     5,
     366,   383,   383,     4,   533,     4,     5,     5,     5,   370,
     370,   533,   533,   533
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

  case 621:
#line 1499 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 622:
#line 1500 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 623:
#line 1501 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 624:
#line 1502 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 625:
#line 1503 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 626:
#line 1505 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 627:
#line 1506 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 628:
#line 1507 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 629:
#line 1508 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 630:
#line 1511 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 631:
#line 1515 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 632:
#line 1517 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 633:
#line 1519 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 634:
#line 1521 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 635:
#line 1523 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 636:
#line 1525 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 637:
#line 1527 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 638:
#line 1529 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 639:
#line 1532 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 640:
#line 1534 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 641:
#line 1536 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 651:
#line 1548 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 652:
#line 1549 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 653:
#line 1550 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 654:
#line 1551 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 655:
#line 1552 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 656:
#line 1553 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 657:
#line 1555 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 658:
#line 1557 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 659:
#line 1558 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 660:
#line 1559 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 661:
#line 1560 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 662:
#line 1563 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 663:
#line 1564 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 664:
#line 1565 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 665:
#line 1566 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 666:
#line 1567 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 667:
#line 1569 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 668:
#line 1570 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 669:
#line 1571 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 670:
#line 1572 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 676:
#line 1583 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 677:
#line 1586 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 678:
#line 1589 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 679:
#line 1592 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 680:
#line 1595 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 681:
#line 1598 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 682:
#line 1601 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 683:
#line 1604 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 684:
#line 1607 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 685:
#line 1612 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 686:
#line 1615 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 687:
#line 1618 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 688:
#line 1621 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 689:
#line 1624 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 690:
#line 1627 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 691:
#line 1630 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 692:
#line 1633 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 693:
#line 1636 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 694:
#line 1639 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 695:
#line 1642 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 696:
#line 1647 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 697:
#line 1650 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 698:
#line 1653 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 699:
#line 1656 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 700:
#line 1659 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 701:
#line 1662 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 702:
#line 1665 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 703:
#line 1668 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 704:
#line 1671 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 705:
#line 1676 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 706:
#line 1678 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 707:
#line 1680 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 708:
#line 1682 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 709:
#line 1684 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 710:
#line 1686 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 711:
#line 1691 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 712:
#line 1693 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 713:
#line 1695 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 714:
#line 1699 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 715:
#line 1702 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 716:
#line 1705 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 717:
#line 1708 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 718:
#line 1711 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 719:
#line 1714 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 720:
#line 1717 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 721:
#line 1720 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 722:
#line 1723 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 723:
#line 1726 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 724:
#line 1729 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 725:
#line 1733 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 726:
#line 1734 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 727:
#line 1735 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 728:
#line 1736 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 729:
#line 1737 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 730:
#line 1738 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 731:
#line 1740 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 732:
#line 1742 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 733:
#line 1743 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 734:
#line 1744 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 735:
#line 1745 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 736:
#line 1748 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 737:
#line 1749 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 738:
#line 1750 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 739:
#line 1751 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 740:
#line 1752 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 741:
#line 1754 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 742:
#line 1755 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 743:
#line 1756 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 744:
#line 1757 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 745:
#line 1761 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 746:
#line 1763 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 747:
#line 1764 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 748:
#line 1766 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 749:
#line 1768 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 750:
#line 1770 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 751:
#line 1773 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 752:
#line 1774 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 753:
#line 1777 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 754:
#line 1778 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 755:
#line 1779 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 756:
#line 1782 "frame/parser.Y"
    {;}
    break;

  case 757:
#line 1785 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 758:
#line 1786 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 759:
#line 1787 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 760:
#line 1788 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 761:
#line 1789 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 762:
#line 1790 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 763:
#line 1791 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 764:
#line 1795 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 766:
#line 1803 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 767:
#line 1804 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 768:
#line 1806 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 769:
#line 1808 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 770:
#line 1809 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 771:
#line 1810 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 773:
#line 1811 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 776:
#line 1814 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 777:
#line 1815 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 778:
#line 1817 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 779:
#line 1819 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 780:
#line 1821 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 781:
#line 1824 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 782:
#line 1826 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 783:
#line 1827 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 784:
#line 1829 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 785:
#line 1832 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 786:
#line 1835 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 787:
#line 1839 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 788:
#line 1842 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 789:
#line 1845 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 790:
#line 1848 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 791:
#line 1852 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 792:
#line 1856 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 793:
#line 1861 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 794:
#line 1865 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 795:
#line 1867 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 796:
#line 1868 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 797:
#line 1870 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 798:
#line 1872 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 799:
#line 1874 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 800:
#line 1876 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 801:
#line 1877 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 802:
#line 1879 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 803:
#line 1881 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 804:
#line 1884 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 805:
#line 1888 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 806:
#line 1892 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 807:
#line 1894 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 808:
#line 1896 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 809:
#line 1898 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 810:
#line 1900 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 811:
#line 1902 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 812:
#line 1904 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 813:
#line 1906 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 814:
#line 1908 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 815:
#line 1910 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 816:
#line 1912 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 817:
#line 1914 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 818:
#line 1916 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 819:
#line 1918 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 820:
#line 1919 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 821:
#line 1921 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 822:
#line 1923 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 823:
#line 1924 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 824:
#line 1925 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 825:
#line 1927 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 826:
#line 1929 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 827:
#line 1930 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 828:
#line 1931 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 829:
#line 1932 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 830:
#line 1934 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 831:
#line 1936 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 832:
#line 1940 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 833:
#line 1943 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 834:
#line 1946 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 835:
#line 1950 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 836:
#line 1954 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 837:
#line 1959 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 838:
#line 1963 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 839:
#line 1964 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 840:
#line 1965 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 841:
#line 1967 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 842:
#line 1969 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 843:
#line 1973 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 844:
#line 1974 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 845:
#line 1975 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 846:
#line 1977 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 847:
#line 1980 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 848:
#line 1983 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 849:
#line 1986 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 850:
#line 1987 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 851:
#line 1991 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 852:
#line 1995 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 853:
#line 1997 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 854:
#line 1998 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 855:
#line 2000 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 856:
#line 2003 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 857:
#line 2006 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 858:
#line 2007 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 859:
#line 2009 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 860:
#line 2010 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 861:
#line 2011 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 862:
#line 2013 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 863:
#line 2014 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 864:
#line 2016 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 865:
#line 2019 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 866:
#line 2022 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 867:
#line 2024 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 868:
#line 2025 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 872:
#line 2030 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 873:
#line 2031 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 874:
#line 2033 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 875:
#line 2035 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 876:
#line 2037 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 877:
#line 2038 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 881:
#line 2044 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 882:
#line 2045 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 883:
#line 2046 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 884:
#line 2047 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 885:
#line 2048 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 886:
#line 2049 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 887:
#line 2050 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 888:
#line 2051 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 889:
#line 2052 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 890:
#line 2053 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 891:
#line 2055 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 892:
#line 2057 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 893:
#line 2058 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 894:
#line 2059 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 895:
#line 2060 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 896:
#line 2061 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 897:
#line 2063 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 898:
#line 2064 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 899:
#line 2065 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 900:
#line 2066 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 901:
#line 2067 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 902:
#line 2069 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 903:
#line 2070 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 904:
#line 2071 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 905:
#line 2072 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 906:
#line 2073 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 907:
#line 2074 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 908:
#line 2077 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 909:
#line 2078 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 910:
#line 2079 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 911:
#line 2080 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 912:
#line 2081 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 913:
#line 2082 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 914:
#line 2083 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 915:
#line 2084 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 916:
#line 2085 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 917:
#line 2086 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 918:
#line 2087 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 919:
#line 2088 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 920:
#line 2089 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 921:
#line 2090 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 922:
#line 2091 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 923:
#line 2092 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 924:
#line 2093 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 925:
#line 2094 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 926:
#line 2095 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 927:
#line 2096 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 928:
#line 2097 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 929:
#line 2100 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 930:
#line 2101 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 931:
#line 2102 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 932:
#line 2103 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 933:
#line 2104 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 934:
#line 2106 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 935:
#line 2116 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 936:
#line 2124 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 937:
#line 2133 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 938:
#line 2141 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 939:
#line 2148 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 940:
#line 2155 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 941:
#line 2163 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 942:
#line 2171 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 943:
#line 2176 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 944:
#line 2181 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 945:
#line 2186 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 946:
#line 2191 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 947:
#line 2196 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 948:
#line 2201 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 949:
#line 2206 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 950:
#line 2215 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 951:
#line 2225 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 952:
#line 2235 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 953:
#line 2244 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 954:
#line 2252 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 955:
#line 2262 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 956:
#line 2272 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 957:
#line 2282 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 958:
#line 2294 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 959:
#line 2303 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 961:
#line 2311 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 962:
#line 2313 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 963:
#line 2315 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 964:
#line 2320 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 965:
#line 2323 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 966:
#line 2324 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 967:
#line 2325 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 968:
#line 2332 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 969:
#line 2334 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 970:
#line 2335 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 971:
#line 2338 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 972:
#line 2339 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 973:
#line 2340 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 974:
#line 2341 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 975:
#line 2342 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 976:
#line 2343 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 977:
#line 2344 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 979:
#line 2348 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 980:
#line 2349 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 981:
#line 2350 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 982:
#line 2351 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 983:
#line 2352 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 984:
#line 2355 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 985:
#line 2357 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 986:
#line 2359 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 987:
#line 2361 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 988:
#line 2363 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 989:
#line 2365 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 990:
#line 2367 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 991:
#line 2368 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 992:
#line 2369 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 993:
#line 2371 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 994:
#line 2373 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 995:
#line 2376 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 996:
#line 2378 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 997:
#line 2379 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 998:
#line 2380 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 999:
#line 2382 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1000:
#line 2384 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1001:
#line 2387 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1002:
#line 2390 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1003:
#line 2391 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1004:
#line 2392 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1005:
#line 2393 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1006:
#line 2395 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1007:
#line 2396 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1008:
#line 2397 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1009:
#line 2398 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1010:
#line 2399 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1011:
#line 2401 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1012:
#line 2403 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1013:
#line 2405 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1014:
#line 2407 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1015:
#line 2409 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1016:
#line 2410 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1017:
#line 2412 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1018:
#line 2414 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1019:
#line 2416 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1020:
#line 2417 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1021:
#line 2418 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1022:
#line 2420 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1023:
#line 2422 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1024:
#line 2425 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1025:
#line 2428 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1026:
#line 2429 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1027:
#line 2431 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1028:
#line 2434 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1029:
#line 2437 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1030:
#line 2438 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1031:
#line 2439 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1032:
#line 2440 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1033:
#line 2442 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1034:
#line 2444 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1035:
#line 2446 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1036:
#line 2447 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1037:
#line 2449 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1038:
#line 2450 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1039:
#line 2451 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1040:
#line 2452 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1041:
#line 2453 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1042:
#line 2455 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1043:
#line 2457 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1044:
#line 2459 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1045:
#line 2461 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1047:
#line 2463 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1048:
#line 2464 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1049:
#line 2466 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1050:
#line 2468 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1051:
#line 2469 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1052:
#line 2470 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1054:
#line 2472 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1056:
#line 2476 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1057:
#line 2477 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1058:
#line 2478 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1059:
#line 2479 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1060:
#line 2480 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1061:
#line 2481 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1062:
#line 2483 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1063:
#line 2484 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1064:
#line 2486 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1065:
#line 2489 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1066:
#line 2490 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1067:
#line 2491 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1068:
#line 2492 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1069:
#line 2495 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1070:
#line 2496 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1071:
#line 2499 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1072:
#line 2500 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1073:
#line 2503 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1074:
#line 2504 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1075:
#line 2507 "frame/parser.Y"
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

  case 1076:
#line 2520 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1077:
#line 2521 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1078:
#line 2525 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1079:
#line 2526 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1080:
#line 2530 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1081:
#line 2531 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1082:
#line 2536 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1083:
#line 2540 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1084:
#line 2545 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1085:
#line 2547 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1086:
#line 2550 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1087:
#line 2552 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1088:
#line 2555 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1089:
#line 2557 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1090:
#line 2560 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1091:
#line 2561 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1092:
#line 2562 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1093:
#line 2563 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1094:
#line 2564 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1095:
#line 2565 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1096:
#line 2567 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1099:
#line 2574 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1100:
#line 2575 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1101:
#line 2576 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1102:
#line 2577 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1103:
#line 2578 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1104:
#line 2579 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1107:
#line 2584 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1108:
#line 2585 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1109:
#line 2586 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1110:
#line 2587 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1111:
#line 2588 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1112:
#line 2589 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1113:
#line 2590 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1114:
#line 2591 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1115:
#line 2592 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1116:
#line 2593 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1117:
#line 2594 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1118:
#line 2595 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1121:
#line 2602 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1122:
#line 2603 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1124:
#line 2607 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1125:
#line 2609 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1126:
#line 2610 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1127:
#line 2613 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1128:
#line 2614 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1129:
#line 2615 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1130:
#line 2616 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1131:
#line 2617 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1132:
#line 2618 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1133:
#line 2621 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1134:
#line 2622 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1137:
#line 2630 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1138:
#line 2633 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1139:
#line 2634 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1143:
#line 2641 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1144:
#line 2644 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1145:
#line 2648 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1146:
#line 2649 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1147:
#line 2650 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1148:
#line 2651 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1149:
#line 2652 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1150:
#line 2653 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1151:
#line 2654 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1152:
#line 2655 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1153:
#line 2661 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1154:
#line 2662 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1155:
#line 2663 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1156:
#line 2664 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1157:
#line 2668 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1158:
#line 2669 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1159:
#line 2671 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1160:
#line 2676 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1162:
#line 2678 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1164:
#line 2680 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1165:
#line 2683 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1166:
#line 2685 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1167:
#line 2690 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1168:
#line 2693 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1169:
#line 2694 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1170:
#line 2695 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1171:
#line 2698 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1172:
#line 2700 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1173:
#line 2704 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1174:
#line 2705 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1175:
#line 2709 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1176:
#line 2710 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1177:
#line 2711 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1178:
#line 2712 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1179:
#line 2718 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1180:
#line 2719 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1181:
#line 2725 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1182:
#line 2726 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1183:
#line 2727 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1184:
#line 2728 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1187:
#line 2736 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1188:
#line 2738 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1189:
#line 2739 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1190:
#line 2740 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1191:
#line 2744 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1192:
#line 2745 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1193:
#line 2746 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1194:
#line 2747 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1195:
#line 2750 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1196:
#line 2751 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1197:
#line 2754 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1198:
#line 2755 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1199:
#line 2756 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1200:
#line 2759 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1201:
#line 2760 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1202:
#line 2761 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
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

  case 1220:
#line 2793 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1221:
#line 2795 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1222:
#line 2797 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1232:
#line 2810 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1233:
#line 2811 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1234:
#line 2812 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1235:
#line 2815 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1236:
#line 2816 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1237:
#line 2817 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1238:
#line 2820 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1239:
#line 2821 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1240:
#line 2822 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1241:
#line 2825 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1242:
#line 2826 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1243:
#line 2827 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1245:
#line 2831 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1246:
#line 2832 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1247:
#line 2833 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1248:
#line 2836 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1249:
#line 2837 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1250:
#line 2838 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1251:
#line 2841 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1252:
#line 2842 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1253:
#line 2843 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1254:
#line 2846 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1255:
#line 2847 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1256:
#line 2848 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1257:
#line 2851 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1258:
#line 2852 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1259:
#line 2853 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1260:
#line 2857 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1261:
#line 2859 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1262:
#line 2861 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1263:
#line 2865 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1264:
#line 2869 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1265:
#line 2871 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1266:
#line 2875 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1267:
#line 2878 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1268:
#line 2879 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1269:
#line 2880 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1270:
#line 2881 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1271:
#line 2884 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1272:
#line 2886 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1273:
#line 2888 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1274:
#line 2891 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1276:
#line 2895 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1277:
#line 2896 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1278:
#line 2897 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1279:
#line 2900 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1280:
#line 2901 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1281:
#line 2905 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1283:
#line 2907 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1286:
#line 2912 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1287:
#line 2913 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1288:
#line 2914 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1289:
#line 2917 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1290:
#line 2918 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1291:
#line 2919 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1292:
#line 2922 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1293:
#line 2924 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1294:
#line 2929 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1295:
#line 2930 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1296:
#line 2933 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1297:
#line 2940 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1298:
#line 2942 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1299:
#line 2944 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1300:
#line 2949 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1302:
#line 2953 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1303:
#line 2954 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1304:
#line 2955 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1305:
#line 2957 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1306:
#line 2959 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1307:
#line 2964 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11164 "frame/parser.C"
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


#line 2968 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

