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
#define YYLAST   5702

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  365
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  233
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1335
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2960

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
    4479,  4481,  4484,  4487,  4490,  4493,  4496,  4499,  4502,  4505,
    4508,  4512,  4516,  4520,  4524,  4528,  4532,  4534,  4537,  4540,
    4543,  4547,  4550,  4554,  4558,  4562,  4566,  4570,  4574,  4577,
    4580,  4583,  4586,  4589,  4592,  4595,  4598,  4601,  4604,  4607,
    4610,  4613,  4616,  4620,  4624,  4628,  4631,  4634,  4637,  4641,
    4645,  4649,  4652,  4655,  4658,  4661,  4664,  4667,  4671,  4675,
    4679,  4682,  4685,  4688,  4691,  4694,  4697,  4701,  4705,  4709,
    4712,  4715,  4718,  4721,  4724,  4727,  4730,  4733,  4736,  4740,
    4744,  4748,  4753,  4760,  4763,  4765,  4767,  4769,  4771,  4773,
    4774,  4780,  4782,  4789,  4793,  4795,  4798,  4801,  4804,  4808,
    4812,  4815,  4818,  4821,  4824,  4827,  4830,  4834,  4837,  4840,
    4844,  4846,  4850,  4855,  4858,  4860,  4863,  4869,  4876,  4883,
    4886,  4888,  4891,  4894,  4900,  4907
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
     369,    -1,   153,    66,     5,    -1,   157,   561,    -1,   158,
     560,    -1,   161,   486,    -1,   167,    15,     4,    -1,   182,
     489,    -1,   185,   507,    -1,   186,   508,    -1,   187,   509,
      -1,   190,   525,   510,    -1,   191,   545,    -1,   205,    66,
       5,    -1,   222,   546,    -1,   223,   547,    -1,   224,   550,
      -1,   245,    88,    -1,   238,   552,    -1,   236,   551,    -1,
     253,    -1,   249,   525,   554,    -1,   255,   559,    -1,   257,
     562,    -1,   262,   564,    -1,   276,    -1,   282,   586,    -1,
     298,     4,    -1,   299,   395,    -1,   310,    -1,   312,   588,
      -1,   318,    -1,   321,   590,    -1,   322,   591,    -1,   352,
     595,    -1,   360,   596,    -1,     3,    -1,     4,    -1,   369,
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
     397,    -1,   153,   398,    -1,   194,   557,    -1,    36,   558,
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
      -1,   167,    15,    -1,   195,    -1,   190,   525,   519,    -1,
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
      66,     5,    -1,    80,    -1,    73,   518,     5,    -1,    73,
     518,   315,     5,    -1,    75,   100,    -1,    -1,    83,   511,
     514,    -1,    89,    -1,   100,   516,    -1,   106,   517,    -1,
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
     142,   369,    -1,     4,    82,   106,   372,   372,     4,   367,
     367,     4,    -1,     4,    82,   106,   372,   372,     4,   367,
     367,     4,   379,    -1,     4,    82,   106,   372,   372,     4,
     367,   367,     4,   377,   384,    -1,     4,    82,   106,     5,
       5,   377,   384,   377,   386,    -1,     4,    83,    21,   247,
     367,   367,    -1,     4,    83,    49,   247,   367,   367,    -1,
       4,    83,    52,    20,   367,   367,    -1,     4,    83,    52,
     247,   367,   367,    -1,     4,    83,   111,   247,   367,   367,
      -1,     4,    83,   114,    20,   367,   367,    -1,     4,    83,
     114,   247,   367,   367,    -1,     4,    83,    82,    20,   367,
     367,    -1,     4,    83,    82,   247,   367,   367,    -1,     4,
      83,   235,   319,     4,   367,   367,    -1,     4,    83,   268,
     319,     4,   367,   367,    -1,     4,   100,    -1,     4,   100,
      21,     4,    -1,     4,   100,    49,     4,    -1,     4,   100,
      52,     4,    -1,     4,   100,   111,     4,    -1,     4,   100,
      55,   512,     5,    -1,     4,   100,   114,     4,    -1,     4,
     100,    82,     4,    -1,     4,   100,   235,   319,     4,    -1,
       4,   100,   268,   319,     4,    -1,     4,   100,   295,    -1,
       4,   100,   295,     5,    -1,     4,   100,   295,     4,    -1,
       4,   106,    39,     4,    -1,     4,   110,   247,   367,   367,
     377,   386,    -1,     4,   111,   247,   367,   367,   367,     4,
     377,   386,    -1,     4,   111,   247,     5,   377,   386,    -1,
       4,   114,   106,   372,   372,     4,   367,   367,   367,     4,
      -1,     4,   114,   106,   372,   372,     4,   367,   367,   367,
       4,   379,    -1,     4,   114,   106,   372,   372,     4,   367,
     367,   367,     4,   377,   384,    -1,     4,   114,   106,     5,
       5,   377,   384,   377,   386,    -1,     4,   132,     5,    -1,
       4,   153,    -1,     4,   153,   220,    -1,     4,   179,    26,
     369,   369,    -1,     4,   179,   233,   377,   384,   376,   376,
      -1,     4,   203,   367,   367,    -1,     4,   203,   136,    -1,
       4,   203,    35,    -1,     4,   203,   303,   377,   384,   376,
      -1,     4,   235,   253,   367,   367,   377,   386,    -1,     4,
     268,   253,   367,   367,   377,   386,    -1,     4,   233,   272,
     390,    -1,     4,   233,   279,     4,    -1,     4,   241,   377,
     384,   376,   376,   367,   377,   386,    -1,     4,   242,   531,
     369,    -1,     4,   257,    39,    -1,     4,   258,   133,     5,
      -1,     4,   258,   233,   377,   384,   376,   376,    -1,     4,
     258,   293,   377,   384,   377,   386,    -1,     4,   269,    -1,
       4,   269,   220,    -1,     4,   295,     5,    -1,     4,   297,
       5,    -1,     4,   297,   257,   369,    -1,     4,   309,    -1,
       4,   311,    -1,     4,   317,    26,   369,    -1,     4,   317,
     233,   377,   384,   376,   377,   386,   367,   372,    -1,     4,
     351,     4,    -1,   170,    -1,   170,   367,   367,    -1,   181,
     526,    -1,   182,   527,    -1,   203,   528,    -1,   240,   369,
      -1,   242,   531,   369,    -1,   242,   531,   369,   367,   367,
      -1,   257,    39,   367,   367,    -1,   257,   202,   367,   367,
       4,    -1,   257,   112,    -1,   262,   535,    -1,   269,   536,
      -1,   276,   537,    -1,     5,    66,     5,    -1,     5,    80,
      -1,     5,   100,    -1,     5,    89,    -1,     5,   132,     5,
      -1,     5,   153,    -1,     5,   153,   220,    -1,     5,   203,
     367,   367,    -1,     5,   203,   136,    -1,     5,   203,    35,
      -1,     5,   203,   303,   377,   384,   376,    -1,     5,   242,
     531,   369,    -1,     5,   269,    -1,     5,   269,   220,    -1,
       5,   309,    -1,     5,   311,    -1,   295,   106,     5,     5,
      -1,   295,   100,     5,    -1,   295,   100,    16,    -1,   295,
       5,    -1,   295,   312,     5,    -1,   226,    -1,   226,   377,
      -1,   308,    -1,   309,    16,    -1,   311,    16,    -1,   351,
       4,    -1,   269,    -1,   311,    -1,   153,    -1,   309,    -1,
      39,   203,    -1,   203,    -1,   112,   203,    -1,    39,   106,
      -1,   106,    -1,   112,   106,    -1,    39,   257,    -1,   257,
      -1,   112,   257,    -1,   100,    -1,   297,    -1,    66,    -1,
     351,    -1,   242,    -1,   132,    -1,   170,    -1,   312,    -1,
      -1,     4,    -1,    29,   369,    -1,   247,   367,    -1,   166,
       4,    -1,   221,     4,   367,    -1,    62,   367,   367,   367,
     532,    -1,   110,   367,   367,   367,   367,   371,   532,    -1,
      48,   367,   367,   367,   367,   371,   532,    -1,   235,   367,
     367,   367,   367,   532,    -1,   268,   367,   367,   367,   367,
     532,    -1,   179,   367,   367,   367,   367,   532,    -1,   317,
     367,   367,   367,   367,   532,    -1,   297,   367,   367,   371,
     532,    -1,    62,   233,   367,   367,   391,   532,    -1,    48,
     233,   367,   367,   391,   532,    -1,   103,   233,   367,   367,
     391,   532,    -1,    85,   233,   367,   367,   391,   532,    -1,
     363,   233,   367,   367,   391,   532,    -1,    26,   233,   367,
     367,   391,   532,    -1,    51,   233,   367,   367,   391,   532,
      -1,   258,   367,   367,   367,   367,   377,   384,   377,   386,
       5,   532,    -1,    74,   367,   367,   367,   377,   384,   532,
      -1,   241,   367,   367,   367,   367,   367,   532,    -1,    21,
     367,   367,   367,   367,     4,   532,    -1,   111,   367,   367,
     367,   367,   367,     4,   371,   532,    -1,    49,   367,   367,
     367,   367,   367,     4,   371,   532,    -1,    82,   367,   367,
     372,   372,     4,   367,   367,     4,   532,    -1,   114,   367,
     367,   372,   372,     4,   367,   367,   367,     4,   371,   532,
      -1,    52,   367,   367,   372,   372,     4,   367,   367,   367,
       4,   371,   532,    -1,    75,   532,    -1,   296,   515,    -1,
       5,   367,   367,    -1,   315,     5,   367,   367,    -1,   367,
     367,   315,     5,    -1,     5,   377,   384,   376,    -1,    -1,
     269,    -1,    16,    -1,    39,   367,   367,     4,    -1,   202,
     367,   367,     4,    -1,   112,    -1,   105,    -1,   353,    -1,
      63,    -1,   261,    -1,   260,    -1,   244,    -1,   354,    -1,
      60,   520,    -1,    66,    -1,   132,    -1,   115,    -1,   147,
     367,   367,    -1,   160,   367,   367,    -1,     4,    19,    82,
       5,     5,     5,   377,     4,    -1,     4,    19,   155,     5,
       5,     4,    -1,     4,    19,   231,     5,     5,     5,     5,
     377,   384,   393,    -1,     4,    19,   232,     5,     5,   377,
     393,    -1,     4,    19,   246,     5,     5,     5,   377,    -1,
       4,    19,   289,   377,   384,    -1,   160,    16,    -1,     4,
      20,    -1,     4,    20,   379,    -1,     4,    20,   377,   384,
      -1,     4,    21,   247,   377,   386,    -1,     4,    49,   247,
     377,   386,    -1,     4,    48,   247,   377,   386,    -1,     4,
      52,    20,    -1,     4,    52,    20,   379,    -1,     4,    52,
      20,   377,   384,    -1,     4,    52,   247,   377,   386,    -1,
       4,    59,   377,   384,   385,    -1,     4,    62,   247,   377,
     386,    -1,     4,    66,    -1,     4,    74,    26,    -1,     4,
      74,   172,    -1,     4,    74,   247,   377,   386,    -1,     4,
      74,   293,    -1,     4,    75,   142,    -1,     4,    82,    20,
      -1,     4,    82,    20,   379,    -1,     4,    82,    20,   377,
     384,    -1,     4,    82,   247,   377,   386,    -1,     4,   110,
     247,   377,   386,    -1,     4,   111,   247,   377,   386,    -1,
       4,   114,    20,    -1,     4,   114,    20,   379,    -1,     4,
     114,    20,   377,   384,    -1,     4,   114,   247,   377,   386,
      -1,     4,   132,    -1,     4,   153,    -1,     4,   179,    26,
      -1,     4,   179,   174,   377,   386,    -1,     4,   179,   233,
     377,   384,   385,    -1,     4,   188,   174,   367,   377,   386,
      -1,     4,   233,   272,    -1,     4,   233,   279,    -1,     4,
     241,   233,   377,   384,   385,    -1,     4,   241,   174,   377,
     386,    -1,     4,   241,   301,   377,   386,    -1,     4,   242,
      -1,     4,   242,   531,    -1,     4,   258,   133,    -1,     4,
     258,   174,   377,   386,    -1,     4,   258,   233,   377,   384,
     385,    -1,     4,   258,   293,    -1,     4,   269,    -1,     4,
     295,    -1,     4,   295,     4,    -1,     4,   297,    -1,     4,
     297,   257,    -1,     4,   307,    -1,     4,   317,    26,    -1,
       4,   317,   174,   377,   386,    -1,     4,   317,   233,   377,
     384,   385,    -1,     4,   351,    -1,   153,   521,    -1,   153,
     216,    -1,   216,    -1,   235,   268,   367,   367,    -1,   268,
     268,   367,   367,    -1,   240,    -1,   242,   531,    -1,   269,
     522,    -1,   269,   216,    -1,   276,   523,    -1,     5,    66,
      -1,     5,   132,    -1,     5,   160,    -1,     5,   242,   531,
      -1,     5,   295,    -1,     5,   295,   216,    -1,   295,    16,
      -1,   295,    99,   204,    -1,   351,    -1,    29,    -1,   247,
      -1,   166,    -1,   221,    -1,    -1,   367,   367,    -1,    -1,
     367,   367,    -1,    -1,   297,    -1,    -1,    -1,   234,    -1,
     249,    -1,   313,    -1,    57,    -1,   134,    -1,   518,   377,
     384,   385,   369,   533,   540,    -1,   269,   518,   377,   384,
     385,   369,   533,   540,    -1,   518,     5,    -1,   518,     5,
       4,     5,   377,   384,    -1,   518,     4,    -1,   518,     4,
       4,     5,   377,   384,    -1,   127,     5,    -1,   127,     5,
       5,    -1,   367,   367,    -1,   136,    -1,    35,    -1,    39,
     367,   367,    -1,   202,   367,   367,    -1,   112,    -1,   303,
     377,   384,   376,    -1,   529,   530,    -1,   530,    -1,   531,
     364,   369,    -1,    66,   364,     5,    -1,    93,   364,     4,
       4,    -1,   351,   364,     4,    -1,   132,   364,     5,    -1,
     297,   364,     5,    -1,   543,    -1,   544,    -1,   211,    -1,
     269,    -1,   153,    -1,    92,    -1,   129,    -1,   106,    -1,
     203,    -1,   257,    -1,   100,    -1,   163,    -1,   285,    -1,
     123,    -1,   524,    -1,   524,   529,    -1,    -1,    -1,   534,
     538,    -1,     5,   518,   377,   384,   385,   369,    -1,   269,
       5,   518,   377,   384,   385,   369,    -1,   296,     5,    -1,
      16,    -1,   220,   367,   367,    -1,   304,    -1,   304,   367,
     367,    -1,   125,    -1,   173,    -1,   369,    -1,   297,   369,
      -1,   538,   539,    -1,   539,    -1,   531,   364,   369,    -1,
      -1,    -1,   541,   542,    -1,   542,   543,    -1,   543,    -1,
     295,   364,     5,    -1,    55,   364,   512,     5,     5,    -1,
      64,    -1,    66,     5,    -1,   189,   380,    -1,   248,   367,
     367,    -1,   293,   377,    -1,   302,   367,    -1,    45,   381,
      -1,   189,     4,    -1,   363,    -1,   361,    -1,   354,    -1,
     211,    -1,   367,   367,   367,   367,    -1,   367,   367,    -1,
     379,   367,   367,    -1,   377,   384,   376,    -1,   303,   548,
      -1,    38,   367,   367,    -1,   202,   549,    -1,   240,   369,
      -1,   367,   367,    -1,   379,   367,   367,    -1,   377,   384,
     376,    -1,    39,   367,   367,    -1,   367,   367,    -1,   112,
     367,   367,    -1,   369,    -1,   322,   378,   384,    -1,     5,
       4,     4,    -1,   312,    -1,    70,   553,    -1,   175,     4,
      -1,   254,     4,    -1,   263,   367,    -1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,    -1,     4,     4,     4,
       4,     4,     4,    -1,    54,    -1,   144,    -1,   255,    -1,
      90,    -1,   153,   555,    -1,   269,   556,    -1,    39,   367,
     367,    -1,   202,   367,   367,    -1,   112,    -1,   274,   112,
      -1,    39,   367,   367,    -1,   202,   367,   367,    -1,   112,
      -1,   274,   112,    -1,   197,    -1,    12,    -1,   211,    -1,
      33,    -1,   108,    -1,    61,     5,    -1,   293,   377,    -1,
     316,     4,     4,     4,    -1,    61,     5,    -1,   293,   377,
      -1,   316,     4,     4,     4,    -1,    61,     5,    -1,    61,
     314,    -1,   293,   377,    -1,   316,     4,     4,     4,    -1,
     367,    -1,   367,    98,    -1,   202,   563,    -1,   303,   367,
      -1,   303,   367,    98,    -1,    39,    -1,   367,    -1,   112,
      -1,    25,   566,    -1,   127,   567,    -1,   359,   565,    -1,
     215,   584,    -1,   113,   585,    -1,   228,     5,    -1,   122,
       5,    -1,    61,     5,    -1,   283,     4,    -1,   122,     5,
     394,    -1,    61,     5,   394,    -1,   283,     4,   394,    -1,
     255,    87,   574,    -1,   158,    87,   577,    -1,   157,    87,
     580,    -1,   568,    -1,   162,   568,    -1,   294,   569,    -1,
     280,   570,    -1,   118,    87,   571,    -1,   200,   572,    -1,
     255,   162,   575,    -1,   255,    87,   576,    -1,   158,   162,
     578,    -1,   158,    87,   579,    -1,   157,   162,   581,    -1,
     157,    87,   582,    -1,   251,   583,    -1,   122,     5,    -1,
      61,     5,    -1,   283,     4,    -1,   122,     5,    -1,    61,
       5,    -1,   283,     4,    -1,   122,     5,    -1,    61,     5,
      -1,   283,     4,    -1,   122,     5,    -1,    61,     5,    -1,
     283,     4,    -1,   162,   573,    -1,   122,     5,     4,    -1,
      61,     5,     4,    -1,   283,     4,     4,    -1,   122,     5,
      -1,    61,     5,    -1,   283,     4,    -1,   122,     5,   394,
      -1,    61,     5,   394,    -1,   283,     4,   394,    -1,   122,
       5,    -1,    61,     5,    -1,   283,     4,    -1,   122,     5,
      -1,    61,     5,    -1,   283,     4,    -1,   122,     5,   394,
      -1,    61,     5,   394,    -1,   283,     4,   394,    -1,   122,
       5,    -1,    61,     5,    -1,   283,     4,    -1,   122,     5,
      -1,    61,     5,    -1,   283,     4,    -1,   122,     5,   394,
      -1,    61,     5,   394,    -1,   283,     4,   394,    -1,   122,
       5,    -1,    61,     5,    -1,   283,     4,    -1,   122,     5,
      -1,    61,     5,    -1,   283,     4,    -1,   122,     5,    -1,
      61,     5,    -1,   283,     4,    -1,   122,     5,   394,    -1,
      61,     5,   394,    -1,   283,     4,   394,    -1,   122,     5,
       5,   394,    -1,   587,     4,     4,   367,   367,   372,    -1,
     587,     4,    -1,   100,    -1,    50,    -1,   305,    -1,   140,
      -1,   109,    -1,    -1,     4,   367,   367,   367,   367,    -1,
     214,    -1,   214,     4,   367,   367,   367,   367,    -1,   127,
     280,   589,    -1,     4,    -1,     4,     4,    -1,   367,   377,
      -1,   367,   367,    -1,   303,   367,   367,    -1,   378,   384,
     385,    -1,    15,   594,    -1,   253,     4,    -1,   250,   593,
      -1,    22,   592,    -1,     4,     4,    -1,     4,     5,    -1,
     297,     4,     5,    -1,     4,     4,    -1,     4,     5,    -1,
     297,     4,     5,    -1,     4,    -1,     4,   378,   384,    -1,
     303,     4,   378,   384,    -1,   234,    64,    -1,   239,    -1,
     367,   367,    -1,   367,   367,    11,   367,   367,    -1,   367,
     367,    11,   379,   367,   367,    -1,   367,   367,    11,   377,
     384,   376,    -1,   303,   597,    -1,   126,    -1,   126,   367,
      -1,   367,   367,    -1,   367,   367,    11,   367,   367,    -1,
     367,   367,    11,   379,   367,   367,    -1,   367,   367,    11,
     377,   384,   376,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   469,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   528,
     529,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   545,   547,   548,   549,   550,   552,   553,   554,
     555,   558,   559,   560,   561,   562,   565,   566,   569,   570,
     571,   574,   577,   580,   583,   595,   602,   609,   617,   618,
     619,   620,   621,   624,   625,   626,   627,   628,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,   646,   647,   648,   649,   650,
     651,   654,   655,   658,   659,   660,   661,   662,   663,   666,
     667,   668,   669,   670,   673,   674,   675,   676,   677,   678,
     679,   680,   683,   684,   685,   686,   687,   690,   691,   692,
     693,   694,   695,   696,   697,   700,   701,   702,   705,   706,
     707,   708,   711,   712,   713,   716,   717,   718,   721,   722,
     723,   726,   727,   728,   729,   730,   731,   732,   733,   736,
     737,   740,   741,   742,   743,   744,   745,   748,   749,   750,
     751,   754,   755,   756,   757,   758,   759,   762,   763,   764,
     765,   766,   767,   768,   769,   770,   774,   775,   778,   779,
     782,   783,   786,   787,   791,   792,   793,   794,   795,   796,
     797,   798,   801,   802,   805,   806,   807,   809,   811,   812,
     813,   815,   819,   820,   823,   824,   826,   829,   831,   837,
     838,   839,   842,   843,   844,   847,   848,   849,   850,   851,
     852,   853,   859,   860,   863,   864,   865,   866,   867,   870,
     871,   872,   873,   876,   877,   882,   887,   894,   896,   898,
     900,   902,   903,   904,   907,   909,   911,   913,   916,   917,
     920,   921,   922,   923,   924,   927,   930,   933,   939,   945,
     948,   949,   952,   953,   954,   961,   962,   963,   964,   967,
     968,   971,   972,   975,   976,   979,   981,   985,   986,   989,
     991,   992,   993,   994,   997,   998,  1000,  1001,  1002,  1005,
    1007,  1009,  1010,  1012,  1014,  1016,  1018,  1022,  1025,  1026,
    1027,  1028,  1031,  1032,  1035,  1038,  1039,  1040,  1041,  1042,
    1043,  1044,  1045,  1046,  1047,  1048,  1049,  1050,  1051,  1052,
    1053,  1054,  1055,  1056,  1057,  1058,  1059,  1060,  1061,  1062,
    1063,  1064,  1065,  1066,  1067,  1068,  1069,  1070,  1072,  1073,
    1074,  1075,  1076,  1077,  1078,  1080,  1081,  1082,  1085,  1087,
    1091,  1093,  1097,  1098,  1099,  1100,  1101,  1102,  1103,  1104,
    1107,  1108,  1109,  1112,  1115,  1116,  1118,  1120,  1121,  1122,
    1123,  1124,  1125,  1132,  1133,  1136,  1137,  1138,  1141,  1142,
    1145,  1148,  1149,  1151,  1155,  1156,  1157,  1160,  1164,  1166,
    1167,  1168,  1169,  1170,  1171,  1172,  1173,  1174,  1177,  1178,
    1179,  1182,  1183,  1186,  1188,  1196,  1198,  1200,  1204,  1205,
    1207,  1210,  1213,  1214,  1218,  1220,  1223,  1228,  1229,  1230,
    1234,  1235,  1236,  1239,  1240,  1241,  1244,  1245,  1247,  1248,
    1249,  1250,  1251,  1252,  1253,  1254,  1255,  1256,  1258,  1259,
    1262,  1263,  1266,  1267,  1268,  1269,  1272,  1273,  1276,  1278,
    1281,  1285,  1286,  1287,  1289,  1291,  1295,  1296,  1297,  1300,
    1301,  1302,  1303,  1304,  1305,  1306,  1309,  1312,  1313,  1314,
    1317,  1318,  1319,  1322,  1323,  1324,  1327,  1328,  1329,  1330,
    1331,  1332,  1335,  1336,  1337,  1338,  1339,  1340,  1341,  1344,
    1345,  1348,  1349,  1352,  1353,  1356,  1357,  1360,  1361,  1362,
    1365,  1366,  1369,  1370,  1373,  1376,  1384,  1385,  1388,  1389,
    1390,  1391,  1392,  1393,  1394,  1395,  1396,  1397,  1398,  1399,
    1400,  1401,  1402,  1403,  1404,  1405,  1408,  1411,  1412,  1415,
    1416,  1417,  1418,  1421,  1422,  1423,  1424,  1427,  1428,  1429,
    1430,  1431,  1432,  1435,  1436,  1437,  1438,  1439,  1440,  1442,
    1443,  1448,  1449,  1452,  1454,  1456,  1459,  1460,  1461,  1462,
    1463,  1464,  1467,  1469,  1471,  1473,  1474,  1476,  1478,  1480,
    1482,  1484,  1485,  1486,  1489,  1490,  1491,  1492,  1493,  1494,
    1496,  1497,  1498,  1501,  1504,  1506,  1508,  1510,  1512,  1514,
    1516,  1518,  1521,  1523,  1525,  1527,  1528,  1529,  1530,  1531,
    1532,  1533,  1534,  1535,  1538,  1539,  1540,  1541,  1542,  1543,
    1544,  1546,  1548,  1549,  1550,  1553,  1554,  1555,  1556,  1557,
    1558,  1560,  1561,  1562,  1565,  1566,  1567,  1568,  1569,  1572,
    1575,  1578,  1581,  1584,  1587,  1590,  1593,  1596,  1601,  1604,
    1607,  1610,  1613,  1616,  1619,  1622,  1625,  1628,  1631,  1636,
    1639,  1642,  1645,  1648,  1651,  1654,  1657,  1660,  1665,  1667,
    1669,  1671,  1673,  1675,  1680,  1682,  1684,  1688,  1691,  1694,
    1697,  1700,  1703,  1706,  1709,  1712,  1715,  1718,  1723,  1724,
    1725,  1726,  1727,  1728,  1729,  1731,  1733,  1734,  1735,  1738,
    1739,  1740,  1741,  1742,  1743,  1745,  1746,  1747,  1750,  1752,
    1754,  1755,  1757,  1759,  1763,  1764,  1767,  1768,  1769,  1772,
    1775,  1776,  1777,  1778,  1779,  1780,  1781,  1784,  1792,  1793,
    1794,  1795,  1797,  1799,  1800,  1800,  1801,  1802,  1803,  1804,
    1805,  1807,  1808,  1810,  1813,  1816,  1817,  1818,  1821,  1824,
    1827,  1831,  1834,  1837,  1840,  1844,  1849,  1854,  1856,  1858,
    1859,  1861,  1863,  1865,  1867,  1868,  1870,  1872,  1876,  1881,
    1883,  1885,  1887,  1889,  1891,  1893,  1895,  1897,  1899,  1901,
    1904,  1905,  1907,  1909,  1910,  1912,  1914,  1915,  1916,  1918,
    1920,  1921,  1922,  1924,  1925,  1928,  1932,  1935,  1938,  1942,
    1947,  1953,  1954,  1955,  1957,  1958,  1962,  1964,  1965,  1966,
    1969,  1972,  1975,  1977,  1979,  1984,  1987,  1988,  1989,  1992,
    1996,  1997,  1999,  2000,  2001,  2003,  2004,  2006,  2007,  2012,
    2014,  2015,  2017,  2018,  2019,  2020,  2021,  2022,  2024,  2026,
    2028,  2029,  2030,  2032,  2034,  2035,  2036,  2037,  2038,  2039,
    2040,  2041,  2042,  2043,  2044,  2046,  2048,  2049,  2050,  2051,
    2053,  2054,  2055,  2056,  2057,  2059,  2060,  2061,  2062,  2063,
    2064,  2067,  2068,  2069,  2070,  2071,  2072,  2073,  2074,  2075,
    2076,  2077,  2078,  2079,  2080,  2081,  2082,  2083,  2084,  2085,
    2086,  2087,  2090,  2091,  2092,  2093,  2094,  2095,  2103,  2110,
    2119,  2128,  2135,  2142,  2150,  2158,  2165,  2170,  2175,  2180,
    2185,  2190,  2195,  2201,  2211,  2221,  2231,  2238,  2248,  2258,
    2267,  2279,  2292,  2297,  2300,  2302,  2304,  2309,  2313,  2314,
    2315,  2321,  2323,  2325,  2328,  2329,  2330,  2331,  2332,  2333,
    2334,  2337,  2338,  2339,  2340,  2341,  2342,  2344,  2346,  2348,
    2350,  2352,  2354,  2357,  2358,  2359,  2360,  2362,  2365,  2367,
    2369,  2370,  2371,  2373,  2376,  2379,  2381,  2382,  2383,  2384,
    2386,  2387,  2388,  2389,  2390,  2392,  2394,  2396,  2399,  2400,
    2401,  2403,  2406,  2407,  2408,  2409,  2411,  2414,  2418,  2419,
    2420,  2423,  2426,  2428,  2429,  2430,  2431,  2433,  2436,  2437,
    2439,  2440,  2441,  2442,  2443,  2445,  2446,  2448,  2451,  2452,
    2453,  2454,  2455,  2457,  2459,  2460,  2461,  2462,  2464,  2466,
    2467,  2468,  2469,  2470,  2471,  2473,  2474,  2476,  2479,  2480,
    2481,  2482,  2485,  2486,  2489,  2490,  2493,  2494,  2497,  2510,
    2511,  2515,  2516,  2520,  2521,  2524,  2528,  2534,  2536,  2539,
    2541,  2544,  2546,  2550,  2551,  2552,  2553,  2554,  2555,  2556,
    2560,  2561,  2564,  2565,  2566,  2567,  2568,  2569,  2570,  2571,
    2574,  2575,  2576,  2577,  2578,  2579,  2580,  2581,  2582,  2583,
    2584,  2585,  2588,  2589,  2592,  2593,  2593,  2596,  2598,  2600,
    2603,  2604,  2605,  2606,  2607,  2608,  2611,  2612,  2615,  2616,
    2619,  2623,  2624,  2624,  2627,  2628,  2631,  2634,  2638,  2639,
    2640,  2641,  2642,  2643,  2644,  2645,  2651,  2652,  2653,  2654,
    2657,  2659,  2660,  2665,  2667,  2668,  2669,  2670,  2673,  2674,
    2679,  2683,  2684,  2685,  2688,  2689,  2694,  2695,  2698,  2700,
    2701,  2702,  2707,  2709,  2715,  2716,  2717,  2718,  2721,  2722,
    2725,  2727,  2729,  2730,  2733,  2735,  2736,  2737,  2740,  2741,
    2744,  2745,  2746,  2749,  2750,  2751,  2754,  2755,  2756,  2759,
    2760,  2761,  2762,  2765,  2766,  2767,  2768,  2769,  2772,  2773,
    2774,  2777,  2778,  2779,  2780,  2781,  2782,  2785,  2786,  2787,
    2790,  2792,  2794,  2796,  2797,  2798,  2801,  2802,  2803,  2804,
    2805,  2806,  2807,  2808,  2809,  2810,  2811,  2812,  2813,  2816,
    2817,  2818,  2821,  2822,  2823,  2826,  2827,  2828,  2831,  2832,
    2833,  2836,  2837,  2838,  2839,  2842,  2843,  2844,  2847,  2849,
    2851,  2855,  2856,  2857,  2860,  2861,  2862,  2865,  2867,  2869,
    2873,  2874,  2875,  2878,  2879,  2880,  2883,  2885,  2887,  2891,
    2892,  2893,  2896,  2897,  2898,  2901,  2902,  2903,  2906,  2908,
    2910,  2914,  2918,  2920,  2925,  2928,  2929,  2930,  2931,  2934,
    2935,  2938,  2940,  2942,  2945,  2946,  2947,  2950,  2951,  2954,
    2956,  2957,  2958,  2959,  2962,  2963,  2964,  2967,  2968,  2969,
    2972,  2973,  2978,  2980,  2983,  2990,  2991,  2993,  2998,  3000,
    3003,  3004,  3005,  3006,  3008,  3013
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
  "rotateMotion", "save", "savePixelMask", "saveArray", "saveFits",
  "saveFitsImage", "saveFitsTable", "saveFitsSlice", "saveFitsExtCube",
  "saveFitsMosaic", "saveFitsMosaicImage", "saveArrayRGBCube",
  "saveFitsRGBImage", "saveFitsRGBCube", "saveArrayHLSCube",
  "saveFitsHLSImage", "saveFitsHLSCube", "saveArrayHSVCube",
  "saveFitsHSVImage", "saveFitsHSVCube", "saveFitsResample", "saveNRRD",
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
     510,   512,   512,   512,   512,   512,   512,   512,   512,   512,
     512,   512,   512,   512,   512,   512,   512,   512,   512,   512,
     512,   512,   513,   513,   513,   513,   513,   513,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   515,   515,   515,   515,   516,   516,
     516,   517,   517,   517,   518,   518,   518,   518,   518,   518,
     518,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   520,   520,
     520,   520,   521,   521,   522,   522,   523,   523,   524,   525,
     525,   525,   525,   525,   525,   526,   526,   527,   527,   527,
     527,   527,   527,   528,   528,   528,   528,   528,   528,   528,
     529,   529,   530,   530,   530,   530,   530,   530,   530,   530,
     531,   531,   531,   531,   531,   531,   531,   531,   531,   531,
     531,   531,   532,   532,   533,   534,   533,   535,   535,   535,
     536,   536,   536,   536,   536,   536,   537,   537,   538,   538,
     539,   540,   541,   540,   542,   542,   543,   544,   545,   545,
     545,   545,   545,   545,   545,   545,   546,   546,   546,   546,
     547,   547,   547,   547,   547,   547,   547,   547,   548,   548,
     548,   549,   549,   549,   550,   550,   550,   550,   551,   551,
     551,   551,   552,   552,   553,   553,   553,   553,   554,   554,
     555,   555,   555,   555,   556,   556,   556,   556,   557,   557,
     558,   558,   558,   559,   559,   559,   560,   560,   560,   561,
     561,   561,   561,   562,   562,   562,   562,   562,   563,   563,
     563,   564,   564,   564,   564,   564,   564,   565,   565,   565,
     566,   566,   566,   566,   566,   566,   567,   567,   567,   567,
     567,   567,   567,   567,   567,   567,   567,   567,   567,   568,
     568,   568,   569,   569,   569,   570,   570,   570,   571,   571,
     571,   572,   572,   572,   572,   573,   573,   573,   574,   574,
     574,   575,   575,   575,   576,   576,   576,   577,   577,   577,
     578,   578,   578,   579,   579,   579,   580,   580,   580,   581,
     581,   581,   582,   582,   582,   583,   583,   583,   584,   584,
     584,   585,   586,   586,   586,   587,   587,   587,   587,   588,
     588,   588,   588,   588,   589,   589,   589,   590,   590,   591,
     591,   591,   591,   591,   592,   592,   592,   593,   593,   593,
     594,   594,   594,   594,   595,   596,   596,   596,   596,   596,
     597,   597,   597,   597,   597,   597
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
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     1,     2,     2,     2,
       3,     2,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     3,     3,     3,     2,     2,     2,     3,     3,
       3,     2,     2,     2,     2,     2,     2,     3,     3,     3,
       2,     2,     2,     2,     2,     2,     3,     3,     3,     2,
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
       0,     0,     0,     0,     7,     8,     0,     0,     0,     0,
       0,   317,     0,     0,     0,     0,     0,     0,   345,     0,
       0,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1069,     0,     0,     0,     0,     0,     0,     0,     0,
    1069,    43,     0,     0,     0,    48,     0,     0,     0,    52,
    1299,    54,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,    47,  1295,  1294,  1298,  1297,  1296,    49,     0,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    51,
       0,     0,  1301,    53,     0,     0,    55,     0,     0,     0,
       0,   157,    56,  1324,    57,     0,     0,    58,     1,     4,
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
       0,     0,   577,   565,    25,  1199,  1200,  1201,     0,  1196,
    1197,     0,     0,     0,   586,   585,     0,     0,     0,     0,
      29,     0,     0,     0,     0,   596,     0,   597,     0,     0,
       0,     0,     0,     0,     0,   598,     0,   748,     0,   599,
       0,   600,     0,     0,   601,     0,   753,   752,   751,     0,
     756,     0,     0,     0,   922,     0,     0,     0,   760,   764,
     766,   958,     0,     0,     0,     0,   860,     0,     0,     0,
     895,     0,     0,     0,     0,     0,     0,     0,   897,     0,
       0,     0,    34,   142,   143,   141,   140,  1144,  1139,  1145,
     136,   137,   135,   138,   134,  1140,     0,  1142,  1143,    36,
       0,     0,     0,     0,  1156,  1157,     0,   157,     0,  1154,
    1151,     0,     0,     0,   157,  1174,  1177,  1175,  1176,  1168,
    1169,  1170,  1171,     0,     0,     0,    44,  1193,  1194,     0,
    1208,  1210,  1209,  1205,  1206,  1204,     0,     0,     0,     0,
       0,     0,  1211,     0,  1215,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1212,  1226,     0,
       0,     0,  1214,  1216,     0,     0,     0,  1213,  1293,  1191,
    1192,  1190,   212,     0,   216,   208,     0,   218,   209,     0,
     220,   210,  1189,  1188,   211,   213,   214,   215,     0,     0,
     207,     0,     0,     0,     0,  1307,  1320,     0,     0,  1310,
       0,     0,  1313,     0,     0,  1312,  1311,   165,  1330,     0,
    1329,  1325,   233,   229,     0,   238,     0,   235,     0,   254,
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
     457,     0,     0,     0,     0,   972,   974,   973,     0,  1062,
       0,  1041,     0,  1044,     0,     0,  1064,  1066,     0,  1057,
     372,     0,   518,   520,   530,   523,   532,   524,   534,   525,
     536,   522,     0,     0,   385,   541,   538,   539,   165,   566,
     578,   579,   580,   582,     0,     0,     0,   595,   583,     0,
       0,     0,     0,     0,     0,   178,   178,   172,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   175,
     175,   172,     0,     0,   172,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   643,   667,     0,     0,     0,   635,
       0,     0,     0,     0,   178,   172,     0,     0,   744,     0,
     754,   755,   157,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   810,     0,     0,     0,
       0,     0,   832,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   850,     0,     0,   855,   856,     0,     0,     0,
     875,   877,   876,     0,   879,     0,     0,   886,   888,   889,
     923,     0,     0,     0,     0,   758,   759,   966,   964,   969,
     968,   967,   965,   970,     0,   763,     0,   960,   959,   767,
       0,   963,     0,   768,   769,   770,   771,     0,     0,     0,
       0,     0,   862,     0,     0,   863,  1085,     0,  1088,  1084,
       0,     0,     0,   864,   896,   865,  1103,  1108,  1105,  1111,
    1104,  1102,  1109,  1106,  1100,  1107,  1101,  1110,     0,     0,
     870,     0,     0,     0,     0,   871,  1120,  1124,  1125,     0,
    1122,   872,     0,  1126,   873,   893,     0,     0,     0,   898,
     899,   900,  1141,  1155,     0,     0,  1162,  1158,     0,     0,
       0,  1153,  1152,  1166,  1165,     0,     0,  1182,     0,     0,
    1178,     0,  1186,     0,     0,  1179,     0,  1207,   201,   201,
       0,     0,     0,   201,     0,  1240,     0,  1239,     0,     0,
       0,     0,  1227,     0,     0,     0,     0,  1231,     0,     0,
       0,  1238,     0,     0,     0,     0,     0,  1229,  1241,     0,
       0,     0,  1228,   201,   201,   201,  1218,  1217,  1219,     0,
     217,   219,   221,     0,   222,     0,    60,     0,  1303,     0,
    1308,   157,  1323,     0,  1314,  1315,     0,  1317,  1318,     0,
     166,   167,  1309,  1331,  1332,     0,   225,     0,   239,     0,
       0,     0,     0,   273,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   315,   157,     0,     0,
       0,     0,   157,     0,   335,     0,   334,   402,   401,     0,
       0,     0,   157,     0,   165,   447,   445,   449,   453,     0,
       0,     0,   165,     0,   488,   472,     0,   483,   485,   168,
       0,     0,   364,     0,     0,    60,     0,   462,    83,    82,
       0,     0,   984,     0,     0,     0,     0,     0,     0,   996,
       0,     0,     0,     0,     0,     0,  1012,  1013,     0,     0,
       0,     0,  1023,     0,  1029,  1030,  1032,  1034,     0,  1038,
    1049,  1050,  1051,     0,  1053,  1058,  1060,  1061,  1059,   971,
       0,  1040,     0,  1039,   983,     0,     0,  1045,     0,  1047,
       0,  1046,  1067,  1048,  1055,     0,     0,   384,     0,     0,
    1202,  1198,   593,   594,     0,   591,   587,     0,   178,   178,
     178,   179,   180,   605,   606,   174,   173,     0,   178,   178,
     178,     0,   613,   612,   611,   623,   175,   178,   178,   178,
     176,   177,   178,   178,     0,   178,   178,     0,   175,     0,
     636,     0,   642,     0,   641,   640,   639,     0,     0,     0,
     666,     0,   665,     0,   638,   637,     0,     0,     0,     0,
     175,   175,   172,     0,     0,   172,     0,     0,     0,   178,
     178,   740,     0,   178,   178,   745,     0,   191,   192,   193,
     194,   195,   196,     0,    89,    90,    88,   775,     0,     0,
       0,     0,     0,   916,   914,   909,     0,   919,   903,   920,
     906,   918,   912,   901,   915,   904,   902,   921,   917,     0,
       0,   789,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   820,     0,     0,     0,     0,
     831,   833,     0,     0,   838,   837,     0,     0,   181,     0,
       0,   157,     0,   846,     0,     0,     0,     0,   851,   852,
     853,     0,     0,     0,   859,   874,   878,   880,   883,   882,
       0,     0,     0,   887,   924,   926,     0,   925,   761,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1068,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   765,     0,     0,     0,     0,   861,
       0,   157,  1081,  1079,  1077,     0,     0,   157,  1083,   866,
       0,     0,     0,     0,  1119,     0,     0,  1127,   891,   892,
       0,   894,  1161,  1163,  1160,  1159,  1150,     0,     0,     0,
    1183,     0,     0,  1187,  1195,   203,   204,   205,   206,   202,
    1221,  1220,     0,     0,     0,  1225,     0,     0,     0,  1224,
       0,     0,     0,  1223,  1222,   201,     0,     0,     0,  1230,
       0,     0,     0,  1237,     0,     0,     0,  1236,     0,     0,
       0,  1235,     0,     0,     0,  1234,     0,     0,     0,     0,
       0,  1251,     0,  1286,  1285,  1287,     0,     0,     0,  1233,
       0,     0,     0,  1232,  1246,  1245,  1247,  1243,  1242,  1244,
    1289,  1288,  1290,     0,     0,     0,  1305,  1306,     0,  1321,
     157,  1316,  1319,     0,     0,   157,     0,     0,     0,   236,
       0,     0,     0,     0,   277,     0,     0,     0,     0,     0,
       0,     0,   312,   311,     0,     0,   303,   314,   316,     0,
     326,   328,   327,   325,   157,   333,     0,     0,     0,   165,
     157,     0,     0,     0,     0,   467,   481,   490,     0,   484,
     170,   171,   169,   477,     0,   493,     0,     0,   460,   465,
      81,     0,     0,     0,     0,     0,     0,   157,   985,     0,
       0,     0,   990,     0,   157,     0,   997,   998,     0,  1000,
    1001,  1002,     0,     0,     0,  1008,     0,  1014,     0,     0,
       0,  1018,  1019,     0,     0,     0,  1024,  1025,     0,     0,
    1028,  1031,  1033,  1035,     0,     0,  1052,  1054,   975,  1063,
     976,     0,     0,  1065,  1056,     0,     0,   546,   547,     0,
     588,   592,     0,   602,   603,   604,   178,   608,   609,   610,
       0,     0,     0,   617,   618,   172,     0,     0,     0,   178,
     624,   625,   626,   627,   629,   175,   632,   633,     0,   178,
       0,     0,     0,   175,   175,   172,     0,     0,     0,     0,
       0,     0,     0,   175,   175,   172,     0,     0,   172,     0,
       0,     0,     0,   175,   175,   172,     0,     0,     0,     0,
     664,     0,   668,     0,     0,     0,     0,     0,   175,   175,
     172,     0,     0,   172,     0,     0,     0,     0,     0,   175,
     175,   172,     0,     0,   172,     0,   175,   644,   645,   646,
     647,   649,     0,   652,   653,     0,   175,     0,     0,   738,
     739,   178,   742,   743,     0,   774,   157,   776,     0,     0,
       0,     0,     0,     0,     0,   908,   905,   911,   910,   907,
     913,     0,     0,     0,     0,     0,   157,   794,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   811,   812,   813,     0,   817,   814,   816,     0,     0,
     822,   821,   823,     0,     0,     0,     0,     0,     0,   157,
     157,   836,   187,   183,   188,   182,   185,   184,   186,   842,
     843,     0,     0,   845,   847,   157,   157,     0,   854,   857,
     157,   157,   881,   885,   927,   762,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1112,   952,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   953,     0,     0,     0,     0,     0,   772,   773,
     157,   165,  1082,     0,     0,  1086,  1087,     0,     0,   868,
       0,   157,     0,  1121,  1123,   890,     0,  1180,  1181,  1184,
    1185,   201,   201,   201,   201,   201,   201,   201,   201,   201,
    1291,  1249,  1248,  1250,  1283,  1282,  1284,  1280,  1279,  1281,
    1274,  1273,  1275,  1271,  1270,  1272,  1253,  1252,  1256,  1255,
    1257,  1254,  1265,  1264,  1266,  1262,  1261,  1263,     0,     0,
    1300,     0,  1322,     0,   157,     0,  1326,     0,     0,   240,
       0,   237,     0,     0,     0,     0,     0,   284,     0,     0,
       0,     0,     0,   157,     0,   318,   145,     0,   422,     0,
     443,   165,   168,     0,     0,   456,     0,   494,   495,     0,
     459,     0,     0,     0,     0,     0,   157,   986,   168,   168,
     168,   157,   991,   168,   165,   168,   168,   157,  1003,   168,
     168,   168,   157,  1009,   168,   168,   157,     0,   168,   157,
     168,   168,   157,   168,   157,  1042,  1043,     0,     0,   545,
       0,   607,   614,   615,   616,     0,   620,   621,   622,   628,
     178,   175,   634,   655,   656,   657,   658,   659,     0,   661,
     662,   175,   175,   718,   719,   720,   721,   723,     0,   726,
     727,     0,   175,   729,   730,   731,   732,   733,     0,   735,
     736,   175,     0,     0,     0,   175,   175,   172,     0,     0,
       0,     0,     0,     0,   175,   175,   172,     0,     0,     0,
       0,     0,     0,   175,   175,   172,     0,     0,     0,   175,
     178,   178,   178,   178,   178,     0,   178,   178,     0,   175,
     175,   178,   178,   178,   178,   178,     0,   178,   178,     0,
     175,   648,   175,     0,   654,     0,     0,   741,     0,   777,
     168,     0,     0,   168,     0,     0,     0,   787,   168,   790,
     791,   168,   793,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   815,   818,   819,     0,
     168,     0,     0,     0,   834,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1113,  1091,     0,  1098,  1099,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   157,     0,
       0,    86,     0,     0,   961,   962,   165,     0,     0,     0,
    1089,   867,   869,   165,   157,  1173,  1277,  1276,  1278,  1268,
    1267,  1269,  1259,  1258,  1260,  1292,     0,  1302,  1333,     0,
       0,  1328,  1327,   241,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   304,   168,   423,   427,   444,   446,
       0,   454,   489,   157,     0,     0,     0,     0,     0,     0,
     982,   987,   989,   988,   992,   993,   994,   995,   999,  1004,
    1005,  1006,  1007,  1010,  1011,  1015,   165,   168,  1021,   165,
    1022,  1026,   165,  1036,   165,     0,   157,     0,   544,     0,
     619,   630,   178,   175,   663,   722,   175,     0,   728,   175,
     737,   178,   178,   178,   178,   178,     0,   178,   178,   175,
     178,   178,   178,   178,   178,     0,   178,   178,   175,   178,
     178,   178,   178,   178,     0,   178,   178,   175,   178,   678,
     679,   680,   681,   683,   175,   686,   687,     0,   178,   178,
     707,   708,   709,   710,   712,   175,   715,   716,     0,   178,
     650,   175,   746,   747,   157,   779,     0,   168,   781,     0,
     157,     0,   788,   792,   157,     0,   799,   800,   801,   802,
     806,   807,   803,   804,   805,     0,     0,   168,   826,     0,
     157,     0,     0,   839,   168,     0,     0,   168,   168,     0,
     884,     0,   189,   189,     0,     0,   189,     0,   189,  1068,
       0,     0,     0,     0,     0,     0,     0,     0,  1090,     0,
       0,   189,   189,     0,     0,     0,     0,     0,     0,     0,
       0,   954,     0,     0,     0,  1068,    87,     0,   189,     0,
    1115,   157,   157,     0,   165,     0,   223,  1335,  1334,     0,
       0,   245,     0,     0,     0,     0,     0,     0,     0,     0,
     319,   455,     0,   338,     0,   978,     0,   197,     0,  1016,
    1017,  1020,  1027,  1037,   377,     0,   338,     0,   631,   660,
     724,   175,   734,   669,   670,   671,   672,   673,   175,   675,
     676,   178,   698,   699,   700,   701,   702,   175,   704,   705,
     178,   689,   690,   691,   692,   693,   175,   695,   696,   178,
     682,   178,   175,   688,   711,   178,   175,   717,   651,     0,
     168,   782,     0,     0,     0,     0,     0,   808,   809,   824,
       0,     0,     0,   835,   840,     0,   848,   849,   841,   168,
       0,   190,  1068,  1068,    86,     0,  1068,     0,  1068,   928,
     157,     0,  1093,     0,  1096,  1136,  1097,  1095,  1092,     0,
    1068,  1068,    86,     0,     0,  1068,  1068,     0,     0,  1068,
     957,   955,   956,   935,  1068,  1068,  1115,  1131,     0,  1080,
    1078,  1117,     0,     0,     0,     0,   247,   279,   280,     0,
       0,     0,   278,     0,   338,   339,   341,   340,   388,     0,
       0,   198,   200,   199,   980,   981,   338,   390,     0,   725,
     178,   677,   178,   706,   178,   697,   684,   178,   713,   178,
       0,   778,   168,   168,     0,   168,     0,   168,   168,     0,
     168,     0,  1068,   941,   937,  1068,     0,   942,     0,   936,
    1068,     0,  1094,     0,   939,   938,  1068,     0,     0,   933,
     931,  1068,   157,   932,   934,   940,  1131,  1075,     0,     0,
    1116,  1129,  1118,  1172,     0,     0,   286,   287,   285,   305,
     308,   306,     0,     0,   389,   977,   157,   391,   590,   674,
     703,   694,   685,   714,   168,   780,   786,     0,   798,   795,
     825,   830,     0,   844,     0,   946,   930,    86,     0,   944,
    1137,     0,   929,    86,     0,   945,     0,  1076,  1133,  1135,
       0,  1128,     0,     0,     0,     0,     0,     0,   197,     0,
     783,   157,   796,   827,   858,  1068,     0,     0,  1068,     0,
     168,  1134,  1130,   246,     0,     0,     0,     0,     0,   979,
     757,   157,   784,   797,   157,   828,   948,     0,  1068,   947,
       0,     0,   248,   298,     0,   297,     0,   785,   829,    86,
     949,    86,  1068,   296,   295,  1068,  1068,   943,   951,   950
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    56,  1506,   175,   157,   970,  2625,  2626,   451,   452,
     453,   454,   158,   159,   160,   735,   727,    96,   865,   474,
    1292,  1793,  1437,  1452,  1433,  2029,  2732,  1503,  2794,  1670,
     359,   815,   818,   821,   830,    66,   383,   389,   393,   396,
      71,   399,    78,   415,   411,   405,   422,    87,   431,    97,
     103,   436,   438,   440,   508,   923,  1764,   442,   445,   110,
     461,   161,   163,  2788,   179,   181,   224,   965,  1004,   497,
     912,   499,   509,   915,   920,   511,   513,   926,   516,   928,
     527,   931,   933,   530,   534,   538,   540,   543,   547,   583,
     579,  1357,   561,   951,   956,   948,  1345,   962,   564,   593,
     596,   601,   575,   571,   606,   614,   995,   997,   999,  1001,
     619,  1006,   227,   621,  1859,   246,   624,   626,   630,   635,
     643,   264,  1426,   654,   272,   665,  1442,   667,   675,  1059,
    1460,  1054,  1920,  1472,  1470,  1922,  1055,  1462,  1464,   681,
     684,   679,   274,   282,   284,   722,  1136,  1529,  1125,  1624,
    2072,  1139,  1143,  1134,   990,  1399,  1403,  1411,  1413,  2056,
     290,  1152,  1155,  1163,  2381,  2382,  2383,  2057,  2767,  2768,
    1185,  1191,  1194,  2850,  2851,  2847,  2848,  2898,  2384,  2385,
     298,   304,   312,   749,   744,   317,   322,   324,   759,   766,
    1220,  1225,   824,   812,   330,   256,   252,   334,   773,   341,
     807,   782,   797,   798,  1262,  1257,  1689,  1247,  1711,  1683,
    1723,  1719,  1679,  1705,  1701,  1675,  1697,  1693,  1251,   802,
     784,   347,   348,   363,  1278,   366,   372,   842,   845,   839,
     374,   377,   850
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2409
static const yytype_int16 yypact[] =
{
    5114,    61,   491,    53, -2409, -2409,   -57,  -144,   770,   527,
     938,    87,  1361,   161,   429,   112,   114,   109,  5314,    32,
    2889, -2409,   270,   220,   222,  1230,   251,  1313,   219,    21,
     496,   -15,  1064,   450,  1124,  3697,   124,   660,   516,   464,
     -15, -2409,   225,    44,   -14, -2409,   545,   552,   616, -2409,
      96, -2409,    60,  1579,   338,    65,   593,   198,   171,   285,
     609,   612,    68,   617,    -4,   640, -2409, -2409, -2409,  1053,
     689, -2409,   186,    31,   429,   -21,   661,   602, -2409,   625,
     689, -2409, -2409,   689,   689,   284,   689, -2409, -2409, -2409,
   -2409,   689, -2409, -2409, -2409, -2409, -2409, -2409,    38,   603,
     633,   646,   119, -2409,   689,  1505,   689,   689,  1310,   689,
   -2409, -2409, -2409,   457, -2409, -2409, -2409, -2409,  4278, -2409,
   -2409, -2409, -2409, -2409, -2409,   689, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409,  1427, -2409,
     689, -2409,   674, -2409, -2409,   429,   429,   429,   429,   429,
     429,   429,   429,   429,   429, -2409, -2409, -2409, -2409, -2409,
     569, -2409,   649,  1666,   592,    12,   434,   571,    22,  4309,
    1110,  4731,  4680,   723,  4278,  4241, -2409,   519,   -74,   704,
     787,   752,   239,   253,   129,   987,   765,   -15,  1202, -2409,
     746, -2409,   607,   590,   408, -2409,    18, -2409,  1257, -2409,
      -6,   773,    71, -2409, -2409,  4804, -2409, -2409, -2409,   815,
     845,   905, -2409, -2409, -2409, -2409,  1017, -2409, -2409, -2409,
   -2409,  1190, -2409, -2409,  4804,  2356, -2409,   934, -2409,     7,
    4804,   946, -2409,   951,  4804,   961, -2409,    41, -2409,   966,
     975,    78, -2409,   689, -2409,   980,   556,  1010,   348,  1144,
    1022,    55, -2409, -2409, -2409,  1026,  1042,   429,   429,   689,
     689, -2409, -2409,  1046, -2409, -2409, -2409, -2409, -2409, -2409,
    3077,   925, -2409,  1100,    24,   689,  4804,   689, -2409,  1102,
   -2409, -2409, -2409, -2409, -2409,   689,  1390,   429,  3825,   689,
    1427,   689, -2409,  1111, -2409,  5353, -2409, -2409,    -1,  1123,
    1128,   689, -2409,  1134, -2409, -2409,   -58,  1135,  4804,  1159,
   -2409,  1405,   689,  1070, -2409,   711,  1049,  1823,   110,  1172,
     520, -2409, -2409, -2409, -2409, -2409, -2409, -2409,  1191, -2409,
     576,   311,   347,   416,    46,   689,  1200,   689,   264, -2409,
     689,   947,  1263, -2409,   689,   689, -2409,    10,    19,    29,
    1265,  1427, -2409, -2409, -2409,  1246,   689, -2409, -2409, -2409,
   -2409, -2409,   689, -2409,  1270,  1273, -2409,   689,  1186, -2409,
   -2409, -2409, -2409, -2409, -2409,   689, -2409, -2409,   689, -2409,
   -2409,   573,   573, -2409,  1296, -2409, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409,  1116,   689,   689,  1325,
    1326,  1337, -2409, -2409,   689,   689,   689,   689,   689,   689,
     689, -2409,   689, -2409,  1340, -2409, -2409, -2409, -2409,   792,
   -2409,  1347, -2409,  4804,  1350, -2409,   689, -2409, -2409, -2409,
     689,  1363,  1367,  1367,  4804,   689,   689,   689,   689,   689,
     689, -2409,   689,  4278,  1505,   689,   689, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409,  1505,   689, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409, -2409,  1368, -2409,  1099,
     -43, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409,
     -78, -2409, -2409, -2409,  1205, -2409,   950,     3,     3, -2409,
   -2409, -2409,  1380, -2409,  1385, -2409, -2409,   -71, -2409,  1214,
   -2409, -2409, -2409,  1229, -2409, -2409,  1427, -2409,   689,   689,
   -2409,  4804,  4804,  1427, -2409, -2409,  1427, -2409, -2409, -2409,
   -2409,  1427, -2409, -2409,  4804,  1427,   689, -2409, -2409,  4804,
   -2409,  1410,    37,  1215,     1, -2409, -2409,  1217,  4804,    75,
   -2409, -2409, -2409, -2409, -2409, -2409,  1423,  1428, -2409, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409,  1430, -2409,  1239, -2409,
     -41, -2409,   689, -2409, -2409,   691, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409, -2409,    -6, -2409, -2409,
   -2409, -2409, -2409, -2409,  1245,  1253, -2409, -2409,  1388,  1389,
    1392, -2409, -2409,  1223, -2409,   689,  1455,  1231,  5353, -2409,
    1427, -2409, -2409,  1459, -2409, -2409, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409,  4804,  4804,
    4804,  4804, -2409, -2409, -2409, -2409, -2409, -2409,  1466, -2409,
   -2409,  1467,  1468,   429, -2409, -2409,  1471,  1472,  1275,   689,
   -2409,   166,  1393,  1399,  1401, -2409,  1486, -2409,   335,  1406,
      76,   325,  5315,   421,  1487, -2409,  1492, -2409,  1495, -2409,
     192, -2409,  1496,  1498, -2409,  1506, -2409, -2409, -2409,   689,
   -2409,  5353,  4642,  1581,   495,  1511,   599,  1411, -2409, -2409,
   -2409,    81,   780,  1521,  1524,    62,   689,   414,  1029,   173,
    4804,   429,  1996,  1063,    15,   378,   370,    34, -2409,  1510,
    1516,  1529, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409,   689, -2409, -2409, -2409,
     689,   689,   689,   689, -2409, -2409,   689,  1427,   689, -2409,
     689,  1505,   689,  1531,  1427, -2409, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409,  1532,   405,   489, -2409, -2409, -2409,  1539,
   -2409, -2409, -2409, -2409,  1446, -2409,  1540,  1541,  1462,  1463,
    1464,  1556, -2409,  1557, -2409,  1560,  1481,  1565,   448,   631,
     533,   535,   538,   696,   588,  1568,   637, -2409, -2409,  1570,
    1571,  1573, -2409, -2409,  1576,  1578,  1574, -2409,  1580, -2409,
   -2409, -2409, -2409,  1584, -2409, -2409,  1586, -2409, -2409,  1587,
   -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409,   689,   689,
   -2409,   689,  1145,   689,   689, -2409,  5353,  1534,  1591, -2409,
    1189,  1601, -2409,  1237,  1603, -2409, -2409,   -22,   689,   689,
   -2409,  1597, -2409, -2409,  1615,  1220,   689,  1610,   564, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409,  1627,  1630,   689,   689,   689,   689,   689,
     689,   689,  1631,   429,  1635,  1636,  1427,  4804, -2409, -2409,
   -2409, -2409, -2409,  1427, -2409, -2409,   689,   689,   689,  4804,
     689,  1505,   689, -2409,   689, -2409, -2409, -2409, -2409, -2409,
    1639,  1641, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409, -2409,  1110, -2409,   689, -2409, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409,  4804,   689,  1427,  1427,
     -22,   -22,   -22,  1427,  1505,   689,  1427, -2409, -2409, -2409,
     689, -2409,   -41,  1470,  1646,  1645, -2409, -2409,  1427, -2409,
    1490,  1491, -2409,  1650,  1652, -2409,  1656,  1242,  1625,  1628,
   -2409,   689,  4647,   382,   967, -2409, -2409, -2409,   689,   570,
    1139, -2409,  1398, -2409,  1996,  1400,   804,  1372,    95, -2409,
   -2409,   689, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409,
   -2409, -2409,   689,  1671, -2409, -2409, -2409, -2409,   -22, -2409,
   -2409, -2409, -2409, -2409,  1673,  1708,  4759, -2409, -2409,  1710,
    1712,   689,  1713,  1715,  1716,   -37,   -37,   -86,  1711,  1725,
    1733,  1734,  1734,  1734,  1461,  1465,  1744,  1746,  1754,   482,
     482,   -86,  1756,  1757,   -86,  1758,  1759,  1763,  1765,  1763,
    1765,  3880,  1766,  1767, -2409, -2409,  1763,  1765,   714, -2409,
    1771,  1772,  1773,  1776,   -37,   -86,  1778,  1782, -2409,  1783,
   -2409, -2409,  1427,  1012,  1515,  1530,  1536,  1542,  1685,  2364,
    1545,  1791,   265,  1655,  1692,   713,   668,  1760,  1553,  1554,
    1696,  1798,  1588,    66,   157,   585,  1558,  4804,  1996,  1768,
     860,  1559,  1589,  1801,   102, -2409, -2409,   202,  1806,  1808,
   -2409, -2409, -2409,  1811,  1598,   181,  1996,  1599, -2409, -2409,
   -2409,   429,  1813,  1816,   689, -2409, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409,     5, -2409,  1177, -2409, -2409, -2409,
     689, -2409,   689, -2409, -2409, -2409, -2409,   689,   689,   689,
     599,  4804, -2409,  1817,  1250, -2409, -2409,   689, -2409, -2409,
     689,  4804,   689, -2409, -2409, -2409, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409,   429,   689,
   -2409,   689,   599,  1819,  1821, -2409, -2409, -2409, -2409,   689,
     689, -2409,   429, -2409, -2409, -2409,   154,  1825,  1826, -2409,
   -2409, -2409, -2409, -2409,   689,   689, -2409, -2409,  1505,   689,
     689, -2409, -2409, -2409, -2409,  1824,   689, -2409,   689,  1709,
   -2409,   689, -2409,   689,  1722, -2409,  1833, -2409,  1291,  1291,
     638,   695,   712,  1291,  1835, -2409,   741, -2409,   743,   761,
     778,   848, -2409,  1836,  1838,   858,  1840, -2409,  1841,  1847,
    1850, -2409,   868,   869,  1852,  1853,  1856, -2409, -2409,  1857,
    1858,  1860, -2409,  1291,  1291,  1291, -2409, -2409, -2409,   689,
   -2409, -2409, -2409,   689, -2409,   689,   137,  4804, -2409,   689,
   -2409,  1427, -2409,  5353, -2409, -2409,  1861, -2409, -2409,  1862,
   -2409, -2409, -2409, -2409,  1834,  3825, -2409,   689,  1854,   689,
     689,   689,   886, -2409,  1864,   689,   689,  1866,   689,   689,
     689,   689,    -2,  1868,   429,   429, -2409,  1427,   689,  1867,
    1871,  1872,  1427,  4804, -2409,   689, -2409, -2409, -2409,   689,
     689,   689,  1427,  4804,   -22, -2409, -2409, -2409, -2409,  1505,
     689,  1873,   -22,   689,   811, -2409,  1874, -2409, -2409,   864,
     740,   689, -2409,   689,  1876,  1878,   689, -2409, -2409, -2409,
    1877,  1235,  4278,  1614,  1634,  1638,    16,  4804,  1640, -2409,
     298,  1741,   184,  1648,  1649,   389, -2409, -2409,   587,  1717,
     890,   -80,  1996,  1083, -2409,  1882,  1642, -2409,   865, -2409,
   -2409, -2409, -2409,  1996,  1677, -2409, -2409, -2409, -2409, -2409,
     689, -2409,   689, -2409, -2409,   689,   689, -2409,   689, -2409,
     689, -2409, -2409, -2409, -2409,  1693,   689, -2409,   689,    89,
   -2409, -2409, -2409, -2409,  1896,  1925, -2409,   689,   -37,   -37,
     -37, -2409, -2409, -2409, -2409, -2409, -2409,  1926,   -37,   -37,
     -37,   739, -2409, -2409, -2409, -2409,   482,   -37,   -37,   -37,
   -2409, -2409,   -37,   -37,  1927,   -37,   -37,  1928,   482,   775,
   -2409,   835, -2409,   897, -2409, -2409, -2409,  1929,  1931,  1932,
   -2409,  1036, -2409,  1169, -2409, -2409,  1657,  1934,  1937,  1938,
     482,   482,   -86,  1940,  1942,   -86,  1943,  1945,  1946,   -37,
     -37, -2409,  1947,   -37,   -37, -2409,  1948, -2409, -2409, -2409,
   -2409, -2409, -2409,   429, -2409, -2409, -2409,  4278,  1357,   689,
    1383,  1623,   798, -2409, -2409, -2409,  1018, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409,  1949,
     689, -2409,   429,  1950,   689,  4804,   429,  1668,  1686,  1700,
     474,   507,  1714,   529,  1637,  1643,  1953,  1954,  1955,  2364,
    1956,  1959,  1960,  1651,  1654,  1256,  1961,   689,  1443,  1721,
   -2409, -2409,   429,  4804, -2409, -2409,  4804,   689,    88,  1964,
     689,  1427,   429, -2409,  1966,  4804,  4804,   689, -2409, -2409,
   -2409,   429,   429,  4804, -2409, -2409, -2409, -2409, -2409, -2409,
    4804,   689,   429, -2409, -2409, -2409,   689, -2409, -2409,  1969,
     689,  1742,   267,   689,  1743,   689,   568,   689, -2409,   689,
    1745,  1749,   689,   689,   689,   689,   689,   689,   689,   689,
      26,   689,   689,  1750, -2409,   689,   689,   689,   689, -2409,
    4804,  1427,  1972,  1975,  1980,   689,   689,  1427, -2409,   689,
     689,   689,  4804,   599, -2409,   689,   689, -2409, -2409, -2409,
    1981, -2409, -2409, -2409, -2409, -2409, -2409,  1992,   689,   689,
   -2409,   689,   689, -2409, -2409, -2409, -2409, -2409, -2409, -2409,
   -2409, -2409,  1993,  1994,  1999, -2409,  1995,  2001,  2003, -2409,
    2006,  2008,  2010, -2409, -2409,  1291,  2011,  2012,  2014, -2409,
    2015,  2016,  2018, -2409,  2019,  2020,  2022, -2409,  2025,  2026,
    2023, -2409,  2027,  2028,  2031, -2409,  2032,  2033,  2034,  2035,
    2037, -2409,  2038, -2409, -2409, -2409,  2048,  2049,  2063, -2409,
    2064,  2068,  2072, -2409, -2409, -2409, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409,   689,   689,   689, -2409, -2409,   689, -2409,
    1427, -2409, -2409,  3825,   689,  1427,   689,   689,   689, -2409,
     689,   689,  2074,   689, -2409,   689,   689,  2073,   689,   689,
     689,   689, -2409, -2409,  2077,  4804, -2409, -2409, -2409,   689,
   -2409, -2409, -2409, -2409,  1427, -2409,  1252,   689,  1252,   -22,
    1427,  4804,   689,   689,  2078, -2409, -2409, -2409,   689, -2409,
   -2409, -2409, -2409, -2409,  4804, -2409,  4804,   689, -2409, -2409,
     -41,  2081,  2084,  2086,  2087,  2088,  4804,  1427, -2409,  4804,
    4804,  4804,  4278,  4804,  1427,  4804, -2409, -2409,  4804, -2409,
   -2409,  4278,  4804,  4804,  4804,  4278,  4804, -2409,  4804,  4804,
     689, -2409, -2409,  4804,  4804,  4804, -2409, -2409,  4804,  4804,
   -2409, -2409, -2409, -2409,  4804,  4804, -2409, -2409, -2409, -2409,
   -2409,   689,   689, -2409, -2409,  2079,   689, -2409, -2409,  2089,
   -2409, -2409,   689, -2409, -2409, -2409,   -37, -2409, -2409, -2409,
    2090,  2094,  2096, -2409, -2409,   -86,  2100,  2104,  2105,   -37,
   -2409, -2409, -2409, -2409, -2409,   482, -2409, -2409,  2107,   -37,
    2108,  2109,  2110,   482,   482,   -86,  2112,  2114,  2115,  1738,
    2116,  2117,  2118,   482,   482,   -86,  2120,  2122,   -86,  2123,
    2124,  2125,  2126,   482,   482,   -86,  2128,  2129,  2130,  1086,
   -2409,  1112, -2409,  1147,  1831,  2132,  2134,  2136,   482,   482,
     -86,  2139,  2142,   -86,  2143,  1846,  2145,  2146,  2149,   482,
     482,   -86,  2156,  2157,   -86,  2158,   482, -2409, -2409, -2409,
   -2409, -2409,  2161, -2409, -2409,  2163,   482,  2165,  2167, -2409,
   -2409,   -37, -2409, -2409,  2169, -2409,  1427, -2409,  4804,   689,
     689,  4804,   689,  2172,  1515, -2409, -2409, -2409, -2409, -2409,
   -2409,  2173,  4804,   429,  2174,  4804,  1427, -2409,  2175,  1515,
     689,   689,   689,   689,   689,   689,   689,   689,   689,  2168,
    2177, -2409, -2409, -2409,  2178, -2409, -2409, -2409,  2181,  2182,
   -2409, -2409, -2409,   689,  4804,   689,  2184,  1515,   429,  1427,
    1427, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409,
   -2409,   689,  1505, -2409, -2409,  1427,  1427,   689, -2409, -2409,
    1427,  1427, -2409, -2409, -2409, -2409,   689,   689,   689,   689,
     689,   689,   689,   689,   689,   689,  2164, -2409,   689,   689,
     689,   689,   689,   689,   689,   689,   689,   689,   689,  3946,
    2185,   689, -2409,   689,   689,   689,  2183,  2187, -2409, -2409,
    1427,   -22, -2409,  2189,  2190, -2409, -2409,  1505,   689, -2409,
    2188,  1427,  4804, -2409, -2409, -2409,  2192, -2409, -2409, -2409,
   -2409,  1291,  1291,  1291,  1291,  1291,  1291,  1291,  1291,  1291,
   -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409,  1515,   689,
   -2409,   689, -2409,   689,  1427,   689, -2409,  1505,   689, -2409,
     689, -2409,  1986,  2193,  2195,   689,   689, -2409,   689,   689,
     689,   689,  2197,  1427,  4804, -2409, -2409,   689, -2409,   689,
   -2409,   -22,   864,   689,  2198, -2409,   689, -2409, -2409,  4278,
   -2409,  2199,  2200,  2201,  2203,  2205,  1427, -2409,   864,   864,
     864,  1427, -2409,   864,   -22,   864,   864,  1427, -2409,   864,
     864,   864,  1427, -2409,   864,   864,  1427,  4804,   864,  1427,
     864,   864,  1427,   864,  1427, -2409, -2409,  2207,  4278,  2208,
     689, -2409, -2409, -2409, -2409,  2210, -2409, -2409, -2409, -2409,
     -37,   482, -2409, -2409, -2409, -2409, -2409, -2409,  2211, -2409,
   -2409,   482,   482, -2409, -2409, -2409, -2409, -2409,  2214, -2409,
   -2409,  2216,   482, -2409, -2409, -2409, -2409, -2409,  2217, -2409,
   -2409,   482,  2218,  2219,  2220,   482,   482,   -86,  2222,  2223,
    2224,  2226,  2228,  2229,   482,   482,   -86,  2231,  2232,  2233,
    2234,  2235,  2236,   482,   482,   -86,  2238,  2239,  2240,   482,
     -37,   -37,   -37,   -37,   -37,  2242,   -37,   -37,  2243,   482,
     482,   -37,   -37,   -37,   -37,   -37,  2245,   -37,   -37,  2246,
     482, -2409,   482,  2248, -2409,  2250,  2251, -2409,  5353, -2409,
     864,  2254,  4804,   864,   689,  4804,  2255, -2409,   864, -2409,
   -2409,   864, -2409,  4804,  2256,   689,   689,   689,   689,   689,
     689,   689,   689,   689,   689,   689, -2409, -2409, -2409,  4804,
     864,   689,  4804,  2257, -2409,  1505,  1505,  4804,  1505,  1505,
    4804,  4804,  1505,  1505,   689,   689,   689,   689,   689,   689,
    1515,   689,   689,   689,  1674,  1770,  1804,  1818,  1848,  1880,
    1898,  2164, -2409,  1899, -2409, -2409,  1515,   689,   689,   689,
     689,  1515,   689,   689,   689,   689,   689,   689,  1427,   689,
    1907,  1515,   689,   689, -2409, -2409,   -22,   429,  4804,  4804,
   -2409, -2409, -2409,   -22,  1427,  2262, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409,   689, -2409, -2409,  1505,
     689, -2409, -2409, -2409,  1132,  2264,  2266,  2268,  2269,   689,
     689,   689,  2270,  1252, -2409,   864, -2409, -2409, -2409, -2409,
    2271, -2409, -2409,  1427,  2273,  2274,  2276,  2281,  4804,  2283,
   -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409,   -22,   864, -2409,   -22,
   -2409, -2409,   -22, -2409,   -22,  2284,  1427,  2287, -2409,   689,
   -2409, -2409,   -37,   482, -2409, -2409,   482,  2288, -2409,   482,
   -2409,   -37,   -37,   -37,   -37,   -37,  2290,   -37,   -37,   482,
     -37,   -37,   -37,   -37,   -37,  2291,   -37,   -37,   482,   -37,
     -37,   -37,   -37,   -37,  2293,   -37,   -37,   482,   -37, -2409,
   -2409, -2409, -2409, -2409,   482, -2409, -2409,  2294,   -37,   -37,
   -2409, -2409, -2409, -2409, -2409,   482, -2409, -2409,  2295,   -37,
   -2409,   482, -2409, -2409,  1427, -2409,  4804,   864, -2409,  2296,
    1427,   689, -2409, -2409,  1427,   689, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409, -2409,   689,   689,   864, -2409,  2297,
    1427,   689,  1505, -2409,   864,   689,  1505,   864,   864,  4804,
   -2409,   689,  2298,  2298,   689,   689,  2298,  1515,  2298, -2409,
    4804,  2364,  2299,  2301,  2302,  2303,  2304,  2306, -2409,   429,
    1515,  2298,  2298,   689,   689,  1515,   689,   689,   689,   689,
     689, -2409,  1505,   689,  2309, -2409, -2409,   689,  2298,   429,
       9,  1427,  1427,   429,   -22,  2311, -2409, -2409, -2409,  2314,
     689, -2409,  2315,  2312,  2318,  2319,  2320,  2321,  2322,   689,
   -2409, -2409,  2324,     6,  4804, -2409,  2325,    67,  4804, -2409,
   -2409, -2409, -2409, -2409, -2409,  2327,     6,   689, -2409, -2409,
   -2409,   482, -2409, -2409, -2409, -2409, -2409, -2409,   482, -2409,
   -2409,   -37, -2409, -2409, -2409, -2409, -2409,   482, -2409, -2409,
     -37, -2409, -2409, -2409, -2409, -2409,   482, -2409, -2409,   -37,
   -2409,   -37,   482, -2409, -2409,   -37,   482, -2409, -2409,   689,
     864, -2409,  4804,  4804,   689,  4804,   689, -2409, -2409, -2409,
    4804,  4804,   689, -2409, -2409,  4804, -2409, -2409, -2409,   864,
    2339, -2409, -2409, -2409,  1515,   689, -2409,  2340, -2409, -2409,
    1427,  2341, -2409,  2343, -2409, -2409, -2409, -2409, -2409,  2345,
   -2409, -2409,  1515,   689,  2346, -2409, -2409,   689,  4804, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409,     9,  1720,  1996, -2409,
   -2409, -2409,   429,  2347,  2366,  2367, -2409, -2409, -2409,  2372,
    2373,  2374, -2409,   165,     6, -2409, -2409, -2409, -2409,  2375,
    4804, -2409, -2409, -2409, -2409, -2409,     6, -2409,  2376, -2409,
     -37, -2409,   -37, -2409,   -37, -2409, -2409,   -37, -2409,   -37,
    5353, -2409,   864,   864,   689,   864,  2377,   864,   864,   689,
     864,   689, -2409, -2409, -2409, -2409,  2378, -2409,   689, -2409,
   -2409,  2383, -2409,   689, -2409, -2409, -2409,  2379,   689, -2409,
   -2409, -2409,  1427, -2409, -2409, -2409,  1720, -2409,  1902,  1911,
    1996, -2409, -2409, -2409,  2390,  2392, -2409, -2409, -2409, -2409,
   -2409, -2409,  1181,  1181, -2409, -2409,  1427, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409,   864, -2409, -2409,  2394, -2409,  4278,
   -2409, -2409,  2397, -2409,  1515, -2409, -2409,  1515,   689, -2409,
   -2409,   689, -2409,  1515,   689, -2409,  4804, -2409,  1902, -2409,
     429, -2409,  2399,  2400,   689,   689,   689,   689,    67,  2401,
    4278,  1427, -2409,  4278, -2409, -2409,   689,  2398, -2409,   689,
     864, -2409, -2409, -2409,  2402,  2403,   689,  2404,   689, -2409,
   -2409,  1427, -2409, -2409,  1427, -2409, -2409,  2407, -2409, -2409,
    2408,  2410, -2409, -2409,  2411, -2409,  2412, -2409, -2409,  1515,
   -2409,  1515, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2409, -2409,    -3, -2409,   233,  -945, -1512, -1028,  1786, -2409,
     829,  -354,  1644,   -51,    30, -2409, -2409, -1772,  1901,  1564,
    -923,   836,  -990,   832,  1384, -2409,  -948, -2409,  -602, -1098,
   -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409,  -454,  -505, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409, -2096, -2409, -2409, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409,   231, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409, -2409,  -452,   115, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409, -2409, -1548, -2409, -2409,
   -2409, -2409, -2409,  -686, -2409, -2409, -2409, -2409, -2409, -2409,
      72, -2409, -2409, -2409, -2409,   -36,  -688, -1719,  -353, -2409,
   -2409, -2409, -2409, -2409,  -432,  -427, -2409, -2409, -2408, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409,  1632, -2409, -2409, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409, -2409,
   -2409, -2409, -2409
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1305
static const yytype_int16 yytable[] =
{
      70,  2004,   371,   924,  2167,   953,  2169,  1344,   109, -1114,
    1598,   335,   645,   178,   836,    67,    68,  1336,  1337,  1338,
    1182,  1151,  1154,   840,  1178,   111,   275,   391,   729,    67,
      68,  2069,   309,   843,    67,    68,  1812,  2785,   602,  1195,
     333,   949,   285,   434,  1762,   652,  1507,    67,    68,   365,
     114,  1454,   376,   755,  1457,   382,    67,    68,   822,   388,
     682,   910,   395,    67,    68,   311,   398,   400,    67,    68,
     410,    67,    68,   417,   421,  1492,  1290,   424,  1146,   959,
     425,   426,   657,   432,  1435,  1419,   617,   276,   433,   756,
      67,    68,  1562,   114,  1833,   764,   968,  1137,  2791,   336,
     360,   446,   450,   455,   456,   460,   462,  1580,  1857,   277,
     903,  1414,   326,   337,  2022,   225,   111,    67,    68,   286,
     906,   413,   466,   913,   443,  1431,   104,    57,   111,   313,
     929,  1671,   226,   576,  1196,  1684,  2023, -1304,    72,  2024,
    1197,  1736,   116,   757,    73,   921,   105,   562,   465,   444,
    2025,    79,   911,  1834,  1432,   165,   603,   475,   166,  1648,
      67,    68,   414,  1047,   278,  1730,  1731,  1732,    67,    68,
    1649,   799,   954,  2026,    67,    68,    67,    68,   177,  1022,
    1023,   914,   507,    74,    67,    68,   922,   528,   167,  1436,
     401,  2027,  1564,   162,  1415,   930,   168,   514,  2786,   106,
     658,   338,   111,   379,  1821,  1062,   515,   500,  1156,    75,
     960,   765,  1157,   501,   339,   969,  1588,   577,   122,   287,
     529,  1835,   537,   361,   542,   546,   406,  1024,  1582,   730,
     381,   119,   800,   116,   288,   582,   731,   732,  1048,   120,
     121,   563,   653,   823,   837,   116,   331,   164,   176,  1291,
     615,   578,   502,  1063,   758,   248,    76,   180,   169,  2792,
     659,   122,   281,  1813,   754,   604,   265,    67,    68,   316,
      67,    68,   733,   435,   111,   618,   689,   690,   503,   585,
    1763,   249,  1147,   253,  1183,  1158,   327,   392,   427,   107,
     380,  1532,   736,  1565,   738,   605,  1407,  2787,   289,  1563,
     568,    77,   740,   743, -1114,   746,   750,   412,   752,  1159,
     362,  1184,   170,   838,   572,   111,   841,  1589,   762,   116,
    1599,   646,   119,   955,  1816,   504,   844,   124,   772,   774,
     120,   121,  1858,   279,   119,   683,   247,   171,   748,   172,
    1035,  2070,   120,   121,   407,   340,  1198,   332,  1036,  1037,
    1138,   111,   825,   668,   827,   829,    69,   831,  2793,  1581,
    2859,   834,   835,   364,  1025,  1026,  1148,   173,   375,   505,
     506,   387,   849,   851,   111,  1160,   154,   813,   961,   852,
     734,   280,   155,   156,   855,   857,   108,   402,   408,   409,
    1064,   116,   858,   801,  1186,   859,  1038,  1211,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   119,  1825,
    1572,  1781,  1049,   816,   869,   870,   120,   121,   124,  1785,
     111,   874,   875,   876,   877,   878,   879,   880,  1592,   881,
     124,  1822,   116,   111,   174,  1583,   314,  1533,   403,  1027,
    2899,   428,   429,   888,  1216,   404,   315,   889,  1390,  1028,
    1029,  2028,   894,   895,   896,   897,   898,   899,   273,   900,
    1566,   450,   904,   905,  1630,  1065,   669,   154,   116,   598,
    1817,   450,   907,   155,   156,  1066,  1161,  1127,  2860,   154,
     119,  1030,   819,  1974,  1590,   155,   156,  1050,   120,   121,
    2921,   116,  1952,   902,  1992,  1955,  1642,   828,  1450,  1120,
    2048,   283,    58,  1187,   124,   670,   671,  1067,  1056,  1989,
     687,   688,  1534,   250,  1391,   254,   299,  1217,   328,  1128,
     323,   119,   505,  2861,  1121,   936,   937,  1994,  1221,   120,
     121,  2017,   569,  1039,  1040,  1238,   251,   116,   255,   430,
     745,   329,  1392,   945,    59,  1818,   573,  1324,   672,  1997,
     116,  1188,   325,   154,    88,   570,   349,   119,  1535,   155,
     156,   661,    60,   548,   384,   120,   121,  1007,  1301,   574,
    2797,    67,    68,    67,    68,  1302,   124,   373,   549,   971,
     119,   804,   950,  1057,   814,   817,   820,  2110,   120,   121,
    1340,  1819,    61,   378,   785,   342,  1243,  1465,  1189,  1248,
     550,  1222,   860,   673,  1474,    67,    68,  1218,  1041,   809,
    1239,    62,  1002,  1827,   385,    63,   386,   124,  1042,  1043,
     551,  1053,   390,  1044,  1393,   154,   119,   991,   674,    64,
     423,   155,   156,   437,   120,   121,  1826,   552,   439,   119,
    1072,   553,   805,    67,    68,   343,  1451,   120,   121,  1254,
    1045,   441,   350,   124,   344,   787,  1021,  1244,  1129,   463,
    1249,  1122,  1127,   351,    67,    68,   154,  1192,   861,   554,
     555,  2649,   155,   156,  1130,  1131,   124,  1394,   476,  1219,
     418,    89,  1190,  1150,   810,   345,  1071,   487,  2864,  1546,
     352,  1223,    67,    68,  1836,   972,   973,  1245,  1259,  1672,
    2867,   599,   154,  1149,  1128,  1846,  1162,    90,   155,   156,
    1255,    91,   498,   662,   663,   488,  1123,  1547,  1240,  1476,
    1548,  1993,   124,  1549,   600,   154,   556,  1477,  1478,   510,
     318,   155,   156,  1202,  1538,   124,   557,  1203,  1204,  1205,
    1206,   862,  1124,  1207,  1794,  1209,   512,  1210,   450,  1212,
    1550,   974,  1870,  1871,  1995,   539,  1676,   975,   112,  1260,
    1673,  1828,  1539,  1224,    92,  1540,   394,  1132,  1133,   353,
     565,   154,   776,  1680,    80,  1479,  1998,   155,   156,  1551,
     584,   419,  1552,  1252,   154,  1281,  1401,   811,  1890,  1891,
     155,   156,   566,  1241,    65,  1541,   883,   884,   558,   559,
    1872,  2053,  1686,   806,  1690,    93,   976,    67,    68,    81,
     354,   664,   594,    94,    95,  1787,   795,  1677,  1246,  1140,
    1829,  1250,  1694,   977,  1542,  1273,  1274,  1543,  1275,  1277,
    1279,  1280,   863,   777,  1681,   319,  1892,   864,   978,  1698,
    1899,   567,   115,  1129,   979,  1293,  1294,   595,  1900,  1901,
     346,   980,  1298,  1299,  1654,  2180,  2170,  1568,  1253,  1130,
    1131,   420,   616,  1687,  1569,  1691,   416,   114,   778,   779,
     560,  1256,  1305,  1306,  1307,  1308,  1309,  1310,  1311,   355,
    2739,   622,    82,  1695,   597,  2225,  1017,  1790,  1791,    67,
      68,  1843,  1141,  1319,  1320,  1321,  1902,  1323,   450,  1325,
    1699,  1326,   117,  1553,  1975,  2238,  2763,   981,   356,  1702,
    1910,  1911,  1480,  1481,   320,  2248,   357,   623,  2251,  1708,
    1261,  1674,  1329,   321,  1331,  2258,   982,    83,    84,  1716,
    1720,   983,   358,   984,  1333,   625,  1554,  1873,  1874,   644,
    2295,   450,  1341,  2298,  1165,  1752,  2326,  1343,  1544,  1193,
     648,  2306,  1132,  1133,  2309,  1330,   649,  2092,  1912,   985,
     986,  2334,  1792,  1555,  1356,   651,   780,   987,  1360,   123,
    1703,   655,    85,  1893,  1894,  1400,  1402,  1405,  1678,   656,
    1709,  1545,  1142,  1410,   660,  1782,   988,  1482,  1416,  2353,
    1717,  1721,   580,  1574,   781,  1682,  1395,  1483,  1484,  1417,
    1469,  1976,  1485,  2416,  2417,  2418,  2419,  2420,  2421,  2422,
    2423,  2424,  1875,  2823,  2824,   666,   723,  2827,  1427,  2829,
    1409,    98,  1876,  1877,  1688,    86,  1692,   680,   917,  1486,
     685,  2834,  2835,  1903,  1904,   122,  2839,  2840,    99,  1844,
    2843,  1924,   989,   114,  1696,  2844,  2845,   686,  1895,  1925,
    1926,   691,   581,  2741,  1878,  1977,    67,    68,  1896,  1897,
     627,  1700,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
    1898,  1567,  1127,  1575,  1497,  1913,  1914,  1927,  1845,  2262,
    2263,   724,  1179,  2885,   628,   728,  2886,   739,  1905,   291,
    2425,  2889,  1591,    67,    68,   753,  1313,  2892,  1906,  1907,
     100,  1597,  2895,  1908,  1978,  2271,  2272,   760,   292,   918,
     293,  1704,   761,  1396,  1128,    67,    68,  1625,   763,  1626,
     767,  1710,    67,    68,  1627,  1628,  1629,  2264,    67,  1276,
    1909,  1718,  1722,  1576,  1635,  1404,  1153,  1636,  2407,  1638,
    2280,  2281,  1831,   769,   101,  1466,   114,  1498,   775,  1832,
    1915,   783,  1475,  2273,  1935,  1180,  1640,   803,  1641,   397,
    1916,  1917,  1936,  1937,    67,    68,  1645,  1646,  1397,    67,
      68,  2639,   725,  1284,  1285,   808,  2936,   856,  1600,  2939,
     102,  1652,  1653,  1601,   826,   450,  1655,  1656,  2282,   919,
     726,   122,  1918,  1658,  1398,  1659,  1837,   629,  1661,  2950,
    1662,  1979,  2825,    67,    68,  1602,  1603,   832,  1604,  1605,
    1938,  1297,  1740,  2957,  1928,  1929,  2958,  2959,   676,  1606,
    2836,  1287,  1288,  1499,  1500,    67,  1355,   586,  2448,    67,
      68,  1607,  1608,   294,  1633,  1634,   677,  1838,  1501,  1609,
    2010,  2011,  1610,  1443,  1444,  1181,  1733,   833,   587,   846,
    1734,  2466,  1735,  1129,   853,  1980,  1738,  2506,   854,    88,
    1611,   891,   892,   588,  2265,  2266,  2515,  1612,  1613,  1130,
    1131,  1614,  1744,   607,  1747,  2524,  1749,  1750,  1751,  1753,
     867,  1502,  1755,  1756,   608,  1758,  1759,  1760,  1761,  1930,
    2274,  2275,   295,    67,    68,  1769,  1839,  1801,   257,  1931,
    1932,   868,  1775,   921,  1933,  1746,  1776,  1777,  1778,   871,
     872,   609,  1665,  1666,   122,   300,   450,  1783,   266,   678,
    1786,   873,  2597,   631,   882,  2283,  2284,   258,  1796,   457,
    1797,  1934,   885,  1799,  1594,   887,  1615,   296,  2610,  2267,
      67,    68,  1968,  2615,   922,   111,   297,  1939,  1940,  2268,
    2269,   447,   848,   908,  1788,  2915,  1840,   449,   909,   112,
     916,  2918,  1132,  1133,   925,  2276,    67,    68,  1971,   927,
    1802,   589,  1808,    67,    68,  2277,  2278,  1848,   932,  1849,
     113,  2270,  1850,  1851,   934,  1852,    89,  1853,    67,    68,
     610,  1639,  1616,  1855,   947,  1856,   632,   114,  1617,   952,
    2285,   957,   458,   259,  1862,  1647,   267,  2279,   963,   741,
    2286,  2287,    90,   964,   966,  1618,  2166,  2955,   260,  2956,
     268,   992,  1941,   967,   770,  1619,    67,    68,  2014,   993,
     590,   611,  1942,  1943,   994,   996,  1000,  1944,   998,   633,
    1003,   467,  2288,   115,  1009,  1005,  1803,  1804,  1667,  1668,
    1014,  1015,  1016,  1620,  1621,  1018,  1019,   269,   301,  1020,
    1031,  1805,   116,  2629,  1945,   302,  1032,   303,  1033,    92,
    2633,  1034,  1058,  1046,  1622,   591,  1060,  1669,   634,  1061,
     261,  1068,   742,  1069,   592,  1969,  1970,  1972,    67,    68,
    1070,  1135,   459,   447,   448,   449,  1126,   771,    67,    68,
     612,  1504,  1505,   117,  1806,  1144,  1199,  1982,   270,  1145,
      93,  1985,  1200,  1201,   468,  1213,  1215,  1967,    94,    95,
    1623,   271,   262,  1226,  1227,  1228,  1229,  1766,  1767,  1230,
    1231,  1232,   263,  2659,  2013,  2015,  2661,   469,   470,  2662,
    1233,  2663,  1234,   118,  2021,  1235,   471,  2031,  1236,  2737,
    1237,   119,  1258,   613,  2037,  1263,  1264,  1265,  1268,   120,
     121,  1266,  2749,  1267,  1269,   122,   472,  2754,  2042,  1270,
     123,  1271,  1272,  2044,   367,  1283,   473,  2046,  1282,  2049,
    2050,   368,  2052,  2054,  2055,  1286,  2058,  1289,  1295,  2061,
    2062,  2063,  2064,  2065,  2066,  2067,  2068,  2071,  2073,  2074,
    1296,  1300,  2076,  2077,  2078,  2079,    67,    68,  1973,  1504,
    1505,  1303,  2085,  2086,  1304,  1312,  2088,  2089,  2090,  1314,
    1315,  1346,  2093,  2094,  1327,  2733,  1328,  1109,  2736,  1348,
    2738,  1347,  1350,  1351,  1352,  2097,  2098,  1353,  2099,  2100,
    1354,  1110,  1358,  2750,  2751,  1359,  1406,   124,  1408,  1412,
    1111,    67,    68,  1988,  1504,  1505,  1418,  1420,  2358,   310,
    2765,  1112,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,  2772,  1421,  1113,  1424,  1438,   154,  1425,  1428,   489,
    1429,  1430,   155,   156,    67,    68,  2016,  1504,  1505,  1439,
    2138,  2139,  2140,  2410,  1114,  2141,  1965,   490,  1440,  1441,
    2143,  2146,  1445,  2148,  2149,  2150,  1446,  2151,  2152,  1447,
    2154,  1448,  2155,  2156,   491,  2158,  2159,  2160,  2161,  1449,
    1455,  1456,   464,  1458,  1459,  1983,  2164,   492,  1461,  1987,
    1463,  1471,  1473,  2145,  2168,  1487,  1488,  1508,  1489,  2173,
    2174,  1490,  1493,  1509,  1115,  2176,   493,  1494,  1495,  1510,
     494,  1511,  1530,  2431,  2179,  2018,  1531,  1536,  1537,  1556,
    1557,  1558,  1559,  1560,   495,  2033,  1579,  1573,  1561,  1578,
    1584,  1570,  1577,  1585,  2038,  2039,  1586,  1595,  1587,  1593,
    1596,  1660,  1632,  1116,  1643,  2043,  1644,  2207,  1657,   369,
    1650,  1651,   370,   526,  1663,   533,   536,  1664,   541,   545,
    1685,  1706,  2192,  1707,  1712,  1743,  1713,   496,  2215,  2216,
    1117,  2198,  1714,  2218,  1715,  2203,  2914,  1724,  1725,  2220,
    1726,  1809,  1727,  1728,  1729,  1748,  1741,  1742,  1754,   620,
    1757,  1770,  1453,  1765,   751,  1771,  1772,  1784,  -464,  1789,
    1798,  1810,  1800,  1820,   785,  1811,  1841,  1815,   636,   642,
    1118,  1830,  1119,  1847,   647,  1823,  1824,  1854,   650,  1842,
    1860,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,  1861,
    1866,  1885,  1888,  1990,  1919,   847,  1921,  1923,  1946,  1947,
     737,   786,  1948,  1949,  1953,   787,  1954,  1991,  1956,  1957,
    1958,  1961,   747,  1964,  1981,  1984,  1999,  2001,  2002,  2003,
    2005,  1996,  2000,  2006,  2007,  2012,  2321,  2322,  2030,  2324,
    2008,  2034,   768,  2009,  2045,  2047,  2051,  2082,  2059,  2083,
     788,   789,  2060,  2075,  2084,   790,  2095,  2335,  2336,  2337,
    2338,  2339,  2340,  2341,  2342,  2343,  2096,  2434,  2101,  2102,
    2104,  2582,  2583,  2103,  2585,  2586,  2105,  2106,  2589,  2590,
    2349,  2107,  2351,  2108,  2109, -1132,  2111,  2112,  2113,  2242,
    2114,  2115,  2116,   791,  2117,  2118,  2119,  2122,  2357,   450,
    2120,  2121,  2123,  2124,  2361,  2125,  2126,  2127,  2601,  2128,
    2129,  2130,  2131,  2364,  2365,  2366,  2367,  2368,  2369,  2370,
    2371,  2372,  2373,  2132,  2133,  2386,  2387,  2388,  2389,  2390,
    2391,  2392,  2393,  2394,  2395,  2396,  2397,  2134,  2400,  2135,
    2401,  2402,  2403,  2136,   792,  2637,  2137,  2157,   793,  2153,
    2849,  2162,  2175,  2217,   450,  2411,  2181,   886,  1166,  2182,
     935,  2183,  2184,  2185,  2219,  2222,  1167,   940,   893,  2223,
     941,  2224,  1168,   794,  2226,   942,   795,   901,  2227,   944,
    2228,  2231,  2289,  2233,  2234,  2235,  2239,   796,  2240,  1169,
    2241,  2243,  2244,  2245,  2249,  1170,  2250,  2300,  2252,  2253,
    2254,  2255,  2259,  2260,  2602,  2261,  2426,  2290,  2427,  2291,
    2428,  2292,  2430,  2296,   450,  2432,  2297,  2433,  2299,  1171,
    2301,  2302,  2437,  2438,  2303,  2439,  2440,  2441,  2442,  1172,
    2307,  2308,  2849,  2310,  2446,  2312,  2447,  2313,  2603,  2315,
    2450,  2316,  2344,  2452,  2318,   938,   939,  2325,  2327,  2330,
    2333,  2345,  2604,  2346,  1008,  2347,  2348,  2404,   943,  2352,
    2399,  2405,  2412,   946,  2408,  2409,  2415,  2378,  2435,  1173,
    2436,  2443,   958,  2451,  2455,  2456,  2457,  1174,  2458,  2454,
    2459,  2485,  2605,  2488,  2490,  2493,  2329,  2489,  2496,  2374,
    2497,  2499,  2624,  2501,  2502,  2503,  2507,  2508,  2723,  2509,
    2375,  2510,  2726,  2511,  2512,  2516,  2517,   890,  2518,  2519,
    2520,  2521,  2525,  2526,  2606,  2527,  2534,  2537,  2487,  2545,
    2548,  2354,  2551,  1175,  2552,  2553,  1166,  2376,  2556,  2561,
    2565,  2581,  2607,  2609,  1167,  1176,  2635,  2554,  2760,  2641,
    1168,  2642,  2643,  2644,  2648,  2900,  2651,  2653,  1879,  2654,
    2655,  1177,  1010,  1011,  1012,  1013,  2656,  1169,  2658,  2664,
    1889,  2666,  2671,  1170,  2678,  2687,  2377,  2696,  2702,  2706,
    2712,  2720,  2731,   866,  2742,  2743,  2929,  2744,  2745,  2746,
    2747,  1208,  1950,  1951,  2762,  2773,  2777,  1171,  1214,  2774,
    2776,  2559,  2778,  2779,  2780,  2781,  2782,  1172,  2784,  2863,
    2790,  2796,  2566,  2567,  2568,  2569,  2570,  2571,  2572,  2573,
    2574,  2575,  2576,  2822,  2828,  2608,  2831,  2832,  2579,  2833,
    2838,  2853,   450,   450,  1164,   450,   450,  2905,  2907,   450,
     450,  2591,  2592,  2593,  2594,  2595,  2596,  1173,  2598,  2599,
    2600,  2854,  2855,   637,   112,  1174,  2856,  2857,  2858,  2865,
    2868,  2879,  2887,  2893,  2611,  2612,  2613,  2614,  2890,  2616,
    2617,  2618,  2619,  2620,  2621,  2902,  2623,  2903,  2910,  2627,
    2628,  2913,  2938,  1512,  2923,  2924,  2930,  2942,  2943,  2945,
    1434,  2949,  2951,  2846,   638,  2952,  2953,  2954,  2901,  2897,
       0,  1175,  1242,  2636,     0,     0,   450,  2638,     0,     0,
    1513,  2640,     0,  1176,     0,     0,  2645,  2646,  2647,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1491,  1177,
    1316,     0,     0,     0,     0,     0,     0,  1318,   115,  2378,
       0,  2379,     0,     0,  1514,     0,     0,     0,     0,     0,
    1515,     0,   639,     0,     0,     0,  1516,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2667,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1517,     0,     0,     0,
       0,     0,  1334,  1335,     0,     0,     0,  1339,     0,     0,
    1342,     0,     0,     0,     0,  2380,     0,  1518,   117,     0,
       0,     0,  1349,     0,     0,     0,     0,     0,     0,     0,
       0,  1317,     0,     0,  1519,     0,   640,     0,     0,     0,
       0,     0,     0,  1322,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2714,     0,
       0,     0,  2716,     0,     0,     0,     0,  1520,     0,     0,
       0,     0,  2717,  2718,     0,     0,     0,     0,  2722,   450,
    1332,     0,  2725,   450,     0,   123,     0,     0,  2730,     0,
       0,  2734,  2735,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1521,     0,     0,     0,
    2752,  2753,     0,  2755,  2756,  2757,  2758,  2759,     0,   450,
    2761,  1522,     0,     0,  2764,     0,     0,     0,     0,     0,
       0,     0,     0,  1523,     0,     0,  1496,  2775,     0,     0,
    2630,     0,     0,     0,     0,     0,  2783,     0,     0,     0,
       0,     0,     0,     0,     0,   641,     0,     0,     0,     0,
    1423,  1524,     0,     0,  2798,     0,     0,     0,     0,     0,
       0,     0,     0,  1525,     0,  1526,  1527,     0,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,  2810,     0,     0,     0,
       0,  2814,     0,  2816,     0,  1528,     0,  2230,     0,  2819,
       0,     0,     0,     0,     0,  2236,  2237,     0,     0,     0,
       0,     0,  2826,     0,     0,  2246,  2247,     0,     0,     0,
       0,  1571,     0,     0,     0,  2256,  2257,     0,     0,     0,
    2837,     0,     0,     0,  2841,     0,     0,     0,     0,  2874,
    2293,  2294,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2304,  2305,     0,     0,     0,     0,     0,  2311,     0,
    2862,     0,     0,     0,     0,     0,     0,     0,  2314,     0,
       0,     0,     0,     0,     0,  1631,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1637,     0,     0,     0,     0,
       0,  2877,  1863,  1864,  1865,     0,  2882,     0,  2884,     0,
       0,     0,  1867,  1868,  1869,  2888,     0,     0,     0,     0,
    2891,  1880,  1881,  1882,     0,  2894,  1883,  1884,     0,  1886,
    1887,     0,  2748,     0,     0,  1739,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2904,
    2906,     0,  2766,     0,     0,     0,  2771,     0,     0,     0,
       0,     0,     0,  1959,  1960,     0,     0,  1962,  1963,     0,
       0,  1768,     0,     0,     0,  2916,  1773,     0,  2917,     0,
       0,  2919,     0,     0,     0,     0,  1779,     0,     0,     0,
       0,  2925,  2926,  2927,  2928,     0,     0,   228,     0,  2912,
       0,     0,     0,  2937,     0,     0,  2940,     0,     0,     0,
       0,  1737,     0,  2944,     0,  2946,     0,     0,     0,   229,
       0,     0,   230,     0,     0,     0,     0,     0,     0,  1745,
    2932,     0,     0,  2935,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   231,  1774,     0,     0,
       0,     0,     0,   232,     0,     0,     0,  1780,     0,     0,
       0,     0,     0,     0,   233,   234,     0,     0,     0,     0,
       0,   235,     0,     0,  1795,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2852,  1807,     0,  2449,     0,
       0,  1814,     0,     0,     0,     0,   236,     0,     0,     0,
       0,     0,     0,     0,  2461,  2462,  2463,     0,     0,  2465,
       0,  2467,  2468,     0,   237,  2470,  2471,  2472,     0,     0,
    2474,  2475,     0,     0,  2478,     0,  2480,  2481,     0,  2483,
     238,   239,     0,     0,     0,     0,     0,   240,     0,     0,
       0,     0,     0,  2492,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2494,  2495,     0,     0,     0,     0,   241,
       0,   692,   693,     0,  2498,     0,     0,     0,     0,     0,
       0,     0,     0,  2500,     0,     0,     0,  2504,  2505,     0,
       0,     0,     0,     0,     0,     0,  2513,  2514,     0,     0,
       0,     0,     0,     0,     0,  2522,  2523,     0,   242,     0,
       0,  2528,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2538,  2539,  2922,     0,  2032,     0,   694,     0,     0,
       0,     0,  2549,   695,  2550,     0,     0,     0,     0,     0,
     696,  1966,   697,     0,     0,     0,  2555,   698,     0,  2558,
     699,     0,     0,     0,  2562,     0,   700,  2563,     0,     0,
       0,   243,     0,     0,     0,     0,     0,   701,     0,  1986,
       0,     0,   244,   702,     0,     0,  2578,     0,     0,     0,
       0,     0,   703,     0,     0,  2081,     0,     0,     0,     0,
       0,  2087,     0,     0,     0,     0,     0,  2019,     0,   704,
    2020,   245,     0,     0,     0,     0,     0,     0,     0,  2035,
    2036,     0,     0,     0,     0,     0,     0,  2040,     0,     0,
     705,     0,     0,     0,  2041,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   706,     0,     0,
    2221,     0,     0,     0,     0,     0,     0,     0,   707,   708,
       0,     0,     0,  2229,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2232,  2080,     0,     0,     0,     0,     0,
     709,  2650,     0,     0,     0,     0,  2091,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   710,  2142,     0,     0,     0,     0,  2147,
       0,     0,     0,  2660,     0,     0,     0,   711,     0,   712,
       0,     0,     0,     0,     0,  2669,     0,     0,  2670,     0,
       0,  2672,     0,     0,   713,     0,     0,     0,  2165,   714,
       0,  2681,     0,     0,  2171,  2317,   715,     0,     0,     0,
    2690,     0,     0,   716,     0,     0,     0,     0,     0,  2699,
       0,     0,     0,     0,     0,     0,  2701,     0,     0,     0,
       0,  2187,   717,     0,     0,     0,     0,  2705,  2194,     0,
       0,     0,     0,  2708,     0,   718,   719,  2144,   720,     0,
       0,     0,     0,  2711,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2163,
       0,     0,     0,  2719,     0,     0,     0,     0,     0,     0,
    2724,     0,     0,  2727,  2728,  2172,     0,     0,   721,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2177,     0,
    2178,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2186,     0,     0,  2188,  2189,  2190,  2191,  2193,     0,  2195,
       0,     0,  2196,     0,     0,  2197,  2199,  2200,  2201,  2202,
    2204,     0,  2205,  2206,     0,     0,     0,  2208,  2209,  2210,
       0,     0,  2211,  2212,     0,     0,     0,     0,  2213,  2214,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2799,     0,     0,     0,     0,     0,     0,
    2800,     0,     0,     0,     0,     0,     0,     0,     0,  2802,
       0,     0,     0,     0,     0,     0,     0,     0,  2804,     0,
    2319,     0,     0,     0,  2807,     0,     0,     0,  2809,     0,
       0,     0,     0,     0,     0,     0,  2811,     0,     0,     0,
    2332,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2821,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2355,  2356,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2359,
    2360,     0,     0,     0,  2362,  2363,     0,     0,     0,     0,
       0,     0,  2320,     0,  2491,  2323,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2328,     0,     0,  2331,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2406,     0,     0,     0,  2875,  2876,
       0,  2878,     0,  2880,  2881,  2413,  2883,     0,  2350,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2529,  2530,  2531,  2532,  2533,     0,
    2535,  2536,     0,     0,     0,  2540,  2541,  2542,  2543,  2544,
       0,  2546,  2547,     0,     0,     0,     0,     0,     0,     0,
      67,    68,     0,     0,     0,     0,     0,     0,  2429,     0,
    2909,     0,     0,  2398,     0,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2444,     0,     0,
       0,     0,     0,     0,     0,   305,  2414,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2460,     0,     0,   114,     0,  2464,  2941,     0,     0,     0,
       0,  2469,     0,     0,     0,     0,  2473,     0,     0,     0,
    2476,     0,     0,  2479,     0,     0,  2482,     0,  2484,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   115,
       0,     0,     0,     0,     0,     0,     0,     0,  2445,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2453,     0,     0,     0,     0,    67,    68,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   112,     0,     0,     0,     0,     0,     0,
       0,  2477,     0,     0,     0,     0,     0,     0,     0,   117,
       0,     0,  2486,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2668,     0,     0,     0,
       0,   114,     0,     0,     0,  2673,  2674,  2675,  2676,  2677,
       0,  2679,  2680,     0,  2682,  2683,  2684,  2685,  2686,   306,
    2688,  2689,     0,  2691,  2692,  2693,  2694,  2695,     0,  2697,
    2698,     0,  2700,     0,     0,     0,     0,     0,     0,     0,
       0,   122,  2703,  2704,     0,     0,   123,   115,     0,     0,
       0,     0,     0,  2707,     0,     0,     0,   307,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    67,
      68,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2622,     0,   112,     0,  2557,     0,     0,  2560,
       0,     0,     0,     0,     0,     0,     0,  2564,  2634,     0,
       0,     0,     0,     0,     0,     0,     0,   117,     0,     0,
       0,     0,     0,  2577,     0,     0,  2580,     0,     0,     0,
     308,  2584,     0,     0,  2587,  2588,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2652,     0,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,  1467,   115,   122,
    2665,     0,  2631,  2632,   123,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2801,     0,     0,     0,     0,
       0,     0,     0,     0,  2803,     0,     0,     0,     0,     0,
       0,     0,     0,  2805,     0,  2806,     0,     0,     0,  2808,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2657,     0,     0,     0,     0,     0,   117,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2709,     0,
       0,     0,     0,     0,  2713,     0,     0,     0,  2715,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2721,     0,     0,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   123,     0,     0,     0,     0,
       0,     0,     0,     0,  2869,     0,  2870,     0,  2871,     0,
       0,  2872,     0,  2873,     0,  2769,  2770,     0,     0,     0,
    2710,     0,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
    1468,     0,     0,  2729,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2740,   544,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   112,   114,  2789,     0,
       0,     0,  2795,     0,  2830,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   112,     0,     0,
       0,     0,     0,     0,   114,     0,     0,     0,     0,     0,
       0,     0,     0,   115,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2812,  2813,     0,  2815,
       0,     0,     0,     0,  2817,  2818,     0,     0,     0,  2820,
       0,     0,     0,     0,   517,   518,     0,     0,   519,     0,
     115,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   520,  2842,   117,     0,     0,  2896,     0,     0,     0,
       0,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2908,     0,     0,     0,  2866,     0,     0,     0,     0,     0,
     117,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,     0,     0,     0,     0,
     123,   117,     0,     0,     0,  2933,     0,     0,     0,     0,
       0,     0,     0,     0,   521,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2947,     0,     0,  2948,     0,
       0,     0,   122,   522,     0,     0,     0,   123,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2911,     0,   523,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   123,     0,
    2920,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2931,     0,     0,  2934,     0,     0,
       0,     0,     0,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   524,     0,     0,     0,     0,     0,     0,     0,     0,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,     0,     0,
       0,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,     0,
     525,  1073,  1074,  1075,     0,     0,  1361,  1362,  1363,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1076,  1077,     0,     0,  1078,  1364,  1365,  1079,   112,  1366,
       0,     0,     0,     0,  1080,     0,  1367,     0,  1081,  1368,
       0,     0,     0,  1369,     0,     0,  1082,  1083,     0,     0,
       0,  1370,  1371,     0,  1084,  1085,     0,     0,     0,  1372,
       0,     0,     0,     0,     0,     0,   114,     0,     0,     0,
       0,     0,  1086,     0,     0,     0,     0,     0,  1087,   112,
       0,     0,  1088,  1089,     0,     0,  1090,  1373,  1374,     0,
       0,  1375,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1091,     0,     0,   112,     0,  1376,
       0,     0,   115,     0,     0,     0,     0,     0,     0,     0,
     531,     0,     0,     0,     0,  1092,     0,     0,     0,     0,
    1377,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1422,     0,     0,     0,     0,
       0,  1093,   112,     0,     0,     0,  1378,     0,     0,     0,
       0,     0,     0,   115,     0,  1379,     0,     0,     0,     0,
       0,     0,   117,     0,     0,  1094,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1095,     0,  1096,     0,     0,
    1380,     0,     0,  1097,  1098,     0,     0,     0,  1381,  1382,
       0,     0,     0,   117,     0,     0,     0,     0,     0,  1099,
    1100,     0,     0,     0,   122,  1383,   115,     0,     0,   123,
    1101,  1102,     0,     0,     0,     0,  1384,     0,     0,     0,
       0,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1103,     0,  1104,
       0,     0,  1385,     0,  1386,     0,     0,     0,     0,     0,
       0,  1105,     0,  1106,  1387,     0,     0,     0,     0,  1107,
     123,     0,     0,     0,  1388,     0,   117,     0,     0,     0,
     535,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   123,     0,
       0,     0,     0,  1108,     0,     0,     0,     0,  1389,     0,
       0,     0,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     532,     0,     0,   123,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
     201,   202,   203,     0,    55,   204,     0,  1051,     0,   205,
       0,   206,  1052,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,   223,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153
};

static const yytype_int16 yycheck[] =
{
       3,  1549,    53,   508,  1776,     4,  1778,   952,    11,     0,
       5,    25,     5,    16,     4,     3,     4,   940,   941,   942,
       5,   707,   708,     4,   712,     4,     5,    31,     4,     3,
       4,     5,    35,     4,     3,     4,    20,    31,    20,     5,
      43,     4,    57,     5,    46,     4,  1074,     3,     4,    52,
      56,  1041,    55,    54,  1044,    58,     3,     4,    12,    62,
       5,   104,    65,     3,     4,    35,    69,    70,     3,     4,
      73,     3,     4,    76,    77,  1065,    98,    80,    16,     4,
      83,    84,     4,    86,   170,  1008,    15,    66,    91,    90,
       3,     4,    26,    56,   174,   153,   137,    16,    31,   113,
       4,   104,   105,   106,   107,   108,   109,     5,    19,    88,
     464,    16,    40,   127,    26,    83,     4,     3,     4,   134,
     474,   142,   125,   201,     5,   162,    39,    66,     4,     5,
     201,  1229,   100,     4,   100,  1233,    48,     0,   195,    51,
     106,     4,   121,   144,   201,   142,    59,   221,   118,    30,
      62,   295,   195,   233,   191,    43,   138,   160,    46,     5,
       3,     4,   183,    87,   143,  1263,  1264,  1265,     3,     4,
      16,    61,   171,    85,     3,     4,     3,     4,    64,    13,
      14,   259,   185,   240,     3,     4,   183,   190,    76,   275,
       4,   103,    35,    32,    99,   266,    84,   175,   192,   112,
     122,   215,     4,     5,    20,    13,   184,   195,    35,   266,
     135,   269,    39,   201,   228,   256,    35,    88,   224,   234,
     190,   301,   192,   127,   194,   195,   195,    61,    26,   205,
      59,   210,   122,   121,   249,   205,   212,   213,   162,   218,
     219,   315,   201,   197,   234,   121,   202,    14,    15,   271,
     220,   122,   240,    61,   255,    22,   313,   148,   146,   192,
     263,   224,    29,   247,   315,   247,    15,     3,     4,    36,
       3,     4,   248,   235,     4,   204,   279,   280,   266,   207,
     282,    61,   220,    61,   269,   112,    61,   291,     4,   202,
      57,    26,   295,   136,   297,   277,   984,   291,   313,   233,
      61,   358,   305,   306,   295,   308,   309,    74,   311,   136,
     214,   296,   200,   303,    61,     4,   297,   136,   321,   121,
     315,   314,   210,   322,    26,   313,   297,   306,   331,   332,
     218,   219,   243,   312,   210,   280,    66,   225,   308,   227,
       5,   315,   218,   219,   313,   359,   312,   303,    13,    14,
     269,     4,   355,     5,   357,   358,   303,   360,   291,   257,
     195,   364,   365,   303,   198,   199,   304,   255,   303,   357,
     358,   303,   375,   376,     4,   202,   355,    66,   303,   382,
     356,   360,   361,   362,   387,   388,   299,   201,   357,   358,
     198,   121,   395,   283,    16,   398,    61,   751,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   210,    20,
    1098,  1334,    87,    66,   417,   418,   218,   219,   306,  1342,
       4,   424,   425,   426,   427,   428,   429,   430,  1116,   432,
     306,   247,   121,     4,   322,   233,   312,   172,   252,   273,
    2848,   157,   158,   446,    39,   259,   322,   450,    66,   283,
     284,   363,   455,   456,   457,   458,   459,   460,   239,   462,
     303,   464,   465,   466,  1150,   273,   118,   355,   121,    61,
     172,   474,   475,   361,   362,   283,   303,    63,   313,   355,
     210,   315,    66,  1511,   303,   361,   362,   162,   218,   219,
    2898,   121,  1482,   463,    20,  1485,  1182,   233,    16,     4,
     233,     5,    11,   125,   306,   157,   158,   315,    87,  1537,
     277,   278,   247,   293,   132,   293,    66,   112,   293,   105,
       4,   210,   357,   358,    29,   528,   529,    20,    39,   218,
     219,  1559,   293,   198,   199,    87,   316,   121,   316,   255,
     307,   316,   160,   546,    53,   247,   293,   901,   200,    20,
     121,   173,    88,   355,    27,   316,     4,   210,   293,   361,
     362,     5,    71,    44,   279,   218,   219,   618,     4,   316,
    2666,     3,     4,     3,     4,    11,   306,   239,    59,   582,
     210,    61,   552,   162,   351,   352,   353,  1685,   218,   219,
     944,   293,   101,     0,    61,    50,    61,  1049,   220,    61,
      81,   112,    29,   255,  1056,     3,     4,   202,   273,    33,
     162,   120,   615,    26,     5,   124,     4,   306,   283,   284,
     101,   672,     5,   288,   242,   355,   210,   597,   280,   138,
       5,   361,   362,    30,   218,   219,   247,   118,     5,   210,
     691,   122,   122,     3,     4,   100,   164,   218,   219,    61,
     315,     5,    36,   306,   109,   122,   659,   122,   244,   202,
     122,   166,    63,    47,     3,     4,   355,   297,    95,   150,
     151,  2443,   361,   362,   260,   261,   306,   295,     4,   274,
      78,   154,   304,   269,   108,   140,   689,   118,  2784,    21,
      74,   202,     3,     4,  1382,     4,     5,   162,    61,    61,
    2796,   293,   355,   706,   105,  1393,   709,   180,   361,   362,
     122,   184,   120,   157,   158,    66,   221,    49,    87,     5,
      52,   247,   306,    55,   316,   355,   207,    13,    14,   295,
      70,   361,   362,   736,    21,   306,   217,   740,   741,   742,
     743,   168,   247,   746,     4,   748,   175,   750,   751,   752,
      82,    60,    13,    14,   247,    32,    61,    66,    18,   122,
     122,   174,    49,   274,   237,    52,   126,   353,   354,   153,
      66,   355,    61,    61,     4,    61,   247,   361,   362,   111,
      15,   179,   114,    87,   355,   836,   216,   211,    13,    14,
     361,   362,     5,   162,   303,    82,     4,     5,   279,   280,
      61,   233,    61,   283,    61,   278,   115,     3,     4,    39,
     194,   255,    66,   286,   287,     4,   283,   122,   283,    39,
     233,   283,    61,   132,   111,   828,   829,   114,   831,   832,
     833,   834,   259,   122,   122,   175,    61,   264,   147,    61,
       5,    89,   102,   244,   153,   848,   849,   240,    13,    14,
     305,   160,   855,   856,  1208,  1800,  1779,   272,   162,   260,
     261,   259,    89,   122,   279,   122,   205,    56,   157,   158,
     351,   283,   875,   876,   877,   878,   879,   880,   881,   263,
    2599,    66,   112,   122,   294,  1875,   653,    23,    24,     3,
       4,    26,   112,   896,   897,   898,    61,   900,   901,   902,
     122,   904,   162,   235,   106,  1895,  2625,   216,   292,    61,
      13,    14,   198,   199,   254,  1905,   300,    72,  1908,    61,
     283,   283,   925,   263,   927,  1915,   235,   157,   158,    61,
      61,   240,   316,   242,   937,    30,   268,   198,   199,     5,
    1930,   944,   945,  1933,   711,    59,  1974,   950,   235,   716,
       4,  1941,   353,   354,  1944,   925,     5,  1643,    61,   268,
     269,  1989,    98,   295,   967,     4,   255,   276,   971,   229,
     122,     5,   202,   198,   199,   978,   979,   980,   283,     4,
     122,   268,   202,   986,     4,  1339,   295,   273,   991,  2017,
     122,   122,     5,   133,   283,   283,    29,   283,   284,  1002,
    1051,   203,   288,  2101,  2102,  2103,  2104,  2105,  2106,  2107,
    2108,  2109,   273,  2732,  2733,     5,    91,  2736,  1021,  2738,
     216,    83,   283,   284,   283,   255,   283,     5,    78,   315,
       4,  2750,  2751,   198,   199,   224,  2755,  2756,   100,   174,
    2759,     5,   351,    56,   283,  2764,  2765,     5,   273,    13,
      14,     5,    65,  2601,   315,   257,     3,     4,   283,   284,
      43,   283,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     315,  1094,    63,   233,    82,   198,   199,    61,   233,    13,
      14,   176,    39,  2822,    87,     5,  2825,     5,   273,    45,
    2138,  2830,  1115,     3,     4,     4,   883,  2836,   283,   284,
     182,  1124,  2841,   288,   106,    13,    14,     4,    64,   179,
      66,   283,     4,   166,   105,     3,     4,  1140,     4,  1142,
       5,   283,     3,     4,  1147,  1148,  1149,    61,     3,     4,
     315,   283,   283,   293,  1157,    16,   127,  1160,  2081,  1162,
      13,    14,   272,     4,   226,  1050,    56,   155,    98,   279,
     273,   122,  1057,    61,     5,   112,  1179,     5,  1181,   126,
     283,   284,    13,    14,     3,     4,  1189,  1190,   221,     3,
       4,    59,   267,     4,     5,     4,  2915,    11,    21,  2918,
     262,  1204,  1205,    26,     4,  1208,  1209,  1210,    61,   259,
     285,   224,   315,  1216,   247,  1218,   133,   200,  1221,  2938,
    1223,   203,  2734,     3,     4,    48,    49,   280,    51,    52,
      61,    11,  1283,  2952,   198,   199,  2955,  2956,    94,    62,
    2752,     4,     5,   231,   232,     3,     4,    45,  2171,     3,
       4,    74,    75,   189,     4,     5,   112,   174,   246,    82,
       4,     5,    85,  1032,  1033,   202,  1269,     4,    66,     4,
    1273,  2194,  1275,   244,     4,   257,  1279,  2267,     5,    27,
     103,   452,   453,    81,   198,   199,  2276,   110,   111,   260,
     261,   114,  1295,    36,  1297,  2285,  1299,  1300,  1301,  1302,
       4,   289,  1305,  1306,    47,  1308,  1309,  1310,  1311,   273,
     198,   199,   248,     3,     4,  1318,   233,    82,    88,   283,
     284,   205,  1325,   142,   288,  1295,  1329,  1330,  1331,     4,
       4,    74,    41,    42,   224,   211,  1339,  1340,    25,   195,
    1343,     4,  2370,   153,     4,   198,   199,   117,  1351,    39,
    1353,   315,     5,  1356,  1121,     5,   179,   293,  2386,   273,
       3,     4,     5,  2391,   183,     4,   302,   198,   199,   283,
     284,     8,   126,     5,  1344,  2887,   293,    10,   279,    18,
     175,  2893,   353,   354,     4,   273,     3,     4,     5,     4,
     155,   189,  1362,     3,     4,   283,   284,  1400,   184,  1402,
      39,   315,  1405,  1406,   175,  1408,   154,  1410,     3,     4,
     153,  1178,   235,  1416,     4,  1418,   226,    56,   241,   204,
     273,   204,   112,   193,  1427,  1192,   113,   315,     5,    39,
     283,   284,   180,     5,     4,   258,   184,  2949,   208,  2951,
     127,   196,   273,   204,    39,   268,     3,     4,     5,   196,
     248,   194,   283,   284,    66,    66,   233,   288,    66,   269,
       5,    34,   315,   102,     5,   234,   231,   232,   177,   178,
       4,     4,     4,   296,   297,     4,     4,   164,   354,   204,
      87,   246,   121,  2406,   315,   361,    87,   363,    87,   237,
    2413,     5,     5,    87,   317,   293,     4,   206,   308,     4,
     270,     5,   112,     5,   302,  1508,  1509,  1510,     3,     4,
       4,   100,   202,     8,     9,    10,     5,   112,     3,     4,
     263,     6,     7,   162,   289,     4,    16,  1530,   215,     5,
     278,  1534,    16,     4,   107,     4,     4,  1507,   286,   287,
     363,   228,   312,     4,    98,     5,     5,  1314,  1315,    87,
      87,    87,   322,  2476,  1557,  1558,  2479,   130,   131,  2482,
       4,  2484,     5,   202,  1567,     5,   139,  1570,    87,  2597,
       5,   210,     4,   316,  1577,     5,     5,     4,     4,   218,
     219,     5,  2610,     5,     4,   224,   159,  2615,  1591,     5,
     229,     5,     5,  1596,    15,     4,   169,  1600,    64,  1602,
    1603,    22,  1605,  1606,  1607,     4,  1609,     4,    11,  1612,
    1613,  1614,  1615,  1616,  1617,  1618,  1619,  1620,  1621,  1622,
       5,    11,  1625,  1626,  1627,  1628,     3,     4,     5,     6,
       7,     4,  1635,  1636,     4,     4,  1639,  1640,  1641,     4,
       4,   171,  1645,  1646,     5,  2593,     5,    66,  2596,     4,
    2598,     5,   162,   162,     4,  1658,  1659,     5,  1661,  1662,
       4,    80,    37,  2611,  2612,    37,   268,   306,   268,   297,
      89,     3,     4,     5,     6,     7,     5,     4,  2032,    35,
    2628,   100,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,  2634,     4,   132,     4,     4,   355,     5,     5,    53,
       5,     5,   361,   362,     3,     4,     5,     6,     7,     4,
    1733,  1734,  1735,  2087,   153,  1738,  1503,    71,     5,     5,
    1743,  1744,   281,  1746,  1747,  1748,   281,  1750,  1751,     5,
    1753,     5,  1755,  1756,    88,  1758,  1759,  1760,  1761,     5,
       4,     4,   118,     5,     5,  1532,  1769,   101,     5,  1536,
       5,     5,     5,  1743,  1777,     4,     4,   247,     5,  1782,
    1783,     5,     4,   247,   203,  1788,   120,     5,     5,   247,
     124,   106,   247,  2147,  1797,  1562,     5,   142,   106,    39,
     247,   247,   106,     5,   138,  1572,     5,    39,   220,   220,
       4,   253,   253,     5,  1581,  1582,     5,     4,   220,   220,
       4,   112,     5,   242,     5,  1592,     5,  1830,     4,   250,
       5,     5,   253,   189,   112,   191,   192,     4,   194,   195,
       5,     5,  1812,     5,     4,    11,     5,   181,  1851,  1852,
     269,  1821,     5,  1856,     4,  1825,  2884,     5,     5,  1862,
       4,   247,     5,     5,     4,    11,     5,     5,     4,   225,
       4,     4,  1040,     5,   310,     4,     4,     4,     0,     5,
       4,   247,     5,   142,    61,   247,     4,   247,   244,   245,
     309,   174,   311,   216,   250,   247,   247,   204,   254,   257,
       4,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,     4,
       4,     4,     4,   247,     5,   371,     5,     5,   281,     5,
     296,   118,     5,     5,     4,   122,     4,   247,     5,     4,
       4,     4,   308,     5,     5,     5,   319,     4,     4,     4,
       4,   247,   319,     4,     4,     4,  1969,  1970,     4,  1972,
     319,     5,   328,   319,     5,   233,   233,     5,   233,     4,
     157,   158,   233,   233,     4,   162,     5,  1990,  1991,  1992,
    1993,  1994,  1995,  1996,  1997,  1998,     4,    11,     5,     5,
       5,  2355,  2356,     4,  2358,  2359,     5,     4,  2362,  2363,
    2013,     5,  2015,     5,     4,   295,     5,     5,     4,   281,
       5,     5,     4,   200,     5,     5,     4,     4,  2031,  2032,
       5,     5,     5,     5,  2037,     4,     4,     4,   364,     5,
       5,     4,     4,  2046,  2047,  2048,  2049,  2050,  2051,  2052,
    2053,  2054,  2055,     5,     5,  2058,  2059,  2060,  2061,  2062,
    2063,  2064,  2065,  2066,  2067,  2068,  2069,     4,  2071,     5,
    2073,  2074,  2075,     5,   251,  2429,     4,     4,   255,     5,
    2768,     4,     4,     4,  2087,  2088,     5,   443,    92,     5,
     526,     5,     5,     5,     5,     5,   100,   533,   454,     5,
     536,     5,   106,   280,     4,   541,   283,   463,     4,   545,
       5,     4,   281,     5,     5,     5,     4,   294,     4,   123,
       5,     5,     5,     5,     4,   129,     4,   281,     5,     5,
       5,     5,     4,     4,   364,     5,  2139,     5,  2141,     5,
    2143,     5,  2145,     4,  2147,  2148,     4,  2150,     5,   153,
       5,     5,  2155,  2156,     5,  2158,  2159,  2160,  2161,   163,
       4,     4,  2850,     5,  2167,     4,  2169,     4,   364,     4,
    2173,     4,     4,  2176,     5,   531,   532,     5,     5,     5,
       5,     4,   364,     5,   620,     4,     4,     4,   544,     5,
       5,     4,     4,   549,     5,     5,     4,   295,     5,   203,
       5,     4,   558,     5,     5,     5,     5,   211,     5,  2179,
       5,     4,   364,     5,     4,     4,  1983,  2220,     4,    55,
       4,     4,   315,     5,     5,     5,     4,     4,  2582,     5,
      66,     5,  2586,     5,     5,     4,     4,   451,     5,     5,
       5,     5,     4,     4,   364,     5,     4,     4,  2218,     4,
       4,  2018,     4,   257,     4,     4,    92,    93,     4,     4,
       4,     4,   364,   364,   100,   269,     4,  2318,  2622,     5,
     106,     5,     4,     4,     4,   364,     5,     4,  1446,     5,
       4,   285,   638,   639,   640,   641,     5,   123,     5,     5,
    1458,     4,     4,   129,     4,     4,   132,     4,     4,     4,
       4,     4,     4,   402,     5,     4,  2908,     5,     5,     5,
       4,   747,  1480,  1481,     5,     4,     4,   153,   754,     5,
       5,  2324,     4,     4,     4,     4,     4,   163,     4,  2783,
       5,     4,  2335,  2336,  2337,  2338,  2339,  2340,  2341,  2342,
    2343,  2344,  2345,     4,     4,  2381,     5,     4,  2351,     4,
       4,     4,  2355,  2356,   710,  2358,  2359,  2862,  2863,  2362,
    2363,  2364,  2365,  2366,  2367,  2368,  2369,   203,  2371,  2372,
    2373,     5,     5,    17,    18,   211,     4,     4,     4,     4,
       4,     4,     4,     4,  2387,  2388,  2389,  2390,     5,  2392,
    2393,  2394,  2395,  2396,  2397,     5,  2399,     5,     4,  2402,
    2403,     4,     4,    39,     5,     5,     5,     5,     5,     5,
    1026,     4,     4,  2766,    58,     5,     5,     5,  2850,  2846,
      -1,   257,   790,  2426,    -1,    -1,  2429,  2430,    -1,    -1,
      66,  2434,    -1,   269,    -1,    -1,  2439,  2440,  2441,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1064,   285,
     886,    -1,    -1,    -1,    -1,    -1,    -1,   893,   102,   295,
      -1,   297,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   116,    -1,    -1,    -1,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2489,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,
      -1,    -1,   938,   939,    -1,    -1,    -1,   943,    -1,    -1,
     946,    -1,    -1,    -1,    -1,   351,    -1,   153,   162,    -1,
      -1,    -1,   958,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   887,    -1,    -1,   170,    -1,   180,    -1,    -1,    -1,
      -1,    -1,    -1,   899,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2561,    -1,
      -1,    -1,  2565,    -1,    -1,    -1,    -1,   203,    -1,    -1,
      -1,    -1,  2575,  2576,    -1,    -1,    -1,    -1,  2581,  2582,
     936,    -1,  2585,  2586,    -1,   229,    -1,    -1,  2591,    -1,
      -1,  2594,  2595,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,    -1,
    2613,  2614,    -1,  2616,  2617,  2618,  2619,  2620,    -1,  2622,
    2623,   257,    -1,    -1,  2627,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   269,    -1,    -1,  1072,  2640,    -1,    -1,
    2407,    -1,    -1,    -1,    -1,    -1,  2649,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   299,    -1,    -1,    -1,    -1,
    1016,   297,    -1,    -1,  2667,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   309,    -1,   311,   312,    -1,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,  2709,    -1,    -1,    -1,
      -1,  2714,    -1,  2716,    -1,   351,    -1,  1885,    -1,  2722,
      -1,    -1,    -1,    -1,    -1,  1893,  1894,    -1,    -1,    -1,
      -1,    -1,  2735,    -1,    -1,  1903,  1904,    -1,    -1,    -1,
      -1,  1097,    -1,    -1,    -1,  1913,  1914,    -1,    -1,    -1,
    2753,    -1,    -1,    -1,  2757,    -1,    -1,    -1,    -1,  2810,
    1928,  1929,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1939,  1940,    -1,    -1,    -1,    -1,    -1,  1946,    -1,
    2783,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1956,    -1,
      -1,    -1,    -1,    -1,    -1,  1151,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1161,    -1,    -1,    -1,    -1,
      -1,  2814,  1428,  1429,  1430,    -1,  2819,    -1,  2821,    -1,
      -1,    -1,  1438,  1439,  1440,  2828,    -1,    -1,    -1,    -1,
    2833,  1447,  1448,  1449,    -1,  2838,  1452,  1453,    -1,  1455,
    1456,    -1,  2609,    -1,    -1,  1281,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2862,
    2863,    -1,  2629,    -1,    -1,    -1,  2633,    -1,    -1,    -1,
      -1,    -1,    -1,  1489,  1490,    -1,    -1,  1493,  1494,    -1,
      -1,  1317,    -1,    -1,    -1,  2888,  1322,    -1,  2891,    -1,
      -1,  2894,    -1,    -1,    -1,    -1,  1332,    -1,    -1,    -1,
      -1,  2904,  2905,  2906,  2907,    -1,    -1,    18,    -1,  2879,
      -1,    -1,    -1,  2916,    -1,    -1,  2919,    -1,    -1,    -1,
      -1,  1277,    -1,  2926,    -1,  2928,    -1,    -1,    -1,    40,
      -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,  1295,
    2910,    -1,    -1,  2913,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,  1323,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    -1,  1333,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    -1,    -1,    -1,    -1,
      -1,   102,    -1,    -1,  1350,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2772,  1362,    -1,  2172,    -1,
      -1,  1367,    -1,    -1,    -1,    -1,   127,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2188,  2189,  2190,    -1,    -1,  2193,
      -1,  2195,  2196,    -1,   145,  2199,  2200,  2201,    -1,    -1,
    2204,  2205,    -1,    -1,  2208,    -1,  2210,  2211,    -1,  2213,
     161,   162,    -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,
      -1,    -1,    -1,  2231,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2241,  2242,    -1,    -1,    -1,    -1,   190,
      -1,     4,     5,    -1,  2252,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2261,    -1,    -1,    -1,  2265,  2266,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2274,  2275,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2283,  2284,    -1,   229,    -1,
      -1,  2289,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2299,  2300,  2900,    -1,  1571,    -1,    60,    -1,    -1,
      -1,    -1,  2310,    66,  2312,    -1,    -1,    -1,    -1,    -1,
      73,  1507,    75,    -1,    -1,    -1,  2320,    80,    -1,  2323,
      83,    -1,    -1,    -1,  2328,    -1,    89,  2331,    -1,    -1,
      -1,   282,    -1,    -1,    -1,    -1,    -1,   100,    -1,  1535,
      -1,    -1,   293,   106,    -1,    -1,  2350,    -1,    -1,    -1,
      -1,    -1,   115,    -1,    -1,  1631,    -1,    -1,    -1,    -1,
      -1,  1637,    -1,    -1,    -1,    -1,    -1,  1563,    -1,   132,
    1566,   322,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1575,
    1576,    -1,    -1,    -1,    -1,    -1,    -1,  1583,    -1,    -1,
     153,    -1,    -1,    -1,  1590,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,
    1866,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,   182,
      -1,    -1,    -1,  1879,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1889,  1630,    -1,    -1,    -1,    -1,    -1,
     203,  2445,    -1,    -1,    -1,    -1,  1642,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   226,  1740,    -1,    -1,    -1,    -1,  1745,
      -1,    -1,    -1,  2477,    -1,    -1,    -1,   240,    -1,   242,
      -1,    -1,    -1,    -1,    -1,  2493,    -1,    -1,  2496,    -1,
      -1,  2499,    -1,    -1,   257,    -1,    -1,    -1,  1774,   262,
      -1,  2509,    -1,    -1,  1780,  1961,   269,    -1,    -1,    -1,
    2518,    -1,    -1,   276,    -1,    -1,    -1,    -1,    -1,  2527,
      -1,    -1,    -1,    -1,    -1,    -1,  2534,    -1,    -1,    -1,
      -1,  1807,   295,    -1,    -1,    -1,    -1,  2545,  1814,    -1,
      -1,    -1,    -1,  2551,    -1,   308,   309,  1743,   311,    -1,
      -1,    -1,    -1,  2557,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1765,
      -1,    -1,    -1,  2577,    -1,    -1,    -1,    -1,    -1,    -1,
    2584,    -1,    -1,  2587,  2588,  1781,    -1,    -1,   351,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1794,    -1,
    1796,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1806,    -1,    -1,  1809,  1810,  1811,  1812,  1813,    -1,  1815,
      -1,    -1,  1818,    -1,    -1,  1821,  1822,  1823,  1824,  1825,
    1826,    -1,  1828,  1829,    -1,    -1,    -1,  1833,  1834,  1835,
      -1,    -1,  1838,  1839,    -1,    -1,    -1,    -1,  1844,  1845,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2671,    -1,    -1,    -1,    -1,    -1,    -1,
    2678,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2687,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2696,    -1,
    1966,    -1,    -1,    -1,  2702,    -1,    -1,    -1,  2706,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2710,    -1,    -1,    -1,
    1986,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2729,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2019,  2020,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2035,
    2036,    -1,    -1,    -1,  2040,  2041,    -1,    -1,    -1,    -1,
      -1,    -1,  1968,    -1,  2230,  1971,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1982,    -1,    -1,  1985,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2080,    -1,    -1,    -1,  2812,  2813,
      -1,  2815,    -1,  2817,  2818,  2091,  2820,    -1,  2014,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2290,  2291,  2292,  2293,  2294,    -1,
    2296,  2297,    -1,    -1,    -1,  2301,  2302,  2303,  2304,  2305,
      -1,  2307,  2308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,    -1,    -1,    -1,    -1,    -1,  2144,    -1,
    2874,    -1,    -1,  2069,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2163,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,  2092,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2186,    -1,    -1,    56,    -1,  2191,  2920,    -1,    -1,    -1,
      -1,  2197,    -1,    -1,    -1,    -1,  2202,    -1,    -1,    -1,
    2206,    -1,    -1,  2209,    -1,    -1,  2212,    -1,  2214,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2164,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2179,    -1,    -1,    -1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2207,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,
      -1,    -1,  2218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2492,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,  2501,  2502,  2503,  2504,  2505,
      -1,  2507,  2508,    -1,  2510,  2511,  2512,  2513,  2514,   202,
    2516,  2517,    -1,  2519,  2520,  2521,  2522,  2523,    -1,  2525,
    2526,    -1,  2528,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   224,  2538,  2539,    -1,    -1,   229,   102,    -1,    -1,
      -1,    -1,    -1,  2549,    -1,    -1,    -1,   240,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2398,    -1,    18,    -1,  2322,    -1,    -1,  2325,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2333,  2414,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,    -1,    -1,
      -1,    -1,    -1,  2349,    -1,    -1,  2352,    -1,    -1,    -1,
     303,  2357,    -1,    -1,  2360,  2361,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2453,    -1,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   167,   102,   224,
    2486,    -1,  2408,  2409,   229,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2681,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2690,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2699,    -1,  2701,    -1,    -1,    -1,  2705,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2458,    -1,    -1,    -1,    -1,    -1,   162,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2554,    -1,
      -1,    -1,    -1,    -1,  2560,    -1,    -1,    -1,  2564,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2580,    -1,    -1,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   229,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2800,    -1,  2802,    -1,  2804,    -1,
      -1,  2807,    -1,  2809,    -1,  2631,  2632,    -1,    -1,    -1,
    2556,    -1,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,    -1,    -1,  2589,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2600,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,    18,    56,  2654,    -1,
      -1,    -1,  2658,    -1,  2740,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2712,  2713,    -1,  2715,
      -1,    -1,    -1,    -1,  2720,  2721,    -1,    -1,    -1,  2725,
      -1,    -1,    -1,    -1,    65,    66,    -1,    -1,    69,    -1,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,  2758,   162,    -1,    -1,  2842,    -1,    -1,    -1,
      -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2866,    -1,    -1,    -1,  2790,    -1,    -1,    -1,    -1,    -1,
     162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,    -1,
     229,   162,    -1,    -1,    -1,  2911,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2931,    -1,    -1,  2934,    -1,
      -1,    -1,   224,   194,    -1,    -1,    -1,   229,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2879,    -1,   216,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   229,    -1,
    2896,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2910,    -1,    -1,  2913,    -1,    -1,
      -1,    -1,    -1,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   282,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,    -1,    -1,
      -1,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,    -1,
     351,    19,    20,    21,    -1,    -1,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    52,    48,    49,    55,    18,    52,
      -1,    -1,    -1,    -1,    62,    -1,    59,    -1,    66,    62,
      -1,    -1,    -1,    66,    -1,    -1,    74,    75,    -1,    -1,
      -1,    74,    75,    -1,    82,    83,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,   106,    18,
      -1,    -1,   110,   111,    -1,    -1,   114,   110,   111,    -1,
      -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   132,    -1,    -1,    18,    -1,   132,
      -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,
     153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,   179,    18,    -1,    -1,    -1,   179,    -1,    -1,    -1,
      -1,    -1,    -1,   102,    -1,   188,    -1,    -1,    -1,    -1,
      -1,    -1,   162,    -1,    -1,   203,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   233,    -1,   235,    -1,    -1,
     233,    -1,    -1,   241,   242,    -1,    -1,    -1,   241,   242,
      -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,    -1,   257,
     258,    -1,    -1,    -1,   224,   258,   102,    -1,    -1,   229,
     268,   269,    -1,    -1,    -1,    -1,   269,    -1,    -1,    -1,
      -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   295,    -1,   297,
      -1,    -1,   295,    -1,   297,    -1,    -1,    -1,    -1,    -1,
      -1,   309,    -1,   311,   307,    -1,    -1,    -1,    -1,   317,
     229,    -1,    -1,    -1,   317,    -1,   162,    -1,    -1,    -1,
     290,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   229,    -1,
      -1,    -1,    -1,   351,    -1,    -1,    -1,    -1,   351,    -1,
      -1,    -1,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     299,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     156,   157,   158,    -1,   360,   161,    -1,   162,    -1,   165,
      -1,   167,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,   360,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349
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
     293,   316,   561,    61,   293,   316,   560,    88,   117,   193,
     208,   270,   312,   322,   486,    15,    25,   113,   127,   164,
     215,   228,   489,   239,   507,     5,    66,    88,   143,   312,
     360,   369,   508,     5,   509,    57,   134,   234,   249,   313,
     525,    45,    64,    66,   189,   248,   293,   302,   545,    66,
     211,   354,   361,   363,   546,    38,   202,   240,   303,   367,
     377,   379,   547,     5,   312,   322,   369,   550,    70,   175,
     254,   263,   551,     4,   552,    88,   525,    61,   293,   316,
     559,   202,   303,   367,   562,    25,   113,   127,   215,   228,
     359,   564,    50,   100,   109,   140,   305,   586,   587,     4,
      36,    47,    74,   153,   194,   263,   292,   300,   316,   395,
       4,   127,   214,   588,   303,   367,   590,    15,    22,   250,
     253,   378,   591,   239,   595,   303,   367,   596,     0,     5,
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
       5,    65,   379,   454,    15,   525,    45,    66,    81,   189,
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
     367,    39,   112,   367,   549,   369,   367,   377,   379,   548,
     367,   384,   367,     4,   378,    54,    90,   144,   255,   553,
       4,     4,   367,     4,   153,   269,   554,     5,   377,     4,
      39,   112,   367,   563,   367,    98,    61,   122,   157,   158,
     255,   283,   566,   122,   585,    61,   118,   122,   157,   158,
     162,   200,   251,   255,   280,   283,   294,   567,   568,    61,
     122,   283,   584,     5,    61,   122,   283,   565,     4,    33,
     108,   211,   558,    66,   369,   396,    66,   369,   397,    66,
     369,   398,    12,   197,   557,   367,     4,   367,   233,   367,
     399,   367,   280,     4,   367,   367,     4,   234,   303,   594,
       4,   297,   592,     4,   297,   593,     4,   384,   126,   367,
     597,   367,   367,     4,     5,   367,    11,   367,   367,   367,
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
     519,   379,   196,   196,    66,   471,    66,   472,    66,   473,
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
     260,   261,   353,   354,   518,   100,   511,    16,   269,   516,
      39,   112,   202,   517,     4,     5,    16,   220,   304,   367,
     269,   518,   526,   127,   518,   527,    35,    39,   112,   136,
     202,   303,   367,   528,   377,   369,    92,   100,   106,   123,
     129,   153,   163,   203,   211,   257,   269,   285,   531,    39,
     112,   202,     5,   269,   296,   535,    16,   125,   173,   220,
     304,   536,   297,   369,   537,     5,   100,   106,   312,    16,
      16,     4,   367,   367,   367,   367,   367,   367,   384,   367,
     367,   376,   367,     4,   384,     4,    39,   112,   202,   274,
     555,    39,   112,   202,   274,   556,     4,    98,     5,     5,
      87,    87,    87,     4,     5,     5,    87,     5,    87,   162,
      87,   162,   568,    61,   122,   162,   283,   572,    61,   122,
     283,   583,    87,   162,    61,   122,   283,   570,     4,    61,
     122,   283,   569,     5,     5,     4,     5,     5,     4,     4,
       5,     5,     5,   367,   367,   367,     4,   367,   589,   367,
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
      66,   132,   160,   242,   295,    29,   166,   221,   247,   520,
     367,   216,   367,   521,    16,   367,   268,   531,   268,   216,
     367,   522,   297,   523,    16,    99,   367,   367,     5,   385,
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
     247,     5,    26,   172,   247,   293,   142,   106,    21,    49,
      52,    82,   111,   114,   235,   268,    21,    49,    52,    55,
      82,   111,   114,   235,   268,   295,    39,   247,   247,   106,
       5,   220,    26,   233,    35,   136,   303,   367,   272,   279,
     253,   377,   531,    39,   133,   233,   293,   253,   220,     5,
       5,   257,    26,   233,     4,     5,     5,   220,    35,   136,
     303,   367,   531,   220,   369,     4,     4,   367,     5,   315,
      21,    26,    48,    49,    51,    52,    62,    74,    75,    82,
      85,   103,   110,   111,   114,   179,   235,   241,   258,   268,
     296,   297,   317,   363,   514,   367,   367,   367,   367,   367,
     518,   377,     5,     4,     5,   367,   367,   377,   367,   369,
     367,   367,   518,     5,     5,   367,   367,   369,     5,    16,
       5,     5,   367,   367,   376,   367,   367,     4,   367,   367,
     112,   367,   367,   112,     4,    41,    42,   177,   178,   206,
     394,   394,    61,   122,   283,   580,    61,   122,   283,   577,
      61,   122,   283,   574,   394,     5,    61,   122,   283,   571,
      61,   122,   283,   582,    61,   122,   283,   581,    61,   122,
     283,   579,    61,   122,   283,   578,     5,     5,    61,   122,
     283,   573,     4,     5,     5,     4,    61,   122,   283,   576,
      61,   122,   283,   575,     5,     5,     4,     5,     5,     4,
     394,   394,   394,   367,   367,   367,     4,   377,   367,   384,
     378,     5,     5,    11,   367,   377,   379,   367,    11,   367,
     367,   367,    59,   367,     4,   367,   367,     4,   367,   367,
     367,   367,    46,   282,   421,     5,   369,   369,   384,   367,
       4,     4,     4,   384,   377,   367,   367,   367,   367,   384,
     377,   385,   376,   367,     4,   385,   367,     4,   379,     5,
      23,    24,    98,   386,     4,   377,   367,   367,     4,   367,
       5,    82,   155,   231,   232,   246,   289,   377,   379,   247,
     247,   247,    20,   247,   377,   247,    26,   172,   247,   293,
     142,    20,   247,   247,   247,    20,   247,    26,   174,   233,
     174,   272,   279,   174,   233,   301,   531,   133,   174,   233,
     293,     4,   257,    26,   174,   233,   531,   216,   367,   367,
     367,   367,   367,   367,   204,   367,   367,    19,   243,   479,
       4,     4,   367,   389,   389,   389,     4,   389,   389,   389,
      13,    14,    61,   198,   199,   273,   283,   284,   315,   388,
     389,   389,   389,   389,   389,     4,   389,   389,     4,   388,
      13,    14,    61,   198,   199,   273,   283,   284,   315,     5,
      13,    14,    61,   198,   199,   273,   283,   284,   288,   315,
      13,    14,    61,   198,   199,   273,   283,   284,   315,     5,
     497,     5,   500,     5,     5,    13,    14,    61,   198,   199,
     273,   283,   284,   288,   315,     5,    13,    14,    61,   198,
     199,   273,   283,   284,   288,   315,   281,     5,     5,     5,
     388,   388,   387,     4,     4,   387,     5,     4,     4,   389,
     389,     4,   389,   389,     5,   369,   377,   379,     5,   367,
     367,     5,   367,     5,   372,   106,   203,   257,   106,   203,
     257,     5,   367,   369,     5,   367,   377,   369,     5,   372,
     247,   247,    20,   247,    20,   247,   247,    20,   247,   319,
     319,     4,     4,     4,   512,     4,     4,     4,   319,   319,
       4,     5,     4,   367,     5,   367,     5,   372,   369,   377,
     377,   367,    26,    48,    51,    62,    85,   103,   363,   390,
       4,   367,   384,   369,     5,   377,   377,   367,   369,   369,
     377,   377,   367,   369,   367,     5,   367,   233,   233,   367,
     367,   233,   367,   233,   367,   367,   524,   532,   367,   233,
     233,   367,   367,   367,   367,   367,   367,   367,   367,     5,
     315,   367,   515,   367,   367,   233,   367,   367,   367,   367,
     377,   384,     5,     4,     4,   367,   367,   384,   367,   367,
     367,   377,   518,   367,   367,     5,     4,   367,   367,   367,
     367,     5,     5,     4,     5,     5,     4,     5,     5,     4,
     394,     5,     5,     4,     5,     5,     4,     5,     5,     4,
       5,     5,     4,     5,     5,     4,     4,     4,     5,     5,
       4,     4,     5,     5,     4,     5,     5,     4,   367,   367,
     367,   367,   384,   367,   377,   379,   367,   384,   367,   367,
     367,   367,   367,     5,   367,   367,   367,     4,   367,   367,
     367,   367,     4,   377,   367,   384,   184,   382,   367,   382,
     385,   384,   377,   367,   367,     4,   367,   377,   377,   367,
     370,     5,     5,     5,     5,     5,   377,   384,   377,   377,
     377,   377,   379,   377,   384,   377,   377,   377,   379,   377,
     377,   377,   377,   379,   377,   377,   377,   367,   377,   377,
     377,   377,   377,   377,   377,   367,   367,     4,   367,     5,
     367,   389,     5,     5,     5,   387,     4,     4,     5,   389,
     388,     4,   389,     5,     5,     5,   388,   388,   387,     4,
       4,     5,   281,     5,     5,     5,   388,   388,   387,     4,
       4,   387,     5,     5,     5,     5,   388,   388,   387,     4,
       4,     5,    13,    14,    61,   198,   199,   273,   283,   284,
     315,    13,    14,    61,   198,   199,   273,   283,   284,   315,
      13,    14,    61,   198,   199,   273,   283,   284,   315,   281,
       5,     5,     5,   388,   388,   387,     4,     4,   387,     5,
     281,     5,     5,     5,   388,   388,   387,     4,     4,   387,
       5,   388,     4,     4,   388,     4,     4,   389,     5,   384,
     377,   367,   367,   377,   367,     5,   372,     5,   377,   369,
       5,   377,   384,     5,   372,   367,   367,   367,   367,   367,
     367,   367,   367,   367,     4,     4,     5,     4,     4,   367,
     377,   367,     5,   372,   369,   384,   384,   367,   376,   384,
     384,   367,   384,   384,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   367,    55,    66,    93,   132,   295,   297,
     351,   529,   530,   531,   543,   544,   367,   367,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   377,     5,
     367,   367,   367,   367,     4,     4,   384,   385,     5,     5,
     376,   367,     4,   384,   377,     4,   394,   394,   394,   394,
     394,   394,   394,   394,   394,   372,   367,   367,   367,   384,
     367,   376,   367,   367,    11,     5,     5,   367,   367,   367,
     367,   367,   367,     4,   384,   377,   367,   367,   385,   386,
     367,     5,   367,   377,   379,     5,     5,     5,     5,     5,
     384,   386,   386,   386,   384,   386,   385,   386,   386,   384,
     386,   386,   386,   384,   386,   386,   384,   377,   386,   384,
     386,   386,   384,   386,   384,     4,   377,   379,     5,   367,
       4,   389,   388,     4,   388,   388,     4,     4,   388,     4,
     388,     5,     5,     5,   388,   388,   387,     4,     4,     5,
       5,     5,     5,   388,   388,   387,     4,     4,     5,     5,
       5,     5,   388,   388,   387,     4,     4,     5,   388,   389,
     389,   389,   389,   389,     4,   389,   389,     4,   388,   388,
     389,   389,   389,   389,   389,     4,   389,   389,     4,   388,
     388,     4,     4,     4,   378,   386,     4,   377,   386,   367,
     377,     4,   386,   386,   377,     4,   367,   367,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   377,   386,   367,
     377,     4,   376,   376,   377,   376,   376,   377,   377,   376,
     376,   367,   367,   367,   367,   367,   367,   372,   367,   367,
     367,   364,   364,   364,   364,   364,   364,   364,   530,   364,
     372,   367,   367,   367,   367,   372,   367,   367,   367,   367,
     367,   367,   384,   367,   315,   371,   372,   367,   367,   385,
     369,   377,   377,   385,   384,     4,   367,   376,   367,    59,
     367,     5,     5,     4,     4,   367,   367,   367,     4,   382,
     386,     5,   384,     4,     5,     4,     5,   377,     5,   385,
     386,   385,   385,   385,     5,   384,     4,   367,   389,   388,
     388,     4,   388,   389,   389,   389,   389,   389,     4,   389,
     389,   388,   389,   389,   389,   389,   389,     4,   389,   389,
     388,   389,   389,   389,   389,   389,     4,   389,   389,   388,
     389,   388,     4,   389,   389,   388,     4,   389,   388,   384,
     377,   386,     4,   384,   367,   384,   367,   367,   367,   386,
       4,   384,   367,   376,   386,   367,   376,   386,   386,   377,
     367,     4,   391,   391,   367,   367,   391,   372,   391,   532,
     377,   512,     5,     4,     5,     5,     5,     4,   369,   372,
     391,   391,   367,   367,   372,   367,   367,   367,   367,   367,
     376,   367,     5,   532,   367,   391,   369,   533,   534,   384,
     384,   369,   385,     4,     5,   367,     5,     4,     4,     4,
       4,     4,     4,   367,     4,    31,   192,   291,   428,   377,
       5,    31,   192,   291,   393,   377,     4,   428,   367,   388,
     388,   389,   388,   389,   388,   389,   389,   388,   389,   388,
     367,   386,   377,   377,   367,   377,   367,   377,   377,   367,
     377,   386,     4,   532,   532,   371,   367,   532,     4,   532,
     384,     5,     4,     4,   532,   532,   371,   367,     4,   532,
     532,   367,   377,   532,   532,   532,   533,   540,   541,   531,
     538,   539,   369,     4,     5,     5,     4,     4,     4,   195,
     313,   358,   367,   419,   428,     4,   377,   428,     4,   389,
     389,   389,   389,   389,   378,   386,   386,   367,   386,     4,
     386,   386,   367,   386,   367,   532,   532,     4,   367,   532,
       5,   367,   532,     4,   367,   532,   384,   540,   542,   543,
     364,   539,     5,     5,   367,   420,   367,   420,   384,   386,
       4,   377,   379,     4,   372,   371,   367,   367,   371,   367,
     377,   543,   369,     5,     5,   367,   367,   367,   367,   393,
       5,   377,   379,   384,   377,   379,   532,   367,     4,   532,
     367,   386,     5,     5,   367,     5,   367,   384,   384,     4,
     532,     4,     5,     5,     5,   371,   371,   532,   532,   532
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
#line 471 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 472 "frame/parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 7:
#line 474 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 475 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 477 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 484 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 23:
#line 490 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 24:
#line 491 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 492 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 29:
#line 496 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 36:
#line 503 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 40:
#line 507 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 43:
#line 510 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 48:
#line 515 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 50:
#line 517 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 52:
#line 519 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 54:
#line 521 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 59:
#line 528 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 60:
#line 529 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 61:
#line 532 "frame/parser.Y"
    {yydebug=(yyvsp[(1) - (1)].integer);;}
    break;

  case 62:
#line 533 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 534 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 535 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 536 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 537 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 538 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 539 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 540 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 541 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 542 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 72:
#line 545 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 73:
#line 547 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 74:
#line 548 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 75:
#line 549 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 76:
#line 550 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 77:
#line 552 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 78:
#line 553 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 79:
#line 554 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 80:
#line 555 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 81:
#line 558 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 82:
#line 559 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 83:
#line 560 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 84:
#line 561 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 85:
#line 562 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 86:
#line 565 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 87:
#line 566 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 88:
#line 569 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 89:
#line 570 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 90:
#line 571 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 91:
#line 574 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 92:
#line 577 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 93:
#line 580 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 94:
#line 584 "frame/parser.Y"
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
#line 596 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 96:
#line 603 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 97:
#line 610 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 98:
#line 617 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 99:
#line 618 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 100:
#line 619 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 101:
#line 620 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 102:
#line 621 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 103:
#line 624 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 104:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 105:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 106:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 107:
#line 628 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 108:
#line 629 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 109:
#line 630 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 110:
#line 631 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 111:
#line 632 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 112:
#line 633 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 113:
#line 634 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 114:
#line 635 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 115:
#line 636 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 116:
#line 637 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 117:
#line 638 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 118:
#line 639 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 119:
#line 640 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 120:
#line 641 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 121:
#line 642 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 122:
#line 643 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 123:
#line 644 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 124:
#line 645 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 125:
#line 646 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 126:
#line 647 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 127:
#line 648 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 128:
#line 649 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 129:
#line 650 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 130:
#line 651 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 131:
#line 654 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 132:
#line 655 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 133:
#line 658 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 134:
#line 659 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 135:
#line 660 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 136:
#line 661 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 137:
#line 662 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 138:
#line 663 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 139:
#line 666 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 140:
#line 667 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 141:
#line 668 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 142:
#line 669 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 143:
#line 670 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 144:
#line 673 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 145:
#line 674 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 146:
#line 675 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 147:
#line 676 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 148:
#line 677 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 149:
#line 678 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 150:
#line 679 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 151:
#line 680 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 152:
#line 683 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 153:
#line 684 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 154:
#line 685 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 155:
#line 686 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 156:
#line 687 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 157:
#line 690 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 158:
#line 691 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 159:
#line 692 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 160:
#line 693 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 161:
#line 694 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 162:
#line 695 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 163:
#line 696 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 164:
#line 697 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 165:
#line 700 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 166:
#line 701 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 167:
#line 702 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 168:
#line 705 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 169:
#line 706 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 170:
#line 707 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 171:
#line 708 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 172:
#line 711 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 173:
#line 712 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 174:
#line 713 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 175:
#line 716 "frame/parser.Y"
    {;}
    break;

  case 176:
#line 717 "frame/parser.Y"
    {;}
    break;

  case 177:
#line 718 "frame/parser.Y"
    {;}
    break;

  case 178:
#line 721 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 179:
#line 722 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 180:
#line 723 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 181:
#line 726 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 182:
#line 727 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 183:
#line 728 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 184:
#line 729 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 185:
#line 730 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 186:
#line 731 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 187:
#line 732 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 188:
#line 733 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 189:
#line 736 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 190:
#line 737 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 191:
#line 740 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 192:
#line 741 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 193:
#line 742 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 194:
#line 743 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 195:
#line 744 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 196:
#line 745 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 197:
#line 748 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 198:
#line 749 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 199:
#line 750 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 200:
#line 751 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 201:
#line 754 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 202:
#line 755 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 203:
#line 756 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 204:
#line 757 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 205:
#line 758 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 206:
#line 759 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 211:
#line 766 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 212:
#line 767 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 213:
#line 768 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 214:
#line 769 "frame/parser.Y"
    {fr->set3dSyncCmd((yyvsp[(2) - (2)].integer));}
    break;

  case 215:
#line 771 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 216:
#line 774 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 217:
#line 775 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 218:
#line 778 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 219:
#line 779 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 220:
#line 782 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 221:
#line 783 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 222:
#line 786 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 223:
#line 788 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 225:
#line 792 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 226:
#line 793 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 229:
#line 796 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 231:
#line 798 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 232:
#line 801 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 233:
#line 802 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 234:
#line 805 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 235:
#line 806 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 236:
#line 808 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 237:
#line 810 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 238:
#line 811 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 239:
#line 812 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 240:
#line 814 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 241:
#line 816 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 242:
#line 819 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 243:
#line 820 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 244:
#line 823 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 245:
#line 825 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 246:
#line 828 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 247:
#line 830 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 248:
#line 833 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 249:
#line 837 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 250:
#line 838 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 252:
#line 842 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 253:
#line 843 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 254:
#line 844 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 258:
#line 850 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 259:
#line 851 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 261:
#line 854 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 262:
#line 859 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 263:
#line 860 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 264:
#line 863 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 265:
#line 864 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 266:
#line 865 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 267:
#line 866 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 268:
#line 867 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 269:
#line 870 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 270:
#line 871 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 271:
#line 872 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 272:
#line 873 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 273:
#line 876 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 274:
#line 878 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 275:
#line 883 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 276:
#line 888 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 277:
#line 895 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 278:
#line 897 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 279:
#line 899 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 280:
#line 901 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 284:
#line 908 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 285:
#line 910 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 286:
#line 912 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 287:
#line 914 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 288:
#line 916 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 289:
#line 917 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 295:
#line 928 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 296:
#line 931 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 297:
#line 934 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 298:
#line 940 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 299:
#line 945 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 300:
#line 948 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 301:
#line 949 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 302:
#line 952 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 303:
#line 953 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 304:
#line 955 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 305:
#line 961 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 306:
#line 962 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 307:
#line 963 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 308:
#line 964 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 309:
#line 967 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 310:
#line 968 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 311:
#line 971 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 312:
#line 972 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 313:
#line 975 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 314:
#line 976 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 315:
#line 980 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 316:
#line 982 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 317:
#line 985 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 318:
#line 987 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 319:
#line 990 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 321:
#line 992 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 322:
#line 993 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 323:
#line 994 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 324:
#line 997 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 325:
#line 999 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 326:
#line 1000 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 327:
#line 1001 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 328:
#line 1002 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 329:
#line 1006 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 330:
#line 1008 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 331:
#line 1009 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 332:
#line 1010 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 333:
#line 1013 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 334:
#line 1015 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 335:
#line 1017 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 336:
#line 1019 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 337:
#line 1022 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 338:
#line 1025 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 339:
#line 1026 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 340:
#line 1027 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 341:
#line 1028 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 342:
#line 1031 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 343:
#line 1032 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 344:
#line 1035 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 345:
#line 1038 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 346:
#line 1039 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 360:
#line 1053 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 363:
#line 1056 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 364:
#line 1057 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 370:
#line 1063 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 371:
#line 1064 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 374:
#line 1067 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 375:
#line 1068 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 377:
#line 1071 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 379:
#line 1073 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 381:
#line 1075 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 383:
#line 1077 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 384:
#line 1079 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 387:
#line 1082 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 388:
#line 1086 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 389:
#line 1088 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 390:
#line 1092 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 391:
#line 1094 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 392:
#line 1097 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 393:
#line 1098 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 394:
#line 1099 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 395:
#line 1100 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 396:
#line 1101 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 397:
#line 1102 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 399:
#line 1104 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 400:
#line 1107 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 401:
#line 1108 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 402:
#line 1109 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 403:
#line 1112 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 404:
#line 1115 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 405:
#line 1117 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 406:
#line 1119 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 407:
#line 1120 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 408:
#line 1121 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 410:
#line 1123 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 412:
#line 1126 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 413:
#line 1132 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 414:
#line 1133 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 415:
#line 1136 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 416:
#line 1137 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 417:
#line 1138 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 418:
#line 1141 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 419:
#line 1142 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 421:
#line 1148 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 422:
#line 1150 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 423:
#line 1152 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 424:
#line 1155 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 426:
#line 1157 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 427:
#line 1161 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 428:
#line 1165 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 430:
#line 1167 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 431:
#line 1168 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 432:
#line 1169 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 433:
#line 1170 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 434:
#line 1171 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 436:
#line 1173 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 437:
#line 1174 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 438:
#line 1177 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 439:
#line 1178 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 440:
#line 1179 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 441:
#line 1182 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 442:
#line 1183 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 443:
#line 1187 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 444:
#line 1189 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 445:
#line 1197 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 446:
#line 1199 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 447:
#line 1201 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 448:
#line 1204 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 449:
#line 1206 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 450:
#line 1207 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 451:
#line 1210 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 452:
#line 1213 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 453:
#line 1215 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 454:
#line 1219 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 455:
#line 1221 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 456:
#line 1224 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 457:
#line 1228 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 458:
#line 1229 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 459:
#line 1231 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 460:
#line 1234 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 461:
#line 1235 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 463:
#line 1239 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 464:
#line 1240 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 465:
#line 1241 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 466:
#line 1244 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 467:
#line 1246 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 468:
#line 1247 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 470:
#line 1249 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 474:
#line 1253 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 475:
#line 1254 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 476:
#line 1255 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 477:
#line 1257 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 479:
#line 1259 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 480:
#line 1262 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 481:
#line 1264 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 482:
#line 1266 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 483:
#line 1267 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 484:
#line 1268 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 485:
#line 1269 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 486:
#line 1272 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 487:
#line 1273 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 488:
#line 1277 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 489:
#line 1279 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 490:
#line 1282 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 491:
#line 1285 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 492:
#line 1286 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 493:
#line 1288 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 494:
#line 1290 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 495:
#line 1292 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 496:
#line 1295 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 497:
#line 1296 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 498:
#line 1297 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 499:
#line 1300 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 500:
#line 1301 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 501:
#line 1302 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 502:
#line 1303 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 503:
#line 1304 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 504:
#line 1305 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 505:
#line 1306 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 506:
#line 1309 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 507:
#line 1312 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 508:
#line 1313 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 509:
#line 1314 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 510:
#line 1317 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 511:
#line 1318 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 512:
#line 1319 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 513:
#line 1322 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 514:
#line 1323 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 515:
#line 1324 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 516:
#line 1327 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 517:
#line 1328 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 518:
#line 1329 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 519:
#line 1330 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 520:
#line 1331 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 521:
#line 1332 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 526:
#line 1339 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 527:
#line 1340 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 528:
#line 1341 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 529:
#line 1344 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 530:
#line 1345 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 531:
#line 1348 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 532:
#line 1349 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 533:
#line 1352 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 534:
#line 1353 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 535:
#line 1356 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 536:
#line 1357 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 537:
#line 1360 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 539:
#line 1362 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 540:
#line 1365 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 541:
#line 1366 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 543:
#line 1370 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 544:
#line 1374 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 545:
#line 1377 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 546:
#line 1384 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 547:
#line 1385 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 548:
#line 1388 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 549:
#line 1389 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 552:
#line 1392 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 553:
#line 1393 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 554:
#line 1394 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 555:
#line 1395 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 557:
#line 1397 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 558:
#line 1398 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 559:
#line 1399 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 561:
#line 1401 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 562:
#line 1402 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 563:
#line 1403 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 564:
#line 1404 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 566:
#line 1408 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 567:
#line 1411 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 568:
#line 1412 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 569:
#line 1415 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 570:
#line 1416 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 571:
#line 1417 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 572:
#line 1418 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 573:
#line 1421 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 574:
#line 1422 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 575:
#line 1423 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 576:
#line 1424 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 577:
#line 1427 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 578:
#line 1428 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 579:
#line 1429 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 580:
#line 1430 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 581:
#line 1431 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 582:
#line 1432 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 583:
#line 1435 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 584:
#line 1436 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 585:
#line 1437 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 588:
#line 1441 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 589:
#line 1442 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 590:
#line 1445 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 591:
#line 1448 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 592:
#line 1449 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 593:
#line 1453 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 594:
#line 1455 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 595:
#line 1456 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 602:
#line 1468 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 603:
#line 1470 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 604:
#line 1472 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 605:
#line 1473 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 606:
#line 1475 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 607:
#line 1477 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 608:
#line 1479 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 609:
#line 1481 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 610:
#line 1483 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 614:
#line 1489 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 615:
#line 1490 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 616:
#line 1491 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 617:
#line 1492 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 618:
#line 1493 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 619:
#line 1495 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 620:
#line 1496 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 621:
#line 1497 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 622:
#line 1498 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 623:
#line 1501 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 624:
#line 1505 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 625:
#line 1507 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 626:
#line 1509 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 627:
#line 1511 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 628:
#line 1513 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 629:
#line 1515 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 630:
#line 1517 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 631:
#line 1519 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 632:
#line 1522 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 633:
#line 1524 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 634:
#line 1526 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 644:
#line 1538 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 645:
#line 1539 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 646:
#line 1540 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 647:
#line 1541 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 648:
#line 1542 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 649:
#line 1543 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 650:
#line 1545 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 651:
#line 1547 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 652:
#line 1548 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 653:
#line 1549 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 654:
#line 1550 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 655:
#line 1553 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 656:
#line 1554 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 657:
#line 1555 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 658:
#line 1556 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 659:
#line 1557 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 660:
#line 1559 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 661:
#line 1560 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 662:
#line 1561 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 663:
#line 1562 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 669:
#line 1573 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 670:
#line 1576 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 671:
#line 1579 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 672:
#line 1582 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 673:
#line 1585 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 674:
#line 1588 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 675:
#line 1591 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 676:
#line 1594 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 677:
#line 1597 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 678:
#line 1602 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 679:
#line 1605 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 680:
#line 1608 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 681:
#line 1611 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 682:
#line 1614 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 683:
#line 1617 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 684:
#line 1620 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 685:
#line 1623 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 686:
#line 1626 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 687:
#line 1629 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 688:
#line 1632 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 689:
#line 1637 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 690:
#line 1640 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 691:
#line 1643 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 692:
#line 1646 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 693:
#line 1649 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 694:
#line 1652 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 695:
#line 1655 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 696:
#line 1658 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 697:
#line 1661 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 698:
#line 1666 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 699:
#line 1668 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 700:
#line 1670 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 701:
#line 1672 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 702:
#line 1674 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 703:
#line 1676 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 704:
#line 1681 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 705:
#line 1683 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 706:
#line 1685 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 707:
#line 1689 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 708:
#line 1692 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 709:
#line 1695 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 710:
#line 1698 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 711:
#line 1701 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 712:
#line 1704 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 713:
#line 1707 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 714:
#line 1710 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 715:
#line 1713 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 716:
#line 1716 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 717:
#line 1719 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 718:
#line 1723 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 719:
#line 1724 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 720:
#line 1725 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 721:
#line 1726 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 722:
#line 1727 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 723:
#line 1728 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 724:
#line 1730 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 725:
#line 1732 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 726:
#line 1733 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 727:
#line 1734 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 728:
#line 1735 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 729:
#line 1738 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 730:
#line 1739 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 731:
#line 1740 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 732:
#line 1741 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 733:
#line 1742 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 734:
#line 1744 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 735:
#line 1745 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 736:
#line 1746 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 737:
#line 1747 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 738:
#line 1751 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 739:
#line 1753 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 740:
#line 1754 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 741:
#line 1756 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 742:
#line 1758 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 743:
#line 1760 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 744:
#line 1763 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 745:
#line 1764 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 746:
#line 1767 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 747:
#line 1768 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 748:
#line 1769 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 749:
#line 1772 "frame/parser.Y"
    {;}
    break;

  case 750:
#line 1775 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 751:
#line 1776 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 752:
#line 1777 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 753:
#line 1778 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 754:
#line 1779 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 755:
#line 1780 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 756:
#line 1781 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 757:
#line 1785 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 759:
#line 1793 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 760:
#line 1794 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 761:
#line 1796 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 762:
#line 1798 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 763:
#line 1799 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 764:
#line 1800 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 766:
#line 1801 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 769:
#line 1804 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 770:
#line 1805 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 771:
#line 1807 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 772:
#line 1809 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 773:
#line 1811 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 774:
#line 1814 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 775:
#line 1816 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 776:
#line 1817 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 777:
#line 1819 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 778:
#line 1822 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 779:
#line 1825 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 780:
#line 1829 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 781:
#line 1832 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 782:
#line 1835 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 783:
#line 1838 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 784:
#line 1842 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 785:
#line 1846 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 786:
#line 1851 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 787:
#line 1855 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 788:
#line 1857 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 789:
#line 1858 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 790:
#line 1860 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 791:
#line 1862 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 792:
#line 1864 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 793:
#line 1866 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 794:
#line 1867 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 795:
#line 1869 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 796:
#line 1871 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 797:
#line 1874 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 798:
#line 1878 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 799:
#line 1882 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 800:
#line 1884 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 801:
#line 1886 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 802:
#line 1888 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 803:
#line 1890 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 804:
#line 1892 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 805:
#line 1894 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 806:
#line 1896 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 807:
#line 1898 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 808:
#line 1900 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 809:
#line 1902 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 810:
#line 1904 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 811:
#line 1906 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 812:
#line 1908 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 813:
#line 1909 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 814:
#line 1911 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 815:
#line 1913 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 816:
#line 1914 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 817:
#line 1915 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 818:
#line 1917 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 819:
#line 1919 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 820:
#line 1920 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 821:
#line 1921 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 822:
#line 1922 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 823:
#line 1924 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 824:
#line 1926 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 825:
#line 1930 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 826:
#line 1933 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 827:
#line 1936 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 828:
#line 1940 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 829:
#line 1944 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 830:
#line 1949 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 831:
#line 1953 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 832:
#line 1954 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 833:
#line 1955 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 834:
#line 1957 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 835:
#line 1959 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 836:
#line 1963 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 837:
#line 1964 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 838:
#line 1965 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 839:
#line 1967 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 840:
#line 1970 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 841:
#line 1973 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 842:
#line 1976 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 843:
#line 1977 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 844:
#line 1981 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 845:
#line 1985 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 846:
#line 1987 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 847:
#line 1988 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 848:
#line 1990 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 849:
#line 1993 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 850:
#line 1996 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 851:
#line 1997 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 852:
#line 1999 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 853:
#line 2000 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 854:
#line 2001 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 855:
#line 2003 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 856:
#line 2004 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 857:
#line 2006 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 858:
#line 2009 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 859:
#line 2012 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 860:
#line 2014 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 861:
#line 2015 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 865:
#line 2020 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 866:
#line 2021 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 867:
#line 2023 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 868:
#line 2025 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 869:
#line 2027 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 870:
#line 2028 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 874:
#line 2034 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 875:
#line 2035 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 876:
#line 2036 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 877:
#line 2037 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 878:
#line 2038 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 879:
#line 2039 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 880:
#line 2040 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 881:
#line 2041 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 882:
#line 2042 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 883:
#line 2043 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 884:
#line 2045 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 885:
#line 2047 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 886:
#line 2048 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 887:
#line 2049 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 888:
#line 2050 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 889:
#line 2051 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 890:
#line 2053 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 891:
#line 2054 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 892:
#line 2055 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 893:
#line 2056 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 894:
#line 2057 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 895:
#line 2059 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 896:
#line 2060 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 897:
#line 2061 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 898:
#line 2062 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 899:
#line 2063 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 900:
#line 2064 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 901:
#line 2067 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 902:
#line 2068 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 903:
#line 2069 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 904:
#line 2070 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 905:
#line 2071 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 906:
#line 2072 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 907:
#line 2073 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 908:
#line 2074 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 909:
#line 2075 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 910:
#line 2076 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 911:
#line 2077 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 912:
#line 2078 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 913:
#line 2079 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 914:
#line 2080 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 915:
#line 2081 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 916:
#line 2082 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 917:
#line 2083 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 918:
#line 2084 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 919:
#line 2085 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 920:
#line 2086 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 921:
#line 2087 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 922:
#line 2090 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 923:
#line 2091 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 924:
#line 2092 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 925:
#line 2093 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 926:
#line 2094 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 927:
#line 2096 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 928:
#line 2106 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 929:
#line 2114 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 930:
#line 2123 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 931:
#line 2131 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 932:
#line 2138 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 933:
#line 2145 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 934:
#line 2153 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 935:
#line 2161 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 936:
#line 2166 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 937:
#line 2171 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 938:
#line 2176 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 939:
#line 2181 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 940:
#line 2186 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 941:
#line 2191 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 942:
#line 2196 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 943:
#line 2205 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 944:
#line 2215 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 945:
#line 2225 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 946:
#line 2234 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 947:
#line 2242 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 948:
#line 2252 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 949:
#line 2262 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 950:
#line 2272 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 951:
#line 2284 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 952:
#line 2293 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 954:
#line 2301 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 955:
#line 2303 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 956:
#line 2305 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 957:
#line 2310 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 958:
#line 2313 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 959:
#line 2314 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 960:
#line 2315 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 961:
#line 2322 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 962:
#line 2324 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 963:
#line 2325 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 964:
#line 2328 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 965:
#line 2329 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 966:
#line 2330 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 967:
#line 2331 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 968:
#line 2332 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 969:
#line 2333 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 970:
#line 2334 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 972:
#line 2338 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 973:
#line 2339 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 974:
#line 2340 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 975:
#line 2341 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 976:
#line 2342 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 977:
#line 2345 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 978:
#line 2347 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 979:
#line 2349 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 980:
#line 2351 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 981:
#line 2353 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 982:
#line 2355 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 983:
#line 2357 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 984:
#line 2358 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 985:
#line 2359 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 986:
#line 2361 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 987:
#line 2363 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 988:
#line 2366 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 989:
#line 2368 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 990:
#line 2369 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 991:
#line 2370 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 992:
#line 2372 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 993:
#line 2374 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 994:
#line 2377 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 995:
#line 2380 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 996:
#line 2381 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 997:
#line 2382 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 998:
#line 2383 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 999:
#line 2385 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1000:
#line 2386 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1001:
#line 2387 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1002:
#line 2388 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1003:
#line 2389 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1004:
#line 2391 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1005:
#line 2393 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1006:
#line 2395 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1007:
#line 2397 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1008:
#line 2399 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1009:
#line 2400 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1010:
#line 2402 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1011:
#line 2404 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1012:
#line 2406 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1013:
#line 2407 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1014:
#line 2408 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1015:
#line 2410 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1016:
#line 2412 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1017:
#line 2415 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1018:
#line 2418 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1019:
#line 2419 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1020:
#line 2421 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1021:
#line 2424 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1022:
#line 2427 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1023:
#line 2428 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1024:
#line 2429 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1025:
#line 2430 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1026:
#line 2432 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1027:
#line 2434 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1028:
#line 2436 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1029:
#line 2437 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1030:
#line 2439 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1031:
#line 2440 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1032:
#line 2441 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1033:
#line 2442 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1034:
#line 2443 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1035:
#line 2445 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1036:
#line 2447 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1037:
#line 2449 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1038:
#line 2451 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1040:
#line 2453 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1041:
#line 2454 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1042:
#line 2456 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1043:
#line 2458 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1044:
#line 2459 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1045:
#line 2460 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1047:
#line 2462 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1049:
#line 2466 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1050:
#line 2467 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1051:
#line 2468 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1052:
#line 2469 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1053:
#line 2470 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1054:
#line 2471 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1055:
#line 2473 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1056:
#line 2474 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1057:
#line 2476 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1058:
#line 2479 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1059:
#line 2480 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1060:
#line 2481 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1061:
#line 2482 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1062:
#line 2485 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1063:
#line 2486 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1064:
#line 2489 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1065:
#line 2490 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1066:
#line 2493 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1067:
#line 2494 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1068:
#line 2497 "frame/parser.Y"
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
#line 2510 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1070:
#line 2511 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1071:
#line 2515 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1072:
#line 2516 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1073:
#line 2520 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1074:
#line 2521 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1075:
#line 2526 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1076:
#line 2530 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1077:
#line 2535 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1078:
#line 2537 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1079:
#line 2540 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1080:
#line 2542 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1081:
#line 2545 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1082:
#line 2547 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1083:
#line 2550 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1084:
#line 2551 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1085:
#line 2552 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1086:
#line 2553 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1087:
#line 2554 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1088:
#line 2555 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1089:
#line 2557 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1092:
#line 2564 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1093:
#line 2565 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1094:
#line 2566 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1095:
#line 2567 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1096:
#line 2568 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1097:
#line 2569 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1100:
#line 2574 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1101:
#line 2575 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1102:
#line 2576 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1103:
#line 2577 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1104:
#line 2578 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1105:
#line 2579 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1106:
#line 2580 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1107:
#line 2581 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1108:
#line 2582 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1109:
#line 2583 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1110:
#line 2584 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1111:
#line 2585 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1114:
#line 2592 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1115:
#line 2593 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1117:
#line 2597 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1118:
#line 2599 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1119:
#line 2600 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1120:
#line 2603 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1121:
#line 2604 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1122:
#line 2605 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1123:
#line 2606 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1124:
#line 2607 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1125:
#line 2608 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1126:
#line 2611 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1127:
#line 2612 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1130:
#line 2620 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1131:
#line 2623 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1132:
#line 2624 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1136:
#line 2631 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1137:
#line 2634 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1138:
#line 2638 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1139:
#line 2639 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1140:
#line 2640 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1141:
#line 2641 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1142:
#line 2642 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1143:
#line 2643 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1144:
#line 2644 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1145:
#line 2645 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1146:
#line 2651 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1147:
#line 2652 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1148:
#line 2653 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1149:
#line 2654 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1150:
#line 2658 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1151:
#line 2659 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1152:
#line 2661 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1153:
#line 2666 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1155:
#line 2668 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1157:
#line 2670 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1158:
#line 2673 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1159:
#line 2675 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1160:
#line 2680 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1161:
#line 2683 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1162:
#line 2684 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1163:
#line 2685 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1164:
#line 2688 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1165:
#line 2690 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1166:
#line 2694 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1167:
#line 2695 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1168:
#line 2699 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1169:
#line 2700 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1170:
#line 2701 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1171:
#line 2702 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1172:
#line 2708 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1173:
#line 2709 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1174:
#line 2715 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1175:
#line 2716 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1176:
#line 2717 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1177:
#line 2718 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1180:
#line 2726 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1181:
#line 2728 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1182:
#line 2729 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1183:
#line 2730 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1184:
#line 2734 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1185:
#line 2735 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1186:
#line 2736 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1187:
#line 2737 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1188:
#line 2740 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1189:
#line 2741 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1190:
#line 2744 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1191:
#line 2745 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1192:
#line 2746 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1193:
#line 2749 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1194:
#line 2750 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1195:
#line 2751 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1196:
#line 2754 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1197:
#line 2755 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1198:
#line 2756 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1199:
#line 2759 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1200:
#line 2760 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1201:
#line 2761 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1202:
#line 2762 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1203:
#line 2765 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1204:
#line 2766 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1206:
#line 2768 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1207:
#line 2769 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1208:
#line 2772 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1209:
#line 2773 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1210:
#line 2774 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1216:
#line 2782 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1217:
#line 2785 "frame/parser.Y"
    {fr->savePixelMaskFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1218:
#line 2786 "frame/parser.Y"
    {fr->savePixelMaskChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1219:
#line 2787 "frame/parser.Y"
    {fr->savePixelMaskSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1220:
#line 2791 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1221:
#line 2793 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1222:
#line 2795 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1239:
#line 2816 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1240:
#line 2817 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1241:
#line 2818 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1242:
#line 2821 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1243:
#line 2822 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1244:
#line 2823 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1245:
#line 2826 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1246:
#line 2827 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1247:
#line 2828 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1248:
#line 2831 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1249:
#line 2832 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1250:
#line 2833 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1252:
#line 2837 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1253:
#line 2838 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1254:
#line 2839 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1255:
#line 2842 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1256:
#line 2843 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1257:
#line 2844 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1258:
#line 2848 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1259:
#line 2850 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1260:
#line 2852 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1261:
#line 2855 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1262:
#line 2856 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1263:
#line 2857 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1264:
#line 2860 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1265:
#line 2861 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1266:
#line 2862 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1267:
#line 2866 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1268:
#line 2868 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1269:
#line 2870 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1270:
#line 2873 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1271:
#line 2874 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1272:
#line 2875 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1273:
#line 2878 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1274:
#line 2879 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1275:
#line 2880 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1276:
#line 2884 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1277:
#line 2886 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1278:
#line 2888 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1279:
#line 2891 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1280:
#line 2892 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1281:
#line 2893 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1282:
#line 2896 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1283:
#line 2897 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1284:
#line 2898 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1285:
#line 2901 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1286:
#line 2902 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1287:
#line 2903 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1288:
#line 2907 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1289:
#line 2909 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1290:
#line 2911 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1291:
#line 2915 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1292:
#line 2919 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1293:
#line 2921 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1294:
#line 2925 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1295:
#line 2928 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1296:
#line 2929 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1297:
#line 2930 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1298:
#line 2931 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1299:
#line 2934 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1300:
#line 2936 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1301:
#line 2938 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1302:
#line 2941 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1304:
#line 2945 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1305:
#line 2946 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1306:
#line 2947 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1307:
#line 2950 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1308:
#line 2951 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1309:
#line 2955 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1311:
#line 2957 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1314:
#line 2962 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1315:
#line 2963 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1316:
#line 2964 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1317:
#line 2967 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1318:
#line 2968 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1319:
#line 2969 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1320:
#line 2972 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1321:
#line 2974 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1322:
#line 2979 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1323:
#line 2980 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1324:
#line 2983 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1325:
#line 2990 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1326:
#line 2992 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1327:
#line 2994 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1328:
#line 2999 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1330:
#line 3003 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1331:
#line 3004 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1332:
#line 3005 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1333:
#line 3007 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1334:
#line 3009 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1335:
#line 3014 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11332 "frame/parser.C"
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


#line 3018 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

