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
#define YYFINAL  357
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5471

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  358
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  218
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1269
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2793

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
       0,     0,     3,     6,     9,    13,    17,    21,    24,    26,
      28,    31,    35,    38,    41,    44,    47,    50,    53,    56,
      59,    62,    65,    68,    70,    73,    76,    80,    83,    86,
      89,    92,    96,    99,   103,   106,   109,   112,   115,   118,
     121,   123,   127,   130,   133,   136,   138,   141,   144,   147,
     149,   152,   154,   157,   160,   163,   166,   168,   170,   172,
     174,   177,   180,   183,   186,   189,   192,   195,   198,   201,
     204,   206,   208,   210,   212,   214,   216,   218,   220,   222,
     223,   226,   229,   231,   233,   234,   236,   238,   240,   242,
     244,   246,   248,   251,   254,   257,   260,   262,   264,   266,
     268,   270,   272,   274,   276,   278,   280,   282,   284,   286,
     288,   290,   292,   294,   296,   298,   300,   302,   304,   306,
     308,   310,   312,   314,   316,   318,   320,   322,   324,   326,
     328,   330,   331,   333,   335,   337,   339,   341,   342,   344,
     346,   348,   350,   352,   354,   356,   358,   360,   362,   364,
     366,   368,   370,   372,   374,   376,   377,   379,   381,   383,
     385,   387,   389,   391,   392,   394,   396,   397,   399,   401,
     403,   404,   406,   408,   409,   411,   413,   414,   416,   418,
     419,   421,   423,   425,   427,   429,   431,   433,   434,   436,
     438,   440,   442,   444,   446,   448,   449,   451,   453,   454,
     456,   458,   460,   462,   464,   467,   470,   473,   476,   479,
     482,   485,   488,   490,   493,   495,   498,   500,   503,   506,
     513,   516,   521,   524,   527,   530,   534,   537,   540,   542,
     545,   547,   550,   555,   561,   564,   568,   574,   581,   583,
     585,   587,   595,   607,   616,   629,   631,   634,   637,   639,
     641,   644,   647,   650,   653,   657,   661,   664,   667,   669,
     671,   673,   675,   677,   679,   681,   684,   687,   690,   692,
     696,   699,   702,   705,   712,   723,   725,   728,   730,   737,
     748,   750,   753,   756,   759,   762,   765,   768,   782,   796,
     809,   822,   824,   825,   827,   829,   834,   841,   843,   845,
     847,   849,   851,   853,   855,   857,   859,   864,   868,   873,
     874,   881,   890,   893,   897,   901,   905,   906,   911,   916,
     921,   926,   930,   934,   936,   940,   946,   951,   956,   960,
     963,   964,   966,   968,   972,   975,   978,   981,   984,   987,
     990,   993,   996,   999,  1002,  1005,  1008,  1011,  1014,  1016,
    1019,  1022,  1027,  1037,  1040,  1043,  1046,  1048,  1052,  1055,
    1058,  1060,  1063,  1072,  1075,  1077,  1080,  1082,  1085,  1087,
    1092,  1102,  1105,  1107,  1109,  1111,  1113,  1116,  1118,  1120,
    1123,  1125,  1126,  1129,  1132,  1134,  1135,  1138,  1141,  1143,
    1145,  1148,  1151,  1154,  1156,  1158,  1160,  1162,  1164,  1166,
    1167,  1169,  1172,  1174,  1179,  1185,  1186,  1189,  1191,  1197,
    1200,  1203,  1205,  1207,  1209,  1212,  1214,  1217,  1219,  1221,
    1222,  1224,  1226,  1227,  1229,  1235,  1242,  1246,  1253,  1257,
    1259,  1263,  1265,  1267,  1269,  1273,  1280,  1288,  1294,  1296,
    1298,  1303,  1309,  1311,  1315,  1316,  1318,  1321,  1323,  1328,
    1330,  1333,  1335,  1338,  1342,  1345,  1347,  1350,  1352,  1357,
    1360,  1362,  1364,  1368,  1370,  1373,  1377,  1380,  1381,  1383,
    1385,  1390,  1393,  1394,  1396,  1400,  1405,  1410,  1411,  1413,
    1415,  1417,  1419,  1421,  1423,  1425,  1427,  1429,  1431,  1433,
    1435,  1437,  1439,  1441,  1444,  1446,  1449,  1451,  1454,  1457,
    1460,  1463,  1465,  1467,  1469,  1470,  1472,  1473,  1475,  1476,
    1478,  1479,  1481,  1482,  1485,  1488,  1489,  1491,  1494,  1496,
    1503,  1509,  1511,  1513,  1515,  1518,  1521,  1524,  1526,  1528,
    1530,  1532,  1535,  1537,  1539,  1541,  1544,  1546,  1548,  1550,
    1553,  1556,  1559,  1560,  1562,  1563,  1565,  1567,  1569,  1571,
    1573,  1575,  1577,  1579,  1582,  1585,  1588,  1590,  1593,  1597,
    1599,  1602,  1605,  1610,  1617,  1619,  1630,  1632,  1635,  1639,
    1643,  1646,  1649,  1652,  1655,  1658,  1661,  1664,  1669,  1674,
    1679,  1683,  1687,  1693,  1698,  1703,  1708,  1712,  1716,  1720,
    1724,  1727,  1730,  1735,  1739,  1743,  1747,  1751,  1756,  1761,
    1766,  1771,  1777,  1782,  1789,  1797,  1802,  1807,  1813,  1816,
    1820,  1824,  1828,  1831,  1835,  1839,  1843,  1847,  1852,  1856,
    1862,  1869,  1873,  1877,  1882,  1886,  1890,  1894,  1898,  1902,
    1908,  1912,  1916,  1921,  1925,  1928,  1931,  1933,  1937,  1942,
    1947,  1952,  1957,  1962,  1969,  1974,  1979,  1985,  1990,  1995,
    2000,  2005,  2011,  2016,  2023,  2031,  2036,  2041,  2047,  2053,
    2059,  2065,  2071,  2077,  2085,  2091,  2097,  2104,  2109,  2114,
    2119,  2124,  2129,  2136,  2141,  2146,  2152,  2158,  2164,  2170,
    2176,  2183,  2189,  2197,  2206,  2212,  2218,  2225,  2229,  2233,
    2237,  2241,  2246,  2250,  2256,  2263,  2267,  2271,  2276,  2280,
    2284,  2288,  2292,  2296,  2302,  2306,  2310,  2315,  2320,  2325,
    2329,  2335,  2340,  2345,  2348,  2352,  2359,  2366,  2368,  2370,
    2372,  2375,  2378,  2381,  2385,  2389,  2392,  2405,  2408,  2411,
    2413,  2417,  2422,  2425,  2426,  2430,  2432,  2434,  2437,  2440,
    2443,  2446,  2449,  2454,  2459,  2464,  2468,  2473,  2479,  2488,
    2495,  2500,  2510,  2517,  2525,  2536,  2548,  2561,  2571,  2577,
    2582,  2589,  2593,  2599,  2605,  2612,  2618,  2623,  2633,  2644,
    2656,  2666,  2673,  2680,  2687,  2694,  2701,  2708,  2715,  2722,
    2729,  2737,  2745,  2748,  2753,  2758,  2763,  2768,  2774,  2779,
    2784,  2790,  2796,  2800,  2805,  2810,  2815,  2820,  2828,  2838,
    2845,  2856,  2868,  2881,  2891,  2895,  2898,  2902,  2908,  2916,
    2921,  2925,  2929,  2936,  2944,  2952,  2957,  2962,  2967,  2977,
    2982,  2986,  2991,  2999,  3007,  3010,  3014,  3018,  3022,  3027,
    3030,  3033,  3038,  3049,  3053,  3055,  3059,  3062,  3065,  3068,
    3071,  3075,  3081,  3086,  3092,  3095,  3103,  3107,  3110,  3113,
    3117,  3120,  3123,  3126,  3130,  3133,  3137,  3142,  3146,  3150,
    3157,  3162,  3165,  3169,  3172,  3175,  3180,  3184,  3188,  3191,
    3195,  3197,  3200,  3202,  3205,  3208,  3211,  3213,  3215,  3217,
    3219,  3222,  3224,  3227,  3230,  3232,  3235,  3238,  3240,  3243,
    3245,  3247,  3249,  3251,  3253,  3255,  3257,  3259,  3260,  3262,
    3265,  3268,  3271,  3275,  3281,  3289,  3297,  3304,  3311,  3318,
    3325,  3331,  3338,  3345,  3352,  3359,  3366,  3373,  3380,  3392,
    3400,  3408,  3416,  3426,  3436,  3447,  3460,  3473,  3476,  3479,
    3483,  3488,  3493,  3498,  3501,  3506,  3511,  3513,  3515,  3517,
    3519,  3521,  3523,  3525,  3527,  3530,  3532,  3534,  3536,  3540,
    3544,  3553,  3560,  3571,  3579,  3587,  3593,  3596,  3599,  3603,
    3608,  3614,  3618,  3624,  3630,  3634,  3639,  3645,  3651,  3657,
    3661,  3667,  3670,  3674,  3678,  3684,  3688,  3692,  3696,  3701,
    3707,  3713,  3717,  3723,  3729,  3733,  3738,  3744,  3750,  3753,
    3756,  3760,  3766,  3773,  3780,  3784,  3788,  3792,  3799,  3805,
    3811,  3814,  3818,  3822,  3828,  3835,  3839,  3842,  3845,  3849,
    3852,  3856,  3859,  3863,  3869,  3876,  3879,  3882,  3885,  3887,
    3892,  3897,  3899,  3902,  3905,  3908,  3911,  3914,  3917,  3920,
    3924,  3927,  3931,  3934,  3938,  3940,  3942,  3944,  3946,  3948,
    3949,  3952,  3953,  3956,  3957,  3959,  3960,  3961,  3963,  3965,
    3967,  3969,  3971,  3979,  3988,  3991,  3996,  3999,  4004,  4011,
    4014,  4016,  4018,  4022,  4026,  4028,  4033,  4036,  4038,  4042,
    4046,  4051,  4055,  4059,  4063,  4065,  4067,  4069,  4071,  4073,
    4075,  4077,  4079,  4081,  4083,  4085,  4087,  4089,  4091,  4094,
    4095,  4096,  4099,  4101,  4105,  4107,  4111,  4113,  4116,  4119,
    4121,  4125,  4126,  4127,  4130,  4133,  4135,  4139,  4145,  4147,
    4150,  4153,  4157,  4160,  4163,  4166,  4169,  4171,  4173,  4175,
    4177,  4182,  4185,  4189,  4193,  4196,  4200,  4203,  4206,  4209,
    4213,  4217,  4221,  4224,  4228,  4230,  4234,  4238,  4240,  4243,
    4246,  4249,  4252,  4262,  4269,  4271,  4273,  4275,  4277,  4280,
    4283,  4287,  4291,  4293,  4296,  4300,  4304,  4306,  4309,  4311,
    4313,  4315,  4317,  4319,  4322,  4325,  4330,  4332,  4335,  4338,
    4341,  4345,  4347,  4349,  4351,  4354,  4357,  4360,  4363,  4366,
    4370,  4374,  4378,  4382,  4386,  4390,  4394,  4396,  4399,  4402,
    4405,  4409,  4412,  4416,  4420,  4423,  4426,  4429,  4432,  4435,
    4438,  4441,  4444,  4447,  4450,  4453,  4456,  4459,  4462,  4466,
    4470,  4474,  4477,  4480,  4483,  4486,  4489,  4492,  4495,  4498,
    4501,  4504,  4507,  4510,  4514,  4518,  4522,  4527,  4534,  4537,
    4539,  4541,  4543,  4545,  4547,  4548,  4554,  4556,  4563,  4567,
    4569,  4572,  4575,  4578,  4582,  4586,  4589,  4592,  4595,  4598,
    4601,  4604,  4608,  4611,  4614,  4618,  4620,  4624,  4629,  4631,
    4634,  4640,  4647,  4654,  4657,  4659,  4662,  4665,  4671,  4678
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     359,     0,    -1,    98,   361,    -1,    44,   393,    -1,    41,
      67,     5,    -1,    41,    67,   143,    -1,    41,    67,   362,
      -1,    47,   398,    -1,    60,    -1,    65,    -1,    66,   400,
      -1,    68,   289,     5,    -1,    69,   405,    -1,    70,   407,
      -1,    78,   408,    -1,    85,   417,    -1,    87,   419,    -1,
      88,   420,    -1,    97,   362,    -1,   127,   422,    -1,   140,
     423,    -1,   144,   465,    -1,   147,   468,    -1,   151,    -1,
     152,   362,    -1,   158,   474,    -1,   164,    16,     4,    -1,
     178,   477,    -1,   181,   495,    -1,   182,   496,    -1,   183,
     497,    -1,   186,   513,   498,    -1,   187,   532,    -1,   200,
      67,     5,    -1,   217,   533,    -1,   218,   534,    -1,   219,
     537,    -1,   240,    89,    -1,   233,   539,    -1,   231,   538,
      -1,   248,    -1,   244,   513,   541,    -1,   250,   546,    -1,
     252,   547,    -1,   257,   549,    -1,   271,    -1,   277,   564,
      -1,   292,     4,    -1,   293,   388,    -1,   304,    -1,   306,
     566,    -1,   312,    -1,   315,   568,    -1,   316,   569,    -1,
     346,   573,    -1,   353,   574,    -1,     3,    -1,     4,    -1,
     214,    -1,   213,    -1,   195,   362,    -1,   220,   362,    -1,
     222,   362,    -1,   316,   362,    -1,    44,   362,    -1,    47,
     362,    -1,    77,   362,    -1,    85,   362,    -1,   145,   362,
      -1,   250,   362,    -1,     4,    -1,   349,    -1,   354,    -1,
     214,    -1,   300,    -1,   205,    -1,   355,    -1,   213,    -1,
     121,    -1,    -1,   251,    38,    -1,   136,    38,    -1,   251,
      -1,   136,    -1,    -1,   365,    -1,   360,    -1,     7,    -1,
       8,    -1,     9,    -1,    10,    -1,    11,    -1,   366,   366,
      -1,   367,   368,    -1,   368,   368,    -1,   360,   360,    -1,
     159,    -1,   224,    -1,   103,    -1,    19,    -1,   371,    -1,
     316,    -1,   317,    -1,   318,    -1,   319,    -1,   320,    -1,
     321,    -1,   322,    -1,   323,    -1,   324,    -1,   325,    -1,
     326,    -1,   327,    -1,   328,    -1,   329,    -1,   330,    -1,
     331,    -1,   332,    -1,   333,    -1,   334,    -1,   335,    -1,
     336,    -1,   337,    -1,   338,    -1,   339,    -1,   340,    -1,
     341,    -1,   342,    -1,   343,    -1,    57,    -1,   219,    -1,
      -1,   350,    -1,   208,    -1,   200,    -1,   207,    -1,   243,
      -1,    -1,   280,    -1,   262,    -1,    92,    -1,   172,    -1,
     176,    -1,   180,    -1,   232,    -1,   281,    -1,   282,    -1,
      28,    -1,   273,    -1,   153,    -1,    30,    -1,   259,    -1,
     254,    -1,    96,    -1,   165,    -1,    -1,   129,    -1,    35,
      -1,   130,    -1,   166,    -1,   156,    -1,   138,    -1,   108,
      -1,    -1,    99,    -1,   266,    -1,    -1,    99,    -1,    24,
      -1,    25,    -1,    -1,   270,    -1,   167,    -1,    -1,    17,
      -1,   161,    -1,    -1,   159,    -1,   187,    -1,    -1,    63,
      -1,    49,    -1,   104,    -1,    86,    -1,   356,    -1,    27,
      -1,    52,    -1,    -1,     4,    -1,    83,    -1,   154,    -1,
     226,    -1,   227,    -1,   241,    -1,   284,    -1,    -1,    32,
      -1,   286,    -1,    -1,   201,    -1,    42,    -1,    43,    -1,
     173,    -1,   174,    -1,   310,   392,    -1,    48,   389,    -1,
      75,   390,    -1,   152,   391,    -1,   189,   544,    -1,    37,
     545,    -1,   258,   360,    -1,   294,   360,    -1,   362,    -1,
      67,     5,    -1,   362,    -1,    67,     5,    -1,   362,    -1,
      67,     5,    -1,   360,   360,    -1,   228,   360,   360,   360,
     360,   360,    -1,    12,   394,    -1,    72,     5,     5,     5,
      -1,   102,     4,    -1,   120,   395,    -1,   137,   396,    -1,
      54,   274,     4,    -1,   297,   397,    -1,   124,     5,    -1,
      60,    -1,   360,   360,    -1,   360,    -1,   360,   360,    -1,
     360,    12,   360,   360,    -1,   360,   360,    12,   360,   360,
      -1,   297,   360,    -1,   297,   360,   360,    -1,   297,   360,
      12,   360,   360,    -1,   297,   360,   360,    12,   360,   360,
      -1,    32,    -1,   286,    -1,   125,    -1,   360,   360,    12,
      60,     5,     5,     5,    -1,   360,   360,     4,   360,   360,
      12,    60,     5,     5,     5,     5,    -1,   360,   360,    12,
     360,   360,     5,     5,     5,    -1,   360,   360,     4,   360,
     360,    12,   360,   360,     5,     5,     5,     5,    -1,   360,
      -1,   360,   360,    -1,   297,   399,    -1,   125,    -1,   360,
      -1,   360,   360,    -1,   261,   401,    -1,   196,   402,    -1,
     190,   403,    -1,   307,   360,   360,    -1,   307,   200,   200,
      -1,   352,   404,    -1,   235,   362,    -1,   141,    -1,   179,
      -1,   360,    -1,   190,    -1,   352,    -1,   351,    -1,   307,
      -1,     4,   376,    -1,   196,   376,    -1,   254,     4,    -1,
     247,    -1,   360,     4,     4,    -1,    79,   360,    -1,   254,
       4,    -1,   175,     4,    -1,     4,   360,   360,     4,     6,
       4,    -1,   250,   360,   360,   360,   360,   360,   360,     4,
       6,     4,    -1,    40,    -1,   197,   406,    -1,   113,    -1,
       4,   360,   360,     4,     6,     4,    -1,   250,   360,   360,
     360,   360,   360,   360,     4,     6,     4,    -1,   375,    -1,
     180,   360,    -1,    84,   409,    -1,   101,   410,    -1,   178,
     411,    -1,   221,   415,    -1,   257,   416,    -1,     5,     4,
       4,   414,     4,     4,   375,   360,   412,   413,   360,   360,
       5,    -1,     5,     4,     4,   414,     4,     4,   375,   360,
     360,   413,   360,   360,     5,    -1,     5,     4,     4,   414,
       4,     4,   375,   360,   412,   360,   360,     5,    -1,     5,
       4,     4,   414,     4,     4,   375,   360,   360,   360,   360,
       5,    -1,   230,    -1,    -1,    31,    -1,     5,    -1,     5,
       5,     4,   362,    -1,     5,     4,   362,     5,   370,   377,
      -1,   190,    -1,   352,    -1,   351,    -1,   307,    -1,   141,
      -1,   179,    -1,   277,    -1,    47,    -1,     5,    -1,     5,
       5,     4,   362,    -1,     5,   370,   377,    -1,    31,     5,
     370,   377,    -1,    -1,   360,   360,   360,   360,   370,   377,
      -1,    60,   369,   370,   377,   360,   360,   370,   379,    -1,
     293,   418,    -1,    40,   360,   360,    -1,   197,   360,   360,
      -1,   113,   360,   360,    -1,    -1,   360,   360,   370,   377,
      -1,    40,   360,   360,     4,    -1,   197,   360,   360,     4,
      -1,   113,   360,   360,     4,    -1,   372,   360,   360,    -1,
     370,   377,   369,    -1,   362,    -1,   315,   360,   360,    -1,
      40,   197,   372,   360,   360,    -1,   197,   372,   360,   360,
      -1,    40,   197,   370,   369,    -1,   197,   370,   369,    -1,
      33,     4,    -1,    -1,    32,    -1,   286,    -1,   147,   119,
       5,    -1,    41,    67,    -1,    44,   424,    -1,    47,   426,
      -1,    66,   427,    -1,    69,   431,    -1,    68,   430,    -1,
      70,   433,    -1,    78,   435,    -1,    80,   438,    -1,    85,
     439,    -1,    87,   440,    -1,    89,   442,    -1,    88,   441,
      -1,    95,   443,    -1,    97,    -1,   126,   447,    -1,   144,
     453,    -1,   154,     5,     5,     4,    -1,   155,    90,     5,
       5,   360,   360,   372,     4,   421,    -1,   158,   445,    -1,
     162,   444,    -1,   164,    16,    -1,   190,    -1,   186,   513,
     507,    -1,   187,   454,    -1,   200,    67,    -1,   217,    -1,
     218,   455,    -1,   225,   288,   372,   360,   360,     4,     4,
       5,    -1,   250,   456,    -1,   252,    -1,   277,   457,    -1,
     292,    -1,   293,   458,    -1,   301,    -1,   308,   372,   360,
     360,    -1,   314,    90,     5,     5,   360,   360,   372,     4,
     421,    -1,   316,   463,    -1,   353,    -1,   102,    -1,   120,
      -1,   137,    -1,    54,   274,    -1,    89,    -1,   124,    -1,
      72,   425,    -1,   177,    -1,    -1,   190,     5,    -1,   105,
       5,    -1,   120,    -1,    -1,   412,   413,    -1,   360,   413,
      -1,   261,    -1,   196,    -1,   190,   428,    -1,   307,   171,
      -1,   352,   429,    -1,   235,    -1,   196,    -1,   254,    -1,
      79,    -1,   254,    -1,   175,    -1,    -1,   289,    -1,   171,
     432,    -1,     4,    -1,     4,   372,   360,   360,    -1,     4,
     360,   360,   375,   360,    -1,    -1,   171,   434,    -1,   180,
      -1,     4,   360,   360,   375,   360,    -1,   370,   377,    -1,
      66,   436,    -1,    67,    -1,    93,    -1,   171,    -1,   211,
     171,    -1,   189,    -1,    70,   437,    -1,   277,    -1,   345,
      -1,    -1,   196,    -1,   261,    -1,    -1,   180,    -1,   360,
     360,   370,   377,   378,    -1,   372,   360,   360,   370,   377,
     378,    -1,   370,   377,   378,    -1,    60,   370,   377,   378,
     370,   379,    -1,   293,   370,   377,    -1,   372,    -1,   370,
     377,   378,    -1,   285,    -1,    33,    -1,   372,    -1,   370,
     377,   378,    -1,   370,   377,   369,   360,   360,     5,    -1,
       4,   370,   377,   369,   360,   360,     5,    -1,   372,   360,
     360,     4,     4,    -1,     5,    -1,    66,    -1,   372,   360,
     360,     5,    -1,     6,     4,     4,     4,     4,    -1,    89,
      -1,   122,   199,   446,    -1,    -1,     4,    -1,   360,   360,
      -1,   202,    -1,    60,   370,   377,   378,    -1,    82,    -1,
     102,   450,    -1,    45,    -1,   119,   448,    -1,   122,   199,
     451,    -1,   149,   449,    -1,   150,    -1,   212,   199,    -1,
     274,    -1,   274,   370,   377,   379,    -1,   275,   452,    -1,
     345,    -1,     4,    -1,   372,   360,   360,    -1,     4,    -1,
     168,     5,    -1,     4,   168,     5,    -1,   316,     4,    -1,
      -1,     4,    -1,   363,    -1,   363,   372,   360,   360,    -1,
     363,     4,    -1,    -1,     4,    -1,   134,   159,   370,    -1,
     134,   159,     4,   370,    -1,   297,   159,   360,   370,    -1,
      -1,   216,    -1,   309,    -1,    67,    -1,   185,    -1,   243,
      -1,   287,    -1,   296,    -1,    82,    -1,    46,    -1,   235,
      -1,    62,    -1,   287,    -1,   310,    -1,   137,    -1,   242,
      -1,   242,   191,    -1,   272,    -1,   272,   191,    -1,    21,
      -1,   310,   462,    -1,    48,   459,    -1,    75,   460,    -1,
     152,   461,    -1,   189,    -1,    37,    -1,   258,    -1,    -1,
      67,    -1,    -1,    67,    -1,    -1,    67,    -1,    -1,   228,
      -1,    -1,    16,   464,    -1,   199,   371,    -1,    -1,   229,
      -1,    84,   466,    -1,   101,    -1,   370,   377,   378,   467,
       5,     5,    -1,   370,   377,   378,   467,     5,    -1,    20,
      -1,   238,    -1,    19,    -1,    41,    67,    -1,    44,   469,
      -1,    78,   470,    -1,    85,    -1,    96,    -1,    97,    -1,
     103,    -1,   126,   471,    -1,   144,    -1,   158,    -1,   165,
      -1,   186,   472,    -1,   224,    -1,   159,    -1,   277,    -1,
     287,   370,    -1,   316,   473,    -1,    73,     5,    -1,    -1,
      31,    -1,    -1,    44,    -1,    88,    -1,   195,    -1,   152,
      -1,   264,    -1,   221,    -1,   302,    -1,   370,    -1,    59,
     370,    -1,   117,   370,    -1,   176,   370,    -1,    18,    -1,
     293,   370,    -1,   203,     4,     4,    -1,   118,    -1,   188,
       5,    -1,    89,   476,    -1,   265,   122,   199,   475,    -1,
     265,     6,     4,     4,     4,     4,    -1,   306,    -1,   316,
     360,   360,   360,   360,   360,   360,   360,   360,     4,    -1,
       5,    -1,     5,     4,    -1,     4,     4,    57,    -1,     4,
       4,   370,    -1,   196,   362,    -1,    26,   478,    -1,   114,
     480,    -1,   126,   481,    -1,   161,   494,    -1,   210,   492,
      -1,   223,   493,    -1,     5,    14,     5,   382,    -1,     5,
      15,     5,   382,    -1,     5,    62,     5,   382,    -1,     5,
     193,   382,    -1,     5,   194,   382,    -1,     5,   268,   380,
       4,   382,    -1,     5,   278,     4,   382,    -1,     5,   279,
       4,   382,    -1,     5,   309,     5,   382,    -1,   250,    88,
     479,    -1,     5,    14,     5,    -1,     5,    15,     5,    -1,
       5,    62,     5,    -1,     5,   193,    -1,     5,   194,    -1,
       5,   268,   380,     4,    -1,     5,   278,     4,    -1,     5,
     279,     4,    -1,     5,   309,     5,    -1,     5,     5,   276,
      -1,     5,    14,     5,   382,    -1,     5,    15,     5,   382,
      -1,     5,    62,     5,   382,    -1,     5,   193,   381,   382,
      -1,     5,     5,   276,   381,   382,    -1,     5,   194,   381,
     382,    -1,     5,   268,   380,     4,   381,   382,    -1,     5,
     283,   380,     4,     4,   381,   382,    -1,     5,   278,     4,
     382,    -1,     5,   279,     4,   382,    -1,     5,   309,     5,
     381,   382,    -1,   275,   482,    -1,   119,    88,   483,    -1,
     250,   159,   491,    -1,   250,    88,   490,    -1,   195,   484,
      -1,     5,    14,     5,    -1,     5,    15,     5,    -1,     5,
      62,     5,    -1,     5,   193,   381,    -1,     5,     5,   276,
     381,    -1,     5,   194,   381,    -1,     5,   268,   380,     4,
     381,    -1,     5,   283,   380,     4,     4,   381,    -1,     5,
     278,     4,    -1,     5,   279,     4,    -1,     5,   309,     5,
     381,    -1,     5,    14,     5,    -1,     5,    15,     5,    -1,
       5,    62,     5,    -1,     5,   193,   381,    -1,     5,   194,
     381,    -1,     5,   268,   380,     4,   381,    -1,     5,   278,
       4,    -1,     5,   279,     4,    -1,     5,   309,     5,   381,
      -1,   159,   164,   485,    -1,   164,   486,    -1,   159,   487,
      -1,   489,    -1,   159,   344,   488,    -1,     5,    14,     5,
     382,    -1,     5,    15,     5,   382,    -1,     5,    62,     5,
     382,    -1,     5,   193,   381,   382,    -1,     5,   194,   381,
     382,    -1,     5,   268,   380,     4,   381,   382,    -1,     5,
     278,     4,   382,    -1,     5,   279,     4,   382,    -1,     5,
     309,     5,   381,   382,    -1,     5,    14,     5,   382,    -1,
       5,    15,     5,   382,    -1,     5,    62,     5,   382,    -1,
       5,   193,   381,   382,    -1,     5,     5,   276,   381,   382,
      -1,     5,   194,   381,   382,    -1,     5,   268,   380,     4,
     381,   382,    -1,     5,   283,   380,     4,     4,   381,   382,
      -1,     5,   278,     4,   382,    -1,     5,   279,     4,   382,
      -1,     5,   309,     5,   381,   382,    -1,   371,     5,    14,
       5,   382,    -1,   371,     5,    15,     5,   382,    -1,   371,
       5,    62,     5,   382,    -1,   371,     5,   193,   381,   382,
      -1,   371,     5,   194,   381,   382,    -1,   371,     5,   268,
     380,     4,   381,   382,    -1,   371,     5,   278,     4,   382,
      -1,   371,     5,   279,     4,   382,    -1,   371,     5,   309,
       5,   381,   382,    -1,     5,    14,     5,   382,    -1,     5,
      15,     5,   382,    -1,     5,    62,     5,   382,    -1,     5,
     193,   381,   382,    -1,     5,   194,   381,   382,    -1,     5,
     268,   380,     4,   381,   382,    -1,     5,   278,     4,   382,
      -1,     5,   279,     4,   382,    -1,     5,   309,     5,   381,
     382,    -1,   371,     5,    14,     5,   382,    -1,   371,     5,
      15,     5,   382,    -1,   371,     5,    62,     5,   382,    -1,
     371,     5,   193,   381,   382,    -1,   371,     5,     5,   276,
     381,   382,    -1,   371,     5,   194,   381,   382,    -1,   371,
       5,   268,   380,     4,   381,   382,    -1,   371,     5,   283,
     380,     4,     4,   381,   382,    -1,   371,     5,   278,     4,
     382,    -1,   371,     5,   279,     4,   382,    -1,   371,     5,
     309,     5,   381,   382,    -1,     5,    14,     5,    -1,     5,
      15,     5,    -1,     5,    62,     5,    -1,     5,   193,   381,
      -1,     5,     5,   276,   381,    -1,     5,   194,   381,    -1,
       5,   268,   380,     4,   381,    -1,     5,   283,   380,     4,
       4,   381,    -1,     5,   278,     4,    -1,     5,   279,     4,
      -1,     5,   309,     5,   381,    -1,     5,    14,     5,    -1,
       5,    15,     5,    -1,     5,    62,     5,    -1,     5,   193,
     381,    -1,     5,   194,   381,    -1,     5,   268,   380,     4,
     381,    -1,     5,   278,     4,    -1,     5,   279,     4,    -1,
       5,   309,     5,   381,    -1,     5,    14,     5,   382,    -1,
       5,    62,     5,   382,    -1,     5,   193,   382,    -1,     5,
     268,   380,     4,   382,    -1,     5,   278,     4,   382,    -1,
       5,   309,     5,   382,    -1,     5,     5,    -1,   275,     5,
       5,    -1,    95,     4,     4,     4,     4,     4,    -1,   190,
       4,     4,     4,     4,     4,    -1,   113,    -1,   234,    -1,
     362,    -1,   142,   362,    -1,    89,   362,    -1,    67,     5,
      -1,     5,     4,     4,    -1,   306,   360,   360,    -1,   353,
     360,    -1,     5,     5,   371,   377,     5,     5,   371,   377,
     360,   371,   379,     5,    -1,    61,   501,    -1,    67,     5,
      -1,    81,    -1,    74,   506,     5,    -1,    74,   506,   309,
       5,    -1,    76,   101,    -1,    -1,    84,   499,   502,    -1,
      90,    -1,   101,    -1,   101,    17,    -1,   107,   505,    -1,
     116,     4,    -1,   131,     5,    -1,   152,    17,    -1,   152,
     215,   360,   360,    -1,   152,   298,   360,   360,    -1,     4,
      20,   385,   362,    -1,     4,    21,   365,    -1,     4,    21,
     365,   372,    -1,     4,    21,   365,   370,   377,    -1,     4,
      22,   242,   360,   360,     4,   370,   379,    -1,     4,    22,
     242,     5,   370,   379,    -1,     4,    49,   123,   362,    -1,
       4,    50,   242,   360,   360,   360,     4,   370,   379,    -1,
       4,    50,   242,     5,   370,   379,    -1,     4,    49,   242,
     360,   360,   370,   379,    -1,     4,    53,   107,   365,   365,
       4,   360,   360,   360,     4,    -1,     4,    53,   107,   365,
     365,     4,   360,   360,   360,     4,   372,    -1,     4,    53,
     107,   365,   365,     4,   360,   360,   360,     4,   370,   377,
      -1,     4,    53,   107,     5,     5,   370,   377,   370,   379,
      -1,     4,    56,   500,     5,     5,    -1,     4,    63,   123,
     362,    -1,     4,    63,   242,   360,   370,   379,    -1,     4,
      67,     5,    -1,     4,    75,    27,   362,   362,    -1,     4,
      75,   169,     5,     5,    -1,     4,    75,   242,   360,   370,
     379,    -1,     4,    75,   287,   370,   377,    -1,     4,    76,
     141,   362,    -1,     4,    83,   107,   365,   365,     4,   360,
     360,     4,    -1,     4,    83,   107,   365,   365,     4,   360,
     360,     4,   372,    -1,     4,    83,   107,   365,   365,     4,
     360,   360,     4,   370,   377,    -1,     4,    83,   107,     5,
       5,   370,   377,   370,   379,    -1,     4,    84,    22,   242,
     360,   360,    -1,     4,    84,    50,   242,   360,   360,    -1,
       4,    84,    53,    21,   360,   360,    -1,     4,    84,    53,
     242,   360,   360,    -1,     4,    84,   112,   242,   360,   360,
      -1,     4,    84,   115,    21,   360,   360,    -1,     4,    84,
     115,   242,   360,   360,    -1,     4,    84,    83,    21,   360,
     360,    -1,     4,    84,    83,   242,   360,   360,    -1,     4,
      84,   230,   313,     4,   360,   360,    -1,     4,    84,   263,
     313,     4,   360,   360,    -1,     4,   101,    -1,     4,   101,
      22,     4,    -1,     4,   101,    50,     4,    -1,     4,   101,
      53,     4,    -1,     4,   101,   112,     4,    -1,     4,   101,
      56,   500,     5,    -1,     4,   101,   115,     4,    -1,     4,
     101,    83,     4,    -1,     4,   101,   230,   313,     4,    -1,
       4,   101,   263,   313,     4,    -1,     4,   101,   289,    -1,
       4,   101,   289,     5,    -1,     4,   101,   289,     4,    -1,
       4,   107,    40,     4,    -1,     4,   111,   123,   362,    -1,
       4,   111,   242,   360,   360,   370,   379,    -1,     4,   112,
     242,   360,   360,   360,     4,   370,   379,    -1,     4,   112,
     242,     5,   370,   379,    -1,     4,   115,   107,   365,   365,
       4,   360,   360,   360,     4,    -1,     4,   115,   107,   365,
     365,     4,   360,   360,   360,     4,   372,    -1,     4,   115,
     107,   365,   365,     4,   360,   360,   360,     4,   370,   377,
      -1,     4,   115,   107,     5,     5,   370,   377,   370,   379,
      -1,     4,   131,     5,    -1,     4,   152,    -1,     4,   152,
     215,    -1,     4,   175,    27,   362,   362,    -1,     4,   175,
     228,   370,   377,   369,   369,    -1,     4,   198,   360,   360,
      -1,     4,   198,   135,    -1,     4,   198,    36,    -1,     4,
     198,   297,   370,   377,   369,    -1,     4,   230,   248,   360,
     360,   370,   379,    -1,     4,   263,   248,   360,   360,   370,
     379,    -1,     4,   228,   267,   383,    -1,     4,   228,   274,
       4,    -1,     4,   230,   123,   362,    -1,     4,   236,   370,
     377,   369,   369,   360,   370,   379,    -1,     4,   237,   519,
     362,    -1,     4,   252,    40,    -1,     4,   253,   132,     5,
      -1,     4,   253,   228,   370,   377,   369,   369,    -1,     4,
     253,   287,   370,   377,   370,   379,    -1,     4,   264,    -1,
       4,   264,   215,    -1,     4,   289,     5,    -1,     4,   291,
       5,    -1,     4,   291,   252,   362,    -1,     4,   303,    -1,
       4,   305,    -1,     4,   311,    27,   362,    -1,     4,   311,
     228,   370,   377,   369,   370,   379,   360,   365,    -1,     4,
     345,     4,    -1,   167,    -1,   167,   360,   360,    -1,   177,
     514,    -1,   178,   515,    -1,   198,   516,    -1,   235,   362,
      -1,   237,   519,   362,    -1,   237,   519,   362,   360,   360,
      -1,   252,    40,   360,   360,    -1,   252,   197,   360,   360,
       4,    -1,   252,   113,    -1,   257,     5,   506,   370,   377,
     378,   362,    -1,   257,   290,     5,    -1,   264,   523,    -1,
     271,   524,    -1,     5,    67,     5,    -1,     5,    81,    -1,
       5,   101,    -1,     5,    90,    -1,     5,   131,     5,    -1,
       5,   152,    -1,     5,   152,   215,    -1,     5,   198,   360,
     360,    -1,     5,   198,   135,    -1,     5,   198,    36,    -1,
       5,   198,   297,   370,   377,   369,    -1,     5,   237,   519,
     362,    -1,     5,   264,    -1,     5,   264,   215,    -1,     5,
     303,    -1,     5,   305,    -1,   289,   107,     5,     5,    -1,
     289,   101,     5,    -1,   289,   101,    17,    -1,   289,     5,
      -1,   289,   306,     5,    -1,   221,    -1,   221,   370,    -1,
     302,    -1,   303,    17,    -1,   305,    17,    -1,   345,     4,
      -1,   264,    -1,   305,    -1,   152,    -1,   303,    -1,    40,
     198,    -1,   198,    -1,   113,   198,    -1,    40,   107,    -1,
     107,    -1,   113,   107,    -1,    40,   252,    -1,   252,    -1,
     113,   252,    -1,   101,    -1,   291,    -1,    67,    -1,   345,
      -1,   237,    -1,   131,    -1,   167,    -1,   306,    -1,    -1,
       4,    -1,    30,   362,    -1,   242,   360,    -1,   163,     4,
      -1,   216,     4,   360,    -1,    63,   360,   360,   360,   520,
      -1,   111,   360,   360,   360,   360,   364,   520,    -1,    49,
     360,   360,   360,   360,   364,   520,    -1,   230,   360,   360,
     360,   360,   520,    -1,   263,   360,   360,   360,   360,   520,
      -1,   175,   360,   360,   360,   360,   520,    -1,   311,   360,
     360,   360,   360,   520,    -1,   291,   360,   360,   364,   520,
      -1,    63,   228,   360,   360,   384,   520,    -1,    49,   228,
     360,   360,   384,   520,    -1,   104,   228,   360,   360,   384,
     520,    -1,    86,   228,   360,   360,   384,   520,    -1,   356,
     228,   360,   360,   384,   520,    -1,    27,   228,   360,   360,
     384,   520,    -1,    52,   228,   360,   360,   384,   520,    -1,
     253,   360,   360,   360,   360,   370,   377,   370,   379,     5,
     520,    -1,    75,   360,   360,   360,   370,   377,   520,    -1,
     236,   360,   360,   360,   360,   360,   520,    -1,    22,   360,
     360,   360,   360,     4,   520,    -1,   112,   360,   360,   360,
     360,   360,     4,   364,   520,    -1,    50,   360,   360,   360,
     360,   360,     4,   364,   520,    -1,    83,   360,   360,   365,
     365,     4,   360,   360,     4,   520,    -1,   115,   360,   360,
     365,   365,     4,   360,   360,   360,     4,   364,   520,    -1,
      53,   360,   360,   365,   365,     4,   360,   360,   360,     4,
     364,   520,    -1,    76,   520,    -1,   290,   503,    -1,     5,
     360,   360,    -1,   309,     5,   360,   360,    -1,   360,   360,
     309,     5,    -1,     5,   370,   377,   369,    -1,     4,     4,
      -1,    40,   360,   360,     4,    -1,   197,   360,   360,     4,
      -1,   113,    -1,   106,    -1,   347,    -1,    64,    -1,   256,
      -1,   255,    -1,   239,    -1,   348,    -1,    61,   508,    -1,
      67,    -1,   131,    -1,   116,    -1,   146,   360,   360,    -1,
     157,   360,   360,    -1,     4,    20,    83,     5,     5,     5,
     370,     4,    -1,     4,    20,   154,     5,     5,     4,    -1,
       4,    20,   226,     5,     5,     5,     5,   370,   377,   386,
      -1,     4,    20,   227,     5,     5,   370,   386,    -1,     4,
      20,   241,     5,     5,     5,   370,    -1,     4,    20,   284,
     370,   377,    -1,   157,    17,    -1,     4,    21,    -1,     4,
      21,   372,    -1,     4,    21,   370,   377,    -1,     4,    22,
     242,   370,   379,    -1,     4,    49,   123,    -1,     4,    50,
     242,   370,   379,    -1,     4,    49,   242,   370,   379,    -1,
       4,    53,    21,    -1,     4,    53,    21,   372,    -1,     4,
      53,    21,   370,   377,    -1,     4,    53,   242,   370,   379,
      -1,     4,    60,   370,   377,   378,    -1,     4,    63,   123,
      -1,     4,    63,   242,   370,   379,    -1,     4,    67,    -1,
       4,    75,    27,    -1,     4,    75,   169,    -1,     4,    75,
     242,   370,   379,    -1,     4,    75,   287,    -1,     4,    76,
     141,    -1,     4,    83,    21,    -1,     4,    83,    21,   372,
      -1,     4,    83,    21,   370,   377,    -1,     4,    83,   242,
     370,   379,    -1,     4,   111,   123,    -1,     4,   111,   242,
     370,   379,    -1,     4,   112,   242,   370,   379,    -1,     4,
     115,    21,    -1,     4,   115,    21,   372,    -1,     4,   115,
      21,   370,   377,    -1,     4,   115,   242,   370,   379,    -1,
       4,   131,    -1,     4,   152,    -1,     4,   175,    27,    -1,
       4,   175,   170,   370,   379,    -1,     4,   175,   228,   370,
     377,   378,    -1,     4,   184,   170,   360,   370,   379,    -1,
       4,   230,   123,    -1,     4,   228,   267,    -1,     4,   228,
     274,    -1,     4,   236,   228,   370,   377,   378,    -1,     4,
     236,   170,   370,   379,    -1,     4,   236,   295,   370,   379,
      -1,     4,   237,    -1,     4,   237,   519,    -1,     4,   253,
     132,    -1,     4,   253,   170,   370,   379,    -1,     4,   253,
     228,   370,   377,   378,    -1,     4,   253,   287,    -1,     4,
     264,    -1,     4,   289,    -1,     4,   289,     4,    -1,     4,
     291,    -1,     4,   291,   252,    -1,     4,   301,    -1,     4,
     311,    27,    -1,     4,   311,   170,   370,   379,    -1,     4,
     311,   228,   370,   377,   378,    -1,     4,   345,    -1,   152,
     509,    -1,   152,   211,    -1,   211,    -1,   230,   263,   360,
     360,    -1,   263,   263,   360,   360,    -1,   235,    -1,   237,
     519,    -1,   264,   510,    -1,   264,   211,    -1,   271,   511,
      -1,     5,    67,    -1,     5,   131,    -1,     5,   157,    -1,
       5,   237,   519,    -1,     5,   289,    -1,     5,   289,   211,
      -1,   289,    17,    -1,   289,   100,   199,    -1,   345,    -1,
      30,    -1,   242,    -1,   163,    -1,   216,    -1,    -1,   360,
     360,    -1,    -1,   360,   360,    -1,    -1,   291,    -1,    -1,
      -1,   229,    -1,   244,    -1,   307,    -1,    58,    -1,   133,
      -1,   506,   370,   377,   378,   362,   521,   527,    -1,   264,
     506,   370,   377,   378,   362,   521,   527,    -1,   506,     5,
      -1,   506,     5,   370,   377,    -1,   506,     4,    -1,   506,
       4,   370,   377,    -1,   126,     5,     5,   504,     4,     5,
      -1,   360,   360,    -1,   135,    -1,    36,    -1,    40,   360,
     360,    -1,   197,   360,   360,    -1,   113,    -1,   297,   370,
     377,   369,    -1,   517,   518,    -1,   518,    -1,   519,   357,
     362,    -1,    67,   357,     5,    -1,    94,   357,     4,     4,
      -1,   345,   357,     4,    -1,   131,   357,     5,    -1,   291,
     357,     5,    -1,   530,    -1,   531,    -1,   206,    -1,   264,
      -1,   152,    -1,    93,    -1,   128,    -1,   107,    -1,   198,
      -1,   252,    -1,   101,    -1,   160,    -1,   280,    -1,   512,
      -1,   512,   517,    -1,    -1,    -1,   522,   525,    -1,    17,
      -1,   215,   360,   360,    -1,   298,    -1,   298,   360,   360,
      -1,   362,    -1,   291,   362,    -1,   525,   526,    -1,   526,
      -1,   519,   357,   362,    -1,    -1,    -1,   528,   529,    -1,
     529,   530,    -1,   530,    -1,   289,   357,     5,    -1,    56,
     357,   500,     5,     5,    -1,    65,    -1,    67,     5,    -1,
     185,   373,    -1,   243,   360,   360,    -1,   287,   370,    -1,
     296,   360,    -1,    46,   374,    -1,   185,     4,    -1,   356,
      -1,   354,    -1,   348,    -1,   206,    -1,   360,   360,   360,
     360,    -1,   360,   360,    -1,   372,   360,   360,    -1,   370,
     377,   369,    -1,   297,   535,    -1,    39,   360,   360,    -1,
     197,   536,    -1,   235,   362,    -1,   360,   360,    -1,   372,
     360,   360,    -1,   370,   377,   369,    -1,    40,   360,   360,
      -1,   360,   360,    -1,   113,   360,   360,    -1,   362,    -1,
     316,   371,   377,    -1,     5,     4,     4,    -1,   306,    -1,
      71,   540,    -1,   171,     4,    -1,   249,     4,    -1,   258,
     360,    -1,     4,     4,     4,     4,     4,     4,     4,     4,
       4,    -1,     4,     4,     4,     4,     4,     4,    -1,    55,
      -1,   143,    -1,   250,    -1,    91,    -1,   152,   542,    -1,
     264,   543,    -1,    40,   360,   360,    -1,   197,   360,   360,
      -1,   113,    -1,   269,   113,    -1,    40,   360,   360,    -1,
     197,   360,   360,    -1,   113,    -1,   269,   113,    -1,   192,
      -1,    13,    -1,   206,    -1,    34,    -1,   109,    -1,    62,
       5,    -1,   287,   370,    -1,   310,     4,     4,     4,    -1,
     360,    -1,   360,    99,    -1,   197,   548,    -1,   297,   360,
      -1,   297,   360,    99,    -1,    40,    -1,   360,    -1,   113,
      -1,    26,   550,    -1,   126,   552,    -1,   210,   562,    -1,
     114,   563,    -1,   223,     5,    -1,   122,     5,   387,    -1,
      62,     5,   387,    -1,   278,     4,   387,    -1,   250,    88,
     551,    -1,   122,     5,   387,    -1,    62,     5,   387,    -1,
     278,     4,   387,    -1,   553,    -1,   159,   553,    -1,   288,
     554,    -1,   275,   555,    -1,   119,    88,   556,    -1,   195,
     557,    -1,   250,   159,   559,    -1,   250,    88,   560,    -1,
     246,   561,    -1,   122,     5,    -1,    62,     5,    -1,   278,
       4,    -1,   122,     5,    -1,    62,     5,    -1,   278,     4,
      -1,   122,     5,    -1,    62,     5,    -1,   278,     4,    -1,
     122,     5,    -1,    62,     5,    -1,   278,     4,    -1,   159,
     558,    -1,   122,     5,     4,    -1,    62,     5,     4,    -1,
     278,     4,     4,    -1,   122,     5,    -1,    62,     5,    -1,
     278,     4,    -1,   122,     5,    -1,    62,     5,    -1,   278,
       4,    -1,   122,     5,    -1,    62,     5,    -1,   278,     4,
      -1,   122,     5,    -1,    62,     5,    -1,   278,     4,    -1,
     122,     5,   387,    -1,    62,     5,   387,    -1,   278,     4,
     387,    -1,   122,     5,     5,   387,    -1,   565,     4,     4,
     360,   360,   365,    -1,   565,     4,    -1,   101,    -1,    51,
      -1,   299,    -1,   139,    -1,   110,    -1,    -1,     4,   360,
     360,   360,   360,    -1,   209,    -1,   209,     4,   360,   360,
     360,   360,    -1,   126,   275,   567,    -1,     4,    -1,     4,
       4,    -1,   360,   370,    -1,   360,   360,    -1,   297,   360,
     360,    -1,   371,   377,   378,    -1,    16,   572,    -1,   248,
       4,    -1,   245,   571,    -1,    23,   570,    -1,     4,     4,
      -1,     4,     5,    -1,   291,     4,     5,    -1,     4,     4,
      -1,     4,     5,    -1,   291,     4,     5,    -1,     4,    -1,
       4,   371,   377,    -1,     4,     6,   371,   377,    -1,   234,
      -1,   360,   360,    -1,   360,   360,    12,   360,   360,    -1,
     360,   360,    12,   372,   360,   360,    -1,   360,   360,    12,
     370,   377,   369,    -1,   297,   575,    -1,   125,    -1,   125,
     360,    -1,   360,   360,    -1,   360,   360,    12,   360,   360,
      -1,   360,   360,    12,   372,   360,   360,    -1,   360,   360,
      12,   370,   377,   369,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   464,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   520,   521,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,   535,
     538,   540,   541,   542,   543,   545,   546,   547,   548,   551,
     552,   553,   554,   555,   558,   559,   562,   563,   564,   567,
     570,   573,   576,   588,   595,   602,   610,   611,   612,   613,
     614,   617,   618,   619,   620,   621,   622,   623,   624,   625,
     626,   627,   628,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   647,
     648,   651,   652,   653,   654,   655,   656,   659,   660,   661,
     662,   663,   666,   667,   668,   669,   670,   671,   672,   673,
     676,   677,   678,   679,   680,   683,   684,   685,   686,   687,
     688,   689,   690,   693,   694,   695,   698,   699,   700,   701,
     704,   705,   706,   709,   710,   711,   714,   715,   716,   719,
     720,   721,   722,   723,   724,   725,   726,   729,   730,   733,
     734,   735,   736,   737,   738,   741,   742,   743,   746,   747,
     748,   749,   750,   751,   754,   755,   756,   757,   758,   759,
     760,   761,   765,   766,   769,   770,   773,   774,   777,   778,
     782,   783,   784,   785,   786,   787,   788,   789,   792,   793,
     796,   797,   798,   800,   802,   803,   804,   806,   810,   811,
     814,   815,   817,   820,   822,   828,   829,   830,   833,   834,
     835,   838,   839,   840,   841,   842,   843,   844,   850,   851,
     854,   855,   856,   857,   858,   861,   862,   863,   864,   867,
     868,   873,   878,   885,   887,   889,   890,   891,   894,   896,
     899,   900,   903,   904,   905,   906,   907,   910,   912,   914,
     919,   924,   927,   928,   931,   932,   933,   940,   941,   942,
     943,   946,   947,   950,   951,   954,   955,   958,   960,   964,
     965,   968,   970,   971,   972,   973,   976,   977,   979,   980,
     981,   984,   986,   988,   989,   991,   993,   995,   997,  1001,
    1004,  1005,  1006,  1009,  1012,  1013,  1014,  1015,  1016,  1017,
    1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,  1027,
    1028,  1029,  1030,  1032,  1033,  1034,  1035,  1036,  1037,  1038,
    1039,  1040,  1041,  1043,  1044,  1045,  1046,  1047,  1048,  1049,
    1051,  1053,  1054,  1057,  1058,  1059,  1060,  1061,  1062,  1063,
    1064,  1067,  1068,  1069,  1072,  1075,  1076,  1078,  1080,  1081,
    1082,  1083,  1084,  1085,  1092,  1093,  1096,  1097,  1098,  1101,
    1102,  1105,  1108,  1109,  1111,  1115,  1116,  1117,  1120,  1124,
    1126,  1127,  1128,  1129,  1130,  1131,  1132,  1133,  1134,  1137,
    1138,  1139,  1142,  1143,  1146,  1148,  1156,  1158,  1160,  1164,
    1165,  1167,  1170,  1173,  1174,  1178,  1180,  1183,  1188,  1189,
    1190,  1194,  1195,  1196,  1199,  1200,  1201,  1204,  1205,  1207,
    1208,  1209,  1210,  1211,  1212,  1213,  1214,  1215,  1216,  1218,
    1219,  1222,  1223,  1226,  1227,  1228,  1229,  1232,  1233,  1236,
    1238,  1241,  1245,  1246,  1247,  1249,  1251,  1255,  1256,  1257,
    1260,  1261,  1262,  1263,  1264,  1265,  1266,  1269,  1272,  1273,
    1274,  1277,  1278,  1279,  1280,  1281,  1282,  1285,  1286,  1287,
    1288,  1289,  1290,  1291,  1294,  1295,  1298,  1299,  1302,  1303,
    1306,  1307,  1310,  1311,  1312,  1315,  1316,  1319,  1320,  1323,
    1326,  1334,  1335,  1338,  1339,  1340,  1341,  1342,  1343,  1344,
    1345,  1346,  1347,  1348,  1349,  1350,  1351,  1352,  1353,  1354,
    1355,  1358,  1361,  1362,  1365,  1366,  1367,  1368,  1371,  1372,
    1373,  1374,  1377,  1378,  1379,  1380,  1381,  1382,  1385,  1386,
    1387,  1388,  1389,  1390,  1392,  1393,  1398,  1399,  1402,  1404,
    1406,  1409,  1410,  1411,  1412,  1413,  1414,  1417,  1419,  1421,
    1423,  1424,  1426,  1428,  1430,  1432,  1434,  1437,  1438,  1439,
    1440,  1441,  1442,  1444,  1445,  1446,  1449,  1452,  1454,  1456,
    1458,  1460,  1462,  1464,  1466,  1469,  1471,  1473,  1475,  1476,
    1477,  1478,  1479,  1482,  1483,  1484,  1485,  1486,  1487,  1488,
    1490,  1492,  1493,  1494,  1497,  1498,  1499,  1500,  1501,  1502,
    1504,  1505,  1506,  1509,  1510,  1511,  1512,  1513,  1516,  1519,
    1522,  1525,  1528,  1531,  1534,  1537,  1540,  1545,  1548,  1551,
    1554,  1557,  1560,  1563,  1566,  1569,  1572,  1575,  1580,  1583,
    1586,  1589,  1592,  1595,  1598,  1601,  1604,  1609,  1611,  1613,
    1615,  1617,  1619,  1624,  1626,  1628,  1632,  1635,  1638,  1641,
    1644,  1647,  1650,  1653,  1656,  1659,  1662,  1667,  1668,  1669,
    1670,  1671,  1672,  1673,  1675,  1677,  1678,  1679,  1682,  1683,
    1684,  1685,  1686,  1687,  1689,  1690,  1691,  1694,  1696,  1698,
    1699,  1701,  1703,  1707,  1708,  1711,  1712,  1713,  1716,  1723,
    1724,  1725,  1726,  1727,  1728,  1729,  1732,  1740,  1741,  1742,
    1743,  1745,  1747,  1748,  1748,  1749,  1750,  1751,  1752,  1753,
    1754,  1756,  1757,  1759,  1762,  1765,  1766,  1767,  1770,  1773,
    1776,  1777,  1781,  1784,  1787,  1790,  1794,  1799,  1804,  1806,
    1807,  1809,  1810,  1812,  1814,  1816,  1818,  1819,  1821,  1823,
    1827,  1832,  1834,  1836,  1838,  1840,  1842,  1844,  1846,  1848,
    1850,  1852,  1855,  1856,  1858,  1860,  1861,  1863,  1865,  1866,
    1867,  1869,  1871,  1872,  1873,  1875,  1876,  1877,  1880,  1884,
    1887,  1890,  1894,  1899,  1905,  1906,  1907,  1909,  1910,  1914,
    1916,  1917,  1918,  1921,  1924,  1927,  1929,  1931,  1932,  1937,
    1940,  1941,  1942,  1945,  1949,  1950,  1952,  1953,  1954,  1956,
    1957,  1959,  1960,  1965,  1967,  1968,  1970,  1971,  1972,  1973,
    1974,  1975,  1977,  1979,  1981,  1982,  1984,  1985,  1987,  1989,
    1990,  1991,  1992,  1993,  1994,  1995,  1996,  1997,  1998,  1999,
    2001,  2003,  2004,  2005,  2006,  2008,  2009,  2010,  2011,  2012,
    2014,  2015,  2016,  2017,  2018,  2019,  2022,  2023,  2024,  2025,
    2026,  2027,  2028,  2029,  2030,  2031,  2032,  2033,  2034,  2035,
    2036,  2037,  2038,  2039,  2040,  2041,  2042,  2045,  2046,  2047,
    2048,  2049,  2050,  2058,  2065,  2074,  2083,  2090,  2097,  2105,
    2113,  2120,  2125,  2130,  2135,  2140,  2145,  2150,  2156,  2166,
    2176,  2186,  2193,  2203,  2213,  2222,  2234,  2247,  2252,  2255,
    2257,  2259,  2264,  2268,  2271,  2273,  2275,  2278,  2279,  2280,
    2281,  2282,  2283,  2284,  2287,  2288,  2289,  2290,  2291,  2292,
    2294,  2296,  2298,  2300,  2302,  2304,  2307,  2308,  2309,  2310,
    2312,  2315,  2316,  2318,  2320,  2321,  2322,  2324,  2327,  2330,
    2331,  2333,  2334,  2335,  2336,  2338,  2339,  2340,  2341,  2342,
    2344,  2346,  2347,  2349,  2352,  2353,  2354,  2356,  2358,  2359,
    2360,  2361,  2363,  2366,  2370,  2371,  2372,  2373,  2376,  2379,
    2381,  2382,  2383,  2384,  2386,  2389,  2390,  2392,  2393,  2394,
    2395,  2396,  2398,  2399,  2401,  2404,  2405,  2406,  2407,  2408,
    2410,  2412,  2413,  2414,  2415,  2417,  2419,  2420,  2421,  2422,
    2423,  2424,  2426,  2427,  2429,  2432,  2433,  2434,  2435,  2438,
    2439,  2442,  2443,  2446,  2447,  2450,  2463,  2464,  2468,  2469,
    2473,  2474,  2477,  2482,  2489,  2491,  2494,  2496,  2499,  2503,
    2504,  2505,  2506,  2507,  2508,  2509,  2513,  2514,  2517,  2518,
    2519,  2520,  2521,  2522,  2523,  2524,  2527,  2528,  2529,  2530,
    2531,  2532,  2533,  2534,  2535,  2536,  2537,  2540,  2541,  2544,
    2545,  2545,  2548,  2549,  2550,  2551,  2554,  2555,  2558,  2559,
    2562,  2566,  2567,  2567,  2570,  2571,  2574,  2577,  2581,  2582,
    2583,  2584,  2585,  2586,  2587,  2588,  2594,  2595,  2596,  2597,
    2600,  2602,  2603,  2608,  2610,  2611,  2612,  2613,  2616,  2617,
    2622,  2626,  2627,  2628,  2631,  2632,  2637,  2638,  2641,  2643,
    2644,  2645,  2650,  2652,  2658,  2659,  2660,  2661,  2664,  2665,
    2668,  2670,  2672,  2673,  2676,  2678,  2679,  2680,  2683,  2684,
    2687,  2688,  2689,  2692,  2693,  2694,  2697,  2698,  2699,  2700,
    2701,  2704,  2705,  2706,  2709,  2710,  2711,  2712,  2713,  2716,
    2718,  2720,  2722,  2725,  2727,  2729,  2732,  2733,  2734,  2735,
    2736,  2737,  2738,  2739,  2740,  2743,  2744,  2745,  2748,  2749,
    2750,  2753,  2754,  2755,  2758,  2759,  2760,  2763,  2764,  2765,
    2766,  2769,  2770,  2771,  2774,  2775,  2776,  2779,  2780,  2781,
    2784,  2785,  2786,  2789,  2791,  2793,  2797,  2801,  2803,  2808,
    2811,  2812,  2813,  2814,  2817,  2818,  2820,  2821,  2823,  2826,
    2827,  2828,  2831,  2832,  2835,  2837,  2838,  2839,  2840,  2843,
    2844,  2845,  2848,  2849,  2850,  2853,  2854,  2859,  2863,  2870,
    2871,  2873,  2878,  2880,  2883,  2884,  2885,  2886,  2888,  2893
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
     359,   359,   359,   359,   359,   359,   360,   360,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   363,
     363,   363,   363,   363,   364,   364,   365,   365,   365,   366,
     367,   368,   369,   369,   369,   369,   370,   370,   370,   370,
     370,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   372,
     372,   373,   373,   373,   373,   373,   373,   374,   374,   374,
     374,   374,   375,   375,   375,   375,   375,   375,   375,   375,
     376,   376,   376,   376,   376,   377,   377,   377,   377,   377,
     377,   377,   377,   378,   378,   378,   379,   379,   379,   379,
     380,   380,   380,   381,   381,   381,   382,   382,   382,   383,
     383,   383,   383,   383,   383,   383,   383,   384,   384,   385,
     385,   385,   385,   385,   385,   386,   386,   386,   387,   387,
     387,   387,   387,   387,   388,   388,   388,   388,   388,   388,
     388,   388,   389,   389,   390,   390,   391,   391,   392,   392,
     393,   393,   393,   393,   393,   393,   393,   393,   394,   394,
     395,   395,   395,   395,   395,   395,   395,   395,   396,   396,
     397,   397,   397,   397,   397,   398,   398,   398,   399,   399,
     399,   400,   400,   400,   400,   400,   400,   400,   401,   401,
     402,   402,   402,   402,   402,   403,   403,   403,   403,   404,
     404,   404,   404,   405,   405,   405,   405,   405,   406,   406,
     407,   407,   408,   408,   408,   408,   408,   409,   409,   409,
     409,   409,   410,   410,   411,   411,   411,   412,   412,   412,
     412,   413,   413,   414,   414,   415,   415,   416,   416,   417,
     417,   417,   417,   417,   417,   417,   418,   418,   418,   418,
     418,   419,   419,   419,   419,   419,   419,   419,   419,   420,
     421,   421,   421,   422,   423,   423,   423,   423,   423,   423,
     423,   423,   423,   423,   423,   423,   423,   423,   423,   423,
     423,   423,   423,   423,   423,   423,   423,   423,   423,   423,
     423,   423,   423,   423,   423,   423,   423,   423,   423,   423,
     423,   423,   423,   424,   424,   424,   424,   424,   424,   424,
     424,   425,   425,   425,   426,   427,   427,   427,   427,   427,
     427,   427,   427,   427,   428,   428,   429,   429,   429,   430,
     430,   431,   432,   432,   432,   433,   433,   433,   434,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   436,
     436,   436,   437,   437,   438,   438,   439,   439,   439,   440,
     440,   440,   441,   442,   442,   443,   443,   443,   444,   444,
     444,   445,   445,   445,   446,   446,   446,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   448,   448,   449,   449,   449,   449,   450,   450,   451,
     451,   451,   452,   452,   452,   452,   452,   453,   453,   453,
     454,   454,   454,   454,   454,   454,   454,   455,   456,   456,
     456,   457,   457,   457,   457,   457,   457,   458,   458,   458,
     458,   458,   458,   458,   459,   459,   460,   460,   461,   461,
     462,   462,   463,   463,   463,   464,   464,   465,   465,   466,
     466,   467,   467,   468,   468,   468,   468,   468,   468,   468,
     468,   468,   468,   468,   468,   468,   468,   468,   468,   468,
     468,   469,   470,   470,   471,   471,   471,   471,   472,   472,
     472,   472,   473,   473,   473,   473,   473,   473,   474,   474,
     474,   474,   474,   474,   474,   474,   475,   475,   476,   476,
     476,   477,   477,   477,   477,   477,   477,   478,   478,   478,
     478,   478,   478,   478,   478,   478,   478,   479,   479,   479,
     479,   479,   479,   479,   479,   479,   480,   481,   481,   481,
     481,   481,   481,   481,   481,   481,   481,   481,   481,   481,
     481,   481,   481,   482,   482,   482,   482,   482,   482,   482,
     482,   482,   482,   482,   483,   483,   483,   483,   483,   483,
     483,   483,   483,   484,   484,   484,   484,   484,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   486,   486,   486,
     486,   486,   486,   486,   486,   486,   486,   486,   487,   487,
     487,   487,   487,   487,   487,   487,   487,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   492,   492,   492,
     492,   492,   492,   493,   493,   494,   494,   494,   495,   496,
     496,   496,   496,   496,   496,   496,   497,   498,   498,   498,
     498,   498,   498,   499,   498,   498,   498,   498,   498,   498,
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
     498,   498,   498,   498,   498,   498,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   501,   501,   501,
     501,   501,   501,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   503,
     503,   503,   503,   504,   505,   505,   505,   506,   506,   506,
     506,   506,   506,   506,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   508,   508,   508,   508,   509,
     509,   510,   510,   511,   511,   512,   513,   513,   513,   513,
     513,   513,   514,   514,   515,   515,   515,   515,   515,   516,
     516,   516,   516,   516,   516,   516,   517,   517,   518,   518,
     518,   518,   518,   518,   518,   518,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   520,   520,   521,
     522,   521,   523,   523,   523,   523,   524,   524,   525,   525,
     526,   527,   528,   527,   529,   529,   530,   531,   532,   532,
     532,   532,   532,   532,   532,   532,   533,   533,   533,   533,
     534,   534,   534,   534,   534,   534,   534,   534,   535,   535,
     535,   536,   536,   536,   537,   537,   537,   537,   538,   538,
     538,   538,   539,   539,   540,   540,   540,   540,   541,   541,
     542,   542,   542,   542,   543,   543,   543,   543,   544,   544,
     545,   545,   545,   546,   546,   546,   547,   547,   547,   547,
     547,   548,   548,   548,   549,   549,   549,   549,   549,   550,
     550,   550,   550,   551,   551,   551,   552,   552,   552,   552,
     552,   552,   552,   552,   552,   553,   553,   553,   554,   554,
     554,   555,   555,   555,   556,   556,   556,   557,   557,   557,
     557,   558,   558,   558,   559,   559,   559,   560,   560,   560,
     561,   561,   561,   562,   562,   562,   563,   564,   564,   564,
     565,   565,   565,   565,   566,   566,   566,   566,   566,   567,
     567,   567,   568,   568,   569,   569,   569,   569,   569,   570,
     570,   570,   571,   571,   571,   572,   572,   572,   573,   574,
     574,   574,   574,   574,   575,   575,   575,   575,   575,   575
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     3,     3,     2,     1,     1,
       2,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     2,     2,     3,     2,     2,     2,
       2,     3,     2,     3,     2,     2,     2,     2,     2,     2,
       1,     3,     2,     2,     2,     1,     2,     2,     2,     1,
       2,     1,     2,     2,     2,     2,     1,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     2,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     1,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     0,     1,     1,     1,
       0,     1,     1,     0,     1,     1,     0,     1,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     0,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     1,     2,     1,     2,     2,     6,
       2,     4,     2,     2,     2,     3,     2,     2,     1,     2,
       1,     2,     4,     5,     2,     3,     5,     6,     1,     1,
       1,     7,    11,     8,    12,     1,     2,     2,     1,     1,
       2,     2,     2,     2,     3,     3,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     1,     3,
       2,     2,     2,     6,    10,     1,     2,     1,     6,    10,
       1,     2,     2,     2,     2,     2,     2,    13,    13,    12,
      12,     1,     0,     1,     1,     4,     6,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     4,     0,
       6,     8,     2,     3,     3,     3,     0,     4,     4,     4,
       4,     3,     3,     1,     3,     5,     4,     4,     3,     2,
       0,     1,     1,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     2,
       2,     4,     9,     2,     2,     2,     1,     3,     2,     2,
       1,     2,     8,     2,     1,     2,     1,     2,     1,     4,
       9,     2,     1,     1,     1,     1,     2,     1,     1,     2,
       1,     0,     2,     2,     1,     0,     2,     2,     1,     1,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     0,
       1,     2,     1,     4,     5,     0,     2,     1,     5,     2,
       2,     1,     1,     1,     2,     1,     2,     1,     1,     0,
       1,     1,     0,     1,     5,     6,     3,     6,     3,     1,
       3,     1,     1,     1,     3,     6,     7,     5,     1,     1,
       4,     5,     1,     3,     0,     1,     2,     1,     4,     1,
       2,     1,     2,     3,     2,     1,     2,     1,     4,     2,
       1,     1,     3,     1,     2,     3,     2,     0,     1,     1,
       4,     2,     0,     1,     3,     4,     4,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     1,     2,     2,     2,
       2,     1,     1,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     2,     2,     0,     1,     2,     1,     6,
       5,     1,     1,     1,     2,     2,     2,     1,     1,     1,
       1,     2,     1,     1,     1,     2,     1,     1,     1,     2,
       2,     2,     0,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     1,     2,     3,     1,
       2,     2,     4,     6,     1,    10,     1,     2,     3,     3,
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
       2,     2,     2,     3,     3,     2,    12,     2,     2,     1,
       3,     4,     2,     0,     3,     1,     1,     2,     2,     2,
       2,     2,     4,     4,     4,     3,     4,     5,     8,     6,
       4,     9,     6,     7,    10,    11,    12,     9,     5,     4,
       6,     3,     5,     5,     6,     5,     4,     9,    10,    11,
       9,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       7,     7,     2,     4,     4,     4,     4,     5,     4,     4,
       5,     5,     3,     4,     4,     4,     4,     7,     9,     6,
      10,    11,    12,     9,     3,     2,     3,     5,     7,     4,
       3,     3,     6,     7,     7,     4,     4,     4,     9,     4,
       3,     4,     7,     7,     2,     3,     3,     3,     4,     2,
       2,     4,    10,     3,     1,     3,     2,     2,     2,     2,
       3,     5,     4,     5,     2,     7,     3,     2,     2,     3,
       2,     2,     2,     3,     2,     3,     4,     3,     3,     6,
       4,     2,     3,     2,     2,     4,     3,     3,     2,     3,
       1,     2,     1,     2,     2,     2,     1,     1,     1,     1,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     2,
       2,     2,     3,     5,     7,     7,     6,     6,     6,     6,
       5,     6,     6,     6,     6,     6,     6,     6,    11,     7,
       7,     7,     9,     9,    10,    12,    12,     2,     2,     3,
       4,     4,     4,     2,     4,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     3,     3,
       8,     6,    10,     7,     7,     5,     2,     2,     3,     4,
       5,     3,     5,     5,     3,     4,     5,     5,     5,     3,
       5,     2,     3,     3,     5,     3,     3,     3,     4,     5,
       5,     3,     5,     5,     3,     4,     5,     5,     2,     2,
       3,     5,     6,     6,     3,     3,     3,     6,     5,     5,
       2,     3,     3,     5,     6,     3,     2,     2,     3,     2,
       3,     2,     3,     5,     6,     2,     2,     2,     1,     4,
       4,     1,     2,     2,     2,     2,     2,     2,     2,     3,
       2,     3,     2,     3,     1,     1,     1,     1,     1,     0,
       2,     0,     2,     0,     1,     0,     0,     1,     1,     1,
       1,     1,     7,     8,     2,     4,     2,     4,     6,     2,
       1,     1,     3,     3,     1,     4,     2,     1,     3,     3,
       4,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     0,
       0,     2,     1,     3,     1,     3,     1,     2,     2,     1,
       3,     0,     0,     2,     2,     1,     3,     5,     1,     2,
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
       2,     3,     2,     2,     3,     1,     3,     4,     1,     2,
       5,     6,     6,     2,     1,     2,     2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     8,     9,     0,     0,     0,     0,
       0,   309,     0,     0,     0,     0,     0,     0,     0,     0,
      23,     0,     0,     0,     0,     0,     0,     0,  1046,     0,
       0,     0,     0,     0,     0,     0,     0,  1046,    40,     0,
       0,     0,    45,     0,     0,     0,    49,  1234,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,    56,    57,     0,   245,     7,     0,
       0,     0,     0,     0,     0,    10,     0,     0,   275,   277,
       0,     0,    12,   147,   149,   142,   143,   144,   148,   145,
     146,   280,    13,     0,   292,     0,     0,     0,    14,     0,
       0,     0,     0,   316,     0,    15,    70,    99,     0,   129,
      98,    78,    96,     0,    75,    77,    73,   130,    97,    74,
       0,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    71,
      72,    76,   323,   155,   100,     0,    16,     0,    17,    18,
       0,     0,     0,     0,     0,     0,    59,    58,     0,     0,
       0,     0,     2,     0,    19,     0,     0,     0,   385,   399,
       0,   405,     0,     0,     0,     0,     0,     0,     0,   348,
       0,   477,     0,     0,     0,     0,     0,  1046,     0,   356,
       0,   360,     0,     0,     0,   364,     0,   366,     0,   368,
       0,     0,   512,   372,    20,     0,   518,    21,   523,     0,
       0,   542,   527,   528,   529,   530,   544,   532,   533,   537,
     534,     0,   536,   538,     0,     0,    22,    24,     0,   559,
       0,     0,     0,   564,     0,    25,     0,     0,     0,     0,
       0,     0,     0,    27,   718,    28,     0,     0,     0,     0,
       0,     0,   719,    29,     0,    30,  1050,  1051,  1047,  1048,
    1049,     0,   137,  1108,     0,   131,     0,     0,     0,    32,
       0,  1119,  1118,  1117,  1116,    34,     0,     0,     0,     0,
       0,   155,     0,    35,     0,  1137,     0,  1134,    36,     0,
       0,     0,     0,    39,     0,    38,    37,     0,     0,     0,
       0,    42,     0,     0,  1166,    43,     0,     0,     0,     0,
       0,    44,  1230,  1229,  1233,  1232,  1231,    46,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,    48,     0,
       0,  1236,    50,     0,     0,    52,     0,     0,     0,     0,
     155,    53,  1258,    54,     0,     0,    55,     1,     4,     5,
       6,   228,     0,   220,     0,     0,   222,     0,   230,   223,
     227,   238,   239,   224,   240,     0,   226,   248,   249,   247,
     246,     0,     0,   268,     0,   253,   261,   264,   263,   262,
     260,   252,   257,   258,   259,   251,     0,     0,     0,     0,
       0,     0,   256,    11,     0,     0,     0,   276,     0,   281,
       0,   291,   282,   293,   283,   294,   284,   305,   285,     0,
       0,   286,     0,    89,    90,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   312,     0,     0,
       0,     0,     0,   157,   162,   156,   158,   161,   160,   159,
       0,     0,   329,    64,    65,    66,    67,    68,    60,    61,
      62,    69,    63,     0,   334,     0,   381,   377,   373,   374,
     378,   375,   380,   335,   384,   336,   297,   389,   393,   388,
     300,   299,   298,     0,     0,   337,   400,   339,     0,   338,
       0,   407,   340,   419,   411,   422,   412,   413,   415,     0,
     417,   418,   155,   341,     0,     0,   342,     0,     0,   155,
     343,   431,   155,   429,   344,   432,   346,   155,   433,   345,
       0,   155,     0,   347,   451,     0,   449,   467,     0,     0,
       0,   455,   447,     0,   457,   472,   460,   349,   478,   479,
     350,     0,     0,     0,   442,     0,   353,   438,   439,     0,
     354,   355,     0,   486,   480,   485,   481,   482,   483,   484,
     358,   359,   487,   361,     0,   488,   489,   490,   363,   496,
     491,   492,   494,   365,   502,   504,   506,   508,   501,   503,
     510,   367,     0,     0,   515,     0,   371,   155,   517,   524,
       0,   525,   543,   526,   545,   546,   547,   531,   548,   550,
     549,   551,   535,   539,   556,     0,     0,     0,     0,   552,
     540,     0,     0,   561,   560,     0,     0,     0,     0,    26,
       0,     0,   571,     0,   572,     0,     0,     0,     0,     0,
     573,     0,   717,     0,   574,     0,   575,     0,     0,   576,
       0,   722,   721,   720,     0,   725,     0,     0,     0,   897,
       0,     0,     0,   729,   733,   735,   736,     0,     0,     0,
       0,   834,     0,     0,     0,   870,     0,     0,     0,     0,
       0,     0,     0,   872,     0,     0,     0,    31,   140,   141,
     139,   138,  1114,  1109,  1115,   134,   135,   133,   136,   132,
    1110,     0,  1112,  1113,    33,     0,     0,     0,     0,  1126,
    1127,     0,   155,     0,  1124,  1121,     0,     0,     0,   155,
    1144,  1147,  1145,  1146,  1138,  1139,  1140,  1141,     0,     0,
       0,    41,  1163,  1164,     0,  1171,  1173,  1172,  1168,  1169,
    1167,     0,     0,     0,     0,  1174,     0,  1177,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1175,  1186,
       0,     0,     0,  1176,  1178,  1228,  1161,  1162,  1160,   209,
       0,   212,   205,     0,   214,   206,     0,   216,   207,  1159,
    1158,   208,   210,   211,     0,     0,   204,     0,     0,     0,
       0,  1242,  1255,  1245,     0,     0,  1248,     0,     0,  1247,
    1246,   163,  1264,     0,  1263,  1259,   229,   225,     0,   234,
       0,   231,     0,   250,   150,   153,   154,   152,   151,   265,
     266,   267,   255,   254,   270,   272,   271,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   155,     0,   313,    95,
      92,    93,    94,   155,   315,   314,     0,     0,     0,     0,
       0,     0,     0,   328,     0,   324,   322,   321,   333,   376,
       0,     0,   379,   394,   395,   390,   391,   396,   398,   397,
     392,   301,   302,   387,   386,   402,   401,     0,   406,   420,
     421,   410,   423,   416,   414,   409,     0,     0,   155,   155,
     163,   163,   163,   155,     0,     0,   155,   468,   450,   461,
       0,   452,    79,   463,     0,     0,   454,   456,   155,   473,
       0,     0,   459,     0,     0,     0,   444,     0,     0,     0,
       0,   945,   947,   946,     0,  1039,     0,  1018,     0,  1021,
       0,     0,  1041,  1043,     0,  1034,   357,     0,   493,   495,
     505,   498,   507,   499,   509,   500,   511,   497,     0,     0,
     516,   513,   514,   163,   541,   553,   554,   555,   557,     0,
     570,   558,     0,     0,     0,     0,     0,     0,   176,   176,
     170,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     173,   173,   170,     0,     0,   170,     0,     0,     0,     0,
       0,   612,   636,     0,     0,     0,   608,     0,     0,     0,
       0,   176,   170,     0,     0,   713,     0,   723,   724,   155,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   782,     0,     0,     0,     0,     0,   805,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   824,
       0,     0,   829,   830,     0,     0,     0,   850,   852,   851,
       0,   854,     0,     0,   861,   863,   864,   898,     0,     0,
       0,     0,   727,   728,   939,   937,   942,   941,   940,   938,
     943,     0,   732,     0,   737,     0,   936,     0,   738,   739,
     740,   741,     0,     0,     0,     0,     0,   836,     0,     0,
     837,  1061,     0,  1064,  1060,     0,     0,     0,   838,   871,
     839,  1079,  1084,  1081,  1080,  1078,  1085,  1082,  1076,  1083,
    1077,  1086,     0,     0,   844,     0,     0,     0,  1092,     0,
    1094,   847,     0,  1096,   848,   868,     0,     0,     0,   873,
     874,   875,  1111,  1125,     0,     0,  1132,  1128,     0,     0,
       0,  1123,  1122,  1136,  1135,     0,     0,  1152,     0,     0,
    1148,     0,  1156,     0,     0,  1149,     0,  1170,   198,   198,
       0,   198,     0,  1196,     0,  1195,  1187,     0,     0,     0,
       0,  1191,     0,     0,     0,  1194,     0,     0,     0,     0,
       0,  1189,  1197,     0,     0,     0,  1188,   198,   198,   198,
       0,   213,   215,   217,     0,   218,     0,    57,     0,  1238,
       0,  1243,     0,   155,  1249,  1250,     0,  1252,  1253,     0,
     164,   165,  1244,  1265,  1266,     0,   221,     0,   235,     0,
       0,     0,     0,   269,     0,     0,     0,     0,     0,     0,
       0,     0,   307,   155,     0,     0,     0,     0,   155,     0,
     327,     0,   326,   383,   382,     0,     0,     0,   155,     0,
     163,   428,   426,   430,   434,     0,     0,     0,   163,     0,
      83,    82,   469,   453,     0,   464,   466,   166,     0,     0,
     351,     0,     0,    57,     0,   443,     0,     0,   957,     0,
       0,     0,     0,     0,     0,   971,     0,     0,     0,     0,
       0,     0,   988,   989,     0,     0,     0,     0,     0,  1000,
       0,  1006,  1007,  1009,  1011,     0,  1015,  1026,  1027,  1028,
       0,  1030,  1035,  1037,  1038,  1036,   944,     0,  1017,     0,
    1016,   956,     0,     0,  1022,     0,  1024,     0,  1023,  1044,
    1025,  1032,     0,     0,   369,     0,     0,   568,   569,     0,
     566,   562,     0,   176,   176,   176,   177,   178,   580,   581,
     172,   171,     0,   176,   176,   176,     0,   586,   596,   173,
     176,   176,   176,   174,   175,   176,   176,     0,   176,   176,
       0,   173,     0,   609,     0,     0,     0,   635,     0,   634,
       0,     0,   611,     0,   610,     0,     0,     0,     0,   173,
     173,   170,     0,     0,   170,     0,     0,     0,   176,   176,
     709,     0,   176,   176,   714,     0,   189,   190,   191,   192,
     193,   194,     0,    87,    88,    86,   745,     0,     0,     0,
       0,     0,     0,   891,   889,   884,     0,   894,   878,   895,
     881,   893,   887,   876,   890,   879,   877,   896,   892,     0,
       0,     0,   761,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   792,     0,     0,     0,
       0,     0,   804,   806,     0,     0,   811,   810,     0,     0,
     179,     0,     0,     0,   155,     0,   820,     0,     0,     0,
       0,   825,   826,   827,     0,     0,     0,   833,   849,   853,
     855,   858,   857,     0,     0,     0,   862,   899,   901,     0,
     900,   730,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1045,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   734,     0,     0,
       0,     0,   835,     0,   155,     0,  1056,  1054,     0,     0,
     155,  1059,   840,     0,     0,     0,   846,     0,     0,  1097,
     866,   867,     0,   869,  1131,  1133,  1130,  1129,  1120,     0,
       0,     0,  1153,     0,     0,  1157,  1165,   200,   201,   202,
     203,   199,  1180,  1179,     0,     0,     0,  1182,  1181,   198,
       0,     0,     0,  1190,     0,     0,     0,     0,     0,  1207,
       0,  1221,  1220,  1222,     0,     0,     0,  1193,     0,     0,
       0,  1192,  1202,  1201,  1203,  1199,  1198,  1200,  1224,  1223,
    1225,     0,     0,     0,  1240,  1241,     0,   155,  1256,  1251,
    1254,     0,     0,   155,     0,     0,     0,   232,     0,     0,
       0,     0,     0,     0,     0,     0,   304,   303,     0,     0,
     295,   306,   308,     0,   318,   320,   319,   317,   155,   325,
       0,     0,     0,   163,   155,     0,     0,     0,     0,   448,
     462,    81,    80,   471,     0,   465,   168,   169,   167,   458,
       0,   474,     0,     0,     0,   446,   440,     0,     0,     0,
       0,     0,     0,   155,   958,     0,   961,     0,     0,   964,
       0,   155,   969,     0,   972,   973,     0,   975,   976,   977,
       0,   981,     0,     0,   984,     0,   990,     0,     0,     0,
     995,   996,   994,     0,     0,     0,  1001,  1002,     0,     0,
    1005,  1008,  1010,  1012,     0,     0,  1029,  1031,   948,  1040,
     949,     0,     0,  1042,  1033,     0,     0,   521,   522,     0,
       0,   567,     0,   577,   578,   579,   176,   583,   584,   585,
       0,     0,     0,   590,   591,   170,     0,     0,     0,   176,
     597,   598,   599,   600,   602,   173,   605,   606,     0,   176,
       0,     0,     0,   173,   173,   170,     0,     0,     0,     0,
     633,     0,   637,     0,     0,     0,     0,     0,   173,   173,
     170,     0,     0,   170,     0,     0,     0,     0,     0,   173,
     173,   170,     0,     0,   170,     0,     0,     0,     0,     0,
     173,   173,   170,     0,     0,   170,     0,     0,     0,     0,
     173,   173,   170,     0,     0,     0,   173,   613,   614,   615,
     616,   618,     0,   621,   622,     0,   173,     0,     0,   707,
     708,   176,   711,   712,     0,   744,   155,   746,     0,     0,
     750,     0,     0,     0,     0,     0,   883,   880,   886,   885,
     882,   888,     0,   759,     0,     0,     0,     0,   155,   766,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   783,   784,   785,     0,   789,   786,   788,
       0,     0,   794,   793,   795,   796,     0,     0,     0,     0,
       0,     0,   155,   155,   809,   185,   181,   186,   180,   183,
     182,   184,   815,   816,   817,     0,     0,   819,   821,   155,
     155,     0,   828,   831,   155,   155,   856,   860,   902,   731,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1087,   927,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   928,     0,     0,     0,
       0,     0,   742,   743,   155,   163,     0,   155,   155,  1062,
    1063,     0,     0,   842,     0,   155,  1093,  1095,   865,     0,
    1150,  1151,  1154,  1155,   198,   198,   198,  1226,  1205,  1204,
    1206,  1209,  1208,  1212,  1211,  1213,  1210,  1218,  1217,  1219,
    1215,  1214,  1216,     0,     0,  1235,     0,  1257,     0,   155,
       0,  1260,     0,     0,   236,     0,   233,     0,     0,     0,
     273,     0,     0,     0,     0,   155,     0,   310,   143,     0,
     403,     0,   424,   163,   166,     0,     0,   437,     0,   475,
     476,     0,   441,     0,     0,     0,     0,     0,   155,   959,
     166,   166,   166,   155,   965,   166,   163,   166,   166,   155,
     978,   166,   166,   166,   155,   985,   166,   166,   155,     0,
     166,   155,   166,   166,   155,   166,   155,  1019,  1020,     0,
       0,   520,   563,     0,   582,   587,   588,   589,     0,   593,
     594,   595,   601,   176,   173,   607,   624,   625,   626,   627,
     628,     0,   630,   631,   173,     0,     0,     0,   173,   173,
     170,     0,     0,     0,     0,     0,     0,   173,   173,   170,
       0,     0,     0,     0,     0,     0,   173,   173,   170,     0,
       0,     0,   173,   176,   176,   176,   176,   176,     0,   176,
     176,     0,   173,   173,   176,   176,   176,   176,   176,     0,
     176,   176,     0,   173,   173,   687,   688,   689,   690,   692,
       0,   695,   696,     0,   173,   698,   699,   700,   701,   702,
       0,   704,   705,   173,   617,   173,     0,   623,     0,     0,
     710,     0,   747,   166,     0,     0,   166,     0,     0,     0,
     758,   166,   762,   763,   166,   765,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   787,
     790,   791,     0,   166,     0,     0,     0,   807,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1088,  1067,     0,  1074,  1075,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   155,     0,     0,    84,     0,     0,   934,   935,   163,
       0,     0,     0,  1057,  1055,  1065,   841,   843,   163,  1143,
    1184,  1183,  1185,  1227,     0,  1237,  1267,     0,     0,  1262,
    1261,   237,     0,     0,     0,   278,     0,     0,     0,   296,
     166,   404,   408,   425,   427,     0,   435,   470,     0,     0,
       0,     0,     0,     0,   955,   960,   963,   962,   966,   967,
     968,   970,   974,   979,   980,   982,   983,   986,   987,   991,
     163,   166,   998,   163,   999,  1003,   163,  1013,   163,     0,
       0,   519,     0,   592,   603,   176,   173,   632,   176,   176,
     176,   176,   176,     0,   176,   176,   173,   176,   176,   176,
     176,   176,     0,   176,   176,   173,   176,   176,   176,   176,
     176,     0,   176,   176,   173,   176,   647,   648,   649,   650,
     652,   173,   655,   656,     0,   176,   176,   676,   677,   678,
     679,   681,   173,   684,   685,     0,   176,   691,   173,     0,
     697,   173,   706,   619,   173,   715,   716,   155,   749,     0,
     166,   752,     0,   155,     0,   760,   764,   155,     0,   771,
     772,   773,   774,   778,   779,   775,   776,   777,     0,     0,
     166,   799,     0,   155,     0,     0,   812,   166,     0,     0,
     166,   166,     0,   859,     0,   187,   187,     0,     0,   187,
       0,   187,  1045,     0,     0,     0,     0,     0,     0,     0,
       0,  1066,     0,     0,   187,   187,     0,     0,     0,     0,
       0,     0,     0,     0,   929,     0,     0,     0,  1045,    85,
       0,   187,     0,  1090,   933,     0,     0,     0,   219,  1269,
    1268,     0,     0,   241,     0,     0,     0,     0,   311,   436,
     330,     0,   951,     0,   195,     0,   992,   993,   997,  1004,
    1014,   362,   330,     0,   604,   629,   638,   639,   640,   641,
     642,   173,   644,   645,   176,   667,   668,   669,   670,   671,
     173,   673,   674,   176,   658,   659,   660,   661,   662,   173,
     664,   665,   176,   651,   176,   173,   657,   680,   176,   173,
     686,   693,   173,   703,   620,     0,   166,   753,     0,     0,
       0,     0,     0,   780,   781,   797,     0,     0,     0,   808,
     813,     0,   822,   823,   814,   166,     0,   188,  1045,  1045,
      84,     0,  1045,     0,  1045,   903,   155,     0,  1069,     0,
    1072,  1106,  1073,  1071,  1068,     0,  1045,  1045,    84,     0,
       0,  1045,  1045,     0,     0,  1045,   932,   930,   931,   910,
    1045,  1045,  1090,  1101,     0,  1058,   845,     0,     0,     0,
     243,     0,     0,     0,   331,   332,   352,     0,     0,   196,
     197,   953,   954,   370,     0,   176,   646,   176,   675,   176,
     666,   653,   176,   682,   176,   694,     0,   748,   166,   166,
       0,   166,     0,   166,   166,     0,   166,     0,  1045,   916,
     912,  1045,     0,   917,     0,   911,  1045,     0,  1070,     0,
     914,   913,  1045,     0,     0,   908,   906,  1045,   155,   907,
     909,   915,  1101,  1052,     0,     0,  1091,  1099,  1142,     0,
       0,     0,   274,   297,   300,   298,     0,     0,   950,   155,
     565,   643,   672,   663,   654,   683,   166,   751,   757,     0,
     770,   767,   798,   803,     0,   818,     0,   921,   905,    84,
       0,   919,  1107,     0,   904,    84,     0,   920,     0,  1053,
    1103,  1105,     0,  1098,     0,     0,   279,     0,     0,     0,
       0,   195,     0,   754,   155,   768,   800,   832,  1045,     0,
       0,  1045,     0,   166,  1104,  1100,   242,     0,     0,     0,
       0,     0,   952,   726,   155,   755,   769,   155,   801,   923,
       0,  1045,   922,     0,     0,   244,   290,     0,   289,     0,
     756,   802,    84,   924,    84,  1045,   288,   287,  1045,  1045,
     918,   926,   925
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,  1405,   172,   152,  1252,  2478,  2479,   427,   428,
     429,   430,   153,   154,   155,   690,   682,    91,   809,   450,
    1202,  1669,  1342,  1355,  1338,  1912,  2578,  1402,  2631,  1572,
     338,   762,   765,   768,   776,    63,   363,   369,   373,   376,
      68,   379,    75,   395,   391,   385,   402,    82,   407,    92,
      98,   412,   414,   416,   484,   863,  1638,   418,   421,   105,
     437,   156,   158,  2626,   174,   214,   473,   852,   475,   485,
     855,   860,   487,   489,   866,   492,   868,   503,   871,   873,
     506,   510,   514,   516,   519,   523,   550,   546,  1265,   537,
     891,   896,   888,  1253,   902,   540,   560,   563,   568,   573,
     581,   931,   933,   935,   937,   586,   941,   217,   588,  1739,
     236,   591,   593,   597,   602,   610,   245,  1331,   613,   253,
     622,  1347,   624,   630,   986,  1363,   981,  1780,  1369,  1367,
    1782,   982,  1372,  1374,   636,   639,   634,   255,   263,   265,
     677,  1063,  1429,  1052,  1527,  1956,  2272,  1068,  1061,   926,
    1306,  1310,  1318,  1320,  1940,   271,  1077,  1080,  1088,  2244,
    2245,  2246,  1941,  2613,  2614,  1111,  1114,  2686,  2687,  2683,
    2684,  2730,  2247,  2248,   279,   285,   293,   704,   699,   298,
     303,   305,   714,   721,  1140,  1145,   771,   759,   311,   315,
     728,   321,   735,  1577,   748,   749,  1176,  1171,  1583,  1161,
    1589,  1601,  1597,  1165,   753,   737,   327,   328,   342,  1189,
     345,   351,   786,   789,   783,   353,   356,   794
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2544
static const yytype_int16 yypact[] =
{
    4933,   119,   128,   103, -2544, -2544,  1298,    37,   560,   569,
     959,    88,  2841,   463,   342,   492,    90,  5118,    67,  2020,
   -2544,   342,   825,   502,  1167,   286,    57,   520,   338,   477,
     514,   693,  3479,    29,   573,   529,   494,   338, -2544,   -31,
      72,  1269, -2544,    28,   603,   497, -2544,   550, -2544,   107,
    3841,   380,   110,   624,   157,   796,   364,   643,   649,   127,
     678,   -12,   471, -2544, -2544, -2544,   526,   194, -2544,   268,
      69,   342,   575,   562,   334, -2544,   708,   194, -2544, -2544,
      31,   194, -2544, -2544, -2544, -2544,   194, -2544, -2544, -2544,
   -2544, -2544, -2544,    64,   632,   723,   728,   142, -2544,   194,
    1244,   194,   194,   902,   194, -2544, -2544, -2544,   543, -2544,
   -2544, -2544, -2544,  4473, -2544, -2544, -2544, -2544, -2544, -2544,
     194, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544,  1056, -2544,   194, -2544,   744, -2544, -2544,
     342,   342,   342,   342,   342,   342, -2544, -2544,   342,   342,
     342,   342, -2544,   661, -2544,   721,  1612,   689,    15,   538,
     673,    -1,  4026,   504,  4525,  4445,   819,  4473,  3622, -2544,
    1070,   -74,   849,   771,   933,    77,   847,   338,   583, -2544,
     809, -2544,   665,   590,   206, -2544,   368, -2544,   888, -2544,
      20,   804,    41, -2544, -2544,  4716, -2544, -2544, -2544,   842,
     865,   889, -2544, -2544, -2544, -2544,   158, -2544, -2544, -2544,
   -2544,   816, -2544, -2544,  4716,  4083, -2544, -2544,   314, -2544,
     935,   945,   470, -2544,   194, -2544,  1001,    45,  1009,   440,
     837,  1014,     7, -2544, -2544, -2544,  1021,  1024,   342,   342,
     194,   194, -2544, -2544,  1037, -2544, -2544, -2544, -2544, -2544,
   -2544,  2699,   854, -2544,  1049,    10,   194,  4716,   194, -2544,
    1058, -2544, -2544, -2544, -2544, -2544,   194,  1063,   342,  3685,
     194,  1056,   194, -2544,  1061, -2544,  3996, -2544, -2544,   513,
    1069,  1081,   194, -2544,  1100, -2544, -2544,   348,  1107,  4716,
    1113, -2544,  1150,   194,  1040, -2544,   421,   998,  1480,   491,
    1118, -2544, -2544, -2544, -2544, -2544, -2544, -2544,  1132, -2544,
     464,     1,   177,   276,   122,   194,   194,   151, -2544,   194,
     869,  1151, -2544,   194,   194, -2544,  1155,    12,    24,  1171,
    1056, -2544, -2544, -2544,   602,   194, -2544, -2544, -2544, -2544,
   -2544, -2544,   194, -2544,  1175,  1142, -2544,   194,   192, -2544,
   -2544, -2544, -2544, -2544, -2544,   194, -2544, -2544,   194, -2544,
   -2544,   507,   507, -2544,  1199, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544,  1010,   194,   194,  1214,
    1219,  1220, -2544, -2544,   194,   194,   194, -2544,   194, -2544,
    1223, -2544, -2544, -2544, -2544,   208, -2544,  1225, -2544,  4716,
    1247, -2544,   194, -2544, -2544, -2544,   194,  1228,  1249,  1249,
    4716,   194,   194,   194,   194,   194,   194, -2544,   194,  4473,
    1244,   194,   194, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
    1244,   194, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544,  1259, -2544,   991,    48, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544,   -38, -2544, -2544, -2544,
    1096, -2544,   668,   591,   591, -2544, -2544, -2544,  1272, -2544,
    1273, -2544, -2544,   -52, -2544,  1093, -2544, -2544, -2544,  1109,
   -2544, -2544,  1056, -2544,   194,   194, -2544,  4716,  4716,  1056,
   -2544, -2544,  1056, -2544, -2544, -2544, -2544,  1056, -2544, -2544,
    4716,  1056,   194, -2544, -2544,  4716, -2544,  1279,    32,  1087,
       3, -2544, -2544,  1091,  4716,    11, -2544, -2544, -2544, -2544,
   -2544,  1286,  1300,  1299, -2544,  1114, -2544, -2544, -2544,   194,
   -2544, -2544,   523, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544,    20, -2544, -2544, -2544, -2544, -2544,
   -2544,  1125,  1126, -2544, -2544,  1252,  1254,  1256, -2544, -2544,
    1097, -2544,   194,  1322,  1101,  3996, -2544,  1056, -2544, -2544,
    1327, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544,  4716,  4716,  4716,  4716, -2544,
   -2544,  1329,   342, -2544, -2544,  1330,  1335,  1141,   194, -2544,
     400,  1243, -2544,  1336, -2544,   292,  1255,  3949,   426,  1350,
   -2544,  1354, -2544,  1357, -2544,    71, -2544,  1358,  1359, -2544,
    1361, -2544, -2544, -2544,   194, -2544,  3996,  4407,  1148,   616,
    1364,   363,  1265, -2544, -2544, -2544,  1365,   710,  1370,  1373,
      30,   194,   795,   378,    50,  4716,   342,  1489,   813,    40,
      76,   203,    19, -2544,  1367,  1369,  1371, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544,   194, -2544, -2544, -2544,   194,   194,   194,   194, -2544,
   -2544,   194,  1056,   194, -2544,   194,  1244,   194,  1384,  1056,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,  1385,   180,
     588, -2544, -2544, -2544,  1387, -2544, -2544, -2544, -2544,  1302,
   -2544,  1400,  1405,  1325,  1413, -2544,  1415, -2544,  1419,  1343,
    1428,   533,   525,   595,   572,   597,  1430,   615, -2544, -2544,
    1431,  1432,  1435, -2544, -2544,  1436, -2544, -2544, -2544, -2544,
    1438, -2544, -2544,  1439, -2544, -2544,  1440, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544,   194,   194, -2544,   194,   963,   194,
     194, -2544,   658, -2544,   965,  1442, -2544,  1124,  1444, -2544,
   -2544,   -41,   194,   194, -2544,  1443, -2544, -2544,  1456,  1232,
     194,  1452,   172, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544,  1461,  1463,   194,
     194,   194,  1464,   342,  1465,  1467,  1056,  4716, -2544, -2544,
   -2544, -2544, -2544,  1056, -2544, -2544,   194,   194,   194,  4716,
     194,  1244,   194, -2544,   194, -2544, -2544, -2544, -2544, -2544,
    1468,  1471, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544,   504, -2544,   194, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544,  4716,   194,  1056,  1056,
     -41,   -41,   -41,  1056,  1244,   194,  1056, -2544, -2544, -2544,
     194, -2544,   -27,  1312,  1477,  1481, -2544, -2544,  1056, -2544,
    1313,  1328, -2544,  1482,  1479,  1491,  1159,   194,  4412,   671,
     791, -2544, -2544, -2544,   194,   188,  1028, -2544,  1230, -2544,
    1489,  1234,   225,  1207,   108, -2544, -2544,   194, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,   194,  1494,
   -2544, -2544, -2544,   -41, -2544, -2544, -2544, -2544, -2544,  4596,
   -2544, -2544,  1497,  1499,   194,  1503,  1518,  1519,   -23,   -23,
    -101,  1525,  1526,  1527,  1533,  1267,  1270,  1542,  1543,  1546,
     106,   106,  -101,  1550,  1551,  -101,  1557,  1559,  4560,  1561,
    1563, -2544, -2544,  1564,  1566,   473, -2544,  1568,  1569,  1570,
    1571,   -23,  -101,  1573,  1574, -2544,  1575, -2544, -2544,  1056,
     941,  1390,  1321,   -15,  1332,  1474,  1144,   369,  1578,   -10,
    1437,  1478,  1326,  1304,  1547,   374,  1346,  1484,  1589,  1382,
       5,    91,  -118,    42,  4716,  1489,  1560,   -51,  1353,  1383,
    1601,    79, -2544, -2544,    60,  1603,  1606, -2544, -2544, -2544,
    1607,  1399,   185,  1489,  1401, -2544, -2544, -2544,   342,  1611,
    1616,   194, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544,     4, -2544,  1804, -2544,   194, -2544,   194, -2544, -2544,
   -2544, -2544,   194,   194,   194,   363,  4716, -2544,  1628,  1161,
   -2544, -2544,   194, -2544, -2544,   194,  4716,   194, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544,   342,   194, -2544,   194,   363,  1631, -2544,   194,
     194, -2544,   342, -2544, -2544, -2544,   155,  1633,  1637, -2544,
   -2544, -2544, -2544, -2544,   194,   194, -2544, -2544,  1244,   194,
     194, -2544, -2544, -2544, -2544,  1640,   194, -2544,   194,  1532,
   -2544,   194, -2544,   194,  1534, -2544,  1642, -2544,   843,   843,
     645,   843,  1646, -2544,   656, -2544, -2544,  1647,  1650,   659,
    1652, -2544,  1653,  1654,  1656, -2544,   733,   774,  1657,  1658,
    1664, -2544, -2544,  1666,  1669,  1665, -2544,   843,   843,   843,
     194, -2544, -2544, -2544,   194, -2544,   194,   685,  4716, -2544,
     194, -2544,  3996,  1056, -2544, -2544,  1671, -2544, -2544,  1672,
   -2544, -2544, -2544, -2544,  1645,  3685, -2544,   194,  1667,   194,
     194,   194,  1157, -2544,  1674,  1677,   194,   194,   -17,  1673,
     342,   342, -2544,  1056,   194,  1678,  1679,  1682,  1056,  4716,
   -2544,   194, -2544, -2544, -2544,   194,   194,   194,  1056,  4716,
     -41, -2544, -2544, -2544, -2544,  1244,   194,  1685,   -41,   194,
    1655,  1659,    47, -2544,  1689, -2544, -2544,  1072,  3742,   194,
   -2544,   194,  1696,  1702,   194, -2544,  1698,   947,  4473,  1462,
     394,  1466,   100,  4716,   439, -2544,   204,  1572,   116,   466,
    1469,   145, -2544, -2544,    33,  1535,   -84,  1584,   853,  1489,
     904, -2544,  1705,  1458, -2544,   883, -2544, -2544, -2544, -2544,
    1489,  1501, -2544, -2544, -2544, -2544, -2544,   194, -2544,   194,
   -2544, -2544,   194,   194, -2544,   194, -2544,   194, -2544, -2544,
   -2544, -2544,  1516,   194, -2544,   194,   154, -2544, -2544,  1712,
    1713, -2544,   194,   -23,   -23,   -23, -2544, -2544, -2544, -2544,
   -2544, -2544,  1714,   -23,   -23,   -23,   612, -2544, -2544,   106,
     -23,   -23,   -23, -2544, -2544,   -23,   -23,  1715,   -23,   -23,
    1717,   106,   810, -2544,  1719,  1720,  1726, -2544,   536, -2544,
     778,   815, -2544,  1006, -2544,  1446,  1730,  1732,  1733,   106,
     106,  -101,  1739,  1740,  -101,  1741,  1743,  1746,   -23,   -23,
   -2544,  1747,   -23,   -23, -2544,  1751, -2544, -2544, -2544, -2544,
   -2544, -2544,   342, -2544, -2544, -2544,  4473,   913,   342,   194,
     924,  1294,   484, -2544, -2544, -2544,   760, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,  1752,
     342,   194, -2544,   342,  1754,   194,  4716,   342,  1422,  1510,
    1521,   198,   201,  1522,   202,  1447,  1448,  1762,  1763,  1772,
    1144,  1773,  1774,  1775,  1470,  1473,  1191,  1776,   342,   194,
    1266,  1455, -2544, -2544,   342,  4716, -2544, -2544,  4716,   194,
      53,  1777,   342,   194,  1056,   342, -2544,  1779,  4716,  4716,
     194, -2544, -2544, -2544,   342,   342,  4716, -2544, -2544, -2544,
   -2544, -2544, -2544,  4716,   194,   342, -2544, -2544, -2544,   194,
   -2544, -2544,  1782,   194,  1517,   190,   194,  1554,   194,   251,
     194, -2544,   194,  1562,  1565,   194,   194,   194,   194,   194,
     194,   194,   194,    39,   194,   194,  1567, -2544,   194,   194,
     194,   194, -2544,  4716,  1056,  1786,  4716,  4716,   194,   194,
    1056, -2544,   194,   194,   194,  4716, -2544,   194,   194, -2544,
   -2544, -2544,  1787, -2544, -2544, -2544, -2544, -2544, -2544,  1790,
     194,   194, -2544,   194,   194, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544,  1791,  1792,  1794, -2544, -2544,   843,
    1796,  1797,  1799, -2544,  1800,  1801,  1802,  1803,  1805, -2544,
    1806, -2544, -2544, -2544,  1807,  1808,  1810, -2544,  1812,  1814,
    1811, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544,   194,   194,   194, -2544, -2544,   194,  1056, -2544, -2544,
   -2544,  3685,   194,  1056,   194,   194,   194, -2544,   194,   194,
    1815,   194,  1817,  1816,   194,   194, -2544, -2544,  1819,  4716,
   -2544, -2544, -2544,   194, -2544, -2544, -2544, -2544,  1056, -2544,
    1086,   194,  1086,   -41,  1056,  4716,   194,   194,  1820, -2544,
   -2544, -2544, -2544, -2544,   194, -2544, -2544, -2544, -2544, -2544,
    4716, -2544,  4716,   194,  1824, -2544, -2544,  1827,  1830,  1833,
    1834,  1837,  4716,  1056, -2544,  4716, -2544,  4716,  4716,  4473,
    4716,  1056, -2544,  4716, -2544, -2544,  4716, -2544, -2544,  4473,
    4716, -2544,  4716,  4716,  4473,  4716, -2544,  4716,  4716,   194,
   -2544, -2544, -2544,  4716,  4716,  4716, -2544, -2544,  4716,  4716,
   -2544, -2544, -2544, -2544,  4716,  4716, -2544, -2544, -2544, -2544,
   -2544,   194,   194, -2544, -2544,  1825,   194, -2544, -2544,  1838,
    1840, -2544,   194, -2544, -2544, -2544,   -23, -2544, -2544, -2544,
    1842,  1844,  1846, -2544, -2544,  -101,  1841,  1848,  1850,   -23,
   -2544, -2544, -2544, -2544, -2544,   106, -2544, -2544,  1854,   -23,
    1855,  1856,  1857,   106,   106,  -101,  1859,  1860,  1861,  1094,
   -2544,  1143, -2544,  1356,  1530,  1863,  1873,  1877,   106,   106,
    -101,  1879,  1880,  -101,  1881,  1583,  1883,  1884,  1886,   106,
     106,  -101,  1888,  1890,  -101,  1891,  1609,  1892,  1893,  1894,
     106,   106,  -101,  1896,  1897,  -101,  1898,  1899,  1900,  1902,
     106,   106,  -101,  1905,  1906,  1909,   106, -2544, -2544, -2544,
   -2544, -2544,  1907, -2544, -2544,  1913,   106,  1916,  1917, -2544,
   -2544,   -23, -2544, -2544,  1918, -2544,  1056, -2544,  4716,   194,
   -2544,   194,  4716,   194,  1919,  1390, -2544, -2544, -2544, -2544,
   -2544, -2544,  1920, -2544,  4716,   342,  1921,  4716,  1056, -2544,
    1932,  1390,   194,   194,   194,   194,   194,   194,   194,   194,
     194,  1934,  1949, -2544, -2544, -2544,  1954, -2544, -2544, -2544,
    1956,  1958, -2544, -2544, -2544, -2544,   194,  4716,   194,  1959,
    1390,   342,  1056,  1056, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544,   194,  1244, -2544, -2544,  1056,
    1056,   194, -2544, -2544,  1056,  1056, -2544, -2544, -2544, -2544,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
    1536, -2544,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,  3109,  1960,   194, -2544,   194,   194,   194,
    1963,  1967, -2544, -2544,  1056,   -41,  1968,  1056,  1056, -2544,
   -2544,  1244,   194, -2544,  1969,  1056, -2544, -2544, -2544,  1971,
   -2544, -2544, -2544, -2544,   843,   843,   843, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544,  1390,   194, -2544,   194, -2544,   194,  1056,
     194, -2544,  1244,   194, -2544,   194, -2544,  1853,  1972,  1973,
   -2544,  1976,   194,   194,  1977,  1056,  4716, -2544, -2544,   194,
   -2544,   194, -2544,   -41,  1072,   194,  1978, -2544,   194, -2544,
   -2544,    20, -2544,  1980,  1981,  1982,  1983,  1985,  1056, -2544,
    1072,  1072,  1072,  1056, -2544,  1072,   -41,  1072,  1072,  1056,
   -2544,  1072,  1072,  1072,  1056, -2544,  1072,  1072,  1056,  4716,
    1072,  1056,  1072,  1072,  1056,  1072,  1056, -2544, -2544,  1987,
      20,  1988, -2544,   194, -2544, -2544, -2544, -2544,  1990, -2544,
   -2544, -2544, -2544,   -23,   106, -2544, -2544, -2544, -2544, -2544,
   -2544,  1991, -2544, -2544,   106,  1992,  1993,  1994,   106,   106,
    -101,  1996,  1998,  2001,  2003,  2006,  2008,   106,   106,  -101,
    2010,  2011,  2012,  2013,  2016,  2017,   106,   106,  -101,  2019,
    2021,  2022,   106,   -23,   -23,   -23,   -23,   -23,  2026,   -23,
     -23,  2027,   106,   106,   -23,   -23,   -23,   -23,   -23,  2029,
     -23,   -23,  2033,   106,   106, -2544, -2544, -2544, -2544, -2544,
    2034, -2544, -2544,  2038,   106, -2544, -2544, -2544, -2544, -2544,
    2039, -2544, -2544,   106, -2544,   106,  2040, -2544,  2041,  2042,
   -2544,  3996, -2544,  1072,  2043,  4716,  1072,   194,  4716,  2044,
   -2544,  1072, -2544, -2544,  1072, -2544,  4716,  2045,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194, -2544,
   -2544, -2544,  4716,  1072,   194,  4716,  2047, -2544,  1244,  1244,
    4716,  1244,  1244,  4716,  4716,  1244,  1244,   194,   194,   194,
     194,   194,   194,  1390,   194,   194,   194,  1454,  1619,  1625,
    1639,  1695,  1699,  1701,  1536, -2544,  1703, -2544, -2544,  1390,
     194,   194,   194,   194,  1390,   194,   194,   194,   194,   194,
     194,  1056,   194,  1613,  1390,   194,   194, -2544, -2544,   -41,
     342,  2049,  2051, -2544, -2544, -2544, -2544, -2544,   -41,  2055,
   -2544, -2544, -2544, -2544,   194, -2544, -2544,  1244,   194, -2544,
   -2544, -2544,  1166,  2057,  2058, -2544,   194,  2061,  1086, -2544,
    1072, -2544, -2544, -2544, -2544,  2063, -2544, -2544,  2062,  2064,
    2066,  2067,  4716,  2068, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
     -41,  1072, -2544,   -41, -2544, -2544,   -41, -2544,   -41,  2069,
    2071, -2544,   194, -2544, -2544,   -23,   106, -2544,   -23,   -23,
     -23,   -23,   -23,  2072,   -23,   -23,   106,   -23,   -23,   -23,
     -23,   -23,  2073,   -23,   -23,   106,   -23,   -23,   -23,   -23,
     -23,  2074,   -23,   -23,   106,   -23, -2544, -2544, -2544, -2544,
   -2544,   106, -2544, -2544,  2075,   -23,   -23, -2544, -2544, -2544,
   -2544, -2544,   106, -2544, -2544,  2077,   -23, -2544,   106,  2078,
   -2544,   106, -2544, -2544,   106, -2544, -2544,  1056, -2544,  4716,
    1072, -2544,  2079,  1056,   194, -2544, -2544,  1056,   194, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,   194,   194,
    1072, -2544,  2080,  1056,   194,  1244, -2544,  1072,   194,  1244,
    1072,  1072,  4716, -2544,   194,  2081,  2081,   194,   194,  2081,
    1390,  2081, -2544,  4716,  1144,  2082,  2084,  2086,  2087,  2088,
    2085, -2544,   342,  1390,  2081,  2081,   194,   194,  1390,   194,
     194,   194,   194,   194, -2544,  1244,   194,  2091, -2544, -2544,
     194,  2081,   342,    23, -2544,  2092,   342,  2095, -2544, -2544,
   -2544,  2096,   194, -2544,  2097,  2099,  1957,   194, -2544, -2544,
       6,  4716, -2544,  2101,    16,  4716, -2544, -2544, -2544, -2544,
   -2544, -2544,     6,   194, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544,   106, -2544, -2544,   -23, -2544, -2544, -2544, -2544, -2544,
     106, -2544, -2544,   -23, -2544, -2544, -2544, -2544, -2544,   106,
   -2544, -2544,   -23, -2544,   -23,   106, -2544, -2544,   -23,   106,
   -2544, -2544,   106, -2544, -2544,   194,  1072, -2544,  4716,  4716,
     194,  4716,   194, -2544, -2544, -2544,  4716,  4716,   194, -2544,
   -2544,  4716, -2544, -2544, -2544,  1072,  2100, -2544, -2544, -2544,
    1390,   194, -2544,  2103, -2544, -2544,  1056,  2104, -2544,  2106,
   -2544, -2544, -2544, -2544, -2544,  2107, -2544, -2544,  1390,   194,
    2108, -2544, -2544,   194,  4716, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544,    23,  1727,  1489, -2544, -2544,  2109,  2113,  2114,
   -2544,  2018,  2116,   115, -2544, -2544, -2544,  2117,  4716, -2544,
   -2544, -2544, -2544, -2544,  2118,   -23, -2544,   -23, -2544,   -23,
   -2544, -2544,   -23, -2544,   -23, -2544,  3996, -2544,  1072,  1072,
     194,  1072,  2120,  1072,  1072,   194,  1072,   194, -2544, -2544,
   -2544, -2544,  2121, -2544,   194, -2544, -2544,  2122, -2544,   194,
   -2544, -2544, -2544,  2124,   194, -2544, -2544, -2544,  1056, -2544,
   -2544, -2544,  1727, -2544,  1843,  1729,  1489, -2544, -2544,  2125,
    2126,  2129, -2544, -2544, -2544, -2544,   605,   605, -2544,  1056,
   -2544, -2544, -2544, -2544, -2544, -2544,  1072, -2544, -2544,  2131,
   -2544,  4473, -2544, -2544,  2132, -2544,  1390, -2544, -2544,  1390,
     194, -2544, -2544,   194, -2544,  1390,   194, -2544,  4716, -2544,
    1843, -2544,   342, -2544,  2133,  2134, -2544,   194,   194,   194,
     194,    16,  2135,  4473,  1056, -2544,  4473, -2544, -2544,   194,
    2137, -2544,   194,  1072, -2544, -2544, -2544,  2138,  2139,   194,
    2140,   194, -2544, -2544,  1056, -2544, -2544,  1056, -2544, -2544,
    2143, -2544, -2544,  2144,  2145, -2544, -2544,  2147, -2544,  2148,
   -2544, -2544,  1390, -2544,  1390, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2544, -2544,    -3, -2544,   290, -2544, -1633,  -898,  1644, -2544,
     812,  -385,  1165,   -47,   285, -2544, -2544, -1646,  1744,  1449,
    -855,  1558,  -860,  1129,  1195, -2544, -1157, -2544,  -633, -1138,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544,  -494,  -483, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544,  -375, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -1448, -2544, -2544, -2544, -2544, -2544,  -641, -2544,
   -2544, -2544, -2544, -2544, -2544,   389, -2544, -2544, -2544, -2544,
    -102,  -657, -1713,  -463, -2544, -2544, -2544, -2544,  -530,  -525,
   -2544, -2544, -2543, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544,  1418, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1240
static const yytype_int16 yytable[] =
{
      67,   864,  1886,   350,  2029,   106,  2031,   893,   104,  1501,
    1102,  1573,   637,  1578,   684,   899,   784,  1433,    64,    65,
     371,  1076,  1079, -1089,  1115,  1242,  1243,  1244,   787,   290,
    1636,   308,  1464,   106,   294,   405,   889,   314,  2624,  1608,
    1609,  1610,    64,    65,  1953,  1106,   344,  1071,  2629,   355,
     620,  1663,   362,    64,    65,   843,   368,   584,  1200,   375,
    1706,   106,   256,   378,   380,   846,  1340,   390,   760,   410,
     397,   401,    64,    65,   404,    64,    65,   109,   408,   322,
    1905,  1477,   547,   409,  1483,   989,  1081,  1485,  1326,   109,
    1082,    64,    65,  1108,    64,    65,   422,   426,   431,   432,
     436,   438,  1906,  1406,   109,  1907,    64,    65,  1408,  1250,
      64,    65,  1357,    64,    65,  1360,  1908,   442,    64,    65,
    1116,  1689,   111,  1353,   257,  1321,  1117,  1466,    99,   323,
      64,    65,  1391,   990,   109,   769,  1336,  1699,   324,  1909,
      55,  2731,   538,   548,   869,   900,   258,   419,   100,  1470,
     111,   215,   451,   850,    64,    65,  1471,  1910,   853,  1434,
    1550,   106,   358,  1083,  1337,  1472,  1704,   325,   216,  1341,
     490,   894,  1551,   420,  1737,   483,  1211,  1478,   111,   491,
     504,   106,    56,  1710,  1212,  1084,    54,  2754,    64,    65,
    1711,    64,    65,    64,    65,    64,    65,    64,    65,   259,
      57,   101,   594,  1707,   800,   476,   114,   106,  1322,   870,
     685,   477,   823,   824,   115,   116,   854,   686,   687,  1874,
    1136,  1491,  1876,  1879,  1251,  1201,  1467,  1409,    64,    65,
      58,  1694,  1435,  1465,   114,   539,  1479,   173,   851,   117,
     585,   618,   115,   116,   763,  1072,   595,  1085,    59,   709,
     478,   117,    60,   688,    64,    65,   309,   644,   645,   386,
    1637,  1708,   114,  1314,   991,    61,   117,  1354,   565,   312,
     115,   116,   381,   691,   372,   693,   479,  1436,   111,   310,
     106,   406,   638,   695,   698,   102,   701,   705,  1486,   707,
    1473,  1109,  2625,  1137,   411,   621,   117,   966,   111,   717,
     359,   119,  2630,   785,   159,  2693,   967,   968,   901,   727,
     729,   237, -1089,  1502,   770,   788,   262,   292,   611,   895,
    1492,  1131,   480,   297,   111,  1118,    76,   326,  1073,   119,
    1107,  1484,   772,   773,   775,   295,   777,    64,    65,   992,
     780,   781,  1690,   766,   360,   296,   106,  1086,  1954,   993,
     149,   793,   795,   596,   969,   150,   151,   119,  1700,   796,
     689,   392,   114,   260,   799,   801,   481,   482,  1475,   313,
     115,   116,   802,  1695,  1110,   803,   387,  1138,   149,   774,
     994,   103,   114,   150,   151,  1655,  1495,  1705,  1468,   569,
     115,   116,  1738,  1659,   813,   814,   266,   111,   441,  1308,
      66,   818,   819,   820,   343,   821,   149,   354,   114,  1911,
     261,   150,   151,   398,   955,   956,   115,   116,  1932,   828,
     388,   389,  2694,   829,   367,    62,   307,  1054,   834,   835,
     836,   837,   838,   839,  1533,   840,  1316,   426,   844,   845,
    1875,  1987,  1054,  1877,  1880,   625,  1696,   426,   847,  1139,
     453,   454,   455,   456,   457,   458,  1230,   119,   459,   460,
     461,   462,   957,   111,   382,  1545,   481,  2695,   505,  1055,
     513,   267,   518,   522,    64,    65,   616,   119,  1375,  1937,
     549,   114,  1493,   731,  1055,   970,   971,  1376,  1377,   115,
     116,  1697,  1430,   566,  1112,   582,   157,  1458,   756,  1246,
     719,   876,   877,   119,  1078,   570,   149,    64,    65,   399,
     612,   150,   151,  1855,   983,   383,   567,  1686,   246,   885,
     254,  1832,   384,   272,  1835,   264,   149,   908,   909,    64,
      65,   150,   151,   304,   330,  1378,   160,   804,   942,   161,
    1871,  1784,   273,   732,   274,   331,   907,   114,   642,   643,
    1785,  1786,   149,   750,   339,   115,   116,   150,   151,   626,
     972,   109,  1692,  1900,    77,    64,    65,   268,   710,   162,
     973,   974,   332,   757,   703,   975,   119,   163,   700,   938,
     980,   280,   269,   306,   910,   984,   552,  1157,   400,  1701,
     911,  1856,   617,   958,   959,   738,   374,    83,  1787,   999,
      78,   976,  1056,   805,   711,    64,    65,   329,    64,    65,
     571,  1431,   720,   751,   352,   954,  1459,  1056,  1057,  1058,
    1047,   761,   764,   767,   357,   149,  1750,  1751,  1141,   553,
     150,   151,  1716,  1057,  1058,   627,  1687,   164,   364,   912,
     572,   998,   119,  1726,   299,   270,  1048,  1158,   365,   333,
     554,   377,  2497,   366,   913,   740,   712,  1162,  1074,  1168,
    1166,  1087,   275,   413,  1192,   555,  1379,  1380,   960,   914,
     758,   733,   806,    79,  1752,   915,   340,  1173,   961,   962,
     916,  1693,  1857,   370,  1159, -1239,   334,   165,  1122,  1614,
     628,   149,  1123,  1124,  1125,  1126,   150,   151,  1127,   734,
    1129,  1142,  1130,   426,  1132,   166,   167,  1574,  1702,   963,
    1059,  1060,   168,   403,   169,   629,   393,  1163,  1580,  1169,
     276,  1586,    84,   117,   842,  1059,  1060,   792,   415,  1788,
    1789,  1167,   861,   417,   917,  1193,  1858,  1174,  1297,  2585,
     439,  1381,   170,  1556,   300,    85,   861,   857,   452,    86,
    1065,  1382,  1383,   918,   394,   335,  1384,    80,   919,   341,
     920,   807,   396,   713,   277,  2609,   808,  1575,   556,   752,
     862,  1184,  1185,   278,  1186,  1188,  1190,  1191,  1581,  1049,
     463,  1587,  1385,  1795,   862,  1143,   921,   922,   464,  1203,
    1204,   336,  1796,  1797,   923,  1594,  1208,  1209,  2032,    64,
      65,    87,  1298,  1160,  1790,  1753,  1754,   337,   171,   474,
      81,   746,   924,   890,  1791,  1792,  1215,  1216,  1217,  1793,
    1806,  1302,   301,  1066,  1770,  1771,   557,   486,  1299,  1807,
    1808,   302,  1050,  1225,  1226,  1227,  1598,  1229,   426,  1231,
    1798,  1232,    88,   858,   488,  1794,  2280,  2281,  2282,   927,
      89,    90,   515,  1103,   541,  1595,   361,  1144,  1051,  1054,
    1656,   542,  1235,   551,  1237,  2659,  2660,  1859,   925,  2663,
     558,  2665,  1772,  1164,  1239,  1170,   561,  1809,   564,   559,
    1755,   426,  1247,  2670,  2671,  1567,  1568,  1249,  2675,  2676,
    1756,  1757,  2679,  1175,   583,  2088,  1599,  2680,  2681,   281,
     562,  1055,   950,  1264,  1266,    64,    65,  1067,  1300,   589,
    1723,  1307,  1309,  1312,   238,  2101,    64,    65,  1848,  1317,
     592,  1758,   859,  1576,  1323,   574,  1104,    64,    65,  1852,
    2138,  1366,   631,  2141,  1582,  1324,   575,  1588,   590,   543,
     614,  2149,   433,   239,  2152,  2717,   678,  2661,  2718,   615,
     632,  1332,  2160,  2721,  1303,  2163,  1090,  2189,  1860,  2724,
    1301,  1113,  2170,   576,  2727,  2672,    64,  1187,   598,  1194,
    1195,  1799,  1800,  2197,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,  2216,  1773,  1774,   619,  2587,  1304,  1810,  1811,
    1105,  1596,  1861,   240,   623,   434,  1569,  1570,  1469,   635,
    1817,  1818,   544,  1713,  1396,   640,   679,   633,   241,   641,
    1677,    64,    65,  1305,  1056,  2769,  1717,   599,  2772,  1494,
     577,   282,   646,    93,  1571,  1311,  1801,   283,  1500,   284,
    1057,  1058,  1600,  1724,   683,   545,  1802,  1803,  2783,  1075,
      94,  1804,  1528,   694,  1529,   708,    64,    65,  1819,  1530,
    1531,  1532,  2790,   715,  1718,  2791,  2792,   578,  1775,  1538,
     600,  1714,  1539,  1812,  1541,   716,  2748,  1805,  1776,  1777,
     242,   443,  2751,  1813,  1814,  1397,  1666,  1667,  1815,   435,
    1543,  1678,  1544,   696,   718,  2283,  1547,  1548,  2105,  2106,
    2270,  1725,   722,  1219,    83,   524,   680,   724,   601,  1778,
     736,  1554,  1555,   754,  1816,   426,  1557,  1558,  1197,  1198,
     525,   243,  1719,  1560,   681,  1561,   755,    95,  1563,   730,
    1564,   244,  1059,  1060,   778,  1617,   579,   798,  1715,  2788,
    1236,  2789,   526,    64,    65,   779,  2107,  2114,  2115,   782,
      64,    65,    64,  1263,   444,  1536,  1537,  1398,  1399,    64,
      65,  1668,   527,  1679,  1680,   790,   697,  1611,  2303,   797,
      96,  1612,  1400,  1613,  1412,   445,   446,  1616,  1681,   528,
     725,  1720,   529,   247,   447,  1892,  1893,   291,   580,  1820,
    1821,  2320,  1622,   811,  1625,  2116,  1627,  1628,  1629,  1631,
     812,  1413,   448,  1634,  1635,  1036,    97,  1630,   815,   530,
     531,  1643,   449,   816,   817,  1401,  2491,   822,  1649,  1037,
     825,  1682,  1650,  1651,  1652,    64,    65,   423,  1038,    84,
     831,   832,   426,  1657,  1207,  1414,  1660,    64,    65,  1039,
    2353,  1415,   827,   423,   424,   425,  1672,  1416,  1673,  2362,
     425,  1675,    85,   726,   848,   849,  2028,   856,  2371,    64,
      65,  1897,   532,   872,  1822,  1417,   865,   867,   440,  1040,
     874,   248,   533,   887,  1823,  1824,   892,  2108,  2109,  2579,
     897,   903,  2582,   249,  2584,   316,  1418,    64,    65,  1854,
    1041,  1403,  1404,   905,  1728,   904,  1729,  2596,  2597,  1730,
    1731,  1419,  1732,   906,  1733,  1825,   928,   929,    87,   930,
    1735,   932,  1736,   934,  2611,   936,  1447,   939,   250,  1742,
     940,   964,   944,   949,   951,  2450,  2117,  2118,  1497,   952,
     953,   965,  1420,   977,   534,   535,  1042,   502,  1439,   509,
     512,  2463,   517,   521,  1448,   985,  2468,  1449,   987,    88,
    1450,   988,  2110,   995,   996,   997,  1062,    89,    90,  1053,
    2123,  2124,  2111,  2112,  1069,  1121,  1440,   251,  1070,  1441,
     587,  1421,  1064,   317,  1119,  1043,  1120,  1451,  1133,  1135,
     252,  1146,  1542,    64,    65,   318,  1422,  1403,  1404,   603,
     609,  1147,  1549,  2113,  1849,  1148,  1851,  1853,  1423,  1442,
    1149,  2119,  1044,  1150,  2482,   536,  1452,  1151,  2125,  1453,
    1152,  2120,  2121,  2486,  1153,    64,    65,  1870,  1864,  1403,
    1404,  1154,  1867,  1155,  1172,  1424,  1177,  1178,  1443,  1179,
    1180,  1444,   692,  1181,  1182,  1183,  1196,  1425,  1199,  1426,
    1427,  1045,  2122,  1046,   702,  1205,  1896,  1898,    64,    65,
    1899,  1206,  1403,  1404,  1210,  1213,  1904,  1214,  1218,  1220,
    1915,  1221,  1258,  1233,   723,  2506,  1234,  1921,  2508,   319,
    1254,  2509,  1255,  2510,  1261,  1256,  1260,  1259,    69,  1428,
    1624,  1926,   320,  1313,    70,  1262,  1928,  1315,  1319,  1325,
    1930,  1329,  1933,  1934,  1330,  1936,  1938,  1939,  1333,  1942,
    1640,  1641,  1945,  1946,  1947,  1948,  1949,  1950,  1951,  1952,
    1955,  1957,  1958,  1334,  1335,  1960,  1961,  1962,  1963,  1343,
    1344,  2221,  1345,    71,  1454,  1969,  1970,  1664,  1346,  1972,
    1973,  1974,   738,  1348,  1976,  1977,  1349,  1350,  1351,  2126,
    2127,  1352,  2583,  1684,  1358,  1359,  1445,  1980,  1981,    72,
    1982,  1983,  1361,  1407,  1362,  2595,  1368,  1455,  1370,  1371,
    2600,  1373,  1386,  1387,  1410,  1388,  1389,  1392,  1437,  1393,
    1394,  1411,  1091,  1432,   826,  1438,  2275,  1457,  1460,  1446,
    1092,  1461,  2237,  1456,  1462,   833,  1093,  1463,  1481,   739,
    1476,  1480,   740,  2238,   841,    73,  1482,  1487,  2003,  2004,
    2005,  1488,  1489,  2006,  1490,  1498,  1496,  1094,  2008,  2011,
    1499,  2013,  2014,  2015,  2128,  2016,  2017,  2289,  2019,  1091,
    2239,  2022,  2023,  1535,  2129,  2130,  1546,  1092,  1552,   741,
    2026,  1095,  1553,  1093,  1559,  1562,  1566,  1565,  2030,  1096,
      74,  1579,  1584,  2035,  2036,  1585,  1590,  1621,  1591,  1592,
    1593,  2038,  1602,  1603,  1094,  2131,   465,  2240,  1604,  1607,
    2041,  1605,   878,   879,  1606,   742,  1619,  1620,  1639,  1626,
    1632,  1633,  1644,  1645,   466,   883,  1646,  1097,  1095,  1658,
     886,  1847,  1845,  1661,  1665,  1098,  1096,  1662,  1850,   898,
    1674,   467,  -445,  1676,  1685,  1709,  2069,  1712,  1688,  1721,
    1722,  1703,  1727,  1698,   468,  1734,  1740,  1741,  1746,  1765,
    1863,  1768,  1826,  1865,  1779,  1781,   743,  1869,  2077,  2078,
     744,  1783,   469,  2080,  1097,  1827,   470,  1828,  1829,  2083,
     706,  1099,  1098,  1833,  1834,  1931,  1836,  1837,  1895,   471,
    1838,  1841,  1872,  1100,  1901,   745,  1844,  1862,   746,  1866,
    1881,  1882,  1914,  1873,  1878,  1917,  1883,  1884,   747,  1101,
     945,   946,   947,   948,  1922,  1923,  1885,  1887,  1888,  1889,
    1894,  1913,  1935,  1890,  1918,  1927,  1891,  1929,  1099,   472,
    1943,  1966,  1978,  1944,  1979,  1959,  1984,  1985,  1986,   791,
    1100,  1988,  1989,  1990,  1991,  1992,  2132,  1993,  1994,  1995,
    1996,  2454,  1997,  1998,  1999,  2002,  1101,  2000,  2747,  2001,
    2018,  2020,  2021,  2024,  2037,  2241,  1503,  2242,  2042,  2079,
    1089,  1504,  2043,  2435,  2436,  2044,  2438,  2439,  2045,  2046,
    2442,  2443,  2047,  2081,  2082,  2089,  2184,  2085,  2185,  2086,
    2187,  2087,  2090,  1505,  1506,  2091,  1507,  1508,  2094,  2143,
    2096,  2097,  2098,  2102,  2103,  2292,  2104,  1509,  2133,  2198,
    2199,  2200,  2201,  2202,  2203,  2204,  2205,  2206,  2134,  1510,
    1511,  2243,  2135,  2139,  2140,  2154,  2142,  1512,  2144,  2145,
    1513,  2146,  2150,  2212,  2151,  2214,  2153,  2155,  2156,  2157,
    2161,  2162,  2489,  2164,  2165,  2166,  2010,  2167,  1514,  2171,
    2172,  2175,  2220,   426,  2173,  1515,  1516,  2176,  2224,  1517,
    2178,  2179,  2477,  2181,  2188,  2190,  2193,  2227,  2228,  2229,
    2230,  2231,  2232,  2233,  2234,  2235,  2236,  2196,  2207,  2249,
    2250,  2251,  2252,  2253,  2254,  2255,  2256,  2257,  2258,  2259,
    2260,   875,  2263,  2208,  2264,  2265,  2266,  2685,   880,  2209,
    2210,   881,  2211,  2622,  2215,  2262,   882,  2267,   426,  2276,
     884,  2268,  2271,  2277,  2054,  2279,  2455,  2293,  2294,  1518,
    2295,  2298,  2456,  2306,  2060,  2309,  2310,  2311,  2312,  2065,
    2313,  2339,  1223,  2341,  2343,  2346,  2457,  2348,  2349,  2350,
    2354,  2284,  2355,  2285,  1228,  2286,  2356,  2288,  2357,   426,
    2290,  2358,  2291,  2359,  2363,  2364, -1102,  2365,  2366,  2296,
    2297,  2367,  2368,  2372,  2691,  2373,  2301,  2374,  2302,  2685,
    2381,  2384,  2305,  2392,  1519,  2307,   943,  2395,  2398,   218,
    1520,  1238,  2399,  2401,  2404,  2405,  2406,  2409,  2414,  2418,
    2569,  2434,  2458,  2484,  2572,  2485,  2459,  1521,  2460,  2487,
    2462,   219,  2493,  2494,   220,  2496,  2500,  1522,  2499,  2501,
    2502,   830,  2503,  2505,  2511,  2512,  2521,  2530,  2539,  2545,
    2342,  2549,  2552,  2558,  2566,  2577,  2732,  2588,  2589,  2593,
    2606,  2590,  2591,  2592,  1523,  1524,  2608,  2615,   221,  2617,
    1356,  2618,  2620,  2621,  2658,   222,  2628,  2664,  2762,  2667,
    2668,  2669,  2674,  2688,  1328,  1525,   223,   224,  2689,  2690,
    2692,  2698,  2700,   225,  2711,  2719,   810,  2722,  2725,  2697,
    2734,  2735,  2241,  2736,  2407,  2743,  2746,  2633,  2756,  2757,
    2763,  2771,  2461,  2775,  2776,  2778,   226,  2782,  2784,  2682,
    2785,  1128,  2786,  2787,  1339,  2192,  2733,  2729,  1134,  1156,
    1526,     0,     0,     0,   227,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   228,   229,
       0,     0,     0,     0,  2412,   230,  1390,     0,     0,  1474,
       0,  2217,     0,     0,     0,  2419,  2420,  2421,  2422,  2423,
    2424,  2425,  2426,  2427,  2428,  2429,   231,     0,     0,     0,
       0,  2432,     0,  2738,  2740,   426,   426,     0,   426,   426,
       0,     0,   426,   426,  2444,  2445,  2446,  2447,  2448,  2449,
       0,  2451,  2452,  2453,     0,     0,     0,     0,     0,     0,
       0,  1534,     0,     0,   232,     0,     0,  2464,  2465,  2466,
    2467,  1540,  2469,  2470,  2471,  2472,  2473,  2474,     0,  2476,
       0,     0,  2480,  2481,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1222,     0,     0,     0,     0,
       0,  2488,  1224,     0,   426,  2490,     0,     0,     0,  2492,
       0,     0,     0,  2495,     0,     0,     0,   233,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   234,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2308,  1240,  1241,     0,
       0,     0,  1245,     0,     0,  1248,   235,     0,     0,  2513,
       0,     0,     0,     0,     0,     0,     0,  1257,     0,     0,
       0,     0,     0,  1615,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2340,     0,     0,     0,     0,
    1623,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1648,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1654,     0,     0,     0,     0,     0,
       0,  2560,     0,     0,     0,  2562,     0,     0,     0,     0,
       0,     0,     0,  1671,     0,  2563,  2564,     0,     0,     0,
       0,  2568,   426,  1683,     0,  2571,   426,     0,  1691,     0,
       0,  2576,     0,     0,  2580,  2581,     0,     0,  1395,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2598,  2599,     0,  2601,  2602,  2603,  2604,
    2605,     0,   426,  2607,     0,     0,     0,  2610,  1759,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2619,
    1769,     0,     0,     0,  2623,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1830,  1831,
    2634,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1743,  1744,
    1745,     0,     0,     0,     0,     0,     0,     0,  1747,  1748,
    1749,     0,     0,     0,     0,  1760,  1761,  1762,     0,     0,
    1763,  1764,  2646,  1766,  1767,     0,     0,  2650,     0,  2652,
    2483,     0,     0,     0,     0,  2655,     0,     0,     0,     0,
       0,  1846,     0,     0,     0,     0,     0,     0,  2662,     0,
       0,     0,     0,  1839,  1840,     0,     0,  1842,  1843,     0,
       0,     0,     0,     0,     0,     0,  2673,     0,     0,  2706,
    2677,  1868,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2696,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1902,     0,     0,  1903,     0,     0,     0,     0,     0,     0,
       0,     0,  1618,  1919,  1920,     0,     0,  2709,     0,     0,
       0,  1924,  2714,     0,  2716,     0,     0,     0,  1925,     0,
       0,  2720,     0,     0,     0,     0,  2723,     0,     0,     0,
       0,  2726,  1642,     0,     0,     0,     0,  1647,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1653,     0,     0,
       0,     0,     0,  2737,  2739,     0,     0,     0,  1964,     0,
       0,  1967,  1968,   647,   648,     0,     0,     0,     0,     0,
    1975,     0,     0,     0,     0,     0,     0,  2749,     0,     0,
    2750,     0,     0,  2752,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2758,  2759,  2760,  2761,     0,     0,
       0,     0,     0,     0,     0,     0,  2770,     0,     0,  2773,
       0,     0,  2594,     0,     0,     0,  2777,     0,  2779,     0,
     649,     0,     0,     0,     0,     0,   650,     0,     0,     0,
       0,     0,  2612,   651,     0,   652,  2616,     0,     0,     0,
     653,     0,     0,   654,     0,     0,  2009,     0,     0,   655,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     656,     0,     0,     0,  2025,     0,   657,     0,     0,     0,
       0,     0,     0,     0,     0,   658,     0,     0,     0,     0,
    2034,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     659,     0,     0,     0,     0,  2039,     0,  2040,     0,     0,
       0,     0,     0,     0,     0,   106,     0,  2048,     0,     0,
    2050,   660,  2051,  2052,  2053,  2055,     0,     0,  2057,     0,
     107,  2058,     0,     0,  2059,  2061,   661,  2062,  2063,  2064,
    2066,     0,  2067,  2068,     0,     0,   662,   663,  2070,  2071,
    2072,   108,     0,  2073,  2074,     0,     0,     0,     0,  2075,
    2076,     0,     0,     0,  2093,     0,     0,   664,   109,     0,
       0,     0,  2099,  2100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2136,  2137,     0,
     665,     0,     0,  1916,     0,     0,     0,     0,  2147,  2148,
       0,     0,     0,     0,   666,     0,   667,     0,     0,  2158,
    2159,  2084,     0,     0,   110,     0,     0,     0,     0,  2168,
    2169,   668,     0,     0,  2092,  2174,   669,     0,     0,     0,
       0,     0,   111,   670,  2095,  2177,     0,     0,     0,     0,
     671,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1965,     0,     0,     0,     0,   672,  1971,
       0,     0,     0,     0,     0,     0,  2745,     0,     0,     0,
     112,   673,   674,     0,   675,     0,     0,     0,     0,     0,
       0,     0,     0,  2183,     0,     0,     0,  2186,     0,     0,
       0,     0,  2755,     0,     0,     0,     0,     0,  2765,  2191,
       0,  2768,  2194,     0,     0,     0,  2180,     0,   113,     0,
       0,     0,     0,     0,   676,     0,   114,     0,     0,     0,
       0,     0,     0,     0,   115,   116,     0,     0,     0,     0,
     117,     0,  2213,     0,     0,   118,  2007,     0,     0,     0,
       0,     0,  2012,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2027,     0,     0,
       0,     0,     0,  2033,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    65,     0,     0,     0,     0,  2261,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   107,     0,
       0,     0,  2049,     0,     0,     0,     0,     0,     0,     0,
    2056,   119,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,     0,     0,     0,     0,
     149,  2300,     0,     0,     0,   150,   151,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   110,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2345,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2347,  2331,     0,     0,  2351,  2352,     0,
       0,     0,     0,     0,     0,     0,  2360,  2361,     0,     0,
       0,     0,     0,     0,     0,  2369,  2370,     0,     0,     0,
       0,  2375,     0,     0,     0,     0,     0,     0,   112,     0,
       0,  2385,  2386,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2396,  2397,     0,     0,     0,     0,  2344,     0,
       0,     0,     0,  2400,     0,  2182,     0,     0,     0,     0,
       0,     0,  2402,     0,  2403,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2195,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2376,  2377,
    2378,  2379,  2380,   118,  2382,  2383,     0,     0,     0,  2387,
    2388,  2389,  2390,  2391,     0,  2393,  2394,     0,     0,     0,
    2410,  2218,  2219,  2413,     0,     0,     0,     0,     0,     0,
       0,  2417,     0,     0,     0,     0,     0,     0,  2222,  2223,
       0,     0,     0,  2225,  2226,     0,     0,  2430,     0,     0,
    2433,     0,     0,     0,     0,  2437,     0,     0,  2440,  2441,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2269,     0,     0,  2273,  2274,     0,     0,
       0,     0,     0,     0,  2278,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,     0,     0,     0,     0,  2287,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2299,  2515,     0,  2504,     0,     0,
       0,     0,    64,    65,     0,  2524,     0,     0,     0,     0,
       0,     0,     0,     0,  2533,     0,     0,  2314,   107,     0,
       0,     0,  2318,  2542,     0,     0,     0,     0,  2323,     0,
    2544,     0,     0,  2327,     0,     0,     0,  2330,   286,     0,
    2333,  2548,     0,  2336,     0,  2338,     0,  2551,     0,     0,
    2553,     0,     0,  2554,     0,     0,   109,     0,     0,     0,
    2514,     0,     0,  2516,  2517,  2518,  2519,  2520,     0,  2522,
    2523,     0,  2525,  2526,  2527,  2528,  2529,     0,  2531,  2532,
       0,  2534,  2535,  2536,  2537,  2538,     0,  2540,  2541,     0,
    2543,     0,     0,     0,  2556,     0,     0,     0,     0,     0,
    2546,  2547,   110,     0,     0,     0,     0,     0,     0,     0,
       0,  2550,  2304,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2575,  2315,  2316,
    2317,     0,     0,  2319,     0,  2321,  2322,     0,  2586,  2324,
    2325,  2326,     0,     0,  2328,  2329,   520,     0,  2332,     0,
    2334,  2335,     0,  2337,     0,     0,     0,     0,   112,     0,
       0,   107,     0,     0,     0,     0,     0,     0,     0,     0,
    2635,     0,     0,     0,     0,     0,     0,     0,     0,  2637,
       0,     0,     0,     0,     0,     0,  2627,     0,  2639,     0,
    2632,     0,     0,     0,  2642,     0,   287,     0,  2644,   109,
       0,  2645,     0,     0,     0,     0,     0,     0,    64,    65,
       0,     0,     0,     0,     0,     0,     0,     0,   117,     0,
       0,     0,     0,   118,   107,     0,     0,     0,     0,     0,
    2475,     0,     0,     0,   288,     0,     0,     0,     0,  2636,
       0,     0,     0,  2648,  2649,   110,  2651,     0,  2638,     0,
       0,  2653,  2654,     0,     0,     0,  2656,  2640,     0,  2641,
       0,  2408,   109,  2643,  2411,     0,  1670,     0,     0,  2415,
       0,     0,  2416,     0,     0,     0,     0,     0,     0,     0,
       0,   107,     0,     0,     0,     0,     0,     0,     0,  2678,
       0,  2431,     0,     0,     0,     0,   289,     0,     0,     0,
       0,   112,     0,     0,     0,     0,     0,     0,   110,     0,
       0,     0,     0,  2699,     0,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,     0,     0,     0,     0,     0,     0,
    2701,     0,  2702,     0,  2703,     0,     0,  2704,     0,  2705,
       0,   117,     0,     0,   112,   110,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2555,   346,  2498,     0,
       0,     0,  2559,     0,   347,     0,  2561,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2744,     0,     0,     0,
       0,     0,  2567,     0,     0,     0,     0,     0,     0,  2507,
       0,     0,     0,  2753,     0,     0,     0,     0,     0,     0,
       0,   112,     0,     0,   117,     0,     0,     0,  2764,   118,
       0,  2767,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   118,     0,  2557,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2565,     0,
       0,     0,     0,     0,     0,  2570,     0,     0,  2573,  2574,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
       0,     0,     0,     0,     0,  2666,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   107,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   348,     0,     0,   349,
       0,     0,   493,   494,     0,     0,   495,     0,     0,     0,
       0,   604,   107,     0,     0,     0,     0,     0,   978,     0,
       0,     0,     0,   979,  2647,     0,     0,     0,     0,   496,
       0,     0,     0,     0,     0,     0,     0,  2728,     0,   110,
       0,     0,     0,  2657,     0,     0,     0,     0,     0,     0,
       0,     0,   605,     0,     0,     0,     0,     0,  2741,     0,
       0,     0,     0,     0,     0,     0,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   112,   110,     0,     0,     0,
       0,     0,     0,  2766,     0,     0,     0,   497,     0,     0,
     606,     0,     0,     0,     0,     0,  2707,  2708,     0,  2710,
       0,  2712,  2713,  2780,  2715,   498,  2781,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   499,     0,     0,
       0,     0,   112,     0,     0,     0,     0,     0,     0,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,   607,
       0,     0,     0,     0,  2742,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   500,     0,     0,     0,   118,     0,     0,
       0,  2774,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,   501,     0,     0,     0,     0,   608,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,  1000,  1001,  1002,
       0,     0,  1267,  1268,  1269,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1003,  1004,     0,     0,
    1005,  1270,  1271,  1006,   107,  1272,     0,     0,     0,     0,
    1007,     0,  1273,     0,  1008,  1274,     0,     0,     0,  1275,
       0,     0,  1009,  1010,     0,     0,     0,  1276,  1277,     0,
    1011,  1012,   107,     0,     0,  1278,     0,     0,     0,     0,
       0,     0,   109,     0,     0,     0,     0,     0,  1013,     0,
       0,     0,     0,     0,  1014,     0,     0,     0,  1015,  1016,
       0,     0,  1017,  1279,  1280,     0,     0,  1281,     0,     0,
     109,     0,     0,     0,     0,     0,     0,     0,  1018,     0,
       0,     0,     0,  1282,   107,     0,     0,     0,   110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1019,
       0,     0,     0,     0,  1283,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   110,     0,     0,     0,
       0,     0,  1020,     0,     0,   507,     0,  1284,     0,     0,
       0,     0,     0,     0,     0,     0,  1285,     0,     0,     0,
       0,     0,     0,     0,   112,  1021,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   107,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   110,     0,
       0,     0,   112,     0,     0,  1022,     0,  1023,     0,     0,
    1286,     0,  1287,  1024,  1025,     0,     0,     0,  1288,  1289,
       0,     0,     0,  1327,     0,     0,     0,     0,     0,  1026,
    1027,     0,     0,     0,   117,  1290,     0,     0,     0,   118,
    1028,  1029,     0,     0,     0,     0,  1291,     0,     0,     0,
       0,     0,     0,     0,   112,     0,     0,     0,     0,     0,
       0,     0,   117,     0,     0,     0,  1030,   118,  1031,   110,
       0,  1292,     0,  1293,     0,     0,     0,     0,     0,     0,
    1032,     0,  1033,  1294,     0,     0,     0,     0,  1034,     0,
       0,     0,     0,  1295,  1364,     0,     0,     0,     0,     0,
     511,     0,     0,     0,     0,   107,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
       0,     0,  1035,     0,     0,   112,     0,  1296,     0,     0,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,     0,   508,   110,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
       0,     0,     0,     0,     0,   112,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,  1365,     0,     0,     0,     0,     0,
       0,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     0,     2,     0,     0,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     0,     0,     0,     0,     5,     6,
       0,     7,     8,     9,     0,     0,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,    11,     0,
      12,    13,     0,     0,     0,     0,     0,     0,     0,     0,
      14,    15,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
      16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    17,     0,     0,     0,    18,     0,     0,
      19,     0,     0,     0,    20,    21,     0,     0,     0,     0,
       0,    22,     0,     0,     0,     0,     0,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    24,     0,     0,    25,    26,    27,     0,     0,    28,
      29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    32,    33,     0,     0,     0,     0,     0,     0,   175,
       0,     0,   176,     0,    34,   177,    35,     0,     0,     0,
       0,     0,     0,    36,     0,     0,     0,    37,     0,     0,
       0,    38,     0,    39,   178,    40,   179,   180,   181,     0,
      41,     0,     0,     0,     0,     0,   182,     0,   183,     0,
       0,     0,     0,   184,    42,   185,   186,   187,     0,     0,
      43,     0,     0,   188,     0,   189,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    44,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,     0,    47,
       0,     0,     0,     0,   190,    48,     0,     0,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   191,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   192,   193,     0,     0,   194,     0,     0,    51,
     195,     0,   196,     0,     0,     0,    52,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   197,   198,     0,     0,   199,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   200,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   201,   202,     0,     0,     0,
       0,     0,     0,   203,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   204,     0,
     205,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   206,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     207,   208,     0,     0,     0,     0,     0,     0,     0,   209,
       0,     0,     0,     0,     0,     0,   210,     0,     0,     0,
       0,     0,   211,     0,   212,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   213
};

static const yytype_int16 yycheck[] =
{
       3,   484,  1450,    50,  1650,     4,  1652,     4,    11,     5,
     667,  1149,     5,  1151,     4,     4,     4,    27,     3,     4,
      32,   662,   663,     0,     5,   880,   881,   882,     4,    32,
      47,    62,    27,     4,     5,     4,     4,    40,    32,  1177,
    1178,  1179,     3,     4,     5,     5,    49,    17,    32,    52,
       5,     4,    55,     3,     4,   440,    59,    16,    99,    62,
      27,     4,     5,    66,    67,   450,   167,    70,    67,     5,
      73,    74,     3,     4,    77,     3,     4,    57,    81,    51,
      27,   132,     5,    86,     5,    14,    36,    27,   943,    57,
      40,     3,     4,    17,     3,     4,    99,   100,   101,   102,
     103,   104,    49,  1001,    57,    52,     3,     4,   123,   136,
       3,     4,   972,     3,     4,   975,    63,   120,     3,     4,
     101,    21,   121,    17,    67,    17,   107,    36,    40,   101,
       3,     4,   992,    62,    57,    13,   159,    21,   110,    86,
      12,  2684,   216,    66,   196,   134,    89,     5,    60,   267,
     121,    84,   155,   105,     3,     4,   274,   104,   196,   169,
       5,     4,     5,   113,   187,   123,    21,   139,   101,   270,
     171,   168,    17,    31,    20,   178,     4,   228,   121,   180,
     183,     4,    54,   267,    12,   135,    67,  2730,     3,     4,
     274,     3,     4,     3,     4,     3,     4,     3,     4,   142,
      72,   113,    44,   170,    12,   190,   205,     4,   100,   261,
     200,   196,     4,     5,   213,   214,   254,   207,   208,    21,
      40,    36,    21,    21,   251,   266,   135,   242,     3,     4,
     102,    27,   242,   228,   205,   309,   287,   147,   190,   219,
     199,   244,   213,   214,    67,   215,    88,   197,   120,   296,
     235,   219,   124,   243,     3,     4,   287,   260,   261,   190,
     277,   228,   205,   920,   193,   137,   219,   161,    62,   197,
     213,   214,     4,   276,   286,   278,   261,   287,   121,   310,
       4,   250,   275,   286,   287,   197,   289,   290,   228,   292,
     248,   215,   286,   113,   230,   250,   219,     5,   121,   302,
     143,   300,   286,   291,    14,   190,    14,    15,   297,   312,
     313,    21,   289,   309,   192,   291,    26,    32,     4,   316,
     135,   706,   307,    33,   121,   306,   289,   299,   298,   300,
     290,   252,   335,   336,   337,   306,   339,     3,     4,   268,
     343,   344,   242,    67,    54,   316,     4,   297,   309,   278,
     349,   354,   355,   195,    62,   354,   355,   300,   242,   362,
     350,    71,   205,   306,   367,   368,   351,   352,  1025,   297,
     213,   214,   375,   169,   298,   378,   307,   197,   349,   228,
     309,   293,   205,   354,   355,  1240,  1043,   242,   297,    21,
     213,   214,   238,  1248,   397,   398,    58,   121,   113,   211,
     297,   404,   405,   406,   297,   408,   349,   297,   205,   356,
     353,   354,   355,    79,    14,    15,   213,   214,   228,   422,
     351,   352,   307,   426,   297,   297,    37,    64,   431,   432,
     433,   434,   435,   436,  1075,   438,   211,   440,   441,   442,
     242,  1579,    64,   242,   242,     5,   242,   450,   451,   269,
     160,   161,   162,   163,   164,   165,   841,   300,   168,   169,
     170,   171,    62,   121,   196,  1106,   351,   352,   183,   106,
     185,   133,   187,   188,     3,     4,     6,   300,     5,   228,
     195,   205,   297,    62,   106,   193,   194,    14,    15,   213,
     214,   287,   123,   287,   291,   210,    33,   123,    34,   884,
     152,   504,   505,   300,   126,   137,   349,     3,     4,   175,
     196,   354,   355,  1411,    88,   247,   310,   123,    16,   522,
     234,  1381,   254,    46,  1384,     5,   349,     4,     5,     3,
       4,   354,   355,     4,    37,    62,    44,    30,   585,    47,
    1438,     5,    65,   122,    67,    48,   549,   205,   258,   259,
      14,    15,   349,    62,     4,   213,   214,   354,   355,   119,
     268,    57,   123,  1461,     4,     3,     4,   229,    55,    77,
     278,   279,    75,   109,   289,   283,   300,    85,   288,   582,
     627,    67,   244,    89,    61,   159,   197,    62,   254,   123,
      67,   107,   122,   193,   194,    62,   125,    28,    62,   646,
      40,   309,   239,    96,    91,     3,     4,     4,     3,     4,
     242,   242,   264,   122,   234,   618,   242,   239,   255,   256,
       4,   331,   332,   333,     0,   349,    14,    15,    40,    46,
     354,   355,  1289,   255,   256,   195,   242,   145,   274,   116,
     272,   644,   300,  1300,    71,   307,    30,   122,     5,   152,
      67,   125,  2298,     4,   131,   122,   143,    62,   661,    62,
      88,   664,   185,    31,     6,    82,   193,   194,   268,   146,
     206,   250,   165,   113,    62,   152,   126,    62,   278,   279,
     157,   242,   198,     5,   159,     0,   189,   195,   691,     4,
     250,   349,   695,   696,   697,   698,   354,   355,   701,   278,
     703,   113,   705,   706,   707,   213,   214,    62,   242,   309,
     347,   348,   220,     5,   222,   275,   141,   122,    62,   122,
     243,    62,   153,   219,   439,   347,   348,   125,     5,   193,
     194,   159,   141,     5,   211,   782,   252,   122,    67,  2452,
     197,   268,   250,  1128,   171,   176,   141,    79,     4,   180,
      40,   278,   279,   230,   179,   258,   283,   197,   235,   209,
     237,   254,   200,   250,   287,  2478,   259,   122,   185,   278,
     179,   774,   775,   296,   777,   778,   779,   780,   122,   163,
     119,   122,   309,     5,   179,   197,   263,   264,    67,   792,
     793,   294,    14,    15,   271,    62,   799,   800,  1653,     3,
       4,   232,   131,   278,   268,   193,   194,   310,   316,   120,
     250,   278,   289,   528,   278,   279,   819,   820,   821,   283,
       5,    30,   249,   113,    14,    15,   243,   289,   157,    14,
      15,   258,   216,   836,   837,   838,    62,   840,   841,   842,
      62,   844,   273,   175,   171,   309,  1984,  1985,  1986,   564,
     281,   282,    33,    40,     5,   122,    60,   269,   242,    64,
    1245,    90,   865,    16,   867,  2578,  2579,   107,   345,  2582,
     287,  2584,    62,   278,   877,   278,    67,    62,   288,   296,
     268,   884,   885,  2596,  2597,    42,    43,   890,  2601,  2602,
     278,   279,  2605,   278,    90,  1755,   122,  2610,  2611,   206,
     235,   106,   612,   906,   907,     3,     4,   197,   237,    67,
      27,   914,   915,   916,    89,  1775,     3,     4,     5,   922,
      31,   309,   254,   278,   927,    37,   113,     3,     4,     5,
    1790,   978,    95,  1793,   278,   938,    48,   278,    73,     6,
       5,  1801,    40,   118,  1804,  2658,    92,  2580,  2661,     4,
     113,   954,  1812,  2666,   163,  1815,   666,  1855,   198,  2672,
     289,   671,  1822,    75,  2677,  2598,     3,     4,   152,     4,
       5,   193,   194,  1871,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,  1900,   193,   194,     4,  2454,   216,   193,   194,
     197,   278,   252,   188,     5,   113,   173,   174,  1021,     5,
      14,    15,    89,   170,    83,     4,   172,   190,   203,     5,
      83,     3,     4,   242,   239,  2748,   132,   221,  2751,  1042,
     152,   348,     5,    84,   201,    17,   268,   354,  1051,   356,
     255,   256,   278,   170,     5,   122,   278,   279,  2771,   264,
     101,   283,  1065,     5,  1067,     4,     3,     4,    62,  1072,
    1073,  1074,  2785,     4,   170,  2788,  2789,   189,   268,  1082,
     264,   228,  1085,   268,  1087,     4,  2719,   309,   278,   279,
     265,    35,  2725,   278,   279,   154,    24,    25,   283,   197,
    1103,   154,  1105,    40,     4,  2003,  1109,  1110,    14,    15,
    1965,   228,     5,   823,    28,    45,   262,     4,   302,   309,
     122,  1124,  1125,     5,   309,  1128,  1129,  1130,     4,     5,
      60,   306,   228,  1136,   280,  1138,     4,   178,  1141,    99,
    1143,   316,   347,   348,   275,  1192,   258,     5,   295,  2782,
     865,  2784,    82,     3,     4,     4,    62,    14,    15,     4,
       3,     4,     3,     4,   108,     4,     5,   226,   227,     3,
       4,    99,   102,   226,   227,     4,   113,  1180,  2033,     4,
     221,  1184,   241,  1186,    40,   129,   130,  1190,   241,   119,
      40,   287,   122,    26,   138,     4,     5,    32,   310,   193,
     194,  2056,  1205,     4,  1207,    62,  1209,  1210,  1211,  1212,
     200,    67,   156,  1216,  1217,    67,   257,    60,     4,   149,
     150,  1224,   166,     4,     4,   284,    60,     4,  1231,    81,
       5,   284,  1235,  1236,  1237,     3,     4,     9,    90,   153,
     428,   429,  1245,  1246,    12,   101,  1249,     3,     4,   101,
    2110,   107,     5,     9,    10,    11,  1259,   113,  1261,  2119,
      11,  1264,   176,   113,     5,   274,   180,   171,  2128,     3,
       4,     5,   202,   180,   268,   131,     4,     4,   113,   131,
     171,   114,   212,     4,   278,   279,   199,   193,   194,  2446,
     199,     5,  2449,   126,  2451,    26,   152,     3,     4,     5,
     152,     7,     8,     4,  1307,     5,  1309,  2464,  2465,  1312,
    1313,   167,  1315,   199,  1317,   309,   191,   191,   232,    67,
    1323,    67,  1325,    67,  2481,   228,    22,     5,   161,  1332,
     229,    88,     5,     4,     4,  2233,   193,   194,  1048,     4,
     199,     5,   198,    88,   274,   275,   198,   182,    22,   184,
     185,  2249,   187,   188,    50,     5,  2254,    53,     4,   273,
      56,     4,   268,     5,     5,     4,   101,   281,   282,     5,
      14,    15,   278,   279,     4,     4,    50,   210,     5,    53,
     215,   237,    17,   114,    17,   237,    17,    83,     4,     4,
     223,     4,  1102,     3,     4,   126,   252,     7,     8,   234,
     235,    99,  1112,   309,  1407,     5,  1409,  1410,   264,    83,
       5,   268,   264,    88,  2269,   345,   112,     4,    62,   115,
       5,   278,   279,  2278,     5,     3,     4,     5,  1431,     7,
       8,    88,  1435,     5,     4,   291,     5,     5,   112,     4,
       4,   115,   277,     5,     5,     5,     4,   303,     4,   305,
     306,   303,   309,   305,   289,    12,  1459,  1460,     3,     4,
       5,     5,     7,     8,    12,     4,  1469,     4,     4,     4,
    1473,     4,   159,     5,   309,  2330,     5,  1480,  2333,   210,
     168,  2336,     5,  2338,     5,     4,     4,   159,   190,   345,
    1205,  1494,   223,   263,   196,     4,  1499,   263,   291,     5,
    1503,     4,  1505,  1506,     5,  1508,  1509,  1510,     5,  1512,
    1220,  1221,  1515,  1516,  1517,  1518,  1519,  1520,  1521,  1522,
    1523,  1524,  1525,     5,     5,  1528,  1529,  1530,  1531,     4,
       4,  1916,     5,   235,   230,  1538,  1539,  1252,     5,  1542,
    1543,  1544,    62,   276,  1547,  1548,   276,     5,     5,   193,
     194,     5,  2450,  1268,     4,     4,   230,  1560,  1561,   261,
    1563,  1564,     5,   242,     5,  2463,     5,   263,     5,     5,
    2468,     5,     4,     4,   242,     5,     5,     4,   141,     5,
       5,   107,    93,     5,   419,   107,  1971,    40,   242,   263,
     101,   107,    56,   289,     5,   430,   107,   215,   215,   119,
      40,   248,   122,    67,   439,   307,     5,     4,  1611,  1612,
    1613,     5,     5,  1616,   215,     4,   215,   128,  1621,  1622,
       4,  1624,  1625,  1626,   268,  1628,  1629,  2012,  1631,    93,
      94,  1634,  1635,     5,   278,   279,     5,   101,     5,   159,
    1643,   152,     5,   107,     4,   113,     4,   113,  1651,   160,
     352,     5,     5,  1656,  1657,     5,     4,    12,     5,     5,
       4,  1664,     5,     5,   128,   309,    54,   131,     4,     4,
    1673,     5,   507,   508,     5,   195,     5,     5,     5,    12,
       6,     4,     4,     4,    72,   520,     4,   198,   152,     4,
     525,  1406,  1402,    38,     5,   206,   160,    38,  1408,   534,
       4,    89,     0,     5,   242,   170,  1709,   123,   242,     4,
     252,   242,   211,   141,   102,   199,     4,     4,     4,     4,
    1430,     4,   276,  1433,     5,     5,   246,  1437,  1731,  1732,
     250,     5,   120,  1736,   198,     5,   124,     5,     5,  1742,
     291,   252,   206,     4,     4,   228,     5,     4,  1458,   137,
       4,     4,   242,   264,  1464,   275,     5,     5,   278,     5,
     313,   313,  1472,   242,   242,  1475,     4,     4,   288,   280,
     605,   606,   607,   608,  1484,  1485,     4,     4,     4,     4,
       4,     4,   228,   313,     5,  1495,   313,     5,   252,   177,
     228,     5,     5,   228,     4,   228,     5,     5,     4,   350,
     264,     5,     5,     4,     4,     4,   276,     5,     5,     4,
       4,   357,     5,     5,     4,     4,   280,     5,  2716,     5,
       5,     4,     6,     4,     4,   289,    22,   291,     4,     4,
     665,    27,     5,  2218,  2219,     5,  2221,  2222,     5,     5,
    2225,  2226,     5,     5,     4,     4,  1849,     5,  1851,     5,
    1853,     5,     4,    49,    50,     5,    52,    53,     4,   276,
       5,     5,     5,     4,     4,    12,     5,    63,     5,  1872,
    1873,  1874,  1875,  1876,  1877,  1878,  1879,  1880,     5,    75,
      76,   345,     5,     4,     4,   276,     5,    83,     5,     5,
      86,     5,     4,  1896,     4,  1898,     5,     5,     5,     5,
       4,     4,  2287,     5,     5,     5,  1621,     5,   104,     4,
       4,     4,  1915,  1916,     5,   111,   112,     4,  1921,   115,
       4,     4,   309,     5,     5,     5,     5,  1930,  1931,  1932,
    1933,  1934,  1935,  1936,  1937,  1938,  1939,     5,     4,  1942,
    1943,  1944,  1945,  1946,  1947,  1948,  1949,  1950,  1951,  1952,
    1953,   502,  1955,     4,  1957,  1958,  1959,  2614,   509,     5,
       4,   512,     4,     6,     5,     5,   517,     4,  1971,  1972,
     521,     4,     4,     4,  1689,     4,   357,     5,     5,   175,
       4,     4,   357,     5,  1699,     5,     5,     5,     5,  1704,
       5,     4,   827,     5,     4,     4,   357,     5,     5,     5,
       4,  2004,     4,  2006,   839,  2008,     5,  2010,     5,  2012,
    2013,     5,  2015,     5,     4,     4,   289,     5,     5,  2022,
    2023,     5,     5,     4,     6,     4,  2029,     5,  2031,  2686,
       4,     4,  2035,     4,   230,  2038,   587,     4,     4,    19,
     236,   876,     4,     4,     4,     4,     4,     4,     4,     4,
    2435,     4,   357,     4,  2439,     4,   357,   253,   357,     4,
     357,    41,     5,     5,    44,     4,     4,   263,     5,     5,
       4,   427,     5,     5,     5,     4,     4,     4,     4,     4,
    2083,     4,     4,     4,     4,     4,   357,     5,     4,     4,
    2475,     5,     5,     5,   290,   291,     5,     5,    78,     4,
     971,     5,     5,     4,     4,    85,     5,     4,  2741,     5,
       4,     4,     4,     4,   949,   311,    96,    97,     5,     5,
       4,     4,     4,   103,     4,     4,   382,     5,     4,  2623,
       5,     5,   289,     4,  2181,     4,     4,  2512,     5,     5,
       5,     4,  2244,     5,     5,     5,   126,     4,     4,  2612,
       5,   702,     5,     5,   959,  1865,  2686,  2682,   709,   741,
     356,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,   159,
      -1,    -1,    -1,    -1,  2187,   165,   991,    -1,    -1,  1024,
      -1,  1901,    -1,    -1,    -1,  2198,  2199,  2200,  2201,  2202,
    2203,  2204,  2205,  2206,  2207,  2208,   186,    -1,    -1,    -1,
      -1,  2214,    -1,  2696,  2697,  2218,  2219,    -1,  2221,  2222,
      -1,    -1,  2225,  2226,  2227,  2228,  2229,  2230,  2231,  2232,
      -1,  2234,  2235,  2236,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1076,    -1,    -1,   224,    -1,    -1,  2250,  2251,  2252,
    2253,  1086,  2255,  2256,  2257,  2258,  2259,  2260,    -1,  2262,
      -1,    -1,  2265,  2266,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   826,    -1,    -1,    -1,    -1,
      -1,  2284,   833,    -1,  2287,  2288,    -1,    -1,    -1,  2292,
      -1,    -1,    -1,  2296,    -1,    -1,    -1,   277,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   287,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2041,   878,   879,    -1,
      -1,    -1,   883,    -1,    -1,   886,   316,    -1,    -1,  2342,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   898,    -1,    -1,
      -1,    -1,    -1,  1188,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2080,    -1,    -1,    -1,    -1,
    1205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1229,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1239,    -1,    -1,    -1,    -1,    -1,
      -1,  2414,    -1,    -1,    -1,  2418,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1258,    -1,  2428,  2429,    -1,    -1,    -1,
      -1,  2434,  2435,  1268,    -1,  2438,  2439,    -1,  1273,    -1,
      -1,  2444,    -1,    -1,  2447,  2448,    -1,    -1,   999,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2466,  2467,    -1,  2469,  2470,  2471,  2472,
    2473,    -1,  2475,  2476,    -1,    -1,    -1,  2480,  1349,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2492,
    1361,    -1,    -1,    -1,  2497,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1379,  1380,
    2513,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1333,  1334,
    1335,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1343,  1344,
    1345,    -1,    -1,    -1,    -1,  1350,  1351,  1352,    -1,    -1,
    1355,  1356,  2555,  1358,  1359,    -1,    -1,  2560,    -1,  2562,
    2270,    -1,    -1,    -1,    -1,  2568,    -1,    -1,    -1,    -1,
      -1,  1406,    -1,    -1,    -1,    -1,    -1,    -1,  2581,    -1,
      -1,    -1,    -1,  1388,  1389,    -1,    -1,  1392,  1393,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2599,    -1,    -1,  2646,
    2603,  1436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2623,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1465,    -1,    -1,  1468,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1193,  1478,  1479,    -1,    -1,  2650,    -1,    -1,
      -1,  1486,  2655,    -1,  2657,    -1,    -1,    -1,  1493,    -1,
      -1,  2664,    -1,    -1,    -1,    -1,  2669,    -1,    -1,    -1,
      -1,  2674,  1223,    -1,    -1,    -1,    -1,  1228,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1238,    -1,    -1,
      -1,    -1,    -1,  2696,  2697,    -1,    -1,    -1,  1533,    -1,
      -1,  1536,  1537,     4,     5,    -1,    -1,    -1,    -1,    -1,
    1545,    -1,    -1,    -1,    -1,    -1,    -1,  2720,    -1,    -1,
    2723,    -1,    -1,  2726,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2737,  2738,  2739,  2740,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2749,    -1,    -1,  2752,
      -1,    -1,  2462,    -1,    -1,    -1,  2759,    -1,  2761,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,  2482,    74,    -1,    76,  2486,    -1,    -1,    -1,
      81,    -1,    -1,    84,    -1,    -1,  1621,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,    -1,    -1,    -1,  1639,    -1,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,
    1655,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     131,    -1,    -1,    -1,    -1,  1670,    -1,  1672,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     4,    -1,  1682,    -1,    -1,
    1685,   152,  1687,  1688,  1689,  1690,    -1,    -1,  1693,    -1,
      19,  1696,    -1,    -1,  1699,  1700,   167,  1702,  1703,  1704,
    1705,    -1,  1707,  1708,    -1,    -1,   177,   178,  1713,  1714,
    1715,    40,    -1,  1718,  1719,    -1,    -1,    -1,    -1,  1724,
    1725,    -1,    -1,    -1,  1765,    -1,    -1,   198,    57,    -1,
      -1,    -1,  1773,  1774,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1788,  1789,    -1,
     221,    -1,    -1,  1474,    -1,    -1,    -1,    -1,  1799,  1800,
      -1,    -1,    -1,    -1,   235,    -1,   237,    -1,    -1,  1810,
    1811,  1746,    -1,    -1,   103,    -1,    -1,    -1,    -1,  1820,
    1821,   252,    -1,    -1,  1759,  1826,   257,    -1,    -1,    -1,
      -1,    -1,   121,   264,  1769,  1836,    -1,    -1,    -1,    -1,
     271,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1534,    -1,    -1,    -1,    -1,   289,  1540,
      -1,    -1,    -1,    -1,    -1,    -1,  2711,    -1,    -1,    -1,
     159,   302,   303,    -1,   305,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1848,    -1,    -1,    -1,  1852,    -1,    -1,
      -1,    -1,  2732,    -1,    -1,    -1,    -1,    -1,  2743,  1864,
      -1,  2746,  1867,    -1,    -1,    -1,  1841,    -1,   197,    -1,
      -1,    -1,    -1,    -1,   345,    -1,   205,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   213,   214,    -1,    -1,    -1,    -1,
     219,    -1,  1897,    -1,    -1,   224,  1617,    -1,    -1,    -1,
      -1,    -1,  1623,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1648,    -1,    -1,
      -1,    -1,    -1,  1654,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,    -1,    -1,    -1,  1953,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,  1683,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1691,   300,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,    -1,    -1,    -1,    -1,    -1,
     349,  2026,    -1,    -1,    -1,   354,   355,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2094,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2104,  2069,    -1,    -1,  2108,  2109,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2117,  2118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2126,  2127,    -1,    -1,    -1,
      -1,  2132,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,  2142,  2143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2153,  2154,    -1,    -1,    -1,    -1,  2093,    -1,
      -1,    -1,    -1,  2164,    -1,  1846,    -1,    -1,    -1,    -1,
      -1,    -1,  2173,    -1,  2175,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1868,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2133,  2134,
    2135,  2136,  2137,   224,  2139,  2140,    -1,    -1,    -1,  2144,
    2145,  2146,  2147,  2148,    -1,  2150,  2151,    -1,    -1,    -1,
    2185,  1902,  1903,  2188,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2196,    -1,    -1,    -1,    -1,    -1,    -1,  1919,  1920,
      -1,    -1,    -1,  1924,  1925,    -1,    -1,  2212,    -1,    -1,
    2215,    -1,    -1,    -1,    -1,  2220,    -1,    -1,  2223,  2224,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1964,    -1,    -1,  1967,  1968,    -1,    -1,
      -1,    -1,    -1,    -1,  1975,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,    -1,    -1,    -1,    -1,    -1,  2009,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2025,  2346,    -1,  2312,    -1,    -1,
      -1,    -1,     3,     4,    -1,  2356,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2365,    -1,    -1,  2048,    19,    -1,
      -1,    -1,  2053,  2374,    -1,    -1,    -1,    -1,  2059,    -1,
    2381,    -1,    -1,  2064,    -1,    -1,    -1,  2068,    39,    -1,
    2071,  2392,    -1,  2074,    -1,  2076,    -1,  2398,    -1,    -1,
    2401,    -1,    -1,  2404,    -1,    -1,    57,    -1,    -1,    -1,
    2345,    -1,    -1,  2348,  2349,  2350,  2351,  2352,    -1,  2354,
    2355,    -1,  2357,  2358,  2359,  2360,  2361,    -1,  2363,  2364,
      -1,  2366,  2367,  2368,  2369,  2370,    -1,  2372,  2373,    -1,
    2375,    -1,    -1,    -1,  2409,    -1,    -1,    -1,    -1,    -1,
    2385,  2386,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2396,  2034,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2442,  2050,  2051,
    2052,    -1,    -1,  2055,    -1,  2057,  2058,    -1,  2453,  2061,
    2062,  2063,    -1,    -1,  2066,  2067,     4,    -1,  2070,    -1,
    2072,  2073,    -1,  2075,    -1,    -1,    -1,    -1,   159,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2521,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2530,
      -1,    -1,    -1,    -1,    -1,    -1,  2501,    -1,  2539,    -1,
    2505,    -1,    -1,    -1,  2545,    -1,   197,    -1,  2549,    57,
      -1,  2552,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,    -1,
      -1,    -1,    -1,   224,    19,    -1,    -1,    -1,    -1,    -1,
    2261,    -1,    -1,    -1,   235,    -1,    -1,    -1,    -1,  2524,
      -1,    -1,    -1,  2558,  2559,   103,  2561,    -1,  2533,    -1,
      -1,  2566,  2567,    -1,    -1,    -1,  2571,  2542,    -1,  2544,
      -1,  2183,    57,  2548,  2186,    -1,     4,    -1,    -1,  2191,
      -1,    -1,  2194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2604,
      -1,  2213,    -1,    -1,    -1,    -1,   297,    -1,    -1,    -1,
      -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,    -1,  2628,    -1,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2635,    -1,  2637,    -1,  2639,    -1,    -1,  2642,    -1,  2644,
      -1,   219,    -1,    -1,   159,   103,   224,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2407,    16,  2300,    -1,
      -1,    -1,  2413,    -1,    23,    -1,  2417,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2711,    -1,    -1,    -1,
      -1,    -1,  2433,    -1,    -1,    -1,    -1,    -1,    -1,  2331,
      -1,    -1,    -1,  2728,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   219,    -1,    -1,    -1,  2743,   224,
      -1,  2746,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   224,    -1,  2410,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2430,    -1,
      -1,    -1,    -1,    -1,    -1,  2437,    -1,    -1,  2440,  2441,
      -1,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,    -1,
      -1,    -1,    -1,    -1,    -1,  2586,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   245,    -1,    -1,   248,
      -1,    -1,    66,    67,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    18,    19,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,    -1,    -1,   164,  2556,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2678,    -1,   103,
      -1,    -1,    -1,  2575,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,  2699,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   159,   103,    -1,    -1,    -1,
      -1,    -1,    -1,  2744,    -1,    -1,    -1,   171,    -1,    -1,
     117,    -1,    -1,    -1,    -1,    -1,  2648,  2649,    -1,  2651,
      -1,  2653,  2654,  2764,  2656,   189,  2767,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,
      -1,    -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,
      -1,    -1,    -1,    -1,  2706,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   277,    -1,    -1,    -1,   224,    -1,    -1,
      -1,  2753,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
      -1,    -1,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
      -1,   345,    -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,    20,    21,    22,
      -1,    -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,
      53,    49,    50,    56,    19,    53,    -1,    -1,    -1,    -1,
      63,    -1,    60,    -1,    67,    63,    -1,    -1,    -1,    67,
      -1,    -1,    75,    76,    -1,    -1,    -1,    75,    76,    -1,
      83,    84,    19,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,   112,
      -1,    -1,   115,   111,   112,    -1,    -1,   115,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,    -1,
      -1,    -1,    -1,   131,    19,    -1,    -1,    -1,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,
      -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,
      -1,    -1,   175,    -1,    -1,    60,    -1,   175,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   184,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,   198,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,   159,    -1,    -1,   228,    -1,   230,    -1,    -1,
     228,    -1,   230,   236,   237,    -1,    -1,    -1,   236,   237,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,   252,
     253,    -1,    -1,    -1,   219,   253,    -1,    -1,    -1,   224,
     263,   264,    -1,    -1,    -1,    -1,   264,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,    -1,    -1,    -1,   289,   224,   291,   103,
      -1,   289,    -1,   291,    -1,    -1,    -1,    -1,    -1,    -1,
     303,    -1,   305,   301,    -1,    -1,    -1,    -1,   311,    -1,
      -1,    -1,    -1,   311,   164,    -1,    -1,    -1,    -1,    -1,
     285,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   224,
      -1,    -1,   345,    -1,    -1,   159,    -1,   345,    -1,    -1,
      -1,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,    -1,   293,   103,
     224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      97,    98,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   140,    -1,    -1,    -1,   144,    -1,    -1,
     147,    -1,    -1,    -1,   151,   152,    -1,    -1,    -1,    -1,
      -1,   158,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   178,    -1,    -1,   181,   182,   183,    -1,    -1,   186,
     187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     217,   218,   219,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    44,    -1,   231,    47,   233,    -1,    -1,    -1,
      -1,    -1,    -1,   240,    -1,    -1,    -1,   244,    -1,    -1,
      -1,   248,    -1,   250,    66,   252,    68,    69,    70,    -1,
     257,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,    -1,
      -1,    -1,    -1,    85,   271,    87,    88,    89,    -1,    -1,
     277,    -1,    -1,    95,    -1,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   292,   293,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,   306,
      -1,    -1,    -1,    -1,   126,   312,    -1,    -1,   315,   316,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   154,   155,    -1,    -1,   158,    -1,    -1,   346,
     162,    -1,   164,    -1,    -1,    -1,   353,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   186,   187,    -1,    -1,   190,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   200,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   217,   218,    -1,    -1,    -1,
      -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   250,    -1,
     252,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   277,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     292,   293,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   301,
      -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,
      -1,    -1,   314,    -1,   316,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   353
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
     308,   314,   316,   353,   423,    84,   101,   465,    19,    41,
      44,    78,    85,    96,    97,   103,   126,   144,   158,   159,
     165,   186,   224,   277,   287,   316,   468,   362,    89,   118,
     188,   203,   265,   306,   316,   474,    16,    26,   114,   126,
     161,   210,   223,   477,   234,   495,     5,    67,    89,   142,
     306,   353,   362,   496,     5,   497,    58,   133,   229,   244,
     307,   513,    46,    65,    67,   185,   243,   287,   296,   532,
      67,   206,   348,   354,   356,   533,    39,   197,   235,   297,
     360,   370,   372,   534,     5,   306,   316,   362,   537,    71,
     171,   249,   258,   538,     4,   539,    89,   513,    62,   287,
     310,   546,   197,   297,   360,   547,    26,   114,   126,   210,
     223,   549,    51,   101,   110,   139,   299,   564,   565,     4,
      37,    48,    75,   152,   189,   258,   294,   310,   388,     4,
     126,   209,   566,   297,   360,   568,    16,    23,   245,   248,
     371,   569,   234,   573,   297,   360,   574,     0,     5,   143,
     362,    60,   360,   394,   274,     5,     4,   297,   360,   395,
       5,    32,   286,   396,   125,   360,   397,   125,   360,   399,
     360,     4,   196,   247,   254,   403,   190,   307,   351,   352,
     360,   402,   362,   141,   179,   401,   200,   360,    79,   175,
     254,   360,   404,     5,   360,     4,   250,   406,   360,   360,
       5,   230,   409,    31,   410,     5,   411,     5,   415,     5,
      31,   416,   360,     9,    10,    11,   360,   366,   367,   368,
     369,   360,   360,    40,   113,   197,   360,   418,   360,   197,
     370,   372,   360,    35,   108,   129,   130,   138,   156,   166,
     377,   360,     4,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   119,    67,    54,    72,    89,   102,   120,
     124,   137,   177,   424,   120,   426,   190,   196,   235,   261,
     307,   351,   352,   360,   412,   427,   289,   430,   171,   431,
     171,   180,   433,    66,    67,    70,    93,   171,   189,   211,
     277,   345,   370,   435,   360,   372,   438,    60,   293,   370,
     439,   285,   370,   372,   440,    33,   441,   370,   372,   442,
       4,   370,   372,   443,    45,    60,    82,   102,   119,   122,
     149,   150,   202,   212,   274,   275,   345,   447,   216,   309,
     453,     5,    90,     6,    89,   122,   445,     5,    66,   372,
     444,    16,   513,    46,    67,    82,   185,   243,   287,   296,
     454,    67,   235,   455,   288,    62,   287,   310,   456,    21,
     137,   242,   272,   457,    37,    48,    75,   152,   189,   258,
     310,   458,   372,    90,    16,   199,   463,   370,   466,    67,
      73,   469,    31,   470,    44,    88,   195,   471,   152,   221,
     264,   302,   472,   370,    18,    59,   117,   176,   293,   370,
     473,     4,   196,   476,     5,     4,     6,   122,   360,     4,
       5,   250,   478,     5,   480,     5,   119,   195,   250,   275,
     481,    95,   113,   190,   494,     5,   492,     5,   275,   493,
       4,     5,   362,   362,   360,   360,     5,     4,     5,    61,
      67,    74,    76,    81,    84,    90,   101,   107,   116,   131,
     152,   167,   177,   178,   198,   221,   235,   237,   252,   257,
     264,   271,   289,   302,   303,   305,   345,   498,    92,   172,
     262,   280,   374,     5,     4,   200,   207,   208,   243,   350,
     373,   360,   370,   360,     5,   360,    40,   113,   360,   536,
     362,   360,   370,   372,   535,   360,   377,   360,     4,   371,
      55,    91,   143,   250,   540,     4,     4,   360,     4,   152,
     264,   541,     5,   370,     4,    40,   113,   360,   548,   360,
      99,    62,   122,   250,   278,   550,   122,   563,    62,   119,
     122,   159,   195,   246,   250,   275,   278,   288,   552,   553,
      62,   122,   278,   562,     5,     4,    34,   109,   206,   545,
      67,   362,   389,    67,   362,   390,    67,   362,   391,    13,
     192,   544,   360,   360,   228,   360,   392,   360,   275,     4,
     360,   360,     4,   572,     4,   291,   570,     4,   291,   571,
       4,   377,   125,   360,   575,   360,   360,     4,     5,   360,
      12,   360,   360,   360,    30,    96,   165,   254,   259,   376,
     376,     4,   200,   360,   360,     4,     4,     4,   360,   360,
     360,   360,     4,     4,     5,     5,   370,     5,   360,   360,
     366,   368,   368,   370,   360,   360,   360,   360,   360,   360,
     360,   370,   372,   369,   360,   360,   369,   360,     5,   274,
     105,   190,   425,   196,   254,   428,   171,    79,   175,   254,
     429,   141,   179,   413,   413,     4,   432,     4,   434,   196,
     261,   436,   180,   437,   171,   377,   360,   360,   370,   370,
     377,   377,   377,   370,   377,   360,   370,     4,   450,     4,
     372,   448,   199,     4,   168,   316,   449,   199,   370,     4,
     134,   297,   452,     5,     5,     4,   199,   360,     4,     5,
      61,    67,   116,   131,   146,   152,   157,   211,   230,   235,
     237,   263,   264,   271,   289,   345,   507,   372,   191,   191,
      67,   459,    67,   460,    67,   461,   228,   462,   360,     5,
     229,   464,   371,   377,     5,   370,   370,   370,   370,     4,
     362,     4,     4,   199,   360,    14,    15,    62,   193,   194,
     268,   278,   279,   309,    88,     5,     5,    14,    15,    62,
     193,   194,   268,   278,   279,   283,   309,    88,   159,   164,
     371,   484,   489,    88,   159,     5,   482,     4,     4,    14,
      62,   193,   268,   278,   309,     5,     5,     4,   360,   371,
      20,    21,    22,    49,    50,    53,    56,    63,    67,    75,
      76,    83,    84,   101,   107,   111,   112,   115,   131,   152,
     175,   198,   228,   230,   236,   237,   252,   253,   263,   264,
     289,   291,   303,   305,   311,   345,    67,    81,    90,   101,
     131,   152,   198,   237,   264,   303,   305,     4,    30,   163,
     216,   242,   501,     5,    64,   106,   239,   255,   256,   347,
     348,   506,   101,   499,    17,    40,   113,   197,   505,     4,
       5,    17,   215,   298,   360,   264,   506,   514,   126,   506,
     515,    36,    40,   113,   135,   197,   297,   360,   516,   370,
     362,    93,   101,   107,   128,   152,   160,   198,   206,   252,
     264,   280,   519,    40,   113,   197,     5,   290,    17,   215,
     298,   523,   291,   362,   524,     5,   101,   107,   306,    17,
      17,     4,   360,   360,   360,   360,   360,   360,   377,   360,
     360,   369,   360,     4,   377,     4,    40,   113,   197,   269,
     542,    40,   113,   197,   269,   543,     4,    99,     5,     5,
      88,     4,     5,     5,    88,     5,   553,    62,   122,   159,
     278,   557,    62,   122,   278,   561,    88,   159,    62,   122,
     278,   555,     4,    62,   122,   278,   554,     5,     5,     4,
       4,     5,     5,     5,   360,   360,   360,     4,   360,   567,
     360,   360,     6,   371,     4,     5,     4,     4,     5,     4,
      99,   266,   378,   360,   360,    12,     5,    12,   360,   360,
      12,     4,    12,     4,     4,   360,   360,   360,     4,   362,
       4,     4,   377,   370,   377,   360,   360,   360,   370,   360,
     369,   360,   360,     5,     5,   360,   372,   360,   370,   360,
     377,   377,   378,   378,   378,   377,   369,   360,   377,   360,
     136,   251,   363,   451,   168,     5,     4,   377,   159,   159,
       4,     5,     4,     4,   360,   446,   360,    20,    21,    22,
      49,    50,    53,    60,    63,    67,    75,    76,    83,   111,
     112,   115,   131,   152,   175,   184,   228,   230,   236,   237,
     253,   264,   289,   291,   301,   311,   345,    67,   131,   157,
     237,   289,    30,   163,   216,   242,   508,   360,   211,   360,
     509,    17,   360,   263,   519,   263,   211,   360,   510,   291,
     511,    17,   100,   360,   360,     5,   378,    57,   370,     4,
       5,   475,   360,     5,     5,     5,   159,   187,   382,   382,
     167,   270,   380,     4,     4,     5,     5,   479,   276,   276,
       5,     5,     5,    17,   161,   381,   381,   380,     4,     4,
     380,     5,     5,   483,   164,   344,   371,   487,     5,   486,
       5,     5,   490,     5,   491,     5,    14,    15,    62,   193,
     194,   268,   278,   279,   283,   309,     4,     4,     5,     5,
     382,   380,     4,     5,     5,   377,    83,   154,   226,   227,
     241,   284,   385,     7,     8,   360,   365,   242,   123,   242,
     242,   107,    40,    67,   101,   107,   113,   131,   152,   167,
     198,   237,   252,   264,   291,   303,   305,   306,   345,   500,
     123,   242,     5,    27,   169,   242,   287,   141,   107,    22,
      50,    53,    83,   112,   115,   230,   263,    22,    50,    53,
      56,    83,   112,   115,   230,   263,   289,    40,   123,   242,
     242,   107,     5,   215,    27,   228,    36,   135,   297,   360,
     267,   274,   123,   248,   370,   519,    40,   132,   228,   287,
     248,   215,     5,     5,   252,    27,   228,     4,     5,     5,
     215,    36,   135,   297,   360,   519,   215,   362,     4,     4,
     360,     5,   309,    22,    27,    49,    50,    52,    53,    63,
      75,    76,    83,    86,   104,   111,   112,   115,   175,   230,
     236,   253,   263,   290,   291,   311,   356,   502,   360,   360,
     360,   360,   360,   506,   370,     5,     4,     5,   360,   360,
     370,   360,   362,   360,   360,   506,     5,   360,   360,   362,
       5,    17,     5,     5,   360,   360,   369,   360,   360,     4,
     360,   360,   113,   360,   360,   113,     4,    42,    43,   173,
     174,   201,   387,   387,    62,   122,   278,   551,   387,     5,
      62,   122,   278,   556,     5,     5,    62,   122,   278,   558,
       4,     5,     5,     4,    62,   122,   278,   560,    62,   122,
     278,   559,     5,     5,     4,     5,     5,     4,   387,   387,
     387,   360,   360,   360,     4,   370,   360,   371,   377,     5,
       5,    12,   360,   370,   372,   360,    12,   360,   360,   360,
      60,   360,     6,     4,   360,   360,    47,   277,   414,     5,
     362,   362,   377,   360,     4,     4,     4,   377,   370,   360,
     360,   360,   360,   377,   370,   378,   369,   360,     4,   378,
     360,    38,    38,     4,   372,     5,    24,    25,    99,   379,
       4,   370,   360,   360,     4,   360,     5,    83,   154,   226,
     227,   241,   284,   370,   372,   242,   123,   242,   242,    21,
     242,   370,   123,   242,    27,   169,   242,   287,   141,    21,
     242,   123,   242,   242,    21,   242,    27,   170,   228,   170,
     267,   274,   123,   170,   228,   295,   519,   132,   170,   228,
     287,     4,   252,    27,   170,   228,   519,   211,   360,   360,
     360,   360,   360,   360,   199,   360,   360,    20,   238,   467,
       4,     4,   360,   382,   382,   382,     4,   382,   382,   382,
      14,    15,    62,   193,   194,   268,   278,   279,   309,   381,
     382,   382,   382,   382,   382,     4,   382,   382,     4,   381,
      14,    15,    62,   193,   194,   268,   278,   279,   309,     5,
     485,     5,   488,     5,     5,    14,    15,    62,   193,   194,
     268,   278,   279,   283,   309,     5,    14,    15,    62,   193,
     194,   268,   278,   279,   283,   309,     5,    14,    15,    62,
     193,   194,   268,   278,   279,   283,   309,    14,    15,    62,
     193,   194,   268,   278,   279,   309,   276,     5,     5,     5,
     381,   381,   380,     4,     4,   380,     5,     4,     4,   382,
     382,     4,   382,   382,     5,   362,   370,   372,     5,   360,
     362,   360,     5,   360,     5,   365,   107,   198,   252,   107,
     198,   252,     5,   362,   360,   362,     5,   360,   370,   362,
       5,   365,   242,   242,    21,   242,    21,   242,   242,    21,
     242,   313,   313,     4,     4,     4,   500,     4,     4,     4,
     313,   313,     4,     5,     4,   362,   360,     5,   360,     5,
     365,   362,   370,   370,   360,    27,    49,    52,    63,    86,
     104,   356,   383,     4,   362,   360,   377,   362,     5,   370,
     370,   360,   362,   362,   370,   370,   360,   362,   360,     5,
     360,   228,   228,   360,   360,   228,   360,   228,   360,   360,
     512,   520,   360,   228,   228,   360,   360,   360,   360,   360,
     360,   360,   360,     5,   309,   360,   503,   360,   360,   228,
     360,   360,   360,   360,   370,   377,     5,   370,   370,   360,
     360,   377,   360,   360,   360,   370,   360,   360,     5,     4,
     360,   360,   360,   360,     5,     5,     4,   387,     5,     5,
       4,     4,     4,     5,     5,     4,     4,     5,     5,     4,
       5,     5,     4,   360,   360,   360,   360,   377,   360,   370,
     372,   360,   377,   360,   360,   360,   360,   360,     5,   360,
       4,     6,   360,   360,     4,   370,   360,   377,   180,   375,
     360,   375,   378,   377,   370,   360,   360,     4,   360,   370,
     370,   360,     4,     5,     5,     5,     5,     5,   370,   377,
     370,   370,   370,   370,   372,   370,   377,   370,   370,   370,
     372,   370,   370,   370,   370,   372,   370,   370,   370,   360,
     370,   370,   370,   370,   370,   370,   370,   360,   360,     4,
     360,     5,     4,   360,   382,     5,     5,     5,   380,     4,
       4,     5,   382,   381,     4,   382,     5,     5,     5,   381,
     381,   380,     4,     4,     5,    14,    15,    62,   193,   194,
     268,   278,   279,   309,    14,    15,    62,   193,   194,   268,
     278,   279,   309,    14,    15,    62,   193,   194,   268,   278,
     279,   309,   276,     5,     5,     5,   381,   381,   380,     4,
       4,   380,     5,   276,     5,     5,     5,   381,   381,   380,
       4,     4,   380,     5,   276,     5,     5,     5,   381,   381,
     380,     4,     4,   380,     5,     5,     5,     5,   381,   381,
     380,     4,     4,     5,   381,     4,     4,   381,     4,     4,
     382,     5,   377,   370,   360,   360,   370,   360,     5,   365,
       5,   370,   362,     5,   370,   377,     5,   365,   360,   360,
     360,   360,   360,   360,   360,   360,   360,     4,     4,     5,
       4,     4,   360,   370,   360,     5,   365,   362,   377,   377,
     360,   369,   377,   377,   360,   377,   377,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,    56,    67,    94,
     131,   289,   291,   345,   517,   518,   519,   530,   531,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   370,     5,   360,   360,   360,   360,     4,     4,   377,
     378,     4,   504,   377,   377,   369,   360,     4,   377,     4,
     387,   387,   387,   365,   360,   360,   360,   377,   360,   369,
     360,   360,    12,     5,     5,     4,   360,   360,     4,   377,
     370,   360,   360,   378,   379,   360,     5,   360,   372,     5,
       5,     5,     5,     5,   377,   379,   379,   379,   377,   379,
     378,   379,   379,   377,   379,   379,   379,   377,   379,   379,
     377,   370,   379,   377,   379,   379,   377,   379,   377,     4,
     372,     5,   360,     4,   382,   381,     4,   381,     5,     5,
       5,   381,   381,   380,     4,     4,     5,     5,     5,     5,
     381,   381,   380,     4,     4,     5,     5,     5,     5,   381,
     381,   380,     4,     4,     5,   381,   382,   382,   382,   382,
     382,     4,   382,   382,     4,   381,   381,   382,   382,   382,
     382,   382,     4,   382,   382,     4,   381,   381,     4,     4,
     381,     4,   381,   381,     4,     4,     4,   371,   379,     4,
     370,   379,   360,   370,     4,   379,   379,   370,     4,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     370,   379,   360,   370,     4,   369,   369,   370,   369,   369,
     370,   370,   369,   369,   360,   360,   360,   360,   360,   360,
     365,   360,   360,   360,   357,   357,   357,   357,   357,   357,
     357,   518,   357,   365,   360,   360,   360,   360,   365,   360,
     360,   360,   360,   360,   360,   377,   360,   309,   364,   365,
     360,   360,   378,   362,     4,     4,   378,     4,   360,   369,
     360,    60,   360,     5,     5,   360,     4,   375,   379,     5,
       4,     5,     4,     5,   370,     5,   378,   379,   378,   378,
     378,     5,     4,   360,   382,   381,   382,   382,   382,   382,
     382,     4,   382,   382,   381,   382,   382,   382,   382,   382,
       4,   382,   382,   381,   382,   382,   382,   382,   382,     4,
     382,   382,   381,   382,   381,     4,   382,   382,   381,     4,
     382,   381,     4,   381,   381,   377,   370,   379,     4,   377,
     360,   377,   360,   360,   360,   379,     4,   377,   360,   369,
     379,   360,   369,   379,   379,   370,   360,     4,   384,   384,
     360,   360,   384,   365,   384,   520,   370,   500,     5,     4,
       5,     5,     5,     4,   362,   365,   384,   384,   360,   360,
     365,   360,   360,   360,   360,   360,   369,   360,     5,   520,
     360,   384,   362,   521,   522,     5,   362,     4,     5,   360,
       5,     4,     6,   360,    32,   286,   421,   370,     5,    32,
     286,   386,   370,   421,   360,   381,   382,   381,   382,   381,
     382,   382,   381,   382,   381,   381,   360,   379,   370,   370,
     360,   370,   360,   370,   370,   360,   370,   379,     4,   520,
     520,   364,   360,   520,     4,   520,   377,     5,     4,     4,
     520,   520,   364,   360,     4,   520,   520,   360,   370,   520,
     520,   520,   521,   527,   528,   519,   525,   526,     4,     5,
       5,     6,     4,   190,   307,   352,   360,   412,     4,   370,
       4,   382,   382,   382,   382,   382,   371,   379,   379,   360,
     379,     4,   379,   379,   360,   379,   360,   520,   520,     4,
     360,   520,     5,   360,   520,     4,   360,   520,   377,   527,
     529,   530,   357,   526,     5,     5,     4,   360,   413,   360,
     413,   377,   379,     4,   370,   372,     4,   365,   364,   360,
     360,   364,   360,   370,   530,   362,     5,     5,   360,   360,
     360,   360,   386,     5,   370,   372,   377,   370,   372,   520,
     360,     4,   520,   360,   379,     5,     5,   360,     5,   360,
     377,   377,     4,   520,     4,     5,     5,     5,   364,   364,
     520,   520,   520
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

  case 6:
#line 468 "frame/parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 8:
#line 470 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 9:
#line 471 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 11:
#line 473 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 18:
#line 480 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 23:
#line 485 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 24:
#line 486 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 26:
#line 488 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 33:
#line 495 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 37:
#line 499 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 40:
#line 502 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 45:
#line 507 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 47:
#line 509 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 49:
#line 511 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 51:
#line 513 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 56:
#line 520 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 57:
#line 521 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 58:
#line 524 "frame/parser.Y"
    {yydebug=1;;}
    break;

  case 59:
#line 525 "frame/parser.Y"
    {yydebug=0;;}
    break;

  case 60:
#line 526 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 61:
#line 527 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 62:
#line 528 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 529 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 530 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 531 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 532 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 533 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 534 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 535 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 538 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
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
#line 543 "frame/parser.Y"
    {(yyval.integer)=1;;}
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
#line 548 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 79:
#line 551 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 80:
#line 552 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 81:
#line 553 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 82:
#line 554 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 83:
#line 555 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 84:
#line 558 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 85:
#line 559 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 86:
#line 562 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 87:
#line 563 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 88:
#line 564 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 89:
#line 567 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 90:
#line 570 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 91:
#line 573 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 92:
#line 577 "frame/parser.Y"
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

  case 93:
#line 589 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 94:
#line 596 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 95:
#line 603 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 96:
#line 610 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 97:
#line 611 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 98:
#line 612 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 99:
#line 613 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 100:
#line 614 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 101:
#line 617 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 102:
#line 618 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 103:
#line 619 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 104:
#line 620 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 105:
#line 621 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 106:
#line 622 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 107:
#line 623 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 108:
#line 624 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 109:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 110:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 111:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 112:
#line 628 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 113:
#line 629 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 114:
#line 630 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 115:
#line 631 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 116:
#line 632 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 117:
#line 633 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 118:
#line 634 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 119:
#line 635 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 120:
#line 636 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 121:
#line 637 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 122:
#line 638 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 123:
#line 639 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 124:
#line 640 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 125:
#line 641 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 126:
#line 642 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 127:
#line 643 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 128:
#line 644 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 129:
#line 647 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 130:
#line 648 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 131:
#line 651 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 132:
#line 652 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 133:
#line 653 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 134:
#line 654 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 135:
#line 655 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 136:
#line 656 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 137:
#line 659 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 138:
#line 660 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 139:
#line 661 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 140:
#line 662 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 141:
#line 663 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 142:
#line 666 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 143:
#line 667 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 144:
#line 668 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 145:
#line 669 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 146:
#line 670 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 147:
#line 671 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 148:
#line 672 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 149:
#line 673 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 150:
#line 676 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 151:
#line 677 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 152:
#line 678 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 153:
#line 679 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 154:
#line 680 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 155:
#line 683 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 156:
#line 684 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 157:
#line 685 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 158:
#line 686 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 159:
#line 687 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 160:
#line 688 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 161:
#line 689 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 162:
#line 690 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 163:
#line 693 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 164:
#line 694 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 165:
#line 695 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 166:
#line 698 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 167:
#line 699 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 168:
#line 700 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 169:
#line 701 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 170:
#line 704 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 171:
#line 705 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 172:
#line 706 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
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
#line 711 "frame/parser.Y"
    {;}
    break;

  case 176:
#line 714 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 177:
#line 715 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 178:
#line 716 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 179:
#line 719 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 180:
#line 720 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 181:
#line 721 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 182:
#line 722 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 183:
#line 723 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 184:
#line 724 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 185:
#line 725 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 186:
#line 726 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 187:
#line 729 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 188:
#line 730 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 189:
#line 733 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 190:
#line 734 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 191:
#line 735 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 192:
#line 736 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 193:
#line 737 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 194:
#line 738 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 195:
#line 741 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 196:
#line 742 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 197:
#line 743 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 198:
#line 746 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 199:
#line 747 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 200:
#line 748 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 201:
#line 749 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 202:
#line 750 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 203:
#line 751 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 208:
#line 758 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 209:
#line 759 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 210:
#line 760 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 211:
#line 762 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 212:
#line 765 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 213:
#line 766 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 214:
#line 769 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 215:
#line 770 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 216:
#line 773 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 217:
#line 774 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 218:
#line 777 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 219:
#line 779 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 221:
#line 783 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 222:
#line 784 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 225:
#line 787 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 227:
#line 789 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 228:
#line 792 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 229:
#line 793 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 230:
#line 796 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 231:
#line 797 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 232:
#line 799 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 233:
#line 801 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 234:
#line 802 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 235:
#line 803 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 236:
#line 805 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 237:
#line 807 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 238:
#line 810 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 239:
#line 811 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 240:
#line 814 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 241:
#line 816 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 242:
#line 819 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 243:
#line 821 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 244:
#line 824 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 245:
#line 828 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 246:
#line 829 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 248:
#line 833 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 249:
#line 834 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 250:
#line 835 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 254:
#line 841 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 255:
#line 842 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 257:
#line 845 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 258:
#line 850 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 259:
#line 851 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 260:
#line 854 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 261:
#line 855 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 262:
#line 856 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 263:
#line 857 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 264:
#line 858 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 265:
#line 861 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 266:
#line 862 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 267:
#line 863 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 268:
#line 864 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 269:
#line 867 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 270:
#line 869 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 271:
#line 874 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 272:
#line 879 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 273:
#line 886 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 274:
#line 888 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 275:
#line 889 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 277:
#line 891 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 278:
#line 895 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 279:
#line 897 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 280:
#line 899 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 281:
#line 900 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 287:
#line 911 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 288:
#line 913 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 289:
#line 915 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 290:
#line 920 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 291:
#line 924 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 292:
#line 927 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 293:
#line 928 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 294:
#line 931 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 295:
#line 932 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 296:
#line 934 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 297:
#line 940 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 298:
#line 941 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 299:
#line 942 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 300:
#line 943 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 301:
#line 946 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 302:
#line 947 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 303:
#line 950 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 304:
#line 951 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 305:
#line 954 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 306:
#line 955 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 307:
#line 959 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 308:
#line 961 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 309:
#line 964 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 310:
#line 966 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 311:
#line 969 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 313:
#line 971 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 314:
#line 972 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 315:
#line 973 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 316:
#line 976 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 317:
#line 978 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 318:
#line 979 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 319:
#line 980 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 320:
#line 981 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 321:
#line 985 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 322:
#line 987 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 323:
#line 988 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 324:
#line 989 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 325:
#line 992 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 326:
#line 994 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 327:
#line 996 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 328:
#line 998 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 329:
#line 1001 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 330:
#line 1004 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 331:
#line 1005 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 332:
#line 1006 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 333:
#line 1009 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 334:
#line 1012 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 348:
#line 1026 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 351:
#line 1029 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 352:
#line 1031 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 355:
#line 1034 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 356:
#line 1035 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 359:
#line 1038 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 360:
#line 1039 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 362:
#line 1042 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 364:
#line 1044 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 366:
#line 1046 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 368:
#line 1048 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 369:
#line 1050 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 370:
#line 1052 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 372:
#line 1054 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 373:
#line 1057 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 374:
#line 1058 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 375:
#line 1059 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 376:
#line 1060 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 377:
#line 1061 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 378:
#line 1062 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 380:
#line 1064 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 381:
#line 1067 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 382:
#line 1068 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 383:
#line 1069 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 384:
#line 1072 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 385:
#line 1075 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 386:
#line 1077 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 387:
#line 1079 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 388:
#line 1080 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 389:
#line 1081 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 391:
#line 1083 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 393:
#line 1086 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 394:
#line 1092 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 395:
#line 1093 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 396:
#line 1096 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 397:
#line 1097 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 398:
#line 1098 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 399:
#line 1101 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 400:
#line 1102 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 402:
#line 1108 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 403:
#line 1110 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 404:
#line 1112 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 405:
#line 1115 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 407:
#line 1117 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 408:
#line 1121 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 409:
#line 1125 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 411:
#line 1127 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 412:
#line 1128 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 413:
#line 1129 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 414:
#line 1130 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 415:
#line 1131 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 417:
#line 1133 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 418:
#line 1134 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 419:
#line 1137 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 420:
#line 1138 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 421:
#line 1139 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 422:
#line 1142 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 423:
#line 1143 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 424:
#line 1147 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 425:
#line 1149 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 426:
#line 1157 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 427:
#line 1159 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 428:
#line 1161 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 429:
#line 1164 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 430:
#line 1166 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 431:
#line 1167 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 432:
#line 1170 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 433:
#line 1173 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 434:
#line 1175 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 435:
#line 1179 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 436:
#line 1181 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 437:
#line 1184 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 438:
#line 1188 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 439:
#line 1189 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 440:
#line 1191 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)), (Coord::InternalSystem)(yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 441:
#line 1194 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 442:
#line 1195 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 444:
#line 1199 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 445:
#line 1200 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 446:
#line 1201 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 447:
#line 1204 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 448:
#line 1206 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 449:
#line 1207 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 451:
#line 1209 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 455:
#line 1213 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 456:
#line 1214 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 457:
#line 1215 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 458:
#line 1217 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 460:
#line 1219 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 461:
#line 1222 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 462:
#line 1224 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 463:
#line 1226 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 464:
#line 1227 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 465:
#line 1228 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 466:
#line 1229 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 467:
#line 1232 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 468:
#line 1233 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 469:
#line 1237 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 470:
#line 1239 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 471:
#line 1242 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 472:
#line 1245 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 473:
#line 1246 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 474:
#line 1248 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 475:
#line 1250 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 476:
#line 1252 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 477:
#line 1255 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 478:
#line 1256 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 479:
#line 1257 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 480:
#line 1260 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 481:
#line 1261 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 482:
#line 1262 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 483:
#line 1263 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 484:
#line 1264 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 485:
#line 1265 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 486:
#line 1266 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 487:
#line 1269 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 488:
#line 1272 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 489:
#line 1273 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 490:
#line 1274 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 491:
#line 1277 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 492:
#line 1278 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 493:
#line 1279 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 494:
#line 1280 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 495:
#line 1281 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 496:
#line 1282 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 501:
#line 1289 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 502:
#line 1290 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 503:
#line 1291 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 504:
#line 1294 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 505:
#line 1295 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 506:
#line 1298 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 507:
#line 1299 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 508:
#line 1302 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 509:
#line 1303 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 510:
#line 1306 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 511:
#line 1307 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 512:
#line 1310 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 514:
#line 1312 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 515:
#line 1315 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 516:
#line 1316 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 518:
#line 1320 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 519:
#line 1324 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 520:
#line 1327 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 521:
#line 1334 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 522:
#line 1335 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 523:
#line 1338 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 524:
#line 1339 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 527:
#line 1342 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 528:
#line 1343 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 529:
#line 1344 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 530:
#line 1345 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 532:
#line 1347 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 533:
#line 1348 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 534:
#line 1349 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 536:
#line 1351 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 537:
#line 1352 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 538:
#line 1353 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 539:
#line 1354 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 541:
#line 1358 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 542:
#line 1361 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 543:
#line 1362 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 544:
#line 1365 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 545:
#line 1366 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 546:
#line 1367 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 547:
#line 1368 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 548:
#line 1371 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 549:
#line 1372 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 550:
#line 1373 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 551:
#line 1374 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 552:
#line 1377 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 553:
#line 1378 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 554:
#line 1379 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 555:
#line 1380 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 556:
#line 1381 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 557:
#line 1382 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 558:
#line 1385 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 559:
#line 1386 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 560:
#line 1387 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 563:
#line 1391 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 564:
#line 1392 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 565:
#line 1395 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 566:
#line 1398 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 567:
#line 1399 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 568:
#line 1403 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 569:
#line 1405 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 570:
#line 1406 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 577:
#line 1418 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 578:
#line 1420 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 579:
#line 1422 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 580:
#line 1423 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 581:
#line 1425 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 582:
#line 1427 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 583:
#line 1429 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 584:
#line 1431 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 585:
#line 1433 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 587:
#line 1437 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 588:
#line 1438 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 589:
#line 1439 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 590:
#line 1440 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 591:
#line 1441 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 592:
#line 1443 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 593:
#line 1444 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 594:
#line 1445 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 595:
#line 1446 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 596:
#line 1449 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 597:
#line 1453 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 598:
#line 1455 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 599:
#line 1457 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 600:
#line 1459 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 601:
#line 1461 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 602:
#line 1463 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 603:
#line 1465 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 604:
#line 1467 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 605:
#line 1470 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 606:
#line 1472 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 607:
#line 1474 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 613:
#line 1482 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 614:
#line 1483 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 615:
#line 1484 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 616:
#line 1485 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 617:
#line 1486 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 618:
#line 1487 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 619:
#line 1489 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 620:
#line 1491 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 621:
#line 1492 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 622:
#line 1493 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 623:
#line 1494 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 624:
#line 1497 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 625:
#line 1498 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 626:
#line 1499 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 627:
#line 1500 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 628:
#line 1501 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 629:
#line 1503 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 630:
#line 1504 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 631:
#line 1505 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 632:
#line 1506 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 638:
#line 1517 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 639:
#line 1520 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 640:
#line 1523 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 641:
#line 1526 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 642:
#line 1529 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 643:
#line 1532 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 644:
#line 1535 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 645:
#line 1538 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 646:
#line 1541 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 647:
#line 1546 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 648:
#line 1549 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 649:
#line 1552 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 650:
#line 1555 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 651:
#line 1558 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 652:
#line 1561 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 653:
#line 1564 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 654:
#line 1567 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 655:
#line 1570 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 656:
#line 1573 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 657:
#line 1576 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 658:
#line 1581 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 659:
#line 1584 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 660:
#line 1587 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 661:
#line 1590 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 662:
#line 1593 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 663:
#line 1596 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 664:
#line 1599 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 665:
#line 1602 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 666:
#line 1605 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 667:
#line 1610 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 668:
#line 1612 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 669:
#line 1614 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 670:
#line 1616 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 671:
#line 1618 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 672:
#line 1620 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 673:
#line 1625 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 674:
#line 1627 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 675:
#line 1629 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 676:
#line 1633 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 677:
#line 1636 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 678:
#line 1639 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 679:
#line 1642 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 680:
#line 1645 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 681:
#line 1648 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 682:
#line 1651 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 683:
#line 1654 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 684:
#line 1657 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 685:
#line 1660 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 686:
#line 1663 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 687:
#line 1667 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 688:
#line 1668 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 689:
#line 1669 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 690:
#line 1670 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1671 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 692:
#line 1672 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 693:
#line 1674 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 694:
#line 1676 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 695:
#line 1677 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 696:
#line 1678 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 697:
#line 1679 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 698:
#line 1682 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 699:
#line 1683 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 700:
#line 1684 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 701:
#line 1685 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 702:
#line 1686 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 703:
#line 1688 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 704:
#line 1689 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 705:
#line 1690 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 706:
#line 1691 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 707:
#line 1695 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 708:
#line 1697 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 709:
#line 1698 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 710:
#line 1700 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 711:
#line 1702 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 712:
#line 1704 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 713:
#line 1707 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 714:
#line 1708 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 715:
#line 1711 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 716:
#line 1712 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 717:
#line 1713 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 718:
#line 1716 "frame/parser.Y"
    {
#ifdef MAC_OSX_TK
	  fr->macosxPrintCmd();
#endif
	;}
    break;

  case 719:
#line 1723 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 720:
#line 1724 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 721:
#line 1725 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 722:
#line 1726 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 723:
#line 1727 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 724:
#line 1728 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 725:
#line 1729 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 726:
#line 1733 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 728:
#line 1741 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 729:
#line 1742 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 730:
#line 1744 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 731:
#line 1746 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 732:
#line 1747 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 733:
#line 1748 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 735:
#line 1749 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 736:
#line 1750 "frame/parser.Y"
    {fr->markerDeleteCmd();;}
    break;

  case 737:
#line 1751 "frame/parser.Y"
    {fr->markerDeleteAllCmd();;}
    break;

  case 739:
#line 1753 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 740:
#line 1754 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 741:
#line 1756 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 742:
#line 1758 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 743:
#line 1760 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 744:
#line 1763 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 745:
#line 1765 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 746:
#line 1766 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 747:
#line 1768 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 748:
#line 1771 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 749:
#line 1774 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 750:
#line 1776 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 751:
#line 1779 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 752:
#line 1782 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 753:
#line 1785 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 754:
#line 1788 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 755:
#line 1792 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 756:
#line 1796 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 757:
#line 1801 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 758:
#line 1805 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 759:
#line 1806 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 760:
#line 1808 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 761:
#line 1809 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 762:
#line 1811 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 763:
#line 1813 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 764:
#line 1815 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 765:
#line 1817 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 766:
#line 1818 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 767:
#line 1820 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 768:
#line 1822 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 769:
#line 1825 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 770:
#line 1829 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 771:
#line 1833 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 772:
#line 1835 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 773:
#line 1837 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 774:
#line 1839 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 775:
#line 1841 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 776:
#line 1843 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 777:
#line 1845 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 778:
#line 1847 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 779:
#line 1849 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 780:
#line 1851 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 781:
#line 1853 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 782:
#line 1855 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 783:
#line 1857 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 784:
#line 1859 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 785:
#line 1860 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 786:
#line 1862 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 787:
#line 1864 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 788:
#line 1865 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 789:
#line 1866 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 790:
#line 1868 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 791:
#line 1870 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 792:
#line 1871 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 793:
#line 1872 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 794:
#line 1873 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 795:
#line 1875 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 796:
#line 1876 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 797:
#line 1878 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 798:
#line 1882 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 799:
#line 1885 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 800:
#line 1888 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 801:
#line 1892 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 802:
#line 1896 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 803:
#line 1901 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 804:
#line 1905 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 805:
#line 1906 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 806:
#line 1907 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 807:
#line 1909 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 808:
#line 1911 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 809:
#line 1915 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 810:
#line 1916 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 811:
#line 1917 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 812:
#line 1919 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 813:
#line 1922 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 814:
#line 1925 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 815:
#line 1928 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 816:
#line 1929 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 817:
#line 1931 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 818:
#line 1934 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 819:
#line 1938 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 820:
#line 1940 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 821:
#line 1941 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 822:
#line 1943 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 823:
#line 1946 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 824:
#line 1949 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 825:
#line 1950 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 826:
#line 1952 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 827:
#line 1953 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 828:
#line 1954 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 829:
#line 1956 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 830:
#line 1957 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 831:
#line 1959 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 832:
#line 1962 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 833:
#line 1965 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 834:
#line 1967 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 835:
#line 1968 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 839:
#line 1973 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 840:
#line 1974 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 841:
#line 1976 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 842:
#line 1978 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 843:
#line 1980 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 844:
#line 1981 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 845:
#line 1983 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer));;}
    break;

  case 846:
#line 1984 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 849:
#line 1989 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 850:
#line 1990 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 851:
#line 1991 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 852:
#line 1992 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 853:
#line 1993 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 854:
#line 1994 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 855:
#line 1995 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 856:
#line 1996 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 857:
#line 1997 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 858:
#line 1998 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 859:
#line 2000 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 860:
#line 2002 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 861:
#line 2003 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 862:
#line 2004 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 863:
#line 2005 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 864:
#line 2006 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 865:
#line 2008 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 866:
#line 2009 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 867:
#line 2010 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 868:
#line 2011 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 869:
#line 2012 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 870:
#line 2014 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 871:
#line 2015 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 872:
#line 2016 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 873:
#line 2017 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 874:
#line 2018 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 875:
#line 2019 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 876:
#line 2022 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 877:
#line 2023 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 878:
#line 2024 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 879:
#line 2025 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 880:
#line 2026 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 881:
#line 2027 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 882:
#line 2028 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 883:
#line 2029 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 884:
#line 2030 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 885:
#line 2031 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 886:
#line 2032 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 887:
#line 2033 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 888:
#line 2034 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 889:
#line 2035 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 890:
#line 2036 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 891:
#line 2037 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 892:
#line 2038 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 893:
#line 2039 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 894:
#line 2040 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 895:
#line 2041 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 896:
#line 2042 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 897:
#line 2045 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 898:
#line 2046 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 899:
#line 2047 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 900:
#line 2048 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 901:
#line 2049 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 902:
#line 2051 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 903:
#line 2061 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 904:
#line 2069 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 905:
#line 2078 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 906:
#line 2086 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 907:
#line 2093 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 908:
#line 2100 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 909:
#line 2108 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 910:
#line 2116 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 911:
#line 2121 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 912:
#line 2126 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2131 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2136 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2141 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2146 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2151 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2160 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2170 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2180 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2189 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 922:
#line 2197 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 923:
#line 2207 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 924:
#line 2217 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 925:
#line 2227 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 926:
#line 2239 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 927:
#line 2248 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 929:
#line 2256 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 930:
#line 2258 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 931:
#line 2260 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 932:
#line 2265 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 933:
#line 2268 "frame/parser.Y"
    {(yyval.dash)[0] = (yyvsp[(1) - (2)].integer); (yyval.dash)[1] = (yyvsp[(2) - (2)].integer);;}
    break;

  case 934:
#line 2272 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 935:
#line 2274 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 936:
#line 2275 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 937:
#line 2278 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 938:
#line 2279 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 939:
#line 2280 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 940:
#line 2281 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 941:
#line 2282 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 942:
#line 2283 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 943:
#line 2284 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 945:
#line 2288 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 946:
#line 2289 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 947:
#line 2290 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 948:
#line 2291 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 949:
#line 2292 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 950:
#line 2295 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 951:
#line 2297 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 952:
#line 2299 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 953:
#line 2301 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 954:
#line 2303 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 955:
#line 2305 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 956:
#line 2307 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 957:
#line 2308 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 958:
#line 2309 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 959:
#line 2311 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 960:
#line 2313 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 961:
#line 2315 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 962:
#line 2317 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 963:
#line 2319 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 964:
#line 2320 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 965:
#line 2321 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 966:
#line 2323 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 967:
#line 2325 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 968:
#line 2328 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 969:
#line 2330 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 970:
#line 2332 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 971:
#line 2333 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 972:
#line 2334 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 973:
#line 2335 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 974:
#line 2337 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 975:
#line 2338 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 976:
#line 2339 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 977:
#line 2340 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 978:
#line 2341 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 979:
#line 2343 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 980:
#line 2345 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 981:
#line 2346 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 982:
#line 2348 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 983:
#line 2350 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 984:
#line 2352 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 985:
#line 2353 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 986:
#line 2355 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 987:
#line 2357 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 988:
#line 2358 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 989:
#line 2359 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 990:
#line 2360 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 991:
#line 2362 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 992:
#line 2364 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 993:
#line 2367 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 994:
#line 2370 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 995:
#line 2371 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 996:
#line 2372 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 997:
#line 2374 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 998:
#line 2377 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 999:
#line 2380 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1000:
#line 2381 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1001:
#line 2382 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1002:
#line 2383 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1003:
#line 2385 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1004:
#line 2387 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1005:
#line 2389 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1006:
#line 2390 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1007:
#line 2392 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1008:
#line 2393 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1009:
#line 2394 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1010:
#line 2395 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1011:
#line 2396 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1012:
#line 2398 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1013:
#line 2400 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1014:
#line 2402 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1015:
#line 2404 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1017:
#line 2406 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1018:
#line 2407 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1019:
#line 2409 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1020:
#line 2411 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1021:
#line 2412 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1022:
#line 2413 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1024:
#line 2415 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1026:
#line 2419 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1027:
#line 2420 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1028:
#line 2421 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1029:
#line 2422 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1030:
#line 2423 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1031:
#line 2424 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1032:
#line 2426 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1033:
#line 2427 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1034:
#line 2429 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1035:
#line 2432 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1036:
#line 2433 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1037:
#line 2434 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1038:
#line 2435 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1039:
#line 2438 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1040:
#line 2439 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1041:
#line 2442 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1042:
#line 2443 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1043:
#line 2446 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1044:
#line 2447 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1045:
#line 2450 "frame/parser.Y"
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

  case 1046:
#line 2463 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1047:
#line 2464 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1048:
#line 2468 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1049:
#line 2469 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1050:
#line 2473 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1051:
#line 2474 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1052:
#line 2479 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer),
	    0, propQMask, propQValue, taglist);;}
    break;

  case 1053:
#line 2484 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer),
	    1, propQMask, propQValue, taglist);;}
    break;

  case 1054:
#line 2490 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1055:
#line 2492 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1056:
#line 2495 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1057:
#line 2497 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1058:
#line 2500 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].dash), (yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].str));;}
    break;

  case 1059:
#line 2503 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1060:
#line 2504 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1061:
#line 2505 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1062:
#line 2506 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1063:
#line 2507 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1064:
#line 2508 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1065:
#line 2510 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1068:
#line 2517 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1069:
#line 2518 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1070:
#line 2519 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1071:
#line 2520 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1072:
#line 2521 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1073:
#line 2522 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1076:
#line 2527 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1077:
#line 2528 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1078:
#line 2529 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1079:
#line 2530 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1080:
#line 2531 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1081:
#line 2532 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1082:
#line 2533 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1083:
#line 2534 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1084:
#line 2535 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1085:
#line 2536 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1086:
#line 2537 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1089:
#line 2544 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1090:
#line 2545 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1092:
#line 2548 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1093:
#line 2549 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1094:
#line 2550 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1095:
#line 2551 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1096:
#line 2554 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1097:
#line 2555 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1100:
#line 2563 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1101:
#line 2566 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1102:
#line 2567 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1106:
#line 2574 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1107:
#line 2577 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1108:
#line 2581 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1109:
#line 2582 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1110:
#line 2583 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1111:
#line 2584 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1112:
#line 2585 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1113:
#line 2586 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1114:
#line 2587 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1115:
#line 2588 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1116:
#line 2594 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1117:
#line 2595 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1118:
#line 2596 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1119:
#line 2597 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1120:
#line 2601 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1121:
#line 2602 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1122:
#line 2604 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1123:
#line 2609 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1125:
#line 2611 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1127:
#line 2613 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1128:
#line 2616 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1129:
#line 2618 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1130:
#line 2623 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1131:
#line 2626 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1132:
#line 2627 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1133:
#line 2628 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1134:
#line 2631 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1135:
#line 2633 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1136:
#line 2637 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1137:
#line 2638 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1138:
#line 2642 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1139:
#line 2643 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1140:
#line 2644 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1141:
#line 2645 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1142:
#line 2651 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1143:
#line 2652 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1144:
#line 2658 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1145:
#line 2659 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1146:
#line 2660 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1147:
#line 2661 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1150:
#line 2669 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1151:
#line 2671 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1152:
#line 2672 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1153:
#line 2673 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1154:
#line 2677 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1155:
#line 2678 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1156:
#line 2679 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1157:
#line 2680 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1158:
#line 2683 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1159:
#line 2684 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1160:
#line 2687 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1161:
#line 2688 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1162:
#line 2689 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1163:
#line 2692 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1164:
#line 2693 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1165:
#line 2694 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1166:
#line 2697 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1167:
#line 2698 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1169:
#line 2700 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1170:
#line 2701 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1171:
#line 2704 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1172:
#line 2705 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1173:
#line 2706 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1178:
#line 2713 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1179:
#line 2717 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1180:
#line 2719 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1181:
#line 2721 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1183:
#line 2726 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1184:
#line 2728 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1185:
#line 2730 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1195:
#line 2743 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1196:
#line 2744 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1197:
#line 2745 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1198:
#line 2748 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1199:
#line 2749 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1200:
#line 2750 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1201:
#line 2753 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1202:
#line 2754 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1203:
#line 2755 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1204:
#line 2758 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1205:
#line 2759 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1206:
#line 2760 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1208:
#line 2764 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1209:
#line 2765 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1210:
#line 2766 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1211:
#line 2769 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1212:
#line 2770 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1213:
#line 2771 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1214:
#line 2774 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1215:
#line 2775 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1216:
#line 2776 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1217:
#line 2779 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1218:
#line 2780 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1219:
#line 2781 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1220:
#line 2784 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1221:
#line 2785 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1222:
#line 2786 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1223:
#line 2790 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1224:
#line 2792 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1225:
#line 2794 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1226:
#line 2798 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1227:
#line 2802 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1228:
#line 2804 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1229:
#line 2808 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1230:
#line 2811 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1231:
#line 2812 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1232:
#line 2813 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1233:
#line 2814 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1234:
#line 2817 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1235:
#line 2819 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1236:
#line 2820 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1237:
#line 2822 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1239:
#line 2826 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1240:
#line 2827 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1241:
#line 2828 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1242:
#line 2831 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1243:
#line 2832 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1244:
#line 2836 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1246:
#line 2838 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1249:
#line 2843 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1250:
#line 2844 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1251:
#line 2845 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1252:
#line 2848 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1253:
#line 2849 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1254:
#line 2850 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1255:
#line 2853 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1256:
#line 2855 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1257:
#line 2860 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1258:
#line 2863 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1259:
#line 2870 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1260:
#line 2872 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1261:
#line 2874 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1262:
#line 2879 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1264:
#line 2883 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1265:
#line 2884 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1266:
#line 2885 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1267:
#line 2887 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1268:
#line 2889 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1269:
#line 2894 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 10957 "frame/parser.C"
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


#line 2898 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

