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
     POINTER = 261,
     ANGDEGREE = 262,
     ANGRADIAN = 263,
     SEXSTR = 264,
     HMSSTR = 265,
     DMSSTR = 266,
     ABOUT_ = 267,
     AIP_ = 268,
     ALLOC_ = 269,
     ALLOCGZ_ = 270,
     ALIGN_ = 271,
     ALL_ = 272,
     ALT_ = 273,
     AMPLIFIER_ = 274,
     ANALYSIS_ = 275,
     ANGLE_ = 276,
     ANNULUS_ = 277,
     APPEND_ = 278,
     ARCMIN_ = 279,
     ARCSEC_ = 280,
     ARRAY_ = 281,
     ARROW_ = 282,
     ASINH_ = 283,
     AST_ = 284,
     AUTO_ = 285,
     AUX_ = 286,
     AVERAGE_ = 287,
     AXES_ = 288,
     AZIMUTH_ = 289,
     B1950_ = 290,
     BACK_ = 291,
     BACKGROUND_ = 292,
     BASE_ = 293,
     BBOX_ = 294,
     BEGIN_ = 295,
     BG_ = 296,
     BIG_ = 297,
     BIGENDIAN_ = 298,
     BIN_ = 299,
     BITPIX_ = 300,
     BLEND_ = 301,
     BLOCK_ = 302,
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
     FACTOR_ = 375,
     FALSE_ = 376,
     FILE_ = 377,
     FILL_ = 378,
     FILTER_ = 379,
     FIT_ = 380,
     FITS_ = 381,
     FITSY_ = 382,
     FIXED_ = 383,
     FK4_ = 384,
     FK5_ = 385,
     FONT_ = 386,
     FORMAT_ = 387,
     FOOTPRINT_ = 388,
     FROM_ = 389,
     FRONT_ = 390,
     FULL_ = 391,
     FUNCTION_ = 392,
     GALACTIC_ = 393,
     GAUSSIAN_ = 394,
     GET_ = 395,
     GLOBAL_ = 396,
     GRAPHICS_ = 397,
     GRAY_ = 398,
     GRID_ = 399,
     GZ_ = 400,
     HANDLE_ = 401,
     HAS_ = 402,
     HEAD_ = 403,
     HEADER_ = 404,
     HEIGHT_ = 405,
     HIDE_ = 406,
     HIGHLITE_ = 407,
     HISTEQU_ = 408,
     HISTOGRAM_ = 409,
     HORIZONTAL_ = 410,
     ICRS_ = 411,
     ID_ = 412,
     IIS_ = 413,
     IMAGE_ = 414,
     INCLUDE_ = 415,
     INCR_ = 416,
     INFO_ = 417,
     ITERATION_ = 418,
     IRAF_ = 419,
     IRAFMIN_ = 420,
     J2000_ = 421,
     KEY_ = 422,
     KEYWORD_ = 423,
     LABEL_ = 424,
     LENGTH_ = 425,
     LEVEL_ = 426,
     LIGHTEN_ = 427,
     LITTLE_ = 428,
     LITTLEENDIAN_ = 429,
     LINE_ = 430,
     LINEAR_ = 431,
     LIST_ = 432,
     LOAD_ = 433,
     LOCAL_ = 434,
     LOG_ = 435,
     MACOSX_ = 436,
     MAGNIFIER_ = 437,
     MATCH_ = 438,
     MAP_ = 439,
     MARK_ = 440,
     MARKER_ = 441,
     MASK_ = 442,
     MESSAGE_ = 443,
     METHOD_ = 444,
     MINMAX_ = 445,
     MINOR_ = 446,
     MIP_ = 447,
     MMAP_ = 448,
     MMAPINCR_ = 449,
     MOSAIC_ = 450,
     MODE_ = 451,
     MOTION_ = 452,
     MOVE_ = 453,
     NAME_ = 454,
     NAN_ = 455,
     NATIVE_ = 456,
     NAXES_ = 457,
     NEW_ = 458,
     NEXT_ = 459,
     NO_ = 460,
     NONE_ = 461,
     NONNAN_ = 462,
     NONZERO_ = 463,
     NOW_ = 464,
     NRRD_ = 465,
     NUMBER_ = 466,
     OBJECT_ = 467,
     OFF_ = 468,
     ON_ = 469,
     ONLY_ = 470,
     OPTION_ = 471,
     ORIENT_ = 472,
     PAN_ = 473,
     PANNER_ = 474,
     PARSER_ = 475,
     PASTE_ = 476,
     PERF_ = 477,
     PHOTO_ = 478,
     PHYSICAL_ = 479,
     PIXEL_ = 480,
     PLOT2D_ = 481,
     PLOT3D_ = 482,
     POINT_ = 483,
     POINTER_ = 484,
     POLYGON_ = 485,
     POSTSCRIPT_ = 486,
     POW_ = 487,
     PRECISION_ = 488,
     PRINT_ = 489,
     PRESERVE_ = 490,
     PROJECTION_ = 491,
     PROPERTY_ = 492,
     PUBLICATION_ = 493,
     PROS_ = 494,
     QUERY_ = 495,
     RADIAL_ = 496,
     RADIUS_ = 497,
     RANGE_ = 498,
     REGION_ = 499,
     REPLACE_ = 500,
     RESAMPLE_ = 501,
     RESCAN_ = 502,
     RESET_ = 503,
     RESOLUTION_ = 504,
     RGB_ = 505,
     ROOT_ = 506,
     ROTATE_ = 507,
     RULER_ = 508,
     SAMPLE_ = 509,
     SAOIMAGE_ = 510,
     SAOTNG_ = 511,
     SAVE_ = 512,
     SCALE_ = 513,
     SCAN_ = 514,
     SCIENTIFIC_ = 515,
     SCOPE_ = 516,
     SCREEN_ = 517,
     SEGMENT_ = 518,
     SELECT_ = 519,
     SET_ = 520,
     SEXAGESIMAL_ = 521,
     SHAPE_ = 522,
     SHARED_ = 523,
     SHIFT_ = 524,
     SHMID_ = 525,
     SHOW_ = 526,
     SIGMA_ = 527,
     SINH_ = 528,
     SIZE_ = 529,
     SLICE_ = 530,
     SMMAP_ = 531,
     SMOOTH_ = 532,
     SOCKET_ = 533,
     SOCKETGZ_ = 534,
     SOURCE_ = 535,
     SQRT_ = 536,
     SQUARED_ = 537,
     SSHARED_ = 538,
     STATS_ = 539,
     STATUS_ = 540,
     SUM_ = 541,
     SYSTEM_ = 542,
     TABLE_ = 543,
     TAG_ = 544,
     TEMPLATE_ = 545,
     TEXT_ = 546,
     THREADS_ = 547,
     THREED_ = 548,
     THRESHOLD_ = 549,
     THICK_ = 550,
     TRANSPARENCY_ = 551,
     TO_ = 552,
     TOGGLE_ = 553,
     TOPHAT_ = 554,
     TRUE_ = 555,
     TYPE_ = 556,
     UNDO_ = 557,
     UNHIGHLITE_ = 558,
     UNLOAD_ = 559,
     UNSELECT_ = 560,
     UPDATE_ = 561,
     USER_ = 562,
     VALUE_ = 563,
     VAR_ = 564,
     VIEW_ = 565,
     VECTOR_ = 566,
     VERSION_ = 567,
     VERTEX_ = 568,
     VERTICAL_ = 569,
     WARP_ = 570,
     WCS_ = 571,
     WCSA_ = 572,
     WCSB_ = 573,
     WCSC_ = 574,
     WCSD_ = 575,
     WCSE_ = 576,
     WCSF_ = 577,
     WCSG_ = 578,
     WCSH_ = 579,
     WCSI_ = 580,
     WCSJ_ = 581,
     WCSK_ = 582,
     WCSL_ = 583,
     WCSM_ = 584,
     WCSN_ = 585,
     WCSO_ = 586,
     WCSP_ = 587,
     WCSQ_ = 588,
     WCSR_ = 589,
     WCSS_ = 590,
     WCST_ = 591,
     WCSU_ = 592,
     WCSV_ = 593,
     WCSW_ = 594,
     WCSX_ = 595,
     WCSY_ = 596,
     WCSZ_ = 597,
     WCS0_ = 598,
     WFPC2_ = 599,
     WIDTH_ = 600,
     WIN32_ = 601,
     XML_ = 602,
     XY_ = 603,
     YES_ = 604,
     ZERO_ = 605,
     ZMAX_ = 606,
     ZSCALE_ = 607,
     ZOOM_ = 608
   };
#endif
/* Tokens.  */
#define REAL 258
#define INT 259
#define STRING 260
#define POINTER 261
#define ANGDEGREE 262
#define ANGRADIAN 263
#define SEXSTR 264
#define HMSSTR 265
#define DMSSTR 266
#define ABOUT_ 267
#define AIP_ 268
#define ALLOC_ 269
#define ALLOCGZ_ 270
#define ALIGN_ 271
#define ALL_ 272
#define ALT_ 273
#define AMPLIFIER_ 274
#define ANALYSIS_ 275
#define ANGLE_ 276
#define ANNULUS_ 277
#define APPEND_ 278
#define ARCMIN_ 279
#define ARCSEC_ 280
#define ARRAY_ 281
#define ARROW_ 282
#define ASINH_ 283
#define AST_ 284
#define AUTO_ 285
#define AUX_ 286
#define AVERAGE_ 287
#define AXES_ 288
#define AZIMUTH_ 289
#define B1950_ 290
#define BACK_ 291
#define BACKGROUND_ 292
#define BASE_ 293
#define BBOX_ 294
#define BEGIN_ 295
#define BG_ 296
#define BIG_ 297
#define BIGENDIAN_ 298
#define BIN_ 299
#define BITPIX_ 300
#define BLEND_ 301
#define BLOCK_ 302
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
#define FACTOR_ 375
#define FALSE_ 376
#define FILE_ 377
#define FILL_ 378
#define FILTER_ 379
#define FIT_ 380
#define FITS_ 381
#define FITSY_ 382
#define FIXED_ 383
#define FK4_ 384
#define FK5_ 385
#define FONT_ 386
#define FORMAT_ 387
#define FOOTPRINT_ 388
#define FROM_ 389
#define FRONT_ 390
#define FULL_ 391
#define FUNCTION_ 392
#define GALACTIC_ 393
#define GAUSSIAN_ 394
#define GET_ 395
#define GLOBAL_ 396
#define GRAPHICS_ 397
#define GRAY_ 398
#define GRID_ 399
#define GZ_ 400
#define HANDLE_ 401
#define HAS_ 402
#define HEAD_ 403
#define HEADER_ 404
#define HEIGHT_ 405
#define HIDE_ 406
#define HIGHLITE_ 407
#define HISTEQU_ 408
#define HISTOGRAM_ 409
#define HORIZONTAL_ 410
#define ICRS_ 411
#define ID_ 412
#define IIS_ 413
#define IMAGE_ 414
#define INCLUDE_ 415
#define INCR_ 416
#define INFO_ 417
#define ITERATION_ 418
#define IRAF_ 419
#define IRAFMIN_ 420
#define J2000_ 421
#define KEY_ 422
#define KEYWORD_ 423
#define LABEL_ 424
#define LENGTH_ 425
#define LEVEL_ 426
#define LIGHTEN_ 427
#define LITTLE_ 428
#define LITTLEENDIAN_ 429
#define LINE_ 430
#define LINEAR_ 431
#define LIST_ 432
#define LOAD_ 433
#define LOCAL_ 434
#define LOG_ 435
#define MACOSX_ 436
#define MAGNIFIER_ 437
#define MATCH_ 438
#define MAP_ 439
#define MARK_ 440
#define MARKER_ 441
#define MASK_ 442
#define MESSAGE_ 443
#define METHOD_ 444
#define MINMAX_ 445
#define MINOR_ 446
#define MIP_ 447
#define MMAP_ 448
#define MMAPINCR_ 449
#define MOSAIC_ 450
#define MODE_ 451
#define MOTION_ 452
#define MOVE_ 453
#define NAME_ 454
#define NAN_ 455
#define NATIVE_ 456
#define NAXES_ 457
#define NEW_ 458
#define NEXT_ 459
#define NO_ 460
#define NONE_ 461
#define NONNAN_ 462
#define NONZERO_ 463
#define NOW_ 464
#define NRRD_ 465
#define NUMBER_ 466
#define OBJECT_ 467
#define OFF_ 468
#define ON_ 469
#define ONLY_ 470
#define OPTION_ 471
#define ORIENT_ 472
#define PAN_ 473
#define PANNER_ 474
#define PARSER_ 475
#define PASTE_ 476
#define PERF_ 477
#define PHOTO_ 478
#define PHYSICAL_ 479
#define PIXEL_ 480
#define PLOT2D_ 481
#define PLOT3D_ 482
#define POINT_ 483
#define POINTER_ 484
#define POLYGON_ 485
#define POSTSCRIPT_ 486
#define POW_ 487
#define PRECISION_ 488
#define PRINT_ 489
#define PRESERVE_ 490
#define PROJECTION_ 491
#define PROPERTY_ 492
#define PUBLICATION_ 493
#define PROS_ 494
#define QUERY_ 495
#define RADIAL_ 496
#define RADIUS_ 497
#define RANGE_ 498
#define REGION_ 499
#define REPLACE_ 500
#define RESAMPLE_ 501
#define RESCAN_ 502
#define RESET_ 503
#define RESOLUTION_ 504
#define RGB_ 505
#define ROOT_ 506
#define ROTATE_ 507
#define RULER_ 508
#define SAMPLE_ 509
#define SAOIMAGE_ 510
#define SAOTNG_ 511
#define SAVE_ 512
#define SCALE_ 513
#define SCAN_ 514
#define SCIENTIFIC_ 515
#define SCOPE_ 516
#define SCREEN_ 517
#define SEGMENT_ 518
#define SELECT_ 519
#define SET_ 520
#define SEXAGESIMAL_ 521
#define SHAPE_ 522
#define SHARED_ 523
#define SHIFT_ 524
#define SHMID_ 525
#define SHOW_ 526
#define SIGMA_ 527
#define SINH_ 528
#define SIZE_ 529
#define SLICE_ 530
#define SMMAP_ 531
#define SMOOTH_ 532
#define SOCKET_ 533
#define SOCKETGZ_ 534
#define SOURCE_ 535
#define SQRT_ 536
#define SQUARED_ 537
#define SSHARED_ 538
#define STATS_ 539
#define STATUS_ 540
#define SUM_ 541
#define SYSTEM_ 542
#define TABLE_ 543
#define TAG_ 544
#define TEMPLATE_ 545
#define TEXT_ 546
#define THREADS_ 547
#define THREED_ 548
#define THRESHOLD_ 549
#define THICK_ 550
#define TRANSPARENCY_ 551
#define TO_ 552
#define TOGGLE_ 553
#define TOPHAT_ 554
#define TRUE_ 555
#define TYPE_ 556
#define UNDO_ 557
#define UNHIGHLITE_ 558
#define UNLOAD_ 559
#define UNSELECT_ 560
#define UPDATE_ 561
#define USER_ 562
#define VALUE_ 563
#define VAR_ 564
#define VIEW_ 565
#define VECTOR_ 566
#define VERSION_ 567
#define VERTEX_ 568
#define VERTICAL_ 569
#define WARP_ 570
#define WCS_ 571
#define WCSA_ 572
#define WCSB_ 573
#define WCSC_ 574
#define WCSD_ 575
#define WCSE_ 576
#define WCSF_ 577
#define WCSG_ 578
#define WCSH_ 579
#define WCSI_ 580
#define WCSJ_ 581
#define WCSK_ 582
#define WCSL_ 583
#define WCSM_ 584
#define WCSN_ 585
#define WCSO_ 586
#define WCSP_ 587
#define WCSQ_ 588
#define WCSR_ 589
#define WCSS_ 590
#define WCST_ 591
#define WCSU_ 592
#define WCSV_ 593
#define WCSW_ 594
#define WCSX_ 595
#define WCSY_ 596
#define WCSZ_ 597
#define WCS0_ 598
#define WFPC2_ 599
#define WIDTH_ 600
#define WIN32_ 601
#define XML_ 602
#define XY_ 603
#define YES_ 604
#define ZERO_ 605
#define ZMAX_ 606
#define ZSCALE_ 607
#define ZOOM_ 608




/* Copy the first part of user declarations.  */
#line 10 "frame/parser.Y"

#define YYDEBUG 1

#include <math.h>
#include <string.h>
#include <iostream>

#include "base.h"
#include "frame3d.h"
#include "fitsimage.h"
#include "fitsmask.h"
#include "marker.h"
#include "util.h"

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
  void* ptr;
  int integer;
  double real;
  double vector[3];
  int dash[2];
}
/* Line 193 of yacc.c.  */
#line 864 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 877 "frame/parser.C"

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
#define YYFINAL  356
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5277

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  358
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  218
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1267
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2790

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   608

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
       2,   357,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   355,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   356,   354,
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
     345,   346,   347,   348,   349,   350,   351,   352,   353
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    13,    17,    20,    22,    24,
      27,    31,    34,    37,    40,    43,    46,    49,    52,    55,
      58,    61,    64,    66,    69,    72,    76,    79,    82,    85,
      88,    92,    95,    99,   102,   105,   108,   111,   114,   117,
     119,   123,   126,   129,   132,   134,   137,   140,   143,   145,
     148,   150,   153,   156,   159,   162,   164,   166,   168,   170,
     173,   176,   179,   182,   185,   188,   191,   194,   197,   200,
     202,   204,   206,   208,   210,   212,   214,   216,   218,   219,
     222,   225,   227,   229,   230,   232,   234,   236,   238,   240,
     242,   244,   247,   250,   253,   256,   258,   260,   262,   264,
     266,   268,   270,   272,   274,   276,   278,   280,   282,   284,
     286,   288,   290,   292,   294,   296,   298,   300,   302,   304,
     306,   308,   310,   312,   314,   316,   318,   320,   322,   324,
     326,   327,   329,   331,   333,   335,   337,   338,   340,   342,
     344,   346,   348,   350,   352,   354,   356,   358,   360,   362,
     364,   366,   368,   370,   372,   373,   375,   377,   379,   381,
     383,   385,   387,   388,   390,   392,   393,   395,   397,   399,
     400,   402,   404,   405,   407,   409,   410,   412,   414,   415,
     417,   419,   421,   423,   425,   427,   429,   430,   432,   434,
     436,   438,   440,   442,   444,   445,   447,   449,   450,   452,
     454,   456,   458,   460,   463,   466,   469,   472,   475,   478,
     481,   484,   486,   489,   491,   494,   496,   499,   502,   509,
     512,   517,   520,   523,   526,   530,   533,   536,   538,   541,
     543,   546,   551,   557,   560,   564,   570,   577,   579,   581,
     583,   591,   603,   612,   625,   627,   630,   633,   635,   637,
     640,   643,   646,   649,   653,   657,   660,   663,   665,   667,
     669,   671,   673,   675,   677,   680,   683,   686,   688,   692,
     695,   698,   701,   708,   719,   721,   724,   726,   733,   744,
     746,   749,   752,   755,   758,   761,   764,   778,   792,   805,
     818,   820,   821,   823,   825,   830,   837,   839,   841,   843,
     845,   847,   849,   851,   853,   855,   860,   864,   869,   870,
     877,   886,   889,   893,   897,   901,   902,   907,   912,   917,
     922,   926,   930,   932,   936,   942,   947,   952,   956,   959,
     960,   962,   964,   968,   971,   974,   977,   980,   983,   986,
     989,   992,   995,   998,  1001,  1004,  1007,  1010,  1012,  1015,
    1018,  1023,  1033,  1036,  1039,  1042,  1044,  1048,  1051,  1054,
    1056,  1059,  1068,  1071,  1073,  1076,  1078,  1081,  1083,  1088,
    1098,  1101,  1103,  1105,  1107,  1109,  1112,  1114,  1116,  1119,
    1121,  1122,  1125,  1128,  1130,  1131,  1134,  1137,  1139,  1141,
    1144,  1147,  1150,  1152,  1154,  1156,  1158,  1160,  1162,  1163,
    1165,  1168,  1170,  1175,  1181,  1182,  1185,  1187,  1193,  1196,
    1199,  1201,  1203,  1205,  1208,  1210,  1213,  1215,  1217,  1218,
    1220,  1222,  1223,  1225,  1231,  1238,  1242,  1249,  1253,  1255,
    1259,  1261,  1263,  1265,  1269,  1276,  1284,  1290,  1292,  1294,
    1299,  1305,  1307,  1311,  1312,  1314,  1317,  1319,  1324,  1326,
    1329,  1331,  1334,  1338,  1341,  1343,  1346,  1348,  1353,  1356,
    1358,  1360,  1364,  1366,  1369,  1373,  1376,  1377,  1379,  1381,
    1386,  1389,  1390,  1392,  1396,  1401,  1406,  1407,  1409,  1411,
    1413,  1415,  1417,  1419,  1421,  1423,  1425,  1427,  1429,  1431,
    1433,  1435,  1437,  1440,  1442,  1445,  1447,  1450,  1453,  1456,
    1459,  1461,  1463,  1465,  1466,  1468,  1469,  1471,  1472,  1474,
    1475,  1477,  1478,  1481,  1484,  1485,  1487,  1490,  1492,  1499,
    1505,  1507,  1509,  1511,  1514,  1517,  1519,  1521,  1523,  1525,
    1528,  1530,  1532,  1534,  1537,  1539,  1541,  1543,  1546,  1549,
    1552,  1553,  1555,  1556,  1558,  1560,  1562,  1564,  1566,  1568,
    1570,  1572,  1575,  1578,  1581,  1583,  1586,  1590,  1592,  1595,
    1598,  1603,  1610,  1612,  1623,  1625,  1628,  1632,  1636,  1639,
    1642,  1645,  1648,  1651,  1654,  1657,  1662,  1667,  1672,  1676,
    1680,  1686,  1691,  1696,  1701,  1705,  1709,  1713,  1717,  1720,
    1723,  1728,  1732,  1736,  1740,  1744,  1749,  1754,  1759,  1764,
    1770,  1775,  1782,  1790,  1795,  1800,  1806,  1809,  1813,  1817,
    1821,  1824,  1828,  1832,  1836,  1840,  1845,  1849,  1855,  1862,
    1866,  1870,  1875,  1879,  1883,  1887,  1891,  1895,  1901,  1905,
    1909,  1914,  1918,  1921,  1924,  1926,  1930,  1935,  1940,  1945,
    1950,  1955,  1962,  1967,  1972,  1978,  1983,  1988,  1993,  1998,
    2004,  2009,  2016,  2024,  2029,  2034,  2040,  2046,  2052,  2058,
    2064,  2070,  2078,  2084,  2090,  2097,  2102,  2107,  2112,  2117,
    2122,  2129,  2134,  2139,  2145,  2151,  2157,  2163,  2169,  2176,
    2182,  2190,  2199,  2205,  2211,  2218,  2222,  2226,  2230,  2234,
    2239,  2243,  2249,  2256,  2260,  2264,  2269,  2273,  2277,  2281,
    2285,  2289,  2295,  2299,  2303,  2308,  2313,  2318,  2322,  2328,
    2333,  2338,  2341,  2345,  2352,  2359,  2361,  2363,  2365,  2368,
    2371,  2374,  2378,  2382,  2385,  2398,  2401,  2404,  2406,  2410,
    2415,  2418,  2419,  2423,  2425,  2427,  2430,  2433,  2436,  2439,
    2442,  2447,  2452,  2457,  2461,  2466,  2472,  2481,  2488,  2493,
    2503,  2510,  2518,  2529,  2541,  2554,  2564,  2570,  2575,  2582,
    2586,  2592,  2598,  2605,  2611,  2616,  2626,  2637,  2649,  2659,
    2666,  2673,  2680,  2687,  2694,  2701,  2708,  2715,  2722,  2730,
    2738,  2741,  2746,  2751,  2756,  2761,  2767,  2772,  2777,  2783,
    2789,  2793,  2798,  2803,  2808,  2813,  2821,  2831,  2838,  2849,
    2861,  2874,  2884,  2888,  2891,  2895,  2901,  2909,  2914,  2918,
    2922,  2929,  2937,  2945,  2950,  2955,  2960,  2970,  2975,  2979,
    2984,  2992,  3000,  3003,  3007,  3011,  3015,  3020,  3023,  3026,
    3031,  3042,  3046,  3048,  3052,  3055,  3058,  3061,  3064,  3068,
    3074,  3079,  3085,  3088,  3096,  3100,  3103,  3106,  3110,  3113,
    3116,  3119,  3123,  3126,  3130,  3135,  3139,  3143,  3150,  3155,
    3158,  3162,  3165,  3168,  3173,  3177,  3181,  3184,  3188,  3190,
    3193,  3195,  3198,  3201,  3204,  3206,  3208,  3210,  3212,  3215,
    3217,  3220,  3223,  3225,  3228,  3231,  3233,  3236,  3238,  3240,
    3242,  3244,  3246,  3248,  3250,  3252,  3253,  3255,  3258,  3261,
    3264,  3268,  3274,  3282,  3290,  3297,  3304,  3311,  3318,  3324,
    3331,  3338,  3345,  3352,  3359,  3366,  3373,  3385,  3393,  3401,
    3409,  3419,  3429,  3440,  3453,  3466,  3469,  3472,  3476,  3481,
    3486,  3491,  3494,  3499,  3504,  3506,  3508,  3510,  3512,  3514,
    3516,  3518,  3520,  3523,  3525,  3527,  3529,  3533,  3537,  3546,
    3553,  3564,  3572,  3580,  3586,  3589,  3592,  3596,  3601,  3607,
    3611,  3617,  3623,  3627,  3632,  3638,  3644,  3650,  3654,  3660,
    3663,  3667,  3671,  3677,  3681,  3685,  3689,  3694,  3700,  3706,
    3710,  3716,  3722,  3726,  3731,  3737,  3743,  3746,  3749,  3753,
    3759,  3766,  3773,  3777,  3781,  3785,  3792,  3798,  3804,  3807,
    3811,  3815,  3821,  3828,  3832,  3835,  3838,  3842,  3845,  3849,
    3852,  3856,  3862,  3869,  3872,  3875,  3878,  3880,  3885,  3890,
    3892,  3895,  3898,  3901,  3904,  3907,  3910,  3913,  3917,  3920,
    3924,  3927,  3931,  3933,  3935,  3937,  3939,  3941,  3942,  3945,
    3946,  3949,  3950,  3952,  3953,  3954,  3956,  3958,  3960,  3962,
    3964,  3972,  3981,  3984,  3989,  3992,  3997,  4004,  4007,  4009,
    4011,  4015,  4019,  4021,  4026,  4029,  4031,  4035,  4039,  4044,
    4048,  4052,  4056,  4058,  4060,  4062,  4064,  4066,  4068,  4070,
    4072,  4074,  4076,  4078,  4080,  4082,  4084,  4087,  4088,  4089,
    4092,  4094,  4098,  4100,  4104,  4106,  4109,  4112,  4114,  4118,
    4119,  4120,  4123,  4126,  4128,  4132,  4138,  4140,  4143,  4146,
    4150,  4153,  4156,  4159,  4162,  4164,  4166,  4168,  4170,  4175,
    4178,  4182,  4186,  4189,  4193,  4196,  4199,  4202,  4206,  4210,
    4214,  4217,  4221,  4223,  4227,  4231,  4233,  4236,  4239,  4242,
    4245,  4255,  4262,  4264,  4266,  4268,  4270,  4273,  4276,  4280,
    4284,  4286,  4289,  4293,  4297,  4299,  4302,  4304,  4306,  4308,
    4310,  4312,  4315,  4318,  4323,  4325,  4328,  4331,  4334,  4338,
    4340,  4342,  4344,  4347,  4350,  4353,  4356,  4359,  4363,  4367,
    4371,  4375,  4379,  4383,  4387,  4389,  4392,  4395,  4398,  4402,
    4405,  4409,  4413,  4416,  4419,  4422,  4425,  4428,  4431,  4434,
    4437,  4440,  4443,  4446,  4449,  4452,  4455,  4459,  4463,  4467,
    4470,  4473,  4476,  4479,  4482,  4485,  4488,  4491,  4494,  4497,
    4500,  4503,  4507,  4511,  4515,  4520,  4527,  4530,  4532,  4534,
    4536,  4538,  4540,  4541,  4547,  4549,  4556,  4560,  4562,  4565,
    4568,  4571,  4575,  4579,  4582,  4585,  4588,  4591,  4594,  4597,
    4601,  4604,  4607,  4611,  4613,  4617,  4622,  4624,  4627,  4633,
    4640,  4647,  4650,  4652,  4655,  4658,  4664,  4671
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     359,     0,    -1,    98,   361,    -1,    44,   393,    -1,    41,
      67,     5,    -1,    41,    67,   143,    -1,    47,   398,    -1,
      60,    -1,    65,    -1,    66,   400,    -1,    68,   289,     5,
      -1,    69,   405,    -1,    70,   407,    -1,    78,   408,    -1,
      85,   417,    -1,    87,   419,    -1,    88,   420,    -1,    97,
     362,    -1,   127,   422,    -1,   140,   423,    -1,   144,   465,
      -1,   147,   468,    -1,   151,    -1,   152,   362,    -1,   158,
     474,    -1,   164,    16,     4,    -1,   178,   477,    -1,   181,
     495,    -1,   182,   496,    -1,   183,   497,    -1,   186,   513,
     498,    -1,   187,   532,    -1,   200,    67,     5,    -1,   217,
     533,    -1,   218,   534,    -1,   219,   537,    -1,   240,    89,
      -1,   233,   539,    -1,   231,   538,    -1,   248,    -1,   244,
     513,   541,    -1,   250,   546,    -1,   252,   547,    -1,   257,
     549,    -1,   271,    -1,   277,   564,    -1,   292,     4,    -1,
     293,   388,    -1,   304,    -1,   306,   566,    -1,   312,    -1,
     315,   568,    -1,   316,   569,    -1,   346,   573,    -1,   353,
     574,    -1,     3,    -1,     4,    -1,   214,    -1,   213,    -1,
     195,   362,    -1,   220,   362,    -1,   222,   362,    -1,   316,
     362,    -1,    44,   362,    -1,    47,   362,    -1,    77,   362,
      -1,    85,   362,    -1,   145,   362,    -1,   250,   362,    -1,
       4,    -1,   349,    -1,   354,    -1,   214,    -1,   300,    -1,
     205,    -1,   355,    -1,   213,    -1,   121,    -1,    -1,   251,
      38,    -1,   136,    38,    -1,   251,    -1,   136,    -1,    -1,
     365,    -1,   360,    -1,     7,    -1,     8,    -1,     9,    -1,
      10,    -1,    11,    -1,   366,   366,    -1,   367,   368,    -1,
     368,   368,    -1,   360,   360,    -1,   159,    -1,   224,    -1,
     103,    -1,    19,    -1,   371,    -1,   316,    -1,   317,    -1,
     318,    -1,   319,    -1,   320,    -1,   321,    -1,   322,    -1,
     323,    -1,   324,    -1,   325,    -1,   326,    -1,   327,    -1,
     328,    -1,   329,    -1,   330,    -1,   331,    -1,   332,    -1,
     333,    -1,   334,    -1,   335,    -1,   336,    -1,   337,    -1,
     338,    -1,   339,    -1,   340,    -1,   341,    -1,   342,    -1,
     343,    -1,    57,    -1,   219,    -1,    -1,   350,    -1,   208,
      -1,   200,    -1,   207,    -1,   243,    -1,    -1,   280,    -1,
     262,    -1,    92,    -1,   172,    -1,   176,    -1,   180,    -1,
     232,    -1,   281,    -1,   282,    -1,    28,    -1,   273,    -1,
     153,    -1,    30,    -1,   259,    -1,   254,    -1,    96,    -1,
     165,    -1,    -1,   129,    -1,    35,    -1,   130,    -1,   166,
      -1,   156,    -1,   138,    -1,   108,    -1,    -1,    99,    -1,
     266,    -1,    -1,    99,    -1,    24,    -1,    25,    -1,    -1,
     270,    -1,   167,    -1,    -1,    17,    -1,   161,    -1,    -1,
     159,    -1,   187,    -1,    -1,    63,    -1,    49,    -1,   104,
      -1,    86,    -1,   356,    -1,    27,    -1,    52,    -1,    -1,
       4,    -1,    83,    -1,   154,    -1,   226,    -1,   227,    -1,
     241,    -1,   284,    -1,    -1,    32,    -1,   286,    -1,    -1,
     201,    -1,    42,    -1,    43,    -1,   173,    -1,   174,    -1,
     310,   392,    -1,    48,   389,    -1,    75,   390,    -1,   152,
     391,    -1,   189,   544,    -1,    37,   545,    -1,   258,   360,
      -1,   294,   360,    -1,   362,    -1,    67,     5,    -1,   362,
      -1,    67,     5,    -1,   362,    -1,    67,     5,    -1,   360,
     360,    -1,   228,   360,   360,   360,   360,   360,    -1,    12,
     394,    -1,    72,     5,     5,     5,    -1,   102,     4,    -1,
     120,   395,    -1,   137,   396,    -1,    54,   274,     4,    -1,
     297,   397,    -1,   124,     5,    -1,    60,    -1,   360,   360,
      -1,   360,    -1,   360,   360,    -1,   360,    12,   360,   360,
      -1,   360,   360,    12,   360,   360,    -1,   297,   360,    -1,
     297,   360,   360,    -1,   297,   360,    12,   360,   360,    -1,
     297,   360,   360,    12,   360,   360,    -1,    32,    -1,   286,
      -1,   125,    -1,   360,   360,    12,    60,     5,     5,     5,
      -1,   360,   360,     4,   360,   360,    12,    60,     5,     5,
       5,     5,    -1,   360,   360,    12,   360,   360,     5,     5,
       5,    -1,   360,   360,     4,   360,   360,    12,   360,   360,
       5,     5,     5,     5,    -1,   360,    -1,   360,   360,    -1,
     297,   399,    -1,   125,    -1,   360,    -1,   360,   360,    -1,
     261,   401,    -1,   196,   402,    -1,   190,   403,    -1,   307,
     360,   360,    -1,   307,   200,   200,    -1,   352,   404,    -1,
     235,   362,    -1,   141,    -1,   179,    -1,   360,    -1,   190,
      -1,   352,    -1,   351,    -1,   307,    -1,     4,   376,    -1,
     196,   376,    -1,   254,     4,    -1,   247,    -1,   360,     4,
       4,    -1,    79,   360,    -1,   254,     4,    -1,   175,     4,
      -1,     4,   360,   360,     4,     6,     4,    -1,   250,   360,
     360,   360,   360,   360,   360,     4,     6,     4,    -1,    40,
      -1,   197,   406,    -1,   113,    -1,     4,   360,   360,     4,
       6,     4,    -1,   250,   360,   360,   360,   360,   360,   360,
       4,     6,     4,    -1,   375,    -1,   180,   360,    -1,    84,
     409,    -1,   101,   410,    -1,   178,   411,    -1,   221,   415,
      -1,   257,   416,    -1,     5,     4,     4,   414,     4,     4,
     375,   360,   412,   413,   360,   360,     5,    -1,     5,     4,
       4,   414,     4,     4,   375,   360,   360,   413,   360,   360,
       5,    -1,     5,     4,     4,   414,     4,     4,   375,   360,
     412,   360,   360,     5,    -1,     5,     4,     4,   414,     4,
       4,   375,   360,   360,   360,   360,     5,    -1,   230,    -1,
      -1,    31,    -1,     5,    -1,     5,     5,     4,   362,    -1,
       5,     4,   362,     5,   370,   377,    -1,   190,    -1,   352,
      -1,   351,    -1,   307,    -1,   141,    -1,   179,    -1,   277,
      -1,    47,    -1,     5,    -1,     5,     5,     4,   362,    -1,
       5,   370,   377,    -1,    31,     5,   370,   377,    -1,    -1,
     360,   360,   360,   360,   370,   377,    -1,    60,   369,   370,
     377,   360,   360,   370,   379,    -1,   293,   418,    -1,    40,
     360,   360,    -1,   197,   360,   360,    -1,   113,   360,   360,
      -1,    -1,   360,   360,   370,   377,    -1,    40,   360,   360,
       4,    -1,   197,   360,   360,     4,    -1,   113,   360,   360,
       4,    -1,   372,   360,   360,    -1,   370,   377,   369,    -1,
     362,    -1,   315,   360,   360,    -1,    40,   197,   372,   360,
     360,    -1,   197,   372,   360,   360,    -1,    40,   197,   370,
     369,    -1,   197,   370,   369,    -1,    33,     4,    -1,    -1,
      32,    -1,   286,    -1,   147,   119,     5,    -1,    41,    67,
      -1,    44,   424,    -1,    47,   426,    -1,    66,   427,    -1,
      69,   431,    -1,    68,   430,    -1,    70,   433,    -1,    78,
     435,    -1,    80,   438,    -1,    85,   439,    -1,    87,   440,
      -1,    89,   442,    -1,    88,   441,    -1,    95,   443,    -1,
      97,    -1,   126,   447,    -1,   144,   453,    -1,   154,     5,
       5,     4,    -1,   155,    90,     5,     5,   360,   360,   372,
       4,   421,    -1,   158,   445,    -1,   162,   444,    -1,   164,
      16,    -1,   190,    -1,   186,   513,   507,    -1,   187,   454,
      -1,   200,    67,    -1,   217,    -1,   218,   455,    -1,   225,
     288,   372,   360,   360,     4,     4,     5,    -1,   250,   456,
      -1,   252,    -1,   277,   457,    -1,   292,    -1,   293,   458,
      -1,   301,    -1,   308,   372,   360,   360,    -1,   314,    90,
       5,     5,   360,   360,   372,     4,   421,    -1,   316,   463,
      -1,   353,    -1,   102,    -1,   120,    -1,   137,    -1,    54,
     274,    -1,    89,    -1,   124,    -1,    72,   425,    -1,   177,
      -1,    -1,   190,     5,    -1,   105,     5,    -1,   120,    -1,
      -1,   412,   413,    -1,   360,   413,    -1,   261,    -1,   196,
      -1,   190,   428,    -1,   307,   171,    -1,   352,   429,    -1,
     235,    -1,   196,    -1,   254,    -1,    79,    -1,   254,    -1,
     175,    -1,    -1,   289,    -1,   171,   432,    -1,     4,    -1,
       4,   372,   360,   360,    -1,     4,   360,   360,   375,   360,
      -1,    -1,   171,   434,    -1,   180,    -1,     4,   360,   360,
     375,   360,    -1,   370,   377,    -1,    66,   436,    -1,    67,
      -1,    93,    -1,   171,    -1,   211,   171,    -1,   189,    -1,
      70,   437,    -1,   277,    -1,   345,    -1,    -1,   196,    -1,
     261,    -1,    -1,   180,    -1,   360,   360,   370,   377,   378,
      -1,   372,   360,   360,   370,   377,   378,    -1,   370,   377,
     378,    -1,    60,   370,   377,   378,   370,   379,    -1,   293,
     370,   377,    -1,   372,    -1,   370,   377,   378,    -1,   285,
      -1,    33,    -1,   372,    -1,   370,   377,   378,    -1,   370,
     377,   369,   360,   360,     5,    -1,     4,   370,   377,   369,
     360,   360,     5,    -1,   372,   360,   360,     4,     4,    -1,
       5,    -1,    66,    -1,   372,   360,   360,     5,    -1,     6,
       4,     4,     4,     4,    -1,    89,    -1,   122,   199,   446,
      -1,    -1,     4,    -1,   360,   360,    -1,   202,    -1,    60,
     370,   377,   378,    -1,    82,    -1,   102,   450,    -1,    45,
      -1,   119,   448,    -1,   122,   199,   451,    -1,   149,   449,
      -1,   150,    -1,   212,   199,    -1,   274,    -1,   274,   370,
     377,   379,    -1,   275,   452,    -1,   345,    -1,     4,    -1,
     372,   360,   360,    -1,     4,    -1,   168,     5,    -1,     4,
     168,     5,    -1,   316,     4,    -1,    -1,     4,    -1,   363,
      -1,   363,   372,   360,   360,    -1,   363,     4,    -1,    -1,
       4,    -1,   134,   159,   370,    -1,   134,   159,     4,   370,
      -1,   297,   159,   360,   370,    -1,    -1,   216,    -1,   309,
      -1,    67,    -1,   185,    -1,   243,    -1,   287,    -1,   296,
      -1,    82,    -1,    46,    -1,   235,    -1,    62,    -1,   287,
      -1,   310,    -1,   137,    -1,   242,    -1,   242,   191,    -1,
     272,    -1,   272,   191,    -1,    21,    -1,   310,   462,    -1,
      48,   459,    -1,    75,   460,    -1,   152,   461,    -1,   189,
      -1,    37,    -1,   258,    -1,    -1,    67,    -1,    -1,    67,
      -1,    -1,    67,    -1,    -1,   228,    -1,    -1,    16,   464,
      -1,   199,   371,    -1,    -1,   229,    -1,    84,   466,    -1,
     101,    -1,   370,   377,   378,   467,     5,     5,    -1,   370,
     377,   378,   467,     5,    -1,    20,    -1,   238,    -1,    19,
      -1,    44,   469,    -1,    78,   470,    -1,    85,    -1,    96,
      -1,    97,    -1,   103,    -1,   126,   471,    -1,   144,    -1,
     158,    -1,   165,    -1,   186,   472,    -1,   224,    -1,   159,
      -1,   277,    -1,   287,   370,    -1,   316,   473,    -1,    73,
       5,    -1,    -1,    31,    -1,    -1,    44,    -1,    88,    -1,
     195,    -1,   152,    -1,   264,    -1,   221,    -1,   302,    -1,
     370,    -1,    59,   370,    -1,   117,   370,    -1,   176,   370,
      -1,    18,    -1,   293,   370,    -1,   203,     4,     4,    -1,
     118,    -1,   188,     5,    -1,    89,   476,    -1,   265,   122,
     199,   475,    -1,   265,     6,     4,     4,     4,     4,    -1,
     306,    -1,   316,   360,   360,   360,   360,   360,   360,   360,
     360,     4,    -1,     5,    -1,     5,     4,    -1,     4,     4,
      57,    -1,     4,     4,   370,    -1,   196,   362,    -1,    26,
     478,    -1,   114,   480,    -1,   126,   481,    -1,   161,   494,
      -1,   210,   492,    -1,   223,   493,    -1,     5,    14,     5,
     382,    -1,     5,    15,     5,   382,    -1,     5,    62,     5,
     382,    -1,     5,   193,   382,    -1,     5,   194,   382,    -1,
       5,   268,   380,     4,   382,    -1,     5,   278,     4,   382,
      -1,     5,   279,     4,   382,    -1,     5,   309,     5,   382,
      -1,   250,    88,   479,    -1,     5,    14,     5,    -1,     5,
      15,     5,    -1,     5,    62,     5,    -1,     5,   193,    -1,
       5,   194,    -1,     5,   268,   380,     4,    -1,     5,   278,
       4,    -1,     5,   279,     4,    -1,     5,   309,     5,    -1,
       5,     5,   276,    -1,     5,    14,     5,   382,    -1,     5,
      15,     5,   382,    -1,     5,    62,     5,   382,    -1,     5,
     193,   381,   382,    -1,     5,     5,   276,   381,   382,    -1,
       5,   194,   381,   382,    -1,     5,   268,   380,     4,   381,
     382,    -1,     5,   283,   380,     4,     4,   381,   382,    -1,
       5,   278,     4,   382,    -1,     5,   279,     4,   382,    -1,
       5,   309,     5,   381,   382,    -1,   275,   482,    -1,   119,
      88,   483,    -1,   250,   159,   491,    -1,   250,    88,   490,
      -1,   195,   484,    -1,     5,    14,     5,    -1,     5,    15,
       5,    -1,     5,    62,     5,    -1,     5,   193,   381,    -1,
       5,     5,   276,   381,    -1,     5,   194,   381,    -1,     5,
     268,   380,     4,   381,    -1,     5,   283,   380,     4,     4,
     381,    -1,     5,   278,     4,    -1,     5,   279,     4,    -1,
       5,   309,     5,   381,    -1,     5,    14,     5,    -1,     5,
      15,     5,    -1,     5,    62,     5,    -1,     5,   193,   381,
      -1,     5,   194,   381,    -1,     5,   268,   380,     4,   381,
      -1,     5,   278,     4,    -1,     5,   279,     4,    -1,     5,
     309,     5,   381,    -1,   159,   164,   485,    -1,   164,   486,
      -1,   159,   487,    -1,   489,    -1,   159,   344,   488,    -1,
       5,    14,     5,   382,    -1,     5,    15,     5,   382,    -1,
       5,    62,     5,   382,    -1,     5,   193,   381,   382,    -1,
       5,   194,   381,   382,    -1,     5,   268,   380,     4,   381,
     382,    -1,     5,   278,     4,   382,    -1,     5,   279,     4,
     382,    -1,     5,   309,     5,   381,   382,    -1,     5,    14,
       5,   382,    -1,     5,    15,     5,   382,    -1,     5,    62,
       5,   382,    -1,     5,   193,   381,   382,    -1,     5,     5,
     276,   381,   382,    -1,     5,   194,   381,   382,    -1,     5,
     268,   380,     4,   381,   382,    -1,     5,   283,   380,     4,
       4,   381,   382,    -1,     5,   278,     4,   382,    -1,     5,
     279,     4,   382,    -1,     5,   309,     5,   381,   382,    -1,
     371,     5,    14,     5,   382,    -1,   371,     5,    15,     5,
     382,    -1,   371,     5,    62,     5,   382,    -1,   371,     5,
     193,   381,   382,    -1,   371,     5,   194,   381,   382,    -1,
     371,     5,   268,   380,     4,   381,   382,    -1,   371,     5,
     278,     4,   382,    -1,   371,     5,   279,     4,   382,    -1,
     371,     5,   309,     5,   381,   382,    -1,     5,    14,     5,
     382,    -1,     5,    15,     5,   382,    -1,     5,    62,     5,
     382,    -1,     5,   193,   381,   382,    -1,     5,   194,   381,
     382,    -1,     5,   268,   380,     4,   381,   382,    -1,     5,
     278,     4,   382,    -1,     5,   279,     4,   382,    -1,     5,
     309,     5,   381,   382,    -1,   371,     5,    14,     5,   382,
      -1,   371,     5,    15,     5,   382,    -1,   371,     5,    62,
       5,   382,    -1,   371,     5,   193,   381,   382,    -1,   371,
       5,     5,   276,   381,   382,    -1,   371,     5,   194,   381,
     382,    -1,   371,     5,   268,   380,     4,   381,   382,    -1,
     371,     5,   283,   380,     4,     4,   381,   382,    -1,   371,
       5,   278,     4,   382,    -1,   371,     5,   279,     4,   382,
      -1,   371,     5,   309,     5,   381,   382,    -1,     5,    14,
       5,    -1,     5,    15,     5,    -1,     5,    62,     5,    -1,
       5,   193,   381,    -1,     5,     5,   276,   381,    -1,     5,
     194,   381,    -1,     5,   268,   380,     4,   381,    -1,     5,
     283,   380,     4,     4,   381,    -1,     5,   278,     4,    -1,
       5,   279,     4,    -1,     5,   309,     5,   381,    -1,     5,
      14,     5,    -1,     5,    15,     5,    -1,     5,    62,     5,
      -1,     5,   193,   381,    -1,     5,   194,   381,    -1,     5,
     268,   380,     4,   381,    -1,     5,   278,     4,    -1,     5,
     279,     4,    -1,     5,   309,     5,   381,    -1,     5,    14,
       5,   382,    -1,     5,    62,     5,   382,    -1,     5,   193,
     382,    -1,     5,   268,   380,     4,   382,    -1,     5,   278,
       4,   382,    -1,     5,   309,     5,   382,    -1,     5,     5,
      -1,   275,     5,     5,    -1,    95,     4,     4,     4,     4,
       4,    -1,   190,     4,     4,     4,     4,     4,    -1,   113,
      -1,   234,    -1,   362,    -1,   142,   362,    -1,    89,   362,
      -1,    67,     5,    -1,     5,     4,     4,    -1,   306,   360,
     360,    -1,   353,   360,    -1,     5,     5,   371,   377,     5,
       5,   371,   377,   360,   371,   379,     5,    -1,    61,   501,
      -1,    67,     5,    -1,    81,    -1,    74,   506,     5,    -1,
      74,   506,   309,     5,    -1,    76,   101,    -1,    -1,    84,
     499,   502,    -1,    90,    -1,   101,    -1,   101,    17,    -1,
     107,   505,    -1,   116,     4,    -1,   131,     5,    -1,   152,
      17,    -1,   152,   215,   360,   360,    -1,   152,   298,   360,
     360,    -1,     4,    20,   385,   362,    -1,     4,    21,   365,
      -1,     4,    21,   365,   372,    -1,     4,    21,   365,   370,
     377,    -1,     4,    22,   242,   360,   360,     4,   370,   379,
      -1,     4,    22,   242,     5,   370,   379,    -1,     4,    49,
     123,   362,    -1,     4,    50,   242,   360,   360,   360,     4,
     370,   379,    -1,     4,    50,   242,     5,   370,   379,    -1,
       4,    49,   242,   360,   360,   370,   379,    -1,     4,    53,
     107,   365,   365,     4,   360,   360,   360,     4,    -1,     4,
      53,   107,   365,   365,     4,   360,   360,   360,     4,   372,
      -1,     4,    53,   107,   365,   365,     4,   360,   360,   360,
       4,   370,   377,    -1,     4,    53,   107,     5,     5,   370,
     377,   370,   379,    -1,     4,    56,   500,     5,     5,    -1,
       4,    63,   123,   362,    -1,     4,    63,   242,   360,   370,
     379,    -1,     4,    67,     5,    -1,     4,    75,    27,   362,
     362,    -1,     4,    75,   169,     5,     5,    -1,     4,    75,
     242,   360,   370,   379,    -1,     4,    75,   287,   370,   377,
      -1,     4,    76,   141,   362,    -1,     4,    83,   107,   365,
     365,     4,   360,   360,     4,    -1,     4,    83,   107,   365,
     365,     4,   360,   360,     4,   372,    -1,     4,    83,   107,
     365,   365,     4,   360,   360,     4,   370,   377,    -1,     4,
      83,   107,     5,     5,   370,   377,   370,   379,    -1,     4,
      84,    22,   242,   360,   360,    -1,     4,    84,    50,   242,
     360,   360,    -1,     4,    84,    53,    21,   360,   360,    -1,
       4,    84,    53,   242,   360,   360,    -1,     4,    84,   112,
     242,   360,   360,    -1,     4,    84,   115,    21,   360,   360,
      -1,     4,    84,   115,   242,   360,   360,    -1,     4,    84,
      83,    21,   360,   360,    -1,     4,    84,    83,   242,   360,
     360,    -1,     4,    84,   230,   313,     4,   360,   360,    -1,
       4,    84,   263,   313,     4,   360,   360,    -1,     4,   101,
      -1,     4,   101,    22,     4,    -1,     4,   101,    50,     4,
      -1,     4,   101,    53,     4,    -1,     4,   101,   112,     4,
      -1,     4,   101,    56,   500,     5,    -1,     4,   101,   115,
       4,    -1,     4,   101,    83,     4,    -1,     4,   101,   230,
     313,     4,    -1,     4,   101,   263,   313,     4,    -1,     4,
     101,   289,    -1,     4,   101,   289,     5,    -1,     4,   101,
     289,     4,    -1,     4,   107,    40,     4,    -1,     4,   111,
     123,   362,    -1,     4,   111,   242,   360,   360,   370,   379,
      -1,     4,   112,   242,   360,   360,   360,     4,   370,   379,
      -1,     4,   112,   242,     5,   370,   379,    -1,     4,   115,
     107,   365,   365,     4,   360,   360,   360,     4,    -1,     4,
     115,   107,   365,   365,     4,   360,   360,   360,     4,   372,
      -1,     4,   115,   107,   365,   365,     4,   360,   360,   360,
       4,   370,   377,    -1,     4,   115,   107,     5,     5,   370,
     377,   370,   379,    -1,     4,   131,     5,    -1,     4,   152,
      -1,     4,   152,   215,    -1,     4,   175,    27,   362,   362,
      -1,     4,   175,   228,   370,   377,   369,   369,    -1,     4,
     198,   360,   360,    -1,     4,   198,   135,    -1,     4,   198,
      36,    -1,     4,   198,   297,   370,   377,   369,    -1,     4,
     230,   248,   360,   360,   370,   379,    -1,     4,   263,   248,
     360,   360,   370,   379,    -1,     4,   228,   267,   383,    -1,
       4,   228,   274,     4,    -1,     4,   230,   123,   362,    -1,
       4,   236,   370,   377,   369,   369,   360,   370,   379,    -1,
       4,   237,   519,   362,    -1,     4,   252,    40,    -1,     4,
     253,   132,     5,    -1,     4,   253,   228,   370,   377,   369,
     369,    -1,     4,   253,   287,   370,   377,   370,   379,    -1,
       4,   264,    -1,     4,   264,   215,    -1,     4,   289,     5,
      -1,     4,   291,     5,    -1,     4,   291,   252,   362,    -1,
       4,   303,    -1,     4,   305,    -1,     4,   311,    27,   362,
      -1,     4,   311,   228,   370,   377,   369,   370,   379,   360,
     365,    -1,     4,   345,     4,    -1,   167,    -1,   167,   360,
     360,    -1,   177,   514,    -1,   178,   515,    -1,   198,   516,
      -1,   235,   362,    -1,   237,   519,   362,    -1,   237,   519,
     362,   360,   360,    -1,   252,    40,   360,   360,    -1,   252,
     197,   360,   360,     4,    -1,   252,   113,    -1,   257,     5,
     506,   370,   377,   378,   362,    -1,   257,   290,     5,    -1,
     264,   523,    -1,   271,   524,    -1,     5,    67,     5,    -1,
       5,    81,    -1,     5,   101,    -1,     5,    90,    -1,     5,
     131,     5,    -1,     5,   152,    -1,     5,   152,   215,    -1,
       5,   198,   360,   360,    -1,     5,   198,   135,    -1,     5,
     198,    36,    -1,     5,   198,   297,   370,   377,   369,    -1,
       5,   237,   519,   362,    -1,     5,   264,    -1,     5,   264,
     215,    -1,     5,   303,    -1,     5,   305,    -1,   289,   107,
       5,     5,    -1,   289,   101,     5,    -1,   289,   101,    17,
      -1,   289,     5,    -1,   289,   306,     5,    -1,   221,    -1,
     221,   370,    -1,   302,    -1,   303,    17,    -1,   305,    17,
      -1,   345,     4,    -1,   264,    -1,   305,    -1,   152,    -1,
     303,    -1,    40,   198,    -1,   198,    -1,   113,   198,    -1,
      40,   107,    -1,   107,    -1,   113,   107,    -1,    40,   252,
      -1,   252,    -1,   113,   252,    -1,   101,    -1,   291,    -1,
      67,    -1,   345,    -1,   237,    -1,   131,    -1,   167,    -1,
     306,    -1,    -1,     4,    -1,    30,   362,    -1,   242,   360,
      -1,   163,     4,    -1,   216,     4,   360,    -1,    63,   360,
     360,   360,   520,    -1,   111,   360,   360,   360,   360,   364,
     520,    -1,    49,   360,   360,   360,   360,   364,   520,    -1,
     230,   360,   360,   360,   360,   520,    -1,   263,   360,   360,
     360,   360,   520,    -1,   175,   360,   360,   360,   360,   520,
      -1,   311,   360,   360,   360,   360,   520,    -1,   291,   360,
     360,   364,   520,    -1,    63,   228,   360,   360,   384,   520,
      -1,    49,   228,   360,   360,   384,   520,    -1,   104,   228,
     360,   360,   384,   520,    -1,    86,   228,   360,   360,   384,
     520,    -1,   356,   228,   360,   360,   384,   520,    -1,    27,
     228,   360,   360,   384,   520,    -1,    52,   228,   360,   360,
     384,   520,    -1,   253,   360,   360,   360,   360,   370,   377,
     370,   379,     5,   520,    -1,    75,   360,   360,   360,   370,
     377,   520,    -1,   236,   360,   360,   360,   360,   360,   520,
      -1,    22,   360,   360,   360,   360,     4,   520,    -1,   112,
     360,   360,   360,   360,   360,     4,   364,   520,    -1,    50,
     360,   360,   360,   360,   360,     4,   364,   520,    -1,    83,
     360,   360,   365,   365,     4,   360,   360,     4,   520,    -1,
     115,   360,   360,   365,   365,     4,   360,   360,   360,     4,
     364,   520,    -1,    53,   360,   360,   365,   365,     4,   360,
     360,   360,     4,   364,   520,    -1,    76,   520,    -1,   290,
     503,    -1,     5,   360,   360,    -1,   309,     5,   360,   360,
      -1,   360,   360,   309,     5,    -1,     5,   370,   377,   369,
      -1,     4,     4,    -1,    40,   360,   360,     4,    -1,   197,
     360,   360,     4,    -1,   113,    -1,   106,    -1,   347,    -1,
      64,    -1,   256,    -1,   255,    -1,   239,    -1,   348,    -1,
      61,   508,    -1,    67,    -1,   131,    -1,   116,    -1,   146,
     360,   360,    -1,   157,   360,   360,    -1,     4,    20,    83,
       5,     5,     5,   370,     4,    -1,     4,    20,   154,     5,
       5,     4,    -1,     4,    20,   226,     5,     5,     5,     5,
     370,   377,   386,    -1,     4,    20,   227,     5,     5,   370,
     386,    -1,     4,    20,   241,     5,     5,     5,   370,    -1,
       4,    20,   284,   370,   377,    -1,   157,    17,    -1,     4,
      21,    -1,     4,    21,   372,    -1,     4,    21,   370,   377,
      -1,     4,    22,   242,   370,   379,    -1,     4,    49,   123,
      -1,     4,    50,   242,   370,   379,    -1,     4,    49,   242,
     370,   379,    -1,     4,    53,    21,    -1,     4,    53,    21,
     372,    -1,     4,    53,    21,   370,   377,    -1,     4,    53,
     242,   370,   379,    -1,     4,    60,   370,   377,   378,    -1,
       4,    63,   123,    -1,     4,    63,   242,   370,   379,    -1,
       4,    67,    -1,     4,    75,    27,    -1,     4,    75,   169,
      -1,     4,    75,   242,   370,   379,    -1,     4,    75,   287,
      -1,     4,    76,   141,    -1,     4,    83,    21,    -1,     4,
      83,    21,   372,    -1,     4,    83,    21,   370,   377,    -1,
       4,    83,   242,   370,   379,    -1,     4,   111,   123,    -1,
       4,   111,   242,   370,   379,    -1,     4,   112,   242,   370,
     379,    -1,     4,   115,    21,    -1,     4,   115,    21,   372,
      -1,     4,   115,    21,   370,   377,    -1,     4,   115,   242,
     370,   379,    -1,     4,   131,    -1,     4,   152,    -1,     4,
     175,    27,    -1,     4,   175,   170,   370,   379,    -1,     4,
     175,   228,   370,   377,   378,    -1,     4,   184,   170,   360,
     370,   379,    -1,     4,   230,   123,    -1,     4,   228,   267,
      -1,     4,   228,   274,    -1,     4,   236,   228,   370,   377,
     378,    -1,     4,   236,   170,   370,   379,    -1,     4,   236,
     295,   370,   379,    -1,     4,   237,    -1,     4,   237,   519,
      -1,     4,   253,   132,    -1,     4,   253,   170,   370,   379,
      -1,     4,   253,   228,   370,   377,   378,    -1,     4,   253,
     287,    -1,     4,   264,    -1,     4,   289,    -1,     4,   289,
       4,    -1,     4,   291,    -1,     4,   291,   252,    -1,     4,
     301,    -1,     4,   311,    27,    -1,     4,   311,   170,   370,
     379,    -1,     4,   311,   228,   370,   377,   378,    -1,     4,
     345,    -1,   152,   509,    -1,   152,   211,    -1,   211,    -1,
     230,   263,   360,   360,    -1,   263,   263,   360,   360,    -1,
     235,    -1,   237,   519,    -1,   264,   510,    -1,   264,   211,
      -1,   271,   511,    -1,     5,    67,    -1,     5,   131,    -1,
       5,   157,    -1,     5,   237,   519,    -1,     5,   289,    -1,
       5,   289,   211,    -1,   289,    17,    -1,   289,   100,   199,
      -1,   345,    -1,    30,    -1,   242,    -1,   163,    -1,   216,
      -1,    -1,   360,   360,    -1,    -1,   360,   360,    -1,    -1,
     291,    -1,    -1,    -1,   229,    -1,   244,    -1,   307,    -1,
      58,    -1,   133,    -1,   506,   370,   377,   378,   362,   521,
     527,    -1,   264,   506,   370,   377,   378,   362,   521,   527,
      -1,   506,     5,    -1,   506,     5,   370,   377,    -1,   506,
       4,    -1,   506,     4,   370,   377,    -1,   126,     5,     5,
     504,     4,     5,    -1,   360,   360,    -1,   135,    -1,    36,
      -1,    40,   360,   360,    -1,   197,   360,   360,    -1,   113,
      -1,   297,   370,   377,   369,    -1,   517,   518,    -1,   518,
      -1,   519,   357,   362,    -1,    67,   357,     5,    -1,    94,
     357,     4,     4,    -1,   345,   357,     4,    -1,   131,   357,
       5,    -1,   291,   357,     5,    -1,   530,    -1,   531,    -1,
     206,    -1,   264,    -1,   152,    -1,    93,    -1,   128,    -1,
     107,    -1,   198,    -1,   252,    -1,   101,    -1,   160,    -1,
     280,    -1,   512,    -1,   512,   517,    -1,    -1,    -1,   522,
     525,    -1,    17,    -1,   215,   360,   360,    -1,   298,    -1,
     298,   360,   360,    -1,   362,    -1,   291,   362,    -1,   525,
     526,    -1,   526,    -1,   519,   357,   362,    -1,    -1,    -1,
     528,   529,    -1,   529,   530,    -1,   530,    -1,   289,   357,
       5,    -1,    56,   357,   500,     5,     5,    -1,    65,    -1,
      67,     5,    -1,   185,   373,    -1,   243,   360,   360,    -1,
     287,   370,    -1,   296,   360,    -1,    46,   374,    -1,   185,
       4,    -1,   356,    -1,   354,    -1,   348,    -1,   206,    -1,
     360,   360,   360,   360,    -1,   360,   360,    -1,   372,   360,
     360,    -1,   370,   377,   369,    -1,   297,   535,    -1,    39,
     360,   360,    -1,   197,   536,    -1,   235,   362,    -1,   360,
     360,    -1,   372,   360,   360,    -1,   370,   377,   369,    -1,
      40,   360,   360,    -1,   360,   360,    -1,   113,   360,   360,
      -1,   362,    -1,   316,   371,   377,    -1,     5,     4,     4,
      -1,   306,    -1,    71,   540,    -1,   171,     4,    -1,   249,
       4,    -1,   258,   360,    -1,     4,     4,     4,     4,     4,
       4,     4,     4,     4,    -1,     4,     4,     4,     4,     4,
       4,    -1,    55,    -1,   143,    -1,   250,    -1,    91,    -1,
     152,   542,    -1,   264,   543,    -1,    40,   360,   360,    -1,
     197,   360,   360,    -1,   113,    -1,   269,   113,    -1,    40,
     360,   360,    -1,   197,   360,   360,    -1,   113,    -1,   269,
     113,    -1,   192,    -1,    13,    -1,   206,    -1,    34,    -1,
     109,    -1,    62,     5,    -1,   287,   370,    -1,   310,     4,
       4,     4,    -1,   360,    -1,   360,    99,    -1,   197,   548,
      -1,   297,   360,    -1,   297,   360,    99,    -1,    40,    -1,
     360,    -1,   113,    -1,    26,   550,    -1,   126,   552,    -1,
     210,   562,    -1,   114,   563,    -1,   223,     5,    -1,   122,
       5,   387,    -1,    62,     5,   387,    -1,   278,     4,   387,
      -1,   250,    88,   551,    -1,   122,     5,   387,    -1,    62,
       5,   387,    -1,   278,     4,   387,    -1,   553,    -1,   159,
     553,    -1,   288,   554,    -1,   275,   555,    -1,   119,    88,
     556,    -1,   195,   557,    -1,   250,   159,   559,    -1,   250,
      88,   560,    -1,   246,   561,    -1,   122,     5,    -1,    62,
       5,    -1,   278,     4,    -1,   122,     5,    -1,    62,     5,
      -1,   278,     4,    -1,   122,     5,    -1,    62,     5,    -1,
     278,     4,    -1,   122,     5,    -1,    62,     5,    -1,   278,
       4,    -1,   159,   558,    -1,   122,     5,     4,    -1,    62,
       5,     4,    -1,   278,     4,     4,    -1,   122,     5,    -1,
      62,     5,    -1,   278,     4,    -1,   122,     5,    -1,    62,
       5,    -1,   278,     4,    -1,   122,     5,    -1,    62,     5,
      -1,   278,     4,    -1,   122,     5,    -1,    62,     5,    -1,
     278,     4,    -1,   122,     5,   387,    -1,    62,     5,   387,
      -1,   278,     4,   387,    -1,   122,     5,     5,   387,    -1,
     565,     4,     4,   360,   360,   365,    -1,   565,     4,    -1,
     101,    -1,    51,    -1,   299,    -1,   139,    -1,   110,    -1,
      -1,     4,   360,   360,   360,   360,    -1,   209,    -1,   209,
       4,   360,   360,   360,   360,    -1,   126,   275,   567,    -1,
       4,    -1,     4,     4,    -1,   360,   370,    -1,   360,   360,
      -1,   297,   360,   360,    -1,   371,   377,   378,    -1,    16,
     572,    -1,   248,     4,    -1,   245,   571,    -1,    23,   570,
      -1,     4,     4,    -1,     4,     5,    -1,   291,     4,     5,
      -1,     4,     4,    -1,     4,     5,    -1,   291,     4,     5,
      -1,     4,    -1,     4,   371,   377,    -1,     4,     6,   371,
     377,    -1,   234,    -1,   360,   360,    -1,   360,   360,    12,
     360,   360,    -1,   360,   360,    12,   372,   360,   360,    -1,
     360,   360,    12,   370,   377,   369,    -1,   297,   575,    -1,
     125,    -1,   125,   360,    -1,   360,   360,    -1,   360,   360,
      12,   360,   360,    -1,   360,   360,    12,   372,   360,   360,
      -1,   360,   360,    12,   370,   377,   369,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   464,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   519,   520,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,   537,
     539,   540,   541,   542,   544,   545,   546,   547,   550,   551,
     552,   553,   554,   557,   558,   561,   562,   563,   566,   569,
     572,   575,   587,   594,   601,   609,   610,   611,   612,   613,
     616,   617,   618,   619,   620,   621,   622,   623,   624,   625,
     626,   627,   628,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   646,   647,
     650,   651,   652,   653,   654,   655,   658,   659,   660,   661,
     662,   665,   666,   667,   668,   669,   670,   671,   672,   675,
     676,   677,   678,   679,   682,   683,   684,   685,   686,   687,
     688,   689,   692,   693,   694,   697,   698,   699,   700,   703,
     704,   705,   708,   709,   710,   713,   714,   715,   718,   719,
     720,   721,   722,   723,   724,   725,   728,   729,   732,   733,
     734,   735,   736,   737,   740,   741,   742,   745,   746,   747,
     748,   749,   750,   753,   754,   755,   756,   757,   758,   759,
     760,   764,   765,   768,   769,   772,   773,   776,   777,   781,
     782,   783,   784,   785,   786,   787,   788,   791,   792,   795,
     796,   797,   799,   801,   802,   803,   805,   809,   810,   813,
     814,   816,   819,   821,   827,   828,   829,   832,   833,   834,
     837,   838,   839,   840,   841,   842,   843,   849,   850,   853,
     854,   855,   856,   857,   860,   861,   862,   863,   866,   867,
     872,   877,   884,   886,   888,   889,   890,   893,   895,   898,
     899,   902,   903,   904,   905,   906,   909,   911,   913,   918,
     923,   926,   927,   930,   931,   932,   939,   940,   941,   942,
     945,   946,   949,   950,   953,   954,   957,   959,   963,   964,
     967,   969,   970,   971,   972,   975,   976,   978,   979,   980,
     983,   985,   987,   988,   990,   992,   994,   996,  1000,  1003,
    1004,  1005,  1008,  1011,  1012,  1013,  1014,  1015,  1016,  1017,
    1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,  1027,
    1028,  1029,  1031,  1032,  1033,  1034,  1035,  1036,  1037,  1038,
    1039,  1040,  1042,  1043,  1044,  1045,  1046,  1047,  1048,  1050,
    1052,  1053,  1056,  1057,  1058,  1059,  1060,  1061,  1062,  1063,
    1066,  1067,  1068,  1071,  1074,  1075,  1077,  1079,  1080,  1081,
    1082,  1083,  1084,  1091,  1092,  1095,  1096,  1097,  1100,  1101,
    1104,  1107,  1108,  1110,  1114,  1115,  1116,  1119,  1123,  1125,
    1126,  1127,  1128,  1129,  1130,  1131,  1132,  1133,  1136,  1137,
    1138,  1141,  1142,  1145,  1147,  1155,  1157,  1159,  1163,  1164,
    1166,  1169,  1172,  1173,  1177,  1179,  1182,  1187,  1188,  1189,
    1193,  1194,  1195,  1198,  1199,  1200,  1203,  1204,  1206,  1207,
    1208,  1209,  1210,  1211,  1212,  1213,  1214,  1215,  1217,  1218,
    1221,  1222,  1225,  1226,  1227,  1228,  1231,  1232,  1235,  1237,
    1240,  1244,  1245,  1246,  1248,  1250,  1254,  1255,  1256,  1259,
    1260,  1261,  1262,  1263,  1264,  1265,  1268,  1271,  1272,  1273,
    1276,  1277,  1278,  1279,  1280,  1281,  1284,  1285,  1286,  1287,
    1288,  1289,  1290,  1293,  1294,  1297,  1298,  1301,  1302,  1305,
    1306,  1309,  1310,  1311,  1314,  1315,  1318,  1319,  1322,  1325,
    1333,  1334,  1337,  1338,  1339,  1340,  1341,  1342,  1343,  1344,
    1345,  1346,  1347,  1348,  1349,  1350,  1351,  1352,  1353,  1356,
    1359,  1360,  1363,  1364,  1365,  1366,  1369,  1370,  1371,  1372,
    1375,  1376,  1377,  1378,  1379,  1380,  1383,  1384,  1385,  1386,
    1387,  1388,  1390,  1391,  1396,  1397,  1400,  1402,  1404,  1407,
    1408,  1409,  1410,  1411,  1412,  1415,  1417,  1419,  1421,  1422,
    1424,  1426,  1428,  1430,  1432,  1435,  1436,  1437,  1438,  1439,
    1440,  1442,  1443,  1444,  1447,  1450,  1452,  1454,  1456,  1458,
    1460,  1462,  1464,  1467,  1469,  1471,  1473,  1474,  1475,  1476,
    1477,  1480,  1481,  1482,  1483,  1484,  1485,  1486,  1488,  1490,
    1491,  1492,  1495,  1496,  1497,  1498,  1499,  1500,  1502,  1503,
    1504,  1507,  1508,  1509,  1510,  1511,  1514,  1517,  1520,  1523,
    1526,  1529,  1532,  1535,  1538,  1543,  1546,  1549,  1552,  1555,
    1558,  1561,  1564,  1567,  1570,  1573,  1578,  1581,  1584,  1587,
    1590,  1593,  1596,  1599,  1602,  1607,  1609,  1611,  1613,  1615,
    1617,  1622,  1624,  1626,  1630,  1633,  1636,  1639,  1642,  1645,
    1648,  1651,  1654,  1657,  1660,  1665,  1666,  1667,  1668,  1669,
    1670,  1671,  1673,  1675,  1676,  1677,  1680,  1681,  1682,  1683,
    1684,  1685,  1687,  1688,  1689,  1692,  1694,  1696,  1697,  1699,
    1701,  1705,  1706,  1709,  1710,  1711,  1714,  1721,  1722,  1723,
    1724,  1725,  1726,  1727,  1730,  1738,  1739,  1740,  1741,  1743,
    1745,  1746,  1746,  1747,  1748,  1749,  1750,  1751,  1752,  1754,
    1755,  1757,  1760,  1763,  1764,  1765,  1768,  1771,  1774,  1775,
    1779,  1782,  1785,  1788,  1792,  1797,  1802,  1804,  1805,  1807,
    1808,  1810,  1812,  1814,  1816,  1817,  1819,  1821,  1825,  1830,
    1832,  1834,  1836,  1838,  1840,  1842,  1844,  1846,  1848,  1850,
    1853,  1854,  1856,  1858,  1859,  1861,  1863,  1864,  1865,  1867,
    1869,  1870,  1871,  1873,  1874,  1875,  1878,  1882,  1885,  1888,
    1892,  1897,  1903,  1904,  1905,  1907,  1908,  1912,  1914,  1915,
    1916,  1919,  1922,  1925,  1927,  1929,  1930,  1935,  1938,  1939,
    1940,  1943,  1947,  1948,  1950,  1951,  1952,  1954,  1955,  1957,
    1958,  1963,  1965,  1966,  1968,  1969,  1970,  1971,  1972,  1973,
    1975,  1977,  1979,  1980,  1982,  1983,  1985,  1987,  1988,  1989,
    1990,  1991,  1992,  1993,  1994,  1995,  1996,  1997,  1999,  2001,
    2002,  2003,  2004,  2006,  2007,  2008,  2009,  2010,  2012,  2013,
    2014,  2015,  2016,  2017,  2020,  2021,  2022,  2023,  2024,  2025,
    2026,  2027,  2028,  2029,  2030,  2031,  2032,  2033,  2034,  2035,
    2036,  2037,  2038,  2039,  2040,  2043,  2044,  2045,  2046,  2047,
    2048,  2056,  2063,  2072,  2081,  2088,  2095,  2103,  2111,  2118,
    2123,  2128,  2133,  2138,  2143,  2148,  2154,  2164,  2174,  2184,
    2191,  2201,  2211,  2220,  2232,  2245,  2250,  2253,  2255,  2257,
    2262,  2266,  2269,  2271,  2273,  2276,  2277,  2278,  2279,  2280,
    2281,  2282,  2285,  2286,  2287,  2288,  2289,  2290,  2292,  2294,
    2296,  2298,  2300,  2302,  2305,  2306,  2307,  2308,  2310,  2313,
    2314,  2316,  2318,  2319,  2320,  2322,  2325,  2328,  2329,  2331,
    2332,  2333,  2334,  2336,  2337,  2338,  2339,  2340,  2342,  2344,
    2345,  2347,  2350,  2351,  2352,  2354,  2356,  2357,  2358,  2359,
    2361,  2364,  2368,  2369,  2370,  2371,  2374,  2377,  2379,  2380,
    2381,  2382,  2384,  2387,  2388,  2390,  2391,  2392,  2393,  2394,
    2396,  2397,  2399,  2402,  2403,  2404,  2405,  2406,  2408,  2410,
    2411,  2412,  2413,  2415,  2417,  2418,  2419,  2420,  2421,  2422,
    2424,  2425,  2427,  2430,  2431,  2432,  2433,  2436,  2437,  2440,
    2441,  2444,  2445,  2448,  2461,  2462,  2466,  2467,  2471,  2472,
    2475,  2480,  2487,  2489,  2492,  2494,  2497,  2501,  2502,  2503,
    2504,  2505,  2506,  2507,  2511,  2512,  2515,  2516,  2517,  2518,
    2519,  2520,  2521,  2522,  2525,  2526,  2527,  2528,  2529,  2530,
    2531,  2532,  2533,  2534,  2535,  2538,  2539,  2542,  2543,  2543,
    2546,  2547,  2548,  2549,  2552,  2553,  2556,  2557,  2560,  2564,
    2565,  2565,  2568,  2569,  2572,  2575,  2579,  2580,  2581,  2582,
    2583,  2584,  2585,  2586,  2592,  2593,  2594,  2595,  2598,  2600,
    2601,  2606,  2608,  2609,  2610,  2611,  2614,  2615,  2620,  2624,
    2625,  2626,  2629,  2630,  2635,  2636,  2639,  2641,  2642,  2643,
    2648,  2650,  2656,  2657,  2658,  2659,  2662,  2663,  2666,  2668,
    2670,  2671,  2674,  2676,  2677,  2678,  2681,  2682,  2685,  2686,
    2687,  2690,  2691,  2692,  2695,  2696,  2697,  2698,  2699,  2702,
    2703,  2704,  2707,  2708,  2709,  2710,  2711,  2714,  2716,  2718,
    2720,  2723,  2725,  2727,  2730,  2731,  2732,  2733,  2734,  2735,
    2736,  2737,  2738,  2741,  2742,  2743,  2746,  2747,  2748,  2751,
    2752,  2753,  2756,  2757,  2758,  2761,  2762,  2763,  2764,  2767,
    2768,  2769,  2772,  2773,  2774,  2777,  2778,  2779,  2782,  2783,
    2784,  2787,  2789,  2791,  2795,  2799,  2801,  2806,  2809,  2810,
    2811,  2812,  2815,  2816,  2818,  2819,  2821,  2824,  2825,  2826,
    2829,  2830,  2833,  2835,  2836,  2837,  2838,  2841,  2842,  2843,
    2846,  2847,  2848,  2851,  2852,  2857,  2861,  2868,  2869,  2871,
    2876,  2878,  2881,  2882,  2883,  2884,  2886,  2891
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "REAL", "INT", "STRING", "POINTER",
  "ANGDEGREE", "ANGRADIAN", "SEXSTR", "HMSSTR", "DMSSTR", "ABOUT_", "AIP_",
  "ALLOC_", "ALLOCGZ_", "ALIGN_", "ALL_", "ALT_", "AMPLIFIER_",
  "ANALYSIS_", "ANGLE_", "ANNULUS_", "APPEND_", "ARCMIN_", "ARCSEC_",
  "ARRAY_", "ARROW_", "ASINH_", "AST_", "AUTO_", "AUX_", "AVERAGE_",
  "AXES_", "AZIMUTH_", "B1950_", "BACK_", "BACKGROUND_", "BASE_", "BBOX_",
  "BEGIN_", "BG_", "BIG_", "BIGENDIAN_", "BIN_", "BITPIX_", "BLEND_",
  "BLOCK_", "BORDER_", "BOX_", "BOXANNULUS_", "BOXCAR_", "BOXCIRCLE_",
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
  "ENVI_", "EPANDA_", "EPSILON_", "EQUATORIAL_", "ERASE_", "EXT_",
  "FACTOR_", "FALSE_", "FILE_", "FILL_", "FILTER_", "FIT_", "FITS_",
  "FITSY_", "FIXED_", "FK4_", "FK5_", "FONT_", "FORMAT_", "FOOTPRINT_",
  "FROM_", "FRONT_", "FULL_", "FUNCTION_", "GALACTIC_", "GAUSSIAN_",
  "GET_", "GLOBAL_", "GRAPHICS_", "GRAY_", "GRID_", "GZ_", "HANDLE_",
  "HAS_", "HEAD_", "HEADER_", "HEIGHT_", "HIDE_", "HIGHLITE_", "HISTEQU_",
  "HISTOGRAM_", "HORIZONTAL_", "ICRS_", "ID_", "IIS_", "IMAGE_",
  "INCLUDE_", "INCR_", "INFO_", "ITERATION_", "IRAF_", "IRAFMIN_",
  "J2000_", "KEY_", "KEYWORD_", "LABEL_", "LENGTH_", "LEVEL_", "LIGHTEN_",
  "LITTLE_", "LITTLEENDIAN_", "LINE_", "LINEAR_", "LIST_", "LOAD_",
  "LOCAL_", "LOG_", "MACOSX_", "MAGNIFIER_", "MATCH_", "MAP_", "MARK_",
  "MARKER_", "MASK_", "MESSAGE_", "METHOD_", "MINMAX_", "MINOR_", "MIP_",
  "MMAP_", "MMAPINCR_", "MOSAIC_", "MODE_", "MOTION_", "MOVE_", "NAME_",
  "NAN_", "NATIVE_", "NAXES_", "NEW_", "NEXT_", "NO_", "NONE_", "NONNAN_",
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
  "SSHARED_", "STATS_", "STATUS_", "SUM_", "SYSTEM_", "TABLE_", "TAG_",
  "TEMPLATE_", "TEXT_", "THREADS_", "THREED_", "THRESHOLD_", "THICK_",
  "TRANSPARENCY_", "TO_", "TOGGLE_", "TOPHAT_", "TRUE_", "TYPE_", "UNDO_",
  "UNHIGHLITE_", "UNLOAD_", "UNSELECT_", "UPDATE_", "USER_", "VALUE_",
  "VAR_", "VIEW_", "VECTOR_", "VERSION_", "VERTEX_", "VERTICAL_", "WARP_",
  "WCS_", "WCSA_", "WCSB_", "WCSC_", "WCSD_", "WCSE_", "WCSF_", "WCSG_",
  "WCSH_", "WCSI_", "WCSJ_", "WCSK_", "WCSL_", "WCSM_", "WCSN_", "WCSO_",
  "WCSP_", "WCSQ_", "WCSR_", "WCSS_", "WCST_", "WCSU_", "WCSV_", "WCSW_",
  "WCSX_", "WCSY_", "WCSZ_", "WCS0_", "WFPC2_", "WIDTH_", "WIN32_", "XML_",
  "XY_", "YES_", "ZERO_", "ZMAX_", "ZSCALE_", "ZOOM_", "'Y'", "'N'", "'X'",
  "'='", "$accept", "command", "numeric", "debug", "yesno", "fileNameType",
  "optangle", "angle", "sexagesimal", "hms", "dms", "coord", "coordSystem",
  "wcsSystem", "internalSystem", "maskType", "maskBlend", "scaleType",
  "minmaxMode", "skyFrame", "skyFormat", "skyDist", "shmType", "incrLoad",
  "layerType", "pointShape", "pointSize", "analysisMethod",
  "analysisParam", "endian", "threed", "threedBorder", "threedCompass",
  "threedHighlite", "threedView", "bin", "binAbout", "binFactor",
  "binFunction", "binTo", "block", "blockTo", "clip", "clipScope",
  "clipMode", "clipMinMax", "clipZScale", "colormap", "colormapMotion",
  "colorscale", "contour", "contourCreate", "contourDelete", "contourLoad",
  "contourClipMode", "contourClipScope", "contourMethod", "contourPaste",
  "contourSave", "crop", "crop3d", "crosshair", "cube", "cutMethod",
  "fitsy", "get", "getBin", "getBinCols", "getBlock", "getClip",
  "getClipMinMax", "getClipZScale", "getColorbar", "getColorMap",
  "getColorMapLevel", "getColorScale", "getColorScaleLevel", "getContour",
  "getContourClip", "getContourColorScale", "getCoord", "getCrop",
  "getCrosshair", "getCube", "getCursor", "getData", "getInfo", "getiis",
  "getIISFileName", "getFits", "getFitsExt", "getFitsHeader",
  "getFitsDepth", "getFitsFileName", "getFitsSlice", "getGrid", "getMask",
  "getPan", "getRGB", "getSmooth", "getThreed", "getThreedBorder",
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
  "markerCreateTemplate", "markerDash", "markerEdit", "markerFormat",
  "markerGet", "markerGetCentroid", "markerGetHighlite", "markerGetSelect",
  "markerGetShow", "markerInitProp", "markerLayer", "markerList",
  "markerLoad", "markerMoveSelected", "markerProps", "markerProp",
  "markerProperty", "markerProperties", "markerQuery", "@2",
  "markerSelect", "markerShow", "queries", "query", "markerTags", "@3",
  "tags", "tag", "callback", "mask", "orient", "pan", "panTo", "panMotion",
  "panner", "postscript", "precision", "pscolorspace", "region",
  "regionHighlite", "regionSelect", "renderMethod", "renderBackground",
  "rgb", "rotate", "rotateMotion", "save", "saveArray", "saveArrayRGBCube",
  "saveFits", "saveFitsImage", "saveFitsTable", "saveFitsSlice",
  "saveFitsExtCube", "saveFitsMosaic", "saveFitsMosaicImage",
  "saveFitsRGBImage", "saveFitsRGBCube", "saveFitsResample", "saveNRRD",
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
     605,   606,   607,   608,    89,    78,    88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   358,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   360,   360,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   363,   363,
     363,   363,   363,   364,   364,   365,   365,   365,   366,   367,
     368,   369,   369,   369,   369,   370,   370,   370,   370,   370,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   372,   372,
     373,   373,   373,   373,   373,   373,   374,   374,   374,   374,
     374,   375,   375,   375,   375,   375,   375,   375,   375,   376,
     376,   376,   376,   376,   377,   377,   377,   377,   377,   377,
     377,   377,   378,   378,   378,   379,   379,   379,   379,   380,
     380,   380,   381,   381,   381,   382,   382,   382,   383,   383,
     383,   383,   383,   383,   383,   383,   384,   384,   385,   385,
     385,   385,   385,   385,   386,   386,   386,   387,   387,   387,
     387,   387,   387,   388,   388,   388,   388,   388,   388,   388,
     388,   389,   389,   390,   390,   391,   391,   392,   392,   393,
     393,   393,   393,   393,   393,   393,   393,   394,   394,   395,
     395,   395,   395,   395,   395,   395,   395,   396,   396,   397,
     397,   397,   397,   397,   398,   398,   398,   399,   399,   399,
     400,   400,   400,   400,   400,   400,   400,   401,   401,   402,
     402,   402,   402,   402,   403,   403,   403,   403,   404,   404,
     404,   404,   405,   405,   405,   405,   405,   406,   406,   407,
     407,   408,   408,   408,   408,   408,   409,   409,   409,   409,
     409,   410,   410,   411,   411,   411,   412,   412,   412,   412,
     413,   413,   414,   414,   415,   415,   416,   416,   417,   417,
     417,   417,   417,   417,   417,   418,   418,   418,   418,   418,
     419,   419,   419,   419,   419,   419,   419,   419,   420,   421,
     421,   421,   422,   423,   423,   423,   423,   423,   423,   423,
     423,   423,   423,   423,   423,   423,   423,   423,   423,   423,
     423,   423,   423,   423,   423,   423,   423,   423,   423,   423,
     423,   423,   423,   423,   423,   423,   423,   423,   423,   423,
     423,   423,   424,   424,   424,   424,   424,   424,   424,   424,
     425,   425,   425,   426,   427,   427,   427,   427,   427,   427,
     427,   427,   427,   428,   428,   429,   429,   429,   430,   430,
     431,   432,   432,   432,   433,   433,   433,   434,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   436,   436,
     436,   437,   437,   438,   438,   439,   439,   439,   440,   440,
     440,   441,   442,   442,   443,   443,   443,   444,   444,   444,
     445,   445,   445,   446,   446,   446,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     448,   448,   449,   449,   449,   449,   450,   450,   451,   451,
     451,   452,   452,   452,   452,   452,   453,   453,   453,   454,
     454,   454,   454,   454,   454,   454,   455,   456,   456,   456,
     457,   457,   457,   457,   457,   457,   458,   458,   458,   458,
     458,   458,   458,   459,   459,   460,   460,   461,   461,   462,
     462,   463,   463,   463,   464,   464,   465,   465,   466,   466,
     467,   467,   468,   468,   468,   468,   468,   468,   468,   468,
     468,   468,   468,   468,   468,   468,   468,   468,   468,   469,
     470,   470,   471,   471,   471,   471,   472,   472,   472,   472,
     473,   473,   473,   473,   473,   473,   474,   474,   474,   474,
     474,   474,   474,   474,   475,   475,   476,   476,   476,   477,
     477,   477,   477,   477,   477,   478,   478,   478,   478,   478,
     478,   478,   478,   478,   478,   479,   479,   479,   479,   479,
     479,   479,   479,   479,   480,   481,   481,   481,   481,   481,
     481,   481,   481,   481,   481,   481,   481,   481,   481,   481,
     481,   482,   482,   482,   482,   482,   482,   482,   482,   482,
     482,   482,   483,   483,   483,   483,   483,   483,   483,   483,
     483,   484,   484,   484,   484,   484,   485,   485,   485,   485,
     485,   485,   485,   485,   485,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   486,   486,   487,   487,   487,   487,
     487,   487,   487,   487,   487,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   492,   492,   492,   492,   492,
     492,   493,   493,   494,   494,   494,   495,   496,   496,   496,
     496,   496,   496,   496,   497,   498,   498,   498,   498,   498,
     498,   499,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   501,   501,   501,   501,   501,
     501,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   503,   503,   503,
     503,   504,   505,   505,   505,   506,   506,   506,   506,   506,
     506,   506,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   508,   508,   508,   508,   509,   509,   510,
     510,   511,   511,   512,   513,   513,   513,   513,   513,   513,
     514,   514,   515,   515,   515,   515,   515,   516,   516,   516,
     516,   516,   516,   516,   517,   517,   518,   518,   518,   518,
     518,   518,   518,   518,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   520,   520,   521,   522,   521,
     523,   523,   523,   523,   524,   524,   525,   525,   526,   527,
     528,   527,   529,   529,   530,   531,   532,   532,   532,   532,
     532,   532,   532,   532,   533,   533,   533,   533,   534,   534,
     534,   534,   534,   534,   534,   534,   535,   535,   535,   536,
     536,   536,   537,   537,   537,   537,   538,   538,   538,   538,
     539,   539,   540,   540,   540,   540,   541,   541,   542,   542,
     542,   542,   543,   543,   543,   543,   544,   544,   545,   545,
     545,   546,   546,   546,   547,   547,   547,   547,   547,   548,
     548,   548,   549,   549,   549,   549,   549,   550,   550,   550,
     550,   551,   551,   551,   552,   552,   552,   552,   552,   552,
     552,   552,   552,   553,   553,   553,   554,   554,   554,   555,
     555,   555,   556,   556,   556,   557,   557,   557,   557,   558,
     558,   558,   559,   559,   559,   560,   560,   560,   561,   561,
     561,   562,   562,   562,   563,   564,   564,   564,   565,   565,
     565,   565,   566,   566,   566,   566,   566,   567,   567,   567,
     568,   568,   569,   569,   569,   569,   569,   570,   570,   570,
     571,   571,   571,   572,   572,   572,   573,   574,   574,   574,
     574,   574,   575,   575,   575,   575,   575,   575
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     3,     2,     1,     1,     2,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     2,     3,     2,     2,     2,     2,
       3,     2,     3,     2,     2,     2,     2,     2,     2,     1,
       3,     2,     2,     2,     1,     2,     2,     2,     1,     2,
       1,     2,     2,     2,     2,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       2,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     0,     1,     1,     1,     0,
       1,     1,     0,     1,     1,     0,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     0,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     2,     1,     2,     1,     2,     2,     6,     2,
       4,     2,     2,     2,     3,     2,     2,     1,     2,     1,
       2,     4,     5,     2,     3,     5,     6,     1,     1,     1,
       7,    11,     8,    12,     1,     2,     2,     1,     1,     2,
       2,     2,     2,     3,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     1,     3,     2,
       2,     2,     6,    10,     1,     2,     1,     6,    10,     1,
       2,     2,     2,     2,     2,     2,    13,    13,    12,    12,
       1,     0,     1,     1,     4,     6,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     3,     4,     0,     6,
       8,     2,     3,     3,     3,     0,     4,     4,     4,     4,
       3,     3,     1,     3,     5,     4,     4,     3,     2,     0,
       1,     1,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     2,     2,
       4,     9,     2,     2,     2,     1,     3,     2,     2,     1,
       2,     8,     2,     1,     2,     1,     2,     1,     4,     9,
       2,     1,     1,     1,     1,     2,     1,     1,     2,     1,
       0,     2,     2,     1,     0,     2,     2,     1,     1,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     0,     1,
       2,     1,     4,     5,     0,     2,     1,     5,     2,     2,
       1,     1,     1,     2,     1,     2,     1,     1,     0,     1,
       1,     0,     1,     5,     6,     3,     6,     3,     1,     3,
       1,     1,     1,     3,     6,     7,     5,     1,     1,     4,
       5,     1,     3,     0,     1,     2,     1,     4,     1,     2,
       1,     2,     3,     2,     1,     2,     1,     4,     2,     1,
       1,     3,     1,     2,     3,     2,     0,     1,     1,     4,
       2,     0,     1,     3,     4,     4,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     1,     2,     2,     2,     2,
       1,     1,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     2,     2,     0,     1,     2,     1,     6,     5,
       1,     1,     1,     2,     2,     1,     1,     1,     1,     2,
       1,     1,     1,     2,     1,     1,     1,     2,     2,     2,
       0,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     1,     2,     3,     1,     2,     2,
       4,     6,     1,    10,     1,     2,     3,     3,     2,     2,
       2,     2,     2,     2,     2,     4,     4,     4,     3,     3,
       5,     4,     4,     4,     3,     3,     3,     3,     2,     2,
       4,     3,     3,     3,     3,     4,     4,     4,     4,     5,
       4,     6,     7,     4,     4,     5,     2,     3,     3,     3,
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
       2,     0,     3,     1,     1,     2,     2,     2,     2,     2,
       4,     4,     4,     3,     4,     5,     8,     6,     4,     9,
       6,     7,    10,    11,    12,     9,     5,     4,     6,     3,
       5,     5,     6,     5,     4,     9,    10,    11,     9,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     7,     7,
       2,     4,     4,     4,     4,     5,     4,     4,     5,     5,
       3,     4,     4,     4,     4,     7,     9,     6,    10,    11,
      12,     9,     3,     2,     3,     5,     7,     4,     3,     3,
       6,     7,     7,     4,     4,     4,     9,     4,     3,     4,
       7,     7,     2,     3,     3,     3,     4,     2,     2,     4,
      10,     3,     1,     3,     2,     2,     2,     2,     3,     5,
       4,     5,     2,     7,     3,     2,     2,     3,     2,     2,
       2,     3,     2,     3,     4,     3,     3,     6,     4,     2,
       3,     2,     2,     4,     3,     3,     2,     3,     1,     2,
       1,     2,     2,     2,     1,     1,     1,     1,     2,     1,
       2,     2,     1,     2,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     2,     2,     2,
       3,     5,     7,     7,     6,     6,     6,     6,     5,     6,
       6,     6,     6,     6,     6,     6,    11,     7,     7,     7,
       9,     9,    10,    12,    12,     2,     2,     3,     4,     4,
       4,     2,     4,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     3,     3,     8,     6,
      10,     7,     7,     5,     2,     2,     3,     4,     5,     3,
       5,     5,     3,     4,     5,     5,     5,     3,     5,     2,
       3,     3,     5,     3,     3,     3,     4,     5,     5,     3,
       5,     5,     3,     4,     5,     5,     2,     2,     3,     5,
       6,     6,     3,     3,     3,     6,     5,     5,     2,     3,
       3,     5,     6,     3,     2,     2,     3,     2,     3,     2,
       3,     5,     6,     2,     2,     2,     1,     4,     4,     1,
       2,     2,     2,     2,     2,     2,     2,     3,     2,     3,
       2,     3,     1,     1,     1,     1,     1,     0,     2,     0,
       2,     0,     1,     0,     0,     1,     1,     1,     1,     1,
       7,     8,     2,     4,     2,     4,     6,     2,     1,     1,
       3,     3,     1,     4,     2,     1,     3,     3,     4,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     0,     0,     2,
       1,     3,     1,     3,     1,     2,     2,     1,     3,     0,
       0,     2,     2,     1,     3,     5,     1,     2,     2,     3,
       2,     2,     2,     2,     1,     1,     1,     1,     4,     2,
       3,     3,     2,     3,     2,     2,     2,     3,     3,     3,
       2,     3,     1,     3,     3,     1,     2,     2,     2,     2,
       9,     6,     1,     1,     1,     1,     2,     2,     3,     3,
       1,     2,     3,     3,     1,     2,     1,     1,     1,     1,
       1,     2,     2,     4,     1,     2,     2,     2,     3,     1,
       1,     1,     2,     2,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     1,     2,     2,     2,     3,     2,
       3,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     3,     3,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     3,     3,     4,     6,     2,     1,     1,     1,
       1,     1,     0,     5,     1,     6,     3,     1,     2,     2,
       2,     3,     3,     2,     2,     2,     2,     2,     2,     3,
       2,     2,     3,     1,     3,     4,     1,     2,     5,     6,
       6,     2,     1,     2,     2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     7,     8,     0,     0,     0,     0,
       0,   308,     0,     0,     0,     0,     0,     0,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,  1044,     0,
       0,     0,     0,     0,     0,     0,     0,  1044,    39,     0,
       0,     0,    44,     0,     0,     0,    48,  1232,    50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,    55,    56,     0,   244,     6,     0,
       0,     0,     0,     0,     0,     9,     0,     0,   274,   276,
       0,     0,    11,   146,   148,   141,   142,   143,   147,   144,
     145,   279,    12,     0,   291,     0,     0,     0,    13,     0,
       0,     0,     0,   315,     0,    14,    69,    98,     0,   128,
      97,    77,    95,     0,    74,    76,    72,   129,    96,    73,
       0,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,    70,
      71,    75,   322,   154,    99,     0,    15,     0,    16,    17,
       0,     0,     0,     0,     0,     0,    58,    57,     0,     0,
       0,     0,     2,     0,    18,     0,     0,     0,   384,   398,
       0,   404,     0,     0,     0,     0,     0,     0,     0,   347,
       0,   476,     0,     0,     0,     0,     0,  1044,     0,   355,
       0,   359,     0,     0,     0,   363,     0,   365,     0,   367,
       0,     0,   511,   371,    19,     0,   517,    20,   522,     0,
     540,   525,   526,   527,   528,   542,   530,   531,   535,   532,
       0,   534,   536,     0,     0,    21,    23,     0,   557,     0,
       0,     0,   562,     0,    24,     0,     0,     0,     0,     0,
       0,     0,    26,   716,    27,     0,     0,     0,     0,     0,
       0,   717,    28,     0,    29,  1048,  1049,  1045,  1046,  1047,
       0,   136,  1106,     0,   130,     0,     0,     0,    31,     0,
    1117,  1116,  1115,  1114,    33,     0,     0,     0,     0,     0,
     154,     0,    34,     0,  1135,     0,  1132,    35,     0,     0,
       0,     0,    38,     0,    37,    36,     0,     0,     0,     0,
      41,     0,     0,  1164,    42,     0,     0,     0,     0,     0,
      43,  1228,  1227,  1231,  1230,  1229,    45,     0,    46,     0,
       0,     0,     0,     0,     0,     0,     0,    47,     0,     0,
    1234,    49,     0,     0,    51,     0,     0,     0,     0,   154,
      52,  1256,    53,     0,     0,    54,     1,     4,     5,   227,
       0,   219,     0,     0,   221,     0,   229,   222,   226,   237,
     238,   223,   239,     0,   225,   247,   248,   246,   245,     0,
       0,   267,     0,   252,   260,   263,   262,   261,   259,   251,
     256,   257,   258,   250,     0,     0,     0,     0,     0,     0,
     255,    10,     0,     0,     0,   275,     0,   280,     0,   290,
     281,   292,   282,   293,   283,   304,   284,     0,     0,   285,
       0,    88,    89,    90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   311,     0,     0,     0,     0,
       0,   156,   161,   155,   157,   160,   159,   158,     0,     0,
     328,    63,    64,    65,    66,    67,    59,    60,    61,    68,
      62,     0,   333,     0,   380,   376,   372,   373,   377,   374,
     379,   334,   383,   335,   296,   388,   392,   387,   299,   298,
     297,     0,     0,   336,   399,   338,     0,   337,     0,   406,
     339,   418,   410,   421,   411,   412,   414,     0,   416,   417,
     154,   340,     0,     0,   341,     0,     0,   154,   342,   430,
     154,   428,   343,   431,   345,   154,   432,   344,     0,   154,
       0,   346,   450,     0,   448,   466,     0,     0,     0,   454,
     446,     0,   456,   471,   459,   348,   477,   478,   349,     0,
       0,     0,   441,     0,   352,   437,   438,     0,   353,   354,
       0,   485,   479,   484,   480,   481,   482,   483,   357,   358,
     486,   360,     0,   487,   488,   489,   362,   495,   490,   491,
     493,   364,   501,   503,   505,   507,   500,   502,   509,   366,
       0,     0,   514,     0,   370,   154,   516,     0,   523,   541,
     524,   543,   544,   545,   529,   546,   548,   547,   549,   533,
     537,   554,     0,     0,     0,     0,   550,   538,     0,     0,
     559,   558,     0,     0,     0,     0,    25,     0,     0,   569,
       0,   570,     0,     0,     0,     0,     0,   571,     0,   715,
       0,   572,     0,   573,     0,     0,   574,     0,   720,   719,
     718,     0,   723,     0,     0,     0,   895,     0,     0,     0,
     727,   731,   733,   734,     0,     0,     0,     0,   832,     0,
       0,     0,   868,     0,     0,     0,     0,     0,     0,     0,
     870,     0,     0,     0,    30,   139,   140,   138,   137,  1112,
    1107,  1113,   133,   134,   132,   135,   131,  1108,     0,  1110,
    1111,    32,     0,     0,     0,     0,  1124,  1125,     0,   154,
       0,  1122,  1119,     0,     0,     0,   154,  1142,  1145,  1143,
    1144,  1136,  1137,  1138,  1139,     0,     0,     0,    40,  1161,
    1162,     0,  1169,  1171,  1170,  1166,  1167,  1165,     0,     0,
       0,     0,  1172,     0,  1175,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1173,  1184,     0,     0,     0,
    1174,  1176,  1226,  1159,  1160,  1158,   208,     0,   211,   204,
       0,   213,   205,     0,   215,   206,  1157,  1156,   207,   209,
     210,     0,     0,   203,     0,     0,     0,     0,  1240,  1253,
    1243,     0,     0,  1246,     0,     0,  1245,  1244,   162,  1262,
       0,  1261,  1257,   228,   224,     0,   233,     0,   230,     0,
     249,   149,   152,   153,   151,   150,   264,   265,   266,   254,
     253,   269,   271,   270,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   154,     0,   312,    94,    91,    92,    93,
     154,   314,   313,     0,     0,     0,     0,     0,     0,     0,
     327,     0,   323,   321,   320,   332,   375,     0,     0,   378,
     393,   394,   389,   390,   395,   397,   396,   391,   300,   301,
     386,   385,   401,   400,     0,   405,   419,   420,   409,   422,
     415,   413,   408,     0,     0,   154,   154,   162,   162,   162,
     154,     0,     0,   154,   467,   449,   460,     0,   451,    78,
     462,     0,     0,   453,   455,   154,   472,     0,     0,   458,
       0,     0,     0,   443,     0,     0,     0,     0,   943,   945,
     944,     0,  1037,     0,  1016,     0,  1019,     0,     0,  1039,
    1041,     0,  1032,   356,     0,   492,   494,   504,   497,   506,
     498,   508,   499,   510,   496,     0,     0,   515,   512,   513,
     162,   539,   551,   552,   553,   555,     0,   568,   556,     0,
       0,     0,     0,     0,     0,   175,   175,   169,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   172,   172,   169,
       0,     0,   169,     0,     0,     0,     0,     0,   610,   634,
       0,     0,     0,   606,     0,     0,     0,     0,   175,   169,
       0,     0,   711,     0,   721,   722,   154,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     780,     0,     0,     0,     0,     0,   803,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   822,     0,     0,   827,
     828,     0,     0,     0,   848,   850,   849,     0,   852,     0,
       0,   859,   861,   862,   896,     0,     0,     0,     0,   725,
     726,   937,   935,   940,   939,   938,   936,   941,     0,   730,
       0,   735,     0,   934,     0,   736,   737,   738,   739,     0,
       0,     0,     0,     0,   834,     0,     0,   835,  1059,     0,
    1062,  1058,     0,     0,     0,   836,   869,   837,  1077,  1082,
    1079,  1078,  1076,  1083,  1080,  1074,  1081,  1075,  1084,     0,
       0,   842,     0,     0,     0,  1090,     0,  1092,   845,     0,
    1094,   846,   866,     0,     0,     0,   871,   872,   873,  1109,
    1123,     0,     0,  1130,  1126,     0,     0,     0,  1121,  1120,
    1134,  1133,     0,     0,  1150,     0,     0,  1146,     0,  1154,
       0,     0,  1147,     0,  1168,   197,   197,     0,   197,     0,
    1194,     0,  1193,  1185,     0,     0,     0,     0,  1189,     0,
       0,     0,  1192,     0,     0,     0,     0,     0,  1187,  1195,
       0,     0,     0,  1186,   197,   197,   197,     0,   212,   214,
     216,     0,   217,     0,    56,     0,  1236,     0,  1241,     0,
     154,  1247,  1248,     0,  1250,  1251,     0,   163,   164,  1242,
    1263,  1264,     0,   220,     0,   234,     0,     0,     0,     0,
     268,     0,     0,     0,     0,     0,     0,     0,     0,   306,
     154,     0,     0,     0,     0,   154,     0,   326,     0,   325,
     382,   381,     0,     0,     0,   154,     0,   162,   427,   425,
     429,   433,     0,     0,     0,   162,     0,    82,    81,   468,
     452,     0,   463,   465,   165,     0,     0,   350,     0,     0,
      56,     0,   442,     0,     0,   955,     0,     0,     0,     0,
       0,     0,   969,     0,     0,     0,     0,     0,     0,   986,
     987,     0,     0,     0,     0,     0,   998,     0,  1004,  1005,
    1007,  1009,     0,  1013,  1024,  1025,  1026,     0,  1028,  1033,
    1035,  1036,  1034,   942,     0,  1015,     0,  1014,   954,     0,
       0,  1020,     0,  1022,     0,  1021,  1042,  1023,  1030,     0,
       0,   368,     0,     0,   566,   567,     0,   564,   560,     0,
     175,   175,   175,   176,   177,   578,   579,   171,   170,     0,
     175,   175,   175,     0,   584,   594,   172,   175,   175,   175,
     173,   174,   175,   175,     0,   175,   175,     0,   172,     0,
     607,     0,     0,     0,   633,     0,   632,     0,     0,   609,
       0,   608,     0,     0,     0,     0,   172,   172,   169,     0,
       0,   169,     0,     0,     0,   175,   175,   707,     0,   175,
     175,   712,     0,   188,   189,   190,   191,   192,   193,     0,
      86,    87,    85,   743,     0,     0,     0,     0,     0,     0,
     889,   887,   882,     0,   892,   876,   893,   879,   891,   885,
     874,   888,   877,   875,   894,   890,     0,     0,     0,   759,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   790,     0,     0,     0,     0,     0,   802,
     804,     0,     0,   809,   808,     0,     0,   178,     0,     0,
       0,   154,     0,   818,     0,     0,     0,     0,   823,   824,
     825,     0,     0,     0,   831,   847,   851,   853,   856,   855,
       0,     0,     0,   860,   897,   899,     0,   898,   728,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1043,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   732,     0,     0,     0,     0,   833,
       0,   154,     0,  1054,  1052,     0,     0,   154,  1057,   838,
       0,     0,     0,   844,     0,     0,  1095,   864,   865,     0,
     867,  1129,  1131,  1128,  1127,  1118,     0,     0,     0,  1151,
       0,     0,  1155,  1163,   199,   200,   201,   202,   198,  1178,
    1177,     0,     0,     0,  1180,  1179,   197,     0,     0,     0,
    1188,     0,     0,     0,     0,     0,  1205,     0,  1219,  1218,
    1220,     0,     0,     0,  1191,     0,     0,     0,  1190,  1200,
    1199,  1201,  1197,  1196,  1198,  1222,  1221,  1223,     0,     0,
       0,  1238,  1239,     0,   154,  1254,  1249,  1252,     0,     0,
     154,     0,     0,     0,   231,     0,     0,     0,     0,     0,
       0,     0,     0,   303,   302,     0,     0,   294,   305,   307,
       0,   317,   319,   318,   316,   154,   324,     0,     0,     0,
     162,   154,     0,     0,     0,     0,   447,   461,    80,    79,
     470,     0,   464,   167,   168,   166,   457,     0,   473,     0,
       0,     0,   445,   439,     0,     0,     0,     0,     0,     0,
     154,   956,     0,   959,     0,     0,   962,     0,   154,   967,
       0,   970,   971,     0,   973,   974,   975,     0,   979,     0,
       0,   982,     0,   988,     0,     0,     0,   993,   994,   992,
       0,     0,     0,   999,  1000,     0,     0,  1003,  1006,  1008,
    1010,     0,     0,  1027,  1029,   946,  1038,   947,     0,     0,
    1040,  1031,     0,     0,   520,   521,     0,     0,   565,     0,
     575,   576,   577,   175,   581,   582,   583,     0,     0,     0,
     588,   589,   169,     0,     0,     0,   175,   595,   596,   597,
     598,   600,   172,   603,   604,     0,   175,     0,     0,     0,
     172,   172,   169,     0,     0,     0,     0,   631,     0,   635,
       0,     0,     0,     0,     0,   172,   172,   169,     0,     0,
     169,     0,     0,     0,     0,     0,   172,   172,   169,     0,
       0,   169,     0,     0,     0,     0,     0,   172,   172,   169,
       0,     0,   169,     0,     0,     0,     0,   172,   172,   169,
       0,     0,     0,   172,   611,   612,   613,   614,   616,     0,
     619,   620,     0,   172,     0,     0,   705,   706,   175,   709,
     710,     0,   742,   154,   744,     0,     0,   748,     0,     0,
       0,     0,     0,   881,   878,   884,   883,   880,   886,     0,
     757,     0,     0,     0,     0,   154,   764,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     781,   782,   783,     0,   787,   784,   786,     0,     0,   792,
     791,   793,   794,     0,     0,     0,     0,     0,     0,   154,
     154,   807,   184,   180,   185,   179,   182,   181,   183,   813,
     814,   815,     0,     0,   817,   819,   154,   154,     0,   826,
     829,   154,   154,   854,   858,   900,   729,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1085,   925,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   926,     0,     0,     0,     0,     0,   740,
     741,   154,   162,     0,   154,   154,  1060,  1061,     0,     0,
     840,     0,   154,  1091,  1093,   863,     0,  1148,  1149,  1152,
    1153,   197,   197,   197,  1224,  1203,  1202,  1204,  1207,  1206,
    1210,  1209,  1211,  1208,  1216,  1215,  1217,  1213,  1212,  1214,
       0,     0,  1233,     0,  1255,     0,   154,     0,  1258,     0,
       0,   235,     0,   232,     0,     0,     0,   272,     0,     0,
       0,     0,   154,     0,   309,   142,     0,   402,     0,   423,
     162,   165,     0,     0,   436,     0,   474,   475,     0,   440,
       0,     0,     0,     0,     0,   154,   957,   165,   165,   165,
     154,   963,   165,   162,   165,   165,   154,   976,   165,   165,
     165,   154,   983,   165,   165,   154,     0,   165,   154,   165,
     165,   154,   165,   154,  1017,  1018,     0,     0,   519,   561,
       0,   580,   585,   586,   587,     0,   591,   592,   593,   599,
     175,   172,   605,   622,   623,   624,   625,   626,     0,   628,
     629,   172,     0,     0,     0,   172,   172,   169,     0,     0,
       0,     0,     0,     0,   172,   172,   169,     0,     0,     0,
       0,     0,     0,   172,   172,   169,     0,     0,     0,   172,
     175,   175,   175,   175,   175,     0,   175,   175,     0,   172,
     172,   175,   175,   175,   175,   175,     0,   175,   175,     0,
     172,   172,   685,   686,   687,   688,   690,     0,   693,   694,
       0,   172,   696,   697,   698,   699,   700,     0,   702,   703,
     172,   615,   172,     0,   621,     0,     0,   708,     0,   745,
     165,     0,     0,   165,     0,     0,     0,   756,   165,   760,
     761,   165,   763,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   785,   788,   789,     0,
     165,     0,     0,     0,   805,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1086,  1065,     0,  1072,  1073,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   154,     0,
       0,    83,     0,     0,   932,   933,   162,     0,     0,     0,
    1055,  1053,  1063,   839,   841,   162,  1141,  1182,  1181,  1183,
    1225,     0,  1235,  1265,     0,     0,  1260,  1259,   236,     0,
       0,     0,   277,     0,     0,     0,   295,   165,   403,   407,
     424,   426,     0,   434,   469,     0,     0,     0,     0,     0,
       0,   953,   958,   961,   960,   964,   965,   966,   968,   972,
     977,   978,   980,   981,   984,   985,   989,   162,   165,   996,
     162,   997,  1001,   162,  1011,   162,     0,     0,   518,     0,
     590,   601,   175,   172,   630,   175,   175,   175,   175,   175,
       0,   175,   175,   172,   175,   175,   175,   175,   175,     0,
     175,   175,   172,   175,   175,   175,   175,   175,     0,   175,
     175,   172,   175,   645,   646,   647,   648,   650,   172,   653,
     654,     0,   175,   175,   674,   675,   676,   677,   679,   172,
     682,   683,     0,   175,   689,   172,     0,   695,   172,   704,
     617,   172,   713,   714,   154,   747,     0,   165,   750,     0,
     154,     0,   758,   762,   154,     0,   769,   770,   771,   772,
     776,   777,   773,   774,   775,     0,     0,   165,   797,     0,
     154,     0,     0,   810,   165,     0,     0,   165,   165,     0,
     857,     0,   186,   186,     0,     0,   186,     0,   186,  1043,
       0,     0,     0,     0,     0,     0,     0,     0,  1064,     0,
       0,   186,   186,     0,     0,     0,     0,     0,     0,     0,
       0,   927,     0,     0,     0,  1043,    84,     0,   186,     0,
    1088,   931,     0,     0,     0,   218,  1267,  1266,     0,     0,
     240,     0,     0,     0,     0,   310,   435,   329,     0,   949,
       0,   194,     0,   990,   991,   995,  1002,  1012,   361,   329,
       0,   602,   627,   636,   637,   638,   639,   640,   172,   642,
     643,   175,   665,   666,   667,   668,   669,   172,   671,   672,
     175,   656,   657,   658,   659,   660,   172,   662,   663,   175,
     649,   175,   172,   655,   678,   175,   172,   684,   691,   172,
     701,   618,     0,   165,   751,     0,     0,     0,     0,     0,
     778,   779,   795,     0,     0,     0,   806,   811,     0,   820,
     821,   812,   165,     0,   187,  1043,  1043,    83,     0,  1043,
       0,  1043,   901,   154,     0,  1067,     0,  1070,  1104,  1071,
    1069,  1066,     0,  1043,  1043,    83,     0,     0,  1043,  1043,
       0,     0,  1043,   930,   928,   929,   908,  1043,  1043,  1088,
    1099,     0,  1056,   843,     0,     0,     0,   242,     0,     0,
       0,   330,   331,   351,     0,     0,   195,   196,   951,   952,
     369,     0,   175,   644,   175,   673,   175,   664,   651,   175,
     680,   175,   692,     0,   746,   165,   165,     0,   165,     0,
     165,   165,     0,   165,     0,  1043,   914,   910,  1043,     0,
     915,     0,   909,  1043,     0,  1068,     0,   912,   911,  1043,
       0,     0,   906,   904,  1043,   154,   905,   907,   913,  1099,
    1050,     0,     0,  1089,  1097,  1140,     0,     0,     0,   273,
     296,   299,   297,     0,     0,   948,   154,   563,   641,   670,
     661,   652,   681,   165,   749,   755,     0,   768,   765,   796,
     801,     0,   816,     0,   919,   903,    83,     0,   917,  1105,
       0,   902,    83,     0,   918,     0,  1051,  1101,  1103,     0,
    1096,     0,     0,   278,     0,     0,     0,     0,   194,     0,
     752,   154,   766,   798,   830,  1043,     0,     0,  1043,     0,
     165,  1102,  1098,   241,     0,     0,     0,     0,     0,   950,
     724,   154,   753,   767,   154,   799,   921,     0,  1043,   920,
       0,     0,   243,   289,     0,   288,     0,   754,   800,    83,
     922,    83,  1043,   287,   286,  1043,  1043,   916,   924,   923
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,  1402,   172,   152,  1249,  2475,  2476,   425,   426,
     427,   428,   153,   154,   155,   687,   679,    91,   806,   448,
    1199,  1666,  1339,  1352,  1335,  1909,  2575,  1399,  2628,  1569,
     337,   759,   762,   765,   773,    63,   361,   367,   371,   374,
      68,   377,    75,   393,   389,   383,   400,    82,   405,    92,
      98,   410,   412,   414,   482,   860,  1635,   416,   419,   105,
     435,   156,   158,  2623,   174,   214,   471,   849,   473,   483,
     852,   857,   485,   487,   863,   490,   865,   501,   868,   870,
     504,   508,   512,   514,   517,   521,   548,   544,  1262,   535,
     888,   893,   885,  1250,   899,   538,   558,   561,   566,   571,
     579,   928,   930,   932,   934,   584,   938,   217,   586,  1736,
     235,   588,   590,   594,   599,   607,   244,  1328,   610,   252,
     619,  1344,   621,   627,   983,  1360,   978,  1777,  1366,  1364,
    1779,   979,  1369,  1371,   633,   636,   631,   254,   262,   264,
     674,  1060,  1426,  1049,  1524,  1953,  2269,  1065,  1058,   923,
    1303,  1307,  1315,  1317,  1937,   270,  1074,  1077,  1085,  2241,
    2242,  2243,  1938,  2610,  2611,  1108,  1111,  2683,  2684,  2680,
    2681,  2727,  2244,  2245,   278,   284,   292,   701,   696,   297,
     302,   304,   711,   718,  1137,  1142,   768,   756,   310,   314,
     725,   320,   732,  1574,   745,   746,  1173,  1168,  1580,  1158,
    1586,  1598,  1594,  1162,   750,   734,   326,   327,   341,  1186,
     344,   350,   783,   786,   780,   352,   355,   791
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2549
static const yytype_int16 yypact[] =
{
    4739,    84,   918,    44, -2549, -2549,  1400,  -127,   152,  1012,
     740,   125,  2874,   163,   172,   947,    36,  4924,   513,  2083,
   -2549,   172,  1045,   245,  1059,   -33,   154,   274,   707,   330,
     394,   510,  2440,    98,   671,   451,   446,   707, -2549,   124,
      21,   915, -2549,   123,   574,   456, -2549,    58, -2549,    50,
    3281,   354,    77,   610,   158,  1013,   353,   691,   706,    87,
     710,     4,   121, -2549, -2549, -2549,   825,   164, -2549,   224,
      57,   172,   770,   534,   213, -2549,   732,   164, -2549, -2549,
      30,   164, -2549, -2549, -2549, -2549,   164, -2549, -2549, -2549,
   -2549, -2549, -2549,   113,   723,   790,   817,   150, -2549,   164,
    1324,   164,   164,   891,   164, -2549, -2549, -2549,   642, -2549,
   -2549, -2549, -2549,  4314, -2549, -2549, -2549, -2549, -2549, -2549,
     164, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549,
   -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549,
   -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549,
   -2549, -2549, -2549,  1304, -2549,   164, -2549,   850, -2549, -2549,
     172,   172,   172,   172,   172,   172, -2549, -2549,   172,   172,
     172,   172, -2549,   748, -2549,   803,  1644,   755,    54,   600,
     725,    43,  3772,   438,  4369,  4284,   866,  4314,  2803, -2549,
     529,   -70,   897,   836,   674,   463,   917,   707,   431, -2549,
     840, -2549,   751,   718,   209, -2549,   177, -2549,   567, -2549,
      83,   905,   191, -2549, -2549,  4436, -2549, -2549, -2549,   935,
     982, -2549, -2549, -2549, -2549,   105, -2549, -2549, -2549, -2549,
     745, -2549, -2549,  4436,  3682, -2549, -2549,    31, -2549,  1021,
    1024,   500, -2549,   164, -2549,  1033,    63,  1041,   457,   792,
    1075,    22, -2549, -2549, -2549,  1079,  1081,   172,   172,   164,
     164, -2549, -2549,  1084, -2549, -2549, -2549, -2549, -2549, -2549,
    3164,   693, -2549,  1089,    41,   164,  4436,   164, -2549,  1091,
   -2549, -2549, -2549, -2549, -2549,   164,  1155,   172,  1053,   164,
    1304,   164, -2549,  1096, -2549,  4522, -2549, -2549,   828,  1101,
    1107,   164, -2549,  1112, -2549, -2549,    -5,  1116,  4436,  1125,
   -2549,  1167,   164,  1032, -2549,   462,  1011,  1482,   519,  1152,
   -2549, -2549, -2549, -2549, -2549, -2549, -2549,  1132, -2549,   376,
      -1,    17,   115,    60,   164,   164,   128, -2549,   164,   889,
    1162, -2549,   164,   164, -2549,  1164,    39,    47,  1171,  1304,
   -2549, -2549, -2549,   882,   164, -2549, -2549, -2549, -2549, -2549,
     164, -2549,  1173,  1174, -2549,   164,  1242, -2549, -2549, -2549,
   -2549, -2549, -2549,   164, -2549, -2549,   164, -2549, -2549,   715,
     715, -2549,  1179, -2549, -2549, -2549, -2549, -2549, -2549, -2549,
   -2549, -2549, -2549, -2549,   972,   164,   164,  1190,  1194,  1198,
   -2549, -2549,   164,   164,   164, -2549,   164, -2549,  1212, -2549,
   -2549, -2549, -2549,   948, -2549,  1214, -2549,  4436,  1219, -2549,
     164, -2549, -2549, -2549,   164,  1227,  1231,  1231,  4436,   164,
     164,   164,   164,   164,   164, -2549,   164,  4314,  1324,   164,
     164, -2549, -2549, -2549, -2549, -2549, -2549, -2549,  1324,   164,
   -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549,
   -2549,  1223, -2549,   973,    61, -2549, -2549, -2549, -2549, -2549,
   -2549, -2549, -2549, -2549,   -43, -2549, -2549, -2549,  1080, -2549,
     412,   806,   806, -2549, -2549, -2549,  1248, -2549,  1255, -2549,
   -2549,   -46, -2549,  1093, -2549, -2549, -2549,  1100, -2549, -2549,
    1304, -2549,   164,   164, -2549,  4436,  4436,  1304, -2549, -2549,
    1304, -2549, -2549, -2549, -2549,  1304, -2549, -2549,  4436,  1304,
     164, -2549, -2549,  4436, -2549,  1280,   409,  1087,     9, -2549,
   -2549,  1088,  4436,     7, -2549, -2549, -2549, -2549, -2549,  1291,
    1295,  1298, -2549,  1105, -2549, -2549, -2549,   164, -2549, -2549,
     518, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549,
   -2549, -2549,    83, -2549, -2549, -2549, -2549, -2549, -2549,  1117,
    1124, -2549, -2549,  1249,  1253,  1270, -2549, -2549,  1113, -2549,
     164,  1333,  1111,  4522, -2549,  1304, -2549,  1337, -2549, -2549,
   -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549,
   -2549, -2549,  4436,  4436,  4436,  4436, -2549, -2549,  1339,   172,
   -2549, -2549,  1341,  1343,  1150,   164, -2549,   908,  1262, -2549,
    1347, -2549,   443,  1271,  3562,    49,  1355, -2549,  1358, -2549,
    1360, -2549,    27, -2549,  1363,  1393, -2549,  1361, -2549, -2549,
   -2549,   164, -2549,  4522,  4117,   823,   576,  1397,   428,  1310,
   -2549, -2549, -2549,  1388,   496,  1409,  1410,    62,   164,   469,
     617,    90,  4436,   172,  1601,   695,    37,    91,   132,    15,
   -2549,  1404,  1407,  1422, -2549, -2549, -2549, -2549, -2549, -2549,
   -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549,   164, -2549,
   -2549, -2549,   164,   164,   164,   164, -2549, -2549,   164,  1304,
     164, -2549,   164,  1324,   164,  1424,  1304, -2549, -2549, -2549,
   -2549, -2549, -2549, -2549, -2549,  1427,   399,   581, -2549, -2549,
   -2549,  1431, -2549, -2549, -2549, -2549,  1315, -2549,  1432,  1434,
    1348,  1439, -2549,  1443, -2549,  1446,  1356,  1447,   541,   543,
     582,    51,   584,  1451,   598, -2549, -2549,  1452,  1453,  1455,
   -2549, -2549,  1457, -2549, -2549, -2549, -2549,  1466, -2549, -2549,
    1467, -2549, -2549,  1468, -2549, -2549, -2549, -2549, -2549, -2549,
   -2549,   164,   164, -2549,   164,   964,   164,   164, -2549,   229,
   -2549,  1058,  1472, -2549,  1066,  1474, -2549, -2549,    12,   164,
     164, -2549,  1444, -2549, -2549,  1475,  1258,   164,  1469,   185,
   -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549,
   -2549, -2549, -2549, -2549,  1479,  1481,   164,   164,   164,  1483,
     172,  1485,  1488,  1304,  4436, -2549, -2549, -2549, -2549, -2549,
    1304, -2549, -2549,   164,   164,   164,  4436,   164,  1324,   164,
   -2549,   164, -2549, -2549, -2549, -2549, -2549,  1489,  1491, -2549,
   -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549,
   -2549, -2549,   438, -2549,   164, -2549, -2549, -2549, -2549, -2549,
   -2549, -2549, -2549,  4436,   164,  1304,  1304,    12,    12,    12,
    1304,  1324,   164,  1304, -2549, -2549, -2549,   164, -2549,   403,
    1311,  1493,  1501, -2549, -2549,  1304, -2549,  1327,  1349, -2549,
    1503,  1515,  1517,  1137,   164,  4251,   383,   639, -2549, -2549,
   -2549,   164,   131,  1110, -2549,  1263, -2549,  1601,  1264,   196,
    1237,    95, -2549, -2549,   164, -2549, -2549, -2549, -2549, -2549,
   -2549, -2549, -2549, -2549, -2549,   164,  1525, -2549, -2549, -2549,
      12, -2549, -2549, -2549, -2549, -2549,  4404, -2549, -2549,  1530,
    1538,   164,  1540,  1542,  1543,   -14,   -14,   -61,  1531,  1545,
    1546,  1547,  1277,  1283,  1551,  1556,  1557,   472,   472,   -61,
    1560,  1561,   -61,  1562,  1563,  4925,  1564,  1565, -2549, -2549,
    1566,  1567,   468, -2549,  1569,  1572,  1578,  1580,   -14,   -61,
    1584,  1588, -2549,  1592, -2549, -2549,  1304,   -39,  1147,  1357,
     -16,  1366,  1459,   546,   -13,  1597,    65,  1448,  1496,  1541,
    1528,  1573,   388,  1367,  1505,  1609,  1402,    42,    19,   258,
     516,  4436,  1601,  1581,   625,  1378,  1412,  1625,    82, -2549,
   -2549,    96,  1627,  1628, -2549, -2549, -2549,  1629,  1421,    29,
    1601,  1423, -2549, -2549, -2549,   172,  1635,  1638,   164, -2549,
   -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549,    10, -2549,
    2035, -2549,   164, -2549,   164, -2549, -2549, -2549, -2549,   164,
     164,   164,   428,  4436, -2549,  1639,  1204, -2549, -2549,   164,
   -2549, -2549,   164,  4436,   164, -2549, -2549, -2549, -2549, -2549,
   -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549,   172,
     164, -2549,   164,   428,  1641, -2549,   164,   164, -2549,   172,
   -2549, -2549, -2549,   173,  1647,  1652, -2549, -2549, -2549, -2549,
   -2549,   164,   164, -2549, -2549,  1324,   164,   164, -2549, -2549,
   -2549, -2549,  1645,   164, -2549,   164,  1549, -2549,   164, -2549,
     164,  1550, -2549,  1655, -2549,  1064,  1064,   666,  1064,  1659,
   -2549,   668, -2549, -2549,  1660,  1661,   722,  1656, -2549,  1663,
    1664,  1667, -2549,   747,   771,  1668,  1669,  1671, -2549, -2549,
    1673,  1675,  1672, -2549,  1064,  1064,  1064,   164, -2549, -2549,
   -2549,   164, -2549,   164,   480,  4436, -2549,   164, -2549,  4522,
    1304, -2549, -2549,  1676, -2549, -2549,  1678, -2549, -2549, -2549,
   -2549,  1677,  1053, -2549,   164,  1679,   164,   164,   164,  1015,
   -2549,  1666,  1680,   164,   164,    67,  1683,   172,   172, -2549,
    1304,   164,  1681,  1689,  1691,  1304,  4436, -2549,   164, -2549,
   -2549, -2549,   164,   164,   164,  1304,  4436,    12, -2549, -2549,
   -2549, -2549,  1324,   164,  1692,    12,   164,  1662,  1674,   486,
   -2549,  1696, -2549, -2549,   932,  3253,   164, -2549,   164,  1693,
    1706,   164, -2549,  1709,  1008,  4314,  1473,   393,  1478,   136,
    4436,   700, -2549,    68,  1570,   139,   720,  1480,   140, -2549,
   -2549,   448,  1553,   538,  1594,   -22,  1601,   539, -2549,  1717,
    1486, -2549,   629, -2549, -2549, -2549, -2549,  1601,  1513, -2549,
   -2549, -2549, -2549, -2549,   164, -2549,   164, -2549, -2549,   164,
     164, -2549,   164, -2549,   164, -2549, -2549, -2549, -2549,  1532,
     164, -2549,   164,    -6, -2549, -2549,  1723,  1730, -2549,   164,
     -14,   -14,   -14, -2549, -2549, -2549, -2549, -2549, -2549,  1731,
     -14,   -14,   -14,   988, -2549, -2549,   472,   -14,   -14,   -14,
   -2549, -2549,   -14,   -14,  1733,   -14,   -14,  1735,   472,   996,
   -2549,  1736,  1737,  1739, -2549,   744, -2549,   765,   786, -2549,
    1020, -2549,  1464,  1740,  1742,  1743,   472,   472,   -61,  1745,
    1746,   -61,  1750,  1747,  1752,   -14,   -14, -2549,  1755,   -14,
     -14, -2549,  1757, -2549, -2549, -2549, -2549, -2549, -2549,   172,
   -2549, -2549, -2549,  4314,   620,   172,   164,  1286,  1350,   421,
   -2549, -2549, -2549,   434, -2549, -2549, -2549, -2549, -2549, -2549,
   -2549, -2549, -2549, -2549, -2549, -2549,  1758,   172,   164, -2549,
     172,  1760,   164,  4436,   172,  1415,  1533,  1534,   170,   234,
    1536,   237,  1460,  1470,  1768,  1775,  1780,   546,  1782,  1783,
    1784,  1476,  1477,  1217,  1788,   172,   164,  1309,  1461, -2549,
   -2549,   172,  4436, -2549, -2549,  4436,   164,    23,  1791,   172,
     164,  1304,   172, -2549,  1793,  4436,  4436,   164, -2549, -2549,
   -2549,   172,   172,  4436, -2549, -2549, -2549, -2549, -2549, -2549,
    4436,   164,   172, -2549, -2549, -2549,   164, -2549, -2549,  1797,
     164,  1575,   166,   164,  1577,   164,   168,   164, -2549,   164,
    1583,  1585,   164,   164,   164,   164,   164,   164,   164,   164,
      14,   164,   164,  1586, -2549,   164,   164,   164,   164, -2549,
    4436,  1304,  1801,  4436,  4436,   164,   164,  1304, -2549,   164,
     164,   164,  4436, -2549,   164,   164, -2549, -2549, -2549,  1804,
   -2549, -2549, -2549, -2549, -2549, -2549,  1808,   164,   164, -2549,
     164,   164, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549,
   -2549,  1810,  1811,  1814, -2549, -2549,  1064,  1815,  1817,  1819,
   -2549,  1820,  1821,  1822,  1823,  1826, -2549,  1827, -2549, -2549,
   -2549,  1828,  1829,  1832, -2549,  1833,  1834,  1836, -2549, -2549,
   -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549,   164,   164,
     164, -2549, -2549,   164,  1304, -2549, -2549, -2549,  1053,   164,
    1304,   164,   164,   164, -2549,   164,   164,  1837,   164,  1840,
    1802,   164,   164, -2549, -2549,  1842,  4436, -2549, -2549, -2549,
     164, -2549, -2549, -2549, -2549,  1304, -2549,  1168,   164,  1168,
      12,  1304,  4436,   164,   164,  1844, -2549, -2549, -2549, -2549,
   -2549,   164, -2549, -2549, -2549, -2549, -2549,  4436, -2549,  4436,
     164,  1845, -2549, -2549,  1847,  1849,  1850,  1853,  1856,  4436,
    1304, -2549,  4436, -2549,  4436,  4436,  4314,  4436,  1304, -2549,
    4436, -2549, -2549,  4436, -2549, -2549,  4314,  4436, -2549,  4436,
    4436,  4314,  4436, -2549,  4436,  4436,   164, -2549, -2549, -2549,
    4436,  4436,  4436, -2549, -2549,  4436,  4436, -2549, -2549, -2549,
   -2549,  4436,  4436, -2549, -2549, -2549, -2549, -2549,   164,   164,
   -2549, -2549,  1859,   164, -2549, -2549,  1871,  1873, -2549,   164,
   -2549, -2549, -2549,   -14, -2549, -2549, -2549,  1875,  1877,  1878,
   -2549, -2549,   -61,  1880,  1882,  1883,   -14, -2549, -2549, -2549,
   -2549, -2549,   472, -2549, -2549,  1885,   -14,  1889,  1890,  1893,
     472,   472,   -61,  1896,  1897,  1898,  1129, -2549,  1131, -2549,
    1138,  1574,  1899,  1900,  1901,   472,   472,   -61,  1903,  1904,
     -61,  1908,  1611,  1909,  1911,  1912,   472,   472,   -61,  1914,
    1915,   -61,  1916,  1658,  1918,  1930,  1943,   472,   472,   -61,
    1946,  1951,   -61,  1952,  1953,  1955,  1956,   472,   472,   -61,
    1958,  1959,  1990,   472, -2549, -2549, -2549, -2549, -2549,  1960,
   -2549, -2549,  1992,   472,  1993,  1995, -2549, -2549,   -14, -2549,
   -2549,  1996, -2549,  1304, -2549,  4436,   164, -2549,   164,  4436,
     164,  1998,  1147, -2549, -2549, -2549, -2549, -2549, -2549,  2000,
   -2549,  4436,   172,  2003,  4436,  1304, -2549,  2006,  1147,   164,
     164,   164,   164,   164,   164,   164,   164,   164,  2008,  2009,
   -2549, -2549, -2549,  2010, -2549, -2549, -2549,  2014,  2015, -2549,
   -2549, -2549, -2549,   164,  4436,   164,  2016,  1147,   172,  1304,
    1304, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549,
   -2549, -2549,   164,  1324, -2549, -2549,  1304,  1304,   164, -2549,
   -2549,  1304,  1304, -2549, -2549, -2549, -2549,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,  2249, -2549,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
    1651,  2017,   164, -2549,   164,   164,   164,  2020,  2023, -2549,
   -2549,  1304,    12,  2031,  1304,  1304, -2549, -2549,  1324,   164,
   -2549,  2032,  1304, -2549, -2549, -2549,  2033, -2549, -2549, -2549,
   -2549,  1064,  1064,  1064, -2549, -2549, -2549, -2549, -2549, -2549,
   -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549,
    1147,   164, -2549,   164, -2549,   164,  1304,   164, -2549,  1324,
     164, -2549,   164, -2549,  1807,  2034,  2036, -2549,  2038,   164,
     164,  2039,  1304,  4436, -2549, -2549,   164, -2549,   164, -2549,
      12,   932,   164,  2040, -2549,   164, -2549, -2549,    83, -2549,
    2041,  2042,  2043,  2044,  2046,  1304, -2549,   932,   932,   932,
    1304, -2549,   932,    12,   932,   932,  1304, -2549,   932,   932,
     932,  1304, -2549,   932,   932,  1304,  4436,   932,  1304,   932,
     932,  1304,   932,  1304, -2549, -2549,  2048,    83,  2049, -2549,
     164, -2549, -2549, -2549, -2549,  2051, -2549, -2549, -2549, -2549,
     -14,   472, -2549, -2549, -2549, -2549, -2549, -2549,  2052, -2549,
   -2549,   472,  2053,  2054,  2058,   472,   472,   -61,  2060,  2061,
    2062,  2063,  2064,  2065,   472,   472,   -61,  2067,  2069,  2070,
    2071,  2073,  2076,   472,   472,   -61,  2078,  2079,  2081,   472,
     -14,   -14,   -14,   -14,   -14,  2085,   -14,   -14,  2088,   472,
     472,   -14,   -14,   -14,   -14,   -14,  2090,   -14,   -14,  2091,
     472,   472, -2549, -2549, -2549, -2549, -2549,  2092, -2549, -2549,
    2093,   472, -2549, -2549, -2549, -2549, -2549,  2095, -2549, -2549,
     472, -2549,   472,  2096, -2549,  2097,  2099, -2549,  4522, -2549,
     932,  2100,  4436,   932,   164,  4436,  2101, -2549,   932, -2549,
   -2549,   932, -2549,  4436,  2102,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164, -2549, -2549, -2549,  4436,
     932,   164,  4436,  2103, -2549,  1324,  1324,  4436,  1324,  1324,
    4436,  4436,  1324,  1324,   164,   164,   164,   164,   164,   164,
    1147,   164,   164,   164,  1484,  1494,  1599,  1687,  1751,  1756,
    1759,  2249, -2549,  1763, -2549, -2549,  1147,   164,   164,   164,
     164,  1147,   164,   164,   164,   164,   164,   164,  1304,   164,
    1523,  1147,   164,   164, -2549, -2549,    12,   172,  2105,  2108,
   -2549, -2549, -2549, -2549, -2549,    12,  2110, -2549, -2549, -2549,
   -2549,   164, -2549, -2549,  1324,   164, -2549, -2549, -2549,  1048,
    2112,  2118, -2549,   164,  2111,  1168, -2549,   932, -2549, -2549,
   -2549, -2549,  2119, -2549, -2549,  2121,  2123,  2122,  2124,  4436,
    2125, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549,
   -2549, -2549, -2549, -2549, -2549, -2549, -2549,    12,   932, -2549,
      12, -2549, -2549,    12, -2549,    12,  2126,  2128, -2549,   164,
   -2549, -2549,   -14,   472, -2549,   -14,   -14,   -14,   -14,   -14,
    2129,   -14,   -14,   472,   -14,   -14,   -14,   -14,   -14,  2131,
     -14,   -14,   472,   -14,   -14,   -14,   -14,   -14,  2132,   -14,
     -14,   472,   -14, -2549, -2549, -2549, -2549, -2549,   472, -2549,
   -2549,  2134,   -14,   -14, -2549, -2549, -2549, -2549, -2549,   472,
   -2549, -2549,  2136,   -14, -2549,   472,  2137, -2549,   472, -2549,
   -2549,   472, -2549, -2549,  1304, -2549,  4436,   932, -2549,  2138,
    1304,   164, -2549, -2549,  1304,   164, -2549, -2549, -2549, -2549,
   -2549, -2549, -2549, -2549, -2549,   164,   164,   932, -2549,  2139,
    1304,   164,  1324, -2549,   932,   164,  1324,   932,   932,  4436,
   -2549,   164,  2140,  2140,   164,   164,  2140,  1147,  2140, -2549,
    4436,   546,  2143,  2141,  2144,  2146,  2148,  2151, -2549,   172,
    1147,  2140,  2140,   164,   164,  1147,   164,   164,   164,   164,
     164, -2549,  1324,   164,  2152, -2549, -2549,   164,  2140,   172,
       5, -2549,  2154,   172,  2156, -2549, -2549, -2549,  2157,   164,
   -2549,  2158,  2160,  1831,   164, -2549, -2549,    72,  4436, -2549,
    2161,    89,  4436, -2549, -2549, -2549, -2549, -2549, -2549,    72,
     164, -2549, -2549, -2549, -2549, -2549, -2549, -2549,   472, -2549,
   -2549,   -14, -2549, -2549, -2549, -2549, -2549,   472, -2549, -2549,
     -14, -2549, -2549, -2549, -2549, -2549,   472, -2549, -2549,   -14,
   -2549,   -14,   472, -2549, -2549,   -14,   472, -2549, -2549,   472,
   -2549, -2549,   164,   932, -2549,  4436,  4436,   164,  4436,   164,
   -2549, -2549, -2549,  4436,  4436,   164, -2549, -2549,  4436, -2549,
   -2549, -2549,   932,  2163, -2549, -2549, -2549,  1147,   164, -2549,
    2165, -2549, -2549,  1304,  2166, -2549,  2168, -2549, -2549, -2549,
   -2549, -2549,  2169, -2549, -2549,  1147,   164,  2170, -2549, -2549,
     164,  4436, -2549, -2549, -2549, -2549, -2549, -2549, -2549,     5,
    1537,  1601, -2549, -2549,  2171,  2172,  2173, -2549,  2047,  2178,
      73, -2549, -2549, -2549,  2179,  4436, -2549, -2549, -2549, -2549,
   -2549,  2180,   -14, -2549,   -14, -2549,   -14, -2549, -2549,   -14,
   -2549,   -14, -2549,  4522, -2549,   932,   932,   164,   932,  2181,
     932,   932,   164,   932,   164, -2549, -2549, -2549, -2549,  2183,
   -2549,   164, -2549, -2549,  2184, -2549,   164, -2549, -2549, -2549,
    2186,   164, -2549, -2549, -2549,  1304, -2549, -2549, -2549,  1537,
   -2549,  1631,  1799,  1601, -2549, -2549,  2198,  2199,  2187, -2549,
   -2549, -2549, -2549,   936,   936, -2549,  1304, -2549, -2549, -2549,
   -2549, -2549, -2549,   932, -2549, -2549,  2201, -2549,  4314, -2549,
   -2549,  2202, -2549,  1147, -2549, -2549,  1147,   164, -2549, -2549,
     164, -2549,  1147,   164, -2549,  4436, -2549,  1631, -2549,   172,
   -2549,  2206,  2209, -2549,   164,   164,   164,   164,    89,  2226,
    4314,  1304, -2549,  4314, -2549, -2549,   164,  2203, -2549,   164,
     932, -2549, -2549, -2549,  2227,  2228,   164,  2229,   164, -2549,
   -2549,  1304, -2549, -2549,  1304, -2549, -2549,  2231, -2549, -2549,
    2232,  2233, -2549, -2549,  2234, -2549,  2235, -2549, -2549,  1147,
   -2549,  1147, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2549, -2549,    -3, -2549,   430, -2549, -1632,  -970,  1595, -2549,
     852,  -422,  1846,   -41,    81, -2549, -2549, -1645,  1686,  1803,
    -735, -1071,  -884,   714,  1602, -2549, -1016, -2549,  -700, -1136,
   -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549,
   -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549,
   -2549, -2549, -2549, -2549,  -580,  -476, -2549, -2549, -2549, -2549,
   -2549, -2549, -2549,  -435, -2549, -2549, -2549, -2549, -2549, -2549,
   -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549,
   -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549,
   -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549,
   -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549,
   -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549,
   -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549,
   -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549,
   -2549, -2549, -1446, -2549, -2549, -2549, -2549, -2549,  -629, -2549,
   -2549, -2549, -2549, -2549, -2549,    45, -2549, -2549, -2549, -2549,
     -76,  -657,  -889,  -439, -2549, -2549, -2549, -2549,  -507,  -491,
   -2549, -2549, -2548, -2549, -2549, -2549, -2549, -2549, -2549, -2549,
   -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549,
   -2549, -2549, -2549, -2549, -2549,  1499, -2549, -2549, -2549, -2549,
   -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549,
   -2549, -2549, -2549, -2549, -2549, -2549, -2549, -2549
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1238
static const yytype_int16 yytable[] =
{
      67,  1883,  2026,   106,  2028, -1087,   861,  1099,   104,   349,
    1570,   896,  1575,   890,  1734,  1498,   840,    64,    65,  1950,
    1112,   106,    64,    65,    64,    65,   843,   634,  1403,   289,
    1073,  1076,    64,    65,   403,   608,   369,   313,  1605,  1606,
    1607,   986,  1103,   781,  1393,   681,   343,    64,    65,   354,
    1902,   784,   360,    64,    65,  1463,   366,    64,    65,   373,
      64,    65,   338,   376,   378,  1488,   757,   388,   617,  1461,
     395,   399,  1903,   766,   402,  1904,    64,    65,   406,  1068,
      64,    65,   306,   407,   760,  1354,  1905,  1480,  1357,   987,
      64,    65,  1430,    64,    65,  1691,   420,   424,   429,   430,
     434,   436,   106,   293,  2621,  1388,  1337,  1405,  1105,  1906,
    1427,  1197,  1318,   291,  1633,  1394,  1113,   440,   408,   106,
     111,  2626,  1114,  1482,    64,    65,  1078,  1907,    64,    65,
    1079,    64,    65,  2728,    64,    65,   106,   980,   111,  1163,
     109,   897,  1239,  1240,  1241,  1333,   536,   716,  1710,   591,
     866,    54,   449,   850,  1464,   417,    77,  1686,   106,   255,
    1696,  1701,    76,   357,  1489,    99,   847,    64,    65,    64,
      65,    64,    65,  1334,   321,   481,   106,   891,  1547,  2751,
     502,   418,   763,   173,   339,   100,   307,  1395,  1396,  1208,
    1548,  1871,    78,   592,   439,  1319,   157,  1209,   567,    64,
      65,   253,  1397,  1080,   114,  1323,  1711,   582,   981,  1338,
    1164,   851,   115,   116,   488,   867,    64,    65,   311,   111,
     988,   256,   114,   489,   322,  1081,  1406,   609,   379,  1428,
     115,   116,  1735,   323,  1431,  1189,   111,  1692,   101,   537,
     615,   682,   550,   257,   474,  1398,   372,   384,   683,   684,
     475,   848,   767,   111,   706,  1873,   641,   642,  1876,   717,
    1311,   245,   324,  2690,   503,    79,   511,   340,   516,   520,
    1462,   563,   688,  1712,   690,   111,   547,  1069,  1198,   263,
     404,  1128,   692,   695,   685,   698,   702,  1082,   704,   476,
     370,   580,   396,   111, -1087,   989,   258,   635,   714,   119,
     593,   358,   117,   114,   898,   990,  1106,  1432,   724,   726,
    1693,   115,   116,   618,   568,   477,  1465,   119,   312,  1499,
     114,  1115,   102,  1951,  1483,   892,  1490,  1104,   115,   116,
     782,   769,   770,   772,  1481,   774,   991,   114,   785,   777,
     778,    66,  1305,   409,  1634,   115,   116,   342,   149,    80,
     790,   792,  1433,   150,   151,  1694,   771,   793,  2622,   114,
    1070,   478,   796,   798,   385,  1472,   149,   115,   116,   700,
     799,   150,   151,   800,   353,  2627,   271,   114,  1687,  1908,
    2691,  1697,  1702,  1492,   365,   115,   116,  1083,   397,  1107,
     583,   686,   810,   811,  1929,   272,  1934,   273,   119,   815,
     816,   817,    81,   818,   294,   479,   480,  1313,   386,   387,
     753,   308,  1872,   886,   295,   119,  1227,   825,   103,   569,
     380,   826,   325,  1109,   479,  2692,   831,   832,   833,   834,
     835,   836,   119,   837,   309,   424,   841,   842,  1852,  1133,
    1984,    64,    65,  1530,   159,   424,   844,   149,   963,   570,
    1294,   236,   150,   151,   119,   303,   261,   964,   965,  1243,
     259,   279,   622,   296,   149,  1868,   109,   398,   545,   150,
     151,   381,   119,  1372,  1542,  1703,  1874,   551,   382,  1877,
   -1237,   149,  1373,  1374,  1611,   754,   150,   151,  1897,  1350,
    1660,   854,  1051,   329,  1829,   109,   564,  1832,   552,   873,
     874,   390,  1652,   149,   330,   966,   613,   260,   150,   151,
    1656,  1455,  1134,   553,  1295,   274,  1683,   882,   839,   565,
     109,   149,   905,   906,   728,  1467,   150,   151,  1853,   546,
    1375,   331,  1468,  1051,  1052,   305,  1062,    64,    65,  1247,
    1296,  1856,   939,   109,   904,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   275,   522,  1052,   623,   935,   328,   907,
    1044,   747,   755,   977,   729,   908,  1409,   855,   351,   523,
     451,   452,   453,   454,   455,   456,  1135,   215,   457,   458,
     459,   460,   996,   735,   572,  1154,  1045,   887,   332,  1063,
     356,   524,   951,  1410,   216,   573,   554,   276,  1704,  1854,
    1297,  1138,   614,    64,    65,  1845,   277,   362,   117,  1713,
    1456,   525,  1857,  1351,   909,  1684,   967,   968,   995,  1469,
    1723,   748,   574,   924,  1159,   333,  1165,  1411,   526,   910,
    2494,   527,   624,  1412,  1248,  1071,  1720,   117,  1084,  1413,
    1170,  1376,  1377,   737,   911,  1155,   856,  1053,  1136,  1299,
     912,  1714,  1298,  1855,   555,   913,  1705,  1414,   528,   529,
     541,  1051,   117,  1054,  1055,  1119,  1858,   639,   640,  1120,
    1121,  1122,  1123,  1064,  1139,  1124,   363,  1126,  1415,  1127,
     424,  1129,  1156,  1553,  1160,   117,  1166,   625,  1053,  1715,
     364,   969,   730,  1416,   334,   368,   280,   697,   556,   575,
    1171,   970,   971,  1052,  1054,  1055,   972,   557,  1571,   914,
    1577,   530,   626,  1072,   394,  1100,  1378,   401,  1190,  1046,
     731,   531,   298,  1075,  1417,   801,  1379,  1380,   915,  1781,
     335,  1381,   973,   916,   411,   917,   576,  1474,  1782,  1783,
     758,   761,   764,   542,  1470,   265,   336,  1716,  1181,  1182,
    1792,  1183,  1185,  1187,  1188,  1056,  1057,  1382,  1140,  1793,
    1794,   918,   919,  1418,  1583,   675,  1200,  1201,  1572,   920,
    1578,  1803,  1047,  1205,  1206,   413,   543,   749,  1419,  1721,
    1804,  1805,  1300,   532,   533,  1707,  1784,   921,  1101,  1591,
    1420,   802,  1708,  1212,  1213,  1214,  1056,  1057,  1048,   743,
    1653,  1157,   415,  1689,    93,   577,  1717,  1795,    64,    65,
    1222,  1223,  1224,  1595,  1226,   424,  1228,  1421,  1229,   437,
     266,    94,   299,  1698,  1584,  2277,  2278,  2279,  1806,  1422,
    1141,  1423,  1424,  1475,   450,  1301,  1053,  1722,   281,  1232,
    1161,  1234,  1167,   922,   282,   676,   283,   461,  2085,  1592,
     462,  1236,  1054,  1055,   534,   472,  1172,   578,   424,  1244,
     803,  1302,  2186,   707,  1246,    64,    65,   628,  2098,   484,
    1033,  1425,  1102,  1596,    64,    65,   486,   595,  2194,   513,
    1261,  1263,   539,  2135,  1034,   629,  2138,   559,  1304,  1306,
    1309,   391,  1476,  1035,  2146,  2029,  1314,  2149,    95,   708,
     300,  1320,   952,   953,  1036,  2157,   540,  2213,  2160,   301,
      55,   431,  1321,   549,  1363,  2167,   267,  1785,  1786,    64,
      65,   315,  1690,  1233,  1573,  2658,  1579,   858,  1329,   392,
     375,   268,   820,   821,  1037,   677,  1663,  1664,  1796,  1797,
    2301,    96,  1699,  2669,  1056,  1057,   596,    64,  1184,   804,
     954,   709,    56,   678,   805,  1038,  2312,  2313,  2314,  1807,
    1808,  2316,   630,  2318,  2319,   859,   560,  2321,  2322,  2323,
      57,   160,  2325,  2326,   161,   581,  2329,    97,  2331,  2332,
    1585,  2334,  1747,  1748,   432,  2584,   562,   789,   587,   597,
    1767,  1768,  1787,   589,   269,  1466,    64,    65,    64,    65,
      58,  1039,  1788,  1789,   162,  1593,   611,  1790,   612,   316,
    2280,  1665,   163,  1798,  1814,  1815,  1491,   616,    59,   947,
      83,   317,    60,  1799,  1800,  1497,   620,   598,  1801,  1597,
    1749,    64,    65,  1791,  1809,    61,    64,    65,  1769,  1525,
    1040,  1526,  1191,  1192,  1810,  1811,  1527,  1528,  1529,  1812,
    1194,  1195,   107,   359,  1802,  1627,  1535,   858,   710,  1536,
     632,  1538,  1816,   637,  2745,   246,   638,  1041,   433,   643,
    2748,  1674,   164,  1087,   680,  1813,   691,  1540,  1110,  1541,
     705,   955,   956,  1544,  1545,   712,  1564,  1565,  2488,  2405,
     109,   713,  2408,    64,    65,   859,   715,  2412,  1551,  1552,
    2413,   719,   424,  1554,  1555,   318,  1042,  1308,  1043,   721,
    1557,   727,  1558,   733,   237,  1560,   752,  1561,   319,  2428,
      64,  1260,   165,  2102,  2103,  2111,  2112,  2785,  1614,  2786,
      64,    65,  2120,  2121,  1400,  1401,   110,   751,    64,    65,
     166,   167,  1675,   238,   775,    84,   776,   168,   779,   169,
      64,    65,   809,   247,  1608,   787,   957,   794,  1609,   795,
    1610,  1750,  1751,   808,  1613,   248,   958,   959,    85,  1770,
    1771,  2104,    86,  2113,   812,   693,    83,   170,   813,  1619,
    2122,  1622,   814,  1624,  1625,  1626,  1628,   722,  1533,  1534,
    1631,  1632,   112,  1817,  1818,    62,   819,   960,  1640,   822,
     249,  1889,  1890,  2350,   824,  1646,  2495,  2267,   845,  1647,
    1648,  1649,  2359,   239,  1676,  1677,   421,  1566,  1567,   424,
    1654,  2368,   423,  1657,    87,    64,    65,   846,   240,  1678,
    1216,   853,   862,  1669,   797,  1670,  1752,  2504,  1672,   864,
    2447,    64,    65,   171,  1772,  1568,  1753,  1754,   694,   250,
    1204,   871,   117,   869,  1773,  1774,  2460,   118,   828,   829,
     723,  2465,   251,  1621,   884,    88,   889,   894,  1819,    64,
      65,  1849,  1679,    89,    90,  2300,   900,  1755,  1820,  1821,
     901,  1725,   902,  1726,   903,  1775,  1727,  1728,   925,  1729,
     241,  1730,    64,    65,  1894,   926,   927,  1732,  2317,  1733,
     929,    84,  2105,  2106,  2114,  2115,  1739,    64,    65,  1822,
    1661,  2123,  2124,   421,   422,   423,  2554,   931,   936,   441,
     937,   933,   941,   946,    85,   948,  1681,   949,  2025,   950,
     961,   242,   962,    64,    65,  1851,  2562,  1400,  1401,   974,
     982,   243,   984,  2567,   985,   994,  2570,  2571,   992,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,  2107,   993,  2116,
      87,  1846,  1050,  1848,  1850,  1061,  2125,  2108,  2109,  2117,
    2118,  1059,   442,  1066,  1144,  1067,  2126,  2127,    64,    65,
    1867,  1116,  1400,  1401,  1117,  1861,  1118,  2576,  1130,  1864,
    2579,  1132,  2581,   443,   444,  1143,  1147,  1145,  2110,  1146,
    2119,    88,   445,  1148,  1151,  2593,  2594,  2128,  1149,    89,
      90,  1150,  1152,  1893,  1895,  1169,  1202,  1174,  1175,  1176,
     446,  1177,  2608,  1901,    64,    65,  1896,  1912,  1400,  1401,
     447,  1178,  1179,  1180,  1918,  1494,  1193,  2580,  1196,  1251,
    1203,  1207,  2644,  1210,  1844,  1211,  1255,  1215,  1923,  1217,
    2592,  2218,  1218,  1925,  1230,  2597,  1231,  1927,  1252,  1930,
    1931,  2654,  1933,  1935,  1936,  1253,  1939,  1257,  1256,  1942,
    1943,  1944,  1945,  1946,  1947,  1948,  1949,  1952,  1954,  1955,
    1258,  1259,  1957,  1958,  1959,  1960,  1310,  1312,  1316,  1539,
    1322,  2479,  1966,  1967,  1326,  1340,  1969,  1970,  1971,  1546,
    2483,  1973,  1974,  1327,   735,  1330,  2272,  1331,  1332,  1341,
    1444,  1342,  1343,  1345,  1977,  1978,  1347,  1979,  1980,  1346,
    2582,  1348,  1349,  1436,  1355,  1356,  1408,  1358,  1359,  1365,
    1367,  1368,  1370,  1383,  2704,  2705,  1384,  2707,  1445,  2709,
    2710,  1446,  2712,  1385,  1447,  1386,  2606,  2286,  1389,  1434,
      69,  1437,  2503,  1390,  1438,  2505,    70,  1391,  2506,  1404,
    2507,   736,  1429,  1435,   737,  2000,  2001,  2002,  1407,  1457,
    2003,  1448,  1458,  1454,  1459,  2005,  2008,  1460,  2010,  2011,
    2012,  1473,  2013,  2014,  1439,  2016,  1477,  1478,  2019,  2020,
    1479,  1484,  2739,  1485,  1486,    71,  1487,  2023,  1493,  1495,
    1449,   738,  1496,  1450,  1532,  2027,  1543,  1637,  1638,  1556,
    2032,  2033,  1549,  1440,    64,    65,  1441,  1550,  2035,  1563,
    1587,    72,  1559,  1562,  1576,  1581,  1582,  2038,  1588,  1589,
     107,  1590,  1629,  1599,  1600,  1601,  1604,   739,  1602,  2771,
    1603,  1616,  1353,  1617,  1630,  1641,  2656,  2657,  1636,  1618,
    2660,  1623,  2662,  1642,  1088,  1643,  1655,  1671,   463,  2007,
    1658,  1662,  1089,  2066,  2667,  2668,  -444,    73,  1090,  2672,
    2673,  1695,  1659,  2676,  1673,  1682,   464,  1709,  2677,  2678,
    1685,  1718,  1700,  1706,  1724,  2074,  2075,  1737,   740,  1091,
    2077,  1731,   741,   465,  1738,  1743,  2080,  1762,  1719,  1765,
    1823,  1776,  1778,  2744,  1780,  1824,   466,  1825,  1826,  1830,
    1831,  1834,    74,  1092,   110,  1833,  1835,   742,  1451,  1838,
     743,  1093,  1841,  1859,   467,  1863,  2714,  2051,   468,  2715,
     744,  1442,  1880,  1878,  2718,  1869,  1870,  2057,  1875,  1881,
    2721,   469,  2062,  1879,  1882,  2724,  1884,  1885,  1886,  1887,
    1888,  1452,  1891,  2432,  2433,  1910,  2435,  2436,  1915,  1094,
    2439,  2440,  1926,  1928,  1443,  1932,  1963,  1095,  2018,  1975,
     112,  1940,  1976,  1941,  1956,  1981,  1982,  1453,  1983,  2289,
    1985,   470,  1986,  1987,  1988,  1989, -1100,  1990,  1991,  1842,
    1992,  1993,  2474,  1994,  1995,  1847,  1996,  2619,  1997,  1998,
    1999,  2451,  2015,  2181,  2017,  2182,  2021,  2184,  2034,  2039,
    2129,  2452,  2040,  1096,  2041,  2042,  2766,  1860,  2043,  2769,
    1862,  2044,  2486,  2076,  1866,  1097,  2195,  2196,  2197,  2198,
    2199,  2200,  2201,  2202,  2203,   118,  2078,  2079,   290,  2780,
    2082,  1098,  2083,  2084,  2086,  1892,  2087,  2140,  2088,  2091,
    2209,  1898,  2211,  2787,  2093,  2094,  2788,  2789,  2095,  1911,
    2099,  2100,  1914,  2101,  2130,  2131,  2132,  2136,  2137,  2217,
     424,  1919,  1920,  2139,  2141,  2221,  2142,  2143,  2147,  2148,
    2238,  2150,  1924,  2152,  2224,  2225,  2226,  2227,  2228,  2229,
    2230,  2231,  2232,  2233,  2151,  2153,  2246,  2247,  2248,  2249,
    2250,  2251,  2252,  2253,  2254,  2255,  2256,  2257,  2154,  2260,
    2158,  2261,  2262,  2263,  2682,  2159,  2453,  2161,  2162,   438,
    2163,  2164,  2168,  2169,  2172,   424,  2273,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,  2170,  2173,  2175,  2281,  2176,
    2282,  2178,  2283,  2185,  2285,  2187,   424,  2287,  2190,  2288,
    2566,  2193,  2204,  2205,  2569,  2206,  2293,  2294,  2207,  2208,
     827,  2212,  2259,  2298,  2264,  2299,  2682,  2265,   500,  2302,
     507,   510,  2304,   515,   519,  2268,  2274,  2276,  2759,  2290,
    2694,  2291,  2292,  2295,  2454,  2303,  2306,  2307,  2308,  2309,
    2603,  2310,  2336,  2688,  2338,  2340,  2343,  1500,  2345,  2346,
    1756,   585,  1501,  2347,  2351,  2352,   807,  2353,  2354,  2355,
    2356,  2360,  1766,  2361,  2630,  2362,  2363,  2339,  2364,   600,
     606,  2365,  2369,  2370,  1502,  1503,  2371,  1504,  1505,  2378,
    1827,  1828,  2381,   703,  2389,  2392,  2395,  2396,  1506,  2398,
    2401,  2402,   218,  2403,  2406,  2411,  2415,  2431,  2455,  2481,
    1507,  1508,  2482,  2456,  2484,  2493,  2457,  2490,  1509,  2305,
    2459,  1510,   689,  2491,  2496,  2497,  2499,   219,  2498,  2500,
    2502,  2508,  2509,  2518,   699,  2527,  2536,  2404,  2542,  1511,
    2546,  2549,  2555,  2563,  2574,  2586,  1512,  1513,  2585,  2587,
    1514,  2588,   788,  2589,   720,  2590,  2729,  2605,  2337,  2612,
    2614,   220,  2615,  2617,  2618,  2458,  2625,  2655,   221,  2661,
    2679,  2664,  2665,  2666,  2671,  2685,  2730,  2686,  2687,   222,
     223,  2409,  2689,  2695,  2697,  2708,   224,  2716,  2726,  2719,
    2722,  2733,  2416,  2417,  2418,  2419,  2420,  2421,  2422,  2423,
    2424,  2425,  2426,  2731,  2732,  2740,  2743,  2768,  2429,   225,
    1515,  2753,   424,   424,  2754,   424,   424,  2735,  2737,   424,
     424,  2441,  2442,  2443,  2444,  2445,  2446,   226,  2448,  2449,
    2450,  2760,  2772,  2773,  2775,  2779,  2781,  1153,  2782,  2783,
    2784,   227,   228,     0,  2461,  2462,  2463,  2464,   229,  2466,
    2467,  2468,  2469,  2470,  2471,     0,  2473,     0,     0,  2477,
    2478,     0,     0,   823,     0,  1516,     0,     0,     0,   230,
       0,  1517,     0,     0,   830,     0,     0,     0,  2485,     0,
       0,   424,  2487,   838,     0,     0,  2489,     0,  1518,     0,
    2492,     0,  2189,     0,     0,     0,     0,     0,  1519,     0,
       0,     0,     0,   872,     0,  2234,     0,   231,     0,     0,
     877,     0,     0,   878,     0,     0,  2235,     0,   879,     0,
       0,     0,   881,     0,     0,  1520,  1521,     0,  2214,     0,
       0,     0,     0,     0,     0,     0,  2510,     0,     0,     0,
       0,     0,  1088,  2236,     0,     0,  1522,     0,     0,     0,
    1089,   875,   876,     0,     0,     0,  1090,     0,     0,     0,
     232,     0,     0,     0,   880,     0,     0,     0,     0,   883,
     233,     0,     0,     0,     0,     0,     0,  1091,   895,     0,
    2237,     0,     0,     0,     0,     0,     0,     0,   940,     0,
       0,  1523,     0,     0,     0,     0,     0,     0,     0,   234,
       0,  1092,     0,     0,     0,     0,     0,     0,  2557,  1093,
       0,     0,  2559,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2560,  2561,     0,     0,     0,     0,  2565,   424,
       0,     0,  2568,   424,     0,     0,     0,     0,  2573,     0,
       0,  2577,  2578,    64,    65,     0,     0,  1094,   942,   943,
     944,   945,     0,     0,     0,  1095,     0,     0,     0,   107,
    2595,  2596,     0,  2598,  2599,  2600,  2601,  2602,     0,   424,
    2604,     0,     0,     0,  2607,     0,  2090,     0,     0,   285,
       0,     0,     0,     0,  2096,  2097,  2616,     0,     0,     0,
       0,  2620,     0,     0,     0,     0,     0,   109,     0,  2133,
    2134,  1096,  1125,     0,     0,     0,     0,  2631,  1086,  1131,
    2144,  2145,     0,  1097,     0,     0,     0,     0,     0,     0,
       0,  2155,  2156,     0,     0,     0,     0,     0,     0,  1098,
       0,  2165,  2166,     0,     0,     0,     0,  2171,  2238,     0,
    2239,     0,     0,   110,     0,     0,     0,  2174,     0,  2643,
       0,     0,     0,     0,  2647,     0,  2649,     0,  1336,     0,
       0,     0,  2652,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2659,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1387,     0,     0,  2670,  2240,     0,     0,  2674,     0,   112,
       0,     0,  2703,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2693,     0,     0,
       0,     0,     0,     0,     0,     0,  1219,     0,     0,     0,
       0,     0,     0,  1221,     0,     0,     0,   286,     0,     0,
       0,     0,     0,     0,  2706,     0,     0,     0,     0,  2711,
       0,  2713,     0,     0,     0,     0,     0,     0,  2717,   117,
       0,     0,     0,  2720,   118,     0,     0,     0,  2723,     0,
    1220,     0,     0,     0,     0,   287,     0,     0,  1237,  1238,
       0,     0,  1225,  1242,     0,     0,  1245,     0,     0,     0,
    2734,  2736,     0,     0,     0,     0,     0,  2480,  1254,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2746,     0,     0,  2747,     0,  1235,
    2749,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2755,  2756,  2757,  2758,     0,     0,   288,     0,     0,
       0,     0,     0,  2767,     0,     0,  2770,     0,     0,     0,
       0,     0,     0,  2774,     0,  2776,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     0,     0,     0,     0,     0,  2742,
       0,     0,  1325,     0,     0,     0,     0,     0,     0,  1392,
       0,     0,     0,     0,     0,  2342,     0,   518,     0,     0,
       0,     0,     0,     0,     0,  2344,     0,     0,     0,  2348,
    2349,  2762,   107,     0,  2765,     0,     0,     0,  2357,  2358,
       0,     0,     0,     0,     0,     0,     0,  2366,  2367,     0,
       0,     0,     0,  2372,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2382,  2383,     0,     0,     0,     0,     0,
     109,     0,     0,     0,  2393,  2394,     0,  1471,     0,     0,
       0,     0,     0,     0,     0,  2397,     0,     0,   106,     0,
       0,     0,     0,     0,  2399,     0,  2400,     0,     0,  2591,
       0,     0,     0,   107,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   110,     0,     0,  2609,
       0,     0,     0,  2613,   108,     0,     0,     0,     0,  1531,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1537,
       0,   109,  1740,  1741,  1742,     0,     0,     0,     0,     0,
       0,     0,  1744,  1745,  1746,     0,     0,     0,     0,  1757,
    1758,  1759,     0,     0,  1760,  1761,     0,  1763,  1764,     0,
       0,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   110,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1836,  1837,     0,
       0,  1839,  1840,  1615,     0,   111,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   117,  1639,     0,     0,     0,   118,  1644,     0,
       0,  1612,     0,   112,     0,     0,     0,     0,  1650,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1620,     0,
       0,     0,     0,     0,     0,     0,     0,  2512,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2521,     0,     0,
       0,   113,  1645,     0,     0,     0,  2530,     0,     0,   114,
       0,     0,  1651,     0,     0,  2539,     0,   115,   116,     0,
       0,     0,  2541,   117,     0,     0,     0,     0,   118,     0,
       0,  1668,     0,  2545,     0,     0,     0,     0,     0,  2548,
       0,  1680,  2550,     0,     0,  2551,  1688,     0,     0,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2752,
       0,     0,     0,     0,     0,     0,     0,     0,   644,   645,
       0,     0,     0,     0,   119,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,     0,     0,
       0,     0,     0,   149,     0,   646,     0,     0,   150,   151,
       0,   647,  2632,     0,     0,     0,     0,     0,   648,     0,
     649,  2634,     0,     0,     0,   650,     0,     0,   651,  1843,
    2636,     0,     0,     0,   652,     0,  2639,  1667,     0,     0,
    2641,     0,     0,  2642,     0,   653,     0,     0,     0,     0,
       0,   654,   107,     0,  1913,     0,     0,     0,     0,  1865,
     655,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   656,     0,   345,     0,     0,
       0,     0,     0,     0,   346,     0,     0,     0,  1899,     0,
       0,  1900,     0,     0,     0,     0,   657,     0,     0,     0,
       0,  1916,  1917,     0,     0,     0,     0,     0,     0,  1921,
       0,   658,     0,     0,  1962,     0,  1922,     0,     0,     0,
    1968,   659,   660,     0,     0,  2081,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   110,     0,  2089,     0,
       0,     0,   661,     0,     0,     0,     0,     0,  2092,     0,
       0,     0,     0,     0,     0,     0,  1961,     0,     0,  1964,
    1965,     0,     0,     0,     0,   662,     0,     0,  1972,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   663,
       0,   664,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   112,     0,     0,     0,   665,  2004,     0,     0,
       0,   666,     0,  2009,     0,     0,     0,     0,   667,     0,
       0,     0,     0,     0,     0,   668,     0,     0,     0,     0,
    2177,     0,     0,     0,     0,     0,     0,     0,  2024,     0,
       0,     0,     0,   669,  2030,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2006,     0,   670,   671,     0,   672,
       0,     0,     0,     0,     0,     0,     0,   118,     0,     0,
       0,     0,  2022,  2046,     0,     0,     0,     0,     0,     0,
       0,  2053,     0,     0,     0,     0,     0,     0,  2031,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   673,
       0,     0,     0,  2036,     0,  2037,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2045,   347,     0,  2047,   348,
    2048,  2049,  2050,  2052,     0,     0,  2054,     0,     0,  2055,
       0,     0,  2056,  2058,     0,  2059,  2060,  2061,  2063,     0,
    2064,  2065,     0,     0,     0,     0,  2067,  2068,  2069,     0,
       0,  2070,  2071,     0,     0,     0,     0,  2072,  2073,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2179,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2192,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2180,  2341,     0,     0,  2183,     0,     0,     0,     0,
     601,   107,  2215,  2216,     0,     0,     0,  2188,     0,     0,
    2191,     0,     0,     0,     0,     0,     0,     0,     0,  2219,
    2220,   975,     0,     0,  2222,  2223,   976,     0,     0,     0,
       0,     0,  2373,  2374,  2375,  2376,  2377,     0,  2379,  2380,
    2210,   602,     0,  2384,  2385,  2386,  2387,  2388,     0,  2390,
    2391,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2266,     0,     0,  2270,  2271,     0,
       0,     0,     0,     0,     0,  2275,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   110,     0,     0,     0,     0,
       0,   107,     0,     0,     0,     0,  2258,     0,     0,   603,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2284,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2296,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   491,   492,
       0,   112,   493,     0,     0,     0,     0,     0,  2311,     0,
       0,     0,     0,  2315,     0,     0,     0,     0,   604,  2320,
       0,     0,     0,     0,  2324,   494,     0,     0,  2327,  2297,
       0,  2330,     0,     0,  2333,   110,  2335,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   118,     0,     0,     0,
       0,     0,  2328,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   495,  2511,     0,     0,  2513,  2514,  2515,
    2516,  2517,     0,  2519,  2520,     0,  2522,  2523,  2524,  2525,
    2526,   496,  2528,  2529,     0,  2531,  2532,  2533,  2534,  2535,
       0,  2537,  2538,     0,  2540,   605,     0,     0,     0,     0,
       0,     0,     0,   497,  2543,  2544,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2547,   118,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,     0,  2407,     0,
       0,  2410,     0,     0,     0,     0,     0,     0,     0,  2414,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   498,
       0,     0,     0,     0,     0,  2427,     0,     0,  2430,     0,
       0,  2472,     0,  2434,     0,     0,  2437,  2438,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,   499,     0,     0,
       0,     0,     0,  2633,     0,     0,     0,     0,     0,     0,
       0,     0,  2635,     0,     0,     0,     0,   997,   998,   999,
       0,  2637,     0,  2638,     0,     0,     0,  2640,     0,     0,
       0,     0,     0,     0,     0,  2501,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1000,  1001,     0,     0,
    1002,     0,     0,  1003,     0,     0,     0,     0,     0,     0,
    1004,     0,     0,     0,  1005,     0,     0,     0,     0,     0,
       0,     0,  1006,  1007,     0,     0,     0,     0,     0,     0,
    1008,  1009,     0,     0,     0,     0,     0,  2552,     0,     0,
       0,     0,     0,  2556,     0,     0,     0,  2558,  1010,     0,
       0,     0,     0,     0,  1011,     0,     0,     0,  1012,  1013,
       0,     0,  1014,  2564,  2698,     0,  2699,     0,  2700,     0,
       0,  2701,     0,  2702,     0,     0,     0,     0,  1015,     0,
       0,     0,  2553,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1016,
       0,  1264,  1265,  1266,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2572,     0,     0,     0,     0,
       0,     0,  1017,     0,     0,     0,  2583,     0,     0,     0,
    1267,  1268,     0,   107,  1269,     0,     0,     0,     0,     0,
       0,  1270,     0,     0,  1271,  1018,     0,     0,  1272,     0,
       0,     0,     0,     0,     0,     0,  1273,  1274,     0,     0,
       0,     0,     0,   107,  1275,     0,     0,     0,     0,     0,
       0,   109,     0,     0,  2624,  1019,     0,  1020,  2629,     0,
       0,     0,     0,  1021,  1022,     0,     0,     0,     0,     0,
       0,     0,  1276,  1277,     0,     0,  1278,     0,     0,  1023,
    1024,   109,     0,     0,     0,     0,     0,     0,     0,     0,
    1025,  1026,  1279,     0,     0,     0,  2663,   110,   107,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2645,  2646,  1280,  2648,     0,  1027,     0,  1028,  2650,
    2651,     0,     0,     0,  2653,     0,     0,   110,     0,     0,
    1029,     0,  1030,   107,     0,     0,  1281,     0,  1031,   505,
       0,     0,     0,     0,     0,  1282,     0,     0,     0,     0,
       0,     0,     0,   112,     0,     0,     0,  2675,     0,     0,
       0,     0,     0,     0,     0,   107,     0,     0,     0,     0,
       0,  1324,  1032,     0,     0,     0,     0,     0,     0,     0,
       0,  2696,   110,   112,     0,     0,     0,     0,  2725,  1283,
       0,  1284,     0,     0,     0,     0,     0,  1285,  1286,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2738,
       0,     0,     0,   117,  1287,     0,     0,   110,   118,     0,
       0,     0,     0,     0,     0,  1288,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,     0,
       0,     0,     0,   117,     0,     0,     0,     0,   118,   110,
    1289,     0,  1290,     0,  2763,     0,     0,     0,     0,     0,
       0,     0,  1291,     0,  2741,     0,     0,     0,     0,     0,
       0,     0,  1292,   112,  2777,     0,     0,  2778,     0,   509,
       0,  2750,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2761,     0,     0,  2764,
       0,     0,     0,   118,     0,   112,  1293,     0,     0,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   118,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,     0,     0,
     118,     0,   506,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,     0,     0,     0,     0,     0,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,     0,     0,
       0,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       1,     0,     0,     2,     0,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       0,     0,     0,     0,     5,     6,     0,     7,     8,     9,
       0,     0,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,    11,     0,    12,    13,     0,     0,
       0,     0,     0,     0,     0,     0,    14,    15,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,    16,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    17,
       0,     0,     0,    18,     0,     0,    19,     0,     0,     0,
      20,    21,     0,     0,     0,     0,     0,    22,     0,     0,
       0,     0,     0,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     0,     0,
      25,    26,    27,     0,     0,    28,    29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,    32,    33,     0,
       0,     0,     0,     0,     0,   175,     0,     0,   176,     0,
      34,   177,    35,     0,     0,     0,     0,     0,     0,    36,
       0,     0,     0,    37,     0,     0,     0,    38,     0,    39,
     178,    40,   179,   180,   181,     0,    41,     0,     0,     0,
       0,     0,   182,     0,   183,     0,     0,     0,     0,   184,
      42,   185,   186,   187,     0,     0,    43,     0,     0,   188,
       0,   189,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,     0,    47,     0,     0,     0,     0,
     190,    48,     0,     0,    49,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   191,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   192,   193,
       0,     0,   194,     0,     0,    51,   195,     0,   196,  1361,
       0,     0,    52,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     197,   198,     0,     0,   199,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   200,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   201,   202,     0,     0,     0,     0,     0,     0,   203,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   204,     0,   205,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   206,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   207,   208,     0,     0,
       0,     0,     0,     0,     0,   209,     0,     0,     0,     0,
       0,     0,   210,     0,     0,     0,     0,     0,   211,     0,
     212,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,  1362,
       0,     0,     0,     0,     0,     0,     0,   213
};

static const yytype_int16 yycheck[] =
{
       3,  1447,  1647,     4,  1649,     0,   482,   664,    11,    50,
    1146,     4,  1148,     4,    20,     5,   438,     3,     4,     5,
       5,     4,     3,     4,     3,     4,   448,     5,   998,    32,
     659,   660,     3,     4,     4,     4,    32,    40,  1174,  1175,
    1176,    14,     5,     4,    83,     4,    49,     3,     4,    52,
      27,     4,    55,     3,     4,    36,    59,     3,     4,    62,
       3,     4,     4,    66,    67,    36,    67,    70,     5,    27,
      73,    74,    49,    13,    77,    52,     3,     4,    81,    17,
       3,     4,    37,    86,    67,   969,    63,     5,   972,    62,
       3,     4,    27,     3,     4,    27,    99,   100,   101,   102,
     103,   104,     4,     5,    32,   989,   167,   123,    17,    86,
     123,    99,    17,    32,    47,   154,   101,   120,     5,     4,
     121,    32,   107,    27,     3,     4,    36,   104,     3,     4,
      40,     3,     4,  2681,     3,     4,     4,    88,   121,    88,
      57,   134,   877,   878,   879,   159,   216,   152,   170,    44,
     196,    67,   155,   196,   135,     5,     4,    21,     4,     5,
      21,    21,   289,     5,   135,    40,   105,     3,     4,     3,
       4,     3,     4,   187,    51,   178,     4,   168,     5,  2727,
     183,    31,    67,   147,   126,    60,    62,   226,   227,     4,
      17,    21,    40,    88,   113,   100,    33,    12,    21,     3,
       4,   234,   241,   113,   205,   940,   228,    16,   159,   270,
     159,   254,   213,   214,   171,   261,     3,     4,   197,   121,
     193,    67,   205,   180,   101,   135,   242,   196,     4,   242,
     213,   214,   238,   110,   169,     6,   121,   169,   113,   309,
     243,   200,   197,    89,   190,   284,   125,   190,   207,   208,
     196,   190,   192,   121,   295,    21,   259,   260,    21,   264,
     917,    16,   139,   190,   183,   113,   185,   209,   187,   188,
     228,    62,   275,   295,   277,   121,   195,   215,   266,     5,
     250,   703,   285,   286,   243,   288,   289,   197,   291,   235,
     286,   210,    79,   121,   289,   268,   142,   275,   301,   300,
     195,   143,   219,   205,   297,   278,   215,   242,   311,   312,
     242,   213,   214,   250,   137,   261,   297,   300,   297,   309,
     205,   306,   197,   309,   228,   316,   297,   290,   213,   214,
     291,   334,   335,   336,   252,   338,   309,   205,   291,   342,
     343,   297,   211,   230,   277,   213,   214,   297,   349,   197,
     353,   354,   287,   354,   355,   287,   228,   360,   286,   205,
     298,   307,   365,   366,   307,  1022,   349,   213,   214,   288,
     373,   354,   355,   376,   297,   286,    46,   205,   242,   356,
     307,   242,   242,  1040,   297,   213,   214,   297,   175,   298,
     199,   350,   395,   396,   228,    65,   228,    67,   300,   402,
     403,   404,   250,   406,   306,   351,   352,   211,   351,   352,
      34,   287,   242,     4,   316,   300,   838,   420,   293,   242,
     196,   424,   299,   291,   351,   352,   429,   430,   431,   432,
     433,   434,   300,   436,   310,   438,   439,   440,  1408,    40,
    1576,     3,     4,  1072,    14,   448,   449,   349,     5,   272,
      67,    21,   354,   355,   300,     4,    26,    14,    15,   881,
     306,    67,     5,    33,   349,  1435,    57,   254,     5,   354,
     355,   247,   300,     5,  1103,    27,   242,    46,   254,   242,
       0,   349,    14,    15,     4,   109,   354,   355,  1458,    17,
       4,    79,    64,    37,  1378,    57,   287,  1381,    67,   502,
     503,    71,  1237,   349,    48,    62,     6,   353,   354,   355,
    1245,   123,   113,    82,   131,   185,   123,   520,   437,   310,
      57,   349,     4,     5,    62,   267,   354,   355,   107,    66,
      62,    75,   274,    64,   106,    89,    40,     3,     4,   136,
     157,   107,   583,    57,   547,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   243,    45,   106,   119,   580,     4,    61,
       4,    62,   206,   624,   122,    67,    40,   175,   234,    60,
     160,   161,   162,   163,   164,   165,   197,    84,   168,   169,
     170,   171,   643,    62,    37,    62,    30,   526,   152,   113,
       0,    82,   615,    67,   101,    48,   185,   287,   170,   198,
     237,    40,   122,     3,     4,     5,   296,   274,   219,  1286,
     242,   102,   198,   161,   116,   242,   193,   194,   641,   123,
    1297,   122,    75,   562,    62,   189,    62,   101,   119,   131,
    2295,   122,   195,   107,   251,   658,    27,   219,   661,   113,
      62,   193,   194,   122,   146,   122,   254,   239,   269,    30,
     152,   132,   289,   252,   243,   157,   228,   131,   149,   150,
       6,    64,   219,   255,   256,   688,   252,   257,   258,   692,
     693,   694,   695,   197,   113,   698,     5,   700,   152,   702,
     703,   704,   159,  1125,   122,   219,   122,   250,   239,   170,
       4,   268,   250,   167,   258,     5,   206,   287,   287,   152,
     122,   278,   279,   106,   255,   256,   283,   296,    62,   211,
      62,   202,   275,   264,   200,    40,   268,     5,   779,   163,
     278,   212,    71,   126,   198,    30,   278,   279,   230,     5,
     294,   283,   309,   235,    31,   237,   189,   132,    14,    15,
     330,   331,   332,    89,   248,    58,   310,   228,   771,   772,
       5,   774,   775,   776,   777,   347,   348,   309,   197,    14,
      15,   263,   264,   237,    62,    92,   789,   790,   122,   271,
     122,     5,   216,   796,   797,     5,   122,   278,   252,   170,
      14,    15,   163,   274,   275,   267,    62,   289,   113,    62,
     264,    96,   274,   816,   817,   818,   347,   348,   242,   278,
    1242,   278,     5,   123,    84,   258,   287,    62,     3,     4,
     833,   834,   835,    62,   837,   838,   839,   291,   841,   197,
     133,   101,   171,   123,   122,  1981,  1982,  1983,    62,   303,
     269,   305,   306,   228,     4,   216,   239,   228,   348,   862,
     278,   864,   278,   345,   354,   172,   356,   119,  1752,   122,
      67,   874,   255,   256,   345,   120,   278,   310,   881,   882,
     165,   242,  1852,    55,   887,     3,     4,    95,  1772,   289,
      67,   345,   197,   122,     3,     4,   171,   152,  1868,    33,
     903,   904,     5,  1787,    81,   113,  1790,    67,   911,   912,
     913,   141,   287,    90,  1798,  1650,   919,  1801,   178,    91,
     249,   924,    14,    15,   101,  1809,    90,  1897,  1812,   258,
      12,    40,   935,    16,   975,  1819,   229,   193,   194,     3,
       4,    26,   242,   862,   278,  2577,   278,   141,   951,   179,
     125,   244,     4,     5,   131,   262,    24,    25,   193,   194,
    2031,   221,   242,  2595,   347,   348,   221,     3,     4,   254,
      62,   143,    54,   280,   259,   152,  2047,  2048,  2049,   193,
     194,  2052,   190,  2054,  2055,   179,   235,  2058,  2059,  2060,
      72,    44,  2063,  2064,    47,    90,  2067,   257,  2069,  2070,
     278,  2072,    14,    15,   113,  2451,   288,   125,    73,   264,
      14,    15,   268,    31,   307,  1018,     3,     4,     3,     4,
     102,   198,   278,   279,    77,   278,     5,   283,     4,   114,
    2000,    99,    85,   268,    14,    15,  1039,     4,   120,   609,
      28,   126,   124,   278,   279,  1048,     5,   302,   283,   278,
      62,     3,     4,   309,   268,   137,     3,     4,    62,  1062,
     237,  1064,     4,     5,   278,   279,  1069,  1070,  1071,   283,
       4,     5,    19,    60,   309,    60,  1079,   141,   250,  1082,
       5,  1084,    62,     4,  2716,    26,     5,   264,   197,     5,
    2722,    83,   145,   663,     5,   309,     5,  1100,   668,  1102,
       4,   193,   194,  1106,  1107,     4,    42,    43,    60,  2180,
      57,     4,  2183,     3,     4,   179,     4,  2188,  1121,  1122,
    2191,     5,  1125,  1126,  1127,   210,   303,    17,   305,     4,
    1133,    99,  1135,   122,    89,  1138,     4,  1140,   223,  2210,
       3,     4,   195,    14,    15,    14,    15,  2779,  1189,  2781,
       3,     4,    14,    15,     7,     8,   103,     5,     3,     4,
     213,   214,   154,   118,   275,   153,     4,   220,     4,   222,
       3,     4,   200,   114,  1177,     4,   268,     4,  1181,     5,
    1183,   193,   194,     4,  1187,   126,   278,   279,   176,   193,
     194,    62,   180,    62,     4,    40,    28,   250,     4,  1202,
      62,  1204,     4,  1206,  1207,  1208,  1209,    40,     4,     5,
    1213,  1214,   159,   193,   194,   297,     4,   309,  1221,     5,
     161,     4,     5,  2107,     5,  1228,  2297,  1962,     5,  1232,
    1233,  1234,  2116,   188,   226,   227,     9,   173,   174,  1242,
    1243,  2125,    11,  1246,   232,     3,     4,   274,   203,   241,
     820,   171,     4,  1256,    12,  1258,   268,  2328,  1261,     4,
    2230,     3,     4,   316,   268,   201,   278,   279,   113,   210,
      12,   171,   219,   180,   278,   279,  2246,   224,   426,   427,
     113,  2251,   223,  1202,     4,   273,   199,   199,   268,     3,
       4,     5,   284,   281,   282,  2030,     5,   309,   278,   279,
       5,  1304,     4,  1306,   199,   309,  1309,  1310,   191,  1312,
     265,  1314,     3,     4,     5,   191,    67,  1320,  2053,  1322,
      67,   153,   193,   194,   193,   194,  1329,     3,     4,   309,
    1249,   193,   194,     9,    10,    11,  2407,    67,     5,    35,
     229,   228,     5,     4,   176,     4,  1265,     4,   180,   199,
      88,   306,     5,     3,     4,     5,  2427,     7,     8,    88,
       5,   316,     4,  2434,     4,     4,  2437,  2438,     5,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   268,     5,   268,
     232,  1404,     5,  1406,  1407,    17,   268,   278,   279,   278,
     279,   101,   108,     4,    99,     5,   278,   279,     3,     4,
       5,    17,     7,     8,    17,  1428,     4,  2443,     4,  1432,
    2446,     4,  2448,   129,   130,     4,    88,     5,   309,     5,
     309,   273,   138,     4,    88,  2461,  2462,   309,     5,   281,
     282,     5,     5,  1456,  1457,     4,    12,     5,     5,     4,
     156,     4,  2478,  1466,     3,     4,     5,  1470,     7,     8,
     166,     5,     5,     5,  1477,  1045,     4,  2447,     4,   168,
       5,    12,  2553,     4,  1403,     4,   159,     4,  1491,     4,
    2460,  1913,     4,  1496,     5,  2465,     5,  1500,     5,  1502,
    1503,  2572,  1505,  1506,  1507,     4,  1509,     4,   159,  1512,
    1513,  1514,  1515,  1516,  1517,  1518,  1519,  1520,  1521,  1522,
       5,     4,  1525,  1526,  1527,  1528,   263,   263,   291,  1099,
       5,  2266,  1535,  1536,     4,     4,  1539,  1540,  1541,  1109,
    2275,  1544,  1545,     5,    62,     5,  1968,     5,     5,     4,
      22,     5,     5,   276,  1557,  1558,     5,  1560,  1561,   276,
    2449,     5,     5,    22,     4,     4,   107,     5,     5,     5,
       5,     5,     5,     4,  2645,  2646,     4,  2648,    50,  2650,
    2651,    53,  2653,     5,    56,     5,  2475,  2009,     4,   141,
     190,    50,  2327,     5,    53,  2330,   196,     5,  2333,   242,
    2335,   119,     5,   107,   122,  1608,  1609,  1610,   242,   242,
    1613,    83,   107,    40,     5,  1618,  1619,   215,  1621,  1622,
    1623,    40,  1625,  1626,    83,  1628,   248,   215,  1631,  1632,
       5,     4,  2703,     5,     5,   235,   215,  1640,   215,     4,
     112,   159,     4,   115,     5,  1648,     5,  1217,  1218,     4,
    1653,  1654,     5,   112,     3,     4,   115,     5,  1661,     4,
       4,   261,   113,   113,     5,     5,     5,  1670,     5,     5,
      19,     4,     6,     5,     5,     4,     4,   195,     5,  2750,
       5,     5,   968,     5,     4,     4,  2575,  2576,     5,    12,
    2579,    12,  2581,     4,    93,     4,     4,     4,    54,  1618,
      38,     5,   101,  1706,  2593,  2594,     0,   307,   107,  2598,
    2599,   141,    38,  2602,     5,   242,    72,   123,  2607,  2608,
     242,     4,   242,   170,   211,  1728,  1729,     4,   246,   128,
    1733,   199,   250,    89,     4,     4,  1739,     4,   252,     4,
     276,     5,     5,  2713,     5,     5,   102,     5,     5,     4,
       4,     4,   352,   152,   103,     5,     4,   275,   230,     4,
     278,   160,     5,     5,   120,     5,  2655,  1686,   124,  2658,
     288,   230,     4,   313,  2663,   242,   242,  1696,   242,     4,
    2669,   137,  1701,   313,     4,  2674,     4,     4,     4,   313,
     313,   263,     4,  2215,  2216,     4,  2218,  2219,     5,   198,
    2222,  2223,     5,   228,   263,   228,     5,   206,     6,     5,
     159,   228,     4,   228,   228,     5,     5,   289,     4,    12,
       5,   177,     5,     4,     4,     4,   289,     5,     5,  1399,
       4,     4,   309,     5,     5,  1405,     4,     6,     5,     5,
       4,   357,     5,  1846,     4,  1848,     4,  1850,     4,     4,
     276,   357,     5,   252,     5,     5,  2745,  1427,     5,  2748,
    1430,     5,  2284,     4,  1434,   264,  1869,  1870,  1871,  1872,
    1873,  1874,  1875,  1876,  1877,   224,     5,     4,    32,  2768,
       5,   280,     5,     5,     4,  1455,     4,   276,     5,     4,
    1893,  1461,  1895,  2782,     5,     5,  2785,  2786,     5,  1469,
       4,     4,  1472,     5,     5,     5,     5,     4,     4,  1912,
    1913,  1481,  1482,     5,     5,  1918,     5,     5,     4,     4,
     289,     5,  1492,     5,  1927,  1928,  1929,  1930,  1931,  1932,
    1933,  1934,  1935,  1936,   276,     5,  1939,  1940,  1941,  1942,
    1943,  1944,  1945,  1946,  1947,  1948,  1949,  1950,     5,  1952,
       4,  1954,  1955,  1956,  2611,     4,   357,     5,     5,   113,
       5,     5,     4,     4,     4,  1968,  1969,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,     5,     4,     4,  2001,     4,
    2003,     5,  2005,     5,  2007,     5,  2009,  2010,     5,  2012,
    2432,     5,     4,     4,  2436,     5,  2019,  2020,     4,     4,
     425,     5,     5,  2026,     4,  2028,  2683,     4,   182,  2032,
     184,   185,  2035,   187,   188,     4,     4,     4,  2738,     5,
    2620,     5,     4,     4,   357,     5,     5,     5,     5,     5,
    2472,     5,     4,     6,     5,     4,     4,    22,     5,     5,
    1346,   215,    27,     5,     4,     4,   380,     5,     5,     5,
       5,     4,  1358,     4,  2509,     5,     5,  2080,     5,   233,
     234,     5,     4,     4,    49,    50,     5,    52,    53,     4,
    1376,  1377,     4,   290,     4,     4,     4,     4,    63,     4,
       4,     4,    19,     4,     4,     4,     4,     4,   357,     4,
      75,    76,     4,   357,     4,     4,   357,     5,    83,  2038,
     357,    86,   276,     5,     5,     4,     4,    44,     5,     5,
       5,     5,     4,     4,   288,     4,     4,  2178,     4,   104,
       4,     4,     4,     4,     4,     4,   111,   112,     5,     5,
     115,     5,   349,     5,   308,     4,   357,     5,  2077,     5,
       4,    78,     5,     5,     4,  2241,     5,     4,    85,     4,
    2609,     5,     4,     4,     4,     4,  2683,     5,     5,    96,
      97,  2184,     4,     4,     4,     4,   103,     4,  2679,     5,
       4,     4,  2195,  2196,  2197,  2198,  2199,  2200,  2201,  2202,
    2203,  2204,  2205,     5,     5,     4,     4,     4,  2211,   126,
     175,     5,  2215,  2216,     5,  2218,  2219,  2693,  2694,  2222,
    2223,  2224,  2225,  2226,  2227,  2228,  2229,   144,  2231,  2232,
    2233,     5,     5,     5,     5,     4,     4,   738,     5,     5,
       5,   158,   159,    -1,  2247,  2248,  2249,  2250,   165,  2252,
    2253,  2254,  2255,  2256,  2257,    -1,  2259,    -1,    -1,  2262,
    2263,    -1,    -1,   417,    -1,   230,    -1,    -1,    -1,   186,
      -1,   236,    -1,    -1,   428,    -1,    -1,    -1,  2281,    -1,
      -1,  2284,  2285,   437,    -1,    -1,  2289,    -1,   253,    -1,
    2293,    -1,  1862,    -1,    -1,    -1,    -1,    -1,   263,    -1,
      -1,    -1,    -1,   500,    -1,    56,    -1,   224,    -1,    -1,
     507,    -1,    -1,   510,    -1,    -1,    67,    -1,   515,    -1,
      -1,    -1,   519,    -1,    -1,   290,   291,    -1,  1898,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2339,    -1,    -1,    -1,
      -1,    -1,    93,    94,    -1,    -1,   311,    -1,    -1,    -1,
     101,   505,   506,    -1,    -1,    -1,   107,    -1,    -1,    -1,
     277,    -1,    -1,    -1,   518,    -1,    -1,    -1,    -1,   523,
     287,    -1,    -1,    -1,    -1,    -1,    -1,   128,   532,    -1,
     131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   585,    -1,
      -1,   356,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,
      -1,   152,    -1,    -1,    -1,    -1,    -1,    -1,  2411,   160,
      -1,    -1,  2415,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2425,  2426,    -1,    -1,    -1,    -1,  2431,  2432,
      -1,    -1,  2435,  2436,    -1,    -1,    -1,    -1,  2441,    -1,
      -1,  2444,  2445,     3,     4,    -1,    -1,   198,   602,   603,
     604,   605,    -1,    -1,    -1,   206,    -1,    -1,    -1,    19,
    2463,  2464,    -1,  2466,  2467,  2468,  2469,  2470,    -1,  2472,
    2473,    -1,    -1,    -1,  2477,    -1,  1762,    -1,    -1,    39,
      -1,    -1,    -1,    -1,  1770,  1771,  2489,    -1,    -1,    -1,
      -1,  2494,    -1,    -1,    -1,    -1,    -1,    57,    -1,  1785,
    1786,   252,   699,    -1,    -1,    -1,    -1,  2510,   662,   706,
    1796,  1797,    -1,   264,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1807,  1808,    -1,    -1,    -1,    -1,    -1,    -1,   280,
      -1,  1817,  1818,    -1,    -1,    -1,    -1,  1823,   289,    -1,
     291,    -1,    -1,   103,    -1,    -1,    -1,  1833,    -1,  2552,
      -1,    -1,    -1,    -1,  2557,    -1,  2559,    -1,   956,    -1,
      -1,    -1,  2565,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2578,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     988,    -1,    -1,  2596,   345,    -1,    -1,  2600,    -1,   159,
      -1,    -1,  2643,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2620,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   823,    -1,    -1,    -1,
      -1,    -1,    -1,   830,    -1,    -1,    -1,   197,    -1,    -1,
      -1,    -1,    -1,    -1,  2647,    -1,    -1,    -1,    -1,  2652,
      -1,  2654,    -1,    -1,    -1,    -1,    -1,    -1,  2661,   219,
      -1,    -1,    -1,  2666,   224,    -1,    -1,    -1,  2671,    -1,
     824,    -1,    -1,    -1,    -1,   235,    -1,    -1,   875,   876,
      -1,    -1,   836,   880,    -1,    -1,   883,    -1,    -1,    -1,
    2693,  2694,    -1,    -1,    -1,    -1,    -1,  2267,   895,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2717,    -1,    -1,  2720,    -1,   873,
    2723,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2734,  2735,  2736,  2737,    -1,    -1,   297,    -1,    -1,
      -1,    -1,    -1,  2746,    -1,    -1,  2749,    -1,    -1,    -1,
      -1,    -1,    -1,  2756,    -1,  2758,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,    -1,    -1,    -1,    -1,    -1,  2708,
      -1,    -1,   946,    -1,    -1,    -1,    -1,    -1,    -1,   996,
      -1,    -1,    -1,    -1,    -1,  2091,    -1,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2101,    -1,    -1,    -1,  2105,
    2106,  2740,    19,    -1,  2743,    -1,    -1,    -1,  2114,  2115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2123,  2124,    -1,
      -1,    -1,    -1,  2129,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2139,  2140,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,  2150,  2151,    -1,  1021,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2161,    -1,    -1,     4,    -1,
      -1,    -1,    -1,    -1,  2170,    -1,  2172,    -1,    -1,  2459,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,  2479,
      -1,    -1,    -1,  2483,    40,    -1,    -1,    -1,    -1,  1073,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1083,
      -1,    57,  1330,  1331,  1332,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1340,  1341,  1342,    -1,    -1,    -1,    -1,  1347,
    1348,  1349,    -1,    -1,  1352,  1353,    -1,  1355,  1356,    -1,
      -1,    -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1385,  1386,    -1,
      -1,  1389,  1390,  1190,    -1,   121,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,  1220,    -1,    -1,    -1,   224,  1225,    -1,
      -1,  1185,    -1,   159,    -1,    -1,    -1,    -1,  1235,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1202,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2343,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2353,    -1,    -1,
      -1,   197,  1226,    -1,    -1,    -1,  2362,    -1,    -1,   205,
      -1,    -1,  1236,    -1,    -1,  2371,    -1,   213,   214,    -1,
      -1,    -1,  2378,   219,    -1,    -1,    -1,    -1,   224,    -1,
      -1,  1255,    -1,  2389,    -1,    -1,    -1,    -1,    -1,  2395,
      -1,  1265,  2398,    -1,    -1,  2401,  1270,    -1,    -1,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2729,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,
      -1,    -1,    -1,    -1,   300,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,    -1,    -1,
      -1,    -1,    -1,   349,    -1,    61,    -1,    -1,   354,   355,
      -1,    67,  2518,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      76,  2527,    -1,    -1,    -1,    81,    -1,    -1,    84,  1403,
    2536,    -1,    -1,    -1,    90,    -1,  2542,     4,    -1,    -1,
    2546,    -1,    -1,  2549,    -1,   101,    -1,    -1,    -1,    -1,
      -1,   107,    19,    -1,  1471,    -1,    -1,    -1,    -1,  1433,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   131,    -1,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,  1462,    -1,
      -1,  1465,    -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,
      -1,  1475,  1476,    -1,    -1,    -1,    -1,    -1,    -1,  1483,
      -1,   167,    -1,    -1,  1531,    -1,  1490,    -1,    -1,    -1,
    1537,   177,   178,    -1,    -1,  1743,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,  1756,    -1,
      -1,    -1,   198,    -1,    -1,    -1,    -1,    -1,  1766,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1530,    -1,    -1,  1533,
    1534,    -1,    -1,    -1,    -1,   221,    -1,    -1,  1542,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,
      -1,   237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,    -1,    -1,    -1,   252,  1614,    -1,    -1,
      -1,   257,    -1,  1620,    -1,    -1,    -1,    -1,   264,    -1,
      -1,    -1,    -1,    -1,    -1,   271,    -1,    -1,    -1,    -1,
    1838,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1645,    -1,
      -1,    -1,    -1,   289,  1651,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1618,    -1,   302,   303,    -1,   305,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   224,    -1,    -1,
      -1,    -1,  1636,  1680,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1688,    -1,    -1,    -1,    -1,    -1,    -1,  1652,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   345,
      -1,    -1,    -1,  1667,    -1,  1669,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1679,   245,    -1,  1682,   248,
    1684,  1685,  1686,  1687,    -1,    -1,  1690,    -1,    -1,  1693,
      -1,    -1,  1696,  1697,    -1,  1699,  1700,  1701,  1702,    -1,
    1704,  1705,    -1,    -1,    -1,    -1,  1710,  1711,  1712,    -1,
      -1,  1715,  1716,    -1,    -1,    -1,    -1,  1721,  1722,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1843,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1865,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1845,  2090,    -1,    -1,  1849,    -1,    -1,    -1,    -1,
      18,    19,  1899,  1900,    -1,    -1,    -1,  1861,    -1,    -1,
    1864,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1916,
    1917,   159,    -1,    -1,  1921,  1922,   164,    -1,    -1,    -1,
      -1,    -1,  2130,  2131,  2132,  2133,  2134,    -1,  2136,  2137,
    1894,    59,    -1,  2141,  2142,  2143,  2144,  2145,    -1,  2147,
    2148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1961,    -1,    -1,  1964,  1965,    -1,
      -1,    -1,    -1,    -1,    -1,  1972,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,  1950,    -1,    -1,   117,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2006,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2022,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      -1,   159,    70,    -1,    -1,    -1,    -1,    -1,  2045,    -1,
      -1,    -1,    -1,  2050,    -1,    -1,    -1,    -1,   176,  2056,
      -1,    -1,    -1,    -1,  2061,    93,    -1,    -1,  2065,  2023,
      -1,  2068,    -1,    -1,  2071,   103,  2073,    -1,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   224,    -1,    -1,    -1,
      -1,    -1,  2066,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   171,  2342,    -1,    -1,  2345,  2346,  2347,
    2348,  2349,    -1,  2351,  2352,    -1,  2354,  2355,  2356,  2357,
    2358,   189,  2360,  2361,    -1,  2363,  2364,  2365,  2366,  2367,
      -1,  2369,  2370,    -1,  2372,   293,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   211,  2382,  2383,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2393,   224,    -1,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,    -1,    -1,  2182,    -1,
      -1,  2185,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2193,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   277,
      -1,    -1,    -1,    -1,    -1,  2209,    -1,    -1,  2212,    -1,
      -1,  2258,    -1,  2217,    -1,    -1,  2220,  2221,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,    -1,   345,    -1,    -1,
      -1,    -1,    -1,  2521,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2530,    -1,    -1,    -1,    -1,    20,    21,    22,
      -1,  2539,    -1,  2541,    -1,    -1,    -1,  2545,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2309,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,
      53,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    -1,    -1,    -1,    -1,    -1,  2404,    -1,    -1,
      -1,    -1,    -1,  2410,    -1,    -1,    -1,  2414,   101,    -1,
      -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,   112,
      -1,    -1,   115,  2430,  2632,    -1,  2634,    -1,  2636,    -1,
      -1,  2639,    -1,  2641,    -1,    -1,    -1,    -1,   131,    -1,
      -1,    -1,  2406,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,
      -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2439,    -1,    -1,    -1,    -1,
      -1,    -1,   175,    -1,    -1,    -1,  2450,    -1,    -1,    -1,
      49,    50,    -1,    19,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    63,   198,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,
      -1,    -1,    -1,    19,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    -1,    -1,  2498,   228,    -1,   230,  2502,    -1,
      -1,    -1,    -1,   236,   237,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,   112,    -1,    -1,   115,    -1,    -1,   252,
     253,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     263,   264,   131,    -1,    -1,    -1,  2583,   103,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2555,  2556,   152,  2558,    -1,   289,    -1,   291,  2563,
    2564,    -1,    -1,    -1,  2568,    -1,    -1,   103,    -1,    -1,
     303,    -1,   305,    19,    -1,    -1,   175,    -1,   311,    60,
      -1,    -1,    -1,    -1,    -1,   184,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,    -1,  2601,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    57,   345,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2625,   103,   159,    -1,    -1,    -1,    -1,  2675,   228,
      -1,   230,    -1,    -1,    -1,    -1,    -1,   236,   237,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2696,
      -1,    -1,    -1,   219,   253,    -1,    -1,   103,   224,    -1,
      -1,    -1,    -1,    -1,    -1,   264,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,   224,   103,
     289,    -1,   291,    -1,  2741,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   301,    -1,  2708,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   311,   159,  2761,    -1,    -1,  2764,    -1,   285,
      -1,  2725,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2740,    -1,    -1,  2743,
      -1,    -1,    -1,   224,    -1,   159,   345,    -1,    -1,    -1,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   224,    -1,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,    -1,    -1,
     224,    -1,   293,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,    -1,    -1,
      -1,    -1,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
      41,    -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    -1,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    97,    98,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   127,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
      -1,    -1,    -1,   144,    -1,    -1,   147,    -1,    -1,    -1,
     151,   152,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,
      -1,    -1,    -1,   164,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   178,    -1,    -1,
     181,   182,   183,    -1,    -1,   186,   187,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   200,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   217,   218,   219,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    44,    -1,
     231,    47,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,
      -1,    -1,    -1,   244,    -1,    -1,    -1,   248,    -1,   250,
      66,   252,    68,    69,    70,    -1,   257,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    80,    -1,    -1,    -1,    -1,    85,
     271,    87,    88,    89,    -1,    -1,   277,    -1,    -1,    95,
      -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   292,   293,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   304,    -1,   306,    -1,    -1,    -1,    -1,
     126,   312,    -1,    -1,   315,   316,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,   155,
      -1,    -1,   158,    -1,    -1,   346,   162,    -1,   164,   164,
      -1,    -1,   353,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     186,   187,    -1,    -1,   190,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,   225,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   250,    -1,   252,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   277,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   292,   293,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   301,    -1,    -1,    -1,    -1,
      -1,    -1,   308,    -1,    -1,    -1,    -1,    -1,   314,    -1,
     316,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   353
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    41,    44,    47,    60,    65,    66,    68,    69,    70,
      78,    85,    87,    88,    97,    98,   127,   140,   144,   147,
     151,   152,   158,   164,   178,   181,   182,   183,   186,   187,
     200,   217,   218,   219,   231,   233,   240,   244,   248,   250,
     252,   257,   271,   277,   292,   293,   304,   306,   312,   315,
     316,   346,   353,   359,    67,    12,    54,    72,   102,   120,
     124,   137,   297,   393,     3,     4,   297,   360,   398,   190,
     196,   235,   261,   307,   352,   400,   289,     4,    40,   113,
     197,   250,   405,    28,   153,   176,   180,   232,   273,   281,
     282,   375,   407,    84,   101,   178,   221,   257,   408,    40,
      60,   113,   197,   293,   360,   417,     4,    19,    40,    57,
     103,   121,   159,   197,   205,   213,   214,   219,   224,   300,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   349,
     354,   355,   362,   370,   371,   372,   419,    33,   420,   362,
      44,    47,    77,    85,   145,   195,   213,   214,   220,   222,
     250,   316,   361,   147,   422,    41,    44,    47,    66,    68,
      69,    70,    78,    80,    85,    87,    88,    89,    95,    97,
     126,   144,   154,   155,   158,   162,   164,   186,   187,   190,
     200,   217,   218,   225,   250,   252,   277,   292,   293,   301,
     308,   314,   316,   353,   423,    84,   101,   465,    19,    44,
      78,    85,    96,    97,   103,   126,   144,   158,   159,   165,
     186,   224,   277,   287,   316,   468,   362,    89,   118,   188,
     203,   265,   306,   316,   474,    16,    26,   114,   126,   161,
     210,   223,   477,   234,   495,     5,    67,    89,   142,   306,
     353,   362,   496,     5,   497,    58,   133,   229,   244,   307,
     513,    46,    65,    67,   185,   243,   287,   296,   532,    67,
     206,   348,   354,   356,   533,    39,   197,   235,   297,   360,
     370,   372,   534,     5,   306,   316,   362,   537,    71,   171,
     249,   258,   538,     4,   539,    89,   513,    62,   287,   310,
     546,   197,   297,   360,   547,    26,   114,   126,   210,   223,
     549,    51,   101,   110,   139,   299,   564,   565,     4,    37,
      48,    75,   152,   189,   258,   294,   310,   388,     4,   126,
     209,   566,   297,   360,   568,    16,    23,   245,   248,   371,
     569,   234,   573,   297,   360,   574,     0,     5,   143,    60,
     360,   394,   274,     5,     4,   297,   360,   395,     5,    32,
     286,   396,   125,   360,   397,   125,   360,   399,   360,     4,
     196,   247,   254,   403,   190,   307,   351,   352,   360,   402,
     362,   141,   179,   401,   200,   360,    79,   175,   254,   360,
     404,     5,   360,     4,   250,   406,   360,   360,     5,   230,
     409,    31,   410,     5,   411,     5,   415,     5,    31,   416,
     360,     9,    10,    11,   360,   366,   367,   368,   369,   360,
     360,    40,   113,   197,   360,   418,   360,   197,   370,   372,
     360,    35,   108,   129,   130,   138,   156,   166,   377,   360,
       4,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   119,    67,    54,    72,    89,   102,   120,   124,   137,
     177,   424,   120,   426,   190,   196,   235,   261,   307,   351,
     352,   360,   412,   427,   289,   430,   171,   431,   171,   180,
     433,    66,    67,    70,    93,   171,   189,   211,   277,   345,
     370,   435,   360,   372,   438,    60,   293,   370,   439,   285,
     370,   372,   440,    33,   441,   370,   372,   442,     4,   370,
     372,   443,    45,    60,    82,   102,   119,   122,   149,   150,
     202,   212,   274,   275,   345,   447,   216,   309,   453,     5,
      90,     6,    89,   122,   445,     5,    66,   372,   444,    16,
     513,    46,    67,    82,   185,   243,   287,   296,   454,    67,
     235,   455,   288,    62,   287,   310,   456,    21,   137,   242,
     272,   457,    37,    48,    75,   152,   189,   258,   310,   458,
     372,    90,    16,   199,   463,   370,   466,    73,   469,    31,
     470,    44,    88,   195,   471,   152,   221,   264,   302,   472,
     370,    18,    59,   117,   176,   293,   370,   473,     4,   196,
     476,     5,     4,     6,   122,   360,     4,     5,   250,   478,
       5,   480,     5,   119,   195,   250,   275,   481,    95,   113,
     190,   494,     5,   492,     5,   275,   493,     4,     5,   362,
     362,   360,   360,     5,     4,     5,    61,    67,    74,    76,
      81,    84,    90,   101,   107,   116,   131,   152,   167,   177,
     178,   198,   221,   235,   237,   252,   257,   264,   271,   289,
     302,   303,   305,   345,   498,    92,   172,   262,   280,   374,
       5,     4,   200,   207,   208,   243,   350,   373,   360,   370,
     360,     5,   360,    40,   113,   360,   536,   362,   360,   370,
     372,   535,   360,   377,   360,     4,   371,    55,    91,   143,
     250,   540,     4,     4,   360,     4,   152,   264,   541,     5,
     370,     4,    40,   113,   360,   548,   360,    99,    62,   122,
     250,   278,   550,   122,   563,    62,   119,   122,   159,   195,
     246,   250,   275,   278,   288,   552,   553,    62,   122,   278,
     562,     5,     4,    34,   109,   206,   545,    67,   362,   389,
      67,   362,   390,    67,   362,   391,    13,   192,   544,   360,
     360,   228,   360,   392,   360,   275,     4,   360,   360,     4,
     572,     4,   291,   570,     4,   291,   571,     4,   377,   125,
     360,   575,   360,   360,     4,     5,   360,    12,   360,   360,
     360,    30,    96,   165,   254,   259,   376,   376,     4,   200,
     360,   360,     4,     4,     4,   360,   360,   360,   360,     4,
       4,     5,     5,   370,     5,   360,   360,   366,   368,   368,
     370,   360,   360,   360,   360,   360,   360,   360,   370,   372,
     369,   360,   360,   369,   360,     5,   274,   105,   190,   425,
     196,   254,   428,   171,    79,   175,   254,   429,   141,   179,
     413,   413,     4,   432,     4,   434,   196,   261,   436,   180,
     437,   171,   377,   360,   360,   370,   370,   377,   377,   377,
     370,   377,   360,   370,     4,   450,     4,   372,   448,   199,
       4,   168,   316,   449,   199,   370,     4,   134,   297,   452,
       5,     5,     4,   199,   360,     4,     5,    61,    67,   116,
     131,   146,   152,   157,   211,   230,   235,   237,   263,   264,
     271,   289,   345,   507,   372,   191,   191,    67,   459,    67,
     460,    67,   461,   228,   462,   360,     5,   229,   464,   371,
     377,     5,   370,   370,   370,   370,     4,   362,     4,     4,
     199,   360,    14,    15,    62,   193,   194,   268,   278,   279,
     309,    88,     5,     5,    14,    15,    62,   193,   194,   268,
     278,   279,   283,   309,    88,   159,   164,   371,   484,   489,
      88,   159,     5,   482,     4,     4,    14,    62,   193,   268,
     278,   309,     5,     5,     4,   360,   371,    20,    21,    22,
      49,    50,    53,    56,    63,    67,    75,    76,    83,    84,
     101,   107,   111,   112,   115,   131,   152,   175,   198,   228,
     230,   236,   237,   252,   253,   263,   264,   289,   291,   303,
     305,   311,   345,    67,    81,    90,   101,   131,   152,   198,
     237,   264,   303,   305,     4,    30,   163,   216,   242,   501,
       5,    64,   106,   239,   255,   256,   347,   348,   506,   101,
     499,    17,    40,   113,   197,   505,     4,     5,    17,   215,
     298,   360,   264,   506,   514,   126,   506,   515,    36,    40,
     113,   135,   197,   297,   360,   516,   370,   362,    93,   101,
     107,   128,   152,   160,   198,   206,   252,   264,   280,   519,
      40,   113,   197,     5,   290,    17,   215,   298,   523,   291,
     362,   524,     5,   101,   107,   306,    17,    17,     4,   360,
     360,   360,   360,   360,   360,   377,   360,   360,   369,   360,
       4,   377,     4,    40,   113,   197,   269,   542,    40,   113,
     197,   269,   543,     4,    99,     5,     5,    88,     4,     5,
       5,    88,     5,   553,    62,   122,   159,   278,   557,    62,
     122,   278,   561,    88,   159,    62,   122,   278,   555,     4,
      62,   122,   278,   554,     5,     5,     4,     4,     5,     5,
       5,   360,   360,   360,     4,   360,   567,   360,   360,     6,
     371,     4,     5,     4,     4,     5,     4,    99,   266,   378,
     360,   360,    12,     5,    12,   360,   360,    12,     4,    12,
       4,     4,   360,   360,   360,     4,   362,     4,     4,   377,
     370,   377,   360,   360,   360,   370,   360,   369,   360,   360,
       5,     5,   360,   372,   360,   370,   360,   377,   377,   378,
     378,   378,   377,   369,   360,   377,   360,   136,   251,   363,
     451,   168,     5,     4,   377,   159,   159,     4,     5,     4,
       4,   360,   446,   360,    20,    21,    22,    49,    50,    53,
      60,    63,    67,    75,    76,    83,   111,   112,   115,   131,
     152,   175,   184,   228,   230,   236,   237,   253,   264,   289,
     291,   301,   311,   345,    67,   131,   157,   237,   289,    30,
     163,   216,   242,   508,   360,   211,   360,   509,    17,   360,
     263,   519,   263,   211,   360,   510,   291,   511,    17,   100,
     360,   360,     5,   378,    57,   370,     4,     5,   475,   360,
       5,     5,     5,   159,   187,   382,   382,   167,   270,   380,
       4,     4,     5,     5,   479,   276,   276,     5,     5,     5,
      17,   161,   381,   381,   380,     4,     4,   380,     5,     5,
     483,   164,   344,   371,   487,     5,   486,     5,     5,   490,
       5,   491,     5,    14,    15,    62,   193,   194,   268,   278,
     279,   283,   309,     4,     4,     5,     5,   382,   380,     4,
       5,     5,   377,    83,   154,   226,   227,   241,   284,   385,
       7,     8,   360,   365,   242,   123,   242,   242,   107,    40,
      67,   101,   107,   113,   131,   152,   167,   198,   237,   252,
     264,   291,   303,   305,   306,   345,   500,   123,   242,     5,
      27,   169,   242,   287,   141,   107,    22,    50,    53,    83,
     112,   115,   230,   263,    22,    50,    53,    56,    83,   112,
     115,   230,   263,   289,    40,   123,   242,   242,   107,     5,
     215,    27,   228,    36,   135,   297,   360,   267,   274,   123,
     248,   370,   519,    40,   132,   228,   287,   248,   215,     5,
       5,   252,    27,   228,     4,     5,     5,   215,    36,   135,
     297,   360,   519,   215,   362,     4,     4,   360,     5,   309,
      22,    27,    49,    50,    52,    53,    63,    75,    76,    83,
      86,   104,   111,   112,   115,   175,   230,   236,   253,   263,
     290,   291,   311,   356,   502,   360,   360,   360,   360,   360,
     506,   370,     5,     4,     5,   360,   360,   370,   360,   362,
     360,   360,   506,     5,   360,   360,   362,     5,    17,     5,
       5,   360,   360,   369,   360,   360,     4,   360,   360,   113,
     360,   360,   113,     4,    42,    43,   173,   174,   201,   387,
     387,    62,   122,   278,   551,   387,     5,    62,   122,   278,
     556,     5,     5,    62,   122,   278,   558,     4,     5,     5,
       4,    62,   122,   278,   560,    62,   122,   278,   559,     5,
       5,     4,     5,     5,     4,   387,   387,   387,   360,   360,
     360,     4,   370,   360,   371,   377,     5,     5,    12,   360,
     370,   372,   360,    12,   360,   360,   360,    60,   360,     6,
       4,   360,   360,    47,   277,   414,     5,   362,   362,   377,
     360,     4,     4,     4,   377,   370,   360,   360,   360,   360,
     377,   370,   378,   369,   360,     4,   378,   360,    38,    38,
       4,   372,     5,    24,    25,    99,   379,     4,   370,   360,
     360,     4,   360,     5,    83,   154,   226,   227,   241,   284,
     370,   372,   242,   123,   242,   242,    21,   242,   370,   123,
     242,    27,   169,   242,   287,   141,    21,   242,   123,   242,
     242,    21,   242,    27,   170,   228,   170,   267,   274,   123,
     170,   228,   295,   519,   132,   170,   228,   287,     4,   252,
      27,   170,   228,   519,   211,   360,   360,   360,   360,   360,
     360,   199,   360,   360,    20,   238,   467,     4,     4,   360,
     382,   382,   382,     4,   382,   382,   382,    14,    15,    62,
     193,   194,   268,   278,   279,   309,   381,   382,   382,   382,
     382,   382,     4,   382,   382,     4,   381,    14,    15,    62,
     193,   194,   268,   278,   279,   309,     5,   485,     5,   488,
       5,     5,    14,    15,    62,   193,   194,   268,   278,   279,
     283,   309,     5,    14,    15,    62,   193,   194,   268,   278,
     279,   283,   309,     5,    14,    15,    62,   193,   194,   268,
     278,   279,   283,   309,    14,    15,    62,   193,   194,   268,
     278,   279,   309,   276,     5,     5,     5,   381,   381,   380,
       4,     4,   380,     5,     4,     4,   382,   382,     4,   382,
     382,     5,   362,   370,   372,     5,   360,   362,   360,     5,
     360,     5,   365,   107,   198,   252,   107,   198,   252,     5,
     362,   360,   362,     5,   360,   370,   362,     5,   365,   242,
     242,    21,   242,    21,   242,   242,    21,   242,   313,   313,
       4,     4,     4,   500,     4,     4,     4,   313,   313,     4,
       5,     4,   362,   360,     5,   360,     5,   365,   362,   370,
     370,   360,    27,    49,    52,    63,    86,   104,   356,   383,
       4,   362,   360,   377,   362,     5,   370,   370,   360,   362,
     362,   370,   370,   360,   362,   360,     5,   360,   228,   228,
     360,   360,   228,   360,   228,   360,   360,   512,   520,   360,
     228,   228,   360,   360,   360,   360,   360,   360,   360,   360,
       5,   309,   360,   503,   360,   360,   228,   360,   360,   360,
     360,   370,   377,     5,   370,   370,   360,   360,   377,   360,
     360,   360,   370,   360,   360,     5,     4,   360,   360,   360,
     360,     5,     5,     4,   387,     5,     5,     4,     4,     4,
       5,     5,     4,     4,     5,     5,     4,     5,     5,     4,
     360,   360,   360,   360,   377,   360,   370,   372,   360,   377,
     360,   360,   360,   360,   360,     5,   360,     4,     6,   360,
     360,     4,   370,   360,   377,   180,   375,   360,   375,   378,
     377,   370,   360,   360,     4,   360,   370,   370,   360,     4,
       5,     5,     5,     5,     5,   370,   377,   370,   370,   370,
     370,   372,   370,   377,   370,   370,   370,   372,   370,   370,
     370,   370,   372,   370,   370,   370,   360,   370,   370,   370,
     370,   370,   370,   370,   360,   360,     4,   360,     5,     4,
     360,   382,     5,     5,     5,   380,     4,     4,     5,   382,
     381,     4,   382,     5,     5,     5,   381,   381,   380,     4,
       4,     5,    14,    15,    62,   193,   194,   268,   278,   279,
     309,    14,    15,    62,   193,   194,   268,   278,   279,   309,
      14,    15,    62,   193,   194,   268,   278,   279,   309,   276,
       5,     5,     5,   381,   381,   380,     4,     4,   380,     5,
     276,     5,     5,     5,   381,   381,   380,     4,     4,   380,
       5,   276,     5,     5,     5,   381,   381,   380,     4,     4,
     380,     5,     5,     5,     5,   381,   381,   380,     4,     4,
       5,   381,     4,     4,   381,     4,     4,   382,     5,   377,
     370,   360,   360,   370,   360,     5,   365,     5,   370,   362,
       5,   370,   377,     5,   365,   360,   360,   360,   360,   360,
     360,   360,   360,   360,     4,     4,     5,     4,     4,   360,
     370,   360,     5,   365,   362,   377,   377,   360,   369,   377,
     377,   360,   377,   377,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,    56,    67,    94,   131,   289,   291,
     345,   517,   518,   519,   530,   531,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   370,     5,
     360,   360,   360,   360,     4,     4,   377,   378,     4,   504,
     377,   377,   369,   360,     4,   377,     4,   387,   387,   387,
     365,   360,   360,   360,   377,   360,   369,   360,   360,    12,
       5,     5,     4,   360,   360,     4,   377,   370,   360,   360,
     378,   379,   360,     5,   360,   372,     5,     5,     5,     5,
       5,   377,   379,   379,   379,   377,   379,   378,   379,   379,
     377,   379,   379,   379,   377,   379,   379,   377,   370,   379,
     377,   379,   379,   377,   379,   377,     4,   372,     5,   360,
       4,   382,   381,     4,   381,     5,     5,     5,   381,   381,
     380,     4,     4,     5,     5,     5,     5,   381,   381,   380,
       4,     4,     5,     5,     5,     5,   381,   381,   380,     4,
       4,     5,   381,   382,   382,   382,   382,   382,     4,   382,
     382,     4,   381,   381,   382,   382,   382,   382,   382,     4,
     382,   382,     4,   381,   381,     4,     4,   381,     4,   381,
     381,     4,     4,     4,   371,   379,     4,   370,   379,   360,
     370,     4,   379,   379,   370,     4,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   370,   379,   360,
     370,     4,   369,   369,   370,   369,   369,   370,   370,   369,
     369,   360,   360,   360,   360,   360,   360,   365,   360,   360,
     360,   357,   357,   357,   357,   357,   357,   357,   518,   357,
     365,   360,   360,   360,   360,   365,   360,   360,   360,   360,
     360,   360,   377,   360,   309,   364,   365,   360,   360,   378,
     362,     4,     4,   378,     4,   360,   369,   360,    60,   360,
       5,     5,   360,     4,   375,   379,     5,     4,     5,     4,
       5,   370,     5,   378,   379,   378,   378,   378,     5,     4,
     360,   382,   381,   382,   382,   382,   382,   382,     4,   382,
     382,   381,   382,   382,   382,   382,   382,     4,   382,   382,
     381,   382,   382,   382,   382,   382,     4,   382,   382,   381,
     382,   381,     4,   382,   382,   381,     4,   382,   381,     4,
     381,   381,   377,   370,   379,     4,   377,   360,   377,   360,
     360,   360,   379,     4,   377,   360,   369,   379,   360,   369,
     379,   379,   370,   360,     4,   384,   384,   360,   360,   384,
     365,   384,   520,   370,   500,     5,     4,     5,     5,     5,
       4,   362,   365,   384,   384,   360,   360,   365,   360,   360,
     360,   360,   360,   369,   360,     5,   520,   360,   384,   362,
     521,   522,     5,   362,     4,     5,   360,     5,     4,     6,
     360,    32,   286,   421,   370,     5,    32,   286,   386,   370,
     421,   360,   381,   382,   381,   382,   381,   382,   382,   381,
     382,   381,   381,   360,   379,   370,   370,   360,   370,   360,
     370,   370,   360,   370,   379,     4,   520,   520,   364,   360,
     520,     4,   520,   377,     5,     4,     4,   520,   520,   364,
     360,     4,   520,   520,   360,   370,   520,   520,   520,   521,
     527,   528,   519,   525,   526,     4,     5,     5,     6,     4,
     190,   307,   352,   360,   412,     4,   370,     4,   382,   382,
     382,   382,   382,   371,   379,   379,   360,   379,     4,   379,
     379,   360,   379,   360,   520,   520,     4,   360,   520,     5,
     360,   520,     4,   360,   520,   377,   527,   529,   530,   357,
     526,     5,     5,     4,   360,   413,   360,   413,   377,   379,
       4,   370,   372,     4,   365,   364,   360,   360,   364,   360,
     370,   530,   362,     5,     5,   360,   360,   360,   360,   386,
       5,   370,   372,   377,   370,   372,   520,   360,     4,   520,
     360,   379,     5,     5,   360,     5,   360,   377,   377,     4,
     520,     4,     5,     5,     5,   364,   364,   520,   520,   520
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
#line 466 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 467 "frame/parser.Y"
    {fr->bgColorCmd("gray");;}
    break;

  case 7:
#line 469 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 470 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 472 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 479 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 22:
#line 484 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 23:
#line 485 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 487 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 32:
#line 494 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 36:
#line 498 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 39:
#line 501 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 44:
#line 506 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 46:
#line 508 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 48:
#line 510 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 50:
#line 512 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 55:
#line 519 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 56:
#line 520 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 57:
#line 523 "frame/parser.Y"
    {yydebug=1;;}
    break;

  case 58:
#line 524 "frame/parser.Y"
    {yydebug=0;;}
    break;

  case 59:
#line 525 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 60:
#line 526 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 61:
#line 527 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 62:
#line 528 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 529 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 530 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 531 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 532 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 533 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 534 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 537 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 70:
#line 539 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 71:
#line 540 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 72:
#line 541 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 73:
#line 542 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 74:
#line 544 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 75:
#line 545 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 76:
#line 546 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 77:
#line 547 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 78:
#line 550 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 79:
#line 551 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 80:
#line 552 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 81:
#line 553 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 82:
#line 554 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 83:
#line 557 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 84:
#line 558 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 85:
#line 561 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 86:
#line 562 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 87:
#line 563 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 88:
#line 566 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 89:
#line 569 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 90:
#line 572 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 91:
#line 576 "frame/parser.Y"
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

  case 92:
#line 588 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 93:
#line 595 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 94:
#line 602 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 95:
#line 609 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 96:
#line 610 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 97:
#line 611 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 98:
#line 612 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 99:
#line 613 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 100:
#line 616 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 101:
#line 617 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 102:
#line 618 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 103:
#line 619 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 104:
#line 620 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 105:
#line 621 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 106:
#line 622 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 107:
#line 623 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 108:
#line 624 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 109:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 110:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 111:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 112:
#line 628 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 113:
#line 629 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 114:
#line 630 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 115:
#line 631 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 116:
#line 632 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 117:
#line 633 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 118:
#line 634 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 119:
#line 635 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 120:
#line 636 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 121:
#line 637 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 122:
#line 638 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 123:
#line 639 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 124:
#line 640 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 125:
#line 641 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 126:
#line 642 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 127:
#line 643 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 128:
#line 646 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 129:
#line 647 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 130:
#line 650 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 131:
#line 651 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 132:
#line 652 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 133:
#line 653 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 134:
#line 654 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 135:
#line 655 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 136:
#line 658 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 137:
#line 659 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 138:
#line 660 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 139:
#line 661 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 140:
#line 662 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 141:
#line 665 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 142:
#line 666 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 143:
#line 667 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 144:
#line 668 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 145:
#line 669 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 146:
#line 670 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 147:
#line 671 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 148:
#line 672 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 149:
#line 675 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 150:
#line 676 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 151:
#line 677 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 152:
#line 678 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 153:
#line 679 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 154:
#line 682 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 155:
#line 683 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 156:
#line 684 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 157:
#line 685 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 158:
#line 686 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 159:
#line 687 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 160:
#line 688 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 161:
#line 689 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 162:
#line 692 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 163:
#line 693 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 164:
#line 694 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 165:
#line 697 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 166:
#line 698 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 167:
#line 699 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 168:
#line 700 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 169:
#line 703 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 170:
#line 704 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 171:
#line 705 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 172:
#line 708 "frame/parser.Y"
    {;}
    break;

  case 173:
#line 709 "frame/parser.Y"
    {;}
    break;

  case 174:
#line 710 "frame/parser.Y"
    {;}
    break;

  case 175:
#line 713 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 176:
#line 714 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 177:
#line 715 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 178:
#line 718 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 179:
#line 719 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 180:
#line 720 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 181:
#line 721 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 182:
#line 722 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 183:
#line 723 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 184:
#line 724 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 185:
#line 725 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 186:
#line 728 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 187:
#line 729 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 188:
#line 732 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 189:
#line 733 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 190:
#line 734 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 191:
#line 735 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 192:
#line 736 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 193:
#line 737 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 194:
#line 740 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 195:
#line 741 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 196:
#line 742 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 197:
#line 745 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 198:
#line 746 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 199:
#line 747 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 200:
#line 748 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 201:
#line 749 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 202:
#line 750 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 207:
#line 757 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 208:
#line 758 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 209:
#line 759 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 210:
#line 761 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 211:
#line 764 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 212:
#line 765 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 213:
#line 768 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 214:
#line 769 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 215:
#line 772 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 216:
#line 773 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 217:
#line 776 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 218:
#line 778 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 220:
#line 782 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 221:
#line 783 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 224:
#line 786 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 226:
#line 788 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 227:
#line 791 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 228:
#line 792 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 229:
#line 795 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 230:
#line 796 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 231:
#line 798 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 232:
#line 800 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 233:
#line 801 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 234:
#line 802 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 235:
#line 804 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 236:
#line 806 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 237:
#line 809 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 238:
#line 810 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 239:
#line 813 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 240:
#line 815 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 241:
#line 818 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 242:
#line 820 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 243:
#line 823 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 244:
#line 827 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 245:
#line 828 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 247:
#line 832 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 248:
#line 833 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 249:
#line 834 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 253:
#line 840 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 254:
#line 841 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 256:
#line 844 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 257:
#line 849 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 258:
#line 850 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 259:
#line 853 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 260:
#line 854 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 261:
#line 855 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 262:
#line 856 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 263:
#line 857 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 264:
#line 860 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 265:
#line 861 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 266:
#line 862 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 267:
#line 863 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 268:
#line 866 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 269:
#line 868 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 270:
#line 873 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 271:
#line 878 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 272:
#line 885 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 273:
#line 887 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 274:
#line 888 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 276:
#line 890 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 277:
#line 894 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 278:
#line 896 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 279:
#line 898 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 280:
#line 899 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 286:
#line 910 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 287:
#line 912 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 288:
#line 914 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 289:
#line 919 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 290:
#line 923 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 291:
#line 926 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 292:
#line 927 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 293:
#line 930 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 294:
#line 931 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 295:
#line 933 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 296:
#line 939 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 297:
#line 940 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 298:
#line 941 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 299:
#line 942 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 300:
#line 945 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 301:
#line 946 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 302:
#line 949 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 303:
#line 950 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 304:
#line 953 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 305:
#line 954 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 306:
#line 958 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 307:
#line 960 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 308:
#line 963 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 309:
#line 965 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 310:
#line 968 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 312:
#line 970 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 313:
#line 971 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 314:
#line 972 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 315:
#line 975 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 316:
#line 977 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 317:
#line 978 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 318:
#line 979 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 319:
#line 980 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 320:
#line 984 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 321:
#line 986 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 322:
#line 987 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 323:
#line 988 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 324:
#line 991 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 325:
#line 993 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 326:
#line 995 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 327:
#line 997 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 328:
#line 1000 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 329:
#line 1003 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 330:
#line 1004 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 331:
#line 1005 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 332:
#line 1008 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 333:
#line 1011 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 347:
#line 1025 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 350:
#line 1028 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 351:
#line 1030 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 354:
#line 1033 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 355:
#line 1034 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 358:
#line 1037 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 359:
#line 1038 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 361:
#line 1041 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 363:
#line 1043 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 365:
#line 1045 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 367:
#line 1047 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 368:
#line 1049 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 369:
#line 1051 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 371:
#line 1053 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 372:
#line 1056 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 373:
#line 1057 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 374:
#line 1058 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 375:
#line 1059 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 376:
#line 1060 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 377:
#line 1061 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 379:
#line 1063 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 380:
#line 1066 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 381:
#line 1067 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 382:
#line 1068 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 383:
#line 1071 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 384:
#line 1074 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 385:
#line 1076 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 386:
#line 1078 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 387:
#line 1079 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 388:
#line 1080 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 390:
#line 1082 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 392:
#line 1085 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 393:
#line 1091 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 394:
#line 1092 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 395:
#line 1095 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 396:
#line 1096 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 397:
#line 1097 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 398:
#line 1100 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 399:
#line 1101 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 401:
#line 1107 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 402:
#line 1109 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 403:
#line 1111 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 404:
#line 1114 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 406:
#line 1116 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 407:
#line 1120 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 408:
#line 1124 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 410:
#line 1126 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 411:
#line 1127 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 412:
#line 1128 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 413:
#line 1129 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 414:
#line 1130 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 416:
#line 1132 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 417:
#line 1133 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 418:
#line 1136 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 419:
#line 1137 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 420:
#line 1138 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 421:
#line 1141 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 422:
#line 1142 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 423:
#line 1146 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 424:
#line 1148 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 425:
#line 1156 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 426:
#line 1158 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 427:
#line 1160 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 428:
#line 1163 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 429:
#line 1165 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 430:
#line 1166 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 431:
#line 1169 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 432:
#line 1172 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 433:
#line 1174 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 434:
#line 1178 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 435:
#line 1180 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 436:
#line 1183 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 437:
#line 1187 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 438:
#line 1188 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 439:
#line 1190 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)), (Coord::InternalSystem)(yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 440:
#line 1193 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 441:
#line 1194 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 443:
#line 1198 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 444:
#line 1199 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 445:
#line 1200 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 446:
#line 1203 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 447:
#line 1205 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 448:
#line 1206 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 450:
#line 1208 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 454:
#line 1212 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 455:
#line 1213 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 456:
#line 1214 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 457:
#line 1216 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 459:
#line 1218 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 460:
#line 1221 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 461:
#line 1223 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 462:
#line 1225 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 463:
#line 1226 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 464:
#line 1227 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 465:
#line 1228 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 466:
#line 1231 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 467:
#line 1232 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 468:
#line 1236 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 469:
#line 1238 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 470:
#line 1241 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 471:
#line 1244 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 472:
#line 1245 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 473:
#line 1247 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 474:
#line 1249 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 475:
#line 1251 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 476:
#line 1254 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 477:
#line 1255 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 478:
#line 1256 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 479:
#line 1259 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 480:
#line 1260 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 481:
#line 1261 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 482:
#line 1262 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 483:
#line 1263 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 484:
#line 1264 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 485:
#line 1265 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 486:
#line 1268 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 487:
#line 1271 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 488:
#line 1272 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 489:
#line 1273 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 490:
#line 1276 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 491:
#line 1277 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 492:
#line 1278 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 493:
#line 1279 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 494:
#line 1280 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 495:
#line 1281 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 500:
#line 1288 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 501:
#line 1289 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 502:
#line 1290 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 503:
#line 1293 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 504:
#line 1294 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 505:
#line 1297 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 506:
#line 1298 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 507:
#line 1301 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 508:
#line 1302 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 509:
#line 1305 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 510:
#line 1306 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 511:
#line 1309 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 513:
#line 1311 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 514:
#line 1314 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 515:
#line 1315 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 517:
#line 1319 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 518:
#line 1323 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 519:
#line 1326 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 520:
#line 1333 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 521:
#line 1334 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 522:
#line 1337 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 525:
#line 1340 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 526:
#line 1341 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 527:
#line 1342 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 528:
#line 1343 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 530:
#line 1345 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 531:
#line 1346 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 532:
#line 1347 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 534:
#line 1349 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 535:
#line 1350 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 536:
#line 1351 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 537:
#line 1352 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 539:
#line 1356 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 540:
#line 1359 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 541:
#line 1360 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 542:
#line 1363 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 543:
#line 1364 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 544:
#line 1365 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 545:
#line 1366 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 546:
#line 1369 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 547:
#line 1370 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 548:
#line 1371 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 549:
#line 1372 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 550:
#line 1375 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 551:
#line 1376 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 552:
#line 1377 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 553:
#line 1378 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 554:
#line 1379 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 555:
#line 1380 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 556:
#line 1383 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 557:
#line 1384 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 558:
#line 1385 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 561:
#line 1389 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 562:
#line 1390 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 563:
#line 1393 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 564:
#line 1396 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 565:
#line 1397 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 566:
#line 1401 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 567:
#line 1403 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 568:
#line 1404 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 575:
#line 1416 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 576:
#line 1418 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 577:
#line 1420 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 578:
#line 1421 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 579:
#line 1423 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 580:
#line 1425 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 581:
#line 1427 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 582:
#line 1429 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 583:
#line 1431 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 585:
#line 1435 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 586:
#line 1436 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 587:
#line 1437 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 588:
#line 1438 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 589:
#line 1439 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 590:
#line 1441 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 591:
#line 1442 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 592:
#line 1443 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 593:
#line 1444 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 594:
#line 1447 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 595:
#line 1451 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 596:
#line 1453 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 597:
#line 1455 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 598:
#line 1457 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 599:
#line 1459 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 600:
#line 1461 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 601:
#line 1463 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 602:
#line 1465 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 603:
#line 1468 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 604:
#line 1470 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 605:
#line 1472 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 611:
#line 1480 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 612:
#line 1481 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 613:
#line 1482 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 614:
#line 1483 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 615:
#line 1484 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 616:
#line 1485 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 617:
#line 1487 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 618:
#line 1489 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 619:
#line 1490 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 620:
#line 1491 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 621:
#line 1492 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 622:
#line 1495 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 623:
#line 1496 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 624:
#line 1497 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 625:
#line 1498 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 626:
#line 1499 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 627:
#line 1501 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 628:
#line 1502 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 629:
#line 1503 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 630:
#line 1504 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 636:
#line 1515 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 637:
#line 1518 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 638:
#line 1521 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 639:
#line 1524 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 640:
#line 1527 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 641:
#line 1530 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 642:
#line 1533 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 643:
#line 1536 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 644:
#line 1539 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 645:
#line 1544 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 646:
#line 1547 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 647:
#line 1550 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 648:
#line 1553 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 649:
#line 1556 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 650:
#line 1559 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 651:
#line 1562 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 652:
#line 1565 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 653:
#line 1568 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 654:
#line 1571 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 655:
#line 1574 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 656:
#line 1579 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 657:
#line 1582 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 658:
#line 1585 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 659:
#line 1588 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 660:
#line 1591 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 661:
#line 1594 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 662:
#line 1597 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 663:
#line 1600 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 664:
#line 1603 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 665:
#line 1608 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 666:
#line 1610 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 667:
#line 1612 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 668:
#line 1614 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 669:
#line 1616 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 670:
#line 1618 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 671:
#line 1623 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 672:
#line 1625 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 673:
#line 1627 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 674:
#line 1631 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 675:
#line 1634 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 676:
#line 1637 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 677:
#line 1640 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 678:
#line 1643 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 679:
#line 1646 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 680:
#line 1649 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 681:
#line 1652 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 682:
#line 1655 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 683:
#line 1658 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 684:
#line 1661 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 685:
#line 1665 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 686:
#line 1666 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 687:
#line 1667 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 688:
#line 1668 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 689:
#line 1669 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 690:
#line 1670 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1672 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 692:
#line 1674 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 693:
#line 1675 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 694:
#line 1676 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 695:
#line 1677 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 696:
#line 1680 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 697:
#line 1681 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 698:
#line 1682 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 699:
#line 1683 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 700:
#line 1684 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 701:
#line 1686 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 702:
#line 1687 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 703:
#line 1688 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 704:
#line 1689 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 705:
#line 1693 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 706:
#line 1695 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 707:
#line 1696 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 708:
#line 1698 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 709:
#line 1700 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 710:
#line 1702 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 711:
#line 1705 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 712:
#line 1706 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 713:
#line 1709 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 714:
#line 1710 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 715:
#line 1711 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 716:
#line 1714 "frame/parser.Y"
    {
#ifdef MAC_OSX_TK
	  fr->macosxPrintCmd();
#endif
	;}
    break;

  case 717:
#line 1721 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 718:
#line 1722 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 719:
#line 1723 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 720:
#line 1724 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 721:
#line 1725 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 722:
#line 1726 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 723:
#line 1727 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 724:
#line 1731 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 726:
#line 1739 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 727:
#line 1740 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 728:
#line 1742 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 729:
#line 1744 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 730:
#line 1745 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 731:
#line 1746 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 733:
#line 1747 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 734:
#line 1748 "frame/parser.Y"
    {fr->markerDeleteCmd();;}
    break;

  case 735:
#line 1749 "frame/parser.Y"
    {fr->markerDeleteAllCmd();;}
    break;

  case 737:
#line 1751 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 738:
#line 1752 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 739:
#line 1754 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 740:
#line 1756 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 741:
#line 1758 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 742:
#line 1761 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 743:
#line 1763 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 744:
#line 1764 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 745:
#line 1766 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 746:
#line 1769 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 747:
#line 1772 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 748:
#line 1774 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 749:
#line 1777 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 750:
#line 1780 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 751:
#line 1783 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 752:
#line 1786 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 753:
#line 1790 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 754:
#line 1794 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 755:
#line 1799 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 756:
#line 1803 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 757:
#line 1804 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 758:
#line 1806 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 759:
#line 1807 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 760:
#line 1809 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 761:
#line 1811 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 762:
#line 1813 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 763:
#line 1815 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 764:
#line 1816 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 765:
#line 1818 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 766:
#line 1820 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 767:
#line 1823 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 768:
#line 1827 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 769:
#line 1831 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 770:
#line 1833 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 771:
#line 1835 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 772:
#line 1837 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 773:
#line 1839 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 774:
#line 1841 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 775:
#line 1843 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 776:
#line 1845 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 777:
#line 1847 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 778:
#line 1849 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 779:
#line 1851 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 780:
#line 1853 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 781:
#line 1855 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 782:
#line 1857 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 783:
#line 1858 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 784:
#line 1860 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 785:
#line 1862 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 786:
#line 1863 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 787:
#line 1864 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 788:
#line 1866 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 789:
#line 1868 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 790:
#line 1869 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 791:
#line 1870 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 792:
#line 1871 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 793:
#line 1873 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 794:
#line 1874 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 795:
#line 1876 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 796:
#line 1880 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 797:
#line 1883 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 798:
#line 1886 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 799:
#line 1890 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 800:
#line 1894 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 801:
#line 1899 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 802:
#line 1903 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 803:
#line 1904 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 804:
#line 1905 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 805:
#line 1907 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 806:
#line 1909 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 807:
#line 1913 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 808:
#line 1914 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 809:
#line 1915 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 810:
#line 1917 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 811:
#line 1920 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 812:
#line 1923 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 813:
#line 1926 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 814:
#line 1927 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 815:
#line 1929 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 816:
#line 1932 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 817:
#line 1936 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 818:
#line 1938 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 819:
#line 1939 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 820:
#line 1941 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 821:
#line 1944 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 822:
#line 1947 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 823:
#line 1948 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 824:
#line 1950 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 825:
#line 1951 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 826:
#line 1952 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 827:
#line 1954 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 828:
#line 1955 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 829:
#line 1957 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 830:
#line 1960 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 831:
#line 1963 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 832:
#line 1965 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 833:
#line 1966 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 837:
#line 1971 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 838:
#line 1972 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 839:
#line 1974 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 840:
#line 1976 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 841:
#line 1978 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 842:
#line 1979 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 843:
#line 1981 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer));;}
    break;

  case 844:
#line 1982 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 847:
#line 1987 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 848:
#line 1988 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 849:
#line 1989 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 850:
#line 1990 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 851:
#line 1991 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 852:
#line 1992 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 853:
#line 1993 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 854:
#line 1994 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 855:
#line 1995 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 856:
#line 1996 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 857:
#line 1998 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 858:
#line 2000 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 859:
#line 2001 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 860:
#line 2002 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 861:
#line 2003 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 862:
#line 2004 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 863:
#line 2006 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 864:
#line 2007 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 865:
#line 2008 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 866:
#line 2009 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 867:
#line 2010 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 868:
#line 2012 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 869:
#line 2013 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 870:
#line 2014 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 871:
#line 2015 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 872:
#line 2016 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 873:
#line 2017 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 874:
#line 2020 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 875:
#line 2021 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 876:
#line 2022 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 877:
#line 2023 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 878:
#line 2024 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 879:
#line 2025 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 880:
#line 2026 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 881:
#line 2027 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 882:
#line 2028 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 883:
#line 2029 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 884:
#line 2030 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 885:
#line 2031 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 886:
#line 2032 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 887:
#line 2033 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 888:
#line 2034 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 889:
#line 2035 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 890:
#line 2036 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 891:
#line 2037 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 892:
#line 2038 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 893:
#line 2039 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 894:
#line 2040 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 895:
#line 2043 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 896:
#line 2044 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 897:
#line 2045 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 898:
#line 2046 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 899:
#line 2047 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 900:
#line 2049 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 901:
#line 2059 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 902:
#line 2067 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 903:
#line 2076 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 904:
#line 2084 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 905:
#line 2091 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 906:
#line 2098 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 907:
#line 2106 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 908:
#line 2114 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 909:
#line 2119 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 910:
#line 2124 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 911:
#line 2129 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 912:
#line 2134 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2139 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2144 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2149 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2158 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2168 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2178 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2187 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2195 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2205 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 922:
#line 2215 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 923:
#line 2225 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 924:
#line 2237 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 925:
#line 2246 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 927:
#line 2254 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 928:
#line 2256 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 929:
#line 2258 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 930:
#line 2263 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 931:
#line 2266 "frame/parser.Y"
    {(yyval.dash)[0] = (yyvsp[(1) - (2)].integer); (yyval.dash)[1] = (yyvsp[(2) - (2)].integer);;}
    break;

  case 932:
#line 2270 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 933:
#line 2272 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 934:
#line 2273 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 935:
#line 2276 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 936:
#line 2277 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 937:
#line 2278 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 938:
#line 2279 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 939:
#line 2280 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 940:
#line 2281 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 941:
#line 2282 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 943:
#line 2286 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 944:
#line 2287 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 945:
#line 2288 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 946:
#line 2289 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 947:
#line 2290 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 948:
#line 2293 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 949:
#line 2295 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 950:
#line 2297 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 951:
#line 2299 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 952:
#line 2301 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 953:
#line 2303 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 954:
#line 2305 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 955:
#line 2306 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 956:
#line 2307 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 957:
#line 2309 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 958:
#line 2311 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 959:
#line 2313 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 960:
#line 2315 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 961:
#line 2317 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 962:
#line 2318 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 963:
#line 2319 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 964:
#line 2321 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 965:
#line 2323 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 966:
#line 2326 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 967:
#line 2328 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 968:
#line 2330 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 969:
#line 2331 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 970:
#line 2332 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 971:
#line 2333 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 972:
#line 2335 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 973:
#line 2336 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 974:
#line 2337 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 975:
#line 2338 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 976:
#line 2339 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 977:
#line 2341 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 978:
#line 2343 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 979:
#line 2344 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 980:
#line 2346 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 981:
#line 2348 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 982:
#line 2350 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 983:
#line 2351 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 984:
#line 2353 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 985:
#line 2355 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 986:
#line 2356 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 987:
#line 2357 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 988:
#line 2358 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 989:
#line 2360 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 990:
#line 2362 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 991:
#line 2365 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 992:
#line 2368 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 993:
#line 2369 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 994:
#line 2370 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 995:
#line 2372 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 996:
#line 2375 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 997:
#line 2378 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 998:
#line 2379 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 999:
#line 2380 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1000:
#line 2381 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1001:
#line 2383 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1002:
#line 2385 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1003:
#line 2387 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1004:
#line 2388 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1005:
#line 2390 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1006:
#line 2391 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1007:
#line 2392 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1008:
#line 2393 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1009:
#line 2394 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1010:
#line 2396 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1011:
#line 2398 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1012:
#line 2400 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1013:
#line 2402 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1015:
#line 2404 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1016:
#line 2405 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1017:
#line 2407 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1018:
#line 2409 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1019:
#line 2410 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1020:
#line 2411 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1022:
#line 2413 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1024:
#line 2417 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1025:
#line 2418 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1026:
#line 2419 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1027:
#line 2420 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1028:
#line 2421 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1029:
#line 2422 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1030:
#line 2424 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1031:
#line 2425 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1032:
#line 2427 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1033:
#line 2430 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1034:
#line 2431 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1035:
#line 2432 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1036:
#line 2433 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1037:
#line 2436 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1038:
#line 2437 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1039:
#line 2440 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1040:
#line 2441 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1041:
#line 2444 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1042:
#line 2445 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1043:
#line 2448 "frame/parser.Y"
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

  case 1044:
#line 2461 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1045:
#line 2462 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1046:
#line 2466 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1047:
#line 2467 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1048:
#line 2471 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1049:
#line 2472 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1050:
#line 2477 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer),
	    0, propQMask, propQValue, taglist);;}
    break;

  case 1051:
#line 2482 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer),
	    1, propQMask, propQValue, taglist);;}
    break;

  case 1052:
#line 2488 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1053:
#line 2490 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1054:
#line 2493 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1055:
#line 2495 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1056:
#line 2498 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].dash), (yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].str));;}
    break;

  case 1057:
#line 2501 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1058:
#line 2502 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1059:
#line 2503 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1060:
#line 2504 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1061:
#line 2505 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1062:
#line 2506 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1063:
#line 2508 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1066:
#line 2515 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1067:
#line 2516 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1068:
#line 2517 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1069:
#line 2518 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1070:
#line 2519 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1071:
#line 2520 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1074:
#line 2525 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1075:
#line 2526 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1076:
#line 2527 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1077:
#line 2528 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1078:
#line 2529 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1079:
#line 2530 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1080:
#line 2531 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1081:
#line 2532 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1082:
#line 2533 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1083:
#line 2534 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1084:
#line 2535 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1087:
#line 2542 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1088:
#line 2543 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1090:
#line 2546 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1091:
#line 2547 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1092:
#line 2548 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1093:
#line 2549 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1094:
#line 2552 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1095:
#line 2553 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1098:
#line 2561 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1099:
#line 2564 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1100:
#line 2565 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1104:
#line 2572 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1105:
#line 2575 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1106:
#line 2579 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1107:
#line 2580 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1108:
#line 2581 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1109:
#line 2582 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1110:
#line 2583 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1111:
#line 2584 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1112:
#line 2585 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1113:
#line 2586 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1114:
#line 2592 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1115:
#line 2593 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1116:
#line 2594 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1117:
#line 2595 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1118:
#line 2599 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1119:
#line 2600 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1120:
#line 2602 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1121:
#line 2607 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1123:
#line 2609 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1125:
#line 2611 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1126:
#line 2614 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1127:
#line 2616 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1128:
#line 2621 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1129:
#line 2624 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1130:
#line 2625 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1131:
#line 2626 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1132:
#line 2629 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1133:
#line 2631 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1134:
#line 2635 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1135:
#line 2636 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1136:
#line 2640 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1137:
#line 2641 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1138:
#line 2642 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1139:
#line 2643 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1140:
#line 2649 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1141:
#line 2650 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1142:
#line 2656 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1143:
#line 2657 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1144:
#line 2658 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1145:
#line 2659 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1148:
#line 2667 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1149:
#line 2669 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1150:
#line 2670 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1151:
#line 2671 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1152:
#line 2675 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1153:
#line 2676 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1154:
#line 2677 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1155:
#line 2678 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1156:
#line 2681 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1157:
#line 2682 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1158:
#line 2685 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1159:
#line 2686 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1160:
#line 2687 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1161:
#line 2690 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1162:
#line 2691 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1163:
#line 2692 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1164:
#line 2695 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1165:
#line 2696 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1167:
#line 2698 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1168:
#line 2699 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1169:
#line 2702 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1170:
#line 2703 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1171:
#line 2704 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1176:
#line 2711 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1177:
#line 2715 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1178:
#line 2717 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1179:
#line 2719 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1181:
#line 2724 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1182:
#line 2726 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1183:
#line 2728 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1193:
#line 2741 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1194:
#line 2742 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1195:
#line 2743 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1196:
#line 2746 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1197:
#line 2747 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1198:
#line 2748 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1199:
#line 2751 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1200:
#line 2752 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1201:
#line 2753 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1202:
#line 2756 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1203:
#line 2757 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1204:
#line 2758 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1206:
#line 2762 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1207:
#line 2763 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1208:
#line 2764 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1209:
#line 2767 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1210:
#line 2768 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1211:
#line 2769 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1212:
#line 2772 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1213:
#line 2773 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1214:
#line 2774 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1215:
#line 2777 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1216:
#line 2778 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1217:
#line 2779 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1218:
#line 2782 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1219:
#line 2783 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1220:
#line 2784 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1221:
#line 2788 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1222:
#line 2790 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1223:
#line 2792 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1224:
#line 2796 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1225:
#line 2800 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1226:
#line 2802 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1227:
#line 2806 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1228:
#line 2809 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1229:
#line 2810 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1230:
#line 2811 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1231:
#line 2812 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1232:
#line 2815 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1233:
#line 2817 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1234:
#line 2818 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1235:
#line 2820 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1237:
#line 2824 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1238:
#line 2825 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1239:
#line 2826 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1240:
#line 2829 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1241:
#line 2830 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1242:
#line 2834 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1244:
#line 2836 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1247:
#line 2841 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1248:
#line 2842 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1249:
#line 2843 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1250:
#line 2846 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1251:
#line 2847 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1252:
#line 2848 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1253:
#line 2851 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1254:
#line 2853 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1255:
#line 2858 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1256:
#line 2861 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1257:
#line 2868 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1258:
#line 2870 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1259:
#line 2872 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1260:
#line 2877 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1262:
#line 2881 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1263:
#line 2882 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1264:
#line 2883 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1265:
#line 2885 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1266:
#line 2887 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1267:
#line 2892 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 10903 "frame/parser.C"
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


#line 2896 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

