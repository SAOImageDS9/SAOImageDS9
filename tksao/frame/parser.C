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
#define YYFINAL  359
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5533

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  358
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  218
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1271
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2797

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
      59,    62,    65,    68,    70,    73,    77,    80,    84,    87,
      90,    93,    96,   100,   103,   107,   110,   113,   116,   119,
     122,   125,   127,   131,   134,   137,   140,   142,   145,   148,
     151,   153,   156,   158,   161,   164,   167,   170,   172,   174,
     176,   178,   181,   184,   187,   190,   193,   196,   199,   202,
     205,   208,   210,   212,   214,   216,   218,   220,   222,   224,
     226,   227,   230,   233,   235,   237,   238,   240,   242,   244,
     246,   248,   250,   252,   255,   258,   261,   264,   266,   268,
     270,   272,   274,   276,   278,   280,   282,   284,   286,   288,
     290,   292,   294,   296,   298,   300,   302,   304,   306,   308,
     310,   312,   314,   316,   318,   320,   322,   324,   326,   328,
     330,   332,   334,   335,   337,   339,   341,   343,   345,   346,
     348,   350,   352,   354,   356,   358,   360,   362,   364,   366,
     368,   370,   372,   374,   376,   378,   380,   381,   383,   385,
     387,   389,   391,   393,   395,   396,   398,   400,   401,   403,
     405,   407,   408,   410,   412,   413,   415,   417,   418,   420,
     422,   423,   425,   427,   429,   431,   433,   435,   437,   438,
     440,   442,   444,   446,   448,   450,   452,   453,   455,   457,
     458,   460,   462,   464,   466,   468,   471,   474,   477,   480,
     483,   486,   489,   492,   494,   497,   499,   502,   504,   507,
     510,   517,   520,   525,   528,   531,   534,   538,   541,   544,
     546,   549,   551,   554,   559,   565,   568,   572,   578,   585,
     587,   589,   591,   599,   611,   620,   633,   635,   638,   641,
     643,   645,   648,   651,   654,   657,   661,   665,   668,   671,
     673,   675,   677,   679,   681,   683,   685,   688,   691,   694,
     696,   700,   703,   706,   709,   716,   727,   729,   732,   734,
     741,   752,   754,   757,   760,   763,   766,   769,   772,   786,
     800,   813,   826,   828,   829,   831,   833,   838,   845,   847,
     849,   851,   853,   855,   857,   859,   861,   863,   868,   872,
     877,   878,   885,   894,   897,   901,   905,   909,   910,   915,
     920,   925,   930,   934,   938,   940,   944,   950,   955,   960,
     964,   967,   968,   970,   972,   976,   979,   982,   985,   988,
     991,   994,   997,  1000,  1003,  1006,  1009,  1012,  1015,  1018,
    1020,  1023,  1026,  1029,  1034,  1044,  1047,  1050,  1053,  1055,
    1059,  1062,  1065,  1067,  1070,  1079,  1082,  1084,  1087,  1089,
    1092,  1094,  1099,  1109,  1112,  1114,  1116,  1118,  1120,  1123,
    1125,  1127,  1130,  1132,  1133,  1136,  1139,  1141,  1142,  1145,
    1148,  1150,  1152,  1155,  1158,  1161,  1163,  1165,  1167,  1169,
    1171,  1173,  1174,  1176,  1179,  1181,  1186,  1192,  1193,  1196,
    1198,  1204,  1207,  1210,  1212,  1214,  1216,  1219,  1221,  1224,
    1226,  1228,  1229,  1231,  1233,  1234,  1236,  1242,  1249,  1253,
    1260,  1264,  1266,  1270,  1272,  1274,  1276,  1280,  1287,  1295,
    1301,  1303,  1305,  1310,  1316,  1318,  1322,  1323,  1325,  1328,
    1330,  1335,  1337,  1340,  1342,  1345,  1349,  1352,  1354,  1357,
    1359,  1364,  1367,  1369,  1371,  1375,  1377,  1380,  1384,  1387,
    1388,  1390,  1392,  1397,  1400,  1401,  1403,  1407,  1412,  1417,
    1418,  1420,  1422,  1424,  1426,  1428,  1430,  1432,  1434,  1436,
    1438,  1440,  1442,  1444,  1446,  1448,  1451,  1453,  1456,  1458,
    1461,  1464,  1467,  1470,  1472,  1474,  1476,  1477,  1479,  1480,
    1482,  1483,  1485,  1486,  1488,  1489,  1492,  1495,  1496,  1498,
    1501,  1503,  1510,  1516,  1518,  1520,  1522,  1525,  1528,  1531,
    1533,  1535,  1537,  1539,  1542,  1544,  1546,  1548,  1551,  1553,
    1555,  1557,  1560,  1563,  1566,  1567,  1569,  1570,  1572,  1574,
    1576,  1578,  1580,  1582,  1584,  1586,  1589,  1592,  1595,  1597,
    1600,  1604,  1606,  1609,  1612,  1617,  1624,  1626,  1637,  1639,
    1642,  1646,  1650,  1653,  1656,  1659,  1662,  1665,  1668,  1671,
    1676,  1681,  1686,  1690,  1694,  1700,  1705,  1710,  1715,  1719,
    1723,  1727,  1731,  1734,  1737,  1742,  1746,  1750,  1754,  1758,
    1763,  1768,  1773,  1778,  1784,  1789,  1796,  1804,  1809,  1814,
    1820,  1823,  1827,  1831,  1835,  1838,  1842,  1846,  1850,  1854,
    1859,  1863,  1869,  1876,  1880,  1884,  1889,  1893,  1897,  1901,
    1905,  1909,  1915,  1919,  1923,  1928,  1932,  1935,  1938,  1940,
    1944,  1949,  1954,  1959,  1964,  1969,  1976,  1981,  1986,  1992,
    1997,  2002,  2007,  2012,  2018,  2023,  2030,  2038,  2043,  2048,
    2054,  2060,  2066,  2072,  2078,  2084,  2092,  2098,  2104,  2111,
    2116,  2121,  2126,  2131,  2136,  2143,  2148,  2153,  2159,  2165,
    2171,  2177,  2183,  2190,  2196,  2204,  2213,  2219,  2225,  2232,
    2236,  2240,  2244,  2248,  2253,  2257,  2263,  2270,  2274,  2278,
    2283,  2287,  2291,  2295,  2299,  2303,  2309,  2313,  2317,  2322,
    2327,  2332,  2336,  2342,  2347,  2352,  2355,  2359,  2366,  2373,
    2375,  2377,  2379,  2382,  2385,  2388,  2392,  2396,  2399,  2412,
    2415,  2418,  2420,  2424,  2429,  2432,  2433,  2437,  2439,  2441,
    2444,  2447,  2450,  2453,  2456,  2461,  2466,  2471,  2475,  2480,
    2486,  2495,  2502,  2507,  2517,  2524,  2532,  2543,  2555,  2568,
    2578,  2584,  2589,  2596,  2600,  2606,  2612,  2619,  2625,  2630,
    2640,  2651,  2663,  2673,  2680,  2687,  2694,  2701,  2708,  2715,
    2722,  2729,  2736,  2744,  2752,  2755,  2760,  2765,  2770,  2775,
    2781,  2786,  2791,  2797,  2803,  2807,  2812,  2817,  2822,  2827,
    2835,  2845,  2852,  2863,  2875,  2888,  2898,  2902,  2905,  2909,
    2915,  2923,  2928,  2932,  2936,  2943,  2951,  2959,  2964,  2969,
    2974,  2984,  2989,  2993,  2998,  3006,  3014,  3017,  3021,  3025,
    3029,  3034,  3037,  3040,  3045,  3056,  3060,  3062,  3066,  3069,
    3072,  3075,  3078,  3082,  3088,  3093,  3099,  3102,  3110,  3114,
    3117,  3120,  3124,  3127,  3130,  3133,  3137,  3140,  3144,  3149,
    3153,  3157,  3164,  3169,  3172,  3176,  3179,  3182,  3187,  3191,
    3195,  3198,  3202,  3204,  3207,  3209,  3212,  3215,  3218,  3220,
    3222,  3224,  3226,  3229,  3231,  3234,  3237,  3239,  3242,  3245,
    3247,  3250,  3252,  3254,  3256,  3258,  3260,  3262,  3264,  3266,
    3267,  3269,  3272,  3275,  3278,  3282,  3288,  3296,  3304,  3311,
    3318,  3325,  3332,  3338,  3345,  3352,  3359,  3366,  3373,  3380,
    3387,  3399,  3407,  3415,  3423,  3433,  3443,  3454,  3467,  3480,
    3483,  3486,  3490,  3495,  3500,  3505,  3508,  3513,  3518,  3520,
    3522,  3524,  3526,  3528,  3530,  3532,  3534,  3537,  3539,  3541,
    3543,  3547,  3551,  3560,  3567,  3578,  3586,  3594,  3600,  3603,
    3606,  3610,  3615,  3621,  3625,  3631,  3637,  3641,  3646,  3652,
    3658,  3664,  3668,  3674,  3677,  3681,  3685,  3691,  3695,  3699,
    3703,  3708,  3714,  3720,  3724,  3730,  3736,  3740,  3745,  3751,
    3757,  3760,  3763,  3767,  3773,  3780,  3787,  3791,  3795,  3799,
    3806,  3812,  3818,  3821,  3825,  3829,  3835,  3842,  3846,  3849,
    3852,  3856,  3859,  3863,  3866,  3870,  3876,  3883,  3886,  3889,
    3892,  3894,  3899,  3904,  3906,  3909,  3912,  3915,  3918,  3921,
    3924,  3927,  3931,  3934,  3938,  3941,  3945,  3947,  3949,  3951,
    3953,  3955,  3956,  3959,  3960,  3963,  3964,  3966,  3967,  3968,
    3970,  3972,  3974,  3976,  3978,  3986,  3995,  3998,  4003,  4006,
    4011,  4018,  4021,  4023,  4025,  4029,  4033,  4035,  4040,  4043,
    4045,  4049,  4053,  4058,  4062,  4066,  4070,  4072,  4074,  4076,
    4078,  4080,  4082,  4084,  4086,  4088,  4090,  4092,  4094,  4096,
    4098,  4101,  4102,  4103,  4106,  4108,  4112,  4114,  4118,  4120,
    4123,  4126,  4128,  4132,  4133,  4134,  4137,  4140,  4142,  4146,
    4152,  4154,  4157,  4160,  4164,  4167,  4170,  4173,  4176,  4178,
    4180,  4182,  4184,  4189,  4192,  4196,  4200,  4203,  4207,  4210,
    4213,  4216,  4220,  4224,  4228,  4231,  4235,  4237,  4241,  4245,
    4247,  4250,  4253,  4256,  4259,  4269,  4276,  4278,  4280,  4282,
    4284,  4287,  4290,  4294,  4298,  4300,  4303,  4307,  4311,  4313,
    4316,  4318,  4320,  4322,  4324,  4326,  4329,  4332,  4337,  4339,
    4342,  4345,  4348,  4352,  4354,  4356,  4358,  4361,  4364,  4367,
    4370,  4373,  4377,  4381,  4385,  4389,  4393,  4397,  4401,  4403,
    4406,  4409,  4412,  4416,  4419,  4423,  4427,  4430,  4433,  4436,
    4439,  4442,  4445,  4448,  4451,  4454,  4457,  4460,  4463,  4466,
    4469,  4473,  4477,  4481,  4484,  4487,  4490,  4493,  4496,  4499,
    4502,  4505,  4508,  4511,  4514,  4517,  4521,  4525,  4529,  4534,
    4541,  4544,  4546,  4548,  4550,  4552,  4554,  4555,  4561,  4563,
    4570,  4574,  4576,  4579,  4582,  4585,  4589,  4593,  4596,  4599,
    4602,  4605,  4608,  4611,  4615,  4618,  4621,  4625,  4627,  4631,
    4636,  4638,  4641,  4647,  4654,  4661,  4664,  4666,  4669,  4672,
    4678,  4685
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
     152,   362,    -1,   152,    67,     5,    -1,   158,   474,    -1,
     164,    16,     4,    -1,   178,   477,    -1,   181,   495,    -1,
     182,   496,    -1,   183,   497,    -1,   186,   513,   498,    -1,
     187,   532,    -1,   200,    67,     5,    -1,   217,   533,    -1,
     218,   534,    -1,   219,   537,    -1,   240,    89,    -1,   233,
     539,    -1,   231,   538,    -1,   248,    -1,   244,   513,   541,
      -1,   250,   546,    -1,   252,   547,    -1,   257,   549,    -1,
     271,    -1,   277,   564,    -1,   292,     4,    -1,   293,   388,
      -1,   304,    -1,   306,   566,    -1,   312,    -1,   315,   568,
      -1,   316,   569,    -1,   346,   573,    -1,   353,   574,    -1,
       3,    -1,     4,    -1,   214,    -1,   213,    -1,   195,   362,
      -1,   220,   362,    -1,   222,   362,    -1,   316,   362,    -1,
      44,   362,    -1,    47,   362,    -1,    77,   362,    -1,    85,
     362,    -1,   145,   362,    -1,   250,   362,    -1,     4,    -1,
     349,    -1,   354,    -1,   214,    -1,   300,    -1,   205,    -1,
     355,    -1,   213,    -1,   121,    -1,    -1,   251,    38,    -1,
     136,    38,    -1,   251,    -1,   136,    -1,    -1,   365,    -1,
     360,    -1,     7,    -1,     8,    -1,     9,    -1,    10,    -1,
      11,    -1,   366,   366,    -1,   367,   368,    -1,   368,   368,
      -1,   360,   360,    -1,   159,    -1,   224,    -1,   103,    -1,
      19,    -1,   371,    -1,   316,    -1,   317,    -1,   318,    -1,
     319,    -1,   320,    -1,   321,    -1,   322,    -1,   323,    -1,
     324,    -1,   325,    -1,   326,    -1,   327,    -1,   328,    -1,
     329,    -1,   330,    -1,   331,    -1,   332,    -1,   333,    -1,
     334,    -1,   335,    -1,   336,    -1,   337,    -1,   338,    -1,
     339,    -1,   340,    -1,   341,    -1,   342,    -1,   343,    -1,
      57,    -1,   219,    -1,    -1,   350,    -1,   208,    -1,   200,
      -1,   207,    -1,   243,    -1,    -1,   280,    -1,   262,    -1,
      92,    -1,   172,    -1,   176,    -1,   180,    -1,   232,    -1,
     281,    -1,   282,    -1,    28,    -1,   273,    -1,   153,    -1,
      30,    -1,   259,    -1,   254,    -1,    96,    -1,   165,    -1,
      -1,   129,    -1,    35,    -1,   130,    -1,   166,    -1,   156,
      -1,   138,    -1,   108,    -1,    -1,    99,    -1,   266,    -1,
      -1,    99,    -1,    24,    -1,    25,    -1,    -1,   270,    -1,
     167,    -1,    -1,    17,    -1,   161,    -1,    -1,   159,    -1,
     187,    -1,    -1,    63,    -1,    49,    -1,   104,    -1,    86,
      -1,   356,    -1,    27,    -1,    52,    -1,    -1,     4,    -1,
      83,    -1,   154,    -1,   226,    -1,   227,    -1,   241,    -1,
     284,    -1,    -1,    32,    -1,   286,    -1,    -1,   201,    -1,
      42,    -1,    43,    -1,   173,    -1,   174,    -1,   310,   392,
      -1,    48,   389,    -1,    75,   390,    -1,   152,   391,    -1,
     189,   544,    -1,    37,   545,    -1,   258,   360,    -1,   294,
     360,    -1,   362,    -1,    67,     5,    -1,   362,    -1,    67,
       5,    -1,   362,    -1,    67,     5,    -1,   360,   360,    -1,
     228,   360,   360,   360,   360,   360,    -1,    12,   394,    -1,
      72,     5,     5,     5,    -1,   102,     4,    -1,   120,   395,
      -1,   137,   396,    -1,    54,   274,     4,    -1,   297,   397,
      -1,   124,     5,    -1,    60,    -1,   360,   360,    -1,   360,
      -1,   360,   360,    -1,   360,    12,   360,   360,    -1,   360,
     360,    12,   360,   360,    -1,   297,   360,    -1,   297,   360,
     360,    -1,   297,   360,    12,   360,   360,    -1,   297,   360,
     360,    12,   360,   360,    -1,    32,    -1,   286,    -1,   125,
      -1,   360,   360,    12,    60,     5,     5,     5,    -1,   360,
     360,     4,   360,   360,    12,    60,     5,     5,     5,     5,
      -1,   360,   360,    12,   360,   360,     5,     5,     5,    -1,
     360,   360,     4,   360,   360,    12,   360,   360,     5,     5,
       5,     5,    -1,   360,    -1,   360,   360,    -1,   297,   399,
      -1,   125,    -1,   360,    -1,   360,   360,    -1,   261,   401,
      -1,   196,   402,    -1,   190,   403,    -1,   307,   360,   360,
      -1,   307,   200,   200,    -1,   352,   404,    -1,   235,   362,
      -1,   141,    -1,   179,    -1,   360,    -1,   190,    -1,   352,
      -1,   351,    -1,   307,    -1,     4,   376,    -1,   196,   376,
      -1,   254,     4,    -1,   247,    -1,   360,     4,     4,    -1,
      79,   360,    -1,   254,     4,    -1,   175,     4,    -1,     4,
     360,   360,     4,     6,     4,    -1,   250,   360,   360,   360,
     360,   360,   360,     4,     6,     4,    -1,    40,    -1,   197,
     406,    -1,   113,    -1,     4,   360,   360,     4,     6,     4,
      -1,   250,   360,   360,   360,   360,   360,   360,     4,     6,
       4,    -1,   375,    -1,   180,   360,    -1,    84,   409,    -1,
     101,   410,    -1,   178,   411,    -1,   221,   415,    -1,   257,
     416,    -1,     5,     4,     4,   414,     4,     4,   375,   360,
     412,   413,   360,   360,     5,    -1,     5,     4,     4,   414,
       4,     4,   375,   360,   360,   413,   360,   360,     5,    -1,
       5,     4,     4,   414,     4,     4,   375,   360,   412,   360,
     360,     5,    -1,     5,     4,     4,   414,     4,     4,   375,
     360,   360,   360,   360,     5,    -1,   230,    -1,    -1,    31,
      -1,     5,    -1,     5,     5,     4,   362,    -1,     5,     4,
     362,     5,   370,   377,    -1,   190,    -1,   352,    -1,   351,
      -1,   307,    -1,   141,    -1,   179,    -1,   277,    -1,    47,
      -1,     5,    -1,     5,     5,     4,   362,    -1,     5,   370,
     377,    -1,    31,     5,   370,   377,    -1,    -1,   360,   360,
     360,   360,   370,   377,    -1,    60,   369,   370,   377,   360,
     360,   370,   379,    -1,   293,   418,    -1,    40,   360,   360,
      -1,   197,   360,   360,    -1,   113,   360,   360,    -1,    -1,
     360,   360,   370,   377,    -1,    40,   360,   360,     4,    -1,
     197,   360,   360,     4,    -1,   113,   360,   360,     4,    -1,
     372,   360,   360,    -1,   370,   377,   369,    -1,   362,    -1,
     315,   360,   360,    -1,    40,   197,   372,   360,   360,    -1,
     197,   372,   360,   360,    -1,    40,   197,   370,   369,    -1,
     197,   370,   369,    -1,    33,     4,    -1,    -1,    32,    -1,
     286,    -1,   147,   119,     5,    -1,    41,    67,    -1,    44,
     424,    -1,    47,   426,    -1,    66,   427,    -1,    69,   431,
      -1,    68,   430,    -1,    70,   433,    -1,    78,   435,    -1,
      80,   438,    -1,    85,   439,    -1,    87,   440,    -1,    89,
     442,    -1,    88,   441,    -1,    95,   443,    -1,    97,    -1,
     126,   447,    -1,   144,   453,    -1,   152,    67,    -1,   154,
       5,     5,     4,    -1,   155,    90,     5,     5,   360,   360,
     372,     4,   421,    -1,   158,   445,    -1,   162,   444,    -1,
     164,    16,    -1,   190,    -1,   186,   513,   507,    -1,   187,
     454,    -1,   200,    67,    -1,   217,    -1,   218,   455,    -1,
     225,   288,   372,   360,   360,     4,     4,     5,    -1,   250,
     456,    -1,   252,    -1,   277,   457,    -1,   292,    -1,   293,
     458,    -1,   301,    -1,   308,   372,   360,   360,    -1,   314,
      90,     5,     5,   360,   360,   372,     4,   421,    -1,   316,
     463,    -1,   353,    -1,   102,    -1,   120,    -1,   137,    -1,
      54,   274,    -1,    89,    -1,   124,    -1,    72,   425,    -1,
     177,    -1,    -1,   190,     5,    -1,   105,     5,    -1,   120,
      -1,    -1,   412,   413,    -1,   360,   413,    -1,   261,    -1,
     196,    -1,   190,   428,    -1,   307,   171,    -1,   352,   429,
      -1,   235,    -1,   196,    -1,   254,    -1,    79,    -1,   254,
      -1,   175,    -1,    -1,   289,    -1,   171,   432,    -1,     4,
      -1,     4,   372,   360,   360,    -1,     4,   360,   360,   375,
     360,    -1,    -1,   171,   434,    -1,   180,    -1,     4,   360,
     360,   375,   360,    -1,   370,   377,    -1,    66,   436,    -1,
      67,    -1,    93,    -1,   171,    -1,   211,   171,    -1,   189,
      -1,    70,   437,    -1,   277,    -1,   345,    -1,    -1,   196,
      -1,   261,    -1,    -1,   180,    -1,   360,   360,   370,   377,
     378,    -1,   372,   360,   360,   370,   377,   378,    -1,   370,
     377,   378,    -1,    60,   370,   377,   378,   370,   379,    -1,
     293,   370,   377,    -1,   372,    -1,   370,   377,   378,    -1,
     285,    -1,    33,    -1,   372,    -1,   370,   377,   378,    -1,
     370,   377,   369,   360,   360,     5,    -1,     4,   370,   377,
     369,   360,   360,     5,    -1,   372,   360,   360,     4,     4,
      -1,     5,    -1,    66,    -1,   372,   360,   360,     5,    -1,
       6,     4,     4,     4,     4,    -1,    89,    -1,   122,   199,
     446,    -1,    -1,     4,    -1,   360,   360,    -1,   202,    -1,
      60,   370,   377,   378,    -1,    82,    -1,   102,   450,    -1,
      45,    -1,   119,   448,    -1,   122,   199,   451,    -1,   149,
     449,    -1,   150,    -1,   212,   199,    -1,   274,    -1,   274,
     370,   377,   379,    -1,   275,   452,    -1,   345,    -1,     4,
      -1,   372,   360,   360,    -1,     4,    -1,   168,     5,    -1,
       4,   168,     5,    -1,   316,     4,    -1,    -1,     4,    -1,
     363,    -1,   363,   372,   360,   360,    -1,   363,     4,    -1,
      -1,     4,    -1,   134,   159,   370,    -1,   134,   159,     4,
     370,    -1,   297,   159,   360,   370,    -1,    -1,   216,    -1,
     309,    -1,    67,    -1,   185,    -1,   243,    -1,   287,    -1,
     296,    -1,    82,    -1,    46,    -1,   235,    -1,    62,    -1,
     287,    -1,   310,    -1,   137,    -1,   242,    -1,   242,   191,
      -1,   272,    -1,   272,   191,    -1,    21,    -1,   310,   462,
      -1,    48,   459,    -1,    75,   460,    -1,   152,   461,    -1,
     189,    -1,    37,    -1,   258,    -1,    -1,    67,    -1,    -1,
      67,    -1,    -1,    67,    -1,    -1,   228,    -1,    -1,    16,
     464,    -1,   199,   371,    -1,    -1,   229,    -1,    84,   466,
      -1,   101,    -1,   370,   377,   378,   467,     5,     5,    -1,
     370,   377,   378,   467,     5,    -1,    20,    -1,   238,    -1,
      19,    -1,    41,    67,    -1,    44,   469,    -1,    78,   470,
      -1,    85,    -1,    96,    -1,    97,    -1,   103,    -1,   126,
     471,    -1,   144,    -1,   158,    -1,   165,    -1,   186,   472,
      -1,   224,    -1,   159,    -1,   277,    -1,   287,   370,    -1,
     316,   473,    -1,    73,     5,    -1,    -1,    31,    -1,    -1,
      44,    -1,    88,    -1,   195,    -1,   152,    -1,   264,    -1,
     221,    -1,   302,    -1,   370,    -1,    59,   370,    -1,   117,
     370,    -1,   176,   370,    -1,    18,    -1,   293,   370,    -1,
     203,     4,     4,    -1,   118,    -1,   188,     5,    -1,    89,
     476,    -1,   265,   122,   199,   475,    -1,   265,     6,     4,
       4,     4,     4,    -1,   306,    -1,   316,   360,   360,   360,
     360,   360,   360,   360,   360,     4,    -1,     5,    -1,     5,
       4,    -1,     4,     4,    57,    -1,     4,     4,   370,    -1,
     196,   362,    -1,    26,   478,    -1,   114,   480,    -1,   126,
     481,    -1,   161,   494,    -1,   210,   492,    -1,   223,   493,
      -1,     5,    14,     5,   382,    -1,     5,    15,     5,   382,
      -1,     5,    62,     5,   382,    -1,     5,   193,   382,    -1,
       5,   194,   382,    -1,     5,   268,   380,     4,   382,    -1,
       5,   278,     4,   382,    -1,     5,   279,     4,   382,    -1,
       5,   309,     5,   382,    -1,   250,    88,   479,    -1,     5,
      14,     5,    -1,     5,    15,     5,    -1,     5,    62,     5,
      -1,     5,   193,    -1,     5,   194,    -1,     5,   268,   380,
       4,    -1,     5,   278,     4,    -1,     5,   279,     4,    -1,
       5,   309,     5,    -1,     5,     5,   276,    -1,     5,    14,
       5,   382,    -1,     5,    15,     5,   382,    -1,     5,    62,
       5,   382,    -1,     5,   193,   381,   382,    -1,     5,     5,
     276,   381,   382,    -1,     5,   194,   381,   382,    -1,     5,
     268,   380,     4,   381,   382,    -1,     5,   283,   380,     4,
       4,   381,   382,    -1,     5,   278,     4,   382,    -1,     5,
     279,     4,   382,    -1,     5,   309,     5,   381,   382,    -1,
     275,   482,    -1,   119,    88,   483,    -1,   250,   159,   491,
      -1,   250,    88,   490,    -1,   195,   484,    -1,     5,    14,
       5,    -1,     5,    15,     5,    -1,     5,    62,     5,    -1,
       5,   193,   381,    -1,     5,     5,   276,   381,    -1,     5,
     194,   381,    -1,     5,   268,   380,     4,   381,    -1,     5,
     283,   380,     4,     4,   381,    -1,     5,   278,     4,    -1,
       5,   279,     4,    -1,     5,   309,     5,   381,    -1,     5,
      14,     5,    -1,     5,    15,     5,    -1,     5,    62,     5,
      -1,     5,   193,   381,    -1,     5,   194,   381,    -1,     5,
     268,   380,     4,   381,    -1,     5,   278,     4,    -1,     5,
     279,     4,    -1,     5,   309,     5,   381,    -1,   159,   164,
     485,    -1,   164,   486,    -1,   159,   487,    -1,   489,    -1,
     159,   344,   488,    -1,     5,    14,     5,   382,    -1,     5,
      15,     5,   382,    -1,     5,    62,     5,   382,    -1,     5,
     193,   381,   382,    -1,     5,   194,   381,   382,    -1,     5,
     268,   380,     4,   381,   382,    -1,     5,   278,     4,   382,
      -1,     5,   279,     4,   382,    -1,     5,   309,     5,   381,
     382,    -1,     5,    14,     5,   382,    -1,     5,    15,     5,
     382,    -1,     5,    62,     5,   382,    -1,     5,   193,   381,
     382,    -1,     5,     5,   276,   381,   382,    -1,     5,   194,
     381,   382,    -1,     5,   268,   380,     4,   381,   382,    -1,
       5,   283,   380,     4,     4,   381,   382,    -1,     5,   278,
       4,   382,    -1,     5,   279,     4,   382,    -1,     5,   309,
       5,   381,   382,    -1,   371,     5,    14,     5,   382,    -1,
     371,     5,    15,     5,   382,    -1,   371,     5,    62,     5,
     382,    -1,   371,     5,   193,   381,   382,    -1,   371,     5,
     194,   381,   382,    -1,   371,     5,   268,   380,     4,   381,
     382,    -1,   371,     5,   278,     4,   382,    -1,   371,     5,
     279,     4,   382,    -1,   371,     5,   309,     5,   381,   382,
      -1,     5,    14,     5,   382,    -1,     5,    15,     5,   382,
      -1,     5,    62,     5,   382,    -1,     5,   193,   381,   382,
      -1,     5,   194,   381,   382,    -1,     5,   268,   380,     4,
     381,   382,    -1,     5,   278,     4,   382,    -1,     5,   279,
       4,   382,    -1,     5,   309,     5,   381,   382,    -1,   371,
       5,    14,     5,   382,    -1,   371,     5,    15,     5,   382,
      -1,   371,     5,    62,     5,   382,    -1,   371,     5,   193,
     381,   382,    -1,   371,     5,     5,   276,   381,   382,    -1,
     371,     5,   194,   381,   382,    -1,   371,     5,   268,   380,
       4,   381,   382,    -1,   371,     5,   283,   380,     4,     4,
     381,   382,    -1,   371,     5,   278,     4,   382,    -1,   371,
       5,   279,     4,   382,    -1,   371,     5,   309,     5,   381,
     382,    -1,     5,    14,     5,    -1,     5,    15,     5,    -1,
       5,    62,     5,    -1,     5,   193,   381,    -1,     5,     5,
     276,   381,    -1,     5,   194,   381,    -1,     5,   268,   380,
       4,   381,    -1,     5,   283,   380,     4,     4,   381,    -1,
       5,   278,     4,    -1,     5,   279,     4,    -1,     5,   309,
       5,   381,    -1,     5,    14,     5,    -1,     5,    15,     5,
      -1,     5,    62,     5,    -1,     5,   193,   381,    -1,     5,
     194,   381,    -1,     5,   268,   380,     4,   381,    -1,     5,
     278,     4,    -1,     5,   279,     4,    -1,     5,   309,     5,
     381,    -1,     5,    14,     5,   382,    -1,     5,    62,     5,
     382,    -1,     5,   193,   382,    -1,     5,   268,   380,     4,
     382,    -1,     5,   278,     4,   382,    -1,     5,   309,     5,
     382,    -1,     5,     5,    -1,   275,     5,     5,    -1,    95,
       4,     4,     4,     4,     4,    -1,   190,     4,     4,     4,
       4,     4,    -1,   113,    -1,   234,    -1,   362,    -1,   142,
     362,    -1,    89,   362,    -1,    67,     5,    -1,     5,     4,
       4,    -1,   306,   360,   360,    -1,   353,   360,    -1,     5,
       5,   371,   377,     5,     5,   371,   377,   360,   371,   379,
       5,    -1,    61,   501,    -1,    67,     5,    -1,    81,    -1,
      74,   506,     5,    -1,    74,   506,   309,     5,    -1,    76,
     101,    -1,    -1,    84,   499,   502,    -1,    90,    -1,   101,
      -1,   101,    17,    -1,   107,   505,    -1,   116,     4,    -1,
     131,     5,    -1,   152,    17,    -1,   152,   215,   360,   360,
      -1,   152,   298,   360,   360,    -1,     4,    20,   385,   362,
      -1,     4,    21,   365,    -1,     4,    21,   365,   372,    -1,
       4,    21,   365,   370,   377,    -1,     4,    22,   242,   360,
     360,     4,   370,   379,    -1,     4,    22,   242,     5,   370,
     379,    -1,     4,    49,   123,   362,    -1,     4,    50,   242,
     360,   360,   360,     4,   370,   379,    -1,     4,    50,   242,
       5,   370,   379,    -1,     4,    49,   242,   360,   360,   370,
     379,    -1,     4,    53,   107,   365,   365,     4,   360,   360,
     360,     4,    -1,     4,    53,   107,   365,   365,     4,   360,
     360,   360,     4,   372,    -1,     4,    53,   107,   365,   365,
       4,   360,   360,   360,     4,   370,   377,    -1,     4,    53,
     107,     5,     5,   370,   377,   370,   379,    -1,     4,    56,
     500,     5,     5,    -1,     4,    63,   123,   362,    -1,     4,
      63,   242,   360,   370,   379,    -1,     4,    67,     5,    -1,
       4,    75,    27,   362,   362,    -1,     4,    75,   169,     5,
       5,    -1,     4,    75,   242,   360,   370,   379,    -1,     4,
      75,   287,   370,   377,    -1,     4,    76,   141,   362,    -1,
       4,    83,   107,   365,   365,     4,   360,   360,     4,    -1,
       4,    83,   107,   365,   365,     4,   360,   360,     4,   372,
      -1,     4,    83,   107,   365,   365,     4,   360,   360,     4,
     370,   377,    -1,     4,    83,   107,     5,     5,   370,   377,
     370,   379,    -1,     4,    84,    22,   242,   360,   360,    -1,
       4,    84,    50,   242,   360,   360,    -1,     4,    84,    53,
      21,   360,   360,    -1,     4,    84,    53,   242,   360,   360,
      -1,     4,    84,   112,   242,   360,   360,    -1,     4,    84,
     115,    21,   360,   360,    -1,     4,    84,   115,   242,   360,
     360,    -1,     4,    84,    83,    21,   360,   360,    -1,     4,
      84,    83,   242,   360,   360,    -1,     4,    84,   230,   313,
       4,   360,   360,    -1,     4,    84,   263,   313,     4,   360,
     360,    -1,     4,   101,    -1,     4,   101,    22,     4,    -1,
       4,   101,    50,     4,    -1,     4,   101,    53,     4,    -1,
       4,   101,   112,     4,    -1,     4,   101,    56,   500,     5,
      -1,     4,   101,   115,     4,    -1,     4,   101,    83,     4,
      -1,     4,   101,   230,   313,     4,    -1,     4,   101,   263,
     313,     4,    -1,     4,   101,   289,    -1,     4,   101,   289,
       5,    -1,     4,   101,   289,     4,    -1,     4,   107,    40,
       4,    -1,     4,   111,   123,   362,    -1,     4,   111,   242,
     360,   360,   370,   379,    -1,     4,   112,   242,   360,   360,
     360,     4,   370,   379,    -1,     4,   112,   242,     5,   370,
     379,    -1,     4,   115,   107,   365,   365,     4,   360,   360,
     360,     4,    -1,     4,   115,   107,   365,   365,     4,   360,
     360,   360,     4,   372,    -1,     4,   115,   107,   365,   365,
       4,   360,   360,   360,     4,   370,   377,    -1,     4,   115,
     107,     5,     5,   370,   377,   370,   379,    -1,     4,   131,
       5,    -1,     4,   152,    -1,     4,   152,   215,    -1,     4,
     175,    27,   362,   362,    -1,     4,   175,   228,   370,   377,
     369,   369,    -1,     4,   198,   360,   360,    -1,     4,   198,
     135,    -1,     4,   198,    36,    -1,     4,   198,   297,   370,
     377,   369,    -1,     4,   230,   248,   360,   360,   370,   379,
      -1,     4,   263,   248,   360,   360,   370,   379,    -1,     4,
     228,   267,   383,    -1,     4,   228,   274,     4,    -1,     4,
     230,   123,   362,    -1,     4,   236,   370,   377,   369,   369,
     360,   370,   379,    -1,     4,   237,   519,   362,    -1,     4,
     252,    40,    -1,     4,   253,   132,     5,    -1,     4,   253,
     228,   370,   377,   369,   369,    -1,     4,   253,   287,   370,
     377,   370,   379,    -1,     4,   264,    -1,     4,   264,   215,
      -1,     4,   289,     5,    -1,     4,   291,     5,    -1,     4,
     291,   252,   362,    -1,     4,   303,    -1,     4,   305,    -1,
       4,   311,    27,   362,    -1,     4,   311,   228,   370,   377,
     369,   370,   379,   360,   365,    -1,     4,   345,     4,    -1,
     167,    -1,   167,   360,   360,    -1,   177,   514,    -1,   178,
     515,    -1,   198,   516,    -1,   235,   362,    -1,   237,   519,
     362,    -1,   237,   519,   362,   360,   360,    -1,   252,    40,
     360,   360,    -1,   252,   197,   360,   360,     4,    -1,   252,
     113,    -1,   257,     5,   506,   370,   377,   378,   362,    -1,
     257,   290,     5,    -1,   264,   523,    -1,   271,   524,    -1,
       5,    67,     5,    -1,     5,    81,    -1,     5,   101,    -1,
       5,    90,    -1,     5,   131,     5,    -1,     5,   152,    -1,
       5,   152,   215,    -1,     5,   198,   360,   360,    -1,     5,
     198,   135,    -1,     5,   198,    36,    -1,     5,   198,   297,
     370,   377,   369,    -1,     5,   237,   519,   362,    -1,     5,
     264,    -1,     5,   264,   215,    -1,     5,   303,    -1,     5,
     305,    -1,   289,   107,     5,     5,    -1,   289,   101,     5,
      -1,   289,   101,    17,    -1,   289,     5,    -1,   289,   306,
       5,    -1,   221,    -1,   221,   370,    -1,   302,    -1,   303,
      17,    -1,   305,    17,    -1,   345,     4,    -1,   264,    -1,
     305,    -1,   152,    -1,   303,    -1,    40,   198,    -1,   198,
      -1,   113,   198,    -1,    40,   107,    -1,   107,    -1,   113,
     107,    -1,    40,   252,    -1,   252,    -1,   113,   252,    -1,
     101,    -1,   291,    -1,    67,    -1,   345,    -1,   237,    -1,
     131,    -1,   167,    -1,   306,    -1,    -1,     4,    -1,    30,
     362,    -1,   242,   360,    -1,   163,     4,    -1,   216,     4,
     360,    -1,    63,   360,   360,   360,   520,    -1,   111,   360,
     360,   360,   360,   364,   520,    -1,    49,   360,   360,   360,
     360,   364,   520,    -1,   230,   360,   360,   360,   360,   520,
      -1,   263,   360,   360,   360,   360,   520,    -1,   175,   360,
     360,   360,   360,   520,    -1,   311,   360,   360,   360,   360,
     520,    -1,   291,   360,   360,   364,   520,    -1,    63,   228,
     360,   360,   384,   520,    -1,    49,   228,   360,   360,   384,
     520,    -1,   104,   228,   360,   360,   384,   520,    -1,    86,
     228,   360,   360,   384,   520,    -1,   356,   228,   360,   360,
     384,   520,    -1,    27,   228,   360,   360,   384,   520,    -1,
      52,   228,   360,   360,   384,   520,    -1,   253,   360,   360,
     360,   360,   370,   377,   370,   379,     5,   520,    -1,    75,
     360,   360,   360,   370,   377,   520,    -1,   236,   360,   360,
     360,   360,   360,   520,    -1,    22,   360,   360,   360,   360,
       4,   520,    -1,   112,   360,   360,   360,   360,   360,     4,
     364,   520,    -1,    50,   360,   360,   360,   360,   360,     4,
     364,   520,    -1,    83,   360,   360,   365,   365,     4,   360,
     360,     4,   520,    -1,   115,   360,   360,   365,   365,     4,
     360,   360,   360,     4,   364,   520,    -1,    53,   360,   360,
     365,   365,     4,   360,   360,   360,     4,   364,   520,    -1,
      76,   520,    -1,   290,   503,    -1,     5,   360,   360,    -1,
     309,     5,   360,   360,    -1,   360,   360,   309,     5,    -1,
       5,   370,   377,   369,    -1,     4,     4,    -1,    40,   360,
     360,     4,    -1,   197,   360,   360,     4,    -1,   113,    -1,
     106,    -1,   347,    -1,    64,    -1,   256,    -1,   255,    -1,
     239,    -1,   348,    -1,    61,   508,    -1,    67,    -1,   131,
      -1,   116,    -1,   146,   360,   360,    -1,   157,   360,   360,
      -1,     4,    20,    83,     5,     5,     5,   370,     4,    -1,
       4,    20,   154,     5,     5,     4,    -1,     4,    20,   226,
       5,     5,     5,     5,   370,   377,   386,    -1,     4,    20,
     227,     5,     5,   370,   386,    -1,     4,    20,   241,     5,
       5,     5,   370,    -1,     4,    20,   284,   370,   377,    -1,
     157,    17,    -1,     4,    21,    -1,     4,    21,   372,    -1,
       4,    21,   370,   377,    -1,     4,    22,   242,   370,   379,
      -1,     4,    49,   123,    -1,     4,    50,   242,   370,   379,
      -1,     4,    49,   242,   370,   379,    -1,     4,    53,    21,
      -1,     4,    53,    21,   372,    -1,     4,    53,    21,   370,
     377,    -1,     4,    53,   242,   370,   379,    -1,     4,    60,
     370,   377,   378,    -1,     4,    63,   123,    -1,     4,    63,
     242,   370,   379,    -1,     4,    67,    -1,     4,    75,    27,
      -1,     4,    75,   169,    -1,     4,    75,   242,   370,   379,
      -1,     4,    75,   287,    -1,     4,    76,   141,    -1,     4,
      83,    21,    -1,     4,    83,    21,   372,    -1,     4,    83,
      21,   370,   377,    -1,     4,    83,   242,   370,   379,    -1,
       4,   111,   123,    -1,     4,   111,   242,   370,   379,    -1,
       4,   112,   242,   370,   379,    -1,     4,   115,    21,    -1,
       4,   115,    21,   372,    -1,     4,   115,    21,   370,   377,
      -1,     4,   115,   242,   370,   379,    -1,     4,   131,    -1,
       4,   152,    -1,     4,   175,    27,    -1,     4,   175,   170,
     370,   379,    -1,     4,   175,   228,   370,   377,   378,    -1,
       4,   184,   170,   360,   370,   379,    -1,     4,   230,   123,
      -1,     4,   228,   267,    -1,     4,   228,   274,    -1,     4,
     236,   228,   370,   377,   378,    -1,     4,   236,   170,   370,
     379,    -1,     4,   236,   295,   370,   379,    -1,     4,   237,
      -1,     4,   237,   519,    -1,     4,   253,   132,    -1,     4,
     253,   170,   370,   379,    -1,     4,   253,   228,   370,   377,
     378,    -1,     4,   253,   287,    -1,     4,   264,    -1,     4,
     289,    -1,     4,   289,     4,    -1,     4,   291,    -1,     4,
     291,   252,    -1,     4,   301,    -1,     4,   311,    27,    -1,
       4,   311,   170,   370,   379,    -1,     4,   311,   228,   370,
     377,   378,    -1,     4,   345,    -1,   152,   509,    -1,   152,
     211,    -1,   211,    -1,   230,   263,   360,   360,    -1,   263,
     263,   360,   360,    -1,   235,    -1,   237,   519,    -1,   264,
     510,    -1,   264,   211,    -1,   271,   511,    -1,     5,    67,
      -1,     5,   131,    -1,     5,   157,    -1,     5,   237,   519,
      -1,     5,   289,    -1,     5,   289,   211,    -1,   289,    17,
      -1,   289,   100,   199,    -1,   345,    -1,    30,    -1,   242,
      -1,   163,    -1,   216,    -1,    -1,   360,   360,    -1,    -1,
     360,   360,    -1,    -1,   291,    -1,    -1,    -1,   229,    -1,
     244,    -1,   307,    -1,    58,    -1,   133,    -1,   506,   370,
     377,   378,   362,   521,   527,    -1,   264,   506,   370,   377,
     378,   362,   521,   527,    -1,   506,     5,    -1,   506,     5,
     370,   377,    -1,   506,     4,    -1,   506,     4,   370,   377,
      -1,   126,     5,     5,   504,     4,     5,    -1,   360,   360,
      -1,   135,    -1,    36,    -1,    40,   360,   360,    -1,   197,
     360,   360,    -1,   113,    -1,   297,   370,   377,   369,    -1,
     517,   518,    -1,   518,    -1,   519,   357,   362,    -1,    67,
     357,     5,    -1,    94,   357,     4,     4,    -1,   345,   357,
       4,    -1,   131,   357,     5,    -1,   291,   357,     5,    -1,
     530,    -1,   531,    -1,   206,    -1,   264,    -1,   152,    -1,
      93,    -1,   128,    -1,   107,    -1,   198,    -1,   252,    -1,
     101,    -1,   160,    -1,   280,    -1,   512,    -1,   512,   517,
      -1,    -1,    -1,   522,   525,    -1,    17,    -1,   215,   360,
     360,    -1,   298,    -1,   298,   360,   360,    -1,   362,    -1,
     291,   362,    -1,   525,   526,    -1,   526,    -1,   519,   357,
     362,    -1,    -1,    -1,   528,   529,    -1,   529,   530,    -1,
     530,    -1,   289,   357,     5,    -1,    56,   357,   500,     5,
       5,    -1,    65,    -1,    67,     5,    -1,   185,   373,    -1,
     243,   360,   360,    -1,   287,   370,    -1,   296,   360,    -1,
      46,   374,    -1,   185,     4,    -1,   356,    -1,   354,    -1,
     348,    -1,   206,    -1,   360,   360,   360,   360,    -1,   360,
     360,    -1,   372,   360,   360,    -1,   370,   377,   369,    -1,
     297,   535,    -1,    39,   360,   360,    -1,   197,   536,    -1,
     235,   362,    -1,   360,   360,    -1,   372,   360,   360,    -1,
     370,   377,   369,    -1,    40,   360,   360,    -1,   360,   360,
      -1,   113,   360,   360,    -1,   362,    -1,   316,   371,   377,
      -1,     5,     4,     4,    -1,   306,    -1,    71,   540,    -1,
     171,     4,    -1,   249,     4,    -1,   258,   360,    -1,     4,
       4,     4,     4,     4,     4,     4,     4,     4,    -1,     4,
       4,     4,     4,     4,     4,    -1,    55,    -1,   143,    -1,
     250,    -1,    91,    -1,   152,   542,    -1,   264,   543,    -1,
      40,   360,   360,    -1,   197,   360,   360,    -1,   113,    -1,
     269,   113,    -1,    40,   360,   360,    -1,   197,   360,   360,
      -1,   113,    -1,   269,   113,    -1,   192,    -1,    13,    -1,
     206,    -1,    34,    -1,   109,    -1,    62,     5,    -1,   287,
     370,    -1,   310,     4,     4,     4,    -1,   360,    -1,   360,
      99,    -1,   197,   548,    -1,   297,   360,    -1,   297,   360,
      99,    -1,    40,    -1,   360,    -1,   113,    -1,    26,   550,
      -1,   126,   552,    -1,   210,   562,    -1,   114,   563,    -1,
     223,     5,    -1,   122,     5,   387,    -1,    62,     5,   387,
      -1,   278,     4,   387,    -1,   250,    88,   551,    -1,   122,
       5,   387,    -1,    62,     5,   387,    -1,   278,     4,   387,
      -1,   553,    -1,   159,   553,    -1,   288,   554,    -1,   275,
     555,    -1,   119,    88,   556,    -1,   195,   557,    -1,   250,
     159,   559,    -1,   250,    88,   560,    -1,   246,   561,    -1,
     122,     5,    -1,    62,     5,    -1,   278,     4,    -1,   122,
       5,    -1,    62,     5,    -1,   278,     4,    -1,   122,     5,
      -1,    62,     5,    -1,   278,     4,    -1,   122,     5,    -1,
      62,     5,    -1,   278,     4,    -1,   159,   558,    -1,   122,
       5,     4,    -1,    62,     5,     4,    -1,   278,     4,     4,
      -1,   122,     5,    -1,    62,     5,    -1,   278,     4,    -1,
     122,     5,    -1,    62,     5,    -1,   278,     4,    -1,   122,
       5,    -1,    62,     5,    -1,   278,     4,    -1,   122,     5,
      -1,    62,     5,    -1,   278,     4,    -1,   122,     5,   387,
      -1,    62,     5,   387,    -1,   278,     4,   387,    -1,   122,
       5,     5,   387,    -1,   565,     4,     4,   360,   360,   365,
      -1,   565,     4,    -1,   101,    -1,    51,    -1,   299,    -1,
     139,    -1,   110,    -1,    -1,     4,   360,   360,   360,   360,
      -1,   209,    -1,   209,     4,   360,   360,   360,   360,    -1,
     126,   275,   567,    -1,     4,    -1,     4,     4,    -1,   360,
     370,    -1,   360,   360,    -1,   297,   360,   360,    -1,   371,
     377,   378,    -1,    16,   572,    -1,   248,     4,    -1,   245,
     571,    -1,    23,   570,    -1,     4,     4,    -1,     4,     5,
      -1,   291,     4,     5,    -1,     4,     4,    -1,     4,     5,
      -1,   291,     4,     5,    -1,     4,    -1,     4,   371,   377,
      -1,     4,     6,   371,   377,    -1,   234,    -1,   360,   360,
      -1,   360,   360,    12,   360,   360,    -1,   360,   360,    12,
     372,   360,   360,    -1,   360,   360,    12,   370,   377,   369,
      -1,   297,   575,    -1,   125,    -1,   125,   360,    -1,   360,
     360,    -1,   360,   360,    12,   360,   360,    -1,   360,   360,
      12,   372,   360,   360,    -1,   360,   360,    12,   370,   377,
     369,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   464,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   521,   522,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   539,   541,   542,   543,   544,   546,   547,   548,   549,
     552,   553,   554,   555,   556,   559,   560,   563,   564,   565,
     568,   571,   574,   577,   589,   596,   603,   611,   612,   613,
     614,   615,   618,   619,   620,   621,   622,   623,   624,   625,
     626,   627,   628,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
     648,   649,   652,   653,   654,   655,   656,   657,   660,   661,
     662,   663,   664,   667,   668,   669,   670,   671,   672,   673,
     674,   677,   678,   679,   680,   681,   684,   685,   686,   687,
     688,   689,   690,   691,   694,   695,   696,   699,   700,   701,
     702,   705,   706,   707,   710,   711,   712,   715,   716,   717,
     720,   721,   722,   723,   724,   725,   726,   727,   730,   731,
     734,   735,   736,   737,   738,   739,   742,   743,   744,   747,
     748,   749,   750,   751,   752,   755,   756,   757,   758,   759,
     760,   761,   762,   766,   767,   770,   771,   774,   775,   778,
     779,   783,   784,   785,   786,   787,   788,   789,   790,   793,
     794,   797,   798,   799,   801,   803,   804,   805,   807,   811,
     812,   815,   816,   818,   821,   823,   829,   830,   831,   834,
     835,   836,   839,   840,   841,   842,   843,   844,   845,   851,
     852,   855,   856,   857,   858,   859,   862,   863,   864,   865,
     868,   869,   874,   879,   886,   888,   890,   891,   892,   895,
     897,   900,   901,   904,   905,   906,   907,   908,   911,   913,
     915,   920,   925,   928,   929,   932,   933,   934,   941,   942,
     943,   944,   947,   948,   951,   952,   955,   956,   959,   961,
     965,   966,   969,   971,   972,   973,   974,   977,   978,   980,
     981,   982,   985,   987,   989,   990,   992,   994,   996,   998,
    1002,  1005,  1006,  1007,  1010,  1013,  1014,  1015,  1016,  1017,
    1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,  1027,
    1028,  1029,  1030,  1031,  1032,  1034,  1035,  1036,  1037,  1038,
    1039,  1040,  1041,  1042,  1043,  1045,  1046,  1047,  1048,  1049,
    1050,  1051,  1053,  1055,  1056,  1059,  1060,  1061,  1062,  1063,
    1064,  1065,  1066,  1069,  1070,  1071,  1074,  1077,  1078,  1080,
    1082,  1083,  1084,  1085,  1086,  1087,  1094,  1095,  1098,  1099,
    1100,  1103,  1104,  1107,  1110,  1111,  1113,  1117,  1118,  1119,
    1122,  1126,  1128,  1129,  1130,  1131,  1132,  1133,  1134,  1135,
    1136,  1139,  1140,  1141,  1144,  1145,  1148,  1150,  1158,  1160,
    1162,  1166,  1167,  1169,  1172,  1175,  1176,  1180,  1182,  1185,
    1190,  1191,  1192,  1196,  1197,  1198,  1201,  1202,  1203,  1206,
    1207,  1209,  1210,  1211,  1212,  1213,  1214,  1215,  1216,  1217,
    1218,  1220,  1221,  1224,  1225,  1228,  1229,  1230,  1231,  1234,
    1235,  1238,  1240,  1243,  1247,  1248,  1249,  1251,  1253,  1257,
    1258,  1259,  1262,  1263,  1264,  1265,  1266,  1267,  1268,  1271,
    1274,  1275,  1276,  1279,  1280,  1281,  1282,  1283,  1284,  1287,
    1288,  1289,  1290,  1291,  1292,  1293,  1296,  1297,  1300,  1301,
    1304,  1305,  1308,  1309,  1312,  1313,  1314,  1317,  1318,  1321,
    1322,  1325,  1328,  1336,  1337,  1340,  1341,  1342,  1343,  1344,
    1345,  1346,  1347,  1348,  1349,  1350,  1351,  1352,  1353,  1354,
    1355,  1356,  1357,  1360,  1363,  1364,  1367,  1368,  1369,  1370,
    1373,  1374,  1375,  1376,  1379,  1380,  1381,  1382,  1383,  1384,
    1387,  1388,  1389,  1390,  1391,  1392,  1394,  1395,  1400,  1401,
    1404,  1406,  1408,  1411,  1412,  1413,  1414,  1415,  1416,  1419,
    1421,  1423,  1425,  1426,  1428,  1430,  1432,  1434,  1436,  1439,
    1440,  1441,  1442,  1443,  1444,  1446,  1447,  1448,  1451,  1454,
    1456,  1458,  1460,  1462,  1464,  1466,  1468,  1471,  1473,  1475,
    1477,  1478,  1479,  1480,  1481,  1484,  1485,  1486,  1487,  1488,
    1489,  1490,  1492,  1494,  1495,  1496,  1499,  1500,  1501,  1502,
    1503,  1504,  1506,  1507,  1508,  1511,  1512,  1513,  1514,  1515,
    1518,  1521,  1524,  1527,  1530,  1533,  1536,  1539,  1542,  1547,
    1550,  1553,  1556,  1559,  1562,  1565,  1568,  1571,  1574,  1577,
    1582,  1585,  1588,  1591,  1594,  1597,  1600,  1603,  1606,  1611,
    1613,  1615,  1617,  1619,  1621,  1626,  1628,  1630,  1634,  1637,
    1640,  1643,  1646,  1649,  1652,  1655,  1658,  1661,  1664,  1669,
    1670,  1671,  1672,  1673,  1674,  1675,  1677,  1679,  1680,  1681,
    1684,  1685,  1686,  1687,  1688,  1689,  1691,  1692,  1693,  1696,
    1698,  1700,  1701,  1703,  1705,  1709,  1710,  1713,  1714,  1715,
    1718,  1725,  1726,  1727,  1728,  1729,  1730,  1731,  1734,  1742,
    1743,  1744,  1745,  1747,  1749,  1750,  1750,  1751,  1752,  1753,
    1754,  1755,  1756,  1758,  1759,  1761,  1764,  1767,  1768,  1769,
    1772,  1775,  1778,  1779,  1783,  1786,  1789,  1792,  1796,  1801,
    1806,  1808,  1809,  1811,  1812,  1814,  1816,  1818,  1820,  1821,
    1823,  1825,  1829,  1834,  1836,  1838,  1840,  1842,  1844,  1846,
    1848,  1850,  1852,  1854,  1857,  1858,  1860,  1862,  1863,  1865,
    1867,  1868,  1869,  1871,  1873,  1874,  1875,  1877,  1878,  1879,
    1882,  1886,  1889,  1892,  1896,  1901,  1907,  1908,  1909,  1911,
    1912,  1916,  1918,  1919,  1920,  1923,  1926,  1929,  1931,  1933,
    1934,  1939,  1942,  1943,  1944,  1947,  1951,  1952,  1954,  1955,
    1956,  1958,  1959,  1961,  1962,  1967,  1969,  1970,  1972,  1973,
    1974,  1975,  1976,  1977,  1979,  1981,  1983,  1984,  1986,  1987,
    1989,  1991,  1992,  1993,  1994,  1995,  1996,  1997,  1998,  1999,
    2000,  2001,  2003,  2005,  2006,  2007,  2008,  2010,  2011,  2012,
    2013,  2014,  2016,  2017,  2018,  2019,  2020,  2021,  2024,  2025,
    2026,  2027,  2028,  2029,  2030,  2031,  2032,  2033,  2034,  2035,
    2036,  2037,  2038,  2039,  2040,  2041,  2042,  2043,  2044,  2047,
    2048,  2049,  2050,  2051,  2052,  2060,  2067,  2076,  2085,  2092,
    2099,  2107,  2115,  2122,  2127,  2132,  2137,  2142,  2147,  2152,
    2158,  2168,  2178,  2188,  2195,  2205,  2215,  2224,  2236,  2249,
    2254,  2257,  2259,  2261,  2266,  2270,  2273,  2275,  2277,  2280,
    2281,  2282,  2283,  2284,  2285,  2286,  2289,  2290,  2291,  2292,
    2293,  2294,  2296,  2298,  2300,  2302,  2304,  2306,  2309,  2310,
    2311,  2312,  2314,  2317,  2318,  2320,  2322,  2323,  2324,  2326,
    2329,  2332,  2333,  2335,  2336,  2337,  2338,  2340,  2341,  2342,
    2343,  2344,  2346,  2348,  2349,  2351,  2354,  2355,  2356,  2358,
    2360,  2361,  2362,  2363,  2365,  2368,  2372,  2373,  2374,  2375,
    2378,  2381,  2383,  2384,  2385,  2386,  2388,  2391,  2392,  2394,
    2395,  2396,  2397,  2398,  2400,  2401,  2403,  2406,  2407,  2408,
    2409,  2410,  2412,  2414,  2415,  2416,  2417,  2419,  2421,  2422,
    2423,  2424,  2425,  2426,  2428,  2429,  2431,  2434,  2435,  2436,
    2437,  2440,  2441,  2444,  2445,  2448,  2449,  2452,  2465,  2466,
    2470,  2471,  2475,  2476,  2479,  2484,  2491,  2493,  2496,  2498,
    2501,  2505,  2506,  2507,  2508,  2509,  2510,  2511,  2515,  2516,
    2519,  2520,  2521,  2522,  2523,  2524,  2525,  2526,  2529,  2530,
    2531,  2532,  2533,  2534,  2535,  2536,  2537,  2538,  2539,  2542,
    2543,  2546,  2547,  2547,  2550,  2551,  2552,  2553,  2556,  2557,
    2560,  2561,  2564,  2568,  2569,  2569,  2572,  2573,  2576,  2579,
    2583,  2584,  2585,  2586,  2587,  2588,  2589,  2590,  2596,  2597,
    2598,  2599,  2602,  2604,  2605,  2610,  2612,  2613,  2614,  2615,
    2618,  2619,  2624,  2628,  2629,  2630,  2633,  2634,  2639,  2640,
    2643,  2645,  2646,  2647,  2652,  2654,  2660,  2661,  2662,  2663,
    2666,  2667,  2670,  2672,  2674,  2675,  2678,  2680,  2681,  2682,
    2685,  2686,  2689,  2690,  2691,  2694,  2695,  2696,  2699,  2700,
    2701,  2702,  2703,  2706,  2707,  2708,  2711,  2712,  2713,  2714,
    2715,  2718,  2720,  2722,  2724,  2727,  2729,  2731,  2734,  2735,
    2736,  2737,  2738,  2739,  2740,  2741,  2742,  2745,  2746,  2747,
    2750,  2751,  2752,  2755,  2756,  2757,  2760,  2761,  2762,  2765,
    2766,  2767,  2768,  2771,  2772,  2773,  2776,  2777,  2778,  2781,
    2782,  2783,  2786,  2787,  2788,  2791,  2793,  2795,  2799,  2803,
    2805,  2810,  2813,  2814,  2815,  2816,  2819,  2820,  2822,  2823,
    2825,  2828,  2829,  2830,  2833,  2834,  2837,  2839,  2840,  2841,
    2842,  2845,  2846,  2847,  2850,  2851,  2852,  2855,  2856,  2861,
    2865,  2872,  2873,  2875,  2880,  2882,  2885,  2886,  2887,  2888,
    2890,  2895
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
     359,   359,   359,   359,   359,   359,   359,   360,   360,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     363,   363,   363,   363,   363,   364,   364,   365,   365,   365,
     366,   367,   368,   369,   369,   369,   369,   370,   370,   370,
     370,   370,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     372,   372,   373,   373,   373,   373,   373,   373,   374,   374,
     374,   374,   374,   375,   375,   375,   375,   375,   375,   375,
     375,   376,   376,   376,   376,   376,   377,   377,   377,   377,
     377,   377,   377,   377,   378,   378,   378,   379,   379,   379,
     379,   380,   380,   380,   381,   381,   381,   382,   382,   382,
     383,   383,   383,   383,   383,   383,   383,   383,   384,   384,
     385,   385,   385,   385,   385,   385,   386,   386,   386,   387,
     387,   387,   387,   387,   387,   388,   388,   388,   388,   388,
     388,   388,   388,   389,   389,   390,   390,   391,   391,   392,
     392,   393,   393,   393,   393,   393,   393,   393,   393,   394,
     394,   395,   395,   395,   395,   395,   395,   395,   395,   396,
     396,   397,   397,   397,   397,   397,   398,   398,   398,   399,
     399,   399,   400,   400,   400,   400,   400,   400,   400,   401,
     401,   402,   402,   402,   402,   402,   403,   403,   403,   403,
     404,   404,   404,   404,   405,   405,   405,   405,   405,   406,
     406,   407,   407,   408,   408,   408,   408,   408,   409,   409,
     409,   409,   409,   410,   410,   411,   411,   411,   412,   412,
     412,   412,   413,   413,   414,   414,   415,   415,   416,   416,
     417,   417,   417,   417,   417,   417,   417,   418,   418,   418,
     418,   418,   419,   419,   419,   419,   419,   419,   419,   419,
     420,   421,   421,   421,   422,   423,   423,   423,   423,   423,
     423,   423,   423,   423,   423,   423,   423,   423,   423,   423,
     423,   423,   423,   423,   423,   423,   423,   423,   423,   423,
     423,   423,   423,   423,   423,   423,   423,   423,   423,   423,
     423,   423,   423,   423,   423,   424,   424,   424,   424,   424,
     424,   424,   424,   425,   425,   425,   426,   427,   427,   427,
     427,   427,   427,   427,   427,   427,   428,   428,   429,   429,
     429,   430,   430,   431,   432,   432,   432,   433,   433,   433,
     434,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   436,   436,   436,   437,   437,   438,   438,   439,   439,
     439,   440,   440,   440,   441,   442,   442,   443,   443,   443,
     444,   444,   444,   445,   445,   445,   446,   446,   446,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   448,   448,   449,   449,   449,   449,   450,
     450,   451,   451,   451,   452,   452,   452,   452,   452,   453,
     453,   453,   454,   454,   454,   454,   454,   454,   454,   455,
     456,   456,   456,   457,   457,   457,   457,   457,   457,   458,
     458,   458,   458,   458,   458,   458,   459,   459,   460,   460,
     461,   461,   462,   462,   463,   463,   463,   464,   464,   465,
     465,   466,   466,   467,   467,   468,   468,   468,   468,   468,
     468,   468,   468,   468,   468,   468,   468,   468,   468,   468,
     468,   468,   468,   469,   470,   470,   471,   471,   471,   471,
     472,   472,   472,   472,   473,   473,   473,   473,   473,   473,
     474,   474,   474,   474,   474,   474,   474,   474,   475,   475,
     476,   476,   476,   477,   477,   477,   477,   477,   477,   478,
     478,   478,   478,   478,   478,   478,   478,   478,   478,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   480,   481,
     481,   481,   481,   481,   481,   481,   481,   481,   481,   481,
     481,   481,   481,   481,   481,   482,   482,   482,   482,   482,
     482,   482,   482,   482,   482,   482,   483,   483,   483,   483,
     483,   483,   483,   483,   483,   484,   484,   484,   484,   484,
     485,   485,   485,   485,   485,   485,   485,   485,   485,   486,
     486,   486,   486,   486,   486,   486,   486,   486,   486,   486,
     487,   487,   487,   487,   487,   487,   487,   487,   487,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   492,
     492,   492,   492,   492,   492,   493,   493,   494,   494,   494,
     495,   496,   496,   496,   496,   496,   496,   496,   497,   498,
     498,   498,   498,   498,   498,   499,   498,   498,   498,   498,
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
     498,   498,   498,   498,   498,   498,   498,   498,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   501,
     501,   501,   501,   501,   501,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   503,   503,   503,   503,   504,   505,   505,   505,   506,
     506,   506,   506,   506,   506,   506,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   508,   508,   508,
     508,   509,   509,   510,   510,   511,   511,   512,   513,   513,
     513,   513,   513,   513,   514,   514,   515,   515,   515,   515,
     515,   516,   516,   516,   516,   516,   516,   516,   517,   517,
     518,   518,   518,   518,   518,   518,   518,   518,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   520,
     520,   521,   522,   521,   523,   523,   523,   523,   524,   524,
     525,   525,   526,   527,   528,   527,   529,   529,   530,   531,
     532,   532,   532,   532,   532,   532,   532,   532,   533,   533,
     533,   533,   534,   534,   534,   534,   534,   534,   534,   534,
     535,   535,   535,   536,   536,   536,   537,   537,   537,   537,
     538,   538,   538,   538,   539,   539,   540,   540,   540,   540,
     541,   541,   542,   542,   542,   542,   543,   543,   543,   543,
     544,   544,   545,   545,   545,   546,   546,   546,   547,   547,
     547,   547,   547,   548,   548,   548,   549,   549,   549,   549,
     549,   550,   550,   550,   550,   551,   551,   551,   552,   552,
     552,   552,   552,   552,   552,   552,   552,   553,   553,   553,
     554,   554,   554,   555,   555,   555,   556,   556,   556,   557,
     557,   557,   557,   558,   558,   558,   559,   559,   559,   560,
     560,   560,   561,   561,   561,   562,   562,   562,   563,   564,
     564,   564,   565,   565,   565,   565,   566,   566,   566,   566,
     566,   567,   567,   567,   568,   568,   569,   569,   569,   569,
     569,   570,   570,   570,   571,   571,   571,   572,   572,   572,
     573,   574,   574,   574,   574,   574,   575,   575,   575,   575,
     575,   575
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     3,     3,     2,     1,     1,
       2,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     2,     3,     2,     3,     2,     2,
       2,     2,     3,     2,     3,     2,     2,     2,     2,     2,
       2,     1,     3,     2,     2,     2,     1,     2,     2,     2,
       1,     2,     1,     2,     2,     2,     2,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     2,     2,     1,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     0,     1,     1,
       1,     0,     1,     1,     0,     1,     1,     0,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     0,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     2,     1,     2,     1,     2,     2,
       6,     2,     4,     2,     2,     2,     3,     2,     2,     1,
       2,     1,     2,     4,     5,     2,     3,     5,     6,     1,
       1,     1,     7,    11,     8,    12,     1,     2,     2,     1,
       1,     2,     2,     2,     2,     3,     3,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     1,
       3,     2,     2,     2,     6,    10,     1,     2,     1,     6,
      10,     1,     2,     2,     2,     2,     2,     2,    13,    13,
      12,    12,     1,     0,     1,     1,     4,     6,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     3,     4,
       0,     6,     8,     2,     3,     3,     3,     0,     4,     4,
       4,     4,     3,     3,     1,     3,     5,     4,     4,     3,
       2,     0,     1,     1,     3,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       2,     2,     2,     4,     9,     2,     2,     2,     1,     3,
       2,     2,     1,     2,     8,     2,     1,     2,     1,     2,
       1,     4,     9,     2,     1,     1,     1,     1,     2,     1,
       1,     2,     1,     0,     2,     2,     1,     0,     2,     2,
       1,     1,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     0,     1,     2,     1,     4,     5,     0,     2,     1,
       5,     2,     2,     1,     1,     1,     2,     1,     2,     1,
       1,     0,     1,     1,     0,     1,     5,     6,     3,     6,
       3,     1,     3,     1,     1,     1,     3,     6,     7,     5,
       1,     1,     4,     5,     1,     3,     0,     1,     2,     1,
       4,     1,     2,     1,     2,     3,     2,     1,     2,     1,
       4,     2,     1,     1,     3,     1,     2,     3,     2,     0,
       1,     1,     4,     2,     0,     1,     3,     4,     4,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     1,     2,
       2,     2,     2,     1,     1,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     2,     2,     0,     1,     2,
       1,     6,     5,     1,     1,     1,     2,     2,     2,     1,
       1,     1,     1,     2,     1,     1,     1,     2,     1,     1,
       1,     2,     2,     2,     0,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     1,     2,
       3,     1,     2,     2,     4,     6,     1,    10,     1,     2,
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
       2,     1,     3,     4,     2,     0,     3,     1,     1,     2,
       2,     2,     2,     2,     4,     4,     4,     3,     4,     5,
       8,     6,     4,     9,     6,     7,    10,    11,    12,     9,
       5,     4,     6,     3,     5,     5,     6,     5,     4,     9,
      10,    11,     9,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     7,     7,     2,     4,     4,     4,     4,     5,
       4,     4,     5,     5,     3,     4,     4,     4,     4,     7,
       9,     6,    10,    11,    12,     9,     3,     2,     3,     5,
       7,     4,     3,     3,     6,     7,     7,     4,     4,     4,
       9,     4,     3,     4,     7,     7,     2,     3,     3,     3,
       4,     2,     2,     4,    10,     3,     1,     3,     2,     2,
       2,     2,     3,     5,     4,     5,     2,     7,     3,     2,
       2,     3,     2,     2,     2,     3,     2,     3,     4,     3,
       3,     6,     4,     2,     3,     2,     2,     4,     3,     3,
       2,     3,     1,     2,     1,     2,     2,     2,     1,     1,
       1,     1,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     2,     2,     2,     3,     5,     7,     7,     6,     6,
       6,     6,     5,     6,     6,     6,     6,     6,     6,     6,
      11,     7,     7,     7,     9,     9,    10,    12,    12,     2,
       2,     3,     4,     4,     4,     2,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       3,     3,     8,     6,    10,     7,     7,     5,     2,     2,
       3,     4,     5,     3,     5,     5,     3,     4,     5,     5,
       5,     3,     5,     2,     3,     3,     5,     3,     3,     3,
       4,     5,     5,     3,     5,     5,     3,     4,     5,     5,
       2,     2,     3,     5,     6,     6,     3,     3,     3,     6,
       5,     5,     2,     3,     3,     5,     6,     3,     2,     2,
       3,     2,     3,     2,     3,     5,     6,     2,     2,     2,
       1,     4,     4,     1,     2,     2,     2,     2,     2,     2,
       2,     3,     2,     3,     2,     3,     1,     1,     1,     1,
       1,     0,     2,     0,     2,     0,     1,     0,     0,     1,
       1,     1,     1,     1,     7,     8,     2,     4,     2,     4,
       6,     2,     1,     1,     3,     3,     1,     4,     2,     1,
       3,     3,     4,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     0,     2,     1,     3,     1,     3,     1,     2,
       2,     1,     3,     0,     0,     2,     2,     1,     3,     5,
       1,     2,     2,     3,     2,     2,     2,     2,     1,     1,
       1,     1,     4,     2,     3,     3,     2,     3,     2,     2,
       2,     3,     3,     3,     2,     3,     1,     3,     3,     1,
       2,     2,     2,     2,     9,     6,     1,     1,     1,     1,
       2,     2,     3,     3,     1,     2,     3,     3,     1,     2,
       1,     1,     1,     1,     1,     2,     2,     4,     1,     2,
       2,     2,     3,     1,     1,     1,     2,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     1,     2,
       2,     2,     3,     2,     3,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     3,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     3,     3,     3,     4,     6,
       2,     1,     1,     1,     1,     1,     0,     5,     1,     6,
       3,     1,     2,     2,     2,     3,     3,     2,     2,     2,
       2,     2,     2,     3,     2,     2,     3,     1,     3,     4,
       1,     2,     5,     6,     6,     2,     1,     2,     2,     5,
       6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     8,     9,     0,     0,     0,     0,
       0,   310,     0,     0,     0,     0,     0,     0,     0,     0,
      23,     0,     0,     0,     0,     0,     0,     0,  1048,     0,
       0,     0,     0,     0,     0,     0,     0,  1048,    41,     0,
       0,     0,    46,     0,     0,     0,    50,  1236,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,    57,    58,     0,   246,     7,     0,
       0,     0,     0,     0,     0,    10,     0,     0,   276,   278,
       0,     0,    12,   148,   150,   143,   144,   145,   149,   146,
     147,   281,    13,     0,   293,     0,     0,     0,    14,     0,
       0,     0,     0,   317,     0,    15,    71,   100,     0,   130,
      99,    79,    97,     0,    76,    78,    74,   131,    98,    75,
       0,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,    72,
      73,    77,   324,   156,   101,     0,    16,     0,    17,    18,
       0,     0,     0,     0,     0,     0,    60,    59,     0,     0,
       0,     0,     2,     0,    19,     0,     0,     0,   387,   401,
       0,   407,     0,     0,     0,     0,     0,     0,     0,   349,
       0,   479,     0,     0,     0,     0,     0,     0,  1048,     0,
     358,     0,   362,     0,     0,     0,   366,     0,   368,     0,
     370,     0,     0,   514,   374,    20,     0,   520,    21,   525,
       0,     0,   544,   529,   530,   531,   532,   546,   534,   535,
     539,   536,     0,   538,   540,     0,     0,    22,     0,    24,
       0,   561,     0,     0,     0,   566,     0,    26,     0,     0,
       0,     0,     0,     0,     0,    28,   720,    29,     0,     0,
       0,     0,     0,     0,   721,    30,     0,    31,  1052,  1053,
    1049,  1050,  1051,     0,   138,  1110,     0,   132,     0,     0,
       0,    33,     0,  1121,  1120,  1119,  1118,    35,     0,     0,
       0,     0,     0,   156,     0,    36,     0,  1139,     0,  1136,
      37,     0,     0,     0,     0,    40,     0,    39,    38,     0,
       0,     0,     0,    43,     0,     0,  1168,    44,     0,     0,
       0,     0,     0,    45,  1232,  1231,  1235,  1234,  1233,    47,
       0,    48,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,  1238,    51,     0,     0,    53,     0,     0,
       0,     0,   156,    54,  1260,    55,     0,     0,    56,     1,
       4,     5,     6,   229,     0,   221,     0,     0,   223,     0,
     231,   224,   228,   239,   240,   225,   241,     0,   227,   249,
     250,   248,   247,     0,     0,   269,     0,   254,   262,   265,
     264,   263,   261,   253,   258,   259,   260,   252,     0,     0,
       0,     0,     0,     0,   257,    11,     0,     0,     0,   277,
       0,   282,     0,   292,   283,   294,   284,   295,   285,   306,
     286,     0,     0,   287,     0,    90,    91,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   313,
       0,     0,     0,     0,     0,   158,   163,   157,   159,   162,
     161,   160,     0,     0,   330,    65,    66,    67,    68,    69,
      61,    62,    63,    70,    64,     0,   335,     0,   383,   379,
     375,   376,   380,   377,   382,   336,   386,   337,   298,   391,
     395,   390,   301,   300,   299,     0,     0,   338,   402,   340,
       0,   339,     0,   409,   341,   421,   413,   424,   414,   415,
     417,     0,   419,   420,   156,   342,     0,     0,   343,     0,
       0,   156,   344,   433,   156,   431,   345,   434,   347,   156,
     435,   346,     0,   156,     0,   348,   453,     0,   451,   469,
       0,     0,     0,   457,   449,     0,   459,   474,   462,   350,
     480,   481,   351,   352,     0,     0,     0,   444,     0,   355,
     440,   441,     0,   356,   357,     0,   488,   482,   487,   483,
     484,   485,   486,   360,   361,   489,   363,     0,   490,   491,
     492,   365,   498,   493,   494,   496,   367,   504,   506,   508,
     510,   503,   505,   512,   369,     0,     0,   517,     0,   373,
     156,   519,   526,     0,   527,   545,   528,   547,   548,   549,
     533,   550,   552,   551,   553,   537,   541,   558,     0,     0,
       0,     0,   554,   542,    25,     0,     0,   563,   562,     0,
       0,     0,     0,    27,     0,     0,   573,     0,   574,     0,
       0,     0,     0,     0,   575,     0,   719,     0,   576,     0,
     577,     0,     0,   578,     0,   724,   723,   722,     0,   727,
       0,     0,     0,   899,     0,     0,     0,   731,   735,   737,
     738,     0,     0,     0,     0,   836,     0,     0,     0,   872,
       0,     0,     0,     0,     0,     0,     0,   874,     0,     0,
       0,    32,   141,   142,   140,   139,  1116,  1111,  1117,   135,
     136,   134,   137,   133,  1112,     0,  1114,  1115,    34,     0,
       0,     0,     0,  1128,  1129,     0,   156,     0,  1126,  1123,
       0,     0,     0,   156,  1146,  1149,  1147,  1148,  1140,  1141,
    1142,  1143,     0,     0,     0,    42,  1165,  1166,     0,  1173,
    1175,  1174,  1170,  1171,  1169,     0,     0,     0,     0,  1176,
       0,  1179,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1177,  1188,     0,     0,     0,  1178,  1180,  1230,
    1163,  1164,  1162,   210,     0,   213,   206,     0,   215,   207,
       0,   217,   208,  1161,  1160,   209,   211,   212,     0,     0,
     205,     0,     0,     0,     0,  1244,  1257,  1247,     0,     0,
    1250,     0,     0,  1249,  1248,   164,  1266,     0,  1265,  1261,
     230,   226,     0,   235,     0,   232,     0,   251,   151,   154,
     155,   153,   152,   266,   267,   268,   256,   255,   271,   273,
     272,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     156,     0,   314,    96,    93,    94,    95,   156,   316,   315,
       0,     0,     0,     0,     0,     0,     0,   329,     0,   325,
     323,   322,   334,   378,     0,     0,   381,   396,   397,   392,
     393,   398,   400,   399,   394,   302,   303,   389,   388,   404,
     403,     0,   408,   422,   423,   412,   425,   418,   416,   411,
       0,     0,   156,   156,   164,   164,   164,   156,     0,     0,
     156,   470,   452,   463,     0,   454,    80,   465,     0,     0,
     456,   458,   156,   475,     0,     0,   461,     0,     0,     0,
     446,     0,     0,     0,     0,   947,   949,   948,     0,  1041,
       0,  1020,     0,  1023,     0,     0,  1043,  1045,     0,  1036,
     359,     0,   495,   497,   507,   500,   509,   501,   511,   502,
     513,   499,     0,     0,   518,   515,   516,   164,   543,   555,
     556,   557,   559,     0,   572,   560,     0,     0,     0,     0,
       0,     0,   177,   177,   171,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   174,   174,   171,     0,     0,   171,
       0,     0,     0,     0,     0,   614,   638,     0,     0,     0,
     610,     0,     0,     0,     0,   177,   171,     0,     0,   715,
       0,   725,   726,   156,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   784,     0,     0,
       0,     0,     0,   807,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   826,     0,     0,   831,   832,     0,     0,
       0,   852,   854,   853,     0,   856,     0,     0,   863,   865,
     866,   900,     0,     0,     0,     0,   729,   730,   941,   939,
     944,   943,   942,   940,   945,     0,   734,     0,   739,     0,
     938,     0,   740,   741,   742,   743,     0,     0,     0,     0,
       0,   838,     0,     0,   839,  1063,     0,  1066,  1062,     0,
       0,     0,   840,   873,   841,  1081,  1086,  1083,  1082,  1080,
    1087,  1084,  1078,  1085,  1079,  1088,     0,     0,   846,     0,
       0,     0,  1094,     0,  1096,   849,     0,  1098,   850,   870,
       0,     0,     0,   875,   876,   877,  1113,  1127,     0,     0,
    1134,  1130,     0,     0,     0,  1125,  1124,  1138,  1137,     0,
       0,  1154,     0,     0,  1150,     0,  1158,     0,     0,  1151,
       0,  1172,   199,   199,     0,   199,     0,  1198,     0,  1197,
    1189,     0,     0,     0,     0,  1193,     0,     0,     0,  1196,
       0,     0,     0,     0,     0,  1191,  1199,     0,     0,     0,
    1190,   199,   199,   199,     0,   214,   216,   218,     0,   219,
       0,    58,     0,  1240,     0,  1245,     0,   156,  1251,  1252,
       0,  1254,  1255,     0,   165,   166,  1246,  1267,  1268,     0,
     222,     0,   236,     0,     0,     0,     0,   270,     0,     0,
       0,     0,     0,     0,     0,     0,   308,   156,     0,     0,
       0,     0,   156,     0,   328,     0,   327,   385,   384,     0,
       0,     0,   156,     0,   164,   430,   428,   432,   436,     0,
       0,     0,   164,     0,    84,    83,   471,   455,     0,   466,
     468,   167,     0,     0,   353,     0,     0,    58,     0,   445,
       0,     0,   959,     0,     0,     0,     0,     0,     0,   973,
       0,     0,     0,     0,     0,     0,   990,   991,     0,     0,
       0,     0,     0,  1002,     0,  1008,  1009,  1011,  1013,     0,
    1017,  1028,  1029,  1030,     0,  1032,  1037,  1039,  1040,  1038,
     946,     0,  1019,     0,  1018,   958,     0,     0,  1024,     0,
    1026,     0,  1025,  1046,  1027,  1034,     0,     0,   371,     0,
       0,   570,   571,     0,   568,   564,     0,   177,   177,   177,
     178,   179,   582,   583,   173,   172,     0,   177,   177,   177,
       0,   588,   598,   174,   177,   177,   177,   175,   176,   177,
     177,     0,   177,   177,     0,   174,     0,   611,     0,     0,
       0,   637,     0,   636,     0,     0,   613,     0,   612,     0,
       0,     0,     0,   174,   174,   171,     0,     0,   171,     0,
       0,     0,   177,   177,   711,     0,   177,   177,   716,     0,
     190,   191,   192,   193,   194,   195,     0,    88,    89,    87,
     747,     0,     0,     0,     0,     0,     0,   893,   891,   886,
       0,   896,   880,   897,   883,   895,   889,   878,   892,   881,
     879,   898,   894,     0,     0,     0,   763,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     794,     0,     0,     0,     0,     0,   806,   808,     0,     0,
     813,   812,     0,     0,   180,     0,     0,     0,   156,     0,
     822,     0,     0,     0,     0,   827,   828,   829,     0,     0,
       0,   835,   851,   855,   857,   860,   859,     0,     0,     0,
     864,   901,   903,     0,   902,   732,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1047,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   736,     0,     0,     0,     0,   837,     0,   156,     0,
    1058,  1056,     0,     0,   156,  1061,   842,     0,     0,     0,
     848,     0,     0,  1099,   868,   869,     0,   871,  1133,  1135,
    1132,  1131,  1122,     0,     0,     0,  1155,     0,     0,  1159,
    1167,   201,   202,   203,   204,   200,  1182,  1181,     0,     0,
       0,  1184,  1183,   199,     0,     0,     0,  1192,     0,     0,
       0,     0,     0,  1209,     0,  1223,  1222,  1224,     0,     0,
       0,  1195,     0,     0,     0,  1194,  1204,  1203,  1205,  1201,
    1200,  1202,  1226,  1225,  1227,     0,     0,     0,  1242,  1243,
       0,   156,  1258,  1253,  1256,     0,     0,   156,     0,     0,
       0,   233,     0,     0,     0,     0,     0,     0,     0,     0,
     305,   304,     0,     0,   296,   307,   309,     0,   319,   321,
     320,   318,   156,   326,     0,     0,     0,   164,   156,     0,
       0,     0,     0,   450,   464,    82,    81,   473,     0,   467,
     169,   170,   168,   460,     0,   476,     0,     0,     0,   448,
     442,     0,     0,     0,     0,     0,     0,   156,   960,     0,
     963,     0,     0,   966,     0,   156,   971,     0,   974,   975,
       0,   977,   978,   979,     0,   983,     0,     0,   986,     0,
     992,     0,     0,     0,   997,   998,   996,     0,     0,     0,
    1003,  1004,     0,     0,  1007,  1010,  1012,  1014,     0,     0,
    1031,  1033,   950,  1042,   951,     0,     0,  1044,  1035,     0,
       0,   523,   524,     0,     0,   569,     0,   579,   580,   581,
     177,   585,   586,   587,     0,     0,     0,   592,   593,   171,
       0,     0,     0,   177,   599,   600,   601,   602,   604,   174,
     607,   608,     0,   177,     0,     0,     0,   174,   174,   171,
       0,     0,     0,     0,   635,     0,   639,     0,     0,     0,
       0,     0,   174,   174,   171,     0,     0,   171,     0,     0,
       0,     0,     0,   174,   174,   171,     0,     0,   171,     0,
       0,     0,     0,     0,   174,   174,   171,     0,     0,   171,
       0,     0,     0,     0,   174,   174,   171,     0,     0,     0,
     174,   615,   616,   617,   618,   620,     0,   623,   624,     0,
     174,     0,     0,   709,   710,   177,   713,   714,     0,   746,
     156,   748,     0,     0,   752,     0,     0,     0,     0,     0,
     885,   882,   888,   887,   884,   890,     0,   761,     0,     0,
       0,     0,   156,   768,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   785,   786,   787,
       0,   791,   788,   790,     0,     0,   796,   795,   797,   798,
       0,     0,     0,     0,     0,     0,   156,   156,   811,   186,
     182,   187,   181,   184,   183,   185,   817,   818,   819,     0,
       0,   821,   823,   156,   156,     0,   830,   833,   156,   156,
     858,   862,   904,   733,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1089,   929,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     930,     0,     0,     0,     0,     0,   744,   745,   156,   164,
       0,   156,   156,  1064,  1065,     0,     0,   844,     0,   156,
    1095,  1097,   867,     0,  1152,  1153,  1156,  1157,   199,   199,
     199,  1228,  1207,  1206,  1208,  1211,  1210,  1214,  1213,  1215,
    1212,  1220,  1219,  1221,  1217,  1216,  1218,     0,     0,  1237,
       0,  1259,     0,   156,     0,  1262,     0,     0,   237,     0,
     234,     0,     0,     0,   274,     0,     0,     0,     0,   156,
       0,   311,   144,     0,   405,     0,   426,   164,   167,     0,
       0,   439,     0,   477,   478,     0,   443,     0,     0,     0,
       0,     0,   156,   961,   167,   167,   167,   156,   967,   167,
     164,   167,   167,   156,   980,   167,   167,   167,   156,   987,
     167,   167,   156,     0,   167,   156,   167,   167,   156,   167,
     156,  1021,  1022,     0,     0,   522,   565,     0,   584,   589,
     590,   591,     0,   595,   596,   597,   603,   177,   174,   609,
     626,   627,   628,   629,   630,     0,   632,   633,   174,     0,
       0,     0,   174,   174,   171,     0,     0,     0,     0,     0,
       0,   174,   174,   171,     0,     0,     0,     0,     0,     0,
     174,   174,   171,     0,     0,     0,   174,   177,   177,   177,
     177,   177,     0,   177,   177,     0,   174,   174,   177,   177,
     177,   177,   177,     0,   177,   177,     0,   174,   174,   689,
     690,   691,   692,   694,     0,   697,   698,     0,   174,   700,
     701,   702,   703,   704,     0,   706,   707,   174,   619,   174,
       0,   625,     0,     0,   712,     0,   749,   167,     0,     0,
     167,     0,     0,     0,   760,   167,   764,   765,   167,   767,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   789,   792,   793,     0,   167,     0,     0,
       0,   809,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1090,  1069,
       0,  1076,  1077,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   156,     0,     0,    85,     0,
       0,   936,   937,   164,     0,     0,     0,  1059,  1057,  1067,
     843,   845,   164,  1145,  1186,  1185,  1187,  1229,     0,  1239,
    1269,     0,     0,  1264,  1263,   238,     0,     0,     0,   279,
       0,     0,     0,   297,   167,   406,   410,   427,   429,     0,
     437,   472,     0,     0,     0,     0,     0,     0,   957,   962,
     965,   964,   968,   969,   970,   972,   976,   981,   982,   984,
     985,   988,   989,   993,   164,   167,  1000,   164,  1001,  1005,
     164,  1015,   164,     0,     0,   521,     0,   594,   605,   177,
     174,   634,   177,   177,   177,   177,   177,     0,   177,   177,
     174,   177,   177,   177,   177,   177,     0,   177,   177,   174,
     177,   177,   177,   177,   177,     0,   177,   177,   174,   177,
     649,   650,   651,   652,   654,   174,   657,   658,     0,   177,
     177,   678,   679,   680,   681,   683,   174,   686,   687,     0,
     177,   693,   174,     0,   699,   174,   708,   621,   174,   717,
     718,   156,   751,     0,   167,   754,     0,   156,     0,   762,
     766,   156,     0,   773,   774,   775,   776,   780,   781,   777,
     778,   779,     0,     0,   167,   801,     0,   156,     0,     0,
     814,   167,     0,     0,   167,   167,     0,   861,     0,   188,
     188,     0,     0,   188,     0,   188,  1047,     0,     0,     0,
       0,     0,     0,     0,     0,  1068,     0,     0,   188,   188,
       0,     0,     0,     0,     0,     0,     0,     0,   931,     0,
       0,     0,  1047,    86,     0,   188,     0,  1092,   935,     0,
       0,     0,   220,  1271,  1270,     0,     0,   242,     0,     0,
       0,     0,   312,   438,   331,     0,   953,     0,   196,     0,
     994,   995,   999,  1006,  1016,   364,   331,     0,   606,   631,
     640,   641,   642,   643,   644,   174,   646,   647,   177,   669,
     670,   671,   672,   673,   174,   675,   676,   177,   660,   661,
     662,   663,   664,   174,   666,   667,   177,   653,   177,   174,
     659,   682,   177,   174,   688,   695,   174,   705,   622,     0,
     167,   755,     0,     0,     0,     0,     0,   782,   783,   799,
       0,     0,     0,   810,   815,     0,   824,   825,   816,   167,
       0,   189,  1047,  1047,    85,     0,  1047,     0,  1047,   905,
     156,     0,  1071,     0,  1074,  1108,  1075,  1073,  1070,     0,
    1047,  1047,    85,     0,     0,  1047,  1047,     0,     0,  1047,
     934,   932,   933,   912,  1047,  1047,  1092,  1103,     0,  1060,
     847,     0,     0,     0,   244,     0,     0,     0,   332,   333,
     354,     0,     0,   197,   198,   955,   956,   372,     0,   177,
     648,   177,   677,   177,   668,   655,   177,   684,   177,   696,
       0,   750,   167,   167,     0,   167,     0,   167,   167,     0,
     167,     0,  1047,   918,   914,  1047,     0,   919,     0,   913,
    1047,     0,  1072,     0,   916,   915,  1047,     0,     0,   910,
     908,  1047,   156,   909,   911,   917,  1103,  1054,     0,     0,
    1093,  1101,  1144,     0,     0,     0,   275,   298,   301,   299,
       0,     0,   952,   156,   567,   645,   674,   665,   656,   685,
     167,   753,   759,     0,   772,   769,   800,   805,     0,   820,
       0,   923,   907,    85,     0,   921,  1109,     0,   906,    85,
       0,   922,     0,  1055,  1105,  1107,     0,  1100,     0,     0,
     280,     0,     0,     0,     0,   196,     0,   756,   156,   770,
     802,   834,  1047,     0,     0,  1047,     0,   167,  1106,  1102,
     243,     0,     0,     0,     0,     0,   954,   728,   156,   757,
     771,   156,   803,   925,     0,  1047,   924,     0,     0,   245,
     291,     0,   290,     0,   758,   804,    85,   926,    85,  1047,
     289,   288,  1047,  1047,   920,   928,   927
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,  1409,   172,   152,  1256,  2482,  2483,   429,   430,
     431,   432,   153,   154,   155,   694,   686,    91,   813,   452,
    1206,  1673,  1346,  1359,  1342,  1916,  2582,  1406,  2635,  1576,
     340,   766,   769,   772,   780,    63,   365,   371,   375,   378,
      68,   381,    75,   397,   393,   387,   404,    82,   409,    92,
      98,   414,   416,   418,   486,   867,  1642,   420,   423,   105,
     439,   156,   158,  2630,   174,   215,   475,   856,   477,   487,
     859,   864,   489,   491,   870,   494,   872,   505,   875,   877,
     508,   512,   516,   518,   521,   525,   553,   549,  1269,   539,
     895,   900,   892,  1257,   906,   542,   563,   566,   571,   576,
     584,   935,   937,   939,   941,   589,   945,   218,   591,  1743,
     237,   594,   596,   600,   605,   613,   247,  1335,   617,   255,
     626,  1351,   628,   634,   990,  1367,   985,  1784,  1373,  1371,
    1786,   986,  1376,  1378,   640,   643,   638,   257,   265,   267,
     681,  1067,  1433,  1056,  1531,  1960,  2276,  1072,  1065,   930,
    1310,  1314,  1322,  1324,  1944,   273,  1081,  1084,  1092,  2248,
    2249,  2250,  1945,  2617,  2618,  1115,  1118,  2690,  2691,  2687,
    2688,  2734,  2251,  2252,   281,   287,   295,   708,   703,   300,
     305,   307,   718,   725,  1144,  1149,   775,   763,   313,   317,
     732,   323,   739,  1581,   752,   753,  1180,  1175,  1587,  1165,
    1593,  1605,  1601,  1169,   757,   741,   329,   330,   344,  1193,
     347,   353,   790,   793,   787,   355,   358,   798
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2177
static const yytype_int16 yypact[] =
{
    4995,    48,    90,    62, -2177, -2177,  1102,  -154,   569,   896,
    1196,    85,  1254,   105,   269,   820,    17,  5180,    94,   645,
   -2177,     8,   445,   152,  1072,   -23,    39,   221,   437,  1184,
     168,   731,  3154,    15,   883,   244,   339,   437, -2177,   -45,
     150,  1128, -2177,   426,   485,  1453, -2177,    37, -2177,    76,
    3536,   284,    88,   543,    27,   849,   271,   573,   581,   104,
     635,    -2,   143, -2177, -2177, -2177,  1104,   520, -2177,    29,
     110,   269,   378,   258,   130, -2177,   658,   520, -2177, -2177,
      43,   520, -2177, -2177, -2177, -2177,   520, -2177, -2177, -2177,
   -2177, -2177, -2177,   218,   639,   700,   714,   151, -2177,   520,
    1338,   520,   520,   847,   520, -2177, -2177, -2177,   527, -2177,
   -2177, -2177, -2177,  4615, -2177, -2177, -2177, -2177, -2177, -2177,
     520, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177,
   -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177,
   -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177,
   -2177, -2177, -2177,  1628, -2177,   520, -2177,   739, -2177, -2177,
     269,   269,   269,   269,   269,   269, -2177, -2177,   269,   269,
     269,   269, -2177,   648, -2177,   718,  1684,   692,    91,   534,
     664,   507,  4017,   139,  4137,  4572,   796,  4615,  3596, -2177,
     457,   -51,   773,   841,   764,  1177,   100,   858,   437,   874,
   -2177,   790, -2177,   628,   596,    20, -2177,   187, -2177,  1573,
   -2177,   403,   829,   133, -2177, -2177,  4692, -2177, -2177, -2177,
     854,   853,   902, -2177, -2177, -2177, -2177,   500, -2177, -2177,
   -2177, -2177,   793, -2177, -2177,  4692,  4205, -2177,   935, -2177,
     226, -2177,   944,   959,   531, -2177,   520, -2177,   994,    72,
     995,   555,   397,   997,    35, -2177, -2177, -2177,  1000,  1011,
     269,   269,   520,   520, -2177, -2177,  1014, -2177, -2177, -2177,
   -2177, -2177, -2177,  2522,   835, -2177,  1021,   172,   520,  4692,
     520, -2177,  1024, -2177, -2177, -2177, -2177, -2177,   520,  1303,
     269,   652,   520,  1628,   520, -2177,  1035, -2177,  4778, -2177,
   -2177,   681,  1049,  1063,   520, -2177,  1067, -2177, -2177,   -25,
    1084,  4692,  1073, -2177,  1318,   520,  1015, -2177,   506,   972,
    1549,   406,  1094, -2177, -2177, -2177, -2177, -2177, -2177, -2177,
    1112, -2177,   571,    65,   136,   197,    55,   520,   520,   116,
   -2177,   520,   844,  1118, -2177,   520,   520, -2177,  1123,     3,
      57,  1134,  1628, -2177, -2177, -2177,  1156,   520, -2177, -2177,
   -2177, -2177, -2177, -2177,   520, -2177,  1145,  1163, -2177,   520,
     805, -2177, -2177, -2177, -2177, -2177, -2177,   520, -2177, -2177,
     520, -2177, -2177,   383,   383, -2177,  1169, -2177, -2177, -2177,
   -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177,   979,   520,
     520,  1178,  1188,  1192, -2177, -2177,   520,   520,   520, -2177,
     520, -2177,  1195, -2177, -2177, -2177, -2177,   511, -2177,  1183,
   -2177,  4692,  1200, -2177,   520, -2177, -2177, -2177,   520,  1198,
    1208,  1208,  4692,   520,   520,   520,   520,   520,   520, -2177,
     520,  4615,  1338,   520,   520, -2177, -2177, -2177, -2177, -2177,
   -2177, -2177,  1338,   520, -2177, -2177, -2177, -2177, -2177, -2177,
   -2177, -2177, -2177, -2177, -2177,  1204, -2177,   952,   376, -2177,
   -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177,   -35, -2177,
   -2177, -2177,  1060, -2177,     2,   385,   385, -2177, -2177, -2177,
    1236, -2177,  1239, -2177, -2177,   -59, -2177,  1065, -2177, -2177,
   -2177,  1077, -2177, -2177,  1628, -2177,   520,   520, -2177,  4692,
    4692,  1628, -2177, -2177,  1628, -2177, -2177, -2177, -2177,  1628,
   -2177, -2177,  4692,  1628,   520, -2177, -2177,  4692, -2177,  1255,
     127,  1062,     1, -2177, -2177,  1068,  4692,     7, -2177, -2177,
   -2177, -2177, -2177, -2177,  1264,  1266,  1268, -2177,  1079, -2177,
   -2177, -2177,   520, -2177, -2177,   404, -2177, -2177, -2177, -2177,
   -2177, -2177, -2177, -2177, -2177, -2177, -2177,   403, -2177, -2177,
   -2177, -2177, -2177, -2177,  1092,  1113, -2177, -2177,  1245,  1248,
    1250, -2177, -2177,  1095, -2177,   520,  1320,  1099,  4778, -2177,
    1628, -2177, -2177,  1330, -2177, -2177, -2177, -2177, -2177, -2177,
   -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177,  4692,  4692,
    4692,  4692, -2177, -2177, -2177,  1332,   269, -2177, -2177,  1335,
    1340,  1162,   520, -2177,    24,  1267, -2177,  1347, -2177,   621,
    1271,  2905,   418,  1362, -2177,  1360, -2177,  1364, -2177,    31,
   -2177,  1365,  1366, -2177,  1372, -2177, -2177, -2177,   520, -2177,
    4778,  4530,  1659,   484,  1407,   478,  1313, -2177, -2177, -2177,
    1398,   833,  1414,  1415,   101,   520,   374,   405,  1005,  4692,
     269,  1620,   904,    16,   174,   262,    23, -2177,  1404,  1405,
    1420, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177,
   -2177, -2177, -2177, -2177, -2177,   520, -2177, -2177, -2177,   520,
     520,   520,   520, -2177, -2177,   520,  1628,   520, -2177,   520,
    1338,   520,  1422,  1628, -2177, -2177, -2177, -2177, -2177, -2177,
   -2177, -2177,  1425,   563,   678, -2177, -2177, -2177,  1426, -2177,
   -2177, -2177, -2177,  1334, -2177,  1429,  1430,  1331,  1433, -2177,
    1441, -2177,  1443,  1361,  1445,   425,   623,   505,   466,   592,
    1448,   617, -2177, -2177,  1450,  1451,  1459, -2177, -2177,  1460,
   -2177, -2177, -2177, -2177,  1461, -2177, -2177,  1467, -2177, -2177,
    1470, -2177, -2177, -2177, -2177, -2177, -2177, -2177,   520,   520,
   -2177,   520,   908,   520,   520, -2177,  1359, -2177,   570,  1472,
   -2177,  1027,  1473, -2177, -2177,   354,   520,   520, -2177,  1471,
   -2177, -2177,  1474,  1284,   520,  1475,   496, -2177, -2177, -2177,
   -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177,
   -2177,  1480,  1482,   520,   520,   520,  1485,   269,  1487,  1488,
    1628,  4692, -2177, -2177, -2177, -2177, -2177,  1628, -2177, -2177,
     520,   520,   520,  4692,   520,  1338,   520, -2177,   520, -2177,
   -2177, -2177, -2177, -2177,  1491,  1492, -2177, -2177, -2177, -2177,
   -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177,   139,
   -2177,   520, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177,
    4692,   520,  1628,  1628,   354,   354,   354,  1628,  1338,   520,
    1628, -2177, -2177, -2177,   520, -2177,   -15,  1297,  1497,  1489,
   -2177, -2177,  1628, -2177,  1346,  1353, -2177,  1510,  1522,  1511,
    1044,   520,  4535,   440,   574, -2177, -2177, -2177,   520,   212,
    1197, -2177,  1278, -2177,  1620,  1279,   234,  1256,   512, -2177,
   -2177,   520, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177,
   -2177, -2177,   520,  1545, -2177, -2177, -2177,   354, -2177, -2177,
   -2177, -2177, -2177,  4644, -2177, -2177,  1553,  1554,   520,  1562,
    1593,  1594,    12,    12,   319,  1596,  1597,  1599,  1601,  1282,
    1326,  1602,  1610,  1611,   449,   449,   319,  1614,  1615,   319,
    1619,  1623,  3469,  1626,  1629, -2177, -2177,  1632,  1633,   867,
   -2177,  1616,  1635,  1636,  1638,    12,   319,  1641,  1642, -2177,
    1644, -2177, -2177,  1628,   794,  1220,  1391,   407,  1408,  1533,
     661,   415,  1646,   222,  1505,  1546,  1700,  1040,  1621,   498,
    1417,  1555,  1651,  1449,    46,    54,   -84,   -36,  4692,  1620,
    1627,   -56,  1412,  1454,  1661,    45, -2177, -2177,   224,  1666,
    1667, -2177, -2177, -2177,  1668,  1490,   119,  1620,  1499, -2177,
   -2177, -2177,   269,  1699,  1702,   520, -2177, -2177, -2177, -2177,
   -2177, -2177, -2177, -2177, -2177,    11, -2177,  2276, -2177,   520,
   -2177,   520, -2177, -2177, -2177, -2177,   520,   520,   520,   478,
    4692, -2177,  1707,  1087, -2177, -2177,   520, -2177, -2177,   520,
    4692,   520, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177,
   -2177, -2177, -2177, -2177, -2177, -2177,   269,   520, -2177,   520,
     478,  1710, -2177,   520,   520, -2177,   269, -2177, -2177, -2177,
     641,  1711,  1712, -2177, -2177, -2177, -2177, -2177,   520,   520,
   -2177, -2177,  1338,   520,   520, -2177, -2177, -2177, -2177,  1703,
     520, -2177,   520,  1591, -2177,   520, -2177,   520,  1605, -2177,
    1715, -2177,   850,   850,   632,   850,  1718, -2177,   665, -2177,
   -2177,  1719,  1723,   673,  1716, -2177,  1724,  1725,  1727, -2177,
     684,   772,  1729,  1730,  1735, -2177, -2177,  1736,  1737,  1741,
   -2177,   850,   850,   850,   520, -2177, -2177, -2177,   520, -2177,
     520,   938,  4692, -2177,   520, -2177,  4778,  1628, -2177, -2177,
    1747, -2177, -2177,  1749, -2177, -2177, -2177, -2177,  1734,   652,
   -2177,   520,  1743,   520,   520,   520,   876, -2177,  1753,  1757,
     520,   520,    79,  1759,   269,   269, -2177,  1628,   520,  1761,
    1763,  1764,  1628,  4692, -2177,   520, -2177, -2177, -2177,   520,
     520,   520,  1628,  4692,   354, -2177, -2177, -2177, -2177,  1338,
     520,  1765,   354,   520,  1732,  1733,   551, -2177,  1769, -2177,
   -2177,   134,  2606,   520, -2177,   520,  1771,  1776,   520, -2177,
    1773,  1050,  4615,  1537,   565,  1539,    13,  4692,   646, -2177,
     344,  1647,    83,   676,  1540,   118, -2177, -2177,   545,  1630,
     -67,  1662,   -61,  1620,   893, -2177,  1785,  1541, -2177,   686,
   -2177, -2177, -2177, -2177,  1620,  1585, -2177, -2177, -2177, -2177,
   -2177,   520, -2177,   520, -2177, -2177,   520,   520, -2177,   520,
   -2177,   520, -2177, -2177, -2177, -2177,  1598,   520, -2177,   520,
      52, -2177, -2177,  1794,  1797, -2177,   520,    12,    12,    12,
   -2177, -2177, -2177, -2177, -2177, -2177,  1798,    12,    12,    12,
     479, -2177, -2177,   449,    12,    12,    12, -2177, -2177,    12,
      12,  1799,    12,    12,  1801,   449,   518, -2177,  1802,  1804,
    1805, -2177,   996, -2177,  1160,  1179, -2177,   834, -2177,  1538,
    1808,  1811,  1812,   449,   449,   319,  1815,  1816,   319,  1817,
    1819,  1821,    12,    12, -2177,  1824,    12,    12, -2177,  1825,
   -2177, -2177, -2177, -2177, -2177, -2177,   269, -2177, -2177, -2177,
    4615,   201,   269,   520,   954,  1437,   398, -2177, -2177, -2177,
     911, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177,
   -2177, -2177, -2177,  1827,   269,   520, -2177,   269,  1828,   520,
    4692,   269,  1530,  1564,  1587,   153,   158,  1592,   164,  1525,
    1526,  1831,  1836,  1837,   661,  1839,  1840,  1841,  1534,  1535,
    1153,  1845,   269,   520,  1402,  1548, -2177, -2177,   269,  4692,
   -2177, -2177,  4692,   520,    -1,  1847,   269,   520,  1628,   269,
   -2177,  1848,  4692,  4692,   520, -2177, -2177, -2177,   269,   269,
    4692, -2177, -2177, -2177, -2177, -2177, -2177,  4692,   520,   269,
   -2177, -2177, -2177,   520, -2177, -2177,  1850,   520,  1631,   184,
     520,  1634,   520,   190,   520, -2177,   520,  1637,  1640,   520,
     520,   520,   520,   520,   520,   520,   520,    19,   520,   520,
    1654, -2177,   520,   520,   520,   520, -2177,  4692,  1628,  1851,
    4692,  4692,   520,   520,  1628, -2177,   520,   520,   520,  4692,
   -2177,   520,   520, -2177, -2177, -2177,  1853, -2177, -2177, -2177,
   -2177, -2177, -2177,  1856,   520,   520, -2177,   520,   520, -2177,
   -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177,  1858,  1861,
    1865, -2177, -2177,   850,  1880,  1881,  1866, -2177,  1884,  1885,
    1886,  1888,  1890, -2177,  1891, -2177, -2177, -2177,  1896,  1897,
    1899, -2177,  1900,  1903,  1906, -2177, -2177, -2177, -2177, -2177,
   -2177, -2177, -2177, -2177, -2177,   520,   520,   520, -2177, -2177,
     520,  1628, -2177, -2177, -2177,   652,   520,  1628,   520,   520,
     520, -2177,   520,   520,  1907,   520,  1909,  1898,   520,   520,
   -2177, -2177,  1910,  4692, -2177, -2177, -2177,   520, -2177, -2177,
   -2177, -2177,  1628, -2177,   971,   520,   971,   354,  1628,  4692,
     520,   520,  1911, -2177, -2177, -2177, -2177, -2177,   520, -2177,
   -2177, -2177, -2177, -2177,  4692, -2177,  4692,   520,  1916, -2177,
   -2177,  1919,  1920,  1921,  1922,  1923,  4692,  1628, -2177,  4692,
   -2177,  4692,  4692,  4615,  4692,  1628, -2177,  4692, -2177, -2177,
    4692, -2177, -2177,  4615,  4692, -2177,  4692,  4692,  4615,  4692,
   -2177,  4692,  4692,   520, -2177, -2177, -2177,  4692,  4692,  4692,
   -2177, -2177,  4692,  4692, -2177, -2177, -2177, -2177,  4692,  4692,
   -2177, -2177, -2177, -2177, -2177,   520,   520, -2177, -2177,  1917,
     520, -2177, -2177,  1936,  1938, -2177,   520, -2177, -2177, -2177,
      12, -2177, -2177, -2177,  1950,  1956,  1960, -2177, -2177,   319,
    1962,  1964,  1965,    12, -2177, -2177, -2177, -2177, -2177,   449,
   -2177, -2177,  1967,    12,  1969,  1970,  1971,   449,   449,   319,
    1973,  1974,  1975,   888, -2177,  1022, -2177,  1041,  1693,  1976,
    1977,  1979,   449,   449,   319,  1981,  1982,   319,  1984,  1714,
    1986,  1987,  1988,   449,   449,   319,  1983,  1990,   319,  1991,
    1721,  1993,  1994,  1995,   449,   449,   319,  1997,  1998,   319,
    1999,  2001,  2003,  2005,   449,   449,   319,  2008,  2011,  2012,
     449, -2177, -2177, -2177, -2177, -2177,  2014, -2177, -2177,  2015,
     449,  2016,  2017, -2177, -2177,    12, -2177, -2177,  2020, -2177,
    1628, -2177,  4692,   520, -2177,   520,  4692,   520,  2021,  1220,
   -2177, -2177, -2177, -2177, -2177, -2177,  2022, -2177,  4692,   269,
    2023,  4692,  1628, -2177,  2026,  1220,   520,   520,   520,   520,
     520,   520,   520,   520,   520,  2018,  2029, -2177, -2177, -2177,
    2030, -2177, -2177, -2177,  2033,  2034, -2177, -2177, -2177, -2177,
     520,  4692,   520,  2035,  1220,   269,  1628,  1628, -2177, -2177,
   -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177,   520,
    1338, -2177, -2177,  1628,  1628,   520, -2177, -2177,  1628,  1628,
   -2177, -2177, -2177, -2177,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,  2327, -2177,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,  1061,  2036,   520,
   -2177,   520,   520,   520,  2038,  2039, -2177, -2177,  1628,   354,
    2040,  1628,  1628, -2177, -2177,  1338,   520, -2177,  2041,  1628,
   -2177, -2177, -2177,  2042, -2177, -2177, -2177, -2177,   850,   850,
     850, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177,
   -2177, -2177, -2177, -2177, -2177, -2177, -2177,  1220,   520, -2177,
     520, -2177,   520,  1628,   520, -2177,  1338,   520, -2177,   520,
   -2177,  1878,  2043,  2044, -2177,  2046,   520,   520,  2047,  1628,
    4692, -2177, -2177,   520, -2177,   520, -2177,   354,   134,   520,
    2048, -2177,   520, -2177, -2177,   403, -2177,  2049,  2050,  2051,
    2053,  2056,  1628, -2177,   134,   134,   134,  1628, -2177,   134,
     354,   134,   134,  1628, -2177,   134,   134,   134,  1628, -2177,
     134,   134,  1628,  4692,   134,  1628,   134,   134,  1628,   134,
    1628, -2177, -2177,  2060,   403,  2061, -2177,   520, -2177, -2177,
   -2177, -2177,  2063, -2177, -2177, -2177, -2177,    12,   449, -2177,
   -2177, -2177, -2177, -2177, -2177,  2064, -2177, -2177,   449,  2065,
    2066,  2067,   449,   449,   319,  2069,  2070,  2071,  2072,  2073,
    2074,   449,   449,   319,  2076,  2077,  2078,  2080,  2081,  2082,
     449,   449,   319,  2084,  2085,  2087,   449,    12,    12,    12,
      12,    12,  2086,    12,    12,  2091,   449,   449,    12,    12,
      12,    12,    12,  2094,    12,    12,  2095,   449,   449, -2177,
   -2177, -2177, -2177, -2177,  2098, -2177, -2177,  2099,   449, -2177,
   -2177, -2177, -2177, -2177,  2100, -2177, -2177,   449, -2177,   449,
    2101, -2177,  2102,  2103, -2177,  4778, -2177,   134,  2104,  4692,
     134,   520,  4692,  2105, -2177,   134, -2177, -2177,   134, -2177,
    4692,  2108,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520, -2177, -2177, -2177,  4692,   134,   520,  4692,
    2109, -2177,  1338,  1338,  4692,  1338,  1338,  4692,  4692,  1338,
    1338,   520,   520,   520,   520,   520,   520,  1220,   520,   520,
     520,  1622,  1677,  1690,  1695,  1708,  1758,  1760,  2327, -2177,
    1762, -2177, -2177,  1220,   520,   520,   520,   520,  1220,   520,
     520,   520,   520,   520,   520,  1628,   520,  1674,  1220,   520,
     520, -2177, -2177,   354,   269,  2110,  2112, -2177, -2177, -2177,
   -2177, -2177,   354,  2114, -2177, -2177, -2177, -2177,   520, -2177,
   -2177,  1338,   520, -2177, -2177, -2177,  1009,  2115,  2116, -2177,
     520,  2118,   971, -2177,   134, -2177, -2177, -2177, -2177,  2119,
   -2177, -2177,  2121,  2122,  2124,  2125,  4692,  2126, -2177, -2177,
   -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177,
   -2177, -2177, -2177, -2177,   354,   134, -2177,   354, -2177, -2177,
     354, -2177,   354,  2127,  2129, -2177,   520, -2177, -2177,    12,
     449, -2177,    12,    12,    12,    12,    12,  2130,    12,    12,
     449,    12,    12,    12,    12,    12,  2131,    12,    12,   449,
      12,    12,    12,    12,    12,  2132,    12,    12,   449,    12,
   -2177, -2177, -2177, -2177, -2177,   449, -2177, -2177,  2134,    12,
      12, -2177, -2177, -2177, -2177, -2177,   449, -2177, -2177,  2135,
      12, -2177,   449,  2136, -2177,   449, -2177, -2177,   449, -2177,
   -2177,  1628, -2177,  4692,   134, -2177,  2137,  1628,   520, -2177,
   -2177,  1628,   520, -2177, -2177, -2177, -2177, -2177, -2177, -2177,
   -2177, -2177,   520,   520,   134, -2177,  2138,  1628,   520,  1338,
   -2177,   134,   520,  1338,   134,   134,  4692, -2177,   520,  2139,
    2139,   520,   520,  2139,  1220,  2139, -2177,  4692,   661,  2140,
    2142,  2143,  2144,  2145,  2147, -2177,   269,  1220,  2139,  2139,
     520,   520,  1220,   520,   520,   520,   520,   520, -2177,  1338,
     520,  2148, -2177, -2177,   520,  2139,   269,     9, -2177,  2150,
     269,  2152, -2177, -2177, -2177,  2153,   520, -2177,  2154,  2156,
    1905,   520, -2177, -2177,    10,  4692, -2177,  2158,    28,  4692,
   -2177, -2177, -2177, -2177, -2177, -2177,    10,   520, -2177, -2177,
   -2177, -2177, -2177, -2177, -2177,   449, -2177, -2177,    12, -2177,
   -2177, -2177, -2177, -2177,   449, -2177, -2177,    12, -2177, -2177,
   -2177, -2177, -2177,   449, -2177, -2177,    12, -2177,    12,   449,
   -2177, -2177,    12,   449, -2177, -2177,   449, -2177, -2177,   520,
     134, -2177,  4692,  4692,   520,  4692,   520, -2177, -2177, -2177,
    4692,  4692,   520, -2177, -2177,  4692, -2177, -2177, -2177,   134,
    2157, -2177, -2177, -2177,  1220,   520, -2177,  2160, -2177, -2177,
    1628,  2162, -2177,  2161, -2177, -2177, -2177, -2177, -2177,  2165,
   -2177, -2177,  1220,   520,  2166, -2177, -2177,   520,  4692, -2177,
   -2177, -2177, -2177, -2177, -2177, -2177,     9,  1706,  1620, -2177,
   -2177,  2167,  2168,  2169, -2177,  2117,  2171,   147, -2177, -2177,
   -2177,  2172,  4692, -2177, -2177, -2177, -2177, -2177,  2173,    12,
   -2177,    12, -2177,    12, -2177, -2177,    12, -2177,    12, -2177,
    4778, -2177,   134,   134,   520,   134,  2174,   134,   134,   520,
     134,   520, -2177, -2177, -2177, -2177,  2175, -2177,   520, -2177,
   -2177,  2176, -2177,   520, -2177, -2177, -2177,  2178,   520, -2177,
   -2177, -2177,  1628, -2177, -2177, -2177,  1706, -2177,  1780,  1787,
    1620, -2177, -2177,  2179,  2180,  2183, -2177, -2177, -2177, -2177,
     993,   993, -2177,  1628, -2177, -2177, -2177, -2177, -2177, -2177,
     134, -2177, -2177,  2185, -2177,  4615, -2177, -2177,  2186, -2177,
    1220, -2177, -2177,  1220,   520, -2177, -2177,   520, -2177,  1220,
     520, -2177,  4692, -2177,  1780, -2177,   269, -2177,  2187,  2188,
   -2177,   520,   520,   520,   520,    28,  2189,  4615,  1628, -2177,
    4615, -2177, -2177,   520,  2191, -2177,   520,   134, -2177, -2177,
   -2177,  2192,  2193,   520,  2205,   520, -2177, -2177,  1628, -2177,
   -2177,  1628, -2177, -2177,  2207, -2177, -2177,  2208,  2209, -2177,
   -2177,  2211, -2177,  2216, -2177, -2177,  1220, -2177,  1220, -2177,
   -2177, -2177, -2177, -2177, -2177, -2177, -2177
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2177, -2177,    -3, -2177,   430, -2177, -1363,  -969,  1574, -2177,
     825,  -129,  1875,   -48,    84, -2177, -2177, -1650,  1691,  1978,
    -774,   961,  -961,   992,  1613, -2177, -1123, -2177,  -663, -1128,
   -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177,
   -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177,
   -2177, -2177, -2177, -2177,  -501,  -483, -2177, -2177, -2177, -2177,
   -2177, -2177, -2177,  -369, -2177, -2177, -2177, -2177, -2177, -2177,
   -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177,
   -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177,
   -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177,
   -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177,
   -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177,
   -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177,
   -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177,
   -2177, -2177, -1453, -2177, -2177, -2177, -2177, -2177,  -653, -2177,
   -2177, -2177, -2177, -2177, -2177,    47, -2177, -2177, -2177, -2177,
     -96,  -661,   515,  -459, -2177, -2177, -2177, -2177,  -518,  -506,
   -2177, -2177, -2176, -2177, -2177, -2177, -2177, -2177, -2177, -2177,
   -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177,
   -2177, -2177, -2177, -2177, -2177,  1438, -2177, -2177, -2177, -2177,
   -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177,
   -2177, -2177, -2177, -2177, -2177, -2177, -2177, -2177
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1242
static const yytype_int16 yytable[] =
{
      67,  1890,   352,   868,  2033,   897,  2035,   788,   104, -1091,
    1106,   903,   106,  1080,  1083,  1361,  1505,   310,  1364,   106,
     296,  1110,    64,    65,  1957,  1577,  1909,  1582,  1119,   292,
     373,   106,   360,   383,  1693,  1395,  1410,   316,   959,   960,
     641,   341,  2628,   106,   258,   993,   346,   407,  1910,   357,
    1487,  1911,   364,  1612,  1613,  1614,   370,    64,    65,   377,
    2633,   791,  1912,   380,   382,    64,    65,   392,   773,   106,
     399,   403,  1741,  1468,   406,   238,  1481,   624,   410,    64,
      65,   861,   568,   411,   309,  1913,   961,  1476,    64,    65,
    1470,    64,    65,   994,    64,    65,   424,   428,   433,   434,
     438,   440,    55,  1914,  1703,   550,   259,    64,    65,  1717,
    1246,  1247,  1248,    64,    65,    54,   294,   444,  1075,    64,
      65,  1254,    64,    65,  1120,    99,  1640,   723,   260,   111,
    1121,   893,   764,    64,    65,    76,   111,   873,   157,  1708,
     106,   904,    64,    65,    56,   100,    64,    65,   111,   587,
      64,    65,   453,    64,    65,  1495,   421,   109,  1670,  1671,
     111,   857,    57,   342,   173,   540,   551,  1718,   248,   898,
     361,  1340,  1482,  1330,  1878,   485,   688,   862,   216,  1880,
     506,   261,   422,  1474,   109,  1883,   111,    64,    65,  1471,
    1475,  1112,    58,    64,    65,   217,   109,   443,   101,  1341,
    1714,   106,   874,   767,    64,    65,  1852,  1715,   572,   400,
      59,   256,  1477,   114,    60,    64,    65,   962,   963,   858,
     114,   115,   116,   412,   995,   384,   266,    61,   115,   116,
     615,  1483,   114,  1672,  1719,   282,  1255,    64,    65,   724,
     115,   116,   311,   622,   114,   555,   343,   774,   306,  1437,
     713,  1489,   115,   116,  1496,  1694,   863,   111,   541,   648,
     649,    64,    65,  1318,   770,   312,   106,   507,   376,   515,
     114,   520,   524,   106,  1469,   695,   385,   697,   115,   116,
     552,   478,   102,   386,   374,   699,   702,   479,   705,   709,
    1742,   711,   964,   408,   789,   585,  2629,  1488, -1091,   996,
     388,   721,   965,   966,   905,   401,  1111,   569,   119,   997,
     642,   731,   733,   847,  2634,   119,  1076,   899,   111,   117,
    1506,   297,   625,   850,   573,  1704,   480,   119,  1958,  1122,
     570,   298,   588,   967,   776,   777,   779,  2697,   781,   119,
     998,   114,   784,   785,   778,   262,   117,   314,   792,   115,
     116,  1472,   481,   797,   799,  1915,  1641,   149,   117,    66,
    1709,   800,   150,   151,   149,   119,   803,   805,  1479,   150,
     151,  1698,   689,   345,   806,   707,   149,   807,   103,   690,
     691,   150,   151,   111,   402,   356,  1499,    62,   149,  1113,
     111,  1438,   263,   150,   151,  1879,   817,   818,   482,  1077,
    1881,   369,   114,   822,   823,   824,  1884,   825,   912,   913,
     115,   116,  1936,   808,   149,   692,  1497,   389,  1941,   150,
     151,   832,   616,  1312,  1836,   833,  1537,  1839,   308,   574,
     838,   839,   840,   841,   842,   843,   119,   844,  1058,   428,
     848,   849,   483,   484,   159,  1320,  1859,   315,   413,   428,
     851,   239,  1490,  1204,  2698,  1991,   264,  1549,   398,   575,
     109,   390,   391,   299,  1439,   914,  1357,   114,   754,  1058,
    1659,   915,  1114,  1875,   114,   115,   116,   324,  1663,   809,
    1059,   854,   115,   116,   362,   149,  1344,   742,  1051,   331,
     150,   151,   635,  1754,  1755,   268,  1904,   119,   483,  2699,
    1215,   394,   526,   880,   881,  1860,   987,  1301,  1216,  1440,
     636,  1059,  2735,  1699,  1052,   827,   828,   527,   354,   395,
     916,   889,   693,    64,    65,   846,   865,   325,   755,  1325,
    1412,  1082,  1774,  1775,   240,   917,   326,   620,  1434,   528,
     946,  1756,  1058,   359,   597,   366,   149,   744,   810,   911,
     918,   150,   151,  1116,  1170,  1667,   919,   396,  2758,   529,
     629,   920,   119,   241,   866,   327,   855,  1166,   735,   119,
     269,  1302,  1710,    77,  1198,  1199,   530,   988,   367,   531,
    1776,  1135,   942,   984,  1059,   368,  1700,   637,   598,  1345,
     455,   456,   457,   458,   459,   460,  1861,  1303,   461,   462,
     463,   464,  1003,  1140,  1306,   760,   532,   533,   109,    78,
    1358,   149,  1326,  1060,   894,   921,   150,   151,   149,   958,
    1205,  1462,   117,   150,   151,  1171,   970,  1167,   736,  1061,
    1062,  1701,  1720,   242,   922,   971,   972,   811,  1079,   923,
     372,   924,   812,  1730,  1060,  1002,  1554,  1053,   243,  1413,
    1862,   931,  2501,   621,  1172,    64,    65,  1435,  1555,   534,
    1061,  1062,  1078,   405,   219,  1091,   270,   925,   926,   535,
     415,   107,  1757,  1758,   630,   927,  1141,  1304,   492,  1177,
     761,   271,    79,   973,   756,  1161,   220,   493,  1690,   221,
     646,   647,  1126,   928,  1578,   599,  1127,  1128,  1129,  1130,
    1054,  1416,  1131,   750,  1133,   417,  1134,   428,  1136,   109,
     244,  1777,  1778,  1727,  1173,  1711,  1234,  1060,  1145,   419,
     704,  1063,  1064,   222,   441,   328,  1055,  1584,  1417,  1305,
     223,   536,   537,  1061,  1062,  1590,   714,  1307,  1197,  1178,
    1463,   224,   225,   454,   272,  1162,  1598,  1759,   226,   929,
     631,   245,  1063,  1064,  1579,   110,   737,  1760,  1761,  1250,
    1142,   246,  1418,   765,   768,   771,    80,   465,  1419,  1696,
     117,   227,   715,  1712,  1420,  1188,  1189,   762,  1190,  1192,
    1194,  1195,  1163,  1168,   738,   466,  1779,  1585,  1762,   228,
    1308,  1146,  1421,  1207,  1208,  1591,  1780,  1781,  2092,  1705,
    1212,  1213,   538,   229,   230,   632,  1599,  1691,    64,    65,
     231,   112,   476,  1422,   974,   975,  1309,   804,  2105,    81,
    1219,  1220,  1221,   488,   716,  1063,  1064,  1782,  1423,   517,
     633,   232,  1143,  2142,  1602,   490,  2145,  1229,  1230,  1231,
     543,  1233,   428,  1235,  2153,  1236,   544,  2156,  1821,  1822,
      64,    65,    64,    65,   545,  2164,  1728,   564,  2167,  1424,
    2284,  2285,  2286,   565,   160,  2174,  1239,   161,  1241,   233,
    1174,   117,  1379,  1069,   554,  1147,   118,  1400,  1243,    64,
      65,  1380,  1381,  2036,   567,   428,  1251,   435,  1697,   976,
    2193,  1253,  1571,  1572,  1603,  1179,  1823,   162,  1425,   977,
     978,  1164,  2109,  2110,   979,   163,  2201,  1268,  1270,   363,
    1580,    64,  1191,  1426,  1729,  1311,  1313,  1316,  1706,   586,
     556,   592,   234,  1321,    83,  1427,   593,   682,  1327,  1382,
     980,   717,   235,   595,  1370,  2220,  1634,   283, -1241,  1328,
     614,   557,  1618,  1586,  1107,   601,  1070,  1148,  1401,   618,
    2111,  1592,  1428,  1240,   301,  1336,   558,    64,    65,  1856,
     436,   236,  1600,   619,  1429,   164,  1430,  1431,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,    64,    65,   623,    83,
     627,  1788,   639,  1560,   644,  2591,  1432,   683,    64,    65,
    1789,  1790,    64,    65,   602,   165,   645,  1108,  1863,   650,
    1402,  1403,  1473,  1573,  1574,  1721,   687,  1824,  1825,   698,
    1071,  1201,  1202,   166,   167,  1404,  2118,  2119,  2287,   712,
     168,  1085,   169,  1498,   437,  1086,   954,    64,  1267,    84,
    1604,  1575,  1504,   719,   302,  2127,  2128,   603,  1791,   559,
    1383,  1384,  1451,  1722,    64,    65,  1532,   720,  1533,  2495,
     170,   722,    85,  1534,  1535,  1536,    86,   728,  1405,   284,
     107,  2112,  2113,  1542,  2120,   285,  1543,   286,  1545,   726,
    1452,  1540,  1541,  1453,   740,   604,  1454,   684,   249,   758,
    1094,  1109,  1826,  2129,  1547,  1117,  1548,    64,    65,  1864,
    1551,  1552,  1827,  1828,   734,   685,   759,   560,  1087,   782,
    1660,  1723,   783,  1455,    84,  1558,  1559,   786,    87,   428,
    1561,  1562,   303,  1681,   865,  1385,   171,  1564,   794,  1565,
    1088,   304,  1567,  1829,  1568,  1386,  1387,    85,  1621,   801,
    1388,  2032,  1456,  2357,   318,  1457,  2114,  1896,  1897,    64,
      65,   561,  2366,  1865,   110,  1799,  2115,  2116,   802,    88,
     562,  2375,   866,   815,  1800,  1801,  1389,    89,    90,   816,
    1724,  1615,   819,   546,  1810,  1616,   250,  1617,   829,  1792,
    1793,  1620,   820,  1811,  1812,  2274,   821,  2117,   251,   826,
      64,    65,  1089,    87,  1682,   831,  1626,   425,  1629,   852,
    1631,  1632,  1633,  1635,  1315,  2121,  2122,  1638,  1639,   427,
     112,  2665,  1802,    64,    65,  1647,   853,  1407,  1408,   379,
     274,   860,  1653,   252,  2130,  2131,  1654,  1655,  1656,  2676,
     869,  1813,   319,   871,    88,   876,   428,  1661,   878,   275,
    1664,   276,    89,    90,   320,   835,   836,  1223,   106,   891,
    1676,   896,  1677,  2307,  1794,  1679,   547,   901,  2454,   907,
    1458,   908,   909,   107,  1795,  1796,  1683,  1684,   910,  1797,
      93,   796,   253,   932,  2467,   118,  2324,    64,    65,  2472,
    2123,  1685,    69,  1628,   108,   254,  1211,    94,    70,   548,
    2124,  2125,  1090,  1459,   933,  1798,    64,    65,  1732,  2132,
    1733,   109,   934,  1734,  1735,   936,  1736,   938,  1737,  2133,
    2134,    64,    65,   940,  1739,   943,  1740,  2583,   944,  1460,
    2586,  2126,  2588,  1746,  1686,   948,   953,    71,   321,   955,
    1668,    64,    65,   700,   956,  2600,  2601,   425,   426,   427,
    2135,   322,   969,  1803,  1804,   968,  1688,   110,   729,   981,
    2752,   957,  2615,    72,   991,  1196,  2755,   989,   992,   277,
     999,  1000,  1814,  1815,    95,   111,  1001,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,    64,    65,  1901,  1853,    73,
    1855,  1857,  1057,   112,  1066,  1068,   701,    96,  1073,  1154,
    1074,  1123,  1124,  2792,  1125,  2793,  1137,   278,  1805,  1139,
    1150,   730,  1868,  1151,  1152,  1153,  1871,  1155,  1806,  1807,
      64,    65,  1858,  1808,  1407,  1408,  1156,  1816,  1157,  1158,
    1159,   113,  1176,    97,    74,  1181,  1182,  1817,  1818,   114,
    1900,  1902,  1819,  1183,  1184,  1258,  1185,   115,   116,  1809,
    1908,   279,  1186,   117,  1919,  1187,  1200,  1203,   118,  1210,
     280,  1925,  1501,  1209,  1217,  2587,  1218,  1214,  1820,  1222,
     332,  1224,  1225,  1260,  1851,  1930,  1237,  1238,  2599,  2486,
    1932,   333,  1259,  2604,  1934,  1262,  1937,  1938,  2490,  1940,
    1942,  1943,  1263,  1946,  1264,  1266,  1949,  1950,  1951,  1952,
    1953,  1954,  1955,  1956,  1959,  1961,  1962,  1265,   334,  1964,
    1965,  1966,  1967,    64,    65,  1874,  1546,  1407,  1408,  1973,
    1974,  1317,  1319,  1976,  1977,  1978,  1553,  1323,  1980,  1981,
    1329,    64,    65,  1903,   119,  1407,  1408,  1333,  1352,  1334,
    2510,  1984,  1985,  2512,  1986,  1987,  2513,  1337,  2514,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,  1338,  1339,
    1347,  1348,  1353,   149,  1349,   335,  1350,  1354,   150,   151,
     577,   742,  2007,  2008,  2009,  1355,  1356,  2010,  1362,  1363,
    1390,   578,  2012,  2015,  1365,  2017,  2018,  2019,  1366,  2020,
    2021,  1372,  2023,  1411,  1374,  2026,  2027,  1375,  1377,  1391,
    1415,  1392,   336,  1393,  2030,  1396,  1441,  1397,   579,  1398,
    1414,  1436,  2034,  1442,  1644,  1645,  1466,  2039,  2040,  1464,
    1484,  1461,  1465,   445,  1467,  2042,  1486,  1480,   743,  1485,
    1491,   744,  1492,  1493,  2045,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,  1502,  1566,  1494,  1503,  1563,   745,  2014,
    2073,   337,  1539,  1095,  1500,  1550,  1556,  1557,  1569,  1570,
    1594,  1096,  1443,  1583,  1588,   580,  1040,  1097,  1589,  1595,
    1596,  1597,  2081,  2082,  1606,  1607,   446,  2084,   467,  1608,
    1041,  1609,  1610,  2087,   746,  1611,  1625,   338,  1098,  1042,
    1444,  2751,  1623,  1445,  1624,  1630,   468,   447,   448,  1636,
    1043,  1637,   581,   339,  1643,  1648,   449,  1649,  1650,  1662,
    1665,  1666,  1099,   469,  1669,  1678,  -447,  2058,  1680,  1689,
    1100,  1692,  1707,  1446,   450,  1716,   470,  2064,  1702,  1725,
    1044,  2225,  2069,  1726,   451,   747,  1731,  1738,  1744,   748,
    1713,  1745,  1750,  1769,   471,  1772,  1876,  1783,   472,  1785,
    1787,  1045,  1447,  1831,  1830,  1448,  1832,  1833,  1101,  1837,
    1838,   473,  1840,  1841,   749,  1842,  1102,   750,  1845,  1877,
    1848,   582,  1866,  1870,  1882,  1887,  1849,   751,  1885,  1886,
    1888,  1889,  1854,  1891,  1892,  1893,  2279,  1894,  1895,  1898,
    2188,  1917,  2189,  1922,  2191,  1933,  1970,  1046,  1982,  1935,
    1983,   474,  1939,  1988,  1867,  1947,  1989,  1869,  1948,  1990,
    1994,  1873,  1103,  2202,  2203,  2204,  2205,  2206,  2207,  2208,
    2209,  2210,  1963,   583,  1104,  1992,  1993,  2293,  1995,  1996,
    2296,  1997,  1899,  1998,  1999,  2000,  1047,  2216,  1905,  2218,
    1105,  2001,  2002,  2003,  2025,  2004,  1918,   293,  2005,  1921,
    2006,  2626,  2022,  2024,  2028,  2041,  2224,   428,  1926,  1927,
    2046,  2083,  2228,  1048,  2047,  2048,  2049,  2050,  2051,  1931,
    1449,  2231,  2232,  2233,  2234,  2235,  2236,  2237,  2238,  2239,
    2240,  2085,  2086,  2253,  2254,  2255,  2256,  2257,  2258,  2259,
    2260,  2261,  2262,  2263,  2264,  2089,  2267,  2689,  2268,  2269,
    2270,  2090,  1049,  1450,  1050,  2091,  2093,  1360,  2094,  2136,
    2095,  2098,   428,  2280,  2100,  2101,  2102,  2106,  2107,  2458,
    2108,  2137,  2138,  2481,  2139,  2143,  2144,  2154,   442,  2146,
    2147,  2148,  2149,  2150,  2155, -1104,  2157,  2158,  2159,  2160,
    2161,  2165,  2166,   834,  2168,  2288,  2169,  2289,  2170,  2290,
    2171,  2292,  2175,   428,  2294,  2176,  2295,  2177,  2179,  2180,
    2182,  2183,  2211,  2300,  2301,  2185,  2192,  2194,  2197,  2689,
    2305,  2200,  2306,  2212,  2459,  2213,  2309,  2214,  2215,  2311,
    2219,  2266,  2271,  2272,  2275,  2281,  2283,  2460,  2297,  2298,
    2299,  2302,  2461,  2310,  2313,  2314,  2315,   504,  2316,   511,
     514,  2317,   519,   523,  2343,  2462,  2345,  2347,  2350,  2245,
    2352,  2353,  2354,  2358,  2359,   814,  2360,  2361,  2362,  2363,
    2367,  2368,  2766,  2369,  2346,  2370,  2371,  2372,  2376,  2377,
    2385,   590,  2378,  2439,  2440,  2388,  2442,  2443,  2396,  2399,
    2446,  2447,  2402,  2403,  2405,  2408,  2409,  2410,  2413,  2418,
     606,   612,  2422,  2438,  2488,  2463,  2489,  2464,  2491,  2466,
    2497,  2498,  2500,  2695,  2503,  2504,  2701,  2505,  2506,  2312,
    2507,  2509,  2515,  2516,  2525,  2534,  2543,  2411,  2549,  2553,
    2556,  2562,  2570,  2581,  2736,  2592,  2593,  2637,  2594,  2595,
    2596,  2597,  2465,  2612,   696,  2619,  2621,  2686,  2622,  2624,
    2625,  2662,  2493,  2632,  2668,  2672,   706,  2671,  2344,  2673,
    2678,  2692,  2737,  2693,  2694,  2696,  2702,  2704,  2715,  2723,
    2733,  2726,  2729,  1160,  2738,  2739,   727,  2740,  2416,  2747,
    2750,     0,  2760,  2761,  2767,  2775,     0,  2779,  2780,  2423,
    2424,  2425,  2426,  2427,  2428,  2429,  2430,  2431,  2432,  2433,
    2782,  2786,  2788,     0,  2789,  2436,  2790,  2742,  2744,   428,
     428,  2791,   428,   428,     0,     0,   428,   428,  2448,  2449,
    2450,  2451,  2452,  2453,     0,  2455,  2456,  2457,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2468,  2469,  2470,  2471,     0,  2473,  2474,  2475,  2476,
    2477,  2478,     0,  2480,     0,     0,  2484,  2485,     0,     0,
       0,   710,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2492,     0,     0,   428,  2494,
       0,     0,     0,  2496,     0,     0,   830,  2499,  1507,  2196,
       0,     0,     0,  1508,     0,     0,     0,   837,     0,     0,
    2573,     0,     0,     0,  2576,     0,   845,     0,     0,     0,
       0,     0,     0,     0,     0,  1509,  1510,     0,  1511,  1512,
     795,     0,     0,     0,     0,  2221,     0,     0,     0,  1513,
       0,     0,     0,  2517,     0,  1763,     0,     0,     0,     0,
    2610,  1514,  1515,     0,     0,     0,     0,  1773,     0,  1516,
       0,     0,  1517,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1834,  1835,     0,     0,     0,
    1518,     0,     0,  2241,   882,   883,     0,  1519,  1520,     0,
       0,  1521,     0,     0,  2242,     0,     0,   887,     0,     0,
       0,     0,   890,     0,     0,     0,     0,     0,     0,     0,
       0,   902,     0,     0,     0,  2564,     0,     0,     0,  2566,
    1095,  2243,     0,     0,     0,     0,     0,     0,  1096,  2567,
    2568,     0,     0,     0,  1097,  2572,   428,     0,     0,  2575,
     428,     0,     0,     0,     0,  2580,     0,     0,  2584,  2585,
       0,  1522,     0,     0,     0,  1098,     0,     0,  2244,     0,
       0,     0,     0,     0,     0,     0,     0,  2602,  2603,     0,
    2605,  2606,  2607,  2608,  2609,     0,   428,  2611,     0,  1099,
       0,  2614,   879,   949,   950,   951,   952,  1100,     0,   884,
       0,     0,   885,  2623,     0,     0,     0,   886,  2627,     0,
       0,   888,     0,     0,     0,     0,  1523,     0,     0,     0,
       0,     0,  1524,     0,  2638,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1101,   651,   652,     0,  1525,
       0,     0,     0,  1102,     0,     0,     0,     0,     0,  1526,
       0,     0,     0,     0,  1093,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2650,     0,     0,     0,
       0,  2654,     0,  2656,     0,     0,  1527,  1528,   947,  2659,
       0,     0,     0,     0,     0,     0,  1343,     0,     0,  1103,
       0,     0,  2666,   653,     0,     0,     0,  1529,     0,   654,
       0,  1104,     0,     0,     0,     0,   655,     0,   656,     0,
    2677,     0,  2710,   657,  2681,     0,   658,  1105,  1394,     0,
    1674,     0,   659,     0,     0,     0,  2245,     0,  2246,     0,
       0,     0,     0,   660,  2700,   107,     0,     0,     0,   661,
       0,     0,  1530,     0,     0,     0,     0,     0,   662,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2713,     0,   663,     0,     0,  2718,     0,  2720,     0,
       0,     0,     0,     0,     0,  2724,     0,     0,     0,     0,
    2727,     0,  2247,     0,   664,  2730,     0,     0,     0,     0,
       0,     0,     0,     0,  1132,     0,     0,     0,     0,   665,
       0,  1138,     0,     0,     0,     0,     0,  2741,  2743,   666,
     667,     0,     0,     0,  2487,     0,  1227,     0,     0,   110,
       0,     0,     0,     0,     0,     0,     0,     0,  1232,     0,
     668,  2753,     0,     0,  2754,     0,     0,  2756,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2762,  2763,
    2764,  2765,     0,   669,     0,     0,     0,     0,     0,     0,
    2774,     0,     0,  2777,     0,  1242,     0,   670,     0,   671,
    2781,  2097,  2783,     0,     0,   112,     0,     0,     0,  2103,
    2104,     0,     0,     0,   672,     0,     0,     0,     0,   673,
       0,     0,     0,     0,  2140,  2141,   674,     0,     0,     0,
       0,     0,     0,   675,     0,  2151,  2152,     0,     0,  2749,
       0,     0,     0,     0,     0,     0,  2162,  2163,  1226,     0,
       0,   676,     0,     0,     0,  1228,  2172,  2173,     0,     0,
       0,     0,  2178,     0,   677,   678,     0,   679,  1332,     0,
     118,  2769,  2181,     0,  2772,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1244,  1245,     0,     0,     0,  1249,     0,   680,  1252,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1261,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2598,     0,     0,     0,
       0,     0,     0,  1478,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2616,     0,     0,     0,
    2620,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
    1747,  1748,  1749,     0,     0,  1538,     0,     0,     0,     0,
    1751,  1752,  1753,     0,     0,  1544,     0,  1764,  1765,  1766,
       0,  2589,  1767,  1768,     0,  1770,  1771,     0,     0,     0,
       0,  1399,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2613,     0,  2308,
       0,     0,     0,     0,     0,  1843,  1844,     0,     0,  1846,
    1847,     0,     0,     0,     0,  2319,  2320,  2321,     0,     0,
    2323,     0,  2325,  2326,     0,     0,  2328,  2329,  2330,     0,
       0,  2332,  2333,     0,     0,  2336,     0,  2338,  2339,     0,
    2341,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   982,     0,     0,  1619,     0,   983,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1627,     0,     0,     0,     0,     0,
    2349,     0,     0,     0,     0,     0,     0,  2663,  2664,     0,
    2351,  2667,     0,  2669,  2355,  2356,     0,     0,  1652,     0,
       0,     0,     0,  2364,  2365,  2674,  2675,     0,  1658,     0,
    2679,  2680,  2373,  2374,  2683,     0,     0,     0,  2379,  2684,
    2685,     0,     0,     0,     0,     0,     0,  1675,  2389,  2390,
       0,     0,     0,     0,     0,     0,     0,  1687,  2412,  2400,
    2401,  2415,  1695,     0,     0,     0,  2419,    64,    65,  2420,
    2404,     0,     0,     0,     0,     0,  2759,     0,     0,  2406,
       0,  2407,     0,   107,     0,  1622,     0,  2721,  2435,     0,
    2722,     0,     0,     0,     0,  2725,     0,     0,     0,     0,
       0,  2728,     0,   288,     0,     0,  2731,     0,     0,     0,
       0,     0,     0,     0,     0,  1646,     0,     0,     0,     0,
    1651,   109,     0,     0,     0,     0,     0,     0,     0,     0,
    1657,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
       0,     0,     0,     0,     0,     0,     0,   110,     0,     0,
       0,     0,     0,     0,     0,  2502,     0,  2773,     0,     0,
    2776,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1850,     0,     0,     0,     0,
    2787,     0,     0,     0,     0,     0,  2511,     0,     0,     0,
       0,     0,     0,     0,  2794,     0,     0,  2795,  2796,     0,
       0,     0,     0,   112,     0,  1872,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2519,     0,  1906,     0,     0,  1907,     0,     0,
       0,   289,  2528,     0,     0,     0,     0,  1923,  1924,     0,
       0,  2537,     0,  2088,     0,  1928,     0,     0,     0,     0,
    2546,     0,  1929,   117,     0,  2561,  2096,  2548,   118,     0,
       0,     0,     0,     0,     0,     0,  2099,     0,  2552,   290,
       0,     0,     0,     0,  2555,  2569,     0,  2557,     0,     0,
    2558,     0,  2574,     0,     0,  2577,  2578,     0,     0,     0,
       0,     0,  1968,     0,     0,  1971,  1972,     0,     0,     0,
       0,     0,     0,     0,  1979,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   291,     0,     0,     0,     0,  1920,     0,  2184,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,     0,     0,
    2013,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1969,  2639,  2029,     0,
       0,  2651,  1975,     0,     0,     0,  2641,     0,     0,     0,
       0,     0,     0,     0,  2038,  2643,     0,     0,     0,     0,
    2661,  2646,     0,     0,     0,  2648,     0,     0,  2649,  2043,
       0,  2044,   348,     0,     0,     0,     0,     0,     0,   349,
       0,  2052,     0,     0,  2054,     0,  2055,  2056,  2057,  2059,
       0,     0,  2061,     0,     0,  2062,     0,     0,  2063,  2065,
       0,  2066,  2067,  2068,  2070,     0,  2071,  2072,     0,     0,
       0,     0,  2074,  2075,  2076,     0,     0,  2077,  2078,  2011,
     522,     0,     0,  2079,  2080,  2016,     0,     0,     0,     0,
       0,     0,     0,  2711,  2712,   107,  2714,     0,  2716,  2717,
       0,  2719,     0,     0,     0,     0,     0,     0,     0,     0,
    2031,     0,     0,  1368,     0,     0,  2037,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   109,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2053,     0,     0,     0,     0,
       0,  2746,     0,  2060,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   110,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2348,     0,     0,     0,     0,     0,     0,     0,  2778,     0,
       0,     0,     0,     0,     0,     0,     0,  2187,     0,     0,
       0,  2190,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2195,     0,     0,  2198,     0,     0,     0,
    2380,  2381,  2382,  2383,  2384,   112,  2386,  2387,     0,     0,
       0,  2391,  2392,  2393,  2394,  2395,     0,  2397,  2398,     0,
       0,     0,     0,     0,     0,     0,  2217,     0,     0,     0,
       0,   350,     0,     0,   351,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,  1369,     0,   117,     0,     0,     0,     0,
     118,     0,     0,     0,     0,     0,     0,     0,  2186,     0,
       0,     0,  2265,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2199,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,     0,     0,     0,  2222,  2223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2226,  2227,     0,     0,  2304,  2229,  2230,     0,     0,
       0,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,     0,     0,     0,     0,     0,  2273,     0,  2335,  2277,
    2278,     0,     0,     0,     0,     0,     0,  2282,     0,     0,
       0,     0,  2518,     0,     0,  2520,  2521,  2522,  2523,  2524,
       0,  2526,  2527,     0,  2529,  2530,  2531,  2532,  2533,     0,
    2535,  2536,     0,  2538,  2539,  2540,  2541,  2542,     0,  2544,
    2545,  2291,  2547,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2550,  2551,     0,     0,     0,  2303,     0,     0,
       0,     0,     0,  2554,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2318,     0,     0,     0,     0,  2322,   107,     0,     0,     0,
       0,  2327,     0,     0,     0,     0,  2331,     0,     0,     0,
    2334,     0,     0,  2337,     0,     0,  2340,     0,  2342,     0,
       0,     0,     0,     0,  2414,     0,     0,  2417,     0,     0,
       0,     0,     0,     0,     0,  2421,     0,     0,     0,     0,
       0,     0,     0,   495,   496,     0,     0,   497,     0,     0,
       0,  2434,     0,     0,  2437,     0,     0,     0,     0,  2441,
       0,     0,  2444,  2445,     0,     0,     0,     0,     0,     0,
     498,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2640,     0,     0,     0,     0,     0,     0,     0,     0,
    2642,     0,     0,     0,     0,     0,   107,     0,     0,  2644,
       0,  2645,     0,     0,     0,  2647,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   499,     0,
       0,  2508,     0,     0,     0,     0,     0,   509,     0,     0,
       0,     0,     0,     0,     0,     0,   500,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   607,   107,     0,     0,     0,   501,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     110,   118,     0,  2479,     0,     0,     0,     0,     0,     0,
       0,     0,  2705,     0,  2706,     0,  2707,     0,     0,  2708,
       0,  2709,     0,     0,   608,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2560,     0,
       0,     0,     0,     0,   502,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2579,   609,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2590,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   118,   503,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2631,   610,     0,     0,  2636,     0,     0,     0,     0,  2559,
       0,     0,     0,     0,     0,  2563,     0,     0,     0,  2565,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2571,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
     510,     0,     0,     0,     0,     0,     0,  2652,  2653,     0,
    2655,     0,     0,     0,     0,  2657,  2658,     0,     0,     0,
    2660,     0,     0,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,     0,     0,  2682,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   611,     0,
       0,     0,     0,     0,     0,     0,     0,  2703,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
    1004,  1005,  1006,     0,     0,  1271,  1272,  1273,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2670,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1007,
    1008,     0,     0,  1009,  1274,  1275,  1010,     0,  1276,     0,
    2748,   107,     0,  1011,     0,  1277,     0,  1012,  1278,     0,
       0,     0,  1279,     0,     0,  1013,  1014,  2757,     0,     0,
    1280,  1281,     0,  1015,  1016,     0,     0,     0,  1282,     0,
       0,     0,  2768,     0,     0,  2771,     0,     0,     0,   109,
       0,  1017,     0,     0,   107,     0,     0,  1018,     0,     0,
       0,  1019,  1020,     0,     0,  1021,  1283,  1284,     0,     0,
    1285,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2732,  1022,     0,   107,     0,     0,  1286,     0,     0,     0,
       0,     0,   109,     0,     0,   110,     0,     0,     0,     0,
       0,  2745,  1023,     0,     0,     0,     0,  1287,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1331,     0,     0,     0,  1024,     0,     0,     0,     0,
    1288,   107,     0,     0,     0,     0,     0,     0,   110,  1289,
       0,     0,     0,     0,     0,     0,  2770,     0,  1025,     0,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2784,   110,     0,  2785,
       0,     0,     0,     0,     0,     0,     0,     0,  1026,     0,
    1027,     0,     0,  1290,     0,  1291,  1028,  1029,     0,     0,
       0,  1292,  1293,     0,   112,     0,     0,     0,     0,     0,
       0,     0,  1030,  1031,     0,     0,     0,     0,  1294,     0,
       0,   117,     0,  1032,  1033,   110,   118,     0,     0,  1295,
       0,     0,     0,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1034,
       0,  1035,     0,     0,  1296,     0,  1297,     0,     0,     0,
       0,     0,     0,  1036,   117,  1037,  1298,     0,     0,   118,
       0,  1038,     0,     0,     0,     0,  1299,     0,     0,     0,
       0,   112,     0,     0,     0,     0,     0,   513,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,     0,
       0,     0,     0,     0,     0,  1039,     0,     0,     0,     0,
    1300,     0,     0,     0,     0,     0,     0,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     1,     0,     0,     2,
       0,     0,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     0,     0,     0,     0,
       5,     6,     0,     7,     8,     9,     0,     0,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
      11,     0,    12,    13,     0,     0,     0,     0,     0,     0,
       0,     0,    14,    15,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,    16,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    17,     0,     0,     0,    18,
       0,     0,    19,     0,     0,     0,    20,    21,     0,     0,
       0,     0,     0,    22,     0,     0,     0,     0,     0,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,     0,     0,    25,    26,    27,     0,
       0,    28,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    32,    33,     0,     0,     0,     0,     0,
       0,   175,     0,     0,   176,     0,    34,   177,    35,     0,
       0,     0,     0,     0,     0,    36,     0,     0,     0,    37,
       0,     0,     0,    38,     0,    39,   178,    40,   179,   180,
     181,     0,    41,     0,     0,     0,     0,     0,   182,     0,
     183,     0,     0,     0,     0,   184,    42,   185,   186,   187,
       0,     0,    43,     0,     0,   188,     0,   189,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    44,    45,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
       0,    47,     0,     0,     0,     0,   190,    48,     0,     0,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   191,     0,     0,     0,     0,     0,
       0,     0,   192,     0,   193,   194,     0,     0,   195,     0,
       0,    51,   196,     0,   197,     0,     0,     0,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   198,   199,     0,     0,
     200,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     201,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   202,   203,     0,
       0,     0,     0,     0,     0,   204,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     205,     0,   206,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   207,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   208,   209,     0,     0,     0,     0,     0,     0,
       0,   210,     0,     0,     0,     0,     0,     0,   211,     0,
       0,     0,     0,     0,   212,     0,   213,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   214
};

static const yytype_int16 yycheck[] =
{
       3,  1454,    50,   486,  1654,     4,  1656,     4,    11,     0,
     671,     4,     4,   666,   667,   976,     5,    62,   979,     4,
       5,     5,     3,     4,     5,  1153,    27,  1155,     5,    32,
      32,     4,     5,     4,    21,   996,  1005,    40,    14,    15,
       5,     4,    32,     4,     5,    14,    49,     4,    49,    52,
       5,    52,    55,  1181,  1182,  1183,    59,     3,     4,    62,
      32,     4,    63,    66,    67,     3,     4,    70,    13,     4,
      73,    74,    20,    27,    77,    67,   132,     5,    81,     3,
       4,    79,    62,    86,    37,    86,    62,   123,     3,     4,
      36,     3,     4,    62,     3,     4,    99,   100,   101,   102,
     103,   104,    12,   104,    21,     5,    67,     3,     4,   170,
     884,   885,   886,     3,     4,    67,    32,   120,    17,     3,
       4,   136,     3,     4,   101,    40,    47,   152,    89,   121,
     107,     4,    67,     3,     4,   289,   121,   196,    33,    21,
       4,   134,     3,     4,    54,    60,     3,     4,   121,    16,
       3,     4,   155,     3,     4,    36,     5,    57,    24,    25,
     121,   196,    72,   126,   147,   216,    66,   228,    16,   168,
     143,   159,   228,   947,    21,   178,     4,   175,    84,    21,
     183,   142,    31,   267,    57,    21,   121,     3,     4,   135,
     274,    17,   102,     3,     4,   101,    57,   113,   113,   187,
     267,     4,   261,    67,     3,     4,     5,   274,    21,    79,
     120,   234,   248,   205,   124,     3,     4,   193,   194,   254,
     205,   213,   214,     5,   193,   196,     5,   137,   213,   214,
       4,   287,   205,    99,   295,    67,   251,     3,     4,   264,
     213,   214,   287,   246,   205,   198,   209,   192,     4,    27,
     298,    27,   213,   214,   135,   242,   254,   121,   309,   262,
     263,     3,     4,   924,    67,   310,     4,   183,   125,   185,
     205,   187,   188,     4,   228,   278,   247,   280,   213,   214,
     196,   190,   197,   254,   286,   288,   289,   196,   291,   292,
     238,   294,   268,   250,   291,   211,   286,   252,   289,   268,
     190,   304,   278,   279,   297,   175,   290,   287,   300,   278,
     275,   314,   315,   442,   286,   300,   215,   316,   121,   219,
     309,   306,   250,   452,   137,   242,   235,   300,   309,   306,
     310,   316,   199,   309,   337,   338,   339,   190,   341,   300,
     309,   205,   345,   346,   228,   306,   219,   197,   291,   213,
     214,   297,   261,   356,   357,   356,   277,   349,   219,   297,
     242,   364,   354,   355,   349,   300,   369,   370,  1029,   354,
     355,    27,   200,   297,   377,   291,   349,   380,   293,   207,
     208,   354,   355,   121,   254,   297,  1047,   297,   349,   215,
     121,   169,   353,   354,   355,   242,   399,   400,   307,   298,
     242,   297,   205,   406,   407,   408,   242,   410,     4,     5,
     213,   214,   228,    30,   349,   243,   297,   307,   228,   354,
     355,   424,   196,   211,  1385,   428,  1079,  1388,    89,   242,
     433,   434,   435,   436,   437,   438,   300,   440,    64,   442,
     443,   444,   351,   352,    14,   211,  1415,   297,   230,   452,
     453,    21,   228,    99,   307,  1583,    26,  1110,   200,   272,
      57,   351,   352,    33,   242,    61,    17,   205,    62,    64,
    1244,    67,   298,  1442,   205,   213,   214,    51,  1252,    96,
     106,   105,   213,   214,    54,   349,   167,    62,     4,     4,
     354,   355,    95,    14,    15,    58,  1465,   300,   351,   352,
       4,    71,    45,   506,   507,   107,    88,    67,    12,   287,
     113,   106,  2688,   169,    30,     4,     5,    60,   234,   141,
     116,   524,   350,     3,     4,   441,   141,   101,   122,    17,
     123,   126,    14,    15,    89,   131,   110,     6,   123,    82,
     588,    62,    64,     0,    44,   274,   349,   122,   165,   552,
     146,   354,   355,   291,    88,     4,   152,   179,  2734,   102,
       5,   157,   300,   118,   179,   139,   190,    62,    62,   300,
     133,   131,    27,     4,     4,     5,   119,   159,     5,   122,
      62,   710,   585,   631,   106,     4,   242,   190,    88,   270,
     160,   161,   162,   163,   164,   165,   198,   157,   168,   169,
     170,   171,   650,    40,    30,    34,   149,   150,    57,    40,
     161,   349,   100,   239,   530,   211,   354,   355,   349,   622,
     266,   123,   219,   354,   355,   159,     5,   122,   122,   255,
     256,   287,  1293,   188,   230,    14,    15,   254,   264,   235,
       5,   237,   259,  1304,   239,   648,     5,   163,   203,   242,
     252,   567,  2302,   122,    62,     3,     4,   242,    17,   202,
     255,   256,   665,     5,    19,   668,   229,   263,   264,   212,
      31,    19,   193,   194,   119,   271,   113,   237,   171,    62,
     109,   244,   113,    62,   278,    62,    41,   180,   123,    44,
     260,   261,   695,   289,    62,   195,   699,   700,   701,   702,
     216,    40,   705,   278,   707,     5,   709,   710,   711,    57,
     265,   193,   194,    27,   122,   170,   845,   239,    40,     5,
     290,   347,   348,    78,   197,   299,   242,    62,    67,   289,
      85,   274,   275,   255,   256,    62,    55,   163,   786,   122,
     242,    96,    97,     4,   307,   122,    62,   268,   103,   345,
     195,   306,   347,   348,   122,   103,   250,   278,   279,   888,
     197,   316,   101,   333,   334,   335,   197,   119,   107,   123,
     219,   126,    91,   228,   113,   778,   779,   206,   781,   782,
     783,   784,   159,   278,   278,    67,   268,   122,   309,   144,
     216,   113,   131,   796,   797,   122,   278,   279,  1759,   123,
     803,   804,   345,   158,   159,   250,   122,   242,     3,     4,
     165,   159,   120,   152,   193,   194,   242,    12,  1779,   250,
     823,   824,   825,   289,   143,   347,   348,   309,   167,    33,
     275,   186,   269,  1794,    62,   171,  1797,   840,   841,   842,
      67,   844,   845,   846,  1805,   848,     5,  1808,    14,    15,
       3,     4,     3,     4,    90,  1816,   170,    67,  1819,   198,
    1988,  1989,  1990,   235,    44,  1826,   869,    47,   871,   224,
     278,   219,     5,    40,    16,   197,   224,    83,   881,     3,
       4,    14,    15,  1657,   288,   888,   889,    40,   242,   268,
    1859,   894,    42,    43,   122,   278,    62,    77,   237,   278,
     279,   278,    14,    15,   283,    85,  1875,   910,   911,    60,
     278,     3,     4,   252,   228,   918,   919,   920,   242,    90,
      46,    67,   277,   926,    28,   264,    73,    92,   931,    62,
     309,   250,   287,    31,   982,  1904,    60,   206,     0,   942,
       5,    67,     4,   278,    40,   152,   113,   269,   154,     5,
      62,   278,   291,   869,    71,   958,    82,     3,     4,     5,
     113,   316,   278,     4,   303,   145,   305,   306,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,     3,     4,     4,    28,
       5,     5,     5,  1132,     4,  2458,   345,   172,     3,     4,
      14,    15,     3,     4,   221,   195,     5,   113,   107,     5,
     226,   227,  1025,   173,   174,   132,     5,   193,   194,     5,
     197,     4,     5,   213,   214,   241,    14,    15,  2007,     4,
     220,    36,   222,  1046,   197,    40,   616,     3,     4,   153,
     278,   201,  1055,     4,   171,    14,    15,   264,    62,   185,
     193,   194,    22,   170,     3,     4,  1069,     4,  1071,    60,
     250,     4,   176,  1076,  1077,  1078,   180,     4,   284,   348,
      19,   193,   194,  1086,    62,   354,  1089,   356,  1091,     5,
      50,     4,     5,    53,   122,   302,    56,   262,    26,     5,
     670,   197,   268,    62,  1107,   675,  1109,     3,     4,   198,
    1113,  1114,   278,   279,    99,   280,     4,   243,   113,   275,
    1249,   228,     4,    83,   153,  1128,  1129,     4,   232,  1132,
    1133,  1134,   249,    83,   141,   268,   316,  1140,     4,  1142,
     135,   258,  1145,   309,  1147,   278,   279,   176,  1196,     4,
     283,   180,   112,  2114,    26,   115,   268,     4,     5,     3,
       4,   287,  2123,   252,   103,     5,   278,   279,     5,   273,
     296,  2132,   179,     4,    14,    15,   309,   281,   282,   200,
     287,  1184,     4,     6,     5,  1188,   114,  1190,     5,   193,
     194,  1194,     4,    14,    15,  1969,     4,   309,   126,     4,
       3,     4,   197,   232,   154,     5,  1209,     9,  1211,     5,
    1213,  1214,  1215,  1216,    17,   193,   194,  1220,  1221,    11,
     159,  2584,    62,     3,     4,  1228,   274,     7,     8,   125,
      46,   171,  1235,   161,   193,   194,  1239,  1240,  1241,  2602,
       4,    62,   114,     4,   273,   180,  1249,  1250,   171,    65,
    1253,    67,   281,   282,   126,   430,   431,   827,     4,     4,
    1263,   199,  1265,  2037,   268,  1268,    89,   199,  2237,     5,
     230,     5,     4,    19,   278,   279,   226,   227,   199,   283,
      84,   125,   210,   191,  2253,   224,  2060,     3,     4,  2258,
     268,   241,   190,  1209,    40,   223,    12,   101,   196,   122,
     278,   279,   297,   263,   191,   309,     3,     4,  1311,   268,
    1313,    57,    67,  1316,  1317,    67,  1319,    67,  1321,   278,
     279,     3,     4,   228,  1327,     5,  1329,  2450,   229,   289,
    2453,   309,  2455,  1336,   284,     5,     4,   235,   210,     4,
    1256,     3,     4,    40,     4,  2468,  2469,     9,    10,    11,
     309,   223,     5,   193,   194,    88,  1272,   103,    40,    88,
    2723,   199,  2485,   261,     4,     6,  2729,     5,     4,   185,
       5,     5,   193,   194,   178,   121,     4,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,     3,     4,     5,  1411,   307,
    1413,  1414,     5,   159,   101,    17,   113,   221,     4,    88,
       5,    17,    17,  2786,     4,  2788,     4,   243,   268,     4,
       4,   113,  1435,    99,     5,     5,  1439,     4,   278,   279,
       3,     4,     5,   283,     7,     8,     5,   268,     5,    88,
       5,   197,     4,   257,   352,     5,     5,   278,   279,   205,
    1463,  1464,   283,     4,     4,   168,     5,   213,   214,   309,
    1473,   287,     5,   219,  1477,     5,     4,     4,   224,     5,
     296,  1484,  1052,    12,     4,  2454,     4,    12,   309,     4,
      37,     4,     4,     4,  1410,  1498,     5,     5,  2467,  2273,
    1503,    48,     5,  2472,  1507,   159,  1509,  1510,  2282,  1512,
    1513,  1514,   159,  1516,     4,     4,  1519,  1520,  1521,  1522,
    1523,  1524,  1525,  1526,  1527,  1528,  1529,     5,    75,  1532,
    1533,  1534,  1535,     3,     4,     5,  1106,     7,     8,  1542,
    1543,   263,   263,  1546,  1547,  1548,  1116,   291,  1551,  1552,
       5,     3,     4,     5,   300,     7,     8,     4,   276,     5,
    2334,  1564,  1565,  2337,  1567,  1568,  2340,     5,  2342,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,     5,     5,
       4,     4,   276,   349,     5,   152,     5,     5,   354,   355,
      37,    62,  1615,  1616,  1617,     5,     5,  1620,     4,     4,
       4,    48,  1625,  1626,     5,  1628,  1629,  1630,     5,  1632,
    1633,     5,  1635,   242,     5,  1638,  1639,     5,     5,     4,
     107,     5,   189,     5,  1647,     4,   141,     5,    75,     5,
     242,     5,  1655,   107,  1224,  1225,     5,  1660,  1661,   242,
     248,    40,   107,    35,   215,  1668,     5,    40,   119,   215,
       4,   122,     5,     5,  1677,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,     4,   113,   215,     4,     4,   159,  1625,
    1713,   258,     5,    93,   215,     5,     5,     5,   113,     4,
       4,   101,    22,     5,     5,   152,    67,   107,     5,     5,
       5,     4,  1735,  1736,     5,     5,   108,  1740,    54,     4,
      81,     5,     5,  1746,   195,     4,    12,   294,   128,    90,
      50,  2720,     5,    53,     5,    12,    72,   129,   130,     6,
     101,     4,   189,   310,     5,     4,   138,     4,     4,     4,
      38,    38,   152,    89,     5,     4,     0,  1693,     5,   242,
     160,   242,   242,    83,   156,   123,   102,  1703,   141,     4,
     131,  1920,  1708,   252,   166,   246,   211,   199,     4,   250,
     170,     4,     4,     4,   120,     4,   242,     5,   124,     5,
       5,   152,   112,     5,   276,   115,     5,     5,   198,     4,
       4,   137,     5,     4,   275,     4,   206,   278,     4,   242,
       5,   258,     5,     5,   242,     4,  1406,   288,   313,   313,
       4,     4,  1412,     4,     4,     4,  1975,   313,   313,     4,
    1853,     4,  1855,     5,  1857,     5,     5,   198,     5,   228,
       4,   177,   228,     5,  1434,   228,     5,  1437,   228,     4,
       4,  1441,   252,  1876,  1877,  1878,  1879,  1880,  1881,  1882,
    1883,  1884,   228,   310,   264,     5,     5,  2016,     4,     4,
      12,     5,  1462,     5,     4,     4,   237,  1900,  1468,  1902,
     280,     5,     5,     4,     6,     5,  1476,    32,     5,  1479,
       4,     6,     5,     4,     4,     4,  1919,  1920,  1488,  1489,
       4,     4,  1925,   264,     5,     5,     5,     5,     5,  1499,
     230,  1934,  1935,  1936,  1937,  1938,  1939,  1940,  1941,  1942,
    1943,     5,     4,  1946,  1947,  1948,  1949,  1950,  1951,  1952,
    1953,  1954,  1955,  1956,  1957,     5,  1959,  2618,  1961,  1962,
    1963,     5,   303,   263,   305,     5,     4,   975,     4,   276,
       5,     4,  1975,  1976,     5,     5,     5,     4,     4,   357,
       5,     5,     5,   309,     5,     4,     4,     4,   113,     5,
     276,     5,     5,     5,     4,   289,     5,   276,     5,     5,
       5,     4,     4,   429,     5,  2008,     5,  2010,     5,  2012,
       5,  2014,     4,  2016,  2017,     4,  2019,     5,     4,     4,
       4,     4,     4,  2026,  2027,     5,     5,     5,     5,  2690,
    2033,     5,  2035,     4,   357,     5,  2039,     4,     4,  2042,
       5,     5,     4,     4,     4,     4,     4,   357,     5,     5,
       4,     4,   357,     5,     5,     5,     5,   182,     5,   184,
     185,     5,   187,   188,     4,   357,     5,     4,     4,   289,
       5,     5,     5,     4,     4,   384,     5,     5,     5,     5,
       4,     4,  2745,     5,  2087,     5,     5,     5,     4,     4,
       4,   216,     5,  2222,  2223,     4,  2225,  2226,     4,     4,
    2229,  2230,     4,     4,     4,     4,     4,     4,     4,     4,
     235,   236,     4,     4,     4,   357,     4,   357,     4,   357,
       5,     5,     4,     6,     5,     4,  2627,     5,     4,  2045,
       5,     5,     5,     4,     4,     4,     4,  2185,     4,     4,
       4,     4,     4,     4,   357,     5,     4,  2516,     5,     5,
       5,     4,  2248,     5,   279,     5,     4,  2616,     5,     5,
       4,     4,  2291,     5,     4,     4,   291,     5,  2084,     4,
       4,     4,  2690,     5,     5,     4,     4,     4,     4,     4,
    2686,     5,     4,   745,     5,     5,   311,     4,  2191,     4,
       4,    -1,     5,     5,     5,     4,    -1,     5,     5,  2202,
    2203,  2204,  2205,  2206,  2207,  2208,  2209,  2210,  2211,  2212,
       5,     4,     4,    -1,     5,  2218,     5,  2700,  2701,  2222,
    2223,     5,  2225,  2226,    -1,    -1,  2229,  2230,  2231,  2232,
    2233,  2234,  2235,  2236,    -1,  2238,  2239,  2240,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2254,  2255,  2256,  2257,    -1,  2259,  2260,  2261,  2262,
    2263,  2264,    -1,  2266,    -1,    -1,  2269,  2270,    -1,    -1,
      -1,   293,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2288,    -1,    -1,  2291,  2292,
      -1,    -1,    -1,  2296,    -1,    -1,   421,  2300,    22,  1869,
      -1,    -1,    -1,    27,    -1,    -1,    -1,   432,    -1,    -1,
    2439,    -1,    -1,    -1,  2443,    -1,   441,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    52,    53,
     352,    -1,    -1,    -1,    -1,  1905,    -1,    -1,    -1,    63,
      -1,    -1,    -1,  2346,    -1,  1353,    -1,    -1,    -1,    -1,
    2479,    75,    76,    -1,    -1,    -1,    -1,  1365,    -1,    83,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1383,  1384,    -1,    -1,    -1,
     104,    -1,    -1,    56,   509,   510,    -1,   111,   112,    -1,
      -1,   115,    -1,    -1,    67,    -1,    -1,   522,    -1,    -1,
      -1,    -1,   527,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   536,    -1,    -1,    -1,  2418,    -1,    -1,    -1,  2422,
      93,    94,    -1,    -1,    -1,    -1,    -1,    -1,   101,  2432,
    2433,    -1,    -1,    -1,   107,  2438,  2439,    -1,    -1,  2442,
    2443,    -1,    -1,    -1,    -1,  2448,    -1,    -1,  2451,  2452,
      -1,   175,    -1,    -1,    -1,   128,    -1,    -1,   131,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2470,  2471,    -1,
    2473,  2474,  2475,  2476,  2477,    -1,  2479,  2480,    -1,   152,
      -1,  2484,   504,   608,   609,   610,   611,   160,    -1,   511,
      -1,    -1,   514,  2496,    -1,    -1,    -1,   519,  2501,    -1,
      -1,   523,    -1,    -1,    -1,    -1,   230,    -1,    -1,    -1,
      -1,    -1,   236,    -1,  2517,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   198,     4,     5,    -1,   253,
      -1,    -1,    -1,   206,    -1,    -1,    -1,    -1,    -1,   263,
      -1,    -1,    -1,    -1,   669,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2559,    -1,    -1,    -1,
      -1,  2564,    -1,  2566,    -1,    -1,   290,   291,   590,  2572,
      -1,    -1,    -1,    -1,    -1,    -1,   963,    -1,    -1,   252,
      -1,    -1,  2585,    61,    -1,    -1,    -1,   311,    -1,    67,
      -1,   264,    -1,    -1,    -1,    -1,    74,    -1,    76,    -1,
    2603,    -1,  2650,    81,  2607,    -1,    84,   280,   995,    -1,
       4,    -1,    90,    -1,    -1,    -1,   289,    -1,   291,    -1,
      -1,    -1,    -1,   101,  2627,    19,    -1,    -1,    -1,   107,
      -1,    -1,   356,    -1,    -1,    -1,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2654,    -1,   131,    -1,    -1,  2659,    -1,  2661,    -1,
      -1,    -1,    -1,    -1,    -1,  2668,    -1,    -1,    -1,    -1,
    2673,    -1,   345,    -1,   152,  2678,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   706,    -1,    -1,    -1,    -1,   167,
      -1,   713,    -1,    -1,    -1,    -1,    -1,  2700,  2701,   177,
     178,    -1,    -1,    -1,  2274,    -1,   831,    -1,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   843,    -1,
     198,  2724,    -1,    -1,  2727,    -1,    -1,  2730,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2741,  2742,
    2743,  2744,    -1,   221,    -1,    -1,    -1,    -1,    -1,    -1,
    2753,    -1,    -1,  2756,    -1,   880,    -1,   235,    -1,   237,
    2763,  1769,  2765,    -1,    -1,   159,    -1,    -1,    -1,  1777,
    1778,    -1,    -1,    -1,   252,    -1,    -1,    -1,    -1,   257,
      -1,    -1,    -1,    -1,  1792,  1793,   264,    -1,    -1,    -1,
      -1,    -1,    -1,   271,    -1,  1803,  1804,    -1,    -1,  2715,
      -1,    -1,    -1,    -1,    -1,    -1,  1814,  1815,   830,    -1,
      -1,   289,    -1,    -1,    -1,   837,  1824,  1825,    -1,    -1,
      -1,    -1,  1830,    -1,   302,   303,    -1,   305,   953,    -1,
     224,  2747,  1840,    -1,  2750,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     882,   883,    -1,    -1,    -1,   887,    -1,   345,   890,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     902,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2466,    -1,    -1,    -1,
      -1,    -1,    -1,  1028,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2486,    -1,    -1,    -1,
    2490,    -1,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
    1337,  1338,  1339,    -1,    -1,  1080,    -1,    -1,    -1,    -1,
    1347,  1348,  1349,    -1,    -1,  1090,    -1,  1354,  1355,  1356,
      -1,  2456,  1359,  1360,    -1,  1362,  1363,    -1,    -1,    -1,
      -1,  1003,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2482,    -1,  2038,
      -1,    -1,    -1,    -1,    -1,  1392,  1393,    -1,    -1,  1396,
    1397,    -1,    -1,    -1,    -1,  2054,  2055,  2056,    -1,    -1,
    2059,    -1,  2061,  2062,    -1,    -1,  2065,  2066,  2067,    -1,
      -1,  2070,  2071,    -1,    -1,  2074,    -1,  2076,  2077,    -1,
    2079,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,    -1,    -1,  1192,    -1,   164,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1209,    -1,    -1,    -1,    -1,    -1,
    2098,    -1,    -1,    -1,    -1,    -1,    -1,  2582,  2583,    -1,
    2108,  2586,    -1,  2588,  2112,  2113,    -1,    -1,  1233,    -1,
      -1,    -1,    -1,  2121,  2122,  2600,  2601,    -1,  1243,    -1,
    2605,  2606,  2130,  2131,  2609,    -1,    -1,    -1,  2136,  2614,
    2615,    -1,    -1,    -1,    -1,    -1,    -1,  1262,  2146,  2147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1272,  2187,  2157,
    2158,  2190,  1277,    -1,    -1,    -1,  2195,     3,     4,  2198,
    2168,    -1,    -1,    -1,    -1,    -1,  2736,    -1,    -1,  2177,
      -1,  2179,    -1,    19,    -1,  1197,    -1,  2662,  2217,    -1,
    2665,    -1,    -1,    -1,    -1,  2670,    -1,    -1,    -1,    -1,
      -1,  2676,    -1,    39,    -1,    -1,  2681,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1227,    -1,    -1,    -1,    -1,
    1232,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1242,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2304,    -1,  2752,    -1,    -1,
    2755,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1410,    -1,    -1,    -1,    -1,
    2775,    -1,    -1,    -1,    -1,    -1,  2335,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2789,    -1,    -1,  2792,  2793,    -1,
      -1,    -1,    -1,   159,    -1,  1440,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2350,    -1,  1469,    -1,    -1,  1472,    -1,    -1,
      -1,   197,  2360,    -1,    -1,    -1,    -1,  1482,  1483,    -1,
      -1,  2369,    -1,  1750,    -1,  1490,    -1,    -1,    -1,    -1,
    2378,    -1,  1497,   219,    -1,  2414,  1763,  2385,   224,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1773,    -1,  2396,   235,
      -1,    -1,    -1,    -1,  2402,  2434,    -1,  2405,    -1,    -1,
    2408,    -1,  2441,    -1,    -1,  2444,  2445,    -1,    -1,    -1,
      -1,    -1,  1537,    -1,    -1,  1540,  1541,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1549,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   297,    -1,    -1,    -1,    -1,  1478,    -1,  1845,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,    -1,    -1,
    1625,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1538,  2525,  1643,    -1,
      -1,  2560,  1544,    -1,    -1,    -1,  2534,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1659,  2543,    -1,    -1,    -1,    -1,
    2579,  2549,    -1,    -1,    -1,  2553,    -1,    -1,  2556,  1674,
      -1,  1676,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,  1686,    -1,    -1,  1689,    -1,  1691,  1692,  1693,  1694,
      -1,    -1,  1697,    -1,    -1,  1700,    -1,    -1,  1703,  1704,
      -1,  1706,  1707,  1708,  1709,    -1,  1711,  1712,    -1,    -1,
      -1,    -1,  1717,  1718,  1719,    -1,    -1,  1722,  1723,  1621,
       4,    -1,    -1,  1728,  1729,  1627,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2652,  2653,    19,  2655,    -1,  2657,  2658,
      -1,  2660,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1652,    -1,    -1,   164,    -1,    -1,  1658,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1687,    -1,    -1,    -1,    -1,
      -1,  2710,    -1,  1695,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2097,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2757,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1852,    -1,    -1,
      -1,  1856,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1868,    -1,    -1,  1871,    -1,    -1,    -1,
    2137,  2138,  2139,  2140,  2141,   159,  2143,  2144,    -1,    -1,
      -1,  2148,  2149,  2150,  2151,  2152,    -1,  2154,  2155,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1901,    -1,    -1,    -1,
      -1,   245,    -1,    -1,   248,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,    -1,   219,    -1,    -1,    -1,    -1,
     224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1850,    -1,
      -1,    -1,  1957,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1872,    -1,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
      -1,    -1,    -1,    -1,  1906,  1907,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1923,  1924,    -1,    -1,  2030,  1928,  1929,    -1,    -1,
      -1,    -1,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
      -1,    -1,    -1,    -1,    -1,    -1,  1968,    -1,  2073,  1971,
    1972,    -1,    -1,    -1,    -1,    -1,    -1,  1979,    -1,    -1,
      -1,    -1,  2349,    -1,    -1,  2352,  2353,  2354,  2355,  2356,
      -1,  2358,  2359,    -1,  2361,  2362,  2363,  2364,  2365,    -1,
    2367,  2368,    -1,  2370,  2371,  2372,  2373,  2374,    -1,  2376,
    2377,  2013,  2379,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2389,  2390,    -1,    -1,    -1,  2029,    -1,    -1,
      -1,    -1,    -1,  2400,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2052,    -1,    -1,    -1,    -1,  2057,    19,    -1,    -1,    -1,
      -1,  2063,    -1,    -1,    -1,    -1,  2068,    -1,    -1,    -1,
    2072,    -1,    -1,  2075,    -1,    -1,  2078,    -1,  2080,    -1,
      -1,    -1,    -1,    -1,  2189,    -1,    -1,  2192,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2200,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    -1,    -1,    70,    -1,    -1,
      -1,  2216,    -1,    -1,  2219,    -1,    -1,    -1,    -1,  2224,
      -1,    -1,  2227,  2228,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2528,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2537,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,  2546,
      -1,  2548,    -1,    -1,    -1,  2552,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   171,    -1,
      -1,  2316,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   189,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    19,    -1,    -1,    -1,   211,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     103,   224,    -1,  2265,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2639,    -1,  2641,    -1,  2643,    -1,    -1,  2646,
      -1,  2648,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2413,    -1,
      -1,    -1,    -1,    -1,   277,    -1,   159,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2446,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2457,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   224,   345,    -1,   159,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2505,   176,    -1,    -1,  2509,    -1,    -1,    -1,    -1,  2411,
      -1,    -1,    -1,    -1,    -1,  2417,    -1,    -1,    -1,  2421,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2437,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   224,
     293,    -1,    -1,    -1,    -1,    -1,    -1,  2562,  2563,    -1,
    2565,    -1,    -1,    -1,    -1,  2570,  2571,    -1,    -1,    -1,
    2575,    -1,    -1,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,    -1,    -1,  2608,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2632,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,    -1,
      20,    21,    22,    -1,    -1,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2590,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    -1,    -1,    53,    49,    50,    56,    -1,    53,    -1,
    2715,    19,    -1,    63,    -1,    60,    -1,    67,    63,    -1,
      -1,    -1,    67,    -1,    -1,    75,    76,  2732,    -1,    -1,
      75,    76,    -1,    83,    84,    -1,    -1,    -1,    83,    -1,
      -1,    -1,  2747,    -1,    -1,  2750,    -1,    -1,    -1,    57,
      -1,   101,    -1,    -1,    19,    -1,    -1,   107,    -1,    -1,
      -1,   111,   112,    -1,    -1,   115,   111,   112,    -1,    -1,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2682,   131,    -1,    19,    -1,    -1,   131,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,   103,    -1,    -1,    -1,    -1,
      -1,  2703,   152,    -1,    -1,    -1,    -1,   152,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,
     175,    19,    -1,    -1,    -1,    -1,    -1,    -1,   103,   184,
      -1,    -1,    -1,    -1,    -1,    -1,  2748,    -1,   198,    -1,
      -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2768,   103,    -1,  2771,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,
     230,    -1,    -1,   228,    -1,   230,   236,   237,    -1,    -1,
      -1,   236,   237,    -1,   159,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   252,   253,    -1,    -1,    -1,    -1,   253,    -1,
      -1,   219,    -1,   263,   264,   103,   224,    -1,    -1,   264,
      -1,    -1,    -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   289,
      -1,   291,    -1,    -1,   289,    -1,   291,    -1,    -1,    -1,
      -1,    -1,    -1,   303,   219,   305,   301,    -1,    -1,   224,
      -1,   311,    -1,    -1,    -1,    -1,   311,    -1,    -1,    -1,
      -1,   159,    -1,    -1,    -1,    -1,    -1,   285,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   224,    -1,
      -1,    -1,    -1,    -1,    -1,   345,    -1,    -1,    -1,    -1,
     345,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   224,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,    -1,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,    41,    -1,    -1,    44,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    97,    98,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,    -1,    -1,    -1,   144,
      -1,    -1,   147,    -1,    -1,    -1,   151,   152,    -1,    -1,
      -1,    -1,    -1,   158,    -1,    -1,    -1,    -1,    -1,   164,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   178,    -1,    -1,   181,   182,   183,    -1,
      -1,   186,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   217,   218,   219,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    44,    -1,   231,    47,   233,    -1,
      -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,    -1,   244,
      -1,    -1,    -1,   248,    -1,   250,    66,   252,    68,    69,
      70,    -1,   257,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      80,    -1,    -1,    -1,    -1,    85,   271,    87,    88,    89,
      -1,    -1,   277,    -1,    -1,    95,    -1,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   292,   293,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,
      -1,   306,    -1,    -1,    -1,    -1,   126,   312,    -1,    -1,
     315,   316,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   152,    -1,   154,   155,    -1,    -1,   158,    -1,
      -1,   346,   162,    -1,   164,    -1,    -1,    -1,   353,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   186,   187,    -1,    -1,
     190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     200,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,   218,    -1,
      -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     250,    -1,   252,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   277,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   292,   293,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   301,    -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,
      -1,    -1,    -1,    -1,   314,    -1,   316,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   353
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
     126,   144,   152,   154,   155,   158,   162,   164,   186,   187,
     190,   200,   217,   218,   225,   250,   252,   277,   292,   293,
     301,   308,   314,   316,   353,   423,    84,   101,   465,    19,
      41,    44,    78,    85,    96,    97,   103,   126,   144,   158,
     159,   165,   186,   224,   277,   287,   316,   468,    67,   362,
      89,   118,   188,   203,   265,   306,   316,   474,    16,    26,
     114,   126,   161,   210,   223,   477,   234,   495,     5,    67,
      89,   142,   306,   353,   362,   496,     5,   497,    58,   133,
     229,   244,   307,   513,    46,    65,    67,   185,   243,   287,
     296,   532,    67,   206,   348,   354,   356,   533,    39,   197,
     235,   297,   360,   370,   372,   534,     5,   306,   316,   362,
     537,    71,   171,   249,   258,   538,     4,   539,    89,   513,
      62,   287,   310,   546,   197,   297,   360,   547,    26,   114,
     126,   210,   223,   549,    51,   101,   110,   139,   299,   564,
     565,     4,    37,    48,    75,   152,   189,   258,   294,   310,
     388,     4,   126,   209,   566,   297,   360,   568,    16,    23,
     245,   248,   371,   569,   234,   573,   297,   360,   574,     0,
       5,   143,   362,    60,   360,   394,   274,     5,     4,   297,
     360,   395,     5,    32,   286,   396,   125,   360,   397,   125,
     360,   399,   360,     4,   196,   247,   254,   403,   190,   307,
     351,   352,   360,   402,   362,   141,   179,   401,   200,   360,
      79,   175,   254,   360,   404,     5,   360,     4,   250,   406,
     360,   360,     5,   230,   409,    31,   410,     5,   411,     5,
     415,     5,    31,   416,   360,     9,    10,    11,   360,   366,
     367,   368,   369,   360,   360,    40,   113,   197,   360,   418,
     360,   197,   370,   372,   360,    35,   108,   129,   130,   138,
     156,   166,   377,   360,     4,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   119,    67,    54,    72,    89,
     102,   120,   124,   137,   177,   424,   120,   426,   190,   196,
     235,   261,   307,   351,   352,   360,   412,   427,   289,   430,
     171,   431,   171,   180,   433,    66,    67,    70,    93,   171,
     189,   211,   277,   345,   370,   435,   360,   372,   438,    60,
     293,   370,   439,   285,   370,   372,   440,    33,   441,   370,
     372,   442,     4,   370,   372,   443,    45,    60,    82,   102,
     119,   122,   149,   150,   202,   212,   274,   275,   345,   447,
     216,   309,   453,    67,     5,    90,     6,    89,   122,   445,
       5,    66,   372,   444,    16,   513,    46,    67,    82,   185,
     243,   287,   296,   454,    67,   235,   455,   288,    62,   287,
     310,   456,    21,   137,   242,   272,   457,    37,    48,    75,
     152,   189,   258,   310,   458,   372,    90,    16,   199,   463,
     370,   466,    67,    73,   469,    31,   470,    44,    88,   195,
     471,   152,   221,   264,   302,   472,   370,    18,    59,   117,
     176,   293,   370,   473,     5,     4,   196,   476,     5,     4,
       6,   122,   360,     4,     5,   250,   478,     5,   480,     5,
     119,   195,   250,   275,   481,    95,   113,   190,   494,     5,
     492,     5,   275,   493,     4,     5,   362,   362,   360,   360,
       5,     4,     5,    61,    67,    74,    76,    81,    84,    90,
     101,   107,   116,   131,   152,   167,   177,   178,   198,   221,
     235,   237,   252,   257,   264,   271,   289,   302,   303,   305,
     345,   498,    92,   172,   262,   280,   374,     5,     4,   200,
     207,   208,   243,   350,   373,   360,   370,   360,     5,   360,
      40,   113,   360,   536,   362,   360,   370,   372,   535,   360,
     377,   360,     4,   371,    55,    91,   143,   250,   540,     4,
       4,   360,     4,   152,   264,   541,     5,   370,     4,    40,
     113,   360,   548,   360,    99,    62,   122,   250,   278,   550,
     122,   563,    62,   119,   122,   159,   195,   246,   250,   275,
     278,   288,   552,   553,    62,   122,   278,   562,     5,     4,
      34,   109,   206,   545,    67,   362,   389,    67,   362,   390,
      67,   362,   391,    13,   192,   544,   360,   360,   228,   360,
     392,   360,   275,     4,   360,   360,     4,   572,     4,   291,
     570,     4,   291,   571,     4,   377,   125,   360,   575,   360,
     360,     4,     5,   360,    12,   360,   360,   360,    30,    96,
     165,   254,   259,   376,   376,     4,   200,   360,   360,     4,
       4,     4,   360,   360,   360,   360,     4,     4,     5,     5,
     370,     5,   360,   360,   366,   368,   368,   370,   360,   360,
     360,   360,   360,   360,   360,   370,   372,   369,   360,   360,
     369,   360,     5,   274,   105,   190,   425,   196,   254,   428,
     171,    79,   175,   254,   429,   141,   179,   413,   413,     4,
     432,     4,   434,   196,   261,   436,   180,   437,   171,   377,
     360,   360,   370,   370,   377,   377,   377,   370,   377,   360,
     370,     4,   450,     4,   372,   448,   199,     4,   168,   316,
     449,   199,   370,     4,   134,   297,   452,     5,     5,     4,
     199,   360,     4,     5,    61,    67,   116,   131,   146,   152,
     157,   211,   230,   235,   237,   263,   264,   271,   289,   345,
     507,   372,   191,   191,    67,   459,    67,   460,    67,   461,
     228,   462,   360,     5,   229,   464,   371,   377,     5,   370,
     370,   370,   370,     4,   362,     4,     4,   199,   360,    14,
      15,    62,   193,   194,   268,   278,   279,   309,    88,     5,
       5,    14,    15,    62,   193,   194,   268,   278,   279,   283,
     309,    88,   159,   164,   371,   484,   489,    88,   159,     5,
     482,     4,     4,    14,    62,   193,   268,   278,   309,     5,
       5,     4,   360,   371,    20,    21,    22,    49,    50,    53,
      56,    63,    67,    75,    76,    83,    84,   101,   107,   111,
     112,   115,   131,   152,   175,   198,   228,   230,   236,   237,
     252,   253,   263,   264,   289,   291,   303,   305,   311,   345,
      67,    81,    90,   101,   131,   152,   198,   237,   264,   303,
     305,     4,    30,   163,   216,   242,   501,     5,    64,   106,
     239,   255,   256,   347,   348,   506,   101,   499,    17,    40,
     113,   197,   505,     4,     5,    17,   215,   298,   360,   264,
     506,   514,   126,   506,   515,    36,    40,   113,   135,   197,
     297,   360,   516,   370,   362,    93,   101,   107,   128,   152,
     160,   198,   206,   252,   264,   280,   519,    40,   113,   197,
       5,   290,    17,   215,   298,   523,   291,   362,   524,     5,
     101,   107,   306,    17,    17,     4,   360,   360,   360,   360,
     360,   360,   377,   360,   360,   369,   360,     4,   377,     4,
      40,   113,   197,   269,   542,    40,   113,   197,   269,   543,
       4,    99,     5,     5,    88,     4,     5,     5,    88,     5,
     553,    62,   122,   159,   278,   557,    62,   122,   278,   561,
      88,   159,    62,   122,   278,   555,     4,    62,   122,   278,
     554,     5,     5,     4,     4,     5,     5,     5,   360,   360,
     360,     4,   360,   567,   360,   360,     6,   371,     4,     5,
       4,     4,     5,     4,    99,   266,   378,   360,   360,    12,
       5,    12,   360,   360,    12,     4,    12,     4,     4,   360,
     360,   360,     4,   362,     4,     4,   377,   370,   377,   360,
     360,   360,   370,   360,   369,   360,   360,     5,     5,   360,
     372,   360,   370,   360,   377,   377,   378,   378,   378,   377,
     369,   360,   377,   360,   136,   251,   363,   451,   168,     5,
       4,   377,   159,   159,     4,     5,     4,     4,   360,   446,
     360,    20,    21,    22,    49,    50,    53,    60,    63,    67,
      75,    76,    83,   111,   112,   115,   131,   152,   175,   184,
     228,   230,   236,   237,   253,   264,   289,   291,   301,   311,
     345,    67,   131,   157,   237,   289,    30,   163,   216,   242,
     508,   360,   211,   360,   509,    17,   360,   263,   519,   263,
     211,   360,   510,   291,   511,    17,   100,   360,   360,     5,
     378,    57,   370,     4,     5,   475,   360,     5,     5,     5,
     159,   187,   382,   382,   167,   270,   380,     4,     4,     5,
       5,   479,   276,   276,     5,     5,     5,    17,   161,   381,
     381,   380,     4,     4,   380,     5,     5,   483,   164,   344,
     371,   487,     5,   486,     5,     5,   490,     5,   491,     5,
      14,    15,    62,   193,   194,   268,   278,   279,   283,   309,
       4,     4,     5,     5,   382,   380,     4,     5,     5,   377,
      83,   154,   226,   227,   241,   284,   385,     7,     8,   360,
     365,   242,   123,   242,   242,   107,    40,    67,   101,   107,
     113,   131,   152,   167,   198,   237,   252,   264,   291,   303,
     305,   306,   345,   500,   123,   242,     5,    27,   169,   242,
     287,   141,   107,    22,    50,    53,    83,   112,   115,   230,
     263,    22,    50,    53,    56,    83,   112,   115,   230,   263,
     289,    40,   123,   242,   242,   107,     5,   215,    27,   228,
      36,   135,   297,   360,   267,   274,   123,   248,   370,   519,
      40,   132,   228,   287,   248,   215,     5,     5,   252,    27,
     228,     4,     5,     5,   215,    36,   135,   297,   360,   519,
     215,   362,     4,     4,   360,     5,   309,    22,    27,    49,
      50,    52,    53,    63,    75,    76,    83,    86,   104,   111,
     112,   115,   175,   230,   236,   253,   263,   290,   291,   311,
     356,   502,   360,   360,   360,   360,   360,   506,   370,     5,
       4,     5,   360,   360,   370,   360,   362,   360,   360,   506,
       5,   360,   360,   362,     5,    17,     5,     5,   360,   360,
     369,   360,   360,     4,   360,   360,   113,   360,   360,   113,
       4,    42,    43,   173,   174,   201,   387,   387,    62,   122,
     278,   551,   387,     5,    62,   122,   278,   556,     5,     5,
      62,   122,   278,   558,     4,     5,     5,     4,    62,   122,
     278,   560,    62,   122,   278,   559,     5,     5,     4,     5,
       5,     4,   387,   387,   387,   360,   360,   360,     4,   370,
     360,   371,   377,     5,     5,    12,   360,   370,   372,   360,
      12,   360,   360,   360,    60,   360,     6,     4,   360,   360,
      47,   277,   414,     5,   362,   362,   377,   360,     4,     4,
       4,   377,   370,   360,   360,   360,   360,   377,   370,   378,
     369,   360,     4,   378,   360,    38,    38,     4,   372,     5,
      24,    25,    99,   379,     4,   370,   360,   360,     4,   360,
       5,    83,   154,   226,   227,   241,   284,   370,   372,   242,
     123,   242,   242,    21,   242,   370,   123,   242,    27,   169,
     242,   287,   141,    21,   242,   123,   242,   242,    21,   242,
      27,   170,   228,   170,   267,   274,   123,   170,   228,   295,
     519,   132,   170,   228,   287,     4,   252,    27,   170,   228,
     519,   211,   360,   360,   360,   360,   360,   360,   199,   360,
     360,    20,   238,   467,     4,     4,   360,   382,   382,   382,
       4,   382,   382,   382,    14,    15,    62,   193,   194,   268,
     278,   279,   309,   381,   382,   382,   382,   382,   382,     4,
     382,   382,     4,   381,    14,    15,    62,   193,   194,   268,
     278,   279,   309,     5,   485,     5,   488,     5,     5,    14,
      15,    62,   193,   194,   268,   278,   279,   283,   309,     5,
      14,    15,    62,   193,   194,   268,   278,   279,   283,   309,
       5,    14,    15,    62,   193,   194,   268,   278,   279,   283,
     309,    14,    15,    62,   193,   194,   268,   278,   279,   309,
     276,     5,     5,     5,   381,   381,   380,     4,     4,   380,
       5,     4,     4,   382,   382,     4,   382,   382,     5,   362,
     370,   372,     5,   360,   362,   360,     5,   360,     5,   365,
     107,   198,   252,   107,   198,   252,     5,   362,   360,   362,
       5,   360,   370,   362,     5,   365,   242,   242,    21,   242,
      21,   242,   242,    21,   242,   313,   313,     4,     4,     4,
     500,     4,     4,     4,   313,   313,     4,     5,     4,   362,
     360,     5,   360,     5,   365,   362,   370,   370,   360,    27,
      49,    52,    63,    86,   104,   356,   383,     4,   362,   360,
     377,   362,     5,   370,   370,   360,   362,   362,   370,   370,
     360,   362,   360,     5,   360,   228,   228,   360,   360,   228,
     360,   228,   360,   360,   512,   520,   360,   228,   228,   360,
     360,   360,   360,   360,   360,   360,   360,     5,   309,   360,
     503,   360,   360,   228,   360,   360,   360,   360,   370,   377,
       5,   370,   370,   360,   360,   377,   360,   360,   360,   370,
     360,   360,     5,     4,   360,   360,   360,   360,     5,     5,
       4,   387,     5,     5,     4,     4,     4,     5,     5,     4,
       4,     5,     5,     4,     5,     5,     4,   360,   360,   360,
     360,   377,   360,   370,   372,   360,   377,   360,   360,   360,
     360,   360,     5,   360,     4,     6,   360,   360,     4,   370,
     360,   377,   180,   375,   360,   375,   378,   377,   370,   360,
     360,     4,   360,   370,   370,   360,     4,     5,     5,     5,
       5,     5,   370,   377,   370,   370,   370,   370,   372,   370,
     377,   370,   370,   370,   372,   370,   370,   370,   370,   372,
     370,   370,   370,   360,   370,   370,   370,   370,   370,   370,
     370,   360,   360,     4,   360,     5,     4,   360,   382,     5,
       5,     5,   380,     4,     4,     5,   382,   381,     4,   382,
       5,     5,     5,   381,   381,   380,     4,     4,     5,    14,
      15,    62,   193,   194,   268,   278,   279,   309,    14,    15,
      62,   193,   194,   268,   278,   279,   309,    14,    15,    62,
     193,   194,   268,   278,   279,   309,   276,     5,     5,     5,
     381,   381,   380,     4,     4,   380,     5,   276,     5,     5,
       5,   381,   381,   380,     4,     4,   380,     5,   276,     5,
       5,     5,   381,   381,   380,     4,     4,   380,     5,     5,
       5,     5,   381,   381,   380,     4,     4,     5,   381,     4,
       4,   381,     4,     4,   382,     5,   377,   370,   360,   360,
     370,   360,     5,   365,     5,   370,   362,     5,   370,   377,
       5,   365,   360,   360,   360,   360,   360,   360,   360,   360,
     360,     4,     4,     5,     4,     4,   360,   370,   360,     5,
     365,   362,   377,   377,   360,   369,   377,   377,   360,   377,
     377,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,    56,    67,    94,   131,   289,   291,   345,   517,   518,
     519,   530,   531,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   370,     5,   360,   360,   360,
     360,     4,     4,   377,   378,     4,   504,   377,   377,   369,
     360,     4,   377,     4,   387,   387,   387,   365,   360,   360,
     360,   377,   360,   369,   360,   360,    12,     5,     5,     4,
     360,   360,     4,   377,   370,   360,   360,   378,   379,   360,
       5,   360,   372,     5,     5,     5,     5,     5,   377,   379,
     379,   379,   377,   379,   378,   379,   379,   377,   379,   379,
     379,   377,   379,   379,   377,   370,   379,   377,   379,   379,
     377,   379,   377,     4,   372,     5,   360,     4,   382,   381,
       4,   381,     5,     5,     5,   381,   381,   380,     4,     4,
       5,     5,     5,     5,   381,   381,   380,     4,     4,     5,
       5,     5,     5,   381,   381,   380,     4,     4,     5,   381,
     382,   382,   382,   382,   382,     4,   382,   382,     4,   381,
     381,   382,   382,   382,   382,   382,     4,   382,   382,     4,
     381,   381,     4,     4,   381,     4,   381,   381,     4,     4,
       4,   371,   379,     4,   370,   379,   360,   370,     4,   379,
     379,   370,     4,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   370,   379,   360,   370,     4,   369,
     369,   370,   369,   369,   370,   370,   369,   369,   360,   360,
     360,   360,   360,   360,   365,   360,   360,   360,   357,   357,
     357,   357,   357,   357,   357,   518,   357,   365,   360,   360,
     360,   360,   365,   360,   360,   360,   360,   360,   360,   377,
     360,   309,   364,   365,   360,   360,   378,   362,     4,     4,
     378,     4,   360,   369,   360,    60,   360,     5,     5,   360,
       4,   375,   379,     5,     4,     5,     4,     5,   370,     5,
     378,   379,   378,   378,   378,     5,     4,   360,   382,   381,
     382,   382,   382,   382,   382,     4,   382,   382,   381,   382,
     382,   382,   382,   382,     4,   382,   382,   381,   382,   382,
     382,   382,   382,     4,   382,   382,   381,   382,   381,     4,
     382,   382,   381,     4,   382,   381,     4,   381,   381,   377,
     370,   379,     4,   377,   360,   377,   360,   360,   360,   379,
       4,   377,   360,   369,   379,   360,   369,   379,   379,   370,
     360,     4,   384,   384,   360,   360,   384,   365,   384,   520,
     370,   500,     5,     4,     5,     5,     5,     4,   362,   365,
     384,   384,   360,   360,   365,   360,   360,   360,   360,   360,
     369,   360,     5,   520,   360,   384,   362,   521,   522,     5,
     362,     4,     5,   360,     5,     4,     6,   360,    32,   286,
     421,   370,     5,    32,   286,   386,   370,   421,   360,   381,
     382,   381,   382,   381,   382,   382,   381,   382,   381,   381,
     360,   379,   370,   370,   360,   370,   360,   370,   370,   360,
     370,   379,     4,   520,   520,   364,   360,   520,     4,   520,
     377,     5,     4,     4,   520,   520,   364,   360,     4,   520,
     520,   360,   370,   520,   520,   520,   521,   527,   528,   519,
     525,   526,     4,     5,     5,     6,     4,   190,   307,   352,
     360,   412,     4,   370,     4,   382,   382,   382,   382,   382,
     371,   379,   379,   360,   379,     4,   379,   379,   360,   379,
     360,   520,   520,     4,   360,   520,     5,   360,   520,     4,
     360,   520,   377,   527,   529,   530,   357,   526,     5,     5,
       4,   360,   413,   360,   413,   377,   379,     4,   370,   372,
       4,   365,   364,   360,   360,   364,   360,   370,   530,   362,
       5,     5,   360,   360,   360,   360,   386,     5,   370,   372,
     377,   370,   372,   520,   360,     4,   520,   360,   379,     5,
       5,   360,     5,   360,   377,   377,     4,   520,     4,     5,
       5,     5,   364,   364,   520,   520,   520
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

  case 25:
#line 487 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 27:
#line 489 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 34:
#line 496 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 38:
#line 500 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 41:
#line 503 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 46:
#line 508 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 48:
#line 510 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 50:
#line 512 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 52:
#line 514 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 57:
#line 521 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 58:
#line 522 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 59:
#line 525 "frame/parser.Y"
    {yydebug=1;;}
    break;

  case 60:
#line 526 "frame/parser.Y"
    {yydebug=0;;}
    break;

  case 61:
#line 527 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 62:
#line 528 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 529 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 530 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 531 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 532 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 533 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 534 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 535 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 536 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 539 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
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
#line 544 "frame/parser.Y"
    {(yyval.integer)=1;;}
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
#line 549 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 80:
#line 552 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 81:
#line 553 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 82:
#line 554 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 83:
#line 555 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 84:
#line 556 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 85:
#line 559 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 86:
#line 560 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 87:
#line 563 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 88:
#line 564 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 89:
#line 565 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 90:
#line 568 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 91:
#line 571 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 92:
#line 574 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 93:
#line 578 "frame/parser.Y"
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

  case 94:
#line 590 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
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
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 97:
#line 611 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 98:
#line 612 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 99:
#line 613 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 100:
#line 614 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 101:
#line 615 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 102:
#line 618 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 103:
#line 619 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 104:
#line 620 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 105:
#line 621 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 106:
#line 622 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 107:
#line 623 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 108:
#line 624 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 109:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 110:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 111:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 112:
#line 628 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 113:
#line 629 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 114:
#line 630 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 115:
#line 631 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 116:
#line 632 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 117:
#line 633 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 118:
#line 634 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 119:
#line 635 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 120:
#line 636 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 121:
#line 637 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 122:
#line 638 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 123:
#line 639 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 124:
#line 640 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 125:
#line 641 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 126:
#line 642 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 127:
#line 643 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 128:
#line 644 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 129:
#line 645 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 130:
#line 648 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 131:
#line 649 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 132:
#line 652 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 133:
#line 653 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 134:
#line 654 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 135:
#line 655 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 136:
#line 656 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 137:
#line 657 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 138:
#line 660 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 139:
#line 661 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 140:
#line 662 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 141:
#line 663 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 142:
#line 664 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 143:
#line 667 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 144:
#line 668 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 145:
#line 669 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 146:
#line 670 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 147:
#line 671 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 148:
#line 672 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 149:
#line 673 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 150:
#line 674 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 151:
#line 677 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 152:
#line 678 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 153:
#line 679 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 154:
#line 680 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 155:
#line 681 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 156:
#line 684 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 157:
#line 685 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 158:
#line 686 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 159:
#line 687 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 160:
#line 688 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 161:
#line 689 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 162:
#line 690 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 163:
#line 691 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 164:
#line 694 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 165:
#line 695 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 166:
#line 696 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 167:
#line 699 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 168:
#line 700 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 169:
#line 701 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 170:
#line 702 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 171:
#line 705 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 172:
#line 706 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 173:
#line 707 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
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
#line 712 "frame/parser.Y"
    {;}
    break;

  case 177:
#line 715 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 178:
#line 716 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 179:
#line 717 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 180:
#line 720 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 181:
#line 721 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 182:
#line 722 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 183:
#line 723 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 184:
#line 724 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 185:
#line 725 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 186:
#line 726 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 187:
#line 727 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 188:
#line 730 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 189:
#line 731 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 190:
#line 734 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 191:
#line 735 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 192:
#line 736 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 193:
#line 737 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 194:
#line 738 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 195:
#line 739 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 196:
#line 742 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 197:
#line 743 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 198:
#line 744 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 199:
#line 747 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 200:
#line 748 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 201:
#line 749 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 202:
#line 750 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 203:
#line 751 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 204:
#line 752 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 209:
#line 759 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 210:
#line 760 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 211:
#line 761 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 212:
#line 763 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 213:
#line 766 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 214:
#line 767 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 215:
#line 770 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 216:
#line 771 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 217:
#line 774 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 218:
#line 775 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 219:
#line 778 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 220:
#line 780 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 222:
#line 784 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 223:
#line 785 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 226:
#line 788 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 228:
#line 790 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 229:
#line 793 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 230:
#line 794 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 231:
#line 797 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 232:
#line 798 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 233:
#line 800 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 234:
#line 802 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 235:
#line 803 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 236:
#line 804 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 237:
#line 806 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 238:
#line 808 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 239:
#line 811 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 240:
#line 812 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 241:
#line 815 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 242:
#line 817 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 243:
#line 820 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 244:
#line 822 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 245:
#line 825 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 246:
#line 829 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 247:
#line 830 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 249:
#line 834 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 250:
#line 835 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 251:
#line 836 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 255:
#line 842 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 256:
#line 843 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 258:
#line 846 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 259:
#line 851 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 260:
#line 852 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 261:
#line 855 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 262:
#line 856 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 263:
#line 857 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 264:
#line 858 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 265:
#line 859 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 266:
#line 862 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 267:
#line 863 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 268:
#line 864 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 269:
#line 865 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 270:
#line 868 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 271:
#line 870 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 272:
#line 875 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 273:
#line 880 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 274:
#line 887 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 275:
#line 889 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 276:
#line 890 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 278:
#line 892 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 279:
#line 896 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 280:
#line 898 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 281:
#line 900 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 282:
#line 901 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 288:
#line 912 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 289:
#line 914 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 290:
#line 916 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 291:
#line 921 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 292:
#line 925 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 293:
#line 928 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 294:
#line 929 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 295:
#line 932 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 296:
#line 933 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 297:
#line 935 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 298:
#line 941 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 299:
#line 942 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 300:
#line 943 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 301:
#line 944 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 302:
#line 947 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 303:
#line 948 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 304:
#line 951 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 305:
#line 952 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 306:
#line 955 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 307:
#line 956 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 308:
#line 960 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 309:
#line 962 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 310:
#line 965 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 311:
#line 967 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 312:
#line 970 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 314:
#line 972 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 315:
#line 973 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 316:
#line 974 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 317:
#line 977 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 318:
#line 979 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 319:
#line 980 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 320:
#line 981 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 321:
#line 982 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 322:
#line 986 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 323:
#line 988 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 324:
#line 989 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 325:
#line 990 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 326:
#line 993 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 327:
#line 995 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 328:
#line 997 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 329:
#line 999 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 330:
#line 1002 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 331:
#line 1005 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 332:
#line 1006 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 333:
#line 1007 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 334:
#line 1010 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 335:
#line 1013 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 349:
#line 1027 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 352:
#line 1030 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 353:
#line 1031 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 354:
#line 1033 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 357:
#line 1036 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 358:
#line 1037 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 361:
#line 1040 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 362:
#line 1041 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 364:
#line 1044 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 366:
#line 1046 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 368:
#line 1048 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 370:
#line 1050 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 371:
#line 1052 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 372:
#line 1054 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 374:
#line 1056 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 375:
#line 1059 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 376:
#line 1060 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 377:
#line 1061 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 378:
#line 1062 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 379:
#line 1063 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 380:
#line 1064 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 382:
#line 1066 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 383:
#line 1069 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 384:
#line 1070 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 385:
#line 1071 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 386:
#line 1074 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 387:
#line 1077 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 388:
#line 1079 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 389:
#line 1081 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 390:
#line 1082 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 391:
#line 1083 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 393:
#line 1085 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 395:
#line 1088 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 396:
#line 1094 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 397:
#line 1095 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 398:
#line 1098 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 399:
#line 1099 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 400:
#line 1100 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 401:
#line 1103 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 402:
#line 1104 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 404:
#line 1110 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 405:
#line 1112 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 406:
#line 1114 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 407:
#line 1117 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 409:
#line 1119 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 410:
#line 1123 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 411:
#line 1127 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 413:
#line 1129 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 414:
#line 1130 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 415:
#line 1131 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 416:
#line 1132 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 417:
#line 1133 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 419:
#line 1135 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 420:
#line 1136 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 421:
#line 1139 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 422:
#line 1140 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 423:
#line 1141 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 424:
#line 1144 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 425:
#line 1145 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 426:
#line 1149 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 427:
#line 1151 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 428:
#line 1159 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 429:
#line 1161 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 430:
#line 1163 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 431:
#line 1166 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 432:
#line 1168 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 433:
#line 1169 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 434:
#line 1172 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 435:
#line 1175 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 436:
#line 1177 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 437:
#line 1181 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 438:
#line 1183 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 439:
#line 1186 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 440:
#line 1190 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 441:
#line 1191 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 442:
#line 1193 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)), (Coord::InternalSystem)(yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 443:
#line 1196 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 444:
#line 1197 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 446:
#line 1201 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 447:
#line 1202 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 448:
#line 1203 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 449:
#line 1206 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 450:
#line 1208 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 451:
#line 1209 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 453:
#line 1211 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 457:
#line 1215 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 458:
#line 1216 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 459:
#line 1217 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 460:
#line 1219 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 462:
#line 1221 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 463:
#line 1224 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 464:
#line 1226 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 465:
#line 1228 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 466:
#line 1229 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 467:
#line 1230 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 468:
#line 1231 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 469:
#line 1234 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 470:
#line 1235 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 471:
#line 1239 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 472:
#line 1241 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 473:
#line 1244 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 474:
#line 1247 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 475:
#line 1248 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 476:
#line 1250 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 477:
#line 1252 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 478:
#line 1254 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 479:
#line 1257 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 480:
#line 1258 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 481:
#line 1259 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 482:
#line 1262 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 483:
#line 1263 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 484:
#line 1264 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 485:
#line 1265 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 486:
#line 1266 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 487:
#line 1267 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 488:
#line 1268 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 489:
#line 1271 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 490:
#line 1274 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 491:
#line 1275 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 492:
#line 1276 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 493:
#line 1279 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 494:
#line 1280 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 495:
#line 1281 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 496:
#line 1282 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 497:
#line 1283 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 498:
#line 1284 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 503:
#line 1291 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 504:
#line 1292 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 505:
#line 1293 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 506:
#line 1296 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 507:
#line 1297 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 508:
#line 1300 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 509:
#line 1301 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 510:
#line 1304 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 511:
#line 1305 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 512:
#line 1308 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 513:
#line 1309 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 514:
#line 1312 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 516:
#line 1314 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 517:
#line 1317 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 518:
#line 1318 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 520:
#line 1322 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 521:
#line 1326 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 522:
#line 1329 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 523:
#line 1336 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 524:
#line 1337 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 525:
#line 1340 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 526:
#line 1341 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 529:
#line 1344 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 530:
#line 1345 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 531:
#line 1346 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 532:
#line 1347 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 534:
#line 1349 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 535:
#line 1350 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 536:
#line 1351 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 538:
#line 1353 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 539:
#line 1354 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 540:
#line 1355 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 541:
#line 1356 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 543:
#line 1360 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 544:
#line 1363 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 545:
#line 1364 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 546:
#line 1367 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 547:
#line 1368 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 548:
#line 1369 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 549:
#line 1370 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 550:
#line 1373 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 551:
#line 1374 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 552:
#line 1375 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 553:
#line 1376 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 554:
#line 1379 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 555:
#line 1380 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 556:
#line 1381 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 557:
#line 1382 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 558:
#line 1383 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 559:
#line 1384 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 560:
#line 1387 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 561:
#line 1388 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 562:
#line 1389 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 565:
#line 1393 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 566:
#line 1394 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 567:
#line 1397 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 568:
#line 1400 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 569:
#line 1401 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 570:
#line 1405 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 571:
#line 1407 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 572:
#line 1408 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 579:
#line 1420 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 580:
#line 1422 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 581:
#line 1424 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 582:
#line 1425 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 583:
#line 1427 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 584:
#line 1429 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 585:
#line 1431 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 586:
#line 1433 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 587:
#line 1435 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 589:
#line 1439 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 590:
#line 1440 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 591:
#line 1441 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 592:
#line 1442 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 593:
#line 1443 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 594:
#line 1445 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 595:
#line 1446 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 596:
#line 1447 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 597:
#line 1448 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 598:
#line 1451 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 599:
#line 1455 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 600:
#line 1457 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 601:
#line 1459 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 602:
#line 1461 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 603:
#line 1463 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 604:
#line 1465 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 605:
#line 1467 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 606:
#line 1469 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 607:
#line 1472 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 608:
#line 1474 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 609:
#line 1476 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 615:
#line 1484 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 616:
#line 1485 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 617:
#line 1486 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 618:
#line 1487 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 619:
#line 1488 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 620:
#line 1489 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 621:
#line 1491 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 622:
#line 1493 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 623:
#line 1494 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 624:
#line 1495 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 625:
#line 1496 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 626:
#line 1499 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 627:
#line 1500 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 628:
#line 1501 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 629:
#line 1502 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 630:
#line 1503 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 631:
#line 1505 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 632:
#line 1506 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 633:
#line 1507 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 634:
#line 1508 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 640:
#line 1519 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 641:
#line 1522 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 642:
#line 1525 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 643:
#line 1528 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 644:
#line 1531 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 645:
#line 1534 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 646:
#line 1537 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 647:
#line 1540 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 648:
#line 1543 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 649:
#line 1548 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 650:
#line 1551 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 651:
#line 1554 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 652:
#line 1557 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 653:
#line 1560 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 654:
#line 1563 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 655:
#line 1566 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 656:
#line 1569 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 657:
#line 1572 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 658:
#line 1575 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 659:
#line 1578 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 660:
#line 1583 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 661:
#line 1586 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 662:
#line 1589 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 663:
#line 1592 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 664:
#line 1595 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 665:
#line 1598 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 666:
#line 1601 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 667:
#line 1604 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 668:
#line 1607 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 669:
#line 1612 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 670:
#line 1614 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 671:
#line 1616 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 672:
#line 1618 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 673:
#line 1620 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 674:
#line 1622 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 675:
#line 1627 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 676:
#line 1629 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 677:
#line 1631 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 678:
#line 1635 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 679:
#line 1638 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 680:
#line 1641 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 681:
#line 1644 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 682:
#line 1647 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 683:
#line 1650 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 684:
#line 1653 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 685:
#line 1656 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 686:
#line 1659 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 687:
#line 1662 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 688:
#line 1665 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 689:
#line 1669 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 690:
#line 1670 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1671 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 692:
#line 1672 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 693:
#line 1673 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 694:
#line 1674 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 695:
#line 1676 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 696:
#line 1678 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 697:
#line 1679 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 698:
#line 1680 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 699:
#line 1681 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 700:
#line 1684 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 701:
#line 1685 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 702:
#line 1686 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 703:
#line 1687 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 704:
#line 1688 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 705:
#line 1690 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 706:
#line 1691 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 707:
#line 1692 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 708:
#line 1693 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 709:
#line 1697 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 710:
#line 1699 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 711:
#line 1700 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 712:
#line 1702 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 713:
#line 1704 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 714:
#line 1706 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 715:
#line 1709 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 716:
#line 1710 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 717:
#line 1713 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 718:
#line 1714 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 719:
#line 1715 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 720:
#line 1718 "frame/parser.Y"
    {
#ifdef MAC_OSX_TK
	  fr->macosxPrintCmd();
#endif
	;}
    break;

  case 721:
#line 1725 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 722:
#line 1726 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 723:
#line 1727 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 724:
#line 1728 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 725:
#line 1729 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 726:
#line 1730 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 727:
#line 1731 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 728:
#line 1735 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 730:
#line 1743 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 731:
#line 1744 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 732:
#line 1746 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 733:
#line 1748 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 734:
#line 1749 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 735:
#line 1750 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 737:
#line 1751 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 738:
#line 1752 "frame/parser.Y"
    {fr->markerDeleteCmd();;}
    break;

  case 739:
#line 1753 "frame/parser.Y"
    {fr->markerDeleteAllCmd();;}
    break;

  case 741:
#line 1755 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 742:
#line 1756 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 743:
#line 1758 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 744:
#line 1760 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 745:
#line 1762 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 746:
#line 1765 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 747:
#line 1767 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 748:
#line 1768 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 749:
#line 1770 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 750:
#line 1773 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 751:
#line 1776 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 752:
#line 1778 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 753:
#line 1781 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 754:
#line 1784 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 755:
#line 1787 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 756:
#line 1790 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 757:
#line 1794 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 758:
#line 1798 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 759:
#line 1803 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 760:
#line 1807 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 761:
#line 1808 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 762:
#line 1810 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 763:
#line 1811 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 764:
#line 1813 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 765:
#line 1815 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 766:
#line 1817 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 767:
#line 1819 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 768:
#line 1820 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 769:
#line 1822 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 770:
#line 1824 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 771:
#line 1827 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 772:
#line 1831 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 773:
#line 1835 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 774:
#line 1837 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 775:
#line 1839 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 776:
#line 1841 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 777:
#line 1843 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 778:
#line 1845 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 779:
#line 1847 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 780:
#line 1849 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 781:
#line 1851 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 782:
#line 1853 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 783:
#line 1855 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 784:
#line 1857 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 785:
#line 1859 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 786:
#line 1861 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 787:
#line 1862 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 788:
#line 1864 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 789:
#line 1866 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 790:
#line 1867 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 791:
#line 1868 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 792:
#line 1870 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 793:
#line 1872 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 794:
#line 1873 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 795:
#line 1874 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 796:
#line 1875 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 797:
#line 1877 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 798:
#line 1878 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 799:
#line 1880 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 800:
#line 1884 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 801:
#line 1887 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 802:
#line 1890 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 803:
#line 1894 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 804:
#line 1898 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 805:
#line 1903 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 806:
#line 1907 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 807:
#line 1908 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 808:
#line 1909 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 809:
#line 1911 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 810:
#line 1913 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 811:
#line 1917 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 812:
#line 1918 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 813:
#line 1919 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 814:
#line 1921 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 815:
#line 1924 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 816:
#line 1927 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 817:
#line 1930 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 818:
#line 1931 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 819:
#line 1933 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 820:
#line 1936 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 821:
#line 1940 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 822:
#line 1942 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 823:
#line 1943 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 824:
#line 1945 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 825:
#line 1948 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 826:
#line 1951 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 827:
#line 1952 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 828:
#line 1954 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 829:
#line 1955 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 830:
#line 1956 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 831:
#line 1958 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 832:
#line 1959 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 833:
#line 1961 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 834:
#line 1964 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 835:
#line 1967 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 836:
#line 1969 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 837:
#line 1970 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 841:
#line 1975 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 842:
#line 1976 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 843:
#line 1978 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 844:
#line 1980 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 845:
#line 1982 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 846:
#line 1983 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 847:
#line 1985 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer));;}
    break;

  case 848:
#line 1986 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 851:
#line 1991 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 852:
#line 1992 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 853:
#line 1993 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 854:
#line 1994 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 855:
#line 1995 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 856:
#line 1996 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 857:
#line 1997 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 858:
#line 1998 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 859:
#line 1999 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 860:
#line 2000 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 861:
#line 2002 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 862:
#line 2004 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 863:
#line 2005 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 864:
#line 2006 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 865:
#line 2007 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 866:
#line 2008 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 867:
#line 2010 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 868:
#line 2011 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 869:
#line 2012 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 870:
#line 2013 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 871:
#line 2014 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 872:
#line 2016 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 873:
#line 2017 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 874:
#line 2018 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 875:
#line 2019 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 876:
#line 2020 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 877:
#line 2021 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 878:
#line 2024 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 879:
#line 2025 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 880:
#line 2026 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 881:
#line 2027 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 882:
#line 2028 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 883:
#line 2029 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 884:
#line 2030 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 885:
#line 2031 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 886:
#line 2032 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 887:
#line 2033 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 888:
#line 2034 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 889:
#line 2035 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 890:
#line 2036 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 891:
#line 2037 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 892:
#line 2038 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 893:
#line 2039 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 894:
#line 2040 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 895:
#line 2041 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 896:
#line 2042 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 897:
#line 2043 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 898:
#line 2044 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 899:
#line 2047 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 900:
#line 2048 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 901:
#line 2049 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 902:
#line 2050 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 903:
#line 2051 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 904:
#line 2053 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 905:
#line 2063 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 906:
#line 2071 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 907:
#line 2080 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 908:
#line 2088 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 909:
#line 2095 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 910:
#line 2102 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 911:
#line 2110 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 912:
#line 2118 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2123 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2128 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2133 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2138 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2143 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2148 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2153 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2162 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2172 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 922:
#line 2182 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 923:
#line 2191 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 924:
#line 2199 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 925:
#line 2209 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 926:
#line 2219 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 927:
#line 2229 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 928:
#line 2241 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 929:
#line 2250 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 931:
#line 2258 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 932:
#line 2260 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 933:
#line 2262 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 934:
#line 2267 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 935:
#line 2270 "frame/parser.Y"
    {(yyval.dash)[0] = (yyvsp[(1) - (2)].integer); (yyval.dash)[1] = (yyvsp[(2) - (2)].integer);;}
    break;

  case 936:
#line 2274 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 937:
#line 2276 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 938:
#line 2277 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 939:
#line 2280 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 940:
#line 2281 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 941:
#line 2282 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 942:
#line 2283 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 943:
#line 2284 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 944:
#line 2285 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 945:
#line 2286 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 947:
#line 2290 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 948:
#line 2291 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 949:
#line 2292 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 950:
#line 2293 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 951:
#line 2294 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 952:
#line 2297 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 953:
#line 2299 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 954:
#line 2301 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 955:
#line 2303 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 956:
#line 2305 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 957:
#line 2307 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 958:
#line 2309 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 959:
#line 2310 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 960:
#line 2311 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 961:
#line 2313 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 962:
#line 2315 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 963:
#line 2317 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 964:
#line 2319 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 965:
#line 2321 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 966:
#line 2322 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 967:
#line 2323 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 968:
#line 2325 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 969:
#line 2327 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 970:
#line 2330 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 971:
#line 2332 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 972:
#line 2334 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 973:
#line 2335 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 974:
#line 2336 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 975:
#line 2337 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 976:
#line 2339 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 977:
#line 2340 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 978:
#line 2341 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 979:
#line 2342 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 980:
#line 2343 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 981:
#line 2345 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 982:
#line 2347 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 983:
#line 2348 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 984:
#line 2350 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 985:
#line 2352 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 986:
#line 2354 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 987:
#line 2355 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 988:
#line 2357 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 989:
#line 2359 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 990:
#line 2360 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 991:
#line 2361 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 992:
#line 2362 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 993:
#line 2364 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 994:
#line 2366 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 995:
#line 2369 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 996:
#line 2372 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 997:
#line 2373 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 998:
#line 2374 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 999:
#line 2376 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1000:
#line 2379 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1001:
#line 2382 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1002:
#line 2383 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1003:
#line 2384 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1004:
#line 2385 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1005:
#line 2387 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1006:
#line 2389 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1007:
#line 2391 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1008:
#line 2392 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1009:
#line 2394 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1010:
#line 2395 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1011:
#line 2396 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1012:
#line 2397 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1013:
#line 2398 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1014:
#line 2400 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1015:
#line 2402 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1016:
#line 2404 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1017:
#line 2406 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1019:
#line 2408 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1020:
#line 2409 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1021:
#line 2411 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1022:
#line 2413 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1023:
#line 2414 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1024:
#line 2415 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1026:
#line 2417 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1028:
#line 2421 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1029:
#line 2422 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1030:
#line 2423 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1031:
#line 2424 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1032:
#line 2425 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1033:
#line 2426 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1034:
#line 2428 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1035:
#line 2429 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1036:
#line 2431 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1037:
#line 2434 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1038:
#line 2435 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1039:
#line 2436 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1040:
#line 2437 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1041:
#line 2440 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1042:
#line 2441 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1043:
#line 2444 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1044:
#line 2445 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1045:
#line 2448 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1046:
#line 2449 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1047:
#line 2452 "frame/parser.Y"
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

  case 1048:
#line 2465 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1049:
#line 2466 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1050:
#line 2470 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1051:
#line 2471 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1052:
#line 2475 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1053:
#line 2476 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1054:
#line 2481 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer),
	    0, propQMask, propQValue, taglist);;}
    break;

  case 1055:
#line 2486 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer),
	    1, propQMask, propQValue, taglist);;}
    break;

  case 1056:
#line 2492 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1057:
#line 2494 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1058:
#line 2497 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1059:
#line 2499 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1060:
#line 2502 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].dash), (yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].str));;}
    break;

  case 1061:
#line 2505 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1062:
#line 2506 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1063:
#line 2507 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1064:
#line 2508 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1065:
#line 2509 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1066:
#line 2510 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1067:
#line 2512 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1070:
#line 2519 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1071:
#line 2520 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1072:
#line 2521 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1073:
#line 2522 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1074:
#line 2523 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1075:
#line 2524 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1078:
#line 2529 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1079:
#line 2530 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1080:
#line 2531 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1081:
#line 2532 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1082:
#line 2533 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1083:
#line 2534 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1084:
#line 2535 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1085:
#line 2536 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1086:
#line 2537 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1087:
#line 2538 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1088:
#line 2539 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1091:
#line 2546 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1092:
#line 2547 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1094:
#line 2550 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1095:
#line 2551 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1096:
#line 2552 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1097:
#line 2553 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1098:
#line 2556 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1099:
#line 2557 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1102:
#line 2565 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1103:
#line 2568 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1104:
#line 2569 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1108:
#line 2576 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1109:
#line 2579 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1110:
#line 2583 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1111:
#line 2584 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1112:
#line 2585 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1113:
#line 2586 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1114:
#line 2587 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1115:
#line 2588 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1116:
#line 2589 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1117:
#line 2590 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1118:
#line 2596 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1119:
#line 2597 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1120:
#line 2598 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1121:
#line 2599 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1122:
#line 2603 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1123:
#line 2604 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1124:
#line 2606 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1125:
#line 2611 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1127:
#line 2613 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1129:
#line 2615 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1130:
#line 2618 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1131:
#line 2620 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1132:
#line 2625 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1133:
#line 2628 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1134:
#line 2629 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1135:
#line 2630 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1136:
#line 2633 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1137:
#line 2635 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1138:
#line 2639 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1139:
#line 2640 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1140:
#line 2644 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1141:
#line 2645 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1142:
#line 2646 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1143:
#line 2647 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1144:
#line 2653 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1145:
#line 2654 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1146:
#line 2660 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1147:
#line 2661 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1148:
#line 2662 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1149:
#line 2663 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1152:
#line 2671 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1153:
#line 2673 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1154:
#line 2674 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1155:
#line 2675 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1156:
#line 2679 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1157:
#line 2680 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1158:
#line 2681 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1159:
#line 2682 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1160:
#line 2685 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1161:
#line 2686 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1162:
#line 2689 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1163:
#line 2690 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1164:
#line 2691 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1165:
#line 2694 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1166:
#line 2695 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1167:
#line 2696 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1168:
#line 2699 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1169:
#line 2700 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1171:
#line 2702 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1172:
#line 2703 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1173:
#line 2706 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1174:
#line 2707 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1175:
#line 2708 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1180:
#line 2715 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1181:
#line 2719 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1182:
#line 2721 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1183:
#line 2723 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1185:
#line 2728 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1186:
#line 2730 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1187:
#line 2732 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1197:
#line 2745 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1198:
#line 2746 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1199:
#line 2747 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1200:
#line 2750 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1201:
#line 2751 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1202:
#line 2752 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1203:
#line 2755 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1204:
#line 2756 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1205:
#line 2757 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1206:
#line 2760 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1207:
#line 2761 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1208:
#line 2762 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1210:
#line 2766 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1211:
#line 2767 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1212:
#line 2768 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1213:
#line 2771 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1214:
#line 2772 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1215:
#line 2773 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1216:
#line 2776 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1217:
#line 2777 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1218:
#line 2778 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1219:
#line 2781 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1220:
#line 2782 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1221:
#line 2783 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1222:
#line 2786 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1223:
#line 2787 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1224:
#line 2788 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1225:
#line 2792 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1226:
#line 2794 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1227:
#line 2796 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1228:
#line 2800 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1229:
#line 2804 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1230:
#line 2806 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1231:
#line 2810 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1232:
#line 2813 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1233:
#line 2814 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1234:
#line 2815 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1235:
#line 2816 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1236:
#line 2819 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1237:
#line 2821 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1238:
#line 2822 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1239:
#line 2824 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1241:
#line 2828 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1242:
#line 2829 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1243:
#line 2830 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1244:
#line 2833 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1245:
#line 2834 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1246:
#line 2838 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1248:
#line 2840 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1251:
#line 2845 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1252:
#line 2846 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1253:
#line 2847 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1254:
#line 2850 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1255:
#line 2851 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1256:
#line 2852 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1257:
#line 2855 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1258:
#line 2857 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1259:
#line 2862 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1260:
#line 2865 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1261:
#line 2872 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1262:
#line 2874 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1263:
#line 2876 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1264:
#line 2881 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1266:
#line 2885 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1267:
#line 2886 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1268:
#line 2887 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1269:
#line 2889 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1270:
#line 2891 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1271:
#line 2896 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 10984 "frame/parser.C"
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


#line 2900 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

