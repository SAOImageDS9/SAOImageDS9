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
     PIXMASK_ = 614,
     ZOOM_ = 615
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
#define PIXMASK_ 614
#define ZOOM_ 615




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
#line 877 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 890 "frame/parser.C"

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
#define YYFINAL  378
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5828

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  365
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  234
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1339
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2965

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   615

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
       2,   364,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   362,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   363,   361,
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
     355,   356,   357,   358,   359,   360
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
    2703,  2709,  2715,  2722,  2728,  2733,  2738,  2748,  2759,  2771,
    2781,  2788,  2795,  2802,  2809,  2816,  2823,  2830,  2837,  2844,
    2852,  2860,  2863,  2868,  2873,  2878,  2883,  2889,  2894,  2899,
    2905,  2911,  2915,  2920,  2925,  2930,  2938,  2948,  2955,  2966,
    2978,  2991,  3001,  3005,  3008,  3012,  3018,  3026,  3031,  3035,
    3039,  3046,  3054,  3062,  3067,  3072,  3082,  3087,  3091,  3096,
    3104,  3112,  3115,  3119,  3123,  3127,  3132,  3135,  3138,  3143,
    3154,  3158,  3160,  3164,  3167,  3170,  3173,  3176,  3180,  3186,
    3191,  3197,  3200,  3203,  3206,  3209,  3213,  3216,  3219,  3222,
    3226,  3229,  3233,  3238,  3242,  3246,  3253,  3258,  3261,  3265,
    3268,  3271,  3276,  3280,  3284,  3287,  3291,  3293,  3296,  3298,
    3301,  3304,  3307,  3309,  3311,  3313,  3315,  3318,  3320,  3323,
    3326,  3328,  3331,  3334,  3336,  3339,  3341,  3343,  3345,  3347,
    3349,  3351,  3353,  3355,  3356,  3358,  3361,  3364,  3367,  3371,
    3377,  3385,  3393,  3400,  3407,  3414,  3421,  3427,  3434,  3441,
    3448,  3455,  3462,  3469,  3476,  3488,  3496,  3504,  3512,  3522,
    3532,  3543,  3556,  3569,  3573,  3576,  3577,  3579,  3583,  3588,
    3593,  3598,  3599,  3601,  3603,  3608,  3613,  3615,  3617,  3619,
    3621,  3623,  3625,  3627,  3629,  3632,  3634,  3636,  3638,  3642,
    3646,  3655,  3662,  3673,  3681,  3689,  3695,  3698,  3701,  3705,
    3710,  3716,  3722,  3728,  3732,  3737,  3743,  3749,  3755,  3761,
    3764,  3768,  3772,  3778,  3782,  3786,  3790,  3794,  3799,  3805,
    3811,  3817,  3823,  3827,  3832,  3838,  3844,  3847,  3850,  3854,
    3860,  3867,  3874,  3878,  3882,  3889,  3895,  3901,  3904,  3908,
    3912,  3918,  3925,  3929,  3932,  3935,  3939,  3942,  3946,  3949,
    3953,  3959,  3966,  3969,  3972,  3975,  3977,  3982,  3987,  3989,
    3992,  3995,  3998,  4001,  4004,  4007,  4010,  4014,  4017,  4021,
    4024,  4028,  4030,  4032,  4034,  4036,  4038,  4039,  4042,  4043,
    4046,  4047,  4049,  4050,  4051,  4053,  4055,  4057,  4059,  4061,
    4069,  4078,  4081,  4088,  4091,  4098,  4101,  4105,  4108,  4110,
    4112,  4116,  4120,  4122,  4127,  4130,  4132,  4136,  4140,  4145,
    4149,  4153,  4157,  4159,  4161,  4163,  4165,  4167,  4169,  4171,
    4173,  4175,  4177,  4179,  4181,  4183,  4185,  4187,  4190,  4191,
    4192,  4195,  4202,  4210,  4213,  4215,  4219,  4221,  4225,  4227,
    4229,  4231,  4234,  4237,  4239,  4243,  4244,  4245,  4248,  4251,
    4253,  4257,  4263,  4265,  4268,  4271,  4275,  4278,  4281,  4284,
    4287,  4289,  4291,  4293,  4295,  4300,  4303,  4307,  4311,  4314,
    4318,  4321,  4324,  4327,  4331,  4335,  4339,  4342,  4346,  4348,
    4352,  4356,  4358,  4361,  4364,  4367,  4370,  4380,  4387,  4389,
    4391,  4393,  4395,  4398,  4401,  4405,  4409,  4411,  4414,  4418,
    4422,  4424,  4427,  4429,  4431,  4433,  4435,  4437,  4440,  4443,
    4448,  4451,  4454,  4459,  4462,  4465,  4468,  4473,  4475,  4478,
    4481,  4484,  4488,  4490,  4492,  4494,  4497,  4500,  4503,  4506,
    4509,  4512,  4515,  4518,  4521,  4525,  4529,  4533,  4537,  4541,
    4545,  4547,  4550,  4553,  4556,  4560,  4563,  4567,  4571,  4575,
    4579,  4583,  4587,  4590,  4593,  4596,  4599,  4602,  4605,  4608,
    4611,  4614,  4617,  4620,  4623,  4626,  4629,  4633,  4637,  4641,
    4644,  4647,  4650,  4654,  4658,  4662,  4665,  4668,  4671,  4674,
    4677,  4680,  4684,  4688,  4692,  4695,  4698,  4701,  4704,  4707,
    4710,  4714,  4718,  4722,  4725,  4728,  4731,  4734,  4737,  4740,
    4743,  4746,  4749,  4753,  4757,  4761,  4766,  4773,  4776,  4778,
    4780,  4782,  4784,  4786,  4787,  4793,  4795,  4802,  4806,  4808,
    4811,  4814,  4817,  4821,  4825,  4828,  4831,  4834,  4837,  4840,
    4843,  4847,  4850,  4853,  4857,  4859,  4863,  4868,  4871,  4873,
    4876,  4882,  4889,  4896,  4899,  4901,  4904,  4907,  4913,  4920
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     366,     0,    -1,    97,   368,    -1,    43,   400,    -1,    40,
      66,     5,    -1,    40,    66,   369,    -1,    46,   405,    -1,
      59,    -1,    64,    -1,    65,   407,    -1,    67,   295,     5,
      -1,    68,   412,    -1,    69,   414,    -1,    77,   415,    -1,
      84,   424,    -1,    86,   426,    -1,    87,   427,    -1,    96,
     369,    -1,   119,   429,    -1,   128,   430,    -1,   141,   431,
      -1,   145,   477,    -1,   148,   480,    -1,   152,    -1,   153,
     369,    -1,   153,    66,     5,    -1,   157,   562,    -1,   158,
     561,    -1,   161,   486,    -1,   167,    15,     4,    -1,   182,
     489,    -1,   185,   507,    -1,   186,   508,    -1,   187,   509,
      -1,   190,   526,   510,    -1,   191,   546,    -1,   205,    66,
       5,    -1,   222,   547,    -1,   223,   548,    -1,   224,   551,
      -1,   245,    88,    -1,   238,   553,    -1,   236,   552,    -1,
     253,    -1,   249,   526,   555,    -1,   255,   560,    -1,   257,
     563,    -1,   262,   565,    -1,   276,    -1,   282,   587,    -1,
     298,     4,    -1,   299,   395,    -1,   310,    -1,   312,   589,
      -1,   318,    -1,   321,   591,    -1,   322,   592,    -1,   352,
     596,    -1,   360,   597,    -1,     3,    -1,     4,    -1,   369,
      -1,   200,   369,    -1,   225,   369,    -1,   227,   369,    -1,
     322,   369,    -1,    43,   369,    -1,    46,   369,    -1,    76,
     369,    -1,    84,   369,    -1,   146,   369,    -1,   255,   369,
      -1,     4,    -1,   355,    -1,   361,    -1,   219,    -1,   306,
      -1,   210,    -1,   362,    -1,   218,    -1,   121,    -1,    -1,
     256,    37,    -1,   137,    37,    -1,   256,    -1,   137,    -1,
      -1,   372,    -1,   367,    -1,     6,    -1,     7,    -1,     8,
      -1,     9,    -1,    10,    -1,   373,   373,    -1,   374,   375,
      -1,   375,   375,    -1,   367,   367,    -1,   162,    -1,   229,
      -1,   102,    -1,    18,    -1,   378,    -1,   322,    -1,   323,
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
     103,    -1,    85,    -1,   363,    -1,    26,    -1,    51,    -1,
      -1,     4,    -1,    82,    -1,   155,    -1,   231,    -1,   232,
      -1,   246,    -1,   289,    -1,    -1,    31,    -1,   291,    -1,
     192,    -1,    -1,   206,    -1,    41,    -1,    42,    -1,   177,
      -1,   178,    -1,   316,   399,    -1,    47,   396,    -1,    74,
     397,    -1,   153,   398,    -1,   194,   558,    -1,    36,   559,
      -1,   263,   367,    -1,   292,     4,    -1,   300,   367,    -1,
     369,    -1,    66,     5,    -1,   369,    -1,    66,     5,    -1,
     369,    -1,    66,     5,    -1,   367,   367,    -1,   233,   367,
     367,   367,   367,   367,    -1,    11,   401,    -1,    71,     5,
       5,     5,    -1,   101,     4,    -1,   120,   402,    -1,   138,
     403,    -1,    53,   279,     4,    -1,   303,   404,    -1,   124,
       5,    -1,    59,    -1,   367,   367,    -1,   367,    -1,   367,
     367,    -1,   367,    11,   367,   367,    -1,   367,   367,    11,
     367,   367,    -1,   303,   367,    -1,   303,   367,   367,    -1,
     303,   367,    11,   367,   367,    -1,   303,   367,   367,    11,
     367,   367,    -1,    31,    -1,   291,    -1,   126,    -1,   367,
     367,    11,    59,     5,     5,     5,    -1,   367,   367,     4,
     367,   367,    11,    59,     5,     5,     5,     5,    -1,   367,
     367,    11,   367,   367,     5,     5,     5,    -1,   367,   367,
       4,   367,   367,    11,   367,   367,     5,     5,     5,     5,
      -1,   367,    -1,   367,   367,    -1,   303,   406,    -1,   126,
      -1,   367,    -1,   367,   367,    -1,   266,   408,    -1,   201,
     409,    -1,   195,   410,    -1,   313,   367,   367,    -1,   313,
     205,   205,    -1,   358,   411,    -1,   240,   369,    -1,   142,
      -1,   183,    -1,   367,    -1,   195,    -1,   358,    -1,   357,
      -1,   313,    -1,     4,   383,    -1,   201,   383,    -1,   259,
       4,    -1,   252,    -1,   367,     4,     4,    -1,    78,   367,
      -1,   259,     4,    -1,   179,     4,    -1,     4,   367,   367,
       4,     4,    -1,   255,   367,   367,   367,   367,   367,   367,
       4,     4,    -1,   157,   367,   367,   367,   367,   367,   367,
       4,     4,    -1,   158,   367,   367,   367,   367,   367,   367,
       4,     4,    -1,    39,    -1,   202,   413,    -1,   112,    -1,
       4,   367,   367,     4,     4,    -1,   255,   367,   367,   367,
     367,   367,   367,     4,     4,    -1,   157,   367,   367,   367,
     367,   367,   367,     4,     4,    -1,   158,   367,   367,   367,
     367,   367,   367,     4,     4,    -1,   382,    -1,   184,   367,
      -1,    83,   416,    -1,   100,   417,    -1,   182,   418,    -1,
     226,   422,    -1,   262,   423,    -1,     5,     4,     4,   421,
       4,     4,   382,   367,   419,   420,   367,   367,     5,    -1,
       5,     4,     4,   421,     4,     4,   382,   367,   367,   420,
     367,   367,     5,    -1,     5,     4,     4,   421,     4,     4,
     382,   367,   419,   367,   367,     5,    -1,     5,     4,     4,
     421,     4,     4,   382,   367,   367,   367,   367,     5,    -1,
     235,    -1,    -1,    30,    -1,     5,    -1,     5,     5,     4,
     369,    -1,     5,     4,   369,     5,   377,   384,    -1,   195,
      -1,   358,    -1,   357,    -1,   313,    -1,   142,    -1,   183,
      -1,   282,    -1,    46,    -1,     5,    -1,     5,     5,     4,
     369,    -1,     5,   377,   384,    -1,    30,     5,   377,   384,
      -1,    -1,   367,   367,   367,   367,   377,   384,    -1,    59,
     376,   377,   384,   367,   367,   377,   386,    -1,   299,   425,
      -1,    39,   367,   367,    -1,   202,   367,   367,    -1,   112,
     367,   367,    -1,    -1,   367,   367,   377,   384,    -1,    39,
     367,   367,     4,    -1,   202,   367,   367,     4,    -1,   112,
     367,   367,     4,    -1,   379,   367,   367,    -1,   377,   384,
     376,    -1,   369,    -1,   321,   367,   367,    -1,    39,   202,
     379,   367,   367,    -1,   202,   379,   367,   367,    -1,    39,
     202,   377,   376,    -1,   202,   377,   376,    -1,    32,     4,
      -1,    -1,    31,    -1,   291,    -1,   192,    -1,   367,    -1,
      64,    -1,   148,   118,     5,    -1,    -1,    40,    66,    -1,
      43,   434,    -1,    46,   436,    -1,    65,   437,    -1,    68,
     441,    -1,    67,   440,    -1,    69,   443,    -1,    77,   445,
      -1,    79,   448,    -1,    84,   449,    -1,    86,   450,    -1,
      88,   452,    -1,    87,   451,    -1,    94,   453,    -1,    96,
      -1,   127,   457,    -1,   145,   463,    -1,   153,    66,    -1,
     155,     5,     5,     4,    -1,   156,    89,   432,    -1,   157,
     468,    -1,   158,   467,    -1,   161,   455,    -1,   165,   454,
      -1,   167,    15,    -1,   195,    -1,   190,   526,   520,    -1,
     191,   464,    -1,   205,    66,    -1,   222,    -1,   223,   465,
      -1,   230,   294,   379,   367,   367,     4,     4,     5,    -1,
     255,   466,    -1,   257,    -1,   282,   469,    -1,   298,    -1,
     299,   470,    -1,   307,    -1,   314,   379,   367,   367,    -1,
     320,    89,   433,    -1,   322,   475,    -1,   360,    -1,     5,
       5,   367,   367,   379,     4,   428,    -1,     5,     5,   367,
     367,   377,   384,     4,   428,    -1,     5,     5,   367,   367,
     379,     4,   428,    -1,     5,     5,   367,   367,   377,   384,
       4,   428,    -1,   101,    -1,   120,    -1,   138,    -1,    53,
     279,    -1,    88,    -1,   124,    -1,    71,   435,    -1,   181,
      -1,    -1,   195,     5,    -1,   104,     5,    -1,   120,    -1,
      -1,   419,   420,    -1,   367,   420,    -1,   266,    -1,   201,
      -1,   195,   438,    -1,   313,   175,    -1,   358,   439,    -1,
     240,    -1,   201,    -1,   259,    -1,    78,    -1,   259,    -1,
     179,    -1,    -1,   295,    -1,   175,   442,    -1,     4,    -1,
       4,   379,   367,   367,    -1,     4,   367,   367,   382,   367,
      -1,    -1,   175,   444,    -1,   184,    -1,     4,   367,   367,
     382,   367,    -1,   377,   384,    -1,    65,   446,    -1,    66,
      -1,    92,    -1,   175,    -1,   216,   175,    -1,   194,    -1,
      69,   447,    -1,   282,    -1,   351,    -1,    -1,   201,    -1,
     266,    -1,    -1,   184,    -1,   367,   367,   377,   384,   385,
      -1,   379,   367,   367,   377,   384,   385,    -1,   377,   384,
     385,    -1,    59,   377,   384,   385,   377,   386,    -1,   299,
     377,   384,    -1,   379,    -1,   377,   384,   385,    -1,   290,
      -1,    32,    -1,   379,    -1,   377,   384,   385,    -1,   377,
     384,   376,   367,   367,     5,    -1,     4,   377,   384,   376,
     367,   367,     5,    -1,   379,   367,   367,     4,     4,    -1,
       5,   370,    -1,    65,    -1,   379,   367,   367,     5,   370,
      -1,     4,     4,     4,     4,    -1,    88,    -1,   122,   204,
     456,    -1,    -1,     4,    -1,   367,   367,    -1,   207,    -1,
      59,   377,   384,   385,    -1,    81,    -1,   101,   460,    -1,
      44,    -1,   118,   458,    -1,   122,   204,   461,    -1,   150,
     459,    -1,   151,    -1,   217,   204,    -1,   279,    -1,   279,
     377,   384,   386,    -1,   280,   462,    -1,   351,    -1,     4,
      -1,   379,   367,   367,    -1,     4,    -1,   171,     5,    -1,
       4,   171,     5,    -1,   322,     4,    -1,    -1,     4,    -1,
     370,    -1,   370,   379,   367,   367,    -1,   370,     4,    -1,
      -1,     4,    -1,   135,   162,   377,    -1,   135,   162,     4,
     377,    -1,   303,   162,   367,   377,    -1,    -1,   221,    -1,
     315,    -1,    66,    -1,   189,    -1,   248,    -1,   293,    -1,
     302,    -1,    81,    -1,    45,    -1,   240,    -1,    61,    -1,
     293,    -1,   316,    -1,    61,    -1,   293,    -1,   316,    -1,
      61,    -1,   293,    -1,   316,    -1,   138,    -1,   247,    -1,
     247,   196,    -1,   277,    -1,   277,   196,    -1,    20,    -1,
     316,   474,    -1,    47,   471,    -1,    74,   472,    -1,   153,
     473,    -1,   194,    -1,    36,    -1,   263,    -1,    -1,    66,
      -1,    -1,    66,    -1,    -1,    66,    -1,    -1,   233,    -1,
      -1,    15,   476,    -1,   204,   378,    -1,    -1,   234,    -1,
      83,   478,    -1,   100,    -1,   377,   384,   385,   479,     5,
       5,    -1,   377,   384,   385,   479,     5,    -1,    19,    -1,
     243,    -1,    18,    -1,    40,    66,    -1,    43,   481,    -1,
      77,   482,    -1,    84,    -1,    95,    -1,    96,    -1,   102,
      -1,   127,   483,    -1,   145,    -1,   161,    -1,   168,    -1,
     190,   484,    -1,   229,    -1,   162,    -1,   282,    -1,   293,
     377,    -1,   322,   485,    -1,    72,     5,    -1,    -1,    30,
      -1,    -1,    43,    -1,    87,    -1,   200,    -1,   153,    -1,
     269,    -1,   226,    -1,   308,    -1,   377,    -1,    58,   377,
      -1,   116,   377,    -1,   180,   377,    -1,    17,    -1,   299,
     377,    -1,   208,     4,     4,    -1,   117,    -1,   193,     5,
      -1,    88,   488,    -1,   270,   122,   204,   487,    -1,   270,
       4,     4,     4,     4,    -1,   312,    -1,   322,   367,   367,
     367,   367,   367,   367,   367,   367,     4,    -1,     5,    -1,
       5,     4,    -1,     4,     4,    56,    -1,     4,     4,   377,
      -1,   201,   369,    -1,    25,   490,    -1,   113,   492,    -1,
     127,   493,    -1,   164,   506,    -1,   215,   504,    -1,   228,
     505,    -1,     5,    13,     5,   389,    -1,     5,    14,     5,
     389,    -1,     5,    61,     5,   389,    -1,     5,   198,   389,
      -1,     5,   199,   389,    -1,     5,   273,   387,     4,   389,
      -1,     5,   283,     4,   389,    -1,     5,   284,     4,   389,
      -1,     5,   315,     5,   389,    -1,   255,    87,   491,    -1,
     158,    87,   491,    -1,   157,    87,   491,    -1,     5,    13,
       5,    -1,     5,    14,     5,    -1,     5,    61,     5,    -1,
       5,   198,    -1,     5,   199,    -1,     5,   273,   387,     4,
      -1,     5,   283,     4,    -1,     5,   284,     4,    -1,     5,
     315,     5,    -1,     5,     5,   281,    -1,     5,    13,     5,
     389,    -1,     5,    14,     5,   389,    -1,     5,    61,     5,
     389,    -1,     5,   198,   388,   389,    -1,     5,     5,   281,
     388,   389,    -1,     5,   199,   388,   389,    -1,     5,   273,
     387,     4,   388,   389,    -1,     5,   288,   387,     4,     4,
     388,   389,    -1,     5,   283,     4,   389,    -1,     5,   284,
       4,   389,    -1,     5,   315,     5,   388,   389,    -1,   280,
     494,    -1,   118,    87,   495,    -1,   255,   162,   503,    -1,
     255,    87,   502,    -1,   158,   162,   503,    -1,   158,    87,
     502,    -1,   157,   162,   503,    -1,   157,    87,   502,    -1,
     200,   496,    -1,     5,    13,     5,    -1,     5,    14,     5,
      -1,     5,    61,     5,    -1,     5,   198,   388,    -1,     5,
       5,   281,   388,    -1,     5,   199,   388,    -1,     5,   273,
     387,     4,   388,    -1,     5,   288,   387,     4,     4,   388,
      -1,     5,   283,     4,    -1,     5,   284,     4,    -1,     5,
     315,     5,   388,    -1,     5,    13,     5,    -1,     5,    14,
       5,    -1,     5,    61,     5,    -1,     5,   198,   388,    -1,
       5,   199,   388,    -1,     5,   273,   387,     4,   388,    -1,
       5,   283,     4,    -1,     5,   284,     4,    -1,     5,   315,
       5,   388,    -1,   162,   167,   497,    -1,   167,   498,    -1,
     162,   499,    -1,   501,    -1,   162,   350,   500,    -1,     5,
      13,     5,   389,    -1,     5,    14,     5,   389,    -1,     5,
      61,     5,   389,    -1,     5,   198,   388,   389,    -1,     5,
     199,   388,   389,    -1,     5,   273,   387,     4,   388,   389,
      -1,     5,   283,     4,   389,    -1,     5,   284,     4,   389,
      -1,     5,   315,     5,   388,   389,    -1,     5,    13,     5,
     389,    -1,     5,    14,     5,   389,    -1,     5,    61,     5,
     389,    -1,     5,   198,   388,   389,    -1,     5,     5,   281,
     388,   389,    -1,     5,   199,   388,   389,    -1,     5,   273,
     387,     4,   388,   389,    -1,     5,   288,   387,     4,     4,
     388,   389,    -1,     5,   283,     4,   389,    -1,     5,   284,
       4,   389,    -1,     5,   315,     5,   388,   389,    -1,   378,
       5,    13,     5,   389,    -1,   378,     5,    14,     5,   389,
      -1,   378,     5,    61,     5,   389,    -1,   378,     5,   198,
     388,   389,    -1,   378,     5,   199,   388,   389,    -1,   378,
       5,   273,   387,     4,   388,   389,    -1,   378,     5,   283,
       4,   389,    -1,   378,     5,   284,     4,   389,    -1,   378,
       5,   315,     5,   388,   389,    -1,     5,    13,     5,   389,
      -1,     5,    14,     5,   389,    -1,     5,    61,     5,   389,
      -1,     5,   198,   388,   389,    -1,     5,   199,   388,   389,
      -1,     5,   273,   387,     4,   388,   389,    -1,     5,   283,
       4,   389,    -1,     5,   284,     4,   389,    -1,     5,   315,
       5,   388,   389,    -1,   378,     5,    13,     5,   389,    -1,
     378,     5,    14,     5,   389,    -1,   378,     5,    61,     5,
     389,    -1,   378,     5,   198,   388,   389,    -1,   378,     5,
       5,   281,   388,   389,    -1,   378,     5,   199,   388,   389,
      -1,   378,     5,   273,   387,     4,   388,   389,    -1,   378,
       5,   288,   387,     4,     4,   388,   389,    -1,   378,     5,
     283,     4,   389,    -1,   378,     5,   284,     4,   389,    -1,
     378,     5,   315,     5,   388,   389,    -1,     5,    13,     5,
      -1,     5,    14,     5,    -1,     5,    61,     5,    -1,     5,
     198,   388,    -1,     5,     5,   281,   388,    -1,     5,   199,
     388,    -1,     5,   273,   387,     4,   388,    -1,     5,   288,
     387,     4,     4,   388,    -1,     5,   283,     4,    -1,     5,
     284,     4,    -1,     5,   315,     5,   388,    -1,     5,    13,
       5,    -1,     5,    14,     5,    -1,     5,    61,     5,    -1,
       5,   198,   388,    -1,     5,   199,   388,    -1,     5,   273,
     387,     4,   388,    -1,     5,   283,     4,    -1,     5,   284,
       4,    -1,     5,   315,     5,   388,    -1,     5,    13,     5,
     389,    -1,     5,    61,     5,   389,    -1,     5,   198,   389,
      -1,     5,   273,   387,     4,   389,    -1,     5,   283,     4,
     389,    -1,     5,   315,     5,   389,    -1,     5,     5,    -1,
     280,     5,     5,    -1,    94,     4,     4,     4,     4,     4,
      -1,   195,     4,     4,     4,     4,     4,    -1,   112,    -1,
     239,    -1,   369,    -1,   143,   369,    -1,    88,   369,    -1,
      66,     5,    -1,     5,     4,     4,    -1,   312,   367,   367,
      -1,   360,   367,    -1,     5,     5,   378,   384,     5,     5,
     378,   384,   367,   378,   386,     5,    -1,    60,   513,    -1,
      66,     5,    -1,    80,    -1,    73,   519,     5,    -1,    73,
     519,   315,     5,    -1,    75,   100,    -1,    -1,    83,   511,
     514,    -1,    89,    -1,   100,   517,    -1,   106,   518,    -1,
     115,     4,    -1,   132,     5,    -1,   153,    16,    -1,   153,
     220,   367,   367,    -1,   153,   304,   367,   367,    -1,     4,
      19,   392,   369,    -1,     4,    20,   372,    -1,     4,    20,
     372,   379,    -1,     4,    20,   372,   377,   384,    -1,     4,
      21,   247,   367,   367,     4,   377,   386,    -1,     4,    21,
     247,     5,   377,   386,    -1,     4,    49,   247,   367,   367,
     367,     4,   377,   386,    -1,     4,    49,   247,     5,   377,
     386,    -1,     4,    48,   247,   367,   367,   377,   386,    -1,
       4,    52,   106,   372,   372,     4,   367,   367,   367,     4,
      -1,     4,    52,   106,   372,   372,     4,   367,   367,   367,
       4,   379,    -1,     4,    52,   106,   372,   372,     4,   367,
     367,   367,     4,   377,   384,    -1,     4,    52,   106,     5,
       5,   377,   384,   377,   386,    -1,     4,    55,   512,     5,
       5,    -1,     4,    62,   247,   367,   377,   386,    -1,     4,
      66,     5,    -1,     4,    74,    26,   369,   369,    -1,     4,
      74,   172,     5,     5,    -1,     4,    74,   247,   367,   377,
     386,    -1,     4,    74,   293,   377,   384,    -1,     4,    75,
     142,   369,    -1,     4,    75,   307,     5,    -1,     4,    82,
     106,   372,   372,     4,   367,   367,     4,    -1,     4,    82,
     106,   372,   372,     4,   367,   367,     4,   379,    -1,     4,
      82,   106,   372,   372,     4,   367,   367,     4,   377,   384,
      -1,     4,    82,   106,     5,     5,   377,   384,   377,   386,
      -1,     4,    83,    21,   247,   367,   367,    -1,     4,    83,
      49,   247,   367,   367,    -1,     4,    83,    52,    20,   367,
     367,    -1,     4,    83,    52,   247,   367,   367,    -1,     4,
      83,   111,   247,   367,   367,    -1,     4,    83,   114,    20,
     367,   367,    -1,     4,    83,   114,   247,   367,   367,    -1,
       4,    83,    82,    20,   367,   367,    -1,     4,    83,    82,
     247,   367,   367,    -1,     4,    83,   235,   319,     4,   367,
     367,    -1,     4,    83,   268,   319,     4,   367,   367,    -1,
       4,   100,    -1,     4,   100,    21,     4,    -1,     4,   100,
      49,     4,    -1,     4,   100,    52,     4,    -1,     4,   100,
     111,     4,    -1,     4,   100,    55,   512,     5,    -1,     4,
     100,   114,     4,    -1,     4,   100,    82,     4,    -1,     4,
     100,   235,   319,     4,    -1,     4,   100,   268,   319,     4,
      -1,     4,   100,   295,    -1,     4,   100,   295,     5,    -1,
       4,   100,   295,     4,    -1,     4,   106,    39,     4,    -1,
       4,   110,   247,   367,   367,   377,   386,    -1,     4,   111,
     247,   367,   367,   367,     4,   377,   386,    -1,     4,   111,
     247,     5,   377,   386,    -1,     4,   114,   106,   372,   372,
       4,   367,   367,   367,     4,    -1,     4,   114,   106,   372,
     372,     4,   367,   367,   367,     4,   379,    -1,     4,   114,
     106,   372,   372,     4,   367,   367,   367,     4,   377,   384,
      -1,     4,   114,   106,     5,     5,   377,   384,   377,   386,
      -1,     4,   132,     5,    -1,     4,   153,    -1,     4,   153,
     220,    -1,     4,   179,    26,   369,   369,    -1,     4,   179,
     233,   377,   384,   376,   376,    -1,     4,   203,   367,   367,
      -1,     4,   203,   136,    -1,     4,   203,    35,    -1,     4,
     203,   303,   377,   384,   376,    -1,     4,   235,   253,   367,
     367,   377,   386,    -1,     4,   268,   253,   367,   367,   377,
     386,    -1,     4,   233,   272,   390,    -1,     4,   233,   279,
       4,    -1,     4,   241,   377,   384,   376,   376,   367,   377,
     386,    -1,     4,   242,   532,   369,    -1,     4,   257,    39,
      -1,     4,   258,   133,     5,    -1,     4,   258,   233,   377,
     384,   376,   376,    -1,     4,   258,   293,   377,   384,   377,
     386,    -1,     4,   269,    -1,     4,   269,   220,    -1,     4,
     295,     5,    -1,     4,   297,     5,    -1,     4,   297,   257,
     369,    -1,     4,   309,    -1,     4,   311,    -1,     4,   317,
      26,   369,    -1,     4,   317,   233,   377,   384,   376,   377,
     386,   367,   372,    -1,     4,   351,     4,    -1,   170,    -1,
     170,   367,   367,    -1,   181,   527,    -1,   182,   528,    -1,
     203,   529,    -1,   240,   369,    -1,   242,   532,   369,    -1,
     242,   532,   369,   367,   367,    -1,   257,    39,   367,   367,
      -1,   257,   202,   367,   367,     4,    -1,   257,   112,    -1,
     262,   536,    -1,   269,   537,    -1,   276,   538,    -1,     5,
      66,     5,    -1,     5,    80,    -1,     5,   100,    -1,     5,
      89,    -1,     5,   132,     5,    -1,     5,   153,    -1,     5,
     153,   220,    -1,     5,   203,   367,   367,    -1,     5,   203,
     136,    -1,     5,   203,    35,    -1,     5,   203,   303,   377,
     384,   376,    -1,     5,   242,   532,   369,    -1,     5,   269,
      -1,     5,   269,   220,    -1,     5,   309,    -1,     5,   311,
      -1,   295,   106,     5,     5,    -1,   295,   100,     5,    -1,
     295,   100,    16,    -1,   295,     5,    -1,   295,   312,     5,
      -1,   226,    -1,   226,   377,    -1,   308,    -1,   309,    16,
      -1,   311,    16,    -1,   351,     4,    -1,   269,    -1,   311,
      -1,   153,    -1,   309,    -1,    39,   203,    -1,   203,    -1,
     112,   203,    -1,    39,   106,    -1,   106,    -1,   112,   106,
      -1,    39,   257,    -1,   257,    -1,   112,   257,    -1,   100,
      -1,   297,    -1,    66,    -1,   351,    -1,   242,    -1,   132,
      -1,   170,    -1,   312,    -1,    -1,     4,    -1,    29,   369,
      -1,   247,   367,    -1,   166,     4,    -1,   221,     4,   367,
      -1,    62,   367,   367,   367,   533,    -1,   110,   367,   367,
     367,   367,   371,   533,    -1,    48,   367,   367,   367,   367,
     371,   533,    -1,   235,   367,   367,   367,   367,   533,    -1,
     268,   367,   367,   367,   367,   533,    -1,   179,   367,   367,
     367,   367,   533,    -1,   317,   367,   367,   367,   367,   533,
      -1,   297,   367,   367,   371,   533,    -1,    62,   233,   367,
     367,   391,   533,    -1,    48,   233,   367,   367,   391,   533,
      -1,   103,   233,   367,   367,   391,   533,    -1,    85,   233,
     367,   367,   391,   533,    -1,   363,   233,   367,   367,   391,
     533,    -1,    26,   233,   367,   367,   391,   533,    -1,    51,
     233,   367,   367,   391,   533,    -1,   258,   367,   367,   367,
     367,   377,   384,   377,   386,     5,   533,    -1,    74,   367,
     367,   367,   377,   384,   533,    -1,   241,   367,   367,   367,
     367,   367,   533,    -1,    21,   367,   367,   367,   367,     4,
     533,    -1,   111,   367,   367,   367,   367,   367,     4,   371,
     533,    -1,    49,   367,   367,   367,   367,   367,     4,   371,
     533,    -1,    82,   367,   367,   372,   372,     4,   367,   367,
       4,   533,    -1,   114,   367,   367,   372,   372,     4,   367,
     367,   367,     4,   371,   533,    -1,    52,   367,   367,   372,
     372,     4,   367,   367,   367,     4,   371,   533,    -1,    75,
     515,   533,    -1,   296,   516,    -1,    -1,     4,    -1,     5,
     367,   367,    -1,   315,     5,   367,   367,    -1,   367,   367,
     315,     5,    -1,     5,   377,   384,   376,    -1,    -1,   269,
      -1,    16,    -1,    39,   367,   367,     4,    -1,   202,   367,
     367,     4,    -1,   112,    -1,   105,    -1,   353,    -1,    63,
      -1,   261,    -1,   260,    -1,   244,    -1,   354,    -1,    60,
     521,    -1,    66,    -1,   132,    -1,   115,    -1,   147,   367,
     367,    -1,   160,   367,   367,    -1,     4,    19,    82,     5,
       5,     5,   377,     4,    -1,     4,    19,   155,     5,     5,
       4,    -1,     4,    19,   231,     5,     5,     5,     5,   377,
     384,   393,    -1,     4,    19,   232,     5,     5,   377,   393,
      -1,     4,    19,   246,     5,     5,     5,   377,    -1,     4,
      19,   289,   377,   384,    -1,   160,    16,    -1,     4,    20,
      -1,     4,    20,   379,    -1,     4,    20,   377,   384,    -1,
       4,    21,   247,   377,   386,    -1,     4,    49,   247,   377,
     386,    -1,     4,    48,   247,   377,   386,    -1,     4,    52,
      20,    -1,     4,    52,    20,   379,    -1,     4,    52,    20,
     377,   384,    -1,     4,    52,   247,   377,   386,    -1,     4,
      59,   377,   384,   385,    -1,     4,    62,   247,   377,   386,
      -1,     4,    66,    -1,     4,    74,    26,    -1,     4,    74,
     172,    -1,     4,    74,   247,   377,   386,    -1,     4,    74,
     293,    -1,     4,    75,   142,    -1,     4,    75,   307,    -1,
       4,    82,    20,    -1,     4,    82,    20,   379,    -1,     4,
      82,    20,   377,   384,    -1,     4,    82,   247,   377,   386,
      -1,     4,   110,   247,   377,   386,    -1,     4,   111,   247,
     377,   386,    -1,     4,   114,    20,    -1,     4,   114,    20,
     379,    -1,     4,   114,    20,   377,   384,    -1,     4,   114,
     247,   377,   386,    -1,     4,   132,    -1,     4,   153,    -1,
       4,   179,    26,    -1,     4,   179,   174,   377,   386,    -1,
       4,   179,   233,   377,   384,   385,    -1,     4,   188,   174,
     367,   377,   386,    -1,     4,   233,   272,    -1,     4,   233,
     279,    -1,     4,   241,   233,   377,   384,   385,    -1,     4,
     241,   174,   377,   386,    -1,     4,   241,   301,   377,   386,
      -1,     4,   242,    -1,     4,   242,   532,    -1,     4,   258,
     133,    -1,     4,   258,   174,   377,   386,    -1,     4,   258,
     233,   377,   384,   385,    -1,     4,   258,   293,    -1,     4,
     269,    -1,     4,   295,    -1,     4,   295,     4,    -1,     4,
     297,    -1,     4,   297,   257,    -1,     4,   307,    -1,     4,
     317,    26,    -1,     4,   317,   174,   377,   386,    -1,     4,
     317,   233,   377,   384,   385,    -1,     4,   351,    -1,   153,
     522,    -1,   153,   216,    -1,   216,    -1,   235,   268,   367,
     367,    -1,   268,   268,   367,   367,    -1,   240,    -1,   242,
     532,    -1,   269,   523,    -1,   269,   216,    -1,   276,   524,
      -1,     5,    66,    -1,     5,   132,    -1,     5,   160,    -1,
       5,   242,   532,    -1,     5,   295,    -1,     5,   295,   216,
      -1,   295,    16,    -1,   295,    99,   204,    -1,   351,    -1,
      29,    -1,   247,    -1,   166,    -1,   221,    -1,    -1,   367,
     367,    -1,    -1,   367,   367,    -1,    -1,   297,    -1,    -1,
      -1,   234,    -1,   249,    -1,   313,    -1,    57,    -1,   134,
      -1,   519,   377,   384,   385,   369,   534,   541,    -1,   269,
     519,   377,   384,   385,   369,   534,   541,    -1,   519,     5,
      -1,   519,     5,     4,     5,   377,   384,    -1,   519,     4,
      -1,   519,     4,     4,     5,   377,   384,    -1,   127,     5,
      -1,   127,     5,     5,    -1,   367,   367,    -1,   136,    -1,
      35,    -1,    39,   367,   367,    -1,   202,   367,   367,    -1,
     112,    -1,   303,   377,   384,   376,    -1,   530,   531,    -1,
     531,    -1,   532,   364,   369,    -1,    66,   364,     5,    -1,
      93,   364,     4,     4,    -1,   351,   364,     4,    -1,   132,
     364,     5,    -1,   297,   364,     5,    -1,   544,    -1,   545,
      -1,   211,    -1,   269,    -1,   153,    -1,    92,    -1,   129,
      -1,   106,    -1,   203,    -1,   257,    -1,   100,    -1,   163,
      -1,   285,    -1,   123,    -1,   525,    -1,   525,   530,    -1,
      -1,    -1,   535,   539,    -1,     5,   519,   377,   384,   385,
     369,    -1,   269,     5,   519,   377,   384,   385,   369,    -1,
     296,     5,    -1,    16,    -1,   220,   367,   367,    -1,   304,
      -1,   304,   367,   367,    -1,   125,    -1,   173,    -1,   369,
      -1,   297,   369,    -1,   539,   540,    -1,   540,    -1,   532,
     364,   369,    -1,    -1,    -1,   542,   543,    -1,   543,   544,
      -1,   544,    -1,   295,   364,     5,    -1,    55,   364,   512,
       5,     5,    -1,    64,    -1,    66,     5,    -1,   189,   380,
      -1,   248,   367,   367,    -1,   293,   377,    -1,   302,   367,
      -1,    45,   381,    -1,   189,     4,    -1,   363,    -1,   361,
      -1,   354,    -1,   211,    -1,   367,   367,   367,   367,    -1,
     367,   367,    -1,   379,   367,   367,    -1,   377,   384,   376,
      -1,   303,   549,    -1,    38,   367,   367,    -1,   202,   550,
      -1,   240,   369,    -1,   367,   367,    -1,   379,   367,   367,
      -1,   377,   384,   376,    -1,    39,   367,   367,    -1,   367,
     367,    -1,   112,   367,   367,    -1,   369,    -1,   322,   378,
     384,    -1,     5,     4,     4,    -1,   312,    -1,    70,   554,
      -1,   175,     4,    -1,   254,     4,    -1,   263,   367,    -1,
       4,     4,     4,     4,     4,     4,     4,     4,     4,    -1,
       4,     4,     4,     4,     4,     4,    -1,    54,    -1,   144,
      -1,   255,    -1,    90,    -1,   153,   556,    -1,   269,   557,
      -1,    39,   367,   367,    -1,   202,   367,   367,    -1,   112,
      -1,   274,   112,    -1,    39,   367,   367,    -1,   202,   367,
     367,    -1,   112,    -1,   274,   112,    -1,   197,    -1,    12,
      -1,   211,    -1,    33,    -1,   108,    -1,    61,     5,    -1,
     293,   377,    -1,   316,     4,     4,     4,    -1,    61,     5,
      -1,   293,   377,    -1,   316,     4,     4,     4,    -1,    61,
       5,    -1,    61,   314,    -1,   293,   377,    -1,   316,     4,
       4,     4,    -1,   367,    -1,   367,    98,    -1,   202,   564,
      -1,   303,   367,    -1,   303,   367,    98,    -1,    39,    -1,
     367,    -1,   112,    -1,    25,   567,    -1,   127,   568,    -1,
     359,   566,    -1,   215,   585,    -1,   113,   586,    -1,   228,
       5,    -1,   122,     5,    -1,    61,     5,    -1,   283,     4,
      -1,   122,     5,   394,    -1,    61,     5,   394,    -1,   283,
       4,   394,    -1,   255,    87,   575,    -1,   158,    87,   578,
      -1,   157,    87,   581,    -1,   569,    -1,   162,   569,    -1,
     294,   570,    -1,   280,   571,    -1,   118,    87,   572,    -1,
     200,   573,    -1,   255,   162,   576,    -1,   255,    87,   577,
      -1,   158,   162,   579,    -1,   158,    87,   580,    -1,   157,
     162,   582,    -1,   157,    87,   583,    -1,   251,   584,    -1,
     122,     5,    -1,    61,     5,    -1,   283,     4,    -1,   122,
       5,    -1,    61,     5,    -1,   283,     4,    -1,   122,     5,
      -1,    61,     5,    -1,   283,     4,    -1,   122,     5,    -1,
      61,     5,    -1,   283,     4,    -1,   162,   574,    -1,   122,
       5,     4,    -1,    61,     5,     4,    -1,   283,     4,     4,
      -1,   122,     5,    -1,    61,     5,    -1,   283,     4,    -1,
     122,     5,   394,    -1,    61,     5,   394,    -1,   283,     4,
     394,    -1,   122,     5,    -1,    61,     5,    -1,   283,     4,
      -1,   122,     5,    -1,    61,     5,    -1,   283,     4,    -1,
     122,     5,   394,    -1,    61,     5,   394,    -1,   283,     4,
     394,    -1,   122,     5,    -1,    61,     5,    -1,   283,     4,
      -1,   122,     5,    -1,    61,     5,    -1,   283,     4,    -1,
     122,     5,   394,    -1,    61,     5,   394,    -1,   283,     4,
     394,    -1,   122,     5,    -1,    61,     5,    -1,   283,     4,
      -1,   122,     5,    -1,    61,     5,    -1,   283,     4,    -1,
     122,     5,    -1,    61,     5,    -1,   283,     4,    -1,   122,
       5,   394,    -1,    61,     5,   394,    -1,   283,     4,   394,
      -1,   122,     5,     5,   394,    -1,   588,     4,     4,   367,
     367,   372,    -1,   588,     4,    -1,   100,    -1,    50,    -1,
     305,    -1,   140,    -1,   109,    -1,    -1,     4,   367,   367,
     367,   367,    -1,   214,    -1,   214,     4,   367,   367,   367,
     367,    -1,   127,   280,   590,    -1,     4,    -1,     4,     4,
      -1,   367,   377,    -1,   367,   367,    -1,   303,   367,   367,
      -1,   378,   384,   385,    -1,    15,   595,    -1,   253,     4,
      -1,   250,   594,    -1,    22,   593,    -1,     4,     4,    -1,
       4,     5,    -1,   297,     4,     5,    -1,     4,     4,    -1,
       4,     5,    -1,   297,     4,     5,    -1,     4,    -1,     4,
     378,   384,    -1,   303,     4,   378,   384,    -1,   234,    64,
      -1,   239,    -1,   367,   367,    -1,   367,   367,    11,   367,
     367,    -1,   367,   367,    11,   379,   367,   367,    -1,   367,
     367,    11,   377,   384,   376,    -1,   303,   598,    -1,   126,
      -1,   126,   367,    -1,   367,   367,    -1,   367,   367,    11,
     367,   367,    -1,   367,   367,    11,   379,   367,   367,    -1,
     367,   367,    11,   377,   384,   376,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   470,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   529,
     530,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   546,   548,   549,   550,   551,   553,   554,   555,
     556,   559,   560,   561,   562,   563,   566,   567,   570,   571,
     572,   575,   578,   581,   584,   596,   603,   610,   618,   619,
     620,   621,   622,   625,   626,   627,   628,   629,   630,   631,
     632,   633,   634,   635,   636,   637,   638,   639,   640,   641,
     642,   643,   644,   645,   646,   647,   648,   649,   650,   651,
     652,   655,   656,   659,   660,   661,   662,   663,   664,   667,
     668,   669,   670,   671,   674,   675,   676,   677,   678,   679,
     680,   681,   684,   685,   686,   687,   688,   691,   692,   693,
     694,   695,   696,   697,   698,   701,   702,   703,   706,   707,
     708,   709,   712,   713,   714,   717,   718,   719,   722,   723,
     724,   727,   728,   729,   730,   731,   732,   733,   734,   737,
     738,   741,   742,   743,   744,   745,   746,   749,   750,   751,
     752,   755,   756,   757,   758,   759,   760,   763,   764,   765,
     766,   767,   768,   769,   770,   771,   775,   776,   779,   780,
     783,   784,   787,   788,   792,   793,   794,   795,   796,   797,
     798,   799,   802,   803,   806,   807,   808,   810,   812,   813,
     814,   816,   820,   821,   824,   825,   827,   830,   832,   838,
     839,   840,   843,   844,   845,   848,   849,   850,   851,   852,
     853,   854,   860,   861,   864,   865,   866,   867,   868,   871,
     872,   873,   874,   877,   878,   883,   888,   895,   897,   899,
     901,   903,   904,   905,   908,   910,   912,   914,   917,   918,
     921,   922,   923,   924,   925,   928,   931,   934,   940,   946,
     949,   950,   953,   954,   955,   962,   963,   964,   965,   968,
     969,   972,   973,   976,   977,   980,   982,   986,   987,   990,
     992,   993,   994,   995,   998,   999,  1001,  1002,  1003,  1006,
    1008,  1010,  1011,  1013,  1015,  1017,  1019,  1023,  1026,  1027,
    1028,  1029,  1032,  1033,  1036,  1039,  1040,  1041,  1042,  1043,
    1044,  1045,  1046,  1047,  1048,  1049,  1050,  1051,  1052,  1053,
    1054,  1055,  1056,  1057,  1058,  1059,  1060,  1061,  1062,  1063,
    1064,  1065,  1066,  1067,  1068,  1069,  1070,  1071,  1073,  1074,
    1075,  1076,  1077,  1078,  1079,  1081,  1082,  1083,  1086,  1088,
    1092,  1094,  1098,  1099,  1100,  1101,  1102,  1103,  1104,  1105,
    1108,  1109,  1110,  1113,  1116,  1117,  1119,  1121,  1122,  1123,
    1124,  1125,  1126,  1133,  1134,  1137,  1138,  1139,  1142,  1143,
    1146,  1149,  1150,  1152,  1156,  1157,  1158,  1161,  1165,  1167,
    1168,  1169,  1170,  1171,  1172,  1173,  1174,  1175,  1178,  1179,
    1180,  1183,  1184,  1187,  1189,  1197,  1199,  1201,  1205,  1206,
    1208,  1211,  1214,  1215,  1219,  1221,  1224,  1229,  1230,  1231,
    1235,  1236,  1237,  1240,  1241,  1242,  1245,  1246,  1248,  1249,
    1250,  1251,  1252,  1253,  1254,  1255,  1256,  1257,  1259,  1260,
    1263,  1264,  1267,  1268,  1269,  1270,  1273,  1274,  1277,  1279,
    1282,  1286,  1287,  1288,  1290,  1292,  1296,  1297,  1298,  1301,
    1302,  1303,  1304,  1305,  1306,  1307,  1310,  1313,  1314,  1315,
    1318,  1319,  1320,  1323,  1324,  1325,  1328,  1329,  1330,  1331,
    1332,  1333,  1336,  1337,  1338,  1339,  1340,  1341,  1342,  1345,
    1346,  1349,  1350,  1353,  1354,  1357,  1358,  1361,  1362,  1363,
    1366,  1367,  1370,  1371,  1374,  1377,  1385,  1386,  1389,  1390,
    1391,  1392,  1393,  1394,  1395,  1396,  1397,  1398,  1399,  1400,
    1401,  1402,  1403,  1404,  1405,  1406,  1409,  1412,  1413,  1416,
    1417,  1418,  1419,  1422,  1423,  1424,  1425,  1428,  1429,  1430,
    1431,  1432,  1433,  1436,  1437,  1438,  1439,  1440,  1441,  1443,
    1444,  1449,  1450,  1453,  1455,  1457,  1460,  1461,  1462,  1463,
    1464,  1465,  1468,  1470,  1472,  1474,  1475,  1477,  1479,  1481,
    1483,  1485,  1486,  1487,  1490,  1491,  1492,  1493,  1494,  1495,
    1497,  1498,  1499,  1502,  1505,  1507,  1509,  1511,  1513,  1515,
    1517,  1519,  1522,  1524,  1526,  1528,  1529,  1530,  1531,  1532,
    1533,  1534,  1535,  1536,  1539,  1540,  1541,  1542,  1543,  1544,
    1545,  1547,  1549,  1550,  1551,  1554,  1555,  1556,  1557,  1558,
    1559,  1561,  1562,  1563,  1566,  1567,  1568,  1569,  1570,  1573,
    1576,  1579,  1582,  1585,  1588,  1591,  1594,  1597,  1602,  1605,
    1608,  1611,  1614,  1617,  1620,  1623,  1626,  1629,  1632,  1637,
    1640,  1643,  1646,  1649,  1652,  1655,  1658,  1661,  1666,  1668,
    1670,  1672,  1674,  1676,  1681,  1683,  1685,  1689,  1692,  1695,
    1698,  1701,  1704,  1707,  1710,  1713,  1716,  1719,  1724,  1725,
    1726,  1727,  1728,  1729,  1730,  1732,  1734,  1735,  1736,  1739,
    1740,  1741,  1742,  1743,  1744,  1746,  1747,  1748,  1751,  1753,
    1755,  1756,  1758,  1760,  1764,  1765,  1768,  1769,  1770,  1773,
    1776,  1777,  1778,  1779,  1780,  1781,  1782,  1785,  1793,  1794,
    1795,  1796,  1798,  1800,  1801,  1801,  1802,  1803,  1804,  1805,
    1806,  1808,  1809,  1811,  1814,  1817,  1818,  1819,  1822,  1825,
    1828,  1832,  1835,  1838,  1841,  1845,  1850,  1855,  1857,  1859,
    1860,  1862,  1864,  1866,  1868,  1869,  1871,  1873,  1875,  1879,
    1884,  1886,  1888,  1890,  1892,  1894,  1896,  1898,  1900,  1902,
    1904,  1907,  1908,  1910,  1912,  1913,  1915,  1917,  1918,  1919,
    1921,  1923,  1924,  1925,  1927,  1928,  1931,  1935,  1938,  1941,
    1945,  1950,  1956,  1957,  1958,  1960,  1961,  1965,  1967,  1968,
    1969,  1972,  1975,  1978,  1980,  1982,  1987,  1990,  1991,  1992,
    1995,  1999,  2000,  2002,  2003,  2004,  2006,  2007,  2009,  2010,
    2015,  2017,  2018,  2020,  2021,  2022,  2023,  2024,  2025,  2027,
    2029,  2031,  2032,  2033,  2035,  2037,  2038,  2039,  2040,  2041,
    2042,  2043,  2044,  2045,  2046,  2047,  2049,  2051,  2052,  2053,
    2054,  2056,  2057,  2058,  2059,  2060,  2062,  2063,  2064,  2065,
    2066,  2067,  2070,  2071,  2072,  2073,  2074,  2075,  2076,  2077,
    2078,  2079,  2080,  2081,  2082,  2083,  2084,  2085,  2086,  2087,
    2088,  2089,  2090,  2093,  2094,  2095,  2096,  2097,  2098,  2106,
    2113,  2122,  2131,  2138,  2145,  2153,  2161,  2168,  2173,  2178,
    2183,  2188,  2193,  2198,  2204,  2214,  2224,  2234,  2241,  2251,
    2261,  2270,  2282,  2295,  2301,  2304,  2305,  2314,  2316,  2318,
    2323,  2327,  2328,  2329,  2335,  2337,  2339,  2342,  2343,  2344,
    2345,  2346,  2347,  2348,  2351,  2352,  2353,  2354,  2355,  2356,
    2358,  2360,  2362,  2364,  2366,  2368,  2371,  2372,  2373,  2374,
    2376,  2379,  2381,  2383,  2384,  2385,  2387,  2390,  2393,  2395,
    2396,  2397,  2398,  2400,  2401,  2402,  2403,  2404,  2405,  2407,
    2409,  2411,  2414,  2415,  2416,  2418,  2421,  2422,  2423,  2424,
    2426,  2429,  2433,  2434,  2435,  2438,  2441,  2443,  2444,  2445,
    2446,  2448,  2451,  2452,  2454,  2455,  2456,  2457,  2458,  2460,
    2461,  2463,  2466,  2467,  2468,  2469,  2470,  2472,  2474,  2475,
    2476,  2477,  2479,  2481,  2482,  2483,  2484,  2485,  2486,  2488,
    2489,  2491,  2494,  2495,  2496,  2497,  2500,  2501,  2504,  2505,
    2508,  2509,  2512,  2525,  2526,  2530,  2531,  2535,  2536,  2539,
    2543,  2549,  2551,  2554,  2556,  2559,  2561,  2565,  2566,  2567,
    2568,  2569,  2570,  2571,  2575,  2576,  2579,  2580,  2581,  2582,
    2583,  2584,  2585,  2586,  2589,  2590,  2591,  2592,  2593,  2594,
    2595,  2596,  2597,  2598,  2599,  2600,  2603,  2604,  2607,  2608,
    2608,  2611,  2613,  2615,  2618,  2619,  2620,  2621,  2622,  2623,
    2626,  2627,  2630,  2631,  2634,  2638,  2639,  2639,  2642,  2643,
    2646,  2649,  2653,  2654,  2655,  2656,  2657,  2658,  2659,  2660,
    2666,  2667,  2668,  2669,  2672,  2674,  2675,  2680,  2682,  2683,
    2684,  2685,  2688,  2689,  2694,  2698,  2699,  2700,  2703,  2704,
    2709,  2710,  2713,  2715,  2716,  2717,  2722,  2724,  2730,  2731,
    2732,  2733,  2736,  2737,  2740,  2742,  2744,  2745,  2748,  2750,
    2751,  2752,  2755,  2756,  2759,  2760,  2761,  2764,  2765,  2766,
    2769,  2770,  2771,  2774,  2775,  2776,  2777,  2780,  2781,  2782,
    2783,  2784,  2787,  2788,  2789,  2792,  2793,  2794,  2795,  2796,
    2797,  2800,  2801,  2802,  2805,  2807,  2809,  2811,  2812,  2813,
    2816,  2817,  2818,  2819,  2820,  2821,  2822,  2823,  2824,  2825,
    2826,  2827,  2828,  2831,  2832,  2833,  2836,  2837,  2838,  2841,
    2842,  2843,  2846,  2847,  2848,  2851,  2852,  2853,  2854,  2857,
    2858,  2859,  2862,  2864,  2866,  2870,  2871,  2872,  2875,  2876,
    2877,  2880,  2882,  2884,  2888,  2889,  2890,  2893,  2894,  2895,
    2898,  2900,  2902,  2906,  2907,  2908,  2911,  2912,  2913,  2916,
    2917,  2918,  2921,  2923,  2925,  2929,  2933,  2935,  2940,  2943,
    2944,  2945,  2946,  2949,  2950,  2953,  2955,  2957,  2960,  2961,
    2962,  2965,  2966,  2969,  2971,  2972,  2973,  2974,  2977,  2978,
    2979,  2982,  2983,  2984,  2987,  2988,  2993,  2995,  2998,  3005,
    3006,  3008,  3013,  3015,  3018,  3019,  3020,  3021,  3023,  3028
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
  "ZMAX_", "ZSCALE_", "PIXMASK_", "ZOOM_", "'Y'", "'N'", "'X'", "'='",
  "$accept", "command", "numeric", "debug", "yesno", "fileNameType",
  "optangle", "angle", "sexagesimal", "hms", "dms", "coord", "coordSystem",
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
  "markerCreate", "compositeOperation", "markerCreateTemplate",
  "markerDelete", "markerEdit", "markerFormat", "markerGet",
  "markerGetCentroid", "markerGetHighlite", "markerGetSelect",
  "markerGetShow", "markerInitProp", "markerLayer", "markerList",
  "markerLoad", "markerMoveSelected", "markerProps", "markerProp",
  "markerProperty", "markerProperties", "markerQuery", "@2", "markerSave",
  "markerSelect", "markerShow", "queries", "query", "markerTags", "@3",
  "tags", "tag", "callback", "mask", "orient", "pan", "panTo", "panMotion",
  "panner", "postscript", "precision", "pscolorspace", "region",
  "regionHighlite", "regionSelect", "renderMethod", "renderBackground",
  "rgb", "hls", "hsv", "rotate", "rotateMotion", "save", "savePixelMask",
  "saveArray", "saveFits", "saveFitsImage", "saveFitsTable",
  "saveFitsSlice", "saveFitsExtCube", "saveFitsMosaic",
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
     615,    89,    78,    88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   365,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   367,
     367,   368,   368,   368,   368,   368,   368,   368,   368,   368,
     368,   368,   369,   369,   369,   369,   369,   369,   369,   369,
     369,   370,   370,   370,   370,   370,   371,   371,   372,   372,
     372,   373,   374,   375,   376,   376,   376,   376,   377,   377,
     377,   377,   377,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   379,   379,   380,   380,   380,   380,   380,   380,   381,
     381,   381,   381,   381,   382,   382,   382,   382,   382,   382,
     382,   382,   383,   383,   383,   383,   383,   384,   384,   384,
     384,   384,   384,   384,   384,   385,   385,   385,   386,   386,
     386,   386,   387,   387,   387,   388,   388,   388,   389,   389,
     389,   390,   390,   390,   390,   390,   390,   390,   390,   391,
     391,   392,   392,   392,   392,   392,   392,   393,   393,   393,
     393,   394,   394,   394,   394,   394,   394,   395,   395,   395,
     395,   395,   395,   395,   395,   395,   396,   396,   397,   397,
     398,   398,   399,   399,   400,   400,   400,   400,   400,   400,
     400,   400,   401,   401,   402,   402,   402,   402,   402,   402,
     402,   402,   403,   403,   404,   404,   404,   404,   404,   405,
     405,   405,   406,   406,   406,   407,   407,   407,   407,   407,
     407,   407,   408,   408,   409,   409,   409,   409,   409,   410,
     410,   410,   410,   411,   411,   411,   411,   412,   412,   412,
     412,   412,   412,   412,   413,   413,   413,   413,   414,   414,
     415,   415,   415,   415,   415,   416,   416,   416,   416,   416,
     417,   417,   418,   418,   418,   419,   419,   419,   419,   420,
     420,   421,   421,   422,   422,   423,   423,   424,   424,   424,
     424,   424,   424,   424,   425,   425,   425,   425,   425,   426,
     426,   426,   426,   426,   426,   426,   426,   427,   428,   428,
     428,   428,   429,   429,   430,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   432,   432,
     433,   433,   434,   434,   434,   434,   434,   434,   434,   434,
     435,   435,   435,   436,   437,   437,   437,   437,   437,   437,
     437,   437,   437,   438,   438,   439,   439,   439,   440,   440,
     441,   442,   442,   442,   443,   443,   443,   444,   445,   445,
     445,   445,   445,   445,   445,   445,   445,   445,   446,   446,
     446,   447,   447,   448,   448,   449,   449,   449,   450,   450,
     450,   451,   452,   452,   453,   453,   453,   454,   454,   454,
     455,   455,   455,   456,   456,   456,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     458,   458,   459,   459,   459,   459,   460,   460,   461,   461,
     461,   462,   462,   462,   462,   462,   463,   463,   463,   464,
     464,   464,   464,   464,   464,   464,   465,   466,   466,   466,
     467,   467,   467,   468,   468,   468,   469,   469,   469,   469,
     469,   469,   470,   470,   470,   470,   470,   470,   470,   471,
     471,   472,   472,   473,   473,   474,   474,   475,   475,   475,
     476,   476,   477,   477,   478,   478,   479,   479,   480,   480,
     480,   480,   480,   480,   480,   480,   480,   480,   480,   480,
     480,   480,   480,   480,   480,   480,   481,   482,   482,   483,
     483,   483,   483,   484,   484,   484,   484,   485,   485,   485,
     485,   485,   485,   486,   486,   486,   486,   486,   486,   486,
     486,   487,   487,   488,   488,   488,   489,   489,   489,   489,
     489,   489,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   492,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   496,   496,   496,   496,   496,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   504,   504,
     504,   504,   504,   504,   505,   505,   506,   506,   506,   507,
     508,   508,   508,   508,   508,   508,   508,   509,   510,   510,
     510,   510,   510,   510,   511,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   512,   512,   512,   512,   512,   512,   512,   512,
     512,   512,   512,   512,   512,   512,   512,   512,   512,   512,
     512,   512,   512,   513,   513,   513,   513,   513,   513,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   515,   515,   516,   516,   516,
     516,   517,   517,   517,   518,   518,   518,   519,   519,   519,
     519,   519,   519,   519,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   521,   521,   521,   521,   522,   522,   523,   523,
     524,   524,   525,   526,   526,   526,   526,   526,   526,   527,
     527,   528,   528,   528,   528,   528,   528,   529,   529,   529,
     529,   529,   529,   529,   530,   530,   531,   531,   531,   531,
     531,   531,   531,   531,   532,   532,   532,   532,   532,   532,
     532,   532,   532,   532,   532,   532,   533,   533,   534,   535,
     534,   536,   536,   536,   537,   537,   537,   537,   537,   537,
     538,   538,   539,   539,   540,   541,   542,   541,   543,   543,
     544,   545,   546,   546,   546,   546,   546,   546,   546,   546,
     547,   547,   547,   547,   548,   548,   548,   548,   548,   548,
     548,   548,   549,   549,   549,   550,   550,   550,   551,   551,
     551,   551,   552,   552,   552,   552,   553,   553,   554,   554,
     554,   554,   555,   555,   556,   556,   556,   556,   557,   557,
     557,   557,   558,   558,   559,   559,   559,   560,   560,   560,
     561,   561,   561,   562,   562,   562,   562,   563,   563,   563,
     563,   563,   564,   564,   564,   565,   565,   565,   565,   565,
     565,   566,   566,   566,   567,   567,   567,   567,   567,   567,
     568,   568,   568,   568,   568,   568,   568,   568,   568,   568,
     568,   568,   568,   569,   569,   569,   570,   570,   570,   571,
     571,   571,   572,   572,   572,   573,   573,   573,   573,   574,
     574,   574,   575,   575,   575,   576,   576,   576,   577,   577,
     577,   578,   578,   578,   579,   579,   579,   580,   580,   580,
     581,   581,   581,   582,   582,   582,   583,   583,   583,   584,
     584,   584,   585,   585,   585,   586,   587,   587,   587,   588,
     588,   588,   588,   589,   589,   589,   589,   589,   590,   590,
     590,   591,   591,   592,   592,   592,   592,   592,   593,   593,
     593,   594,   594,   594,   595,   595,   595,   595,   596,   597,
     597,   597,   597,   597,   598,   598,   598,   598,   598,   598
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
       5,     5,     6,     5,     4,     4,     9,    10,    11,     9,
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
      10,    12,    12,     3,     2,     0,     1,     3,     4,     4,
       4,     0,     1,     1,     4,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     3,     3,
       8,     6,    10,     7,     7,     5,     2,     2,     3,     4,
       5,     5,     5,     3,     4,     5,     5,     5,     5,     2,
       3,     3,     5,     3,     3,     3,     3,     4,     5,     5,
       5,     5,     3,     4,     5,     5,     2,     2,     3,     5,
       6,     6,     3,     3,     6,     5,     5,     2,     3,     3,
       5,     6,     3,     2,     2,     3,     2,     3,     2,     3,
       5,     6,     2,     2,     2,     1,     4,     4,     1,     2,
       2,     2,     2,     2,     2,     2,     3,     2,     3,     2,
       3,     1,     1,     1,     1,     1,     0,     2,     0,     2,
       0,     1,     0,     0,     1,     1,     1,     1,     1,     7,
       8,     2,     6,     2,     6,     2,     3,     2,     1,     1,
       3,     3,     1,     4,     2,     1,     3,     3,     4,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     0,     0,
       2,     6,     7,     2,     1,     3,     1,     3,     1,     1,
       1,     2,     2,     1,     3,     0,     0,     2,     2,     1,
       3,     5,     1,     2,     2,     3,     2,     2,     2,     2,
       1,     1,     1,     1,     4,     2,     3,     3,     2,     3,
       2,     2,     2,     3,     3,     3,     2,     3,     1,     3,
       3,     1,     2,     2,     2,     2,     9,     6,     1,     1,
       1,     1,     2,     2,     3,     3,     1,     2,     3,     3,
       1,     2,     1,     1,     1,     1,     1,     2,     2,     4,
       2,     2,     4,     2,     2,     2,     4,     1,     2,     2,
       2,     3,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       1,     2,     2,     2,     3,     2,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     3,     3,     2,
       2,     2,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     3,     3,     3,     2,     2,     2,     2,     2,     2,
       3,     3,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     3,     3,     3,     4,     6,     2,     1,     1,
       1,     1,     1,     0,     5,     1,     6,     3,     1,     2,
       2,     2,     3,     3,     2,     2,     2,     2,     2,     2,
       3,     2,     2,     3,     1,     3,     4,     2,     1,     2,
       5,     6,     6,     2,     1,     2,     2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     7,     8,     0,     0,     0,     0,
       0,   317,     0,     0,     0,     0,     0,     0,   345,     0,
       0,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1073,     0,     0,     0,     0,     0,     0,     0,     0,
    1073,    43,     0,     0,     0,    48,     0,     0,     0,    52,
    1303,    54,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,  1073,     0,   371,
       0,   375,     0,     0,     0,   379,     0,   381,     0,   383,
       0,     0,   537,   387,    20,     0,   543,    21,   548,     0,
       0,   567,   552,   553,   554,   555,   569,   557,   558,   562,
     559,     0,   561,   563,     0,     0,    22,     0,    24,     0,
       0,     0,    26,     0,     0,     0,    27,     0,   584,     0,
       0,     0,   589,     0,    28,     0,     0,     0,     0,     0,
       0,     0,    30,   749,    31,     0,     0,     0,     0,     0,
       0,   750,    32,     0,    33,  1077,  1078,  1074,  1075,  1076,
       0,   139,  1142,     0,   133,     0,     0,     0,    35,     0,
    1153,  1152,  1151,  1150,    37,     0,     0,     0,     0,     0,
     157,     0,    38,     0,  1171,     0,  1168,    39,     0,     0,
       0,     0,    42,     0,    41,    40,     0,     0,     0,     0,
      45,     0,     0,  1207,    46,     0,     0,     0,     0,     0,
       0,    47,  1299,  1298,  1302,  1301,  1300,    49,     0,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    51,
       0,     0,  1305,    53,     0,     0,    55,     0,     0,     0,
       0,   157,    56,  1328,    57,     0,     0,    58,     1,     4,
       5,   232,     0,   224,     0,     0,   226,     0,   234,   227,
     231,   242,   243,   228,   244,     0,   230,   252,   253,   251,
     250,     0,     0,   272,     0,   257,   265,   268,   267,   266,
     264,   256,   261,   262,   263,   255,     0,     0,     0,     0,
       0,     0,   260,    10,     0,     0,     0,     0,     0,     0,
       0,   282,     0,   289,     0,   299,   290,   301,   291,   302,
     292,   313,   293,     0,     0,   294,     0,    91,    92,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   320,     0,     0,     0,     0,     0,   159,   164,   158,
     160,   163,   162,   161,     0,     0,   337,    66,    67,    68,
      69,    70,    62,    63,    64,    71,    65,     0,   346,     0,
     400,   396,   392,   393,   397,   394,   399,   347,   403,   348,
     305,   408,   412,   407,   308,   307,   306,     0,     0,   349,
     419,   351,     0,   350,     0,   426,   352,   438,   430,   441,
     431,   432,   434,     0,   436,   437,   157,   353,     0,     0,
     354,     0,     0,   157,   355,   450,   157,   448,   356,   451,
     358,   157,   452,   357,     0,   157,     0,   359,   470,     0,
     468,   486,     0,     0,     0,   474,   466,     0,   476,   491,
     479,   361,   497,   498,   362,   363,     0,     0,   513,   514,
     515,   366,   510,   511,   512,   367,     0,   461,     0,   368,
      81,   458,     0,   369,   370,     0,   505,   499,   504,   500,
     501,   502,   503,   373,   374,   506,   376,     0,   507,   508,
     509,   378,   521,   516,   517,   519,   380,   527,   529,   531,
     533,   526,   528,   535,   382,     0,     0,   540,     0,   386,
     157,   542,   549,     0,   550,   568,   551,   570,   571,   572,
     556,   573,   575,   574,   576,   560,   564,   581,     0,     0,
       0,     0,   577,   565,    25,  1203,  1204,  1205,     0,  1200,
    1201,     0,     0,     0,   586,   585,     0,     0,     0,     0,
      29,     0,     0,     0,     0,   596,     0,   597,     0,     0,
       0,     0,     0,     0,     0,   598,     0,   748,     0,   599,
       0,   600,     0,     0,   601,     0,   753,   752,   751,     0,
     756,     0,     0,     0,   923,     0,     0,     0,   760,   764,
     766,   961,     0,     0,     0,     0,   861,     0,     0,     0,
     896,     0,     0,     0,     0,     0,     0,     0,   898,     0,
       0,     0,    34,   142,   143,   141,   140,  1148,  1143,  1149,
     136,   137,   135,   138,   134,  1144,     0,  1146,  1147,    36,
       0,     0,     0,     0,  1160,  1161,     0,   157,     0,  1158,
    1155,     0,     0,     0,   157,  1178,  1181,  1179,  1180,  1172,
    1173,  1174,  1175,     0,     0,     0,    44,  1197,  1198,     0,
    1212,  1214,  1213,  1209,  1210,  1208,     0,     0,     0,     0,
       0,     0,  1215,     0,  1219,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1216,  1230,     0,
       0,     0,  1218,  1220,     0,     0,     0,  1217,  1297,  1195,
    1196,  1194,   212,     0,   216,   208,     0,   218,   209,     0,
     220,   210,  1193,  1192,   211,   213,   214,   215,     0,     0,
     207,     0,     0,     0,     0,  1311,  1324,     0,     0,  1314,
       0,     0,  1317,     0,     0,  1316,  1315,   165,  1334,     0,
    1333,  1329,   233,   229,     0,   238,     0,   235,     0,   254,
     152,   155,   156,   154,   153,   269,   270,   271,   259,   258,
     274,   276,   275,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   157,     0,   321,    97,
      94,    95,    96,   157,   323,   322,     0,     0,     0,     0,
       0,     0,     0,   336,     0,   332,   330,   329,   344,   395,
       0,     0,   398,   413,   414,   409,   410,   415,   417,   416,
     411,   309,   310,   406,   405,   421,   420,     0,   425,   439,
     440,   429,   442,   435,   433,   428,     0,     0,   157,   157,
     165,   165,   165,   157,     0,     0,   157,   487,   469,   480,
       0,   471,    81,   482,     0,     0,   473,   475,   157,   492,
       0,     0,   478,     0,     0,   365,     0,   463,    85,    84,
     457,     0,     0,     0,     0,   975,   977,   976,     0,  1066,
       0,  1045,     0,  1048,     0,     0,  1068,  1070,     0,  1061,
     372,     0,   518,   520,   530,   523,   532,   524,   534,   525,
     536,   522,     0,     0,   385,   541,   538,   539,   165,   566,
     578,   579,   580,   582,     0,     0,     0,   595,   583,     0,
       0,     0,     0,     0,     0,   178,   178,   172,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   175,
     175,   172,     0,     0,   172,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   643,   667,     0,     0,     0,   635,
       0,     0,     0,     0,   178,   172,     0,     0,   744,     0,
     754,   755,   157,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   811,     0,     0,     0,
       0,     0,   833,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   851,     0,     0,   856,   857,     0,     0,     0,
     876,   878,   877,     0,   880,     0,     0,   887,   889,   890,
     924,     0,     0,     0,     0,   758,   759,   969,   967,   972,
     971,   970,   968,   973,     0,   763,     0,   963,   962,   767,
       0,   966,     0,   768,   769,   770,   771,     0,     0,     0,
       0,     0,   863,     0,     0,   864,  1089,     0,  1092,  1088,
       0,     0,     0,   865,   897,   866,  1107,  1112,  1109,  1115,
    1108,  1106,  1113,  1110,  1104,  1111,  1105,  1114,     0,     0,
     871,     0,     0,     0,     0,   872,  1124,  1128,  1129,     0,
    1126,   873,     0,  1130,   874,   894,     0,     0,     0,   899,
     900,   901,  1145,  1159,     0,     0,  1166,  1162,     0,     0,
       0,  1157,  1156,  1170,  1169,     0,     0,  1186,     0,     0,
    1182,     0,  1190,     0,     0,  1183,     0,  1211,   201,   201,
       0,     0,     0,   201,     0,  1244,     0,  1243,     0,     0,
       0,     0,  1231,     0,     0,     0,     0,  1235,     0,     0,
       0,  1242,     0,     0,     0,     0,     0,  1233,  1245,     0,
       0,     0,  1232,   201,   201,   201,  1222,  1221,  1223,     0,
     217,   219,   221,     0,   222,     0,    60,     0,  1307,     0,
    1312,   157,  1327,     0,  1318,  1319,     0,  1321,  1322,     0,
     166,   167,  1313,  1335,  1336,     0,   225,     0,   239,     0,
       0,     0,     0,   273,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   315,   157,     0,     0,
       0,     0,   157,     0,   335,     0,   334,   402,   401,     0,
       0,     0,   157,     0,   165,   447,   445,   449,   453,     0,
       0,     0,   165,     0,   488,   472,     0,   483,   485,   168,
       0,     0,   364,     0,     0,    60,     0,   462,    83,    82,
       0,     0,   987,     0,     0,     0,     0,     0,     0,   999,
       0,     0,     0,     0,     0,     0,  1016,  1017,     0,     0,
       0,     0,  1027,     0,  1033,  1034,  1036,  1038,     0,  1042,
    1053,  1054,  1055,     0,  1057,  1062,  1064,  1065,  1063,   974,
       0,  1044,     0,  1043,   986,     0,     0,  1049,     0,  1051,
       0,  1050,  1071,  1052,  1059,     0,     0,   384,     0,     0,
    1206,  1202,   593,   594,     0,   591,   587,     0,   178,   178,
     178,   179,   180,   605,   606,   174,   173,     0,   178,   178,
     178,     0,   613,   612,   611,   623,   175,   178,   178,   178,
     176,   177,   178,   178,     0,   178,   178,     0,   175,     0,
     636,     0,   642,     0,   641,   640,   639,     0,     0,     0,
     666,     0,   665,     0,   638,   637,     0,     0,     0,     0,
     175,   175,   172,     0,     0,   172,     0,     0,     0,   178,
     178,   740,     0,   178,   178,   745,     0,   191,   192,   193,
     194,   195,   196,     0,    89,    90,    88,   775,     0,     0,
       0,     0,     0,   917,   915,   910,     0,   920,   904,   921,
     907,   919,   913,   902,   916,   905,   903,   922,   918,     0,
       0,   789,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   821,     0,     0,     0,
       0,   832,   834,     0,     0,   839,   838,     0,     0,   181,
       0,     0,   157,     0,   847,     0,     0,     0,     0,   852,
     853,   854,     0,     0,     0,   860,   875,   879,   881,   884,
     883,     0,     0,     0,   888,   925,   927,     0,   926,   761,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   955,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   765,     0,     0,     0,     0,
     862,     0,   157,  1085,  1083,  1081,     0,     0,   157,  1087,
     867,     0,     0,     0,     0,  1123,     0,     0,  1131,   892,
     893,     0,   895,  1165,  1167,  1164,  1163,  1154,     0,     0,
       0,  1187,     0,     0,  1191,  1199,   203,   204,   205,   206,
     202,  1225,  1224,     0,     0,     0,  1229,     0,     0,     0,
    1228,     0,     0,     0,  1227,  1226,   201,     0,     0,     0,
    1234,     0,     0,     0,  1241,     0,     0,     0,  1240,     0,
       0,     0,  1239,     0,     0,     0,  1238,     0,     0,     0,
       0,     0,  1255,     0,  1290,  1289,  1291,     0,     0,     0,
    1237,     0,     0,     0,  1236,  1250,  1249,  1251,  1247,  1246,
    1248,  1293,  1292,  1294,     0,     0,     0,  1309,  1310,     0,
    1325,   157,  1320,  1323,     0,     0,   157,     0,     0,     0,
     236,     0,     0,     0,     0,   277,     0,     0,     0,     0,
       0,     0,     0,   312,   311,     0,     0,   303,   314,   316,
       0,   326,   328,   327,   325,   157,   333,     0,     0,     0,
     165,   157,     0,     0,     0,     0,   467,   481,   490,     0,
     484,   170,   171,   169,   477,     0,   493,     0,     0,   460,
     465,    81,     0,     0,     0,     0,     0,     0,   157,   988,
       0,     0,     0,   993,     0,   157,     0,  1000,  1001,     0,
    1003,  1004,  1005,  1006,     0,     0,     0,  1012,     0,  1018,
       0,     0,     0,  1022,  1023,     0,     0,     0,  1028,  1029,
       0,     0,  1032,  1035,  1037,  1039,     0,     0,  1056,  1058,
     978,  1067,   979,     0,     0,  1069,  1060,     0,     0,   546,
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
       0,     0,     0,     0,     0,     0,     0,   909,   906,   912,
     911,   908,   914,     0,     0,     0,     0,     0,   157,   794,
     795,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   812,   813,   814,     0,   818,   815,
     817,     0,     0,   823,   822,   824,     0,     0,     0,     0,
       0,     0,   157,   157,   837,   187,   183,   188,   182,   185,
     184,   186,   843,   844,     0,     0,   846,   848,   157,   157,
       0,   855,   858,   157,   157,   882,   886,   928,   762,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   956,
    1072,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   954,     0,     0,     0,     0,
       0,   772,   773,   157,   165,  1086,     0,     0,  1090,  1091,
       0,     0,   869,     0,   157,     0,  1125,  1127,   891,     0,
    1184,  1185,  1188,  1189,   201,   201,   201,   201,   201,   201,
     201,   201,   201,  1295,  1253,  1252,  1254,  1287,  1286,  1288,
    1284,  1283,  1285,  1278,  1277,  1279,  1275,  1274,  1276,  1257,
    1256,  1260,  1259,  1261,  1258,  1269,  1268,  1270,  1266,  1265,
    1267,     0,     0,  1304,     0,  1326,     0,   157,     0,  1330,
       0,     0,   240,     0,   237,     0,     0,     0,     0,     0,
     284,     0,     0,     0,     0,     0,   157,     0,   318,   145,
       0,   422,     0,   443,   165,   168,     0,     0,   456,     0,
     494,   495,     0,   459,     0,     0,     0,     0,     0,   157,
     989,   168,   168,   168,   157,   994,   168,   165,   168,   168,
     157,  1007,   168,   168,   168,   157,  1013,   168,   168,   157,
       0,   168,   157,   168,   168,   157,   168,   157,  1046,  1047,
       0,     0,   545,     0,   607,   614,   615,   616,     0,   620,
     621,   622,   628,   178,   175,   634,   655,   656,   657,   658,
     659,     0,   661,   662,   175,   175,   718,   719,   720,   721,
     723,     0,   726,   727,     0,   175,   729,   730,   731,   732,
     733,     0,   735,   736,   175,     0,     0,     0,   175,   175,
     172,     0,     0,     0,     0,     0,     0,   175,   175,   172,
       0,     0,     0,     0,     0,     0,   175,   175,   172,     0,
       0,     0,   175,   178,   178,   178,   178,   178,     0,   178,
     178,     0,   175,   175,   178,   178,   178,   178,   178,     0,
     178,   178,     0,   175,   648,   175,     0,   654,     0,     0,
     741,     0,   777,   168,     0,     0,   168,     0,     0,     0,
     787,   168,   790,   791,   168,   793,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   816,
     819,   820,     0,   168,     0,     0,     0,   835,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1116,   953,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   157,     0,     0,    86,     0,     0,   964,   965,   165,
       0,     0,     0,  1093,   868,   870,   165,   157,  1177,  1281,
    1280,  1282,  1272,  1271,  1273,  1263,  1262,  1264,  1296,     0,
    1306,  1337,     0,     0,  1332,  1331,   241,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   304,   168,   423,
     427,   444,   446,     0,   454,   489,   157,     0,     0,     0,
       0,     0,     0,   985,   990,   992,   991,   995,   996,   997,
     998,  1002,  1008,  1009,  1010,  1011,  1014,  1015,  1019,   165,
     168,  1025,   165,  1026,  1030,   165,  1040,   165,     0,   157,
       0,   544,     0,   619,   630,   178,   175,   663,   722,   175,
       0,   728,   175,   737,   178,   178,   178,   178,   178,     0,
     178,   178,   175,   178,   178,   178,   178,   178,     0,   178,
     178,   175,   178,   178,   178,   178,   178,     0,   178,   178,
     175,   178,   678,   679,   680,   681,   683,   175,   686,   687,
       0,   178,   178,   707,   708,   709,   710,   712,   175,   715,
     716,     0,   178,   650,   175,   746,   747,   157,   779,     0,
     168,   781,     0,   157,     0,   788,   792,   157,     0,   800,
     801,   802,   803,   807,   808,   804,   805,   806,     0,     0,
     168,   827,     0,   157,     0,     0,   840,   168,     0,     0,
     168,   168,     0,   885,     0,   189,   189,     0,     0,   189,
       0,   189,  1072,     0,     0,     0,     0,     0,     0,     0,
       0,  1117,  1095,     0,  1102,  1103,     0,   189,   189,     0,
       0,     0,     0,     0,     0,     0,     0,   957,     0,     0,
       0,  1072,    87,     0,   189,     0,  1119,   157,   157,     0,
     165,     0,   223,  1339,  1338,     0,     0,   245,     0,     0,
       0,     0,     0,     0,     0,     0,   319,   455,     0,   338,
       0,   981,     0,   197,     0,  1020,  1021,  1024,  1031,  1041,
     377,     0,   338,     0,   631,   660,   724,   175,   734,   669,
     670,   671,   672,   673,   175,   675,   676,   178,   698,   699,
     700,   701,   702,   175,   704,   705,   178,   689,   690,   691,
     692,   693,   175,   695,   696,   178,   682,   178,   175,   688,
     711,   178,   175,   717,   651,     0,   168,   782,     0,     0,
       0,     0,     0,   809,   810,   825,     0,     0,     0,   836,
     841,     0,   849,   850,   842,   168,     0,   190,  1072,  1072,
      86,     0,  1072,     0,  1072,   929,   157,     0,     0,     0,
       0,     0,     0,     0,  1094,     0,     0,  1072,  1072,    86,
       0,     0,  1072,  1072,     0,     0,  1072,   960,   958,   959,
     936,  1072,  1072,  1119,  1135,     0,  1084,  1082,  1121,     0,
       0,     0,     0,   247,   279,   280,     0,     0,     0,   278,
       0,   338,   339,   341,   340,   388,     0,     0,   198,   200,
     199,   983,   984,   338,   390,     0,   725,   178,   677,   178,
     706,   178,   697,   684,   178,   713,   178,     0,   778,   168,
     168,     0,   168,     0,   168,   168,     0,   168,     0,  1072,
     942,   938,  1072,     0,   943,     0,   937,  1072,     0,  1097,
       0,  1100,  1140,  1101,  1099,  1096,     0,   940,   939,  1072,
       0,     0,   934,   932,  1072,   157,   933,   935,   941,  1135,
    1079,     0,     0,  1120,  1133,  1122,  1176,     0,     0,   286,
     287,   285,   305,   308,   306,     0,     0,   389,   980,   157,
     391,   590,   674,   703,   694,   685,   714,   168,   780,   786,
       0,   799,   796,   826,   831,     0,   845,     0,   947,   931,
      86,     0,   945,     0,  1098,     0,   930,    86,     0,   946,
       0,  1080,  1137,  1139,     0,  1132,     0,     0,     0,     0,
       0,     0,   197,     0,   783,   157,   797,   828,   859,  1072,
       0,  1141,     0,  1072,     0,   168,  1138,  1134,   246,     0,
       0,     0,     0,     0,   982,   757,   157,   784,   798,   157,
     829,   949,     0,  1072,   948,     0,     0,   248,   298,     0,
     297,     0,   785,   830,    86,   950,    86,  1072,   296,   295,
    1072,  1072,   944,   952,   951
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    56,  1506,   175,   157,   970,  2621,  2622,   451,   452,
     453,   454,   158,   159,   160,   735,   727,    96,   865,   474,
    1292,  1794,  1437,  1452,  1433,  2032,  2728,  1503,  2791,  1671,
     359,   815,   818,   821,   830,    66,   383,   389,   393,   396,
      71,   399,    78,   415,   411,   405,   422,    87,   431,    97,
     103,   436,   438,   440,   508,   923,  1765,   442,   445,   110,
     461,   161,   163,  2785,   179,   181,   224,   965,  1004,   497,
     912,   499,   509,   915,   920,   511,   513,   926,   516,   928,
     527,   931,   933,   530,   534,   538,   540,   543,   547,   583,
     579,  1357,   561,   951,   956,   948,  1345,   962,   564,   593,
     596,   601,   575,   571,   606,   614,   995,   997,   999,  1001,
     619,  1006,   227,   621,  1861,   246,   624,   626,   630,   635,
     643,   264,  1426,   654,   272,   665,  1442,   667,   675,  1059,
    1460,  1054,  1922,  1472,  1470,  1924,  1055,  1462,  1464,   681,
     684,   679,   274,   282,   284,   722,  1136,  1529,  1125,  1625,
    2060,  2075,  1139,  1143,  1134,   990,  1399,  1403,  1411,  1413,
    2377,   290,  1152,  1155,  1163,  2601,  2602,  2603,  2378,  2764,
    2765,  1185,  1191,  1194,  2853,  2854,  2850,  2851,  2902,  2604,
    2605,   298,   304,   312,   749,   744,   317,   322,   324,   759,
     766,  1220,  1225,   824,   812,   330,   256,   252,   334,   773,
     341,   807,   782,   797,   798,  1262,  1257,  1690,  1247,  1712,
    1684,  1724,  1720,  1680,  1706,  1702,  1676,  1698,  1694,  1251,
     802,   784,   347,   348,   363,  1278,   366,   372,   842,   845,
     839,   374,   377,   850
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2646
static const yytype_int16 yypact[] =
{
    5268,   107,   790,    22, -2646, -2646,  1329,   -68,   616,  1139,
     891,    88,  3378,   209,   355,   113,  1028,   105,  5468,   103,
    1418, -2646,   159,   101,   201,  1047,   454,  1244,    30,   124,
     468,    73,  1129,   443,  1031,  2960,   227,  1000,   518,   473,
      73, -2646,   226,   147,     5, -2646,   460,   555,   600, -2646,
     753, -2646,    32,  3300,   333,    93,   604,   189,   151,   388,
     670,   681,   141,   694,    25,   835, -2646, -2646, -2646,  1207,
     537, -2646,   259,    24,   355,   -22,   698,   192, -2646,   716,
     537, -2646, -2646,   537,   537,    59,   537, -2646, -2646, -2646,
   -2646,   537, -2646, -2646, -2646, -2646, -2646, -2646,    33,   724,
     719,   729,   216, -2646,   537,  1672,   537,   537,  1188,   537,
   -2646, -2646, -2646,   605, -2646, -2646, -2646, -2646,  4768, -2646,
   -2646, -2646, -2646, -2646, -2646,   537, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646,  1334, -2646,
     537, -2646,   785, -2646, -2646,   355,   355,   355,   355,   355,
     355,   355,   355,   355,   355, -2646, -2646, -2646, -2646, -2646,
     703, -2646,   758,  1447,   730,    43,   586,   738,   476,  4368,
     763,  4819,  4739,   872,  4768,  4025, -2646,   569,   -73,   879,
     910,   862,   254,   314,   934,   803,   945,    73,   678, -2646,
     900, -2646,   768,   675,   329, -2646,   155, -2646,  1194, -2646,
      57,   904,    61, -2646, -2646,  4958, -2646, -2646, -2646,   930,
     956,   994, -2646, -2646, -2646, -2646,   922, -2646, -2646, -2646,
   -2646,   908, -2646, -2646,  4958,  4278, -2646,  1048, -2646,    12,
    4958,  1051, -2646,  1052,  4958,  1070, -2646,    49, -2646,  1074,
    1080,   430, -2646,   537, -2646,  1090,   486,  1101,   928,  1140,
    1108,    94, -2646, -2646, -2646,  1092,  1115,   355,   355,   537,
     537, -2646, -2646,  1118, -2646, -2646, -2646, -2646, -2646, -2646,
    3800,   -12, -2646,  1122,    10,   537,  4958,   537, -2646,  1127,
   -2646, -2646, -2646, -2646, -2646,   537,  1430,   355,  3834,   537,
    1334,   537, -2646,  1132, -2646,  4921, -2646, -2646,   905,  1136,
    1145,   537, -2646,  1147, -2646, -2646,   -64,  1156,  4958,  1159,
   -2646,  1472,   537,  1073, -2646,   507,  1099,  1509,   157,  1168,
     195, -2646, -2646, -2646, -2646, -2646, -2646, -2646,  1208, -2646,
     624,   270,   297,   317,    74,   537,  1213,   537,   198, -2646,
     537,   946,  1229, -2646,   537,   537, -2646,    44,    53,    54,
    1233,  1334, -2646, -2646, -2646,  1342,   537, -2646, -2646, -2646,
   -2646, -2646,   537, -2646,  1235,  1238, -2646,   537,   704, -2646,
   -2646, -2646, -2646, -2646, -2646,   537, -2646, -2646,   537, -2646,
   -2646,    40,    40, -2646,  1241, -2646, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646, -2646, -2646,  1062,   537,   537,  1249,
    1261,  1280, -2646, -2646,   537,   537,   537,   537,   537,   537,
     537, -2646,   537, -2646,  1282, -2646, -2646, -2646, -2646,  1185,
   -2646,  1286, -2646,  4958,  1290, -2646,   537, -2646, -2646, -2646,
     537,  1293,  1299,  1299,  4958,   537,   537,   537,   537,   537,
     537, -2646,   537,  4768,  1672,   537,   537, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646,  1672,   537, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646, -2646, -2646, -2646,  1319, -2646,  1059,
     471, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646,
     -60, -2646, -2646, -2646,  1169, -2646,   445,   415,   415, -2646,
   -2646, -2646,  1347, -2646,  1354, -2646, -2646,   -94, -2646,  1177,
   -2646, -2646, -2646,  1192, -2646, -2646,  1334, -2646,   537,   537,
   -2646,  4958,  4958,  1334, -2646, -2646,  1334, -2646, -2646, -2646,
   -2646,  1334, -2646, -2646,  4958,  1334,   537, -2646, -2646,  4958,
   -2646,  1366,   502,  1187,    17, -2646, -2646,  1189,  4958,    41,
   -2646, -2646, -2646, -2646, -2646, -2646,  1390,  1393, -2646, -2646,
   -2646, -2646, -2646, -2646, -2646, -2646,  1405, -2646,  1212, -2646,
     -52, -2646,   537, -2646, -2646,  1009, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646, -2646, -2646, -2646,    57, -2646, -2646,
   -2646, -2646, -2646, -2646,  1216,  1225, -2646, -2646,  1361,  1369,
    1378, -2646, -2646,  1214, -2646,   537,  1427,  1220,  4921, -2646,
    1334, -2646, -2646,  1451, -2646, -2646, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646,  4958,  4958,
    4958,  4958, -2646, -2646, -2646, -2646, -2646, -2646,  1458, -2646,
   -2646,  1462,  1467,   355, -2646, -2646,  1470,  1473,  1274,   537,
   -2646,   532,  1394,  1398,  1414, -2646,  1487, -2646,   581,  1417,
      90,   500,  4150,   625,  1507, -2646,  1511, -2646,  1515, -2646,
      97, -2646,  1517,  1520, -2646,  1524, -2646, -2646, -2646,   537,
   -2646,  4921,  4701,  1623,    64,  1527,   576,  1429, -2646, -2646,
   -2646,    96,    26,  1530,  1532,    99,   537,   429,  1095,   139,
    4958,   355,  1562,  1060,   120,   538,   416,    46, -2646,  1522,
    1528,  1536, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646, -2646, -2646,   537, -2646, -2646, -2646,
     537,   537,   537,   537, -2646, -2646,   537,  1334,   537, -2646,
     537,  1672,   537,  1539,  1334, -2646, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646,  1542,   444,   525, -2646, -2646, -2646,  1543,
   -2646, -2646, -2646, -2646,  1453, -2646,  1544,  1547,  1471,  1475,
    1490,  1550, -2646,  1552, -2646,  1554,  1491,  1569,   740,   745,
     426,   492,   463,   775,   477,  1584,   505, -2646, -2646,  1585,
    1586,  1588, -2646, -2646,  1591,  1592,  1589, -2646,  1598, -2646,
   -2646, -2646, -2646,  1601, -2646, -2646,  1604, -2646, -2646,  1616,
   -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646,   537,   537,
   -2646,   537,  1195,   537,   537, -2646,  4921,  1558,  1625, -2646,
    1199,  1628, -2646,  1270,  1631, -2646, -2646,    11,   537,   537,
   -2646,  1629, -2646, -2646,  1636,  1105,   537,  1642,   110, -2646,
   -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646,  1632,  1651,   537,   537,   537,   537,   537,
     537,   537,  1654,   355,  1657,  1659,  1334,  4958, -2646, -2646,
   -2646, -2646, -2646,  1334, -2646, -2646,   537,   537,   537,  4958,
     537,  1672,   537, -2646,   537, -2646, -2646, -2646, -2646, -2646,
    1660,  1664, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646, -2646,   763, -2646,   537, -2646, -2646,
   -2646, -2646, -2646, -2646, -2646, -2646,  4958,   537,  1334,  1334,
      11,    11,    11,  1334,  1672,   537,  1334, -2646, -2646, -2646,
     537, -2646,   -52,  1493,  1665,  1668, -2646, -2646,  1334, -2646,
    1516,  1521, -2646,  1669,  1674, -2646,  1680,  1276,  1649,  1653,
   -2646,   537,  4706,   663,   685, -2646, -2646, -2646,   537,   509,
     999, -2646,  1420, -2646,  1562,  1424,   587,  1396,    84, -2646,
   -2646,   537, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646,
   -2646, -2646,   537,  1690, -2646, -2646, -2646, -2646,    11, -2646,
   -2646, -2646, -2646, -2646,  1692,  1694,  4893, -2646, -2646,  1695,
    1696,   537,  1697,  1699,  1700,   -31,   -31,   -46,  1702,  1704,
    1705,  1708,  1708,  1708,  1433,  1441,  1719,  1730,  1732,    62,
      62,   -46,  1735,  1739,   -46,  1742,  1745,  1756,  1757,  1756,
    1757,  4333,  1761,  1763, -2646, -2646,  1756,  1757,   737, -2646,
    1765,  1766,  1767,  1769,   -31,   -46,  1773,  1774, -2646,  1777,
   -2646, -2646,  1334,   849,  1483,  1531,  1537,  1538,  1677,   873,
    1540,  1783,    -4,   -23,  1684,   996,  1439,  1752,  1546,  1549,
    1688,  1792,  1551,   467,   130,   283,  1545,  4958,  1562,  1762,
     564,  1553,  1580,  1797,    55, -2646, -2646,   589,  1800,  1802,
   -2646, -2646, -2646,  1803,  1590,   136,  1562,  1593, -2646, -2646,
   -2646,   355,  1801,  1805,   537, -2646, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646,    18, -2646,  1015, -2646, -2646, -2646,
     537, -2646,   537, -2646, -2646, -2646, -2646,   537,   537,   537,
     576,  4958, -2646,  1806,  1337, -2646, -2646,   537, -2646, -2646,
     537,  4958,   537, -2646, -2646, -2646, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646,   355,   537,
   -2646,   537,   576,  1809,  1810, -2646, -2646, -2646, -2646,   537,
     537, -2646,   355, -2646, -2646, -2646,   175,  1811,  1812, -2646,
   -2646, -2646, -2646, -2646,   537,   537, -2646, -2646,  1672,   537,
     537, -2646, -2646, -2646, -2646,  1814,   537, -2646,   537,  1709,
   -2646,   537, -2646,   537,  1710, -2646,  1816, -2646,  1205,  1205,
     519,   531,   558,  1205,  1818, -2646,   634, -2646,   674,   805,
     818,   848, -2646,  1819,  1820,   850,  1824, -2646,  1822,  1825,
    1829, -2646,   860,   864,  1830,  1831,  1833, -2646, -2646,  1834,
    1835,  1837, -2646,  1205,  1205,  1205, -2646, -2646, -2646,   537,
   -2646, -2646, -2646,   537, -2646,   537,   149,  4958, -2646,   537,
   -2646,  1334, -2646,  4921, -2646, -2646,  1838, -2646, -2646,  1839,
   -2646, -2646, -2646, -2646,  1827,  3834, -2646,   537,  1841,   537,
     537,   537,  1003, -2646,  1844,   537,   537,  1845,   537,   537,
     537,   537,    38,  1840,   355,   355, -2646,  1334,   537,  1849,
    1850,  1852,  1334,  4958, -2646,   537, -2646, -2646, -2646,   537,
     537,   537,  1334,  4958,    11, -2646, -2646, -2646, -2646,  1672,
     537,  1855,    11,   537,   528, -2646,  1857, -2646, -2646,   594,
    4082,   537, -2646,   537,  1856,  1864,   537, -2646, -2646, -2646,
    1861,  1341,  4768,  1621,  1622,  1627,    14,  4958,  1630, -2646,
       7,   -19,    51,  1633,  1635,   146, -2646, -2646,   503,  1711,
     512,   -66,  1562,   886, -2646,  1875,  1626, -2646,   607, -2646,
   -2646, -2646, -2646,  1562,  1670, -2646, -2646, -2646, -2646, -2646,
     537, -2646,   537, -2646, -2646,   537,   537, -2646,   537, -2646,
     537, -2646, -2646, -2646, -2646,  1683,   537, -2646,   537,   166,
   -2646, -2646, -2646, -2646,  1880,  1884, -2646,   537,   -31,   -31,
     -31, -2646, -2646, -2646, -2646, -2646, -2646,  1886,   -31,   -31,
     -31,   635, -2646, -2646, -2646, -2646,    62,   -31,   -31,   -31,
   -2646, -2646,   -31,   -31,  1887,   -31,   -31,  1891,    62,   998,
   -2646,   750, -2646,  1037, -2646, -2646, -2646,  1892,  1893,  1894,
   -2646,   756, -2646,   799, -2646, -2646,  1615,  1896,  1897,  1900,
      62,    62,   -46,  1903,  1905,   -46,  1906,  1913,  1914,   -31,
     -31, -2646,  1915,   -31,   -31, -2646,  1916, -2646, -2646, -2646,
   -2646, -2646, -2646,   355, -2646, -2646, -2646,  4768,  1255,   537,
    1326,  1645,   952, -2646, -2646, -2646,   962, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646,  1917,
     537, -2646,   355,  1922,   537,  4958,   355,  1923,  1714,  1663,
    1673,   150,   164,  1686,   220,  1611,  1617,  1933,  1934,  1935,
     873,  1936,  1937,  1938,  1624,  1637,  1375,  1940,   537,  1494,
    1723, -2646, -2646,   355,  4958, -2646, -2646,  4958,   537,    13,
    1941,   537,  1334,   355, -2646,  1942,  4958,  4958,   537, -2646,
   -2646, -2646,   355,   355,  4958, -2646, -2646, -2646, -2646, -2646,
   -2646,  4958,   537,   355, -2646, -2646, -2646,   537, -2646, -2646,
    1943,   537,  1716,   233,   537,  1717,   537,   244,   537,  1947,
     537,  1721,  1724,   537,   537,   537,   537,   537,   537,   537,
     537,    15,   537,   537,  1725, -2646,   537,   537,   537,   537,
   -2646,  4958,  1334,  1954,  1956,  1957,   537,   537,  1334, -2646,
     537,   537,   537,  4958,   576, -2646,   537,   537, -2646, -2646,
   -2646,  1958, -2646, -2646, -2646, -2646, -2646, -2646,  1960,   537,
     537, -2646,   537,   537, -2646, -2646, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646,  1961,  1962,  1966, -2646,  1967,  1968,  1970,
   -2646,  1973,  1974,  1971, -2646, -2646,  1205,  1975,  1976,  1978,
   -2646,  1979,  1980,  1984, -2646,  1994,  1995,  1997, -2646,  1998,
    1999,  2001, -2646,  2002,  2003,  2006, -2646,  2007,  2008,  2009,
    2011,  2013, -2646,  2014, -2646, -2646, -2646,  2017,  2020,  2015,
   -2646,  2024,  2025,  2029, -2646, -2646, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646,   537,   537,   537, -2646, -2646,   537,
   -2646,  1334, -2646, -2646,  3834,   537,  1334,   537,   537,   537,
   -2646,   537,   537,  2030,   537, -2646,   537,   537,  2032,   537,
     537,   537,   537, -2646, -2646,  2034,  4958, -2646, -2646, -2646,
     537, -2646, -2646, -2646, -2646,  1334, -2646,  1230,   537,  1230,
      11,  1334,  4958,   537,   537,  2035, -2646, -2646, -2646,   537,
   -2646, -2646, -2646, -2646, -2646,  4958, -2646,  4958,   537, -2646,
   -2646,   -52,  2036,  2037,  2038,  2039,  2040,  4958,  1334, -2646,
    4958,  4958,  4958,  4768,  4958,  1334,  4958, -2646, -2646,  4958,
   -2646, -2646, -2646,  4768,  4958,  4958,  4958,  4768,  4958, -2646,
    4958,  4958,   537, -2646, -2646,  4958,  4958,  4958, -2646, -2646,
    4958,  4958, -2646, -2646, -2646, -2646,  4958,  4958, -2646, -2646,
   -2646, -2646, -2646,   537,   537, -2646, -2646,  2052,   537, -2646,
   -2646,  2065, -2646, -2646,   537, -2646, -2646, -2646,   -31, -2646,
   -2646, -2646,  2067,  2071,  2073, -2646, -2646,   -46,  2053,  2075,
    2076,   -31, -2646, -2646, -2646, -2646, -2646,    62, -2646, -2646,
    2078,   -31,  2080,  2081,  2084,    62,    62,   -46,  2079,  2086,
    2088,  1759,  2089,  2090,  2091,    62,    62,   -46,  2087,  2093,
     -46,  2094,  2095,  2096,  2097,    62,    62,   -46,  2099,  2100,
    2101,  1089, -2646,  1091, -2646,  1167,  1817,  2102,  2104,  2105,
      62,    62,   -46,  2107,  2108,   -46,  2110,  1832,  2111,  2112,
    2114,    62,    62,   -46,  2121,  2122,   -46,  2123,    62, -2646,
   -2646, -2646, -2646, -2646,  2125, -2646, -2646,  2126,    62,  2127,
    2128, -2646, -2646,   -31, -2646, -2646,  2129, -2646,  1334, -2646,
    4958,   537,   537,  4958,   537,  2131,  1483, -2646, -2646, -2646,
   -2646, -2646, -2646,  2133,  4958,   355,  2135,  4958,  1334, -2646,
   -2646,  2137,  1483,   537,   537,   537,   537,   537,   537,   537,
     537,   537,  2142,  2145, -2646, -2646, -2646,  2146, -2646, -2646,
   -2646,  2148,  2149, -2646, -2646, -2646,   537,  4958,   537,  2152,
    1483,   355,  1334,  1334, -2646, -2646, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646,   537,  1672, -2646, -2646,  1334,  1334,
     537, -2646, -2646,  1334,  1334, -2646, -2646, -2646, -2646,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537, -2646,
   -2646,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     537,   537,  2119,  2157,   537, -2646,   537,   537,   537,  2150,
    2159, -2646, -2646,  1334,    11, -2646,  2161,  2163, -2646, -2646,
    1672,   537, -2646,  2160,  1334,  4958, -2646, -2646, -2646,  2166,
   -2646, -2646, -2646, -2646,  1205,  1205,  1205,  1205,  1205,  1205,
    1205,  1205,  1205, -2646, -2646, -2646, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646,
   -2646,  1483,   537, -2646,   537, -2646,   537,  1334,   537, -2646,
    1672,   537, -2646,   537, -2646,  1951,  2167,  2170,   537,   537,
   -2646,   537,   537,   537,   537,  2173,  1334,  4958, -2646, -2646,
     537, -2646,   537, -2646,    11,   594,   537,  2174, -2646,   537,
   -2646, -2646,  4768, -2646,  2175,  2176,  2177,  2178,  2179,  1334,
   -2646,   594,   594,   594,  1334, -2646,   594,    11,   594,   594,
    1334, -2646,   594,   594,   594,  1334, -2646,   594,   594,  1334,
    4958,   594,  1334,   594,   594,  1334,   594,  1334, -2646, -2646,
    2181,  4768,  2182,   537, -2646, -2646, -2646, -2646,  2184, -2646,
   -2646, -2646, -2646,   -31,    62, -2646, -2646, -2646, -2646, -2646,
   -2646,  2185, -2646, -2646,    62,    62, -2646, -2646, -2646, -2646,
   -2646,  2186, -2646, -2646,  2187,    62, -2646, -2646, -2646, -2646,
   -2646,  2188, -2646, -2646,    62,  2189,  2190,  2191,    62,    62,
     -46,  2193,  2194,  2195,  2197,  2198,  2199,    62,    62,   -46,
    2201,  2202,  2203,  2204,  2205,  2206,    62,    62,   -46,  2210,
    2211,  2212,    62,   -31,   -31,   -31,   -31,   -31,  2214,   -31,
     -31,  2215,    62,    62,   -31,   -31,   -31,   -31,   -31,  2218,
     -31,   -31,  2220,    62, -2646,    62,  2222, -2646,  2223,  2224,
   -2646,  4921, -2646,   594,  2225,  4958,   594,   537,  4958,  2227,
   -2646,   594, -2646, -2646,   594, -2646,  4958,  2228,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537, -2646,
   -2646, -2646,  4958,   594,   537,  4958,  2229, -2646,  1672,  1672,
    4958,  1672,  1672,  4958,  4958,  1672,  1672,   537,   537,   537,
     537,   537,   537,  1483,   537,   537,   537,  1823, -2646,  1483,
     537,   537,   537,   537,  1483,   537,   537,   537,   537,   537,
     537,  1334,   537,  1650,  1483,   537,   537, -2646, -2646,    11,
     355,  4958,  4958, -2646, -2646, -2646,    11,  1334,  2230, -2646,
   -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646,   537,
   -2646, -2646,  1672,   537, -2646, -2646, -2646,  1164,  2231,  2233,
    2238,  2239,   537,   537,   537,  2240,  1230, -2646,   594, -2646,
   -2646, -2646, -2646,  2241, -2646, -2646,  1334,  2243,  2244,  2246,
    2247,  4958,  2249, -2646, -2646, -2646, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646,    11,
     594, -2646,    11, -2646, -2646,    11, -2646,    11,  2250,  1334,
    2252, -2646,   537, -2646, -2646,   -31,    62, -2646, -2646,    62,
    2253, -2646,    62, -2646,   -31,   -31,   -31,   -31,   -31,  2254,
     -31,   -31,    62,   -31,   -31,   -31,   -31,   -31,  2255,   -31,
     -31,    62,   -31,   -31,   -31,   -31,   -31,  2257,   -31,   -31,
      62,   -31, -2646, -2646, -2646, -2646, -2646,    62, -2646, -2646,
    2258,   -31,   -31, -2646, -2646, -2646, -2646, -2646,    62, -2646,
   -2646,  2259,   -31, -2646,    62, -2646, -2646,  1334, -2646,  4958,
     594, -2646,  2260,  1334,   537, -2646, -2646,  1334,   537, -2646,
   -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646,   537,   537,
     594, -2646,  2261,  1334,   537,  1672, -2646,   594,   537,  1672,
     594,   594,  4958, -2646,   537,  2262,  2262,   537,   537,  2262,
    1483,  2262, -2646,  4958,  1619,  1638,  1741,  1807,  1843,  1871,
    1881,  1823, -2646,  1904, -2646, -2646,  1483,  2262,  2262,   537,
     537,  1483,   537,   537,   537,   537,   537, -2646,  1672,   537,
    2264, -2646, -2646,   537,  2262,   355,    29,  1334,  1334,   355,
      11,  2263, -2646, -2646, -2646,  2266,   537, -2646,  2267,  2269,
    2270,  2271,  2272,  2273,  2274,   537, -2646, -2646,  2275,     0,
    4958, -2646,  2277,     6,  4958, -2646, -2646, -2646, -2646, -2646,
   -2646,  2284,     0,   537, -2646, -2646, -2646,    62, -2646, -2646,
   -2646, -2646, -2646, -2646,    62, -2646, -2646,   -31, -2646, -2646,
   -2646, -2646, -2646,    62, -2646, -2646,   -31, -2646, -2646, -2646,
   -2646, -2646,    62, -2646, -2646,   -31, -2646,   -31,    62, -2646,
   -2646,   -31,    62, -2646, -2646,   537,   594, -2646,  4958,  4958,
     537,  4958,   537, -2646, -2646, -2646,  4958,  4958,   537, -2646,
   -2646,  4958, -2646, -2646, -2646,   594,  2287, -2646, -2646, -2646,
    1483,   537, -2646,  2288, -2646, -2646,  1334,   873,  2294,  2289,
    2297,  2298,  2299,  2303, -2646,   355,  2304, -2646, -2646,  1483,
     537,  2305, -2646, -2646,   537,  4958, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646,    29,  1883,  1562, -2646, -2646, -2646,   355,
    2307,  2309,  2310, -2646, -2646, -2646,  2308,  2313,  2314, -2646,
      91,     0, -2646, -2646, -2646, -2646,  2319,  4958, -2646, -2646,
   -2646, -2646, -2646,     0, -2646,  2322, -2646,   -31, -2646,   -31,
   -2646,   -31, -2646, -2646,   -31, -2646,   -31,  4921, -2646,   594,
     594,   537,   594,  2323,   594,   594,   537,   594,   537, -2646,
   -2646, -2646, -2646,  2324, -2646,   537, -2646, -2646,  2325, -2646,
    2328, -2646, -2646, -2646, -2646, -2646,   537, -2646, -2646, -2646,
    2329,   537, -2646, -2646, -2646,  1334, -2646, -2646, -2646,  1883,
   -2646,  1898,  1965,  1562, -2646, -2646, -2646,  2341,  2342, -2646,
   -2646, -2646, -2646, -2646, -2646,   852,   852, -2646, -2646,  1334,
   -2646, -2646, -2646, -2646, -2646, -2646, -2646,   594, -2646, -2646,
    2330, -2646,  4768, -2646, -2646,  2345, -2646,  1483, -2646, -2646,
    1483,   537, -2646,  2348, -2646,   537, -2646,  1483,   537, -2646,
    4958, -2646,  1898, -2646,   355, -2646,  2349,  2352,   537,   537,
     537,   537,     6,  2365,  4768,  1334, -2646,  4768, -2646, -2646,
     537, -2646,  2346, -2646,   537,   594, -2646, -2646, -2646,  2369,
    2370,   537,  2371,   537, -2646, -2646,  1334, -2646, -2646,  1334,
   -2646, -2646,  2377, -2646, -2646,  2384,  2385, -2646, -2646,  2389,
   -2646,  2390, -2646, -2646,  1483, -2646,  1483, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646, -2646
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2646, -2646,    -3, -2646,   331,  -943, -1501, -1030,  1555, -2646,
     948,  -338,  1681,   -51,    19, -2646, -2646, -1767,  1731,  1367,
    -936,   804,  -954,  1291,   -10, -2646, -1025, -2646,  -785, -1222,
   -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646,  -594,  -505, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646, -2612, -2646, -2646, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646, -2646, -2646,   354, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646, -2646, -2646, -2646,  -256,   -20, -2646,
   -2646, -2646, -2646, -2646, -2646, -2646, -2646, -1549, -2646, -2646,
   -2646, -2646, -2646, -2646,  -692, -2646, -2646, -2646, -2646, -2646,
   -2646,    42, -2646, -2646, -2646, -2646,  -402,  -688, -2151,  -547,
   -2646, -2646, -2646, -2646, -2646,  -605,  -598, -2646, -2646, -2645,
   -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646,  1606, -2646, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646, -2646,
   -2646, -2646, -2646, -2646
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1309
static const yytype_int16 yytable[] =
{
      70,  2007,   371,   924,  1336,  1337,  1338,  1672,   109,  1344,
    2170,  1685,  2172,   178,   729,  1151,  1154,   645,    67,    68,
    2072,   953,  1532,  1599,  1178,    67,    68,    67,    68, -1118,
     335,  2782,   309,  1817,  1813,    67,    68,  2788,   434,  2025,
     333,  1731,  1732,  1733,  1507,   959,    67,    68,   836,   365,
    2794,  1195,   376,   652,   311,   382,   391,   840,   843,   388,
    1581,  2026,   395,   427,  2027,  1140,   398,   400,  1120,   860,
     410,  1823,  1419,   417,   421,  2028,   617,   424,  1450,   723,
     425,   426,   326,   432,  1763,   968,   822,  1454,   433,   764,
    1457,    67,    68,  1121,    67,    68,    67,    68,  2029,   682,
    1414,   446,   450,   455,   456,   460,   462,   929,  1835,  1290,
    1062,  1492,  1137,   114,  1301,  1146,  2030,   111,   336,  1536,
     413,  1302,   466,  1821,  1435,  1182,   903,   104,   111,   275,
     285,  1431,   337,    67,    68,   861,   906,   465,  1141,    67,
      68,   913,    67,    68,    67,    68,  1196,   105,   562, -1308,
      67,    68,  1197,  1737,    67,    68,   165,   475,  1063,   166,
    1432,   414,   249,   111,   724,  1565,  1827,  1836,  1533,  2867,
    1995,  1589,   930,    57,  1156,   602,   960,  1047,  1157,  1818,
    1649,  2870,   507,  1415,  1997,  1859,   225,   528,   954,   167,
     276,  1650,  2783,   111,   379,    67,    68,   168,  2789,   914,
     106,    67,    68,   226,   969,   765,  2903,   286,   862,   529,
     381,   537,   277,   542,   546,   730,   428,   429,   799,   406,
     338,   443,   731,   732,   582,   247,  1451,    79,  1142,  1436,
    1122,   111,   313,   339,   116,  1837,    67,    68,   500,   615,
    2000,   162,   563,  1534,   501,   116,   444,    67,    68,   585,
     653,  1158,  1048,   180,  1819,   725,   804,  2926,   733,   169,
     659,  1814,   253,   401,   754,   618,  1566,   278,   435,   273,
     418,   823,  1590,   726,   111,  1159,   689,   690,   837,   800,
     116,   122,  1291,   502,  1537,  1123,  2862,   327,  1822,  1535,
     107,  2784,   736,   603,   738,  1064,  1407,  2790,  1824,   863,
    1820,   111,   740,   743,   864,   746,   750,   287,   752,   503,
     116,  1124,  1582,   170,   430,   568,   392,   805,   762,  1147,
    1764,   111,   288,   119, -1118,    69,   646,   748,   772,   774,
    2073,   120,   121,  1600,   119,   364,   813,   407,   171,   955,
     172,  1160,   120,   121,   961,   164,   176,   838,   116,   331,
     841,   844,   825,   248,   827,   829,   504,   831,  1198,   111,
     281,   834,   835,   816,   340,  1138,   734,   316,   173,   119,
    1065,   419,   849,   851,   683,   572,  2031,   120,   121,   852,
    1066,   408,   409,   819,   855,   857,   289,   108,   380,  1183,
     598,   116,   858,  1828,   250,   859,   375,  1996,  1782,   119,
     505,   506,   604,  1148,  2863,   412,  1786,   120,   121,  1860,
    1573,  1998,  1067,  1211,   869,   870,  1184,   251,   116,   124,
     111,   874,   875,   876,   877,   878,   879,   880,  1593,   881,
     124,   828,   605,  1567,   657,   174,   279,   119,   116,  1591,
     801,  2735,  1161,   888,   387,   120,   121,   889,   505,  2864,
     332,   420,   894,   895,   896,   897,   898,   899,  1631,   900,
     402,   450,   904,   905,  2113,   124,  2051,  2001,   154,   265,
    2760,   450,   907,   283,   155,   156,   116,  2056,   806,   154,
     119,  1976,   902,  1216,   280,   155,   156,   785,   120,   121,
    1643,   661,  1127,  1563,   254,   124,   477,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   949,   119,  1992,   299,
     342,   403,    67,    68,   154,   120,   121,   255,   404,   328,
     155,   156,   323,   917,  1248,   936,   937,   119,  1954,  1829,
    2020,  1957,  1788,   124,  1128,   120,   121,   116,  1254,   314,
      67,    68,   329,   945,   154,  1022,  1023,   569,   787,   315,
     155,   156,   658,  1243,  1186,  1569,  1217,   921,   114,   349,
     343,   325,  1570,  1324,  1221,   119,  1259,  1007,   776,   344,
     570,   950,   373,   120,   121,   910,   124,  2820,  2821,   971,
    1673,  2824,   154,  2826,   114,  1249,  1035,  1049,   155,   156,
      67,    68,  1677,  1024,  1036,  1037,  2837,  2838,   922,  1255,
     345,  2842,  2843,   124,   378,  2846,  1340,   573,   687,   688,
    2847,  2848,  1002,   548,  1244,  1583,   991,  1791,  1792,  1681,
      80,  1053,   599,   124,   918,   154,   119,  1260,   549,   777,
     574,   155,   156,  1845,   120,   121,   350,  1222,   745,  1127,
    1072,  1674,  1038,   662,   663,   600,  1218,   351,  1872,  1873,
     550,   514,   154,  1678,  1245,    81,  1021,   809,   155,   156,
     515,   124,  1050,  1187,   778,   779,   911,   384,  2888,  2645,
     551,  2889,   154,  1129,   352,   385,  2892,  1830,   155,   156,
    1682,  1128,   814,   817,   820,   386,  1071,   552,  2896,  1130,
    1131,   553,  1793,  2899,  1838,  1687,  1874,  1575,  1150,   390,
    1564,    67,    68,  1149,   919,  1848,  1162,    67,    68,   795,
     154,  1188,  1056,  1192,  1395,   856,   155,   156,  1219,   554,
     555,   423,   124,   586,   439,  1401,   122,  1223,    82,  1390,
    1025,  1026,   810,  1202,   441,  1691,  1831,  1203,  1204,  1205,
    1206,   664,  1476,  1207,   587,  1209,  1250,  1210,   450,  1212,
    1477,  1478,   122,   353,   437,  1901,  1688,   360,  1189,   588,
    1256,  1926,   780,  1902,  1903,   346,    67,    68,  2941,  1927,
    1928,   154,  2944,    83,    84,  1246,   556,   155,   156,  1039,
    1040,  1846,  1132,  1133,  1833,  1281,   557,  1057,  1261,   476,
     781,  1834,  2955,  1465,   354,  1391,  1692,  1576,  1479,  1224,
    1474,    58,  1675,  1409,  1937,  1027,  2962,   463,   580,  2963,
    2964,  1904,  1938,  1939,  1679,  1028,  1029,  1929,    85,   114,
    1129,   487,  1584,  1392,   488,  1273,  1274,  1238,  1275,  1277,
    1279,  1280,  1240,  1875,  1876,   811,  1130,  1131,    67,    68,
    1847,  1683,  1190,    59,  2173,  1293,  1294,  1030,   558,   559,
     498,  1396,  1298,  1299,  1041,    67,    68,  1577,  2183,   114,
    1940,    60,  1252,   355,  1042,  1043,  1695,   589,   581,  1044,
    1655,    86,  1305,  1306,  1307,  1308,  1309,  1310,  1311,  1699,
     361,   510,  2409,  2410,  2411,  2412,  2413,  2414,  2415,  2416,
    2417,    61,   356,  1319,  1320,  1321,  1045,  1323,   450,  1325,
     357,  1326,  1239,   416,   539,  1393,  1397,  1241,  1877,  1703,
      62,  1709,  1512,   512,    63,   566,   358,  1689,  1878,  1879,
     560,  1717,  1329,  2228,  1331,  1721,   590,  1696,    64,  1132,
    1133,  1497,  1398,   668,  1333,  1480,  1481,  1253,   576,  1513,
    1700,   450,  1341,  2241,  1330,   565,  2329,  1343,  1905,  1906,
    1880,   567,  2095,  2251,  1930,  1931,  2254,  1693,  1394,   755,
     584,   394,  2337,  2261,  1356,   627,   594,   362,  1360,   597,
    1704,   591,  1710,  1514,    98,  1400,  1402,  1405,  2298,  1515,
     592,  2301,  1718,  1410,  1017,  1516,  1722,   122,  1416,  2309,
    2356,    99,  2312,   616,   921,   756,   622,  1941,  1942,  1417,
    1469,  1783,    67,    68,  1498,  1517,    67,    68,   595,   628,
    1482,  1892,  1893,   972,   973,  1404,  1434,  1539,  1427,  1839,
    1483,  1484,   577,  1907,   625,  1485,  1518,   122,   623,  1932,
    1466,    67,    68,  1908,  1909,   922,  1601,  1475,  1910,  1933,
    1934,  1602,  1165,  1519,  1935,  1540,   669,  1193,  1541,   757,
    1912,  1913,  1486,   644,  1491,   648,   578,   649,  1977,  1894,
    1840,   631,  1753,  1603,  1604,  1911,  1605,  1606,  1980,   974,
     318,  1936,  1943,   100,   651,   975,  1520,  1607,  1542,   655,
    1499,  1500,  1944,  1945,   656,   670,   671,  1946,  1697,  1608,
    1609,  1568,   177,    65,   660,  1501,   685,  1610,  1914,  1179,
    1611,  1701,  2265,  2266,  2274,  2275,   666,  1543,    67,    68,
    1544,  2418,  1592,   680,  1947,  1521,  1297,   101,  1612,  1841,
     686,  1598,   629,   691,   976,  1613,  1614,   728,   672,  1615,
    1522,  1705,   739,  1711,   632,   257,   753,  1626,  1502,  1627,
     760,   977,  1523,  1719,  1628,  1629,  1630,  1723,  2400,   761,
    2267,   763,  2276,   102,  1636,  1978,   978,  1637,  1127,  1639,
     758,   767,   979,   769,   258,  1981,    88,    67,    68,   980,
    1524,   775,  1180,   803,   291,   319,  1641,   633,  1642,  1842,
    2283,  2284,  1525,   673,  1526,  1527,  1646,  1647,  2828,   883,
     884,    67,    68,   292,  1616,   293,  1895,  1896,    67,  1276,
    1128,  1653,  1654,  1284,  1285,   450,  1656,  1657,   674,  1979,
      67,    68,   808,  1659,  1313,  1660,   634,   826,  1662,  1982,
    1663,   783,  1153,  2635,  1528,   981,   832,   457,  2285,  2822,
     607,  1545,  1741,   833,   676,  1915,  1916,   846,  2441,   853,
     259,   608,   300,   854,   982,   867,  1666,  1667,  2839,   983,
    1617,   984,   677,   871,   320,   260,  1618,    88,    67,    68,
    1970,  2459,  1181,   321,  1546,   872,  1734,   868,   609,   266,
    1735,  1897,  1736,  1619,  1287,  1288,  1739,   985,   986,    67,
    1355,  1898,  1899,  1620,   873,   987,   882,  2268,  2269,  2277,
    2278,   885,  1745,    89,  1748,   887,  1750,  1751,  1752,  1754,
     458,   447,  1756,  1757,   988,  1759,  1760,  1761,  1762,   449,
    1917,  1621,  1622,  1900,  1747,  1770,  2499,   261,   294,    90,
    1918,  1919,  1776,    91,   908,  2508,  1777,  1778,  1779,    67,
      68,  1973,  1623,   397,  2517,   678,   450,  1784,   909,  1129,
    1787,  1634,  1635,  2590,   916,    67,    68,   610,  1797,  2606,
    1798,   925,  1920,  1800,  2611,  1130,  1131,   267,   927,   262,
     989,   932,  2270,  1789,  2279,  2286,  2287,   934,   467,   263,
     947,   268,  2271,  2272,  2280,  2281,    92,   295,  1624,  2013,
    2014,  1809,  1668,  1669,    89,   301,  1443,  1444,   611,  2919,
     459,   952,   302,   957,   303,   963,  2923,  1850,   964,  1851,
     891,   892,  1852,  1853,  2273,  1854,  2282,  1855,   269,   966,
      90,  1670,   992,  1857,  2169,  1858,   967,    93,  1865,  1866,
    1867,   993,   296,  1802,  1864,    94,    95,   994,  1869,  1870,
    1871,   297,  1003,    67,    68,   996,   228,  1882,  1883,  1884,
    2288,   468,  1885,  1886,   998,  1888,  1889,  1000,  1132,  1133,
    2289,  2290,  1595,  2960,  1005,  2961,  1009,   612,   229,   270,
    1547,   230,  1014,  2625,   469,   470,  1015,    92,   848,   741,
    2629,  1016,   271,   471,  1018,    67,    68,  1019,  1020,  1961,
    1962,  1031,  2291,  1964,  1965,  1032,    67,    68,  1548,  1504,
    1505,  1549,  1034,   472,  1550,   231,  1803,    67,    68,  2017,
     489,  1033,   232,   473,  1046,  1971,  1972,  1974,    93,  1640,
     613,   770,  1058,   233,   234,  1060,    94,    95,   490,  1061,
     235,  1551,  1068,  1648,    72,  1069,  1969,  1984,  1070,  1135,
      73,  1987,  1126,  2655,  1144,   491,  2657,  1145,  1199,  2658,
    1201,  2659,   742,  1213,  1200,   236,  1215,  1226,   492,  1228,
    1552,  1227,  1229,  1553,  1233,  2016,  2018,  1234,  1230,  1235,
    2733,  2729,  1231,   237,  2732,  2024,  2734,   493,  2034,    74,
     785,   494,  1804,  1805,  1237,  2040,  2746,  1232,  1236,   238,
     239,  2751,  2747,  2748,   771,   495,   240,  1806,  1258,  2045,
    1263,  1264,  1265,  1268,  2047,    75,  1266,  1267,  2049,  2762,
    2052,  2053,  1269,  2055,  2057,  2058,  1270,  2061,   241,  1271,
    2064,  2065,  2066,  2067,  2068,  2069,  2070,  2071,  2074,  2076,
    2077,  1272,  1282,  2079,  2080,  2081,  2082,   786,   496,  1283,
    1807,   787,  1286,  2088,  2089,  1289,  1303,  2091,  2092,  2093,
    1295,  1296,    76,  2096,  2097,  1767,  1768,   242,    67,    68,
    1975,  1504,  1505,  1300,  1166,  1304,  2100,  2101,  1312,  2102,
    2103,  1314,  1167,  1315,  1346,  1327,   788,   789,  1168,  1328,
    1347,   790,  1348,  1352,  1554,    67,    68,   751,  1350,  1353,
     447,   448,   449,  1351,  1354,  1169,  1358,    77,  1406,  1109,
    1359,  1170,  1408,  1412,  2769,  1418,  1420,  2361,  1421,  1424,
     243,  1425,  1428,  1110,  1429,  1430,  1438,  1555,  1439,   791,
    1440,   244,  1111,  1441,  1445,  1171,   310,    67,    68,  1991,
    1504,  1505,  1446,  1112,  1447,  1172,    67,    68,  2019,  1504,
    1505,  2141,  2142,  2143,  1556,  1448,  2144,  1449,   847,  1455,
     245,  2146,  2149,  1456,  2151,  2152,  2153,  1458,  2154,  2155,
    1459,  2157,  2403,  2158,  2159,  1113,  2161,  2162,  2163,  2164,
     792,  1461,  1463,  2148,   793,  1173,  1471,  2167,  1473,  1487,
    1488,  1562,  1489,  1174,  1490,  2171,  1114,  1493,  1508,  1494,
    2176,  2177,  1495,  1511,  1509,  1510,  2179,  1530,  1531,   794,
    1538,  1557,   795,  1558,  1560,  2182,  1559,  1561,  1571,   464,
    1579,  1574,  1580,   796,  1585,  1596,  1578,  1586,  1587,  1597,
    1588,  1633,  2424,  1594,  1644,  1645,  1651,  1652,  1658,  1175,
    1665,  1661,  1664,  1686,  1707,  1708,  1115,  1714,  1713,  2210,
    1715,  1176,  2195,  1716,  1967,  1725,  1726,  1727,  1744,  1728,
    1729,  1730,  2201,  1742,  1743,  1766,  2206,  1177,  1755,  1758,
    2218,  2219,  1749,  1771,  1772,  2221,  1773,  2918,  2224,  1785,
    1799,  2223,  1790,  1985,  -464,  1116,  1801,  1989,  1810,  1811,
     526,  2232,   533,   536,  1812,   541,   545,  1816,  2594,  1843,
    1825,  2235,  1826,  1844,  1862,  1832,  1849,  1856,  1863,  2595,
    1868,  1887,  1117,   935,  2021,  1890,  1948,  1921,  1923,  1925,
     940,  1949,  1950,   941,  2036,  1951,   620,  1955,   942,  1956,
    1993,  1958,   944,  2041,  2042,  1166,  2596,  1959,  1960,  1963,
    1994,  1966,  1983,  1167,  2046,   636,   642,  1986,  1990,  1168,
    2002,   647,  1118,  1999,  1119,   650,  2003,  2004,  2005,  2006,
    2008,  2009,  2010,  2011,  2015,  2033,  1169,  2037,  2048,  2050,
    2054,  2059,  1170,  2320,  2062,  2597,  2012,  2063,  2078,  2085,
    2086,  2087,  2427,  2098,  2099,  2620,  2104,  2105,  2324,  2325,
    2106,  2327,  2107,  2108,  2109,  2112,  1171,   737,  2110,  2111,
    2114,  2115,  2116,  2737,  2117,  2118,  1172,  1008,  2119,   747,
    2338,  2339,  2340,  2341,  2342,  2343,  2344,  2345,  2346,  2120,
    2121,  2122,  2738,  2123,  2124,  2125,   890,  2126,  2127,   768,
    2128,  2129,  2130,  2352,  2131,  2354,  2132,  2133,  2134,  2137,
    2575,  2576,  2135,  2578,  2579,  2136,  1173,  2582,  2583,  2138,
    2139,  2360,   450,  2140,  1174,  2156,  2160,  2364,  2165,  2178,
    2245,  2184,  2185,  2186,  2187,  2188,  2367,  2368,  2369,  2370,
    2371,  2372,  2373,  2374,  2375,  2376,  2220,  2229,  2379,  2380,
    2381,  2382,  2383,  2384,  2385,  2386,  2387,  2388,  2389,  2390,
    2222,  2393,  2225,  2394,  2395,  2396,  2226,  2852,  2227,  2230,
    1175,  2231,  2234,  2242,  2633,  2236,  2237,   450,  2404,  2238,
    2243,  2252,  1176,  2244,  2246,  2247,  2248,  2253,  2292,  2255,
    2256,  2257,  2258,  2262,  2263,  2739,  2264,  2293,  1177,  2294,
    2295,  2299,  2300,  2303,  1208,  2302,  2304,  2305,  2598,  2306,
    2599,  1214,    67,    68,   886,  2310,  2311,  2934,  2313,  2315,
    2316,  2318,  2319,   866,  2321,   893,  2328,   112,  2330,  2419,
    2333,  2420,  2336,  2421,   901,  2423,  2347,   450,  2425,  2348,
    2426,  2349,  2350,  2351,  2397,  2430,  2431,  2355,  2432,  2433,
    2434,  2435,  2392,  2398,  2405,  2852,  2401,  2439,  2402,  2440,
    2408,  2740,  2428,  2443,  2600,  2429,  2445,  2436, -1136,  2444,
    2448,  2449,  2450,  2451,  2452,  2478,  2866,  2481,  2483,  2486,
    2489,  2490,  2492,  2598,  2494,  2495,  2496,  2500,  2501,  2744,
    2502,  2447,  2503,  2504,  2505,  2509,  2510,  2741,  2511,  2512,
    2513,  2514,   938,   939,  2518,  2519,  2849,  2520,  2527,  2530,
    2482,   115,  2538,  2484,  2541,   943,  2544,  2545,  2546,  2549,
     946,  2554,  2558,  2574,  2631,  2742,  2637,  2719,  2638,   958,
    2480,  2722,  2639,  2640,  2644,  2743,  2647,  2649,  2905,  2650,
    2651,  2901,  2652,  1316,  2654,  2660,  2662,  2667,  2674,  2683,
    1318,  2692,  2698,  2702,  2708,  2716,  2727,  2770,  2745,  2759,
    2547,  2771,  2773,  2774,  2775,  2776,  2777,  2778,  2779,  2781,
    2757,   117,  2787,  2522,  2523,  2524,  2525,  2526,  2793,  2528,
    2529,  2819,  2825,  2830,  2533,  2534,  2535,  2536,  2537,  2829,
    2539,  2540,  2831,  2832,  2833,  1334,  1335,  2834,  2836,  2841,
    1339,  2856,  2859,  1342,  2857,  2858,  2332,  2860,  2861,  1010,
    1011,  1012,  1013,  2868,  2552,  1349,  2871,  2882,  2890,  2904,
    2893,  1453,  2894,  2897,  2914,  2559,  2560,  2561,  2562,  2563,
    2564,  2565,  2566,  2567,  2568,  2569,  2906,  2907,   123,  2917,
    2943,  2572,  2357,  2921,  2928,   450,   450,  2929,   450,   450,
    2909,  2911,   450,   450,  2584,  2585,  2586,  2587,  2588,  2589,
    2935,  2591,  2592,  2593,  2947,  2948,  2950,  2607,  2608,  2609,
    2610,  2954,  2612,  2613,  2614,  2615,  2616,  2617,  2956,  2619,
    2957,  1164,  2623,  2624,  2958,  2959,  1242,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2632,     0,     0,   450,
    2634,     0,     0,     0,  2636,     0,     0,     0,     0,  2641,
    2642,  2643,     0,     0,     0,     0,     0,     0,     0,  1496,
       0,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,     0,
       0,     0,     0,     0,     0,  2664,     0,     0,     0,  2663,
       0,     0,     0,     0,  2669,  2670,  2671,  2672,  2673,     0,
    2675,  2676,     0,  2678,  2679,  2680,  2681,  2682,     0,  2684,
    2685,     0,  2687,  2688,  2689,  2690,  2691,     0,  2693,  2694,
       0,  2696,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2699,  2700,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2703,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2710,     0,     0,     0,  2712,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2713,  2714,     0,  1317,     0,
       0,  2718,   450,     0,     0,  2721,   450,     0,     0,     0,
    1322,  2726,     0,     0,  2730,  2731,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2749,  2750,     0,  2752,
    2753,  2754,  2755,  2756,     0,   450,  2758,  1332,     0,     0,
    2761,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2772,     0,     0,     0,     0,     0,     0,
       0,     0,  2780,     0,     0,     0,     0,     0,  1740,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2795,     0,     0,     0,     0,     0,     0,  2798,     0,     0,
       0,     0,     0,     0,     0,     0,  2800,     0,     0,     0,
       0,     0,     0,     0,  1769,  2802,     0,  2803,     0,  1774,
       0,  2805,     0,     0,     0,     0,     0,  1423,     0,  1780,
       0,     0,  2807,     0,     0,     0,     0,  2811,     0,  2813,
       0,     0,     0,     0,     0,  2816,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2823,     0,
       0,  2626,     0,     0,     0,     0,     0,  1881,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2840,     0,  1891,
       0,  2844,     0,     0,     0,     0,  2877,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1952,  1953,     0,     0,     0,     0,  2865,  1572,     0,
       0,     0,     0,     0,     0,     0,     0,  2872,     0,  2873,
       0,  2874,     0,     0,  2875,     0,  2876,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2880,     0,
       0,     0,     0,  2885,     0,  2887,     0,     0,     0,     0,
       0,     0,  2891,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1632,  2895,     0,     0,     0,     0,  2898,     0,
       0,     0,  1638,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2908,  2910,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2920,     0,
       0,     0,  2922,     0,     0,  2924,     0,     0,     0,     0,
       0,  2916,     0,     0,     0,  2930,  2931,  2932,  2933,     0,
       0,     0,     0,     0,     0,     0,     0,  2942,     0,     0,
       0,  2945,     0,     0,     0,     0,     0,     0,  2949,     0,
    2951,     0,     0,  2937,     0,     0,  2940,     0,     0,  2035,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2763,     0,  1738,     0,
    2768,     0,     0,    67,    68,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1746,     0,   112,  2442,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2454,  2455,  2456,   305,  2084,
    2458,     0,  2460,  2461,  1775,  2090,  2463,  2464,  2465,     0,
       0,  2467,  2468,     0,  1781,  2471,   114,  2473,  2474,     0,
    2476,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1796,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1808,     0,     0,     0,     0,  1815,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   115,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2835,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2855,     0,     0,     0,     0,     0,     0,     0,  2145,     0,
       0,     0,     0,  2150,     0,     0,     0,     0,     0,     0,
       0,     0,   117,     0,     0,     0,     0,  2548,     0,     0,
    2551,     0,     0,     0,     0,  2555,     0,     0,  2556,     0,
       0,     0,  2168,     0,     0,     0,     0,     0,  2174,     0,
       0,     0,     0,     0,     0,     0,     0,  2571,     0,     0,
       0,     0,   306,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2190,     0,     0,  2233,     0,
       0,     0,  2197,     0,   122,     0,  2239,  2240,  1968,   123,
       0,     0,     0,     0,     0,     0,  2249,  2250,     0,     0,
     307,     0,     0,     0,     0,     0,  2259,  2260,     0,     0,
       0,     0,     0,     0,     0,     0,  1988,     0,     0,     0,
       0,  2296,  2297,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2307,  2308,     0,  2927,     0,     0,     0,  2314,
       0,     0,  2646,     0,     0,  2022,     0,     0,  2023,  2317,
       0,     0,     0,     0,     0,     0,     0,  2038,  2039,     0,
       0,     0,     0,   308,     0,  2043,     0,     0,     0,     0,
       0,     0,  2044,     0,  2656,     0,     0,     0,     0,     0,
       0,     0,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
       0,     0,  2083,     0,     0,   367,     0,     0,     0,     0,
       0,     0,   368,     0,  2094,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2322,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2707,  2335,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2715,     0,     0,     0,     0,     0,
       0,  2720,   111,     0,  2723,  2724,     0,     0,     0,  2358,
    2359,     0,     0,     0,     0,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     0,  2362,  2363,     0,     0,     0,
    2365,  2366,     0,     0,     0,     0,     0,   113,     0,     0,
       0,     0,     0,     0,     0,  2147,     0,     0,     0,     0,
       0,     0,     0,     0,   114,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2166,     0,     0,
    2399,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2406,     0,  2175,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2180,     0,  2181,     0,
     115,     0,     0,     0,     0,     0,     0,     0,  2189,     0,
       0,  2191,  2192,  2193,  2194,  2196,     0,  2198,     0,   116,
    2199,     0,     0,     0,  2200,  2202,  2203,  2204,  2205,  2207,
    2808,  2208,  2209,     0,  2422,     0,  2211,  2212,  2213,     0,
       0,  2214,  2215,     0,     0,  2485,     0,  2216,  2217,  2818,
       0,     0,     0,  2437,     0,  2487,  2488,     0,     0,     0,
     117,     0,     0,     0,     0,     0,  2491,     0,     0,     0,
     369,     0,     0,   370,     0,  2493,  2453,     0,     0,  2497,
    2498,  2457,     0,     0,     0,     0,     0,  2462,  2506,  2507,
       0,     0,  2466,     0,     0,     0,  2469,  2515,  2516,  2472,
     118,     0,  2475,  2521,  2477,     0,     0,     0,   119,     0,
       0,     0,     0,  2531,  2532,     0,   120,   121,     0,     0,
       0,     0,   122,     0,  2542,     0,  2543,   123,     0,     0,
       0,     0,     0,  2878,  2879,     0,  2881,     0,  2883,  2884,
       0,  2886,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
       0,  2323,     0,     0,  2326,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2331,     0,     0,  2334,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2913,     0,     0,   124,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2353,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,     0,  2946,
       0,     0,     0,   154,     0,     0,     0,     0,     0,   155,
     156,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2391,     0,     0,     0,     0,  2618,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2630,     0,  2407,  2665,     0,     0,
    2666,     0,     0,  2668,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2677,     0,     0,     0,     0,     0,     0,
       0,     0,  2686,     0,   692,   693,     0,     0,     0,     0,
       0,  2695,     0,  2648,     0,     0,     0,     0,  2697,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2701,
       0,     0,     0,     0,     0,  2704,     0,    67,    68,     0,
       0,     0,     0,     0,     0,     0,  2661,     0,  2438,     0,
       0,     0,   112,     0,     0,     0,     0,     0,     0,     0,
     694,     0,     0,  2446,     0,     0,   695,     0,     0,     0,
       0,     0,     0,   696,     0,   697,     0,     0,     0,     0,
     698,     0,     0,   699,     0,     0,     0,     0,     0,   700,
     114,  2470,     0,     0,     0,     0,     0,     0,     0,     0,
     701,     0,  2479,     0,     0,     0,   702,     0,     0,     0,
       0,     0,     0,     0,  2705,   703,     0,     0,     0,     0,
    2709,     0,     0,     0,  2711,     0,     0,     0,     0,     0,
       0,     0,   704,     0,     0,     0,   115,     0,     0,     0,
    2717,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   705,     0,     0,     0,     0,  2796,     0,
       0,     0,     0,     0,     0,  2797,     0,     0,     0,     0,
     706,     0,     0,     0,  2799,     0,     0,     0,     0,     0,
       0,   707,   708,  2801,     0,     0,     0,     0,     0,  2804,
       0,     0,     0,  2806,  2766,  2767,   117,     0,     0,     0,
       0,     0,     0,   709,     0,     0,  2550,     0,     0,  2553,
       0,     0,     0,     0,     0,     0,     0,  2557,     0,     0,
       0,     0,     0,     0,     0,     0,   710,     0,     0,   544,
       0,     0,     0,  2570,     0,     0,  2573,     0,     0,     0,
     711,  2577,   712,   112,  2580,  2581,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   713,   122,     0,
       0,     0,   714,   123,     0,     0,     0,     0,     0,   715,
       0,     0,     0,     0,     0,     0,   716,     0,     0,     0,
       0,   114,  2627,  2628,     0,     0,  1795,     0,     0,     0,
       0,     0,     0,     0,     0,   717,     0,     0,     0,     0,
     112,     0,     0,  2827,     0,     0,     0,     0,   718,   719,
       0,   720,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   115,     0,     0,
       0,     0,  2653,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   721,     0,     0,     0,     0,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   115,     0,     0,   117,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2900,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2706,     0,     0,     0,     0,     0,  2912,     0,     0,     0,
       0,     0,     0,     0,   117,     0,     0,     0,     0,   122,
       0,     0,     0,     0,   123,     0,     0,     0,     0,     0,
       0,     0,     0,  2725,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2736,     0,     0,     0,     0,     0,
       0,     0,  2938,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   637,   112,     0,     0,     0,
       0,     0,     0,  2952,     0,     0,  2953,     0,     0,     0,
       0,   123,  1051,     0,     0,     0,     0,  1052,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2786,     0,     0,     0,  2792,   638,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,     0,     0,     0,     0,     0,
     115,     0,     0,     0,     0,     0,   112,     0,     0,  2809,
    2810,     0,  2812,     0,   639,     0,     0,  2814,  2815,     0,
       0,     0,  2817,     0,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,     0,   517,   518,     0,  2845,   519,     0,     0,
     117,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   640,     0,
     520,     0,     0,     0,     0,     0,     0,     0,  2869,     0,
     115,     0,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
    1467,     0,     0,     0,     0,     0,     0,   123,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     117,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   521,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   522,  2915,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   641,     0,     0,
       0,  2925,     0,     0,   523,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2936,     0,   123,  2939,     0,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     524,     0,     0,     0,     0,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,  1468,     0,     0,     0,     0,     0,     0,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,     0,   525,
    1073,  1074,  1075,     0,     0,  1361,  1362,  1363,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1076,
    1077,     0,     0,  1078,  1364,  1365,  1079,   112,  1366,     0,
       0,     0,     0,  1080,     0,  1367,     0,  1081,  1368,     0,
       0,     0,  1369,     0,     0,  1082,  1083,     0,     0,     0,
    1370,  1371,     0,  1084,  1085,     0,   112,     0,  1372,     0,
       0,     0,     0,     0,     0,   114,     0,     0,     0,     0,
       0,  1086,     0,     0,     0,     0,     0,  1087,     0,     0,
       0,  1088,  1089,     0,     0,  1090,  1373,  1374,     0,     0,
    1375,     0,     0,     0,   114,     0,     0,     0,     0,     0,
       0,     0,     0,  1091,     0,     0,     0,   112,  1376,     0,
       0,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1092,     0,     0,     0,     0,  1377,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     115,     0,     0,     0,     0,     0,     0,     0,   531,     0,
    1093,     0,     0,     0,     0,  1378,     0,     0,     0,     0,
       0,     0,     0,     0,  1379,     0,     0,     0,     0,     0,
       0,   117,     0,     0,  1094,     0,     0,     0,     0,     0,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   115,     0,     0,     0,     0,     0,     0,     0,     0,
     117,     0,     0,     0,  1095,     0,  1096,     0,     0,  1380,
       0,     0,  1097,  1098,     0,     0,     0,  1381,  1382,  1422,
       0,     0,     0,     0,     0,     0,     0,     0,  1099,  1100,
       0,     0,     0,   122,  1383,     0,     0,     0,   123,  1101,
    1102,     0,     0,     0,     0,  1384,   112,     0,     0,     0,
       0,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,     0,     0,   115,  1103,   123,  1104,     0,
       0,  1385,     0,  1386,     0,     0,     0,     0,     0,     0,
    1105,     0,  1106,  1387,     0,     0,     0,     0,  1107,     0,
       0,     0,     0,  1388,     0,     0,     0,     0,     0,   535,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   123,     0,
       0,     0,  1108,     0,     0,   117,     0,  1389,     0,     0,
     115,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,     0,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   532,     0,
     117,     0,   123,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   123,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,     1,     0,
       0,     2,     0,     0,     3,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,     0,     0,
       0,     0,     5,     6,     0,     7,     8,     9,     0,     0,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,    11,     0,    12,    13,     0,     0,     0,     0,
       0,     0,     0,     0,    14,    15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    16,     0,     0,
       0,     0,     0,     0,     0,     0,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     0,    19,     0,     0,    20,     0,     0,     0,
      21,    22,     0,     0,     0,    23,    24,     0,     0,    25,
       0,     0,     0,     0,     0,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,     0,    28,    29,    30,     0,     0,    31,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,    35,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    37,     0,    38,     0,   182,     0,
       0,   183,     0,    39,   184,     0,     0,    40,     0,     0,
       0,    41,     0,    42,     0,    43,     0,     0,     0,     0,
      44,     0,     0,   185,     0,   186,   187,   188,     0,     0,
       0,     0,     0,     0,    45,   189,     0,   190,     0,     0,
      46,     0,   191,     0,   192,   193,   194,     0,     0,     0,
       0,     0,   195,     0,   196,     0,    47,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,     0,
      50,     0,     0,     0,     0,     0,    51,     0,     0,    52,
      53,     0,     0,     0,     0,   197,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   198,     0,     0,     0,     0,     0,     0,
      54,   199,     0,   200,   201,   202,   203,     0,    55,   204,
       0,     0,     0,   205,     0,   206,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   207,   208,
       0,     0,     0,   209,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   210,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     211,   212,     0,     0,     0,     0,     0,     0,   213,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   214,     0,   215,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     216,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   217,   218,     0,     0,
       0,     0,     0,     0,     0,   219,     0,     0,     0,     0,
       0,     0,   220,     0,     0,     0,     0,     0,   221,     0,
     222,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   223
};

static const yytype_int16 yycheck[] =
{
       3,  1550,    53,   508,   940,   941,   942,  1229,    11,   952,
    1777,  1233,  1779,    16,     4,   707,   708,     5,     3,     4,
       5,     4,    26,     5,   712,     3,     4,     3,     4,     0,
      25,    31,    35,    26,    20,     3,     4,    31,     5,    26,
      43,  1263,  1264,  1265,  1074,     4,     3,     4,     4,    52,
    2662,     5,    55,     4,    35,    58,    31,     4,     4,    62,
       5,    48,    65,     4,    51,    39,    69,    70,     4,    29,
      73,    20,  1008,    76,    77,    62,    15,    80,    16,    91,
      83,    84,    40,    86,    46,   137,    12,  1041,    91,   153,
    1044,     3,     4,    29,     3,     4,     3,     4,    85,     5,
      16,   104,   105,   106,   107,   108,   109,   201,   174,    98,
      13,  1065,    16,    56,     4,    16,   103,     4,   113,   142,
     142,    11,   125,   142,   170,     5,   464,    39,     4,     5,
      57,   162,   127,     3,     4,    95,   474,   118,   112,     3,
       4,   201,     3,     4,     3,     4,   100,    59,   221,     0,
       3,     4,   106,     4,     3,     4,    43,   160,    61,    46,
     191,   183,    61,     4,   176,    35,    20,   233,   172,  2781,
      20,    35,   266,    66,    35,    20,   135,    87,    39,   172,
       5,  2793,   185,    99,    20,    19,    83,   190,   171,    76,
      66,    16,   192,     4,     5,     3,     4,    84,   192,   259,
     112,     3,     4,   100,   256,   269,  2851,   134,   168,   190,
      59,   192,    88,   194,   195,   205,   157,   158,    61,   195,
     215,     5,   212,   213,   205,    66,   164,   295,   202,   275,
     166,     4,     5,   228,   121,   301,     3,     4,   195,   220,
      20,    32,   315,   247,   201,   121,    30,     3,     4,   207,
     201,   112,   162,   148,   247,   267,    61,  2902,   248,   146,
     263,   247,    61,     4,   315,   204,   136,   143,   235,   239,
      78,   197,   136,   285,     4,   136,   279,   280,   234,   122,
     121,   224,   271,   240,   307,   221,   195,    61,   307,   293,
     202,   291,   295,   138,   297,   198,   984,   291,   247,   259,
     293,     4,   305,   306,   264,   308,   309,   234,   311,   266,
     121,   247,   257,   200,   255,    61,   291,   122,   321,   220,
     282,     4,   249,   210,   295,   303,   314,   308,   331,   332,
     315,   218,   219,   315,   210,   303,    66,   313,   225,   322,
     227,   202,   218,   219,   303,    14,    15,   303,   121,   202,
     297,   297,   355,    22,   357,   358,   313,   360,   312,     4,
      29,   364,   365,    66,   359,   269,   356,    36,   255,   210,
     273,   179,   375,   376,   280,    61,   363,   218,   219,   382,
     283,   357,   358,    66,   387,   388,   313,   299,    57,   269,
      61,   121,   395,   247,   293,   398,   303,   247,  1334,   210,
     357,   358,   247,   304,   313,    74,  1342,   218,   219,   243,
    1098,   247,   315,   751,   417,   418,   296,   316,   121,   306,
       4,   424,   425,   426,   427,   428,   429,   430,  1116,   432,
     306,   233,   277,   303,     4,   322,   312,   210,   121,   303,
     283,  2592,   303,   446,   303,   218,   219,   450,   357,   358,
     303,   259,   455,   456,   457,   458,   459,   460,  1150,   462,
     201,   464,   465,   466,  1686,   306,   233,   247,   355,    15,
    2621,   474,   475,     5,   361,   362,   121,   233,   283,   355,
     210,  1511,   463,    39,   360,   361,   362,    61,   218,   219,
    1182,     5,    63,    26,   293,   306,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,     4,   210,  1538,    66,
      50,   252,     3,     4,   355,   218,   219,   316,   259,   293,
     361,   362,     4,    78,    61,   528,   529,   210,  1482,    26,
    1560,  1485,     4,   306,   105,   218,   219,   121,    61,   312,
       3,     4,   316,   546,   355,    13,    14,   293,   122,   322,
     361,   362,   122,    61,    16,   272,   112,   142,    56,     4,
     100,    88,   279,   901,    39,   210,    61,   618,    61,   109,
     316,   552,   239,   218,   219,   104,   306,  2728,  2729,   582,
      61,  2732,   355,  2734,    56,   122,     5,    87,   361,   362,
       3,     4,    61,    61,    13,    14,  2747,  2748,   183,   122,
     140,  2752,  2753,   306,     0,  2756,   944,   293,   277,   278,
    2761,  2762,   615,    44,   122,    26,   597,    23,    24,    61,
       4,   672,   293,   306,   179,   355,   210,   122,    59,   122,
     316,   361,   362,    26,   218,   219,    36,   112,   307,    63,
     691,   122,    61,   157,   158,   316,   202,    47,    13,    14,
      81,   175,   355,   122,   162,    39,   659,    33,   361,   362,
     184,   306,   162,   125,   157,   158,   195,   279,  2819,  2436,
     101,  2822,   355,   244,    74,     5,  2827,   174,   361,   362,
     122,   105,   351,   352,   353,     4,   689,   118,  2839,   260,
     261,   122,    98,  2844,  1382,    61,    61,   133,   269,     5,
     233,     3,     4,   706,   259,  1393,   709,     3,     4,   283,
     355,   173,    87,   297,    29,    11,   361,   362,   274,   150,
     151,     5,   306,    45,     5,   216,   224,   202,   112,    66,
     198,   199,   108,   736,     5,    61,   233,   740,   741,   742,
     743,   255,     5,   746,    66,   748,   283,   750,   751,   752,
      13,    14,   224,   153,    30,     5,   122,     4,   220,    81,
     283,     5,   255,    13,    14,   305,     3,     4,  2919,    13,
      14,   355,  2923,   157,   158,   283,   207,   361,   362,   198,
     199,   174,   353,   354,   272,   836,   217,   162,   283,     4,
     283,   279,  2943,  1049,   194,   132,   122,   233,    61,   274,
    1056,    11,   283,   216,     5,   273,  2957,   202,     5,  2960,
    2961,    61,    13,    14,   283,   283,   284,    61,   202,    56,
     244,   118,   233,   160,    66,   828,   829,    87,   831,   832,
     833,   834,    87,   198,   199,   211,   260,   261,     3,     4,
     233,   283,   304,    53,  1780,   848,   849,   315,   279,   280,
     120,   166,   855,   856,   273,     3,     4,   293,  1801,    56,
      61,    71,    87,   263,   283,   284,    61,   189,    65,   288,
    1208,   255,   875,   876,   877,   878,   879,   880,   881,    61,
     127,   295,  2104,  2105,  2106,  2107,  2108,  2109,  2110,  2111,
    2112,   101,   292,   896,   897,   898,   315,   900,   901,   902,
     300,   904,   162,   205,    32,   242,   221,   162,   273,    61,
     120,    61,    39,   175,   124,     5,   316,   283,   283,   284,
     351,    61,   925,  1877,   927,    61,   248,   122,   138,   353,
     354,    82,   247,     5,   937,   198,   199,   162,     4,    66,
     122,   944,   945,  1897,   925,    66,  1976,   950,   198,   199,
     315,    89,  1644,  1907,   198,   199,  1910,   283,   295,    54,
      15,   126,  1992,  1917,   967,    43,    66,   214,   971,   294,
     122,   293,   122,   100,    83,   978,   979,   980,  1932,   106,
     302,  1935,   122,   986,   653,   112,   122,   224,   991,  1943,
    2020,   100,  1946,    89,   142,    90,    66,   198,   199,  1002,
    1051,  1339,     3,     4,   155,   132,     3,     4,   240,    87,
     273,    13,    14,     4,     5,    16,  1026,    21,  1021,   133,
     283,   284,    88,   273,    30,   288,   153,   224,    72,   273,
    1050,     3,     4,   283,   284,   183,    21,  1057,   288,   283,
     284,    26,   711,   170,   288,    49,   118,   716,    52,   144,
      13,    14,   315,     5,  1064,     4,   122,     5,   106,    61,
     174,   153,    59,    48,    49,   315,    51,    52,   106,    60,
      70,   315,   273,   182,     4,    66,   203,    62,    82,     5,
     231,   232,   283,   284,     4,   157,   158,   288,   283,    74,
      75,  1094,    64,   303,     4,   246,     4,    82,    61,    39,
      85,   283,    13,    14,    13,    14,     5,   111,     3,     4,
     114,  2141,  1115,     5,   315,   242,    11,   226,   103,   233,
       5,  1124,   200,     5,   115,   110,   111,     5,   200,   114,
     257,   283,     5,   283,   226,    88,     4,  1140,   289,  1142,
       4,   132,   269,   283,  1147,  1148,  1149,   283,  2084,     4,
      61,     4,    61,   262,  1157,   203,   147,  1160,    63,  1162,
     255,     5,   153,     4,   117,   203,    27,     3,     4,   160,
     297,    98,   112,     5,    45,   175,  1179,   269,  1181,   293,
      13,    14,   309,   255,   311,   312,  1189,  1190,  2737,     4,
       5,     3,     4,    64,   179,    66,   198,   199,     3,     4,
     105,  1204,  1205,     4,     5,  1208,  1209,  1210,   280,   257,
       3,     4,     4,  1216,   883,  1218,   308,     4,  1221,   257,
    1223,   122,   127,    59,   351,   216,   280,    39,    61,  2730,
      36,   235,  1283,     4,    94,   198,   199,     4,  2174,     4,
     193,    47,   211,     5,   235,     4,    41,    42,  2749,   240,
     235,   242,   112,     4,   254,   208,   241,    27,     3,     4,
       5,  2197,   202,   263,   268,     4,  1269,   205,    74,    25,
    1273,   273,  1275,   258,     4,     5,  1279,   268,   269,     3,
       4,   283,   284,   268,     4,   276,     4,   198,   199,   198,
     199,     5,  1295,   154,  1297,     5,  1299,  1300,  1301,  1302,
     112,     8,  1305,  1306,   295,  1308,  1309,  1310,  1311,    10,
     273,   296,   297,   315,  1295,  1318,  2270,   270,   189,   180,
     283,   284,  1325,   184,     5,  2279,  1329,  1330,  1331,     3,
       4,     5,   317,   126,  2288,   195,  1339,  1340,   279,   244,
    1343,     4,     5,  2373,   175,     3,     4,   153,  1351,  2379,
    1353,     4,   315,  1356,  2384,   260,   261,   113,     4,   312,
     351,   184,   273,  1344,   273,   198,   199,   175,    34,   322,
       4,   127,   283,   284,   283,   284,   237,   248,   363,     4,
       5,  1362,   177,   178,   154,   354,  1032,  1033,   194,  2890,
     202,   204,   361,   204,   363,     5,  2897,  1400,     5,  1402,
     452,   453,  1405,  1406,   315,  1408,   315,  1410,   164,     4,
     180,   206,   196,  1416,   184,  1418,   204,   278,  1428,  1429,
    1430,   196,   293,    82,  1427,   286,   287,    66,  1438,  1439,
    1440,   302,     5,     3,     4,    66,    18,  1447,  1448,  1449,
     273,   107,  1452,  1453,    66,  1455,  1456,   233,   353,   354,
     283,   284,  1121,  2954,   234,  2956,     5,   263,    40,   215,
      21,    43,     4,  2399,   130,   131,     4,   237,   126,    39,
    2406,     4,   228,   139,     4,     3,     4,     4,   204,  1489,
    1490,    87,   315,  1493,  1494,    87,     3,     4,    49,     6,
       7,    52,     5,   159,    55,    77,   155,     3,     4,     5,
      53,    87,    84,   169,    87,  1508,  1509,  1510,   278,  1178,
     316,    39,     5,    95,    96,     4,   286,   287,    71,     4,
     102,    82,     5,  1192,   195,     5,  1507,  1530,     4,   100,
     201,  1534,     5,  2469,     4,    88,  2472,     5,    16,  2475,
       4,  2477,   112,     4,    16,   127,     4,     4,   101,     5,
     111,    98,     5,   114,     4,  1558,  1559,     5,    87,     5,
    2590,  2586,    87,   145,  2589,  1568,  2591,   120,  1571,   240,
      61,   124,   231,   232,     5,  1578,  2606,    87,    87,   161,
     162,  2611,  2607,  2608,   112,   138,   168,   246,     4,  1592,
       5,     5,     4,     4,  1597,   266,     5,     5,  1601,  2624,
    1603,  1604,     4,  1606,  1607,  1608,     5,  1610,   190,     5,
    1613,  1614,  1615,  1616,  1617,  1618,  1619,  1620,  1621,  1622,
    1623,     5,    64,  1626,  1627,  1628,  1629,   118,   181,     4,
     289,   122,     4,  1636,  1637,     4,     4,  1640,  1641,  1642,
      11,     5,   313,  1646,  1647,  1314,  1315,   229,     3,     4,
       5,     6,     7,    11,    92,     4,  1659,  1660,     4,  1662,
    1663,     4,   100,     4,   171,     5,   157,   158,   106,     5,
       5,   162,     4,     4,   235,     3,     4,   310,   162,     5,
       8,     9,    10,   162,     4,   123,    37,   358,   268,    66,
      37,   129,   268,   297,  2630,     5,     4,  2035,     4,     4,
     282,     5,     5,    80,     5,     5,     4,   268,     4,   200,
       5,   293,    89,     5,   281,   153,    35,     3,     4,     5,
       6,     7,   281,   100,     5,   163,     3,     4,     5,     6,
       7,  1734,  1735,  1736,   295,     5,  1739,     5,   371,     4,
     322,  1744,  1745,     4,  1747,  1748,  1749,     5,  1751,  1752,
       5,  1754,  2090,  1756,  1757,   132,  1759,  1760,  1761,  1762,
     251,     5,     5,  1744,   255,   203,     5,  1770,     5,     4,
       4,   220,     5,   211,     5,  1778,   153,     4,   247,     5,
    1783,  1784,     5,   106,   247,   247,  1789,   247,     5,   280,
     106,    39,   283,   247,   106,  1798,   247,     5,   253,   118,
     220,    39,     5,   294,     4,     4,   253,     5,     5,     4,
     220,     5,  2150,   220,     5,     5,     5,     5,     4,   257,
       4,   112,   112,     5,     5,     5,   203,     5,     4,  1832,
       5,   269,  1813,     4,  1503,     5,     5,     4,    11,     5,
       5,     4,  1823,     5,     5,     5,  1827,   285,     4,     4,
    1853,  1854,    11,     4,     4,  1858,     4,  2887,  1868,     4,
       4,  1864,     5,  1532,     0,   242,     5,  1536,   247,   247,
     189,  1881,   191,   192,   247,   194,   195,   247,    55,     4,
     247,  1891,   247,   257,     4,   174,   216,   204,     4,    66,
       4,     4,   269,   526,  1563,     4,   281,     5,     5,     5,
     533,     5,     5,   536,  1573,     5,   225,     4,   541,     4,
     247,     5,   545,  1582,  1583,    92,    93,     4,     4,     4,
     247,     5,     5,   100,  1593,   244,   245,     5,     5,   106,
     319,   250,   309,   247,   311,   254,   319,     4,     4,     4,
       4,     4,     4,   319,     4,     4,   123,     5,     5,   233,
     233,     4,   129,  1963,   233,   132,   319,   233,   233,     5,
       4,     4,    11,     5,     4,   315,     5,     5,  1971,  1972,
       4,  1974,     5,     5,     4,     4,   153,   296,     5,     5,
       5,     5,     4,   364,     5,     5,   163,   620,     4,   308,
    1993,  1994,  1995,  1996,  1997,  1998,  1999,  2000,  2001,     5,
       5,     4,   364,     5,     5,     4,   451,     5,     5,   328,
       4,     4,     4,  2016,     5,  2018,     5,     4,     4,     4,
    2358,  2359,     5,  2361,  2362,     5,   203,  2365,  2366,     5,
       5,  2034,  2035,     4,   211,     5,     4,  2040,     4,     4,
     281,     5,     5,     5,     5,     5,  2049,  2050,  2051,  2052,
    2053,  2054,  2055,  2056,  2057,  2058,     4,     4,  2061,  2062,
    2063,  2064,  2065,  2066,  2067,  2068,  2069,  2070,  2071,  2072,
       5,  2074,     5,  2076,  2077,  2078,     5,  2765,     5,     4,
     257,     5,     4,     4,  2422,     5,     5,  2090,  2091,     5,
       4,     4,   269,     5,     5,     5,     5,     4,   281,     5,
       5,     5,     5,     4,     4,   364,     5,     5,   285,     5,
       5,     4,     4,   281,   747,     5,     5,     5,   295,     5,
     297,   754,     3,     4,   443,     4,     4,  2912,     5,     4,
       4,     4,     4,   402,     5,   454,     5,    18,     5,  2142,
       5,  2144,     5,  2146,   463,  2148,     4,  2150,  2151,     4,
    2153,     5,     4,     4,     4,  2158,  2159,     5,  2161,  2162,
    2163,  2164,     5,     4,     4,  2853,     5,  2170,     5,  2172,
       4,   364,     5,  2176,   351,     5,  2179,     4,   295,     5,
       5,     5,     5,     5,     5,     4,  2780,     5,     4,     4,
       4,     4,     4,   295,     5,     5,     5,     4,     4,  2601,
       5,  2182,     5,     5,     5,     4,     4,   364,     5,     5,
       5,     5,   531,   532,     4,     4,  2763,     5,     4,     4,
    2223,   102,     4,  2233,     4,   544,     4,     4,     4,     4,
     549,     4,     4,     4,     4,   364,     5,  2575,     5,   558,
    2221,  2579,     4,     4,     4,   364,     5,     4,  2853,     5,
       4,  2849,     5,   886,     5,     5,     4,     4,     4,     4,
     893,     4,     4,     4,     4,     4,     4,     4,   364,     5,
    2321,     5,     5,     4,     4,     4,     4,     4,     4,     4,
    2618,   162,     5,  2293,  2294,  2295,  2296,  2297,     4,  2299,
    2300,     4,     4,     4,  2304,  2305,  2306,  2307,  2308,     5,
    2310,  2311,     5,     5,     5,   938,   939,     4,     4,     4,
     943,     4,     4,   946,     5,     5,  1985,     4,     4,   638,
     639,   640,   641,     4,  2327,   958,     4,     4,     4,   364,
       5,  1040,     4,     4,     4,  2338,  2339,  2340,  2341,  2342,
    2343,  2344,  2345,  2346,  2347,  2348,     5,     5,   229,     4,
       4,  2354,  2021,     5,     5,  2358,  2359,     5,  2361,  2362,
    2865,  2866,  2365,  2366,  2367,  2368,  2369,  2370,  2371,  2372,
       5,  2374,  2375,  2376,     5,     5,     5,  2380,  2381,  2382,
    2383,     4,  2385,  2386,  2387,  2388,  2389,  2390,     4,  2392,
       5,   710,  2395,  2396,     5,     5,   790,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2419,    -1,    -1,  2422,
    2423,    -1,    -1,    -1,  2427,    -1,    -1,    -1,    -1,  2432,
    2433,  2434,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1072,
      -1,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,    -1,
      -1,    -1,    -1,    -1,    -1,  2485,    -1,    -1,    -1,  2482,
      -1,    -1,    -1,    -1,  2494,  2495,  2496,  2497,  2498,    -1,
    2500,  2501,    -1,  2503,  2504,  2505,  2506,  2507,    -1,  2509,
    2510,    -1,  2512,  2513,  2514,  2515,  2516,    -1,  2518,  2519,
      -1,  2521,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2531,  2532,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2542,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2554,    -1,    -1,    -1,  2558,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2568,  2569,    -1,   887,    -1,
      -1,  2574,  2575,    -1,    -1,  2578,  2579,    -1,    -1,    -1,
     899,  2584,    -1,    -1,  2587,  2588,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2609,  2610,    -1,  2612,
    2613,  2614,  2615,  2616,    -1,  2618,  2619,   936,    -1,    -1,
    2623,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2636,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2645,    -1,    -1,    -1,    -1,    -1,  1281,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2663,    -1,    -1,    -1,    -1,    -1,    -1,  2677,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2686,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1317,  2695,    -1,  2697,    -1,  1322,
      -1,  2701,    -1,    -1,    -1,    -1,    -1,  1016,    -1,  1332,
      -1,    -1,  2705,    -1,    -1,    -1,    -1,  2710,    -1,  2712,
      -1,    -1,    -1,    -1,    -1,  2718,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2731,    -1,
      -1,  2400,    -1,    -1,    -1,    -1,    -1,  1446,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2750,    -1,  1458,
      -1,  2754,    -1,    -1,    -1,    -1,  2807,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1480,  1481,    -1,    -1,    -1,    -1,  2780,  1097,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2797,    -1,  2799,
      -1,  2801,    -1,    -1,  2804,    -1,  2806,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2811,    -1,
      -1,    -1,    -1,  2816,    -1,  2818,    -1,    -1,    -1,    -1,
      -1,    -1,  2825,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1151,  2836,    -1,    -1,    -1,    -1,  2841,    -1,
      -1,    -1,  1161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2865,  2866,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2891,    -1,
      -1,    -1,  2895,    -1,    -1,  2898,    -1,    -1,    -1,    -1,
      -1,  2882,    -1,    -1,    -1,  2908,  2909,  2910,  2911,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2920,    -1,    -1,
      -1,  2924,    -1,    -1,    -1,    -1,    -1,    -1,  2931,    -1,
    2933,    -1,    -1,  2914,    -1,    -1,  2917,    -1,    -1,  1572,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2625,    -1,  1277,    -1,
    2629,    -1,    -1,     3,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1295,    -1,    18,  2175,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2191,  2192,  2193,    38,  1632,
    2196,    -1,  2198,  2199,  1323,  1638,  2202,  2203,  2204,    -1,
      -1,  2207,  2208,    -1,  1333,  2211,    56,  2213,  2214,    -1,
    2216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1350,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1362,    -1,    -1,    -1,    -1,  1367,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2745,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2769,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1741,    -1,
      -1,    -1,    -1,  1746,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   162,    -1,    -1,    -1,    -1,  2323,    -1,    -1,
    2326,    -1,    -1,    -1,    -1,  2331,    -1,    -1,  2334,    -1,
      -1,    -1,  1775,    -1,    -1,    -1,    -1,    -1,  1781,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2353,    -1,    -1,
      -1,    -1,   202,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1808,    -1,    -1,  1887,    -1,
      -1,    -1,  1815,    -1,   224,    -1,  1895,  1896,  1507,   229,
      -1,    -1,    -1,    -1,    -1,    -1,  1905,  1906,    -1,    -1,
     240,    -1,    -1,    -1,    -1,    -1,  1915,  1916,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1535,    -1,    -1,    -1,
      -1,  1930,  1931,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1941,  1942,    -1,  2904,    -1,    -1,    -1,  1948,
      -1,    -1,  2438,    -1,    -1,  1564,    -1,    -1,  1567,  1958,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1576,  1577,    -1,
      -1,    -1,    -1,   303,    -1,  1584,    -1,    -1,    -1,    -1,
      -1,    -1,  1591,    -1,  2470,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
      -1,    -1,  1631,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    -1,  1643,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1968,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2550,  1988,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2570,    -1,    -1,    -1,    -1,    -1,
      -1,  2577,     4,    -1,  2580,  2581,    -1,    -1,    -1,  2022,
    2023,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2038,  2039,    -1,    -1,    -1,
    2043,  2044,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1744,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1766,    -1,    -1,
    2083,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2094,    -1,  1782,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1795,    -1,  1797,    -1,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1807,    -1,
      -1,  1810,  1811,  1812,  1813,  1814,    -1,  1816,    -1,   121,
    1819,    -1,    -1,    -1,  1823,  1824,  1825,  1826,  1827,  1828,
    2706,  1830,  1831,    -1,  2147,    -1,  1835,  1836,  1837,    -1,
      -1,  1840,  1841,    -1,    -1,  2234,    -1,  1846,  1847,  2725,
      -1,    -1,    -1,  2166,    -1,  2244,  2245,    -1,    -1,    -1,
     162,    -1,    -1,    -1,    -1,    -1,  2255,    -1,    -1,    -1,
     250,    -1,    -1,   253,    -1,  2264,  2189,    -1,    -1,  2268,
    2269,  2194,    -1,    -1,    -1,    -1,    -1,  2200,  2277,  2278,
      -1,    -1,  2205,    -1,    -1,    -1,  2209,  2286,  2287,  2212,
     202,    -1,  2215,  2292,  2217,    -1,    -1,    -1,   210,    -1,
      -1,    -1,    -1,  2302,  2303,    -1,   218,   219,    -1,    -1,
      -1,    -1,   224,    -1,  2313,    -1,  2315,   229,    -1,    -1,
      -1,    -1,    -1,  2809,  2810,    -1,  2812,    -1,  2814,  2815,
      -1,  2817,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
      -1,  1970,    -1,    -1,  1973,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1984,    -1,    -1,  1987,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2877,    -1,    -1,   306,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2017,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,    -1,  2925,
      -1,    -1,    -1,   355,    -1,    -1,    -1,    -1,    -1,   361,
     362,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2072,    -1,    -1,    -1,    -1,  2391,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2407,    -1,  2095,  2486,    -1,    -1,
    2489,    -1,    -1,  2492,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2502,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2511,    -1,     4,     5,    -1,    -1,    -1,    -1,
      -1,  2520,    -1,  2446,    -1,    -1,    -1,    -1,  2527,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2538,
      -1,    -1,    -1,    -1,    -1,  2544,    -1,     3,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2479,    -1,  2167,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,  2182,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    75,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    89,
      56,  2210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    -1,  2221,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2547,   115,    -1,    -1,    -1,    -1,
    2553,    -1,    -1,    -1,  2557,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   132,    -1,    -1,    -1,   102,    -1,    -1,    -1,
    2573,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,  2667,    -1,
      -1,    -1,    -1,    -1,    -1,  2674,    -1,    -1,    -1,    -1,
     170,    -1,    -1,    -1,  2683,    -1,    -1,    -1,    -1,    -1,
      -1,   181,   182,  2692,    -1,    -1,    -1,    -1,    -1,  2698,
      -1,    -1,    -1,  2702,  2627,  2628,   162,    -1,    -1,    -1,
      -1,    -1,    -1,   203,    -1,    -1,  2325,    -1,    -1,  2328,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2336,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   226,    -1,    -1,     4,
      -1,    -1,    -1,  2352,    -1,    -1,  2355,    -1,    -1,    -1,
     240,  2360,   242,    18,  2363,  2364,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   257,   224,    -1,
      -1,    -1,   262,   229,    -1,    -1,    -1,    -1,    -1,   269,
      -1,    -1,    -1,    -1,    -1,    -1,   276,    -1,    -1,    -1,
      -1,    56,  2401,  2402,    -1,    -1,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   295,    -1,    -1,    -1,    -1,
      18,    -1,    -1,  2736,    -1,    -1,    -1,    -1,   308,   309,
      -1,   311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,
      -1,    -1,  2451,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   351,    -1,    -1,    -1,    -1,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   102,    -1,    -1,   162,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2845,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2549,    -1,    -1,    -1,    -1,    -1,  2869,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,   224,
      -1,    -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2582,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2593,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2915,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,  2936,    -1,    -1,  2939,    -1,    -1,    -1,
      -1,   229,   162,    -1,    -1,    -1,    -1,   167,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2650,    -1,    -1,    -1,  2654,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,    -1,    -1,    -1,    -1,    -1,
     102,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,  2708,
    2709,    -1,  2711,    -1,   116,    -1,    -1,  2716,  2717,    -1,
      -1,    -1,  2721,    -1,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,    -1,    65,    66,    -1,  2755,    69,    -1,    -1,
     162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,    -1,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2787,    -1,
     102,    -1,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     167,    -1,    -1,    -1,    -1,    -1,    -1,   229,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   194,  2882,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   299,    -1,    -1,
      -1,  2900,    -1,    -1,   216,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2914,    -1,   229,  2917,    -1,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     282,    -1,    -1,    -1,    -1,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,    -1,    -1,    -1,    -1,    -1,    -1,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,    -1,   351,
      19,    20,    21,    -1,    -1,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    52,    48,    49,    55,    18,    52,    -1,
      -1,    -1,    -1,    62,    -1,    59,    -1,    66,    62,    -1,
      -1,    -1,    66,    -1,    -1,    74,    75,    -1,    -1,    -1,
      74,    75,    -1,    82,    83,    -1,    18,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,   100,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,
      -1,   110,   111,    -1,    -1,   114,   110,   111,    -1,    -1,
     114,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   132,    -1,    -1,    -1,    18,   132,    -1,
      -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,   153,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,
     179,    -1,    -1,    -1,    -1,   179,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   188,    -1,    -1,    -1,    -1,    -1,
      -1,   162,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     162,    -1,    -1,    -1,   233,    -1,   235,    -1,    -1,   233,
      -1,    -1,   241,   242,    -1,    -1,    -1,   241,   242,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   257,   258,
      -1,    -1,    -1,   224,   258,    -1,    -1,    -1,   229,   268,
     269,    -1,    -1,    -1,    -1,   269,    18,    -1,    -1,    -1,
      -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   224,    -1,    -1,   102,   295,   229,   297,    -1,
      -1,   295,    -1,   297,    -1,    -1,    -1,    -1,    -1,    -1,
     309,    -1,   311,   307,    -1,    -1,    -1,    -1,   317,    -1,
      -1,    -1,    -1,   317,    -1,    -1,    -1,    -1,    -1,   290,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   229,    -1,
      -1,    -1,   351,    -1,    -1,   162,    -1,   351,    -1,    -1,
     102,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,    -1,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   299,    -1,
     162,    -1,   229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   229,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,    40,    -1,
      -1,    43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,
      -1,    -1,    64,    65,    -1,    67,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   128,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
      -1,    -1,    -1,   145,    -1,    -1,   148,    -1,    -1,    -1,
     152,   153,    -1,    -1,    -1,   157,   158,    -1,    -1,   161,
      -1,    -1,    -1,    -1,    -1,   167,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     182,    -1,    -1,   185,   186,   187,    -1,    -1,   190,   191,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   205,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     222,   223,   224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   236,    -1,   238,    -1,    40,    -1,
      -1,    43,    -1,   245,    46,    -1,    -1,   249,    -1,    -1,
      -1,   253,    -1,   255,    -1,   257,    -1,    -1,    -1,    -1,
     262,    -1,    -1,    65,    -1,    67,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,   276,    77,    -1,    79,    -1,    -1,
     282,    -1,    84,    -1,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    94,    -1,    96,    -1,   298,   299,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   310,    -1,
     312,    -1,    -1,    -1,    -1,    -1,   318,    -1,    -1,   321,
     322,    -1,    -1,    -1,    -1,   127,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,    -1,    -1,
     352,   153,    -1,   155,   156,   157,   158,    -1,   360,   161,
      -1,    -1,    -1,   165,    -1,   167,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,   191,
      -1,    -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   205,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     222,   223,    -1,    -1,    -1,    -1,    -1,    -1,   230,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   255,    -1,   257,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     282,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   298,   299,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   307,    -1,    -1,    -1,    -1,
      -1,    -1,   314,    -1,    -1,    -1,    -1,    -1,   320,    -1,
     322,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   360
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
     312,   318,   321,   322,   352,   360,   366,    66,    11,    53,
      71,   101,   120,   124,   138,   303,   400,     3,     4,   303,
     367,   405,   195,   201,   240,   266,   313,   358,   407,   295,
       4,    39,   112,   157,   158,   202,   255,   412,    27,   154,
     180,   184,   237,   278,   286,   287,   382,   414,    83,   100,
     182,   226,   262,   415,    39,    59,   112,   202,   299,   367,
     424,     4,    18,    39,    56,   102,   121,   162,   202,   210,
     218,   219,   224,   229,   306,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   355,   361,   362,   369,   377,   378,
     379,   426,    32,   427,   369,    43,    46,    76,    84,   146,
     200,   225,   227,   255,   322,   368,   369,    64,   367,   429,
     148,   430,    40,    43,    46,    65,    67,    68,    69,    77,
      79,    84,    86,    87,    88,    94,    96,   127,   145,   153,
     155,   156,   157,   158,   161,   165,   167,   190,   191,   195,
     205,   222,   223,   230,   255,   257,   282,   298,   299,   307,
     314,   320,   322,   360,   431,    83,   100,   477,    18,    40,
      43,    77,    84,    95,    96,   102,   127,   145,   161,   162,
     168,   190,   229,   282,   293,   322,   480,    66,   369,    61,
     293,   316,   562,    61,   293,   316,   561,    88,   117,   193,
     208,   270,   312,   322,   486,    15,    25,   113,   127,   164,
     215,   228,   489,   239,   507,     5,    66,    88,   143,   312,
     360,   369,   508,     5,   509,    57,   134,   234,   249,   313,
     526,    45,    64,    66,   189,   248,   293,   302,   546,    66,
     211,   354,   361,   363,   547,    38,   202,   240,   303,   367,
     377,   379,   548,     5,   312,   322,   369,   551,    70,   175,
     254,   263,   552,     4,   553,    88,   526,    61,   293,   316,
     560,   202,   303,   367,   563,    25,   113,   127,   215,   228,
     359,   565,    50,   100,   109,   140,   305,   587,   588,     4,
      36,    47,    74,   153,   194,   263,   292,   300,   316,   395,
       4,   127,   214,   589,   303,   367,   591,    15,    22,   250,
     253,   378,   592,   239,   596,   303,   367,   597,     0,     5,
     369,    59,   367,   401,   279,     5,     4,   303,   367,   402,
       5,    31,   291,   403,   126,   367,   404,   126,   367,   406,
     367,     4,   201,   252,   259,   410,   195,   313,   357,   358,
     367,   409,   369,   142,   183,   408,   205,   367,    78,   179,
     259,   367,   411,     5,   367,   367,   367,     4,   157,   158,
     255,   413,   367,   367,     5,   235,   416,    30,   417,     5,
     418,     5,   422,     5,    30,   423,   367,     8,     9,    10,
     367,   373,   374,   375,   376,   367,   367,    39,   112,   202,
     367,   425,   367,   202,   377,   379,   367,    34,   107,   130,
     131,   139,   159,   169,   384,   367,     4,   369,   369,   369,
     369,   369,   369,   369,   369,   369,   369,   118,    66,    53,
      71,    88,   101,   120,   124,   138,   181,   434,   120,   436,
     195,   201,   240,   266,   313,   357,   358,   367,   419,   437,
     295,   440,   175,   441,   175,   184,   443,    65,    66,    69,
      92,   175,   194,   216,   282,   351,   377,   445,   367,   379,
     448,    59,   299,   377,   449,   290,   377,   379,   450,    32,
     451,   377,   379,   452,     4,   377,   379,   453,    44,    59,
      81,   101,   118,   122,   150,   151,   207,   217,   279,   280,
     351,   457,   221,   315,   463,    66,     5,    89,    61,   293,
     316,   468,    61,   293,   316,   467,     4,    88,   122,   455,
       5,    65,   379,   454,    15,   526,    45,    66,    81,   189,
     248,   293,   302,   464,    66,   240,   465,   294,    61,   293,
     316,   466,    20,   138,   247,   277,   469,    36,    47,    74,
     153,   194,   263,   316,   470,   379,    89,    15,   204,   475,
     377,   478,    66,    72,   481,    30,   482,    43,    87,   200,
     483,   153,   226,   269,   308,   484,   377,    17,    58,   116,
     180,   299,   377,   485,     5,     5,   314,   377,     4,     5,
     377,     4,     4,   201,   488,     5,     4,     4,   122,   367,
       4,     5,   157,   158,   255,   490,     5,   492,     5,   118,
     157,   158,   200,   255,   280,   493,    94,   112,   195,   506,
       5,   504,     5,   280,   505,     4,     5,   369,   369,   367,
     367,     5,     4,     5,    60,    66,    73,    75,    80,    83,
      89,   100,   106,   115,   132,   153,   170,   181,   182,   203,
     226,   240,   242,   257,   262,   269,   276,   295,   308,   309,
     311,   351,   510,    91,   176,   267,   285,   381,     5,     4,
     205,   212,   213,   248,   356,   380,   367,   377,   367,     5,
     367,    39,   112,   367,   550,   369,   367,   377,   379,   549,
     367,   384,   367,     4,   378,    54,    90,   144,   255,   554,
       4,     4,   367,     4,   153,   269,   555,     5,   377,     4,
      39,   112,   367,   564,   367,    98,    61,   122,   157,   158,
     255,   283,   567,   122,   586,    61,   118,   122,   157,   158,
     162,   200,   251,   255,   280,   283,   294,   568,   569,    61,
     122,   283,   585,     5,    61,   122,   283,   566,     4,    33,
     108,   211,   559,    66,   369,   396,    66,   369,   397,    66,
     369,   398,    12,   197,   558,   367,     4,   367,   233,   367,
     399,   367,   280,     4,   367,   367,     4,   234,   303,   595,
       4,   297,   593,     4,   297,   594,     4,   384,   126,   367,
     598,   367,   367,     4,     5,   367,    11,   367,   367,   367,
      29,    95,   168,   259,   264,   383,   383,     4,   205,   367,
     367,     4,     4,     4,   367,   367,   367,   367,   367,   367,
     367,   367,     4,     4,     5,     5,   377,     5,   367,   367,
     373,   375,   375,   377,   367,   367,   367,   367,   367,   367,
     367,   377,   379,   376,   367,   367,   376,   367,     5,   279,
     104,   195,   435,   201,   259,   438,   175,    78,   179,   259,
     439,   142,   183,   420,   420,     4,   442,     4,   444,   201,
     266,   446,   184,   447,   175,   384,   367,   367,   377,   377,
     384,   384,   384,   377,   384,   367,   377,     4,   460,     4,
     379,   458,   204,     4,   171,   322,   459,   204,   377,     4,
     135,   303,   462,     5,     5,   432,     4,   204,   137,   256,
     370,   367,     4,     5,    60,    66,   115,   132,   147,   153,
     160,   216,   235,   240,   242,   268,   269,   276,   295,   351,
     520,   379,   196,   196,    66,   471,    66,   472,    66,   473,
     233,   474,   367,     5,   433,   234,   476,   378,   384,     5,
     377,   377,   377,   377,     4,     4,     4,   369,     4,     4,
     204,   367,    13,    14,    61,   198,   199,   273,   283,   284,
     315,    87,    87,    87,     5,     5,    13,    14,    61,   198,
     199,   273,   283,   284,   288,   315,    87,    87,   162,    87,
     162,   162,   167,   378,   496,   501,    87,   162,     5,   494,
       4,     4,    13,    61,   198,   273,   283,   315,     5,     5,
       4,   367,   378,    19,    20,    21,    48,    49,    52,    55,
      62,    66,    74,    75,    82,    83,   100,   106,   110,   111,
     114,   132,   153,   179,   203,   233,   235,   241,   242,   257,
     258,   268,   269,   295,   297,   309,   311,   317,   351,    66,
      80,    89,   100,   132,   153,   203,   242,   269,   309,   311,
       4,    29,   166,   221,   247,   513,     5,    63,   105,   244,
     260,   261,   353,   354,   519,   100,   511,    16,   269,   517,
      39,   112,   202,   518,     4,     5,    16,   220,   304,   367,
     269,   519,   527,   127,   519,   528,    35,    39,   112,   136,
     202,   303,   367,   529,   377,   369,    92,   100,   106,   123,
     129,   153,   163,   203,   211,   257,   269,   285,   532,    39,
     112,   202,     5,   269,   296,   536,    16,   125,   173,   220,
     304,   537,   297,   369,   538,     5,   100,   106,   312,    16,
      16,     4,   367,   367,   367,   367,   367,   367,   384,   367,
     367,   376,   367,     4,   384,     4,    39,   112,   202,   274,
     556,    39,   112,   202,   274,   557,     4,    98,     5,     5,
      87,    87,    87,     4,     5,     5,    87,     5,    87,   162,
      87,   162,   569,    61,   122,   162,   283,   573,    61,   122,
     283,   584,    87,   162,    61,   122,   283,   571,     4,    61,
     122,   283,   570,     5,     5,     4,     5,     5,     4,     4,
       5,     5,     5,   367,   367,   367,     4,   367,   590,   367,
     367,   378,    64,     4,     4,     5,     4,     4,     5,     4,
      98,   271,   385,   367,   367,    11,     5,    11,   367,   367,
      11,     4,    11,     4,     4,   367,   367,   367,   367,   367,
     367,   367,     4,   369,     4,     4,   384,   377,   384,   367,
     367,   367,   377,   367,   376,   367,   367,     5,     5,   367,
     379,   367,   377,   367,   384,   384,   385,   385,   385,   384,
     376,   367,   384,   367,   370,   461,   171,     5,     4,   384,
     162,   162,     4,     5,     4,     4,   367,   456,    37,    37,
     367,    19,    20,    21,    48,    49,    52,    59,    62,    66,
      74,    75,    82,   110,   111,   114,   132,   153,   179,   188,
     233,   241,   242,   258,   269,   295,   297,   307,   317,   351,
      66,   132,   160,   242,   295,    29,   166,   221,   247,   521,
     367,   216,   367,   522,    16,   367,   268,   532,   268,   216,
     367,   523,   297,   524,    16,    99,   367,   367,     5,   385,
       4,     4,    56,   377,     4,     5,   487,   367,     5,     5,
       5,   162,   191,   389,   389,   170,   275,   387,     4,     4,
       5,     5,   491,   491,   491,   281,   281,     5,     5,     5,
      16,   164,   388,   388,   387,     4,     4,   387,     5,     5,
     495,     5,   502,     5,   503,   502,   503,   167,   350,   378,
     499,     5,   498,     5,   502,   503,     5,    13,    14,    61,
     198,   199,   273,   283,   284,   288,   315,     4,     4,     5,
       5,   389,   387,     4,     5,     5,   384,    82,   155,   231,
     232,   246,   289,   392,     6,     7,   367,   372,   247,   247,
     247,   106,    39,    66,   100,   106,   112,   132,   153,   170,
     203,   242,   257,   269,   297,   309,   311,   312,   351,   512,
     247,     5,    26,   172,   247,   293,   142,   307,   106,    21,
      49,    52,    82,   111,   114,   235,   268,    21,    49,    52,
      55,    82,   111,   114,   235,   268,   295,    39,   247,   247,
     106,     5,   220,    26,   233,    35,   136,   303,   367,   272,
     279,   253,   377,   532,    39,   133,   233,   293,   253,   220,
       5,     5,   257,    26,   233,     4,     5,     5,   220,    35,
     136,   303,   367,   532,   220,   369,     4,     4,   367,     5,
     315,    21,    26,    48,    49,    51,    52,    62,    74,    75,
      82,    85,   103,   110,   111,   114,   179,   235,   241,   258,
     268,   296,   297,   317,   363,   514,   367,   367,   367,   367,
     367,   519,   377,     5,     4,     5,   367,   367,   377,   367,
     369,   367,   367,   519,     5,     5,   367,   367,   369,     5,
      16,     5,     5,   367,   367,   376,   367,   367,     4,   367,
     367,   112,   367,   367,   112,     4,    41,    42,   177,   178,
     206,   394,   394,    61,   122,   283,   581,    61,   122,   283,
     578,    61,   122,   283,   575,   394,     5,    61,   122,   283,
     572,    61,   122,   283,   583,    61,   122,   283,   582,    61,
     122,   283,   580,    61,   122,   283,   579,     5,     5,    61,
     122,   283,   574,     4,     5,     5,     4,    61,   122,   283,
     577,    61,   122,   283,   576,     5,     5,     4,     5,     5,
       4,   394,   394,   394,   367,   367,   367,     4,   377,   367,
     384,   378,     5,     5,    11,   367,   377,   379,   367,    11,
     367,   367,   367,    59,   367,     4,   367,   367,     4,   367,
     367,   367,   367,    46,   282,   421,     5,   369,   369,   384,
     367,     4,     4,     4,   384,   377,   367,   367,   367,   367,
     384,   377,   385,   376,   367,     4,   385,   367,     4,   379,
       5,    23,    24,    98,   386,     4,   377,   367,   367,     4,
     367,     5,    82,   155,   231,   232,   246,   289,   377,   379,
     247,   247,   247,    20,   247,   377,   247,    26,   172,   247,
     293,   142,   307,    20,   247,   247,   247,    20,   247,    26,
     174,   233,   174,   272,   279,   174,   233,   301,   532,   133,
     174,   233,   293,     4,   257,    26,   174,   233,   532,   216,
     367,   367,   367,   367,   367,   367,   204,   367,   367,    19,
     243,   479,     4,     4,   367,   389,   389,   389,     4,   389,
     389,   389,    13,    14,    61,   198,   199,   273,   283,   284,
     315,   388,   389,   389,   389,   389,   389,     4,   389,   389,
       4,   388,    13,    14,    61,   198,   199,   273,   283,   284,
     315,     5,    13,    14,    61,   198,   199,   273,   283,   284,
     288,   315,    13,    14,    61,   198,   199,   273,   283,   284,
     315,     5,   497,     5,   500,     5,     5,    13,    14,    61,
     198,   199,   273,   283,   284,   288,   315,     5,    13,    14,
      61,   198,   199,   273,   283,   284,   288,   315,   281,     5,
       5,     5,   388,   388,   387,     4,     4,   387,     5,     4,
       4,   389,   389,     4,   389,   389,     5,   369,   377,   379,
       5,   367,   367,     5,   367,     5,   372,   106,   203,   257,
     106,   203,   257,     5,   367,   369,     5,   367,   377,   369,
       5,     5,   372,   247,   247,    20,   247,    20,   247,   247,
      20,   247,   319,   319,     4,     4,     4,   512,     4,     4,
       4,   319,   319,     4,     5,     4,   367,     5,   367,     5,
     372,   369,   377,   377,   367,    26,    48,    51,    62,    85,
     103,   363,   390,     4,   367,   384,   369,     5,   377,   377,
     367,   369,   369,   377,   377,   367,   369,   367,     5,   367,
     233,   233,   367,   367,   233,   367,   233,   367,   367,     4,
     515,   367,   233,   233,   367,   367,   367,   367,   367,   367,
     367,   367,     5,   315,   367,   516,   367,   367,   233,   367,
     367,   367,   367,   377,   384,     5,     4,     4,   367,   367,
     384,   367,   367,   367,   377,   519,   367,   367,     5,     4,
     367,   367,   367,   367,     5,     5,     4,     5,     5,     4,
       5,     5,     4,   394,     5,     5,     4,     5,     5,     4,
       5,     5,     4,     5,     5,     4,     5,     5,     4,     4,
       4,     5,     5,     4,     4,     5,     5,     4,     5,     5,
       4,   367,   367,   367,   367,   384,   367,   377,   379,   367,
     384,   367,   367,   367,   367,   367,     5,   367,   367,   367,
       4,   367,   367,   367,   367,     4,   377,   367,   384,   184,
     382,   367,   382,   385,   384,   377,   367,   367,     4,   367,
     377,   377,   367,   370,     5,     5,     5,     5,     5,   377,
     384,   377,   377,   377,   377,   379,   377,   384,   377,   377,
     377,   379,   377,   377,   377,   377,   379,   377,   377,   377,
     367,   377,   377,   377,   377,   377,   377,   377,   367,   367,
       4,   367,     5,   367,   389,     5,     5,     5,   387,     4,
       4,     5,   389,   388,     4,   389,     5,     5,     5,   388,
     388,   387,     4,     4,     5,   281,     5,     5,     5,   388,
     388,   387,     4,     4,   387,     5,     5,     5,     5,   388,
     388,   387,     4,     4,     5,    13,    14,    61,   198,   199,
     273,   283,   284,   315,    13,    14,    61,   198,   199,   273,
     283,   284,   315,    13,    14,    61,   198,   199,   273,   283,
     284,   315,   281,     5,     5,     5,   388,   388,   387,     4,
       4,   387,     5,   281,     5,     5,     5,   388,   388,   387,
       4,     4,   387,     5,   388,     4,     4,   388,     4,     4,
     389,     5,   384,   377,   367,   367,   377,   367,     5,   372,
       5,   377,   369,     5,   377,   384,     5,   372,   367,   367,
     367,   367,   367,   367,   367,   367,   367,     4,     4,     5,
       4,     4,   367,   377,   367,     5,   372,   369,   384,   384,
     367,   376,   384,   384,   367,   384,   384,   367,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   525,   533,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   377,     5,   367,   367,   367,   367,     4,     4,   384,
     385,     5,     5,   376,   367,     4,   384,   377,     4,   394,
     394,   394,   394,   394,   394,   394,   394,   394,   372,   367,
     367,   367,   384,   367,   376,   367,   367,    11,     5,     5,
     367,   367,   367,   367,   367,   367,     4,   384,   377,   367,
     367,   385,   386,   367,     5,   367,   377,   379,     5,     5,
       5,     5,     5,   384,   386,   386,   386,   384,   386,   385,
     386,   386,   384,   386,   386,   386,   384,   386,   386,   384,
     377,   386,   384,   386,   386,   384,   386,   384,     4,   377,
     379,     5,   367,     4,   389,   388,     4,   388,   388,     4,
       4,   388,     4,   388,     5,     5,     5,   388,   388,   387,
       4,     4,     5,     5,     5,     5,   388,   388,   387,     4,
       4,     5,     5,     5,     5,   388,   388,   387,     4,     4,
       5,   388,   389,   389,   389,   389,   389,     4,   389,   389,
       4,   388,   388,   389,   389,   389,   389,   389,     4,   389,
     389,     4,   388,   388,     4,     4,     4,   378,   386,     4,
     377,   386,   367,   377,     4,   386,   386,   377,     4,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     377,   386,   367,   377,     4,   376,   376,   377,   376,   376,
     377,   377,   376,   376,   367,   367,   367,   367,   367,   367,
     372,   367,   367,   367,    55,    66,    93,   132,   295,   297,
     351,   530,   531,   532,   544,   545,   372,   367,   367,   367,
     367,   372,   367,   367,   367,   367,   367,   367,   384,   367,
     315,   371,   372,   367,   367,   385,   369,   377,   377,   385,
     384,     4,   367,   376,   367,    59,   367,     5,     5,     4,
       4,   367,   367,   367,     4,   382,   386,     5,   384,     4,
       5,     4,     5,   377,     5,   385,   386,   385,   385,   385,
       5,   384,     4,   367,   389,   388,   388,     4,   388,   389,
     389,   389,   389,   389,     4,   389,   389,   388,   389,   389,
     389,   389,   389,     4,   389,   389,   388,   389,   389,   389,
     389,   389,     4,   389,   389,   388,   389,   388,     4,   389,
     389,   388,     4,   389,   388,   384,   377,   386,     4,   384,
     367,   384,   367,   367,   367,   386,     4,   384,   367,   376,
     386,   367,   376,   386,   386,   377,   367,     4,   391,   391,
     367,   367,   391,   372,   391,   533,   377,   364,   364,   364,
     364,   364,   364,   364,   531,   364,   372,   391,   391,   367,
     367,   372,   367,   367,   367,   367,   367,   376,   367,     5,
     533,   367,   391,   369,   534,   535,   384,   384,   369,   385,
       4,     5,   367,     5,     4,     4,     4,     4,     4,     4,
     367,     4,    31,   192,   291,   428,   377,     5,    31,   192,
     291,   393,   377,     4,   428,   367,   388,   388,   389,   388,
     389,   388,   389,   389,   388,   389,   388,   367,   386,   377,
     377,   367,   377,   367,   377,   377,   367,   377,   386,     4,
     533,   533,   371,   367,   533,     4,   533,   384,   512,     5,
       4,     5,     5,     5,     4,   369,     4,   533,   533,   371,
     367,     4,   533,   533,   367,   377,   533,   533,   533,   534,
     541,   542,   532,   539,   540,   369,     4,     5,     5,     4,
       4,     4,   195,   313,   358,   367,   419,   428,     4,   377,
     428,     4,   389,   389,   389,   389,   389,   378,   386,   386,
     367,   386,     4,   386,   386,   367,   386,   367,   533,   533,
       4,   367,   533,     5,     4,   367,   533,     4,   367,   533,
     384,   541,   543,   544,   364,   540,     5,     5,   367,   420,
     367,   420,   384,   386,     4,   377,   379,     4,   372,   371,
     367,     5,   367,   371,   367,   377,   544,   369,     5,     5,
     367,   367,   367,   367,   393,     5,   377,   379,   384,   377,
     379,   533,   367,     4,   533,   367,   386,     5,     5,   367,
       5,   367,   384,   384,     4,   533,     4,     5,     5,     5,
     371,   371,   533,   533,   533
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
#line 472 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 473 "frame/parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 7:
#line 475 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 476 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 478 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 485 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 23:
#line 491 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 24:
#line 492 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 493 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 29:
#line 497 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 36:
#line 504 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 40:
#line 508 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 43:
#line 511 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 48:
#line 516 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 50:
#line 518 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 52:
#line 520 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 54:
#line 522 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 59:
#line 529 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 60:
#line 530 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 61:
#line 533 "frame/parser.Y"
    {yydebug=(yyvsp[(1) - (1)].integer);;}
    break;

  case 62:
#line 534 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 535 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 536 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 537 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 538 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 539 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 540 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 541 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 542 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 543 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 72:
#line 546 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 73:
#line 548 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 74:
#line 549 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 75:
#line 550 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 76:
#line 551 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 77:
#line 553 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 78:
#line 554 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 79:
#line 555 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 80:
#line 556 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 81:
#line 559 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 82:
#line 560 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 83:
#line 561 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 84:
#line 562 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 85:
#line 563 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 86:
#line 566 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 87:
#line 567 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 88:
#line 570 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 89:
#line 571 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 90:
#line 572 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 91:
#line 575 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 92:
#line 578 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 93:
#line 581 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 94:
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
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 97:
#line 611 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 98:
#line 618 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 99:
#line 619 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 100:
#line 620 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 101:
#line 621 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 102:
#line 622 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 103:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 104:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 105:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 106:
#line 628 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 107:
#line 629 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 108:
#line 630 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 109:
#line 631 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 110:
#line 632 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 111:
#line 633 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 112:
#line 634 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 113:
#line 635 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 114:
#line 636 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 115:
#line 637 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 116:
#line 638 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 117:
#line 639 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 118:
#line 640 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 119:
#line 641 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 120:
#line 642 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 121:
#line 643 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 122:
#line 644 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 123:
#line 645 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 124:
#line 646 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 125:
#line 647 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 126:
#line 648 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 127:
#line 649 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 128:
#line 650 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 129:
#line 651 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 130:
#line 652 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 131:
#line 655 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 132:
#line 656 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 133:
#line 659 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 134:
#line 660 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 135:
#line 661 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 136:
#line 662 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 137:
#line 663 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 138:
#line 664 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 139:
#line 667 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 140:
#line 668 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 141:
#line 669 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 142:
#line 670 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 143:
#line 671 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 144:
#line 674 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 145:
#line 675 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 146:
#line 676 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 147:
#line 677 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 148:
#line 678 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 149:
#line 679 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 150:
#line 680 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 151:
#line 681 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 152:
#line 684 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 153:
#line 685 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 154:
#line 686 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 155:
#line 687 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 156:
#line 688 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 157:
#line 691 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 158:
#line 692 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 159:
#line 693 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 160:
#line 694 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 161:
#line 695 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 162:
#line 696 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 163:
#line 697 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 164:
#line 698 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 165:
#line 701 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 166:
#line 702 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 167:
#line 703 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 168:
#line 706 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 169:
#line 707 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 170:
#line 708 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 171:
#line 709 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 172:
#line 712 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 173:
#line 713 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 174:
#line 714 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 175:
#line 717 "frame/parser.Y"
    {;}
    break;

  case 176:
#line 718 "frame/parser.Y"
    {;}
    break;

  case 177:
#line 719 "frame/parser.Y"
    {;}
    break;

  case 178:
#line 722 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 179:
#line 723 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 180:
#line 724 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 181:
#line 727 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 182:
#line 728 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 183:
#line 729 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 184:
#line 730 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 185:
#line 731 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 186:
#line 732 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 187:
#line 733 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 188:
#line 734 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 189:
#line 737 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 190:
#line 738 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 191:
#line 741 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 192:
#line 742 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 193:
#line 743 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 194:
#line 744 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 195:
#line 745 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 196:
#line 746 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 197:
#line 749 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 198:
#line 750 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 199:
#line 751 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 200:
#line 752 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 201:
#line 755 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 202:
#line 756 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 203:
#line 757 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 204:
#line 758 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 205:
#line 759 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 206:
#line 760 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 211:
#line 767 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 212:
#line 768 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 213:
#line 769 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 214:
#line 770 "frame/parser.Y"
    {fr->set3dSyncCmd((yyvsp[(2) - (2)].integer));}
    break;

  case 215:
#line 772 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 216:
#line 775 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 217:
#line 776 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 218:
#line 779 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 219:
#line 780 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 220:
#line 783 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 221:
#line 784 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 222:
#line 787 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 223:
#line 789 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 225:
#line 793 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 226:
#line 794 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 229:
#line 797 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 231:
#line 799 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 232:
#line 802 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 233:
#line 803 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 234:
#line 806 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 235:
#line 807 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 236:
#line 809 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 237:
#line 811 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 238:
#line 812 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 239:
#line 813 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 240:
#line 815 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 241:
#line 817 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 242:
#line 820 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 243:
#line 821 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 244:
#line 824 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 245:
#line 826 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 246:
#line 829 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 247:
#line 831 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 248:
#line 834 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 249:
#line 838 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 250:
#line 839 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 252:
#line 843 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 253:
#line 844 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 254:
#line 845 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 258:
#line 851 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 259:
#line 852 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 261:
#line 855 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 262:
#line 860 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 263:
#line 861 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 264:
#line 864 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 265:
#line 865 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 266:
#line 866 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 267:
#line 867 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 268:
#line 868 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 269:
#line 871 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 270:
#line 872 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 271:
#line 873 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 272:
#line 874 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 273:
#line 877 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 274:
#line 879 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 275:
#line 884 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 276:
#line 889 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 277:
#line 896 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 278:
#line 898 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 279:
#line 900 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 280:
#line 902 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 284:
#line 909 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 285:
#line 911 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 286:
#line 913 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 287:
#line 915 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 288:
#line 917 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 289:
#line 918 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 295:
#line 929 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 296:
#line 932 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 297:
#line 935 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 298:
#line 941 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 299:
#line 946 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 300:
#line 949 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 301:
#line 950 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 302:
#line 953 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 303:
#line 954 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 304:
#line 956 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 305:
#line 962 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 306:
#line 963 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 307:
#line 964 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 308:
#line 965 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 309:
#line 968 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 310:
#line 969 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 311:
#line 972 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 312:
#line 973 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 313:
#line 976 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 314:
#line 977 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 315:
#line 981 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 316:
#line 983 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 317:
#line 986 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 318:
#line 988 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 319:
#line 991 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 321:
#line 993 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 322:
#line 994 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 323:
#line 995 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 324:
#line 998 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 325:
#line 1000 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 326:
#line 1001 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 327:
#line 1002 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 328:
#line 1003 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 329:
#line 1007 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 330:
#line 1009 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 331:
#line 1010 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 332:
#line 1011 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 333:
#line 1014 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 334:
#line 1016 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 335:
#line 1018 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 336:
#line 1020 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 337:
#line 1023 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 338:
#line 1026 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 339:
#line 1027 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 340:
#line 1028 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 341:
#line 1029 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 342:
#line 1032 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 343:
#line 1033 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 344:
#line 1036 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 345:
#line 1039 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 346:
#line 1040 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 360:
#line 1054 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 363:
#line 1057 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 364:
#line 1058 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 370:
#line 1064 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 371:
#line 1065 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 374:
#line 1068 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 375:
#line 1069 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 377:
#line 1072 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 379:
#line 1074 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 381:
#line 1076 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 383:
#line 1078 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 384:
#line 1080 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 387:
#line 1083 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 388:
#line 1087 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 389:
#line 1089 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 390:
#line 1093 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 391:
#line 1095 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 392:
#line 1098 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 393:
#line 1099 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 394:
#line 1100 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 395:
#line 1101 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 396:
#line 1102 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 397:
#line 1103 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 399:
#line 1105 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 400:
#line 1108 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 401:
#line 1109 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 402:
#line 1110 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 403:
#line 1113 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 404:
#line 1116 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 405:
#line 1118 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 406:
#line 1120 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 407:
#line 1121 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 408:
#line 1122 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 410:
#line 1124 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 412:
#line 1127 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 413:
#line 1133 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 414:
#line 1134 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 415:
#line 1137 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 416:
#line 1138 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 417:
#line 1139 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 418:
#line 1142 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 419:
#line 1143 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 421:
#line 1149 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 422:
#line 1151 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 423:
#line 1153 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 424:
#line 1156 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 426:
#line 1158 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 427:
#line 1162 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 428:
#line 1166 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 430:
#line 1168 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 431:
#line 1169 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 432:
#line 1170 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 433:
#line 1171 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 434:
#line 1172 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 436:
#line 1174 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 437:
#line 1175 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 438:
#line 1178 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 439:
#line 1179 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 440:
#line 1180 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 441:
#line 1183 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 442:
#line 1184 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 443:
#line 1188 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 444:
#line 1190 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 445:
#line 1198 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 446:
#line 1200 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 447:
#line 1202 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 448:
#line 1205 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 449:
#line 1207 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 450:
#line 1208 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 451:
#line 1211 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 452:
#line 1214 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 453:
#line 1216 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 454:
#line 1220 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 455:
#line 1222 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 456:
#line 1225 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 457:
#line 1229 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 458:
#line 1230 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 459:
#line 1232 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 460:
#line 1235 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 461:
#line 1236 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 463:
#line 1240 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 464:
#line 1241 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 465:
#line 1242 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 466:
#line 1245 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 467:
#line 1247 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 468:
#line 1248 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 470:
#line 1250 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 474:
#line 1254 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 475:
#line 1255 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 476:
#line 1256 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 477:
#line 1258 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 479:
#line 1260 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 480:
#line 1263 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 481:
#line 1265 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 482:
#line 1267 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 483:
#line 1268 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 484:
#line 1269 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 485:
#line 1270 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 486:
#line 1273 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 487:
#line 1274 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 488:
#line 1278 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 489:
#line 1280 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 490:
#line 1283 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 491:
#line 1286 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 492:
#line 1287 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 493:
#line 1289 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 494:
#line 1291 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 495:
#line 1293 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 496:
#line 1296 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 497:
#line 1297 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 498:
#line 1298 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 499:
#line 1301 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 500:
#line 1302 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 501:
#line 1303 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 502:
#line 1304 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 503:
#line 1305 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 504:
#line 1306 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 505:
#line 1307 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 506:
#line 1310 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 507:
#line 1313 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 508:
#line 1314 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 509:
#line 1315 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 510:
#line 1318 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 511:
#line 1319 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 512:
#line 1320 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 513:
#line 1323 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 514:
#line 1324 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 515:
#line 1325 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 516:
#line 1328 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 517:
#line 1329 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 518:
#line 1330 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 519:
#line 1331 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 520:
#line 1332 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 521:
#line 1333 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 526:
#line 1340 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 527:
#line 1341 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 528:
#line 1342 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 529:
#line 1345 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 530:
#line 1346 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 531:
#line 1349 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 532:
#line 1350 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 533:
#line 1353 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 534:
#line 1354 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 535:
#line 1357 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 536:
#line 1358 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 537:
#line 1361 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 539:
#line 1363 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 540:
#line 1366 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 541:
#line 1367 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 543:
#line 1371 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 544:
#line 1375 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 545:
#line 1378 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 546:
#line 1385 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 547:
#line 1386 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 548:
#line 1389 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 549:
#line 1390 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 552:
#line 1393 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 553:
#line 1394 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 554:
#line 1395 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 555:
#line 1396 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 557:
#line 1398 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 558:
#line 1399 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 559:
#line 1400 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 561:
#line 1402 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 562:
#line 1403 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 563:
#line 1404 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 564:
#line 1405 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 566:
#line 1409 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 567:
#line 1412 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 568:
#line 1413 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 569:
#line 1416 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 570:
#line 1417 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 571:
#line 1418 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 572:
#line 1419 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 573:
#line 1422 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 574:
#line 1423 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 575:
#line 1424 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 576:
#line 1425 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 577:
#line 1428 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 578:
#line 1429 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 579:
#line 1430 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 580:
#line 1431 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 581:
#line 1432 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 582:
#line 1433 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 583:
#line 1436 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 584:
#line 1437 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 585:
#line 1438 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 588:
#line 1442 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 589:
#line 1443 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 590:
#line 1446 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 591:
#line 1449 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 592:
#line 1450 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 593:
#line 1454 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 594:
#line 1456 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 595:
#line 1457 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 602:
#line 1469 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 603:
#line 1471 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 604:
#line 1473 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 605:
#line 1474 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 606:
#line 1476 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 607:
#line 1478 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 608:
#line 1480 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 609:
#line 1482 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 610:
#line 1484 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 614:
#line 1490 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 615:
#line 1491 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 616:
#line 1492 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 617:
#line 1493 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 618:
#line 1494 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 619:
#line 1496 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 620:
#line 1497 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 621:
#line 1498 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 622:
#line 1499 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 623:
#line 1502 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 624:
#line 1506 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 625:
#line 1508 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 626:
#line 1510 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 627:
#line 1512 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 628:
#line 1514 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 629:
#line 1516 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 630:
#line 1518 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 631:
#line 1520 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 632:
#line 1523 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 633:
#line 1525 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 634:
#line 1527 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 644:
#line 1539 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 645:
#line 1540 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 646:
#line 1541 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 647:
#line 1542 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 648:
#line 1543 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 649:
#line 1544 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 650:
#line 1546 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 651:
#line 1548 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 652:
#line 1549 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 653:
#line 1550 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 654:
#line 1551 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 655:
#line 1554 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 656:
#line 1555 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 657:
#line 1556 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 658:
#line 1557 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 659:
#line 1558 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 660:
#line 1560 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 661:
#line 1561 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 662:
#line 1562 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 663:
#line 1563 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 669:
#line 1574 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 670:
#line 1577 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 671:
#line 1580 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 672:
#line 1583 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 673:
#line 1586 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 674:
#line 1589 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 675:
#line 1592 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 676:
#line 1595 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 677:
#line 1598 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 678:
#line 1603 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 679:
#line 1606 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 680:
#line 1609 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 681:
#line 1612 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 682:
#line 1615 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 683:
#line 1618 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 684:
#line 1621 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 685:
#line 1624 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 686:
#line 1627 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 687:
#line 1630 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 688:
#line 1633 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 689:
#line 1638 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 690:
#line 1641 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 691:
#line 1644 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 692:
#line 1647 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 693:
#line 1650 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 694:
#line 1653 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 695:
#line 1656 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 696:
#line 1659 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 697:
#line 1662 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 698:
#line 1667 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 699:
#line 1669 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 700:
#line 1671 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 701:
#line 1673 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 702:
#line 1675 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 703:
#line 1677 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 704:
#line 1682 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 705:
#line 1684 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 706:
#line 1686 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 707:
#line 1690 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 708:
#line 1693 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 709:
#line 1696 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 710:
#line 1699 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 711:
#line 1702 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 712:
#line 1705 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 713:
#line 1708 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 714:
#line 1711 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 715:
#line 1714 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 716:
#line 1717 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 717:
#line 1720 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 718:
#line 1724 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 719:
#line 1725 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 720:
#line 1726 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 721:
#line 1727 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 722:
#line 1728 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 723:
#line 1729 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 724:
#line 1731 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 725:
#line 1733 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 726:
#line 1734 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 727:
#line 1735 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 728:
#line 1736 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 729:
#line 1739 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 730:
#line 1740 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 731:
#line 1741 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 732:
#line 1742 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 733:
#line 1743 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 734:
#line 1745 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 735:
#line 1746 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 736:
#line 1747 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 737:
#line 1748 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 738:
#line 1752 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 739:
#line 1754 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 740:
#line 1755 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 741:
#line 1757 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 742:
#line 1759 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 743:
#line 1761 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 744:
#line 1764 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 745:
#line 1765 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 746:
#line 1768 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 747:
#line 1769 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 748:
#line 1770 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 749:
#line 1773 "frame/parser.Y"
    {;}
    break;

  case 750:
#line 1776 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 751:
#line 1777 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 752:
#line 1778 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 753:
#line 1779 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 754:
#line 1780 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 755:
#line 1781 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 756:
#line 1782 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 757:
#line 1786 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 759:
#line 1794 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 760:
#line 1795 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 761:
#line 1797 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 762:
#line 1799 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 763:
#line 1800 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 764:
#line 1801 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 766:
#line 1802 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 769:
#line 1805 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 770:
#line 1806 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 771:
#line 1808 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 772:
#line 1810 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 773:
#line 1812 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 774:
#line 1815 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 775:
#line 1817 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 776:
#line 1818 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 777:
#line 1820 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 778:
#line 1823 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 779:
#line 1826 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 780:
#line 1830 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 781:
#line 1833 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 782:
#line 1836 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 783:
#line 1839 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 784:
#line 1843 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 785:
#line 1847 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 786:
#line 1852 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 787:
#line 1856 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 788:
#line 1858 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 789:
#line 1859 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 790:
#line 1861 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 791:
#line 1863 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 792:
#line 1865 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 793:
#line 1867 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 794:
#line 1868 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 795:
#line 1870 "frame/parser.Y"
    {fr->markerCompositeOperationCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 796:
#line 1872 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 797:
#line 1874 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 798:
#line 1877 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 799:
#line 1881 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 800:
#line 1885 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 801:
#line 1887 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 802:
#line 1889 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 803:
#line 1891 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 804:
#line 1893 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 805:
#line 1895 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 806:
#line 1897 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 807:
#line 1899 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 808:
#line 1901 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 809:
#line 1903 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 810:
#line 1905 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 811:
#line 1907 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 812:
#line 1909 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 813:
#line 1911 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 814:
#line 1912 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 815:
#line 1914 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 816:
#line 1916 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 817:
#line 1917 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 818:
#line 1918 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 819:
#line 1920 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 820:
#line 1922 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 821:
#line 1923 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 822:
#line 1924 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 823:
#line 1925 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 824:
#line 1927 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 825:
#line 1929 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 826:
#line 1933 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 827:
#line 1936 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 828:
#line 1939 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 829:
#line 1943 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 830:
#line 1947 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 831:
#line 1952 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 832:
#line 1956 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 833:
#line 1957 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 834:
#line 1958 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 835:
#line 1960 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 836:
#line 1962 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 837:
#line 1966 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 838:
#line 1967 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 839:
#line 1968 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 840:
#line 1970 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 841:
#line 1973 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 842:
#line 1976 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 843:
#line 1979 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 844:
#line 1980 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 845:
#line 1984 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 846:
#line 1988 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 847:
#line 1990 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 848:
#line 1991 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 849:
#line 1993 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 850:
#line 1996 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 851:
#line 1999 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 852:
#line 2000 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 853:
#line 2002 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 854:
#line 2003 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 855:
#line 2004 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 856:
#line 2006 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 857:
#line 2007 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 858:
#line 2009 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 859:
#line 2012 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 860:
#line 2015 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 861:
#line 2017 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 862:
#line 2018 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 866:
#line 2023 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 867:
#line 2024 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 868:
#line 2026 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 869:
#line 2028 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 870:
#line 2030 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 871:
#line 2031 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 875:
#line 2037 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 876:
#line 2038 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 877:
#line 2039 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 878:
#line 2040 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 879:
#line 2041 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 880:
#line 2042 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 881:
#line 2043 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 882:
#line 2044 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 883:
#line 2045 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 884:
#line 2046 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 885:
#line 2048 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 886:
#line 2050 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 887:
#line 2051 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 888:
#line 2052 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 889:
#line 2053 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 890:
#line 2054 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 891:
#line 2056 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 892:
#line 2057 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 893:
#line 2058 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 894:
#line 2059 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 895:
#line 2060 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 896:
#line 2062 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 897:
#line 2063 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 898:
#line 2064 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 899:
#line 2065 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 900:
#line 2066 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 901:
#line 2067 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 902:
#line 2070 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 903:
#line 2071 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 904:
#line 2072 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 905:
#line 2073 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 906:
#line 2074 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 907:
#line 2075 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 908:
#line 2076 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 909:
#line 2077 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 910:
#line 2078 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 911:
#line 2079 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 912:
#line 2080 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 913:
#line 2081 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 914:
#line 2082 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 915:
#line 2083 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 916:
#line 2084 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 917:
#line 2085 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 918:
#line 2086 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 919:
#line 2087 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 920:
#line 2088 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 921:
#line 2089 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 922:
#line 2090 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 923:
#line 2093 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 924:
#line 2094 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 925:
#line 2095 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 926:
#line 2096 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 927:
#line 2097 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 928:
#line 2099 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 929:
#line 2109 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 930:
#line 2117 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 931:
#line 2126 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 932:
#line 2134 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 933:
#line 2141 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 934:
#line 2148 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 935:
#line 2156 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 936:
#line 2164 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 937:
#line 2169 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 938:
#line 2174 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 939:
#line 2179 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 940:
#line 2184 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 941:
#line 2189 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 942:
#line 2194 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 943:
#line 2199 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 944:
#line 2208 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 945:
#line 2218 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 946:
#line 2228 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 947:
#line 2237 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 948:
#line 2245 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 949:
#line 2255 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 950:
#line 2265 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 951:
#line 2275 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 952:
#line 2287 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 953:
#line 2296 "frame/parser.Y"
    {fr->createCompositeCmd(
	    (yyvsp[(2) - (3)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 955:
#line 2304 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 956:
#line 2306 "frame/parser.Y"
    {
	  if ((yyvsp[(1) - (1)].integer) < 0 || (yyvsp[(1) - (1)].integer) > 1) {
	    fr->error("composite operation must be 0 (union) or 1 (intersection)");
	    YYERROR;
	  }
	  (yyval.integer)=(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 957:
#line 2315 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 958:
#line 2317 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 959:
#line 2319 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 960:
#line 2324 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 961:
#line 2327 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 962:
#line 2328 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 963:
#line 2329 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 964:
#line 2336 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 965:
#line 2338 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 966:
#line 2339 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 967:
#line 2342 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 968:
#line 2343 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 969:
#line 2344 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 970:
#line 2345 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 971:
#line 2346 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 972:
#line 2347 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 973:
#line 2348 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 975:
#line 2352 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 976:
#line 2353 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 977:
#line 2354 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 978:
#line 2355 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 979:
#line 2356 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 980:
#line 2359 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 981:
#line 2361 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 982:
#line 2363 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 983:
#line 2365 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 984:
#line 2367 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 985:
#line 2369 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 986:
#line 2371 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 987:
#line 2372 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 988:
#line 2373 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 989:
#line 2375 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 990:
#line 2377 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 991:
#line 2380 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 992:
#line 2382 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 993:
#line 2383 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 994:
#line 2384 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 995:
#line 2386 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 996:
#line 2388 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 997:
#line 2391 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 998:
#line 2394 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 999:
#line 2395 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1000:
#line 2396 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1001:
#line 2397 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1002:
#line 2399 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1003:
#line 2400 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1004:
#line 2401 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1005:
#line 2402 "frame/parser.Y"
    {fr->getMarkerCompositeOperationCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1006:
#line 2403 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1007:
#line 2404 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1008:
#line 2406 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1009:
#line 2408 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1010:
#line 2410 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1011:
#line 2412 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1012:
#line 2414 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1013:
#line 2415 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1014:
#line 2417 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1015:
#line 2419 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1016:
#line 2421 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1017:
#line 2422 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1018:
#line 2423 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1019:
#line 2425 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1020:
#line 2427 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1021:
#line 2430 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1022:
#line 2433 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1023:
#line 2434 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1024:
#line 2436 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1025:
#line 2439 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1026:
#line 2442 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1027:
#line 2443 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1028:
#line 2444 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1029:
#line 2445 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1030:
#line 2447 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1031:
#line 2449 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1032:
#line 2451 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1033:
#line 2452 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1034:
#line 2454 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1035:
#line 2455 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1036:
#line 2456 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1037:
#line 2457 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1038:
#line 2458 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1039:
#line 2460 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1040:
#line 2462 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1041:
#line 2464 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1042:
#line 2466 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1044:
#line 2468 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1045:
#line 2469 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1046:
#line 2471 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1047:
#line 2473 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1048:
#line 2474 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1049:
#line 2475 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1051:
#line 2477 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1053:
#line 2481 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1054:
#line 2482 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1055:
#line 2483 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1056:
#line 2484 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1057:
#line 2485 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1058:
#line 2486 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1059:
#line 2488 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1060:
#line 2489 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1061:
#line 2491 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1062:
#line 2494 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1063:
#line 2495 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1064:
#line 2496 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1065:
#line 2497 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1066:
#line 2500 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1067:
#line 2501 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1068:
#line 2504 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1069:
#line 2505 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1070:
#line 2508 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1071:
#line 2509 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1072:
#line 2512 "frame/parser.Y"
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

  case 1073:
#line 2525 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1074:
#line 2526 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1075:
#line 2530 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1076:
#line 2531 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1077:
#line 2535 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1078:
#line 2536 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1079:
#line 2541 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1080:
#line 2545 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1081:
#line 2550 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1082:
#line 2552 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1083:
#line 2555 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1084:
#line 2557 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1085:
#line 2560 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1086:
#line 2562 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1087:
#line 2565 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1088:
#line 2566 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1089:
#line 2567 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1090:
#line 2568 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1091:
#line 2569 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1092:
#line 2570 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1093:
#line 2572 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1096:
#line 2579 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1097:
#line 2580 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1098:
#line 2581 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1099:
#line 2582 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1100:
#line 2583 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1101:
#line 2584 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1104:
#line 2589 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1105:
#line 2590 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1106:
#line 2591 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1107:
#line 2592 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1108:
#line 2593 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1109:
#line 2594 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1110:
#line 2595 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1111:
#line 2596 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1112:
#line 2597 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1113:
#line 2598 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1114:
#line 2599 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1115:
#line 2600 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1118:
#line 2607 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1119:
#line 2608 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1121:
#line 2612 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1122:
#line 2614 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1123:
#line 2615 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1124:
#line 2618 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1125:
#line 2619 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1126:
#line 2620 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1127:
#line 2621 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1128:
#line 2622 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1129:
#line 2623 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1130:
#line 2626 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1131:
#line 2627 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1134:
#line 2635 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1135:
#line 2638 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1136:
#line 2639 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1140:
#line 2646 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1141:
#line 2649 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1142:
#line 2653 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1143:
#line 2654 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1144:
#line 2655 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1145:
#line 2656 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1146:
#line 2657 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1147:
#line 2658 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1148:
#line 2659 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1149:
#line 2660 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1150:
#line 2666 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1151:
#line 2667 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1152:
#line 2668 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1153:
#line 2669 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1154:
#line 2673 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1155:
#line 2674 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1156:
#line 2676 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1157:
#line 2681 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1159:
#line 2683 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1161:
#line 2685 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1162:
#line 2688 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1163:
#line 2690 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1164:
#line 2695 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1165:
#line 2698 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1166:
#line 2699 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1167:
#line 2700 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1168:
#line 2703 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1169:
#line 2705 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1170:
#line 2709 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1171:
#line 2710 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1172:
#line 2714 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1173:
#line 2715 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1174:
#line 2716 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1175:
#line 2717 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1176:
#line 2723 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1177:
#line 2724 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1178:
#line 2730 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1179:
#line 2731 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1180:
#line 2732 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1181:
#line 2733 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1184:
#line 2741 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1185:
#line 2743 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1186:
#line 2744 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1187:
#line 2745 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1188:
#line 2749 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1189:
#line 2750 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1190:
#line 2751 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1191:
#line 2752 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1192:
#line 2755 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1193:
#line 2756 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1194:
#line 2759 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1195:
#line 2760 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1196:
#line 2761 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1197:
#line 2764 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1198:
#line 2765 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1199:
#line 2766 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1200:
#line 2769 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1201:
#line 2770 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1202:
#line 2771 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1203:
#line 2774 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1204:
#line 2775 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1205:
#line 2776 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1206:
#line 2777 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1207:
#line 2780 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1208:
#line 2781 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1210:
#line 2783 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1211:
#line 2784 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1212:
#line 2787 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1213:
#line 2788 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1214:
#line 2789 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1220:
#line 2797 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1221:
#line 2800 "frame/parser.Y"
    {fr->savePixelMaskFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1222:
#line 2801 "frame/parser.Y"
    {fr->savePixelMaskChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1223:
#line 2802 "frame/parser.Y"
    {fr->savePixelMaskSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1224:
#line 2806 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1225:
#line 2808 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1226:
#line 2810 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1243:
#line 2831 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1244:
#line 2832 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1245:
#line 2833 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1246:
#line 2836 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1247:
#line 2837 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1248:
#line 2838 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1249:
#line 2841 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1250:
#line 2842 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1251:
#line 2843 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1252:
#line 2846 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1253:
#line 2847 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1254:
#line 2848 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1256:
#line 2852 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1257:
#line 2853 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1258:
#line 2854 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1259:
#line 2857 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1260:
#line 2858 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1261:
#line 2859 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1262:
#line 2863 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1263:
#line 2865 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1264:
#line 2867 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1265:
#line 2870 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1266:
#line 2871 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1267:
#line 2872 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1268:
#line 2875 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1269:
#line 2876 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1270:
#line 2877 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1271:
#line 2881 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1272:
#line 2883 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1273:
#line 2885 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1274:
#line 2888 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1275:
#line 2889 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1276:
#line 2890 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1277:
#line 2893 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1278:
#line 2894 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1279:
#line 2895 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1280:
#line 2899 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1281:
#line 2901 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1282:
#line 2903 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1283:
#line 2906 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1284:
#line 2907 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1285:
#line 2908 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1286:
#line 2911 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1287:
#line 2912 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1288:
#line 2913 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1289:
#line 2916 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1290:
#line 2917 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1291:
#line 2918 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1292:
#line 2922 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1293:
#line 2924 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1294:
#line 2926 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1295:
#line 2930 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1296:
#line 2934 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1297:
#line 2936 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1298:
#line 2940 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1299:
#line 2943 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1300:
#line 2944 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1301:
#line 2945 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1302:
#line 2946 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1303:
#line 2949 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1304:
#line 2951 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1305:
#line 2953 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1306:
#line 2956 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1308:
#line 2960 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1309:
#line 2961 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1310:
#line 2962 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1311:
#line 2965 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1312:
#line 2966 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1313:
#line 2970 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1315:
#line 2972 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1318:
#line 2977 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1319:
#line 2978 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1320:
#line 2979 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1321:
#line 2982 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1322:
#line 2983 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1323:
#line 2984 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1324:
#line 2987 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1325:
#line 2989 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1326:
#line 2994 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1327:
#line 2995 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1328:
#line 2998 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1329:
#line 3005 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1330:
#line 3007 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1331:
#line 3009 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1332:
#line 3014 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1334:
#line 3018 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1335:
#line 3019 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1336:
#line 3020 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1337:
#line 3022 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1338:
#line 3024 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1339:
#line 3029 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11387 "frame/parser.C"
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


#line 3033 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

