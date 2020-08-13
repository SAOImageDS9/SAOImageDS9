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
#define YYLAST   5812

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  358
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  220
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1275
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2807

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
    2415,  2418,  2420,  2424,  2429,  2432,  2433,  2437,  2439,  2442,
    2445,  2448,  2451,  2454,  2459,  2464,  2469,  2473,  2478,  2484,
    2493,  2500,  2505,  2515,  2522,  2530,  2541,  2553,  2566,  2576,
    2582,  2587,  2594,  2598,  2604,  2610,  2617,  2623,  2628,  2638,
    2649,  2661,  2671,  2678,  2685,  2692,  2699,  2706,  2713,  2720,
    2727,  2734,  2742,  2750,  2753,  2758,  2763,  2768,  2773,  2779,
    2784,  2789,  2795,  2801,  2805,  2810,  2815,  2820,  2825,  2833,
    2843,  2850,  2861,  2873,  2886,  2896,  2900,  2903,  2907,  2913,
    2921,  2926,  2930,  2934,  2941,  2949,  2957,  2962,  2967,  2972,
    2982,  2987,  2991,  2996,  3004,  3012,  3015,  3019,  3023,  3027,
    3032,  3035,  3038,  3043,  3054,  3058,  3060,  3064,  3067,  3070,
    3073,  3076,  3080,  3086,  3091,  3097,  3100,  3103,  3106,  3109,
    3113,  3116,  3119,  3122,  3126,  3129,  3133,  3138,  3142,  3146,
    3153,  3158,  3161,  3165,  3168,  3171,  3176,  3180,  3184,  3187,
    3191,  3193,  3196,  3198,  3201,  3204,  3207,  3209,  3211,  3213,
    3215,  3218,  3220,  3223,  3226,  3228,  3231,  3234,  3236,  3239,
    3241,  3243,  3245,  3247,  3249,  3251,  3253,  3255,  3256,  3258,
    3261,  3264,  3267,  3271,  3277,  3285,  3293,  3300,  3307,  3314,
    3321,  3327,  3334,  3341,  3348,  3355,  3362,  3369,  3376,  3388,
    3396,  3404,  3412,  3422,  3432,  3443,  3456,  3469,  3472,  3475,
    3479,  3484,  3489,  3494,  3497,  3498,  3500,  3502,  3507,  3512,
    3514,  3516,  3518,  3520,  3522,  3524,  3526,  3528,  3531,  3533,
    3535,  3537,  3541,  3545,  3554,  3561,  3572,  3580,  3588,  3594,
    3597,  3600,  3604,  3609,  3615,  3619,  3625,  3631,  3635,  3640,
    3646,  3652,  3658,  3662,  3668,  3671,  3675,  3679,  3685,  3689,
    3693,  3697,  3702,  3708,  3714,  3718,  3724,  3730,  3734,  3739,
    3745,  3751,  3754,  3757,  3761,  3767,  3774,  3781,  3785,  3789,
    3793,  3800,  3806,  3812,  3815,  3819,  3823,  3829,  3836,  3840,
    3843,  3846,  3850,  3853,  3857,  3860,  3864,  3870,  3877,  3880,
    3883,  3886,  3888,  3893,  3898,  3900,  3903,  3906,  3909,  3912,
    3915,  3918,  3921,  3925,  3928,  3932,  3935,  3939,  3941,  3943,
    3945,  3947,  3949,  3950,  3953,  3954,  3957,  3958,  3960,  3961,
    3962,  3964,  3966,  3968,  3970,  3972,  3980,  3989,  3992,  3997,
    4000,  4005,  4012,  4015,  4017,  4019,  4023,  4027,  4029,  4034,
    4037,  4039,  4043,  4047,  4052,  4056,  4060,  4064,  4066,  4068,
    4070,  4072,  4074,  4076,  4078,  4080,  4082,  4084,  4086,  4088,
    4090,  4092,  4095,  4096,  4097,  4100,  4107,  4115,  4118,  4120,
    4124,  4126,  4130,  4132,  4135,  4138,  4140,  4144,  4145,  4146,
    4149,  4152,  4154,  4158,  4164,  4166,  4169,  4172,  4176,  4179,
    4182,  4185,  4188,  4190,  4192,  4194,  4196,  4201,  4204,  4208,
    4212,  4215,  4219,  4222,  4225,  4228,  4232,  4236,  4240,  4243,
    4247,  4249,  4253,  4257,  4259,  4262,  4265,  4268,  4271,  4281,
    4288,  4290,  4292,  4294,  4296,  4299,  4302,  4306,  4310,  4312,
    4315,  4319,  4323,  4325,  4328,  4330,  4332,  4334,  4336,  4338,
    4341,  4344,  4349,  4351,  4354,  4357,  4360,  4364,  4366,  4368,
    4370,  4373,  4376,  4379,  4382,  4385,  4389,  4393,  4397,  4401,
    4405,  4409,  4413,  4415,  4418,  4421,  4424,  4428,  4431,  4435,
    4439,  4442,  4445,  4448,  4451,  4454,  4457,  4460,  4463,  4466,
    4469,  4472,  4475,  4478,  4481,  4485,  4489,  4493,  4496,  4499,
    4502,  4505,  4508,  4511,  4514,  4517,  4520,  4523,  4526,  4529,
    4533,  4537,  4541,  4546,  4553,  4556,  4558,  4560,  4562,  4564,
    4566,  4567,  4573,  4575,  4582,  4586,  4588,  4591,  4594,  4597,
    4601,  4605,  4608,  4611,  4614,  4617,  4620,  4623,  4627,  4630,
    4633,  4637,  4639,  4643,  4648,  4650,  4653,  4659,  4666,  4673,
    4676,  4678,  4681,  4684,  4690,  4697
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
     182,   496,    -1,   183,   497,    -1,   186,   514,   498,    -1,
     187,   534,    -1,   200,    67,     5,    -1,   217,   535,    -1,
     218,   536,    -1,   219,   539,    -1,   240,    89,    -1,   233,
     541,    -1,   231,   540,    -1,   248,    -1,   244,   514,   543,
      -1,   250,   548,    -1,   252,   549,    -1,   257,   551,    -1,
     271,    -1,   277,   566,    -1,   292,     4,    -1,   293,   388,
      -1,   304,    -1,   306,   568,    -1,   312,    -1,   315,   570,
      -1,   316,   571,    -1,   346,   575,    -1,   353,   576,    -1,
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
     189,   546,    -1,    37,   547,    -1,   258,   360,    -1,   294,
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
     164,    16,    -1,   190,    -1,   186,   514,   508,    -1,   187,
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
      74,   507,     5,    -1,    74,   507,   309,     5,    -1,    76,
     101,    -1,    -1,    84,   499,   502,    -1,    90,    -1,   101,
     505,    -1,   107,   506,    -1,   116,     4,    -1,   131,     5,
      -1,   152,    17,    -1,   152,   215,   360,   360,    -1,   152,
     298,   360,   360,    -1,     4,    20,   385,   362,    -1,     4,
      21,   365,    -1,     4,    21,   365,   372,    -1,     4,    21,
     365,   370,   377,    -1,     4,    22,   242,   360,   360,     4,
     370,   379,    -1,     4,    22,   242,     5,   370,   379,    -1,
       4,    49,   123,   362,    -1,     4,    50,   242,   360,   360,
     360,     4,   370,   379,    -1,     4,    50,   242,     5,   370,
     379,    -1,     4,    49,   242,   360,   360,   370,   379,    -1,
       4,    53,   107,   365,   365,     4,   360,   360,   360,     4,
      -1,     4,    53,   107,   365,   365,     4,   360,   360,   360,
       4,   372,    -1,     4,    53,   107,   365,   365,     4,   360,
     360,   360,     4,   370,   377,    -1,     4,    53,   107,     5,
       5,   370,   377,   370,   379,    -1,     4,    56,   500,     5,
       5,    -1,     4,    63,   123,   362,    -1,     4,    63,   242,
     360,   370,   379,    -1,     4,    67,     5,    -1,     4,    75,
      27,   362,   362,    -1,     4,    75,   169,     5,     5,    -1,
       4,    75,   242,   360,   370,   379,    -1,     4,    75,   287,
     370,   377,    -1,     4,    76,   141,   362,    -1,     4,    83,
     107,   365,   365,     4,   360,   360,     4,    -1,     4,    83,
     107,   365,   365,     4,   360,   360,     4,   372,    -1,     4,
      83,   107,   365,   365,     4,   360,   360,     4,   370,   377,
      -1,     4,    83,   107,     5,     5,   370,   377,   370,   379,
      -1,     4,    84,    22,   242,   360,   360,    -1,     4,    84,
      50,   242,   360,   360,    -1,     4,    84,    53,    21,   360,
     360,    -1,     4,    84,    53,   242,   360,   360,    -1,     4,
      84,   112,   242,   360,   360,    -1,     4,    84,   115,    21,
     360,   360,    -1,     4,    84,   115,   242,   360,   360,    -1,
       4,    84,    83,    21,   360,   360,    -1,     4,    84,    83,
     242,   360,   360,    -1,     4,    84,   230,   313,     4,   360,
     360,    -1,     4,    84,   263,   313,     4,   360,   360,    -1,
       4,   101,    -1,     4,   101,    22,     4,    -1,     4,   101,
      50,     4,    -1,     4,   101,    53,     4,    -1,     4,   101,
     112,     4,    -1,     4,   101,    56,   500,     5,    -1,     4,
     101,   115,     4,    -1,     4,   101,    83,     4,    -1,     4,
     101,   230,   313,     4,    -1,     4,   101,   263,   313,     4,
      -1,     4,   101,   289,    -1,     4,   101,   289,     5,    -1,
       4,   101,   289,     4,    -1,     4,   107,    40,     4,    -1,
       4,   111,   123,   362,    -1,     4,   111,   242,   360,   360,
     370,   379,    -1,     4,   112,   242,   360,   360,   360,     4,
     370,   379,    -1,     4,   112,   242,     5,   370,   379,    -1,
       4,   115,   107,   365,   365,     4,   360,   360,   360,     4,
      -1,     4,   115,   107,   365,   365,     4,   360,   360,   360,
       4,   372,    -1,     4,   115,   107,   365,   365,     4,   360,
     360,   360,     4,   370,   377,    -1,     4,   115,   107,     5,
       5,   370,   377,   370,   379,    -1,     4,   131,     5,    -1,
       4,   152,    -1,     4,   152,   215,    -1,     4,   175,    27,
     362,   362,    -1,     4,   175,   228,   370,   377,   369,   369,
      -1,     4,   198,   360,   360,    -1,     4,   198,   135,    -1,
       4,   198,    36,    -1,     4,   198,   297,   370,   377,   369,
      -1,     4,   230,   248,   360,   360,   370,   379,    -1,     4,
     263,   248,   360,   360,   370,   379,    -1,     4,   228,   267,
     383,    -1,     4,   228,   274,     4,    -1,     4,   230,   123,
     362,    -1,     4,   236,   370,   377,   369,   369,   360,   370,
     379,    -1,     4,   237,   520,   362,    -1,     4,   252,    40,
      -1,     4,   253,   132,     5,    -1,     4,   253,   228,   370,
     377,   369,   369,    -1,     4,   253,   287,   370,   377,   370,
     379,    -1,     4,   264,    -1,     4,   264,   215,    -1,     4,
     289,     5,    -1,     4,   291,     5,    -1,     4,   291,   252,
     362,    -1,     4,   303,    -1,     4,   305,    -1,     4,   311,
      27,   362,    -1,     4,   311,   228,   370,   377,   369,   370,
     379,   360,   365,    -1,     4,   345,     4,    -1,   167,    -1,
     167,   360,   360,    -1,   177,   515,    -1,   178,   516,    -1,
     198,   517,    -1,   235,   362,    -1,   237,   520,   362,    -1,
     237,   520,   362,   360,   360,    -1,   252,    40,   360,   360,
      -1,   252,   197,   360,   360,     4,    -1,   252,   113,    -1,
     257,   524,    -1,   264,   525,    -1,   271,   526,    -1,     5,
      67,     5,    -1,     5,    81,    -1,     5,   101,    -1,     5,
      90,    -1,     5,   131,     5,    -1,     5,   152,    -1,     5,
     152,   215,    -1,     5,   198,   360,   360,    -1,     5,   198,
     135,    -1,     5,   198,    36,    -1,     5,   198,   297,   370,
     377,   369,    -1,     5,   237,   520,   362,    -1,     5,   264,
      -1,     5,   264,   215,    -1,     5,   303,    -1,     5,   305,
      -1,   289,   107,     5,     5,    -1,   289,   101,     5,    -1,
     289,   101,    17,    -1,   289,     5,    -1,   289,   306,     5,
      -1,   221,    -1,   221,   370,    -1,   302,    -1,   303,    17,
      -1,   305,    17,    -1,   345,     4,    -1,   264,    -1,   305,
      -1,   152,    -1,   303,    -1,    40,   198,    -1,   198,    -1,
     113,   198,    -1,    40,   107,    -1,   107,    -1,   113,   107,
      -1,    40,   252,    -1,   252,    -1,   113,   252,    -1,   101,
      -1,   291,    -1,    67,    -1,   345,    -1,   237,    -1,   131,
      -1,   167,    -1,   306,    -1,    -1,     4,    -1,    30,   362,
      -1,   242,   360,    -1,   163,     4,    -1,   216,     4,   360,
      -1,    63,   360,   360,   360,   521,    -1,   111,   360,   360,
     360,   360,   364,   521,    -1,    49,   360,   360,   360,   360,
     364,   521,    -1,   230,   360,   360,   360,   360,   521,    -1,
     263,   360,   360,   360,   360,   521,    -1,   175,   360,   360,
     360,   360,   521,    -1,   311,   360,   360,   360,   360,   521,
      -1,   291,   360,   360,   364,   521,    -1,    63,   228,   360,
     360,   384,   521,    -1,    49,   228,   360,   360,   384,   521,
      -1,   104,   228,   360,   360,   384,   521,    -1,    86,   228,
     360,   360,   384,   521,    -1,   356,   228,   360,   360,   384,
     521,    -1,    27,   228,   360,   360,   384,   521,    -1,    52,
     228,   360,   360,   384,   521,    -1,   253,   360,   360,   360,
     360,   370,   377,   370,   379,     5,   521,    -1,    75,   360,
     360,   360,   370,   377,   521,    -1,   236,   360,   360,   360,
     360,   360,   521,    -1,    22,   360,   360,   360,   360,     4,
     521,    -1,   112,   360,   360,   360,   360,   360,     4,   364,
     521,    -1,    50,   360,   360,   360,   360,   360,     4,   364,
     521,    -1,    83,   360,   360,   365,   365,     4,   360,   360,
       4,   521,    -1,   115,   360,   360,   365,   365,     4,   360,
     360,   360,     4,   364,   521,    -1,    53,   360,   360,   365,
     365,     4,   360,   360,   360,     4,   364,   521,    -1,    76,
     521,    -1,   290,   503,    -1,     5,   360,   360,    -1,   309,
       5,   360,   360,    -1,   360,   360,   309,     5,    -1,     5,
     370,   377,   369,    -1,     4,     4,    -1,    -1,   264,    -1,
      17,    -1,    40,   360,   360,     4,    -1,   197,   360,   360,
       4,    -1,   113,    -1,   106,    -1,   347,    -1,    64,    -1,
     256,    -1,   255,    -1,   239,    -1,   348,    -1,    61,   509,
      -1,    67,    -1,   131,    -1,   116,    -1,   146,   360,   360,
      -1,   157,   360,   360,    -1,     4,    20,    83,     5,     5,
       5,   370,     4,    -1,     4,    20,   154,     5,     5,     4,
      -1,     4,    20,   226,     5,     5,     5,     5,   370,   377,
     386,    -1,     4,    20,   227,     5,     5,   370,   386,    -1,
       4,    20,   241,     5,     5,     5,   370,    -1,     4,    20,
     284,   370,   377,    -1,   157,    17,    -1,     4,    21,    -1,
       4,    21,   372,    -1,     4,    21,   370,   377,    -1,     4,
      22,   242,   370,   379,    -1,     4,    49,   123,    -1,     4,
      50,   242,   370,   379,    -1,     4,    49,   242,   370,   379,
      -1,     4,    53,    21,    -1,     4,    53,    21,   372,    -1,
       4,    53,    21,   370,   377,    -1,     4,    53,   242,   370,
     379,    -1,     4,    60,   370,   377,   378,    -1,     4,    63,
     123,    -1,     4,    63,   242,   370,   379,    -1,     4,    67,
      -1,     4,    75,    27,    -1,     4,    75,   169,    -1,     4,
      75,   242,   370,   379,    -1,     4,    75,   287,    -1,     4,
      76,   141,    -1,     4,    83,    21,    -1,     4,    83,    21,
     372,    -1,     4,    83,    21,   370,   377,    -1,     4,    83,
     242,   370,   379,    -1,     4,   111,   123,    -1,     4,   111,
     242,   370,   379,    -1,     4,   112,   242,   370,   379,    -1,
       4,   115,    21,    -1,     4,   115,    21,   372,    -1,     4,
     115,    21,   370,   377,    -1,     4,   115,   242,   370,   379,
      -1,     4,   131,    -1,     4,   152,    -1,     4,   175,    27,
      -1,     4,   175,   170,   370,   379,    -1,     4,   175,   228,
     370,   377,   378,    -1,     4,   184,   170,   360,   370,   379,
      -1,     4,   230,   123,    -1,     4,   228,   267,    -1,     4,
     228,   274,    -1,     4,   236,   228,   370,   377,   378,    -1,
       4,   236,   170,   370,   379,    -1,     4,   236,   295,   370,
     379,    -1,     4,   237,    -1,     4,   237,   520,    -1,     4,
     253,   132,    -1,     4,   253,   170,   370,   379,    -1,     4,
     253,   228,   370,   377,   378,    -1,     4,   253,   287,    -1,
       4,   264,    -1,     4,   289,    -1,     4,   289,     4,    -1,
       4,   291,    -1,     4,   291,   252,    -1,     4,   301,    -1,
       4,   311,    27,    -1,     4,   311,   170,   370,   379,    -1,
       4,   311,   228,   370,   377,   378,    -1,     4,   345,    -1,
     152,   510,    -1,   152,   211,    -1,   211,    -1,   230,   263,
     360,   360,    -1,   263,   263,   360,   360,    -1,   235,    -1,
     237,   520,    -1,   264,   511,    -1,   264,   211,    -1,   271,
     512,    -1,     5,    67,    -1,     5,   131,    -1,     5,   157,
      -1,     5,   237,   520,    -1,     5,   289,    -1,     5,   289,
     211,    -1,   289,    17,    -1,   289,   100,   199,    -1,   345,
      -1,    30,    -1,   242,    -1,   163,    -1,   216,    -1,    -1,
     360,   360,    -1,    -1,   360,   360,    -1,    -1,   291,    -1,
      -1,    -1,   229,    -1,   244,    -1,   307,    -1,    58,    -1,
     133,    -1,   507,   370,   377,   378,   362,   522,   529,    -1,
     264,   507,   370,   377,   378,   362,   522,   529,    -1,   507,
       5,    -1,   507,     5,   370,   377,    -1,   507,     4,    -1,
     507,     4,   370,   377,    -1,   126,     5,     5,   504,     4,
       5,    -1,   360,   360,    -1,   135,    -1,    36,    -1,    40,
     360,   360,    -1,   197,   360,   360,    -1,   113,    -1,   297,
     370,   377,   369,    -1,   518,   519,    -1,   519,    -1,   520,
     357,   362,    -1,    67,   357,     5,    -1,    94,   357,     4,
       4,    -1,   345,   357,     4,    -1,   131,   357,     5,    -1,
     291,   357,     5,    -1,   532,    -1,   533,    -1,   206,    -1,
     264,    -1,   152,    -1,    93,    -1,   128,    -1,   107,    -1,
     198,    -1,   252,    -1,   101,    -1,   160,    -1,   280,    -1,
     513,    -1,   513,   518,    -1,    -1,    -1,   523,   527,    -1,
       5,   507,   370,   377,   378,   362,    -1,   264,     5,   507,
     370,   377,   378,   362,    -1,   290,     5,    -1,    17,    -1,
     215,   360,   360,    -1,   298,    -1,   298,   360,   360,    -1,
     362,    -1,   291,   362,    -1,   527,   528,    -1,   528,    -1,
     520,   357,   362,    -1,    -1,    -1,   530,   531,    -1,   531,
     532,    -1,   532,    -1,   289,   357,     5,    -1,    56,   357,
     500,     5,     5,    -1,    65,    -1,    67,     5,    -1,   185,
     373,    -1,   243,   360,   360,    -1,   287,   370,    -1,   296,
     360,    -1,    46,   374,    -1,   185,     4,    -1,   356,    -1,
     354,    -1,   348,    -1,   206,    -1,   360,   360,   360,   360,
      -1,   360,   360,    -1,   372,   360,   360,    -1,   370,   377,
     369,    -1,   297,   537,    -1,    39,   360,   360,    -1,   197,
     538,    -1,   235,   362,    -1,   360,   360,    -1,   372,   360,
     360,    -1,   370,   377,   369,    -1,    40,   360,   360,    -1,
     360,   360,    -1,   113,   360,   360,    -1,   362,    -1,   316,
     371,   377,    -1,     5,     4,     4,    -1,   306,    -1,    71,
     542,    -1,   171,     4,    -1,   249,     4,    -1,   258,   360,
      -1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
      -1,     4,     4,     4,     4,     4,     4,    -1,    55,    -1,
     143,    -1,   250,    -1,    91,    -1,   152,   544,    -1,   264,
     545,    -1,    40,   360,   360,    -1,   197,   360,   360,    -1,
     113,    -1,   269,   113,    -1,    40,   360,   360,    -1,   197,
     360,   360,    -1,   113,    -1,   269,   113,    -1,   192,    -1,
      13,    -1,   206,    -1,    34,    -1,   109,    -1,    62,     5,
      -1,   287,   370,    -1,   310,     4,     4,     4,    -1,   360,
      -1,   360,    99,    -1,   197,   550,    -1,   297,   360,    -1,
     297,   360,    99,    -1,    40,    -1,   360,    -1,   113,    -1,
      26,   552,    -1,   126,   554,    -1,   210,   564,    -1,   114,
     565,    -1,   223,     5,    -1,   122,     5,   387,    -1,    62,
       5,   387,    -1,   278,     4,   387,    -1,   250,    88,   553,
      -1,   122,     5,   387,    -1,    62,     5,   387,    -1,   278,
       4,   387,    -1,   555,    -1,   159,   555,    -1,   288,   556,
      -1,   275,   557,    -1,   119,    88,   558,    -1,   195,   559,
      -1,   250,   159,   561,    -1,   250,    88,   562,    -1,   246,
     563,    -1,   122,     5,    -1,    62,     5,    -1,   278,     4,
      -1,   122,     5,    -1,    62,     5,    -1,   278,     4,    -1,
     122,     5,    -1,    62,     5,    -1,   278,     4,    -1,   122,
       5,    -1,    62,     5,    -1,   278,     4,    -1,   159,   560,
      -1,   122,     5,     4,    -1,    62,     5,     4,    -1,   278,
       4,     4,    -1,   122,     5,    -1,    62,     5,    -1,   278,
       4,    -1,   122,     5,    -1,    62,     5,    -1,   278,     4,
      -1,   122,     5,    -1,    62,     5,    -1,   278,     4,    -1,
     122,     5,    -1,    62,     5,    -1,   278,     4,    -1,   122,
       5,   387,    -1,    62,     5,   387,    -1,   278,     4,   387,
      -1,   122,     5,     5,   387,    -1,   567,     4,     4,   360,
     360,   365,    -1,   567,     4,    -1,   101,    -1,    51,    -1,
     299,    -1,   139,    -1,   110,    -1,    -1,     4,   360,   360,
     360,   360,    -1,   209,    -1,   209,     4,   360,   360,   360,
     360,    -1,   126,   275,   569,    -1,     4,    -1,     4,     4,
      -1,   360,   370,    -1,   360,   360,    -1,   297,   360,   360,
      -1,   371,   377,   378,    -1,    16,   574,    -1,   248,     4,
      -1,   245,   573,    -1,    23,   572,    -1,     4,     4,    -1,
       4,     5,    -1,   291,     4,     5,    -1,     4,     4,    -1,
       4,     5,    -1,   291,     4,     5,    -1,     4,    -1,     4,
     371,   377,    -1,     4,     6,   371,   377,    -1,   234,    -1,
     360,   360,    -1,   360,   360,    12,   360,   360,    -1,   360,
     360,    12,   372,   360,   360,    -1,   360,   360,    12,   370,
     377,   369,    -1,   297,   577,    -1,   125,    -1,   125,   360,
      -1,   360,   360,    -1,   360,   360,    12,   360,   360,    -1,
     360,   360,    12,   372,   360,   360,    -1,   360,   360,    12,
     370,   377,   369,    -1
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
    1754,  1755,  1757,  1758,  1760,  1763,  1766,  1767,  1768,  1771,
    1774,  1777,  1778,  1782,  1785,  1788,  1791,  1795,  1800,  1805,
    1807,  1808,  1810,  1811,  1813,  1815,  1817,  1819,  1820,  1822,
    1824,  1828,  1833,  1835,  1837,  1839,  1841,  1843,  1845,  1847,
    1849,  1851,  1853,  1856,  1857,  1859,  1861,  1862,  1864,  1866,
    1867,  1868,  1870,  1872,  1873,  1874,  1876,  1877,  1878,  1881,
    1885,  1888,  1891,  1895,  1900,  1906,  1907,  1908,  1910,  1911,
    1915,  1917,  1918,  1919,  1922,  1925,  1928,  1930,  1932,  1933,
    1938,  1941,  1942,  1943,  1946,  1950,  1951,  1953,  1954,  1955,
    1957,  1958,  1960,  1961,  1966,  1968,  1969,  1971,  1972,  1973,
    1974,  1975,  1976,  1978,  1980,  1982,  1983,  1984,  1986,  1988,
    1989,  1990,  1991,  1992,  1993,  1994,  1995,  1996,  1997,  1998,
    2000,  2002,  2003,  2004,  2005,  2007,  2008,  2009,  2010,  2011,
    2013,  2014,  2015,  2016,  2017,  2018,  2021,  2022,  2023,  2024,
    2025,  2026,  2027,  2028,  2029,  2030,  2031,  2032,  2033,  2034,
    2035,  2036,  2037,  2038,  2039,  2040,  2041,  2044,  2045,  2046,
    2047,  2048,  2049,  2057,  2064,  2073,  2082,  2089,  2096,  2104,
    2112,  2119,  2124,  2129,  2134,  2139,  2144,  2149,  2155,  2165,
    2175,  2185,  2192,  2202,  2212,  2221,  2233,  2246,  2251,  2254,
    2256,  2258,  2263,  2267,  2270,  2271,  2272,  2278,  2280,  2282,
    2285,  2286,  2287,  2288,  2289,  2290,  2291,  2294,  2295,  2296,
    2297,  2298,  2299,  2301,  2303,  2305,  2307,  2309,  2311,  2314,
    2315,  2316,  2317,  2319,  2322,  2323,  2325,  2327,  2328,  2329,
    2331,  2334,  2337,  2338,  2340,  2341,  2342,  2343,  2345,  2346,
    2347,  2348,  2349,  2351,  2353,  2354,  2356,  2359,  2360,  2361,
    2363,  2365,  2366,  2367,  2368,  2370,  2373,  2377,  2378,  2379,
    2380,  2383,  2386,  2388,  2389,  2390,  2391,  2393,  2396,  2397,
    2399,  2400,  2401,  2402,  2403,  2405,  2406,  2408,  2411,  2412,
    2413,  2414,  2415,  2417,  2419,  2420,  2421,  2422,  2424,  2426,
    2427,  2428,  2429,  2430,  2431,  2433,  2434,  2436,  2439,  2440,
    2441,  2442,  2445,  2446,  2449,  2450,  2453,  2454,  2457,  2470,
    2471,  2475,  2476,  2480,  2481,  2484,  2488,  2494,  2496,  2499,
    2501,  2504,  2508,  2509,  2510,  2511,  2512,  2513,  2514,  2518,
    2519,  2522,  2523,  2524,  2525,  2526,  2527,  2528,  2529,  2532,
    2533,  2534,  2535,  2536,  2537,  2538,  2539,  2540,  2541,  2542,
    2545,  2546,  2549,  2550,  2550,  2553,  2555,  2557,  2560,  2561,
    2562,  2563,  2566,  2567,  2570,  2571,  2574,  2578,  2579,  2579,
    2582,  2583,  2586,  2589,  2593,  2594,  2595,  2596,  2597,  2598,
    2599,  2600,  2606,  2607,  2608,  2609,  2612,  2614,  2615,  2620,
    2622,  2623,  2624,  2625,  2628,  2629,  2634,  2638,  2639,  2640,
    2643,  2644,  2649,  2650,  2653,  2655,  2656,  2657,  2662,  2664,
    2670,  2671,  2672,  2673,  2676,  2677,  2680,  2682,  2684,  2685,
    2688,  2690,  2691,  2692,  2695,  2696,  2699,  2700,  2701,  2704,
    2705,  2706,  2709,  2710,  2711,  2712,  2713,  2716,  2717,  2718,
    2721,  2722,  2723,  2724,  2725,  2728,  2730,  2732,  2734,  2737,
    2739,  2741,  2744,  2745,  2746,  2747,  2748,  2749,  2750,  2751,
    2752,  2755,  2756,  2757,  2760,  2761,  2762,  2765,  2766,  2767,
    2770,  2771,  2772,  2775,  2776,  2777,  2778,  2781,  2782,  2783,
    2786,  2787,  2788,  2791,  2792,  2793,  2796,  2797,  2798,  2801,
    2803,  2805,  2809,  2813,  2815,  2820,  2823,  2824,  2825,  2826,
    2829,  2830,  2832,  2833,  2835,  2838,  2839,  2840,  2843,  2844,
    2847,  2849,  2850,  2851,  2852,  2855,  2856,  2857,  2860,  2861,
    2862,  2865,  2866,  2871,  2875,  2882,  2883,  2885,  2890,  2892,
    2895,  2896,  2897,  2898,  2900,  2905
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
  "markerCreateTemplate", "markerDash", "markerDelete", "markerEdit",
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
     498,   498,   498,   498,   498,   498,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   501,   501,   501,
     501,   501,   501,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   503,
     503,   503,   503,   504,   505,   505,   505,   506,   506,   506,
     507,   507,   507,   507,   507,   507,   507,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   509,   509,
     509,   509,   510,   510,   511,   511,   512,   512,   513,   514,
     514,   514,   514,   514,   514,   515,   515,   516,   516,   516,
     516,   516,   517,   517,   517,   517,   517,   517,   517,   518,
     518,   519,   519,   519,   519,   519,   519,   519,   519,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     521,   521,   522,   523,   522,   524,   524,   524,   525,   525,
     525,   525,   526,   526,   527,   527,   528,   529,   530,   529,
     531,   531,   532,   533,   534,   534,   534,   534,   534,   534,
     534,   534,   535,   535,   535,   535,   536,   536,   536,   536,
     536,   536,   536,   536,   537,   537,   537,   538,   538,   538,
     539,   539,   539,   539,   540,   540,   540,   540,   541,   541,
     542,   542,   542,   542,   543,   543,   544,   544,   544,   544,
     545,   545,   545,   545,   546,   546,   547,   547,   547,   548,
     548,   548,   549,   549,   549,   549,   549,   550,   550,   550,
     551,   551,   551,   551,   551,   552,   552,   552,   552,   553,
     553,   553,   554,   554,   554,   554,   554,   554,   554,   554,
     554,   555,   555,   555,   556,   556,   556,   557,   557,   557,
     558,   558,   558,   559,   559,   559,   559,   560,   560,   560,
     561,   561,   561,   562,   562,   562,   563,   563,   563,   564,
     564,   564,   565,   566,   566,   566,   567,   567,   567,   567,
     568,   568,   568,   568,   568,   569,   569,   569,   570,   570,
     571,   571,   571,   571,   571,   572,   572,   572,   573,   573,
     573,   574,   574,   574,   575,   576,   576,   576,   576,   576,
     577,   577,   577,   577,   577,   577
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
       2,     1,     3,     4,     2,     0,     3,     1,     2,     2,
       2,     2,     2,     4,     4,     4,     3,     4,     5,     8,
       6,     4,     9,     6,     7,    10,    11,    12,     9,     5,
       4,     6,     3,     5,     5,     6,     5,     4,     9,    10,
      11,     9,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     7,     7,     2,     4,     4,     4,     4,     5,     4,
       4,     5,     5,     3,     4,     4,     4,     4,     7,     9,
       6,    10,    11,    12,     9,     3,     2,     3,     5,     7,
       4,     3,     3,     6,     7,     7,     4,     4,     4,     9,
       4,     3,     4,     7,     7,     2,     3,     3,     3,     4,
       2,     2,     4,    10,     3,     1,     3,     2,     2,     2,
       2,     3,     5,     4,     5,     2,     2,     2,     2,     3,
       2,     2,     2,     3,     2,     3,     4,     3,     3,     6,
       4,     2,     3,     2,     2,     4,     3,     3,     2,     3,
       1,     2,     1,     2,     2,     2,     1,     1,     1,     1,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     2,
       2,     2,     3,     5,     7,     7,     6,     6,     6,     6,
       5,     6,     6,     6,     6,     6,     6,     6,    11,     7,
       7,     7,     9,     9,    10,    12,    12,     2,     2,     3,
       4,     4,     4,     2,     0,     1,     1,     4,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     3,     3,     8,     6,    10,     7,     7,     5,     2,
       2,     3,     4,     5,     3,     5,     5,     3,     4,     5,
       5,     5,     3,     5,     2,     3,     3,     5,     3,     3,
       3,     4,     5,     5,     3,     5,     5,     3,     4,     5,
       5,     2,     2,     3,     5,     6,     6,     3,     3,     3,
       6,     5,     5,     2,     3,     3,     5,     6,     3,     2,
       2,     3,     2,     3,     2,     3,     5,     6,     2,     2,
       2,     1,     4,     4,     1,     2,     2,     2,     2,     2,
       2,     2,     3,     2,     3,     2,     3,     1,     1,     1,
       1,     1,     0,     2,     0,     2,     0,     1,     0,     0,
       1,     1,     1,     1,     1,     7,     8,     2,     4,     2,
       4,     6,     2,     1,     1,     3,     3,     1,     4,     2,
       1,     3,     3,     4,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     0,     0,     2,     6,     7,     2,     1,     3,
       1,     3,     1,     2,     2,     1,     3,     0,     0,     2,
       2,     1,     3,     5,     1,     2,     2,     3,     2,     2,
       2,     2,     1,     1,     1,     1,     4,     2,     3,     3,
       2,     3,     2,     2,     2,     3,     3,     3,     2,     3,
       1,     3,     3,     1,     2,     2,     2,     2,     9,     6,
       1,     1,     1,     1,     2,     2,     3,     3,     1,     2,
       3,     3,     1,     2,     1,     1,     1,     1,     1,     2,
       2,     4,     1,     2,     2,     2,     3,     1,     1,     1,
       2,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     1,     2,     2,     2,     3,     2,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     3,     3,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       3,     3,     4,     6,     2,     1,     1,     1,     1,     1,
       0,     5,     1,     6,     3,     1,     2,     2,     2,     3,
       3,     2,     2,     2,     2,     2,     2,     3,     2,     2,
       3,     1,     3,     4,     1,     2,     5,     6,     6,     2,
       1,     2,     2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     8,     9,     0,     0,     0,     0,
       0,   310,     0,     0,     0,     0,     0,     0,     0,     0,
      23,     0,     0,     0,     0,     0,     0,     0,  1049,     0,
       0,     0,     0,     0,     0,     0,     0,  1049,    41,     0,
       0,     0,    46,     0,     0,     0,    50,  1240,    52,     0,
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
       0,   479,     0,     0,     0,     0,     0,     0,  1049,     0,
     358,     0,   362,     0,     0,     0,   366,     0,   368,     0,
     370,     0,     0,   514,   374,    20,     0,   520,    21,   525,
       0,     0,   544,   529,   530,   531,   532,   546,   534,   535,
     539,   536,     0,   538,   540,     0,     0,    22,     0,    24,
       0,   561,     0,     0,     0,   566,     0,    26,     0,     0,
       0,     0,     0,     0,     0,    28,   720,    29,     0,     0,
       0,     0,     0,     0,   721,    30,     0,    31,  1053,  1054,
    1050,  1051,  1052,     0,   138,  1114,     0,   132,     0,     0,
       0,    33,     0,  1125,  1124,  1123,  1122,    35,     0,     0,
       0,     0,     0,   156,     0,    36,     0,  1143,     0,  1140,
      37,     0,     0,     0,     0,    40,     0,    39,    38,     0,
       0,     0,     0,    43,     0,     0,  1172,    44,     0,     0,
       0,     0,     0,    45,  1236,  1235,  1239,  1238,  1237,    47,
       0,    48,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,  1242,    51,     0,     0,    53,     0,     0,
       0,     0,   156,    54,  1264,    55,     0,     0,    56,     1,
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
       0,     0,     0,   897,     0,     0,     0,   731,   735,   737,
     934,     0,     0,     0,     0,   835,     0,     0,     0,   870,
       0,     0,     0,     0,     0,     0,     0,   872,     0,     0,
       0,    32,   141,   142,   140,   139,  1120,  1115,  1121,   135,
     136,   134,   137,   133,  1116,     0,  1118,  1119,    34,     0,
       0,     0,     0,  1132,  1133,     0,   156,     0,  1130,  1127,
       0,     0,     0,   156,  1150,  1153,  1151,  1152,  1144,  1145,
    1146,  1147,     0,     0,     0,    42,  1169,  1170,     0,  1177,
    1179,  1178,  1174,  1175,  1173,     0,     0,     0,     0,  1180,
       0,  1183,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1181,  1192,     0,     0,     0,  1182,  1184,  1234,
    1167,  1168,  1166,   210,     0,   213,   206,     0,   215,   207,
       0,   217,   208,  1165,  1164,   209,   211,   212,     0,     0,
     205,     0,     0,     0,     0,  1248,  1261,  1251,     0,     0,
    1254,     0,     0,  1253,  1252,   164,  1270,     0,  1269,  1265,
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
     446,     0,     0,     0,     0,   948,   950,   949,     0,  1042,
       0,  1021,     0,  1024,     0,     0,  1044,  1046,     0,  1037,
     359,     0,   495,   497,   507,   500,   509,   501,   511,   502,
     513,   499,     0,     0,   518,   515,   516,   164,   543,   555,
     556,   557,   559,     0,   572,   560,     0,     0,     0,     0,
       0,     0,   177,   177,   171,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   174,   174,   171,     0,     0,   171,
       0,     0,     0,     0,     0,   614,   638,     0,     0,     0,
     610,     0,     0,     0,     0,   177,   171,     0,     0,   715,
       0,   725,   726,   156,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   783,     0,     0,
       0,     0,     0,   806,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   825,     0,     0,   830,   831,     0,     0,
       0,   850,   852,   851,     0,   854,     0,     0,   861,   863,
     864,   898,     0,     0,     0,     0,   729,   730,   942,   940,
     945,   944,   943,   941,   946,     0,   734,     0,   936,   935,
     738,     0,   939,     0,   739,   740,   741,   742,     0,     0,
       0,     0,     0,   837,     0,     0,   838,  1064,     0,  1067,
    1063,     0,     0,     0,   839,   871,   840,  1082,  1087,  1084,
    1083,  1081,  1088,  1085,  1079,  1086,  1080,  1089,     0,     0,
     845,     0,     0,     0,     0,   846,  1098,     0,  1100,   847,
       0,  1102,   848,   868,     0,     0,     0,   873,   874,   875,
    1117,  1131,     0,     0,  1138,  1134,     0,     0,     0,  1129,
    1128,  1142,  1141,     0,     0,  1158,     0,     0,  1154,     0,
    1162,     0,     0,  1155,     0,  1176,   199,   199,     0,   199,
       0,  1202,     0,  1201,  1193,     0,     0,     0,     0,  1197,
       0,     0,     0,  1200,     0,     0,     0,     0,     0,  1195,
    1203,     0,     0,     0,  1194,   199,   199,   199,     0,   214,
     216,   218,     0,   219,     0,    58,     0,  1244,     0,  1249,
       0,   156,  1255,  1256,     0,  1258,  1259,     0,   165,   166,
    1250,  1271,  1272,     0,   222,     0,   236,     0,     0,     0,
       0,   270,     0,     0,     0,     0,     0,     0,     0,     0,
     308,   156,     0,     0,     0,     0,   156,     0,   328,     0,
     327,   385,   384,     0,     0,     0,   156,     0,   164,   430,
     428,   432,   436,     0,     0,     0,   164,     0,    84,    83,
     471,   455,     0,   466,   468,   167,     0,     0,   353,     0,
       0,    58,     0,   445,     0,     0,   960,     0,     0,     0,
       0,     0,     0,   974,     0,     0,     0,     0,     0,     0,
     991,   992,     0,     0,     0,     0,     0,  1003,     0,  1009,
    1010,  1012,  1014,     0,  1018,  1029,  1030,  1031,     0,  1033,
    1038,  1040,  1041,  1039,   947,     0,  1020,     0,  1019,   959,
       0,     0,  1025,     0,  1027,     0,  1026,  1047,  1028,  1035,
       0,     0,   371,     0,     0,   570,   571,     0,   568,   564,
       0,   177,   177,   177,   178,   179,   582,   583,   173,   172,
       0,   177,   177,   177,     0,   588,   598,   174,   177,   177,
     177,   175,   176,   177,   177,     0,   177,   177,     0,   174,
       0,   611,     0,     0,     0,   637,     0,   636,     0,     0,
     613,     0,   612,     0,     0,     0,     0,   174,   174,   171,
       0,     0,   171,     0,     0,     0,   177,   177,   711,     0,
     177,   177,   716,     0,   190,   191,   192,   193,   194,   195,
       0,    88,    89,    87,   746,     0,     0,     0,     0,     0,
       0,   891,   889,   884,     0,   894,   878,   895,   881,   893,
     887,   876,   890,   879,   877,   896,   892,     0,     0,     0,
     762,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   793,     0,     0,     0,     0,     0,
     805,   807,     0,     0,   812,   811,     0,     0,   180,     0,
       0,     0,   156,     0,   821,     0,     0,     0,     0,   826,
     827,   828,     0,     0,     0,   834,   849,   853,   855,   858,
     857,     0,     0,     0,   862,   899,   901,     0,   900,   732,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1048,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   736,     0,     0,     0,     0,
     836,     0,   156,     0,  1059,  1057,     0,     0,   156,  1062,
     841,     0,     0,     0,     0,  1097,     0,     0,  1103,   866,
     867,     0,   869,  1137,  1139,  1136,  1135,  1126,     0,     0,
       0,  1159,     0,     0,  1163,  1171,   201,   202,   203,   204,
     200,  1186,  1185,     0,     0,     0,  1188,  1187,   199,     0,
       0,     0,  1196,     0,     0,     0,     0,     0,  1213,     0,
    1227,  1226,  1228,     0,     0,     0,  1199,     0,     0,     0,
    1198,  1208,  1207,  1209,  1205,  1204,  1206,  1230,  1229,  1231,
       0,     0,     0,  1246,  1247,     0,   156,  1262,  1257,  1260,
       0,     0,   156,     0,     0,     0,   233,     0,     0,     0,
       0,     0,     0,     0,     0,   305,   304,     0,     0,   296,
     307,   309,     0,   319,   321,   320,   318,   156,   326,     0,
       0,     0,   164,   156,     0,     0,     0,     0,   450,   464,
      82,    81,   473,     0,   467,   169,   170,   168,   460,     0,
     476,     0,     0,     0,   448,   442,     0,     0,     0,     0,
       0,     0,   156,   961,     0,   964,     0,     0,   967,     0,
     156,   972,     0,   975,   976,     0,   978,   979,   980,     0,
     984,     0,     0,   987,     0,   993,     0,     0,     0,   998,
     999,   997,     0,     0,     0,  1004,  1005,     0,     0,  1008,
    1011,  1013,  1015,     0,     0,  1032,  1034,   951,  1043,   952,
       0,     0,  1045,  1036,     0,     0,   523,   524,     0,     0,
     569,     0,   579,   580,   581,   177,   585,   586,   587,     0,
       0,     0,   592,   593,   171,     0,     0,     0,   177,   599,
     600,   601,   602,   604,   174,   607,   608,     0,   177,     0,
       0,     0,   174,   174,   171,     0,     0,     0,     0,   635,
       0,   639,     0,     0,     0,     0,     0,   174,   174,   171,
       0,     0,   171,     0,     0,     0,     0,     0,   174,   174,
     171,     0,     0,   171,     0,     0,     0,     0,     0,   174,
     174,   171,     0,     0,   171,     0,     0,     0,     0,   174,
     174,   171,     0,     0,     0,   174,   615,   616,   617,   618,
     620,     0,   623,   624,     0,   174,     0,     0,   709,   710,
     177,   713,   714,     0,   745,   156,   747,     0,     0,   751,
       0,     0,     0,     0,     0,   883,   880,   886,   885,   882,
     888,     0,   760,     0,     0,     0,     0,   156,   767,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   784,   785,   786,     0,   790,   787,   789,     0,
       0,   795,   794,   796,   797,     0,     0,     0,     0,     0,
       0,   156,   156,   810,   186,   182,   187,   181,   184,   183,
     185,   816,   817,   818,     0,     0,   820,   822,   156,   156,
       0,   829,   832,   156,   156,   856,   860,   902,   733,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1090,
     927,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   928,     0,     0,     0,     0,
       0,   743,   744,   156,   164,     0,   156,   156,  1065,  1066,
       0,     0,   843,     0,   156,     0,  1099,  1101,   865,     0,
    1156,  1157,  1160,  1161,   199,   199,   199,  1232,  1211,  1210,
    1212,  1215,  1214,  1218,  1217,  1219,  1216,  1224,  1223,  1225,
    1221,  1220,  1222,     0,     0,  1241,     0,  1263,     0,   156,
       0,  1266,     0,     0,   237,     0,   234,     0,     0,     0,
     274,     0,     0,     0,     0,   156,     0,   311,   144,     0,
     405,     0,   426,   164,   167,     0,     0,   439,     0,   477,
     478,     0,   443,     0,     0,     0,     0,     0,   156,   962,
     167,   167,   167,   156,   968,   167,   164,   167,   167,   156,
     981,   167,   167,   167,   156,   988,   167,   167,   156,     0,
     167,   156,   167,   167,   156,   167,   156,  1022,  1023,     0,
       0,   522,   565,     0,   584,   589,   590,   591,     0,   595,
     596,   597,   603,   177,   174,   609,   626,   627,   628,   629,
     630,     0,   632,   633,   174,     0,     0,     0,   174,   174,
     171,     0,     0,     0,     0,     0,     0,   174,   174,   171,
       0,     0,     0,     0,     0,     0,   174,   174,   171,     0,
       0,     0,   174,   177,   177,   177,   177,   177,     0,   177,
     177,     0,   174,   174,   177,   177,   177,   177,   177,     0,
     177,   177,     0,   174,   174,   689,   690,   691,   692,   694,
       0,   697,   698,     0,   174,   700,   701,   702,   703,   704,
       0,   706,   707,   174,   619,   174,     0,   625,     0,     0,
     712,     0,   748,   167,     0,     0,   167,     0,     0,     0,
     759,   167,   763,   764,   167,   766,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   788,
     791,   792,     0,   167,     0,     0,     0,   808,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1091,  1070,     0,  1077,  1078,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   156,     0,     0,    85,     0,     0,   937,   938,   164,
       0,     0,     0,  1060,  1058,  1068,   842,   844,   164,   156,
    1149,  1190,  1189,  1191,  1233,     0,  1243,  1273,     0,     0,
    1268,  1267,   238,     0,     0,     0,   279,     0,     0,     0,
     297,   167,   406,   410,   427,   429,     0,   437,   472,     0,
       0,     0,     0,     0,     0,   958,   963,   966,   965,   969,
     970,   971,   973,   977,   982,   983,   985,   986,   989,   990,
     994,   164,   167,  1001,   164,  1002,  1006,   164,  1016,   164,
       0,     0,   521,     0,   594,   605,   177,   174,   634,   177,
     177,   177,   177,   177,     0,   177,   177,   174,   177,   177,
     177,   177,   177,     0,   177,   177,   174,   177,   177,   177,
     177,   177,     0,   177,   177,   174,   177,   649,   650,   651,
     652,   654,   174,   657,   658,     0,   177,   177,   678,   679,
     680,   681,   683,   174,   686,   687,     0,   177,   693,   174,
       0,   699,   174,   708,   621,   174,   717,   718,   156,   750,
       0,   167,   753,     0,   156,     0,   761,   765,   156,     0,
     772,   773,   774,   775,   779,   780,   776,   777,   778,     0,
       0,   167,   800,     0,   156,     0,     0,   813,   167,     0,
       0,   167,   167,     0,   859,     0,   188,   188,     0,     0,
     188,     0,   188,  1048,     0,     0,     0,     0,     0,     0,
       0,     0,  1069,     0,     0,   188,   188,     0,     0,     0,
       0,     0,     0,     0,     0,   929,     0,     0,     0,  1048,
      86,     0,   188,     0,  1093,   933,     0,     0,   164,     0,
     220,  1275,  1274,     0,     0,   242,     0,     0,     0,     0,
     312,   438,   331,     0,   954,     0,   196,     0,   995,   996,
    1000,  1007,  1017,   364,   331,     0,   606,   631,   640,   641,
     642,   643,   644,   174,   646,   647,   177,   669,   670,   671,
     672,   673,   174,   675,   676,   177,   660,   661,   662,   663,
     664,   174,   666,   667,   177,   653,   177,   174,   659,   682,
     177,   174,   688,   695,   174,   705,   622,     0,   167,   754,
       0,     0,     0,     0,     0,   781,   782,   798,     0,     0,
       0,   809,   814,     0,   823,   824,   815,   167,     0,   189,
    1048,  1048,    85,     0,  1048,     0,  1048,   903,   156,     0,
    1072,     0,  1075,  1112,  1076,  1074,  1071,     0,  1048,  1048,
      85,     0,     0,  1048,  1048,     0,     0,  1048,   932,   930,
     931,   910,  1048,  1048,  1093,  1107,     0,  1061,  1095,     0,
       0,     0,     0,   244,     0,     0,     0,   332,   333,   354,
       0,     0,   197,   198,   956,   957,   372,     0,   177,   648,
     177,   677,   177,   668,   655,   177,   684,   177,   696,     0,
     749,   167,   167,     0,   167,     0,   167,   167,     0,   167,
       0,  1048,   916,   912,  1048,     0,   917,     0,   911,  1048,
       0,  1073,     0,   914,   913,  1048,     0,     0,   908,   906,
    1048,   156,   907,   909,   915,  1107,  1055,     0,     0,  1094,
    1105,  1096,  1148,     0,     0,     0,   275,   298,   301,   299,
       0,     0,   953,   156,   567,   645,   674,   665,   656,   685,
     167,   752,   758,     0,   771,   768,   799,   804,     0,   819,
       0,   921,   905,    85,     0,   919,  1113,     0,   904,    85,
       0,   920,     0,  1056,  1109,  1111,     0,  1104,     0,     0,
     280,     0,     0,     0,     0,   196,     0,   755,   156,   769,
     801,   833,  1048,     0,     0,  1048,     0,   167,  1110,  1106,
     243,     0,     0,     0,     0,     0,   955,   728,   156,   756,
     770,   156,   802,   923,     0,  1048,   922,     0,     0,   245,
     291,     0,   290,     0,   757,   803,    85,   924,    85,  1048,
     289,   288,  1048,  1048,   918,   926,   925
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,  1413,   172,   152,  1260,  2489,  2490,   429,   430,
     431,   432,   153,   154,   155,   694,   686,    91,   813,   452,
    1210,  1678,  1350,  1363,  1346,  1921,  2590,  1410,  2644,  1581,
     340,   766,   769,   772,   780,    63,   365,   371,   375,   378,
      68,   381,    75,   397,   393,   387,   404,    82,   409,    92,
      98,   414,   416,   418,   486,   867,  1647,   420,   423,   105,
     439,   156,   158,  2639,   174,   215,   475,   856,   477,   487,
     859,   864,   489,   491,   870,   494,   872,   505,   875,   877,
     508,   512,   516,   518,   521,   525,   553,   549,  1273,   539,
     895,   900,   892,  1261,   906,   542,   563,   566,   571,   576,
     584,   935,   937,   939,   941,   589,   945,   218,   591,  1748,
     237,   594,   596,   600,   605,   613,   247,  1339,   617,   255,
     626,  1355,   628,   634,   990,  1371,   985,  1789,  1377,  1375,
    1791,   986,  1380,  1382,   640,   643,   638,   257,   265,   267,
     681,  1067,  1437,  1056,  1535,  1965,  2282,  1070,  1074,  1065,
     930,  1314,  1318,  1326,  1328,  1949,   273,  1083,  1086,  1094,
    2254,  2255,  2256,  1950,  2625,  2626,  1115,  1119,  1122,  2699,
    2700,  2696,  2697,  2744,  2257,  2258,   281,   287,   295,   708,
     703,   300,   305,   307,   718,   725,  1148,  1153,   775,   763,
     313,   317,   732,   323,   739,  1586,   752,   753,  1184,  1179,
    1592,  1169,  1598,  1610,  1606,  1173,   757,   741,   329,   330,
     344,  1197,   347,   353,   790,   793,   787,   355,   358,   798
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2586
static const yytype_int16 yypact[] =
{
    5274,    70,   487,    32, -2586, -2586,   963,  -140,   539,   529,
     866,   187,  3502,   141,   306,  1039,    29,  5459,    57,  1709,
   -2586,   112,   978,   186,  1025,   -38,    15,   519,   442,   666,
     448,   724,  1052,    39,   869,   522,   478,   442, -2586,   -31,
      22,   466, -2586,   424,   551,   433, -2586,   460, -2586,    50,
    4097,   331,    54,   578,    89,   158,   313,   610,   640,    62,
     646,    10,   629, -2586, -2586, -2586,   892,   876, -2586,   205,
      65,   306,    28,   605,    36, -2586,   649,   876, -2586, -2586,
      98,   876, -2586, -2586, -2586, -2586,   876, -2586, -2586, -2586,
   -2586, -2586, -2586,     6,   656,   709,   713,   117, -2586,   876,
    1343,   876,   876,  1060,   876, -2586, -2586, -2586,   533, -2586,
   -2586, -2586, -2586,  4815, -2586, -2586, -2586, -2586, -2586, -2586,
     876, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586,
   -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586,
   -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586,
   -2586, -2586, -2586,  1167, -2586,   876, -2586,   740, -2586, -2586,
     306,   306,   306,   306,   306,   306, -2586, -2586,   306,   306,
     306,   306, -2586,   627, -2586,   684,  1501,   638,   210,   471,
     616,   342,  4376,   227,  4866,  4787,   784,  4815,  4035, -2586,
     830,   -61,   764,   823,   769,   919,   750,   871,   442,   758,
   -2586,   822, -2586,   671,   650,   103, -2586,   104, -2586,   414,
   -2586,    64,   808,   188, -2586, -2586,  5057, -2586, -2586, -2586,
     878,   883,   933, -2586, -2586, -2586, -2586,    66, -2586, -2586,
   -2586, -2586,   868, -2586, -2586,  5057,  4431, -2586,   965, -2586,
     514, -2586,   971,   977,   101, -2586,   876, -2586,   986,   145,
    1006,    87,  1149,  1013,    33, -2586, -2586, -2586,  1024,  1043,
     306,   306,   876,   876, -2586, -2586,  1068, -2586, -2586, -2586,
   -2586, -2586, -2586,  2519,   757, -2586,  1074,     8,   876,  5057,
     876, -2586,  1079, -2586, -2586, -2586, -2586, -2586,   876,  1134,
     306,  2672,   876,  1167,   876, -2586,  1027, -2586,  4966, -2586,
   -2586,    -4,  1061,  1093,   876, -2586,  1095, -2586, -2586,   563,
    1096,  5057,  1106, -2586,  1193,   876,   888, -2586,   450,   991,
    1397,   385,  1123, -2586, -2586, -2586, -2586, -2586, -2586, -2586,
    1136, -2586,   482,   119,   136,   178,    76,   876,   876,   180,
   -2586,   876,   867,  1143, -2586,   876,   876, -2586,  1145,    69,
      80,  1154,  1167, -2586, -2586, -2586,   982,   876, -2586, -2586,
   -2586, -2586, -2586, -2586,   876, -2586,  1172,  1166, -2586,   876,
     169, -2586, -2586, -2586, -2586, -2586, -2586,   876, -2586, -2586,
     876, -2586, -2586,   738,   738, -2586,  1176, -2586, -2586, -2586,
   -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586,   987,   876,
     876,  1179,  1188,  1199, -2586, -2586,   876,   876,   876, -2586,
     876, -2586,  1203, -2586, -2586, -2586, -2586,   906, -2586,  1204,
   -2586,  5057,  1218, -2586,   876, -2586, -2586, -2586,   876,  1219,
    1220,  1220,  5057,   876,   876,   876,   876,   876,   876, -2586,
     876,  4815,  1343,   876,   876, -2586, -2586, -2586, -2586, -2586,
   -2586, -2586,  1343,   876, -2586, -2586, -2586, -2586, -2586, -2586,
   -2586, -2586, -2586, -2586, -2586,  1225, -2586,   984,    27, -2586,
   -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586,   -67, -2586,
   -2586, -2586,  1085, -2586,   459,   645,   645, -2586, -2586, -2586,
    1241, -2586,  1259, -2586, -2586,   -76, -2586,  1087, -2586, -2586,
   -2586,  1094, -2586, -2586,  1167, -2586,   876,   876, -2586,  5057,
    5057,  1167, -2586, -2586,  1167, -2586, -2586, -2586, -2586,  1167,
   -2586, -2586,  5057,  1167,   876, -2586, -2586,  5057, -2586,  1270,
     497,  1084,     0, -2586, -2586,  1089,  5057,    43, -2586, -2586,
   -2586, -2586, -2586, -2586,  1281,  1287,  1289, -2586,  1099, -2586,
   -2586, -2586,   876, -2586, -2586,   736, -2586, -2586, -2586, -2586,
   -2586, -2586, -2586, -2586, -2586, -2586, -2586,    64, -2586, -2586,
   -2586, -2586, -2586, -2586,  1111,  1122, -2586, -2586,  1249,  1252,
    1258, -2586, -2586,  1104, -2586,   876,  1322,  1105,  4966, -2586,
    1167, -2586, -2586,  1333, -2586, -2586, -2586, -2586, -2586, -2586,
   -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586,  5057,  5057,
    5057,  5057, -2586, -2586, -2586,  1336,   306, -2586, -2586,  1339,
    1344,  1151,   876, -2586,   316,  1263, -2586,  1352, -2586,   290,
    1271,  4340,     7,  1355, -2586,  1361, -2586,  1392, -2586,    19,
   -2586,  1393,  1394, -2586,  1398, -2586, -2586, -2586,   876, -2586,
    4966,  4755,  1387,   540,  1400,   574,  1302, -2586, -2586, -2586,
     111,    40,  1407,  1408,    11,   876,   292,   553,   185,  5057,
     306,  1612,   635,    16,    59,   197,    17, -2586,  1405,  1409,
    1421, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586,
   -2586, -2586, -2586, -2586, -2586,   876, -2586, -2586, -2586,   876,
     876,   876,   876, -2586, -2586,   876,  1167,   876, -2586,   876,
    1343,   876,  1424,  1167, -2586, -2586, -2586, -2586, -2586, -2586,
   -2586, -2586,  1426,   374,   432, -2586, -2586, -2586,  1427, -2586,
   -2586, -2586, -2586,  1335, -2586,  1430,  1441,  1362,  1445, -2586,
    1447, -2586,  1448,  1367,  1451,   475,   -14,   491,   391,   528,
    1454,   536, -2586, -2586,  1455,  1456,  1458, -2586, -2586,  1459,
   -2586, -2586, -2586, -2586,  1461, -2586, -2586,  1462, -2586, -2586,
    1464, -2586, -2586, -2586, -2586, -2586, -2586, -2586,   876,   876,
   -2586,   876,   992,   876,   876, -2586,  3614, -2586,  1019,  1467,
   -2586,  1030,  1468, -2586, -2586,   387,   876,   876, -2586,  1470,
   -2586, -2586,  1471,  1026,   876,  1474,   860, -2586, -2586, -2586,
   -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586,
   -2586,  1469,  1475,   876,   876,   876,  1476,   306,  1479,  1483,
    1167,  5057, -2586, -2586, -2586, -2586, -2586,  1167, -2586, -2586,
     876,   876,   876,  5057,   876,  1343,   876, -2586,   876, -2586,
   -2586, -2586, -2586, -2586,  1485,  1487, -2586, -2586, -2586, -2586,
   -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586,   227,
   -2586,   876, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586,
    5057,   876,  1167,  1167,   387,   387,   387,  1167,  1343,   876,
    1167, -2586, -2586, -2586,   876, -2586,   -51,  1325,  1489,  1493,
   -2586, -2586,  1167, -2586,  1346,  1347, -2586,  1494,  1498,  1503,
    1116,   876,  1624,   510,   761, -2586, -2586, -2586,   876,   473,
     880, -2586,  1246, -2586,  1612,  1268,   601,  1221,   139, -2586,
   -2586,   876, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586,
   -2586, -2586,   876,  1533, -2586, -2586, -2586,   387, -2586, -2586,
   -2586, -2586, -2586,  4937, -2586, -2586,  1536,  1537,   876,  1540,
    1545,  1546,   -40,   -40,   -16,  1548,  1553,  1554,  1555,  1265,
    1282,  1556,  1557,  1558,    74,    74,   -16,  1560,  1561,   -16,
    1563,  1566,  4901,  1569,  1571, -2586, -2586,  1572,  1573,   443,
   -2586,  1575,  1576,  1577,  1578,   -40,   -16,  1580,  1581, -2586,
    1582, -2586, -2586,  1167,   885,  1300,  1349,   -96,  1351,  1481,
     429,   -20,  1584,   287,  1453,  1490,   983,   938,  1541,   441,
    1354,  1491,  1595,  1386,    14,   127,   -75,   372,  5057,  1612,
    1564,   607,  1358,  1395,  1603,   128, -2586, -2586,   393,  1607,
    1609, -2586, -2586, -2586,  1610,  1401,   131,  1612,  1411, -2586,
   -2586, -2586,   306,  1616,  1619,   876, -2586, -2586, -2586, -2586,
   -2586, -2586, -2586, -2586, -2586,    18, -2586,  3004, -2586, -2586,
   -2586,   876, -2586,   876, -2586, -2586, -2586, -2586,   876,   876,
     876,   574,  5057, -2586,  1628,  1140, -2586, -2586,   876, -2586,
   -2586,   876,  5057,   876, -2586, -2586, -2586, -2586, -2586, -2586,
   -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586,   306,   876,
   -2586,   876,   574,  1631,  1634, -2586, -2586,   876,   876, -2586,
     306, -2586, -2586, -2586,   121,  1637,  1643, -2586, -2586, -2586,
   -2586, -2586,   876,   876, -2586, -2586,  1343,   876,   876, -2586,
   -2586, -2586, -2586,  1625,   876, -2586,   876,  1539, -2586,   876,
   -2586,   876,  1542, -2586,  1646, -2586,   753,   753,   548,   753,
    1648, -2586,   568, -2586, -2586,  1651,  1653,   697,  1655, -2586,
    1656,  1659,  1661, -2586,   726,   728,  1662,  1663,  1665, -2586,
   -2586,  1666,  1671,  1676, -2586,   753,   753,   753,   876, -2586,
   -2586, -2586,   876, -2586,   876,   498,  5057, -2586,   876, -2586,
    4966,  1167, -2586, -2586,  1677, -2586, -2586,  1678, -2586, -2586,
   -2586, -2586,  1654,  2672, -2586,   876,  1669,   876,   876,   876,
    1009, -2586,  1680,  1684,   876,   876,    30,  1688,   306,   306,
   -2586,  1167,   876,  1685,  1690,  1691,  1167,  5057, -2586,   876,
   -2586, -2586, -2586,   876,   876,   876,  1167,  5057,   387, -2586,
   -2586, -2586, -2586,  1343,   876,  1692,   387,   876,  1622,  1660,
     531, -2586,  1696, -2586, -2586,   894,  2044,   876, -2586,   876,
    1693,  1702,   876, -2586,  1698,   895,  4815,  1466,   495,  1472,
      34,  5057,   503, -2586,   359,  1565,   143,   541,  1478,   157,
   -2586, -2586,   549,  1534,   326,  1586,   -57,  1612,   729, -2586,
    1707,  1465, -2586,   587, -2586, -2586, -2586, -2586,  1612,  1505,
   -2586, -2586, -2586, -2586, -2586,   876, -2586,   876, -2586, -2586,
     876,   876, -2586,   876, -2586,   876, -2586, -2586, -2586, -2586,
    1519,   876, -2586,   876,    25, -2586, -2586,  1717,  1719, -2586,
     876,   -40,   -40,   -40, -2586, -2586, -2586, -2586, -2586, -2586,
    1720,   -40,   -40,   -40,  1000, -2586, -2586,    74,   -40,   -40,
     -40, -2586, -2586,   -40,   -40,  1721,   -40,   -40,  1723,    74,
    1012, -2586,  1724,  1725,  1726, -2586,   663, -2586,   680,   899,
   -2586,  1032, -2586,  1457,  1727,  1729,  1736,    74,    74,   -16,
    1739,  1740,   -16,  1741,  1743,  1745,   -40,   -40, -2586,  1747,
     -40,   -40, -2586,  1752, -2586, -2586, -2586, -2586, -2586, -2586,
     306, -2586, -2586, -2586,  4815,  1054,   306,   876,  1359,  1157,
     -28, -2586, -2586, -2586,   746, -2586, -2586, -2586, -2586, -2586,
   -2586, -2586, -2586, -2586, -2586, -2586, -2586,  1753,   306,   876,
   -2586,   306,  1754,   876,  5057,   306,  1434,  1510,  1518,   213,
     251,  1520,   252,  1432,  1450,  1757,  1761,  1763,   429,  1764,
    1765,  1766,  1460,  1473,  1195,  1767,   306,   876,  1404,  1440,
   -2586, -2586,   306,  5057, -2586, -2586,  5057,   876,    23,  1770,
     306,   876,  1167,   306, -2586,  1773,  5057,  5057,   876, -2586,
   -2586, -2586,   306,   306,  5057, -2586, -2586, -2586, -2586, -2586,
   -2586,  5057,   876,   306, -2586, -2586, -2586,   876, -2586, -2586,
    1774,   876,  1547,   190,   876,  1568,   876,   194,   876, -2586,
     876,  1570,  1574,   876,   876,   876,   876,   876,   876,   876,
     876,    13,   876,   876,  1579, -2586,   876,   876,   876,   876,
   -2586,  5057,  1167,  1776,  5057,  5057,   876,   876,  1167, -2586,
     876,   876,   876,  5057,   574, -2586,   876,   876, -2586, -2586,
   -2586,  1777, -2586, -2586, -2586, -2586, -2586, -2586,  1779,   876,
     876, -2586,   876,   876, -2586, -2586, -2586, -2586, -2586, -2586,
   -2586, -2586, -2586,  1780,  1783,  1785, -2586, -2586,   753,  1786,
    1787,  1789, -2586,  1793,  1796,  1808,  1809,  1797, -2586,  1811,
   -2586, -2586, -2586,  1814,  1815,  1812, -2586,  1816,  1817,  1819,
   -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586,
     876,   876,   876, -2586, -2586,   876,  1167, -2586, -2586, -2586,
    2672,   876,  1167,   876,   876,   876, -2586,   876,   876,  1820,
     876,  1822,  1778,   876,   876, -2586, -2586,  1823,  5057, -2586,
   -2586, -2586,   876, -2586, -2586, -2586, -2586,  1167, -2586,   701,
     876,   701,   387,  1167,  5057,   876,   876,  1824, -2586, -2586,
   -2586, -2586, -2586,   876, -2586, -2586, -2586, -2586, -2586,  5057,
   -2586,  5057,   876,  1825, -2586, -2586,  1827,  1828,  1829,  1831,
    1832,  5057,  1167, -2586,  5057, -2586,  5057,  5057,  4815,  5057,
    1167, -2586,  5057, -2586, -2586,  5057, -2586, -2586,  4815,  5057,
   -2586,  5057,  5057,  4815,  5057, -2586,  5057,  5057,   876, -2586,
   -2586, -2586,  5057,  5057,  5057, -2586, -2586,  5057,  5057, -2586,
   -2586, -2586, -2586,  5057,  5057, -2586, -2586, -2586, -2586, -2586,
     876,   876, -2586, -2586,  1835,   876, -2586, -2586,  1837,  1836,
   -2586,   876, -2586, -2586, -2586,   -40, -2586, -2586, -2586,  1838,
    1839,  1840, -2586, -2586,   -16,  1842,  1843,  1844,   -40, -2586,
   -2586, -2586, -2586, -2586,    74, -2586, -2586,  1846,   -40,  1851,
    1853,  1858,    74,    74,   -16,  1861,  1862,  1864,  1088, -2586,
    1142, -2586,  1223,  1596,  1866,  1868,  1870,    74,    74,   -16,
    1883,  1886,   -16,  1884,  1615,  1888,  1889,  1891,    74,    74,
     -16,  1893,  1894,   -16,  1895,  1623,  1896,  1898,  1900,    74,
      74,   -16,  1902,  1903,   -16,  1904,  1905,  1906,  1907,    74,
      74,   -16,  1910,  1914,  1918,    74, -2586, -2586, -2586, -2586,
   -2586,  1915, -2586, -2586,  1920,    74,  1922,  1924, -2586, -2586,
     -40, -2586, -2586,  1925, -2586,  1167, -2586,  5057,   876, -2586,
     876,  5057,   876,  1926,  1300, -2586, -2586, -2586, -2586, -2586,
   -2586,  1927, -2586,  5057,   306,  1929,  5057,  1167, -2586,  1941,
    1300,   876,   876,   876,   876,   876,   876,   876,   876,   876,
    1943,  1962, -2586, -2586, -2586,  1963, -2586, -2586, -2586,  1966,
    1967, -2586, -2586, -2586, -2586,   876,  5057,   876,  1968,  1300,
     306,  1167,  1167, -2586, -2586, -2586, -2586, -2586, -2586, -2586,
   -2586, -2586, -2586, -2586,   876,  1343, -2586, -2586,  1167,  1167,
     876, -2586, -2586,  1167,  1167, -2586, -2586, -2586, -2586,   876,
     876,   876,   876,   876,   876,   876,   876,   876,   876,  1710,
   -2586,   876,   876,   876,   876,   876,   876,   876,   876,   876,
     876,   876,  3910,  1970,   876, -2586,   876,   876,   876,  1972,
    1976, -2586, -2586,  1167,   387,  1977,  1167,  1167, -2586, -2586,
    1343,   876, -2586,  1978,  1167,  5057, -2586, -2586, -2586,  1979,
   -2586, -2586, -2586, -2586,   753,   753,   753, -2586, -2586, -2586,
   -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586,
   -2586, -2586, -2586,  1300,   876, -2586,   876, -2586,   876,  1167,
     876, -2586,  1343,   876, -2586,   876, -2586,  1917,  1980,  1982,
   -2586,  1984,   876,   876,  1985,  1167,  5057, -2586, -2586,   876,
   -2586,   876, -2586,   387,   894,   876,  1986, -2586,   876, -2586,
   -2586,    64, -2586,  1987,  1988,  1989,  1990,  1992,  1167, -2586,
     894,   894,   894,  1167, -2586,   894,   387,   894,   894,  1167,
   -2586,   894,   894,   894,  1167, -2586,   894,   894,  1167,  5057,
     894,  1167,   894,   894,  1167,   894,  1167, -2586, -2586,  1996,
      64,  1997, -2586,   876, -2586, -2586, -2586, -2586,  1999, -2586,
   -2586, -2586, -2586,   -40,    74, -2586, -2586, -2586, -2586, -2586,
   -2586,  2000, -2586, -2586,    74,  2001,  2002,  2003,    74,    74,
     -16,  2005,  2006,  2009,  2011,  2016,  2018,    74,    74,   -16,
    2020,  2022,  2023,  2026,  2027,  2029,    74,    74,   -16,  2031,
    2033,  2034,    74,   -40,   -40,   -40,   -40,   -40,  2037,   -40,
     -40,  2040,    74,    74,   -40,   -40,   -40,   -40,   -40,  2042,
     -40,   -40,  2045,    74,    74, -2586, -2586, -2586, -2586, -2586,
    2046, -2586, -2586,  2047,    74, -2586, -2586, -2586, -2586, -2586,
    2048, -2586, -2586,    74, -2586,    74,  2049, -2586,  2050,  2052,
   -2586,  4966, -2586,   894,  2055,  5057,   894,   876,  5057,  2058,
   -2586,   894, -2586, -2586,   894, -2586,  5057,  2062,   876,   876,
     876,   876,   876,   876,   876,   876,   876,   876,   876, -2586,
   -2586, -2586,  5057,   894,   876,  5057,  2067, -2586,  1343,  1343,
    5057,  1343,  1343,  5057,  5057,  1343,  1343,   876,   876,   876,
     876,   876,   876,  1300,   876,   876,   876,  1670,  1718,  1722,
    1730,  1731,  1732,  1734,  1710, -2586,  1735, -2586, -2586,  1300,
     876,   876,   876,   876,  1300,   876,   876,   876,   876,   876,
     876,  1167,   876,  1515,  1300,   876,   876, -2586, -2586,   387,
     306,  2072,  2074, -2586, -2586, -2586, -2586, -2586,   387,  1167,
    2076, -2586, -2586, -2586, -2586,   876, -2586, -2586,  1343,   876,
   -2586, -2586, -2586,  1057,  2078,  2079, -2586,   876,  2077,   701,
   -2586,   894, -2586, -2586, -2586, -2586,  2081, -2586, -2586,  2089,
    2091,  2093,  2094,  5057,  2095, -2586, -2586, -2586, -2586, -2586,
   -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586,
   -2586,   387,   894, -2586,   387, -2586, -2586,   387, -2586,   387,
    2097,  2099, -2586,   876, -2586, -2586,   -40,    74, -2586,   -40,
     -40,   -40,   -40,   -40,  2100,   -40,   -40,    74,   -40,   -40,
     -40,   -40,   -40,  2102,   -40,   -40,    74,   -40,   -40,   -40,
     -40,   -40,  2103,   -40,   -40,    74,   -40, -2586, -2586, -2586,
   -2586, -2586,    74, -2586, -2586,  2104,   -40,   -40, -2586, -2586,
   -2586, -2586, -2586,    74, -2586, -2586,  2105,   -40, -2586,    74,
    2106, -2586,    74, -2586, -2586,    74, -2586, -2586,  1167, -2586,
    5057,   894, -2586,  2107,  1167,   876, -2586, -2586,  1167,   876,
   -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586,   876,
     876,   894, -2586,  2108,  1167,   876,  1343, -2586,   894,   876,
    1343,   894,   894,  5057, -2586,   876,  2109,  2109,   876,   876,
    2109,  1300,  2109, -2586,  5057,   429,  2110,  2112,  2113,  2114,
    2117,  2119, -2586,   306,  1300,  2109,  2109,   876,   876,  1300,
     876,   876,   876,   876,   876, -2586,  1343,   876,  2120, -2586,
   -2586,   876,  2109,   306,    24, -2586,  2121,   306,   387,  2124,
   -2586, -2586, -2586,  2125,   876, -2586,  2127,  2130,  1961,   876,
   -2586, -2586,    58,  5057, -2586,  2131,    79,  5057, -2586, -2586,
   -2586, -2586, -2586, -2586,    58,   876, -2586, -2586, -2586, -2586,
   -2586, -2586, -2586,    74, -2586, -2586,   -40, -2586, -2586, -2586,
   -2586, -2586,    74, -2586, -2586,   -40, -2586, -2586, -2586, -2586,
   -2586,    74, -2586, -2586,   -40, -2586,   -40,    74, -2586, -2586,
     -40,    74, -2586, -2586,    74, -2586, -2586,   876,   894, -2586,
    5057,  5057,   876,  5057,   876, -2586, -2586, -2586,  5057,  5057,
     876, -2586, -2586,  5057, -2586, -2586, -2586,   894,  2133, -2586,
   -2586, -2586,  1300,   876, -2586,  2135, -2586, -2586,  1167,  2137,
   -2586,  2136, -2586, -2586, -2586, -2586, -2586,  2140, -2586, -2586,
    1300,   876,  2141, -2586, -2586,   876,  5057, -2586, -2586, -2586,
   -2586, -2586, -2586, -2586,    24,  1559,  1612, -2586, -2586,   306,
    2144,  2146,  2147, -2586,  2092,  2145,   102, -2586, -2586, -2586,
    2149,  5057, -2586, -2586, -2586, -2586, -2586,  2150,   -40, -2586,
     -40, -2586,   -40, -2586, -2586,   -40, -2586,   -40, -2586,  4966,
   -2586,   894,   894,   876,   894,  2151,   894,   894,   876,   894,
     876, -2586, -2586, -2586, -2586,  2152, -2586,   876, -2586, -2586,
    2153, -2586,   876, -2586, -2586, -2586,  2155,   876, -2586, -2586,
   -2586,  1167, -2586, -2586, -2586,  1559, -2586,  1683,  1760,  1612,
   -2586, -2586, -2586,  2156,  2157,  2159, -2586, -2586, -2586, -2586,
     644,   644, -2586,  1167, -2586, -2586, -2586, -2586, -2586, -2586,
     894, -2586, -2586,  2161, -2586,  4815, -2586, -2586,  2162, -2586,
    1300, -2586, -2586,  1300,   876, -2586, -2586,   876, -2586,  1300,
     876, -2586,  5057, -2586,  1683, -2586,   306, -2586,  2163,  2164,
   -2586,   876,   876,   876,   876,    79,  2165,  4815,  1167, -2586,
    4815, -2586, -2586,   876,  2167, -2586,   876,   894, -2586, -2586,
   -2586,  2168,  2169,   876,  2170,   876, -2586, -2586,  1167, -2586,
   -2586,  1167, -2586, -2586,  2173, -2586, -2586,  2174,  2175, -2586,
   -2586,  2176, -2586,  2177, -2586, -2586,  1300, -2586,  1300, -2586,
   -2586, -2586, -2586, -2586, -2586, -2586, -2586
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2586, -2586,    -3, -2586,   602, -2586, -1608, -1004,  1695, -2586,
     789,  -171,  1885,   -48,    82, -2586, -2586, -1652,  1600,  1627,
    -742,   476,  -966,  1102,  1620, -2586, -1131, -2586,  -750, -1125,
   -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586,
   -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586,
   -2586, -2586, -2586, -2586,  -522,  -480, -2586, -2586, -2586, -2586,
   -2586, -2586, -2586,  -395, -2586, -2586, -2586, -2586, -2586, -2586,
   -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586,
   -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586,
   -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586,
   -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586,
   -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586,
   -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586,
   -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586,
   -2586, -2586, -1455, -2586, -2586, -2586, -2586, -2586, -2586,  -652,
   -2586, -2586, -2586, -2586, -2586, -2586,    51, -2586, -2586, -2586,
   -2586,  -119,  -666, -1190,  -467, -2586, -2586, -2586, -2586, -2586,
    -539,  -528, -2586, -2586, -2585, -2586, -2586, -2586, -2586, -2586,
   -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586,
   -2586, -2586, -2586, -2586, -2586, -2586, -2586,  1438, -2586, -2586,
   -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586,
   -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586, -2586
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1246
static const yytype_int16 yytable[] =
{
      67,  1414,   352,  1895,   897,  1108,   868,  2039,   104,  2041,
    1365,   412,   688,  1368,  1082,  1085,    64,    65,  1962,   106,
     258,  1112,  1123,  1509, -1092,    64,    65,  1416,  1077,   292,
    1399,   310,  1582,   993,  1587,    64,    65,   316,   641,    64,
      65,  1472,   373,   106,   296,  1746,   346,   903,  1165,   357,
    1914,   714,   364,    64,    65,  1698,   370,    64,    65,   377,
    1617,  1618,  1619,   380,   382,    64,    65,   392,    64,    65,
     399,   403,  1915,   788,   406,  1916,  1116,  1645,   410,  1865,
    1071,   994,   259,   411,   791,  1258,  1917,   715,   309,   773,
    2637,  1361,   629,   106,   360,   987,   424,   428,   433,   434,
     438,   440,   407,  1438,   260,    64,    65,   620,  1166,  1918,
     597,  2642,  2745,  1722,   294,   400,   106,   444,  1124,  1344,
     873,   109,   421,   106,  1125,   572,  1559,  1919,  1068,   857,
      64,    65,   854,  1491,    64,    65,   111,    54,  1560,   716,
     106,   216,  1250,  1251,  1252,  1167,  1417,  1345,   422,    76,
     624,  1348,   453,  1072,   598,   540,  1329,   261,   217,  2768,
     111,    64,    65,  1474,  1708,   568,   988,  1499,   898,   395,
    1866,  1723,    64,    65,   157,   485,   173,   904,  1713,   238,
     506,   804,   106,    64,    65,   874,   764,   858,    64,    65,
      64,    65,  1478,    64,    65,   443,   256,    64,    65,  1479,
    1259,   106,   248,   767,   587,  1334,   630,   396,   689,   383,
     111,   401,   995,    64,    65,   690,   691,   855,   363,   314,
     114,  1087,  1439,   621,  1867,  1088,  1078,    99,   115,   116,
      64,    65,   361,   111,  1883,  1362,   413,  1073,  1724,  1330,
     111,   573,  1473,   622,   114,   770,   717,   100,   541,   555,
     713,   692,   115,   116,  1349,   388,   311,   111,  1322,   648,
     649,   599,  1475,  1747,  1168,   507,  1500,   515,   774,   520,
     524,   847,  1885,  1888,  1117,   695,  1699,   697,   552,   312,
    1113,   850,   631,   117,   109,   699,   702,   996,   705,   709,
     402,   711,  2707,   585,   114,   970,   374,   997,  1089,   111,
     101,   721,   115,   116,   971,   972,  1114,  1646,   642,  1079,
     106,   731,   733, -1092,  1441,   119,   899,   114,   111,   315,
    1090,   262,  1963,  1126,   114,   115,   116,  1510,   998,    66,
     959,   960,   115,   116,   776,   777,   779,   632,   781,   119,
     905,   114,   784,   785,  2638,   297,   574,   345,   408,   115,
     116,   356,   973,   797,   799,   298,  1058,  1118,   693,   369,
     789,   800,   633,  1483,   149,  2643,   803,   805,   263,   150,
     151,   792,   389,   707,   806,  1069,   575,   807,   961,  1920,
    1492,  1503,  1091,   114,   102,  1709,  1703,   588,   149,   119,
     569,   115,   116,   150,   151,   625,   817,   818,  1059,  1714,
     478,   384,   114,   822,   823,   824,   479,   825,   778,  2708,
     115,   116,   119,   570,  1144,  1864,   390,   391,  1941,   119,
    1493,   832,  1946,  1841,  1476,   833,  1844,   111,  1501,  1541,
     838,   839,   840,   841,   842,   843,   119,   844,   149,   428,
     848,   849,  1880,   150,   151,   480,   117,   754,  1383,   428,
     851,   577,   385,   483,  2709,  1884,  1442,  1384,  1385,   386,
    1553,   149,   578,  1997,   341,  1909,   150,   151,   149,  1420,
     332,   481,  1149,   150,   151,   324,    64,    65,   119,  1174,
     103,   333,  1092,   974,   975,   149,  1208,  1145,  1120,   579,
     150,   151,   318,  1886,  1889,  1480,  1421,   119, -1245,    55,
     268,   893,  1623,   880,   881,  1386,  1664,   755,   334,   962,
     963,   114,   735,   492,  1668,   282,   760,   482,   615,   115,
     116,   889,   493,   846,   266,   325,   306,   149,  1704,  1443,
    1422,  1060,   150,   151,   326,  1672,  1423,   742,   861,  1139,
     946,    56,  1424,    77,  1051,  1150,   149,  1061,  1062,   911,
    1175,   150,   151,  1170,   109,   331,  1081,    83,   976,    57,
    1425,   483,   484,   327,  1466,   354,   580,   308,   977,   978,
    1052,  1146,   736,   979,  1444,   269,  1715,  1305,   359,    78,
     319,  1426,   942,   984,   964,   335,   342,   366,   109,    58,
    1176,   761,   320,  1719,   965,   966,  1427,   744,  1181,   980,
    1720,  1705,  1003,   581,    64,    65,   119,    59,    64,    65,
    1583,    60,   894,  1171,  1732,   367,   159,  1058,  1695,   958,
    1481,  1494,   336,   239,    61,   967,  1701,  1428,   264,  1151,
    1589,  1725,    64,    65,   862,   299,  1387,  1388,  1058,  1063,
    1064,  1306,  1735,  1147,   368,  1002,  1706,    64,    65,   931,
    1177,   372,    79,  1209,   405,   149,   362,  2509,  1182,  1059,
     150,   151,  1080,   756,  1710,  1093,  1429,  1307,  1793,   343,
    1584,   270,   582,   394,  1238,  1109,   321,  1794,  1795,  1084,
    1059,  1430,    84,  1467,  1316,  1804,   271,   415,   762,   322,
    1590,   337,  1130,  1431,  1805,  1806,  1131,  1132,  1133,  1134,
     737,  1152,  1135,  1053,  1137,    85,  1138,   428,  1140,    86,
     616,  1389,   274,   863,   417,   723,   117,  1254,   419,  1716,
    1432,  1390,  1391,   328,   583,  1796,  1392,   338,   738,    83,
     441,   275,  1433,   276,  1434,  1435,    80,  1696,  1201,  1485,
     912,   913,  1807,   339,   454,  1702,   465,  1308,  1110,   272,
     117,   466,  1393,   750,   376,   550,  1054,  1733,   476,  1595,
     488,    87,   455,   456,   457,   458,   459,   460,   808,  1172,
     461,   462,   463,   464,  1436,  1192,  1193,  1717,  1194,  1196,
    1198,  1199,  1055,  1711,    62,   865,   865,   490,  1603,    81,
    1607,  1310,  1060,  1211,  1212,  1576,  1577,   914,  2098,  1309,
    1216,  1217,    88,   915,   556,   398,  1178,   109,  1061,  1062,
      89,    90,  1324,  1060,  1183,  1734,   551,   517,  2111,  1596,
    1223,  1224,  1225,   866,   866,   557,  1585,   724,   544,  1061,
    1062,   543,  1111,  2148,   809,  1486,  2151,  1233,  1234,  1235,
     558,  1237,   428,  1239,  2159,  1240,  1591,  2162,  1604,   682,
    1608,   277,   916,  1868,    84,  2170,  1797,  1798,  2173,   545,
    2199,  1726,   646,   647,  1219,  2180,  1243,   917,  1245,  2291,
    2292,  2293,  1220,  1808,  1809,   526,  2207,    85,  1247,    64,
      65,  2038,   918,    64,    65,   428,  1255,   554,   919,   564,
     527,  1257,   704,   920,  1487,    64,    65,  1319,   586,  1727,
    1063,  1064,  1985,   810,  1815,  2226,   565,  1272,  1274,   278,
     827,   828,   528,  1816,  1817,  1315,  1317,  1320,  1675,  1676,
    2042,  1063,  1064,  1325,  1311,   546,  1578,  1579,  1331,   683,
     283,  1799,   529,    87,  1374,   765,   768,   771,   567,  1332,
     301,  1800,  1801,   559,  1869,   592,  1802,   921,  1810,   530,
      93,  1244,   531,   279,  1580,  1340,   593,  1728,  1811,  1812,
    1455,  1818,   280,  1813,   595,  1565,   922,    94,  1404,   117,
     614,   923,  1803,   924,    88,  1597,   618,  1312,  1686,   532,
     533,   619,    89,    90,  2674,    64,    65,   734,  1456,  1814,
     623,  1457,   811,  1677,  1458,    64,  1195,   812,  1870,   925,
     926,   560,  2685,  1313,  1605,  1447,  1609,   927,   547,  2294,
    2599,   627,    64,    65,  1759,  1760,  1729,   379,   639,   684,
     601,  1459,  1477,  1202,  1203,   928,  1779,  1780,   644,    64,
      65,   712,   534,  1448,  1205,  1206,  1449,   685,  1215,  1405,
     302,   548,   535,  1502,    95,   561,  1826,  1827,   645,  1687,
    1460,   249,  1508,  1461,   562,    64,    65,    64,    65,  1857,
      64,    65,  1761,    64,    65,   719,  1450,   240,  1536,  1639,
    1537,   107,   284,   650,  1781,  1538,  1539,  1540,   285,   687,
     286,   929,  1665,   160,   698,  1546,   161,    96,  1547,   602,
    1549,   288,  1819,  1820,  1828,  1451,   241,   720,  1452,   722,
     435,   726,  2115,  2116,   536,   537,  1551,   796,  1552,   109,
     728,  1406,  1407,   740,  1556,  1557,   162,  2503,   303,    64,
    1271,  1688,  1689,    97,   163,  2762,  1408,   304,   758,  1563,
    1564,  2765,   603,   428,  1566,  1567,  1690,    64,    65,   250,
     759,  1569,   782,  1570,  1544,  1545,  1572,   783,  1573,   786,
    2117,   251,  1626,    69,  2364,   110,  2124,  2125,   794,    70,
      64,    65,  1863,  2373,  1411,  1412,   242,  1821,  1462,  1409,
     604,   802,  2382,   436,   700,   538,   801,  1822,  1823,  1691,
     815,   243,  1824,   819,   164,  1620,   252,   816,  2802,  1621,
    2803,  1622,   820,  1762,  1763,  1625,    64,    65,    71,  1901,
    1902,  1463,   445,   821,  2126,  1782,  1783,   826,  1825,   829,
    1631,   112,  1634,  1453,  1636,  1637,  1638,  1640,   954,   835,
     836,  1643,  1644,   831,    72,  1829,  1830,  1464,   425,  1652,
     852,   427,  2280,   729,   165,   253,  1658,  2133,  2134,  2461,
    1659,  1660,  1661,   244,   635,   869,  1454,   701,   254,   289,
     428,  1666,   166,   167,  1669,  2474,   860,   437,   853,   168,
    2479,   169,   636,   871,  1681,   878,  1682,   876,  1764,  1684,
      73,   117,  1096,  2597,   891,   446,   118,  1121,  1765,  1766,
    1784,  2118,  2119,   896,   245,  2135,   907,   290,   901,   170,
    1785,  1786,   908,   909,   246,  1633,   447,   448,   910,  2621,
    1831,  2314,   932,    64,    65,   449,   730,  1411,  1412,  1767,
    1832,  1833,  1737,   933,  1738,    74,   934,  1739,  1740,   936,
    1741,  1787,  1742,   450,  2331,   938,  2591,   943,  1744,  2594,
    1745,  2596,   940,   451,   944,  2127,  2128,  1751,   948,   637,
     953,  1834,  1673,   955,  2608,  2609,    64,    65,   956,   291,
     957,   968,   425,   426,   427,   171,  2120,   969,  1693,   981,
     989,  2623,    64,    65,  1861,   991,  2121,  2122,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   992,  2123,   999,  1000,
    2672,  2673,  1001,  1066,  2676,  1057,  2678,    64,    65,  1906,
    2129,  1075,  1858,  1076,  1860,  1862,  2136,  2137,  2683,  2684,
    2130,  2131,  1127,  2688,  2689,  1129,  1128,  2692,  1141,  1227,
    1143,  1154,  2693,  2694,  1155,  1156,  1873,    64,    65,  1879,
    1876,  1411,  1412,    64,    65,  1908,  1157,  1411,  1412,  1159,
    1158,  2132,  1160,  1161,  1040,  1162,  1163,  2595,  1180,   742,
    1185,  1186,  1187,  1188,  1905,  1907,  1189,  1190,  1041,  1191,
    2607,  1204,  1207,  1221,  1913,  2612,  1214,  1042,  1924,  1222,
    1226,  2731,  1213,  1228,  2732,  1930,  1218,  1229,  1043,  2735,
    1241,  2138,  1242,  1262,  1263,  2738,  1856,  1264,  1268,  1935,
    2741,  2139,  2140,  1269,  1937,  1266,  1267,  1270,  1939,  1321,
    1942,  1943,  1327,  1945,  1947,  1948,   743,  1951,  1044,   744,
    1954,  1955,  1956,  1957,  1958,  1959,  1960,  1961,  1964,  1966,
    1967,  1323,  2141,  1969,  1970,  1971,  1972,  2493,  1333,  1045,
    1337,  1356,  1338,  1978,  1979,  1341,  2497,  1981,  1982,  1983,
    1342,  1343,  1351,  1986,  1987,   467,   745,  1352,  1357,  1353,
    1354,  1358,  1359,  1360,  1366,  1367,  1990,  1991,  1369,  1992,
    1993,  1370,  2783,   468,  1376,  2786,  1378,  1379,  1381,  1394,
    1395,  1465,  1396,  1397,  1400,  1046,  1401,  1402,  1419,  1440,
     469,  1415,   746,  1418,  1445,  2797,  1468,  1446,  1469,  2518,
    1470,  1471,  2520,   470,  1484,  2521,  1488,  2522,  1490,  2804,
    1489,  1495,  2805,  2806,  1496,  1497,  1498,  2013,  2014,  2015,
    1506,   471,  2016,  1507,  1047,   472,  1504,  2018,  2021,  1568,
    2023,  2024,  2025,  1543,  2026,  2027,  1554,  2029,   473,  1555,
    2032,  2033,  1561,   747,  1275,  1276,  1277,   748,  1562,  2036,
    1575,  1048,  1571,  1588,  1505,  1574,  1593,  2040,  1594,  1599,
    1670,  1600,  2045,  2046,  1601,  1602,  1630,  1611,  1612,  1613,
    2048,  1614,   749,  1278,  1279,   750,  1615,  1280,   474,  2051,
    1616,  1635,  1628,  1629,  1281,   751,  1641,  1282,  1642,  1653,
    1049,  1283,  1050,  1648,  1654,  1655,  1667,  1683,  1671,  1284,
    1285,  1674,  -447,  1685,  1718,  1097,  1707,  1286,  1694,  1721,
    1550,  1730,  2020,  1098,  1697,  2079,  1736,  1731,  1743,  1099,
    1712,  1749,  1558,  1750,  1755,  1774,  2761,  1777,   219,  1788,
    1790,  1792,  1836,  1835,  1837,  1287,  1288,  2087,  2088,  1289,
    1100,  1838,  2090,  1842,  1843,  1890,  1845,  1846,  2093,  1847,
     220,  1850,  1881,   221,  2231,  1290,  2629,  1853,  1871,  1875,
    1882,  1892,  1887,  1891,  1101,  1893,  2247,  1894,  1896,  1897,
    1898,  1903,  1102,  1899,  1922,  1940,  1291,  2248,  1927,  1938,
    2064,  1975,  1988,  1989,  2031,  1994,  1900,   222,  1995,  1996,
    2070,  1998,  1999,  2000,   223,  2075,  1944,  2001,  1952,  1292,
    2002,  2005,  1953,  1097,  2249,   224,   225,  1968,  1293,  2285,
    1103,  1098,   226,  2003,  2004,  2006,  2009,  1099,  1104,  2007,
    2008,  2010,  2011,  2012,  2488,  2028,  2030,  2034,  2047,  2052,
    1649,  1650,  2053,  2054,  2055,   227,  2056,  2057,  1100,  2089,
    2092,  2250,  2091,  2095,  2096,  2097,  2099,  2100, -1108,  2101,
    2104,  2300,  1294,   228,  1295,  2194,  2106,  2195,  2107,  2197,
    1296,  1297,  1101,  2108,  1105,  2112,  2113,   229,   230,  2114,
    1102,  2143,  2142,  2144,   231,  2145,  1106,  1298,  2208,  2209,
    2210,  2211,  2212,  2213,  2214,  2215,  2216,  2149,  1299,  2152,
    2150,  2153,  1107,  2154,  2155,   232,  2156,  2160,  2161,  2164,
    2163,  2165,  2222,  2166,  2224,  2167,  2171,  2172,  1103,  2174,
    2175,  2176,  2177,  1300,  2181,  1301,  1104,   293,  2182,  2185,
     710,  2230,   428,  2183,  2186,  1302,  2188,  2234,  2189,  2303,
    2191,  2198,  2200,   233,  2203,  1303,  2237,  2238,  2239,  2240,
    2241,  2242,  2243,  2244,  2245,  2246,  2206,  2217,  2259,  2260,
    2261,  2262,  2263,  2264,  2265,  2266,  2267,  2268,  2269,  2270,
    2698,  2273,  1105,  2274,  2275,  2276,  2218,  2635,  2219,  1304,
    2220,  2221,  2251,  2225,  1106,  2272,  2277,   428,  2286,   795,
    2278,  2281,  2287,  2290,   814,  2304,   234,  2305,  2306,  2309,
    1107,  2317,  2320,  2321,  2322,  2323,   235,  2324,   442,  2251,
    2350,  2252,  2352,  2354,  2357,  2776,  2359,  2360,  2361,  2365,
    2366,  2295,  1854,  2296,  2367,  2297,  2368,  2299,  1859,   428,
    2301,  2369,  2302,  2370,  2374,   236,  2375,  2465,  2376,  2307,
    2308,  2377,  2378,  2698,  2379,  2383,  2312,  2384,  2313,  2385,
    1872,  2392,  2316,  1874,  2395,  2318,  2403,  1878,  1679,  2406,
    2409,  2410,  2412,  2415,  2416,  2253,  2417,  2446,  2447,  2420,
    2449,  2450,  2425,   107,  2453,  2454,  2429,   504,  1904,   511,
     514,  2445,   519,   523,  1910,  2466,  2495,  1364,  2496,  2467,
    2499,  2508,  1923,  2505,  2506,  1926,  2511,  2468,  2469,  2470,
    2353,  2471,  2473,  2512,  1931,  1932,  2513,  2514,  2705,  2515,
    2517,   590,  2523,  2524,  2533,  1936,  2542,  2551,  2557,  2561,
    2564,  2570,  2578,  2589,  2711,  2600,  2601,  2746,  2602,  2603,
     606,   612,  2604,  2605,   834,  2620,  2627,  2501,  2630,  2646,
    2631,   879,  2633,  2319,  2634,  2472,  2641,  2671,   884,  2677,
    2681,   885,  2680,  2418,  2682,  2687,   886,   110,  2702,  2706,
     888,  2703,  2704,  2712,  2714,  2725,  2733,  2695,  2736,  2739,
    2747,  2748,  2749,  2750,   696,  2757,  2760,  2743,  2770,  2771,
    2777,  2785,  2351,  2789,  2790,  2792,   706,  2796,  2798,     0,
    2799,  2800,  2801,  1164,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2423,     0,   727,     0,     0,     0,
       0,     0,     0,   112,     0,  2430,  2431,  2432,  2433,  2434,
    2435,  2436,  2437,  2438,  2439,  2440,     0,   947,     0,     0,
       0,  2443,     0,     0,     0,   428,   428,     0,   428,   428,
    2752,  2754,   428,   428,  2455,  2456,  2457,  2458,  2459,  2460,
       0,  2462,  2463,  2464,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2475,  2476,  2477,
    2478,     0,  2480,  2481,  2482,  2483,  2484,  2485,   118,  2487,
       0,     0,  2491,  2492,     0,  2581,     0,     0,     0,  2584,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2500,     0,     0,   428,  2502,     0,     0,     0,
    2504,     0,     0,     0,  2507,     0,   830,     0,     0,     0,
       0,     0,     0,     0,     0,  2618,     0,   837,     0,     0,
       0,     0,     0,     0,     0,     0,   845,     0,     0,     0,
       0,     0,     0,  1136,     0,     0,     0,     0,     0,     0,
    1142,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2525,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,     0,     0,
       0,     0,     0,     0,   882,   883,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   887,     0,     0,
       0,     0,   890,     0,     0,     0,     0,     0,     0,     0,
       0,   902,  2572,     0,     0,     0,  2574,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2575,  2576,     0,     0,
       0,     0,  2580,   428,     0,     0,  2583,   428,     0,     0,
       0,     0,  2588,     0,     0,  2592,  2593,  1230,     0,  1768,
       0,     0,     0,     0,  1232,     0,     0,     0,     0,     0,
       0,  1778,     0,     0,  2610,  2611,  2202,  2613,  2614,  2615,
    2616,  2617,     0,   428,  2619,     0,     0,     0,  2622,  1839,
    1840,     0,     0,   949,   950,   951,   952,     0,     0,     0,
       0,  2632,     0,     0,     0,     0,  2636,     0,     0,  1248,
    1249,     0,  2227,     0,  1253,     0,     0,  1256,     0,     0,
    2315,     0,  2647,   651,   652,     0,     0,     0,     0,  1265,
       0,     0,     0,     0,     0,     0,  2326,  2327,  2328,     0,
       0,  2330,     0,  2332,  2333,     0,     0,  2335,  2336,  2337,
       0,     0,  2339,  2340,  1095,     0,  2343,     0,  2345,  2346,
       0,  2348,     0,     0,  2659,     0,     0,     0,     0,  2663,
       0,  2665,     0,     0,     0,     0,     0,  2668,     0,     0,
     653,     0,     0,  1347,     0,     0,   654,     0,     0,     0,
    2675,     0,     0,   655,     0,   656,     0,     0,     0,     0,
     657,     0,     0,   658,     0,     0,     0,     0,  2686,   659,
       0,  2720,  2690,     0,     0,  1398,     0,     0,     0,     0,
     660,     0,     0,     0,     0,     0,   661,     0,     0,     0,
    1403,     0,     0,  2710,     0,   662,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     663,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2723,     0,     0,     0,     0,  2728,     0,  2730,     0,  2419,
       0,   664,  2422,     0,  2734,    64,    65,  2426,     0,  2737,
    2427,     0,     0,     0,  2740,     0,   665,     0,     0,     0,
       0,   107,     0,     0,     0,     0,   666,   667,     0,  2442,
       0,     0,     0,     0,     0,     0,     0,  2751,  2753,     0,
       0,     0,     0,     0,     0,     0,  1231,   668,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1236,   109,
       0,  2763,     0,     0,  2764,     0,     0,  2766,     0,     0,
     669,     0,     0,     0,     0,     0,     0,     0,  2772,  2773,
    2774,  2775,     0,     0,   670,     0,   671,     0,     0,     0,
    2784,     0,     0,  2787,     0,  1246,     0,     0,     0,     0,
    2791,   672,  2793,     0,     0,   110,   673,     0,     0,     0,
       0,     0,     0,   674,     0,     0,     0,  2510,     0,     0,
     675,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2759,   676,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2519,     0,
       0,   677,   678,     0,   679,     0,     0,     0,  1627,     0,
       0,   112,     0,     0,     0,     0,     0,     0,  1336,  2779,
       0,     0,  2782,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1651,     0,
       0,     0,     0,  1656,   680,     0,     0,     0,     0,     0,
       0,     0,     0,  1662,     0,     0,  2103,     0,     0,     0,
       0,     0,  2494,     0,  2109,  2110,     0,     0,     0,     0,
       0,   117,     0,     0,     0,     0,   118,  2569,     0,  2146,
    2147,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2157,  2158,     0,  1482,     0,     0,     0,  2577,     0,     0,
       0,  2168,  2169,     0,  2582,     0,     0,  2585,  2586,     0,
       0,  2178,  2179,     0,     0,     0,     0,  2184,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2187,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1752,  1753,  1754,     0,     0,     0,  1542,     0,     0,
       0,  1756,  1757,  1758,     0,     0,     0,  1548,  1769,  1770,
    1771,     0,     0,  1772,  1773,     0,  1775,  1776,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,  1848,  1849,     0,     0,
    1851,  1852,     0,     0,     0,     0,  1511,     0,     0,     0,
       0,  1512,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2660,     0,     0,     0,     0,     0,
       0,     0,     0,  1513,  1514,     0,  1515,  1516,     0,     0,
       0,     0,     0,  2670,     0,     0,     0,  1517,     0,     0,
       0,     0,     0,     0,     0,  2606,     0,     0,     0,  1518,
    1519,  1624,     0,     0,     0,     0,     0,  1520,     0,     0,
    1521,     0,     0,     0,     0,  2624,     0,     0,  1632,  2628,
       0,     0,     0,     0,     0,     0,     0,     0,  1522,  1925,
       0,     0,     0,     0,     0,  1523,  1524,     0,     0,  1525,
       0,     0,  1657,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1663,     0,     0,     0,     0,  2721,  2722,     0,
    2724,     0,  2726,  2727,     0,  2729,     0,     0,     0,     0,
       0,  1680,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1692,     0,     0,     0,     0,  1700,     0,     0,  1974,
       0,     0,     0,     0,     0,  1980,     0,     0,     0,  1526,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2756,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2356,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2358,     0,     0,     0,
    2362,  2363,     0,     0,     0,     0,     0,     0,     0,  2371,
    2372,  2701,     0,     0,  1527,     0,     0,     0,  2380,  2381,
    1528,     0,     0,  2788,  2386,     0,     0,     0,     0,     0,
       0,     0,     0,  2017,  2396,  2397,     0,  1529,     0,  2022,
       0,     0,     0,     0,     0,  2407,  2408,  1530,     0,     0,
       0,     0,     0,     0,     0,     0,  2411,     0,     0,     0,
       0,     0,     0,     0,  2037,  2413,     0,  2414,     0,     0,
    2043,     0,     0,     0,  1531,  1532,     0,     0,     0,  1855,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1533,     0,     0,     0,  2059,
       0,     0,     0,     0,     0,     0,     0,  2066,     0,  1877,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2769,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1911,     0,
    1534,  1912,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1928,  1929,     0,     0,  2094,     0,     0,     0,  1933,
       0,     0,     0,     0,     0,     0,  1934,     0,  2102,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2105,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1973,     0,     0,  1976,
    1977,     0,     0,     0,     0,     0,     0,     0,  1984,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2527,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2536,
    2190,     0,     0,     0,     0,     0,     0,     0,  2545,     0,
       0,     0,  2192,     0,     0,     0,     0,  2554,     0,     0,
       0,     0,     0,     0,  2556,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2205,  2560,   106,     0,     0,     0,
       0,  2563,     0,     0,  2565,  2019,     0,  2566,     0,     0,
       0,   107,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2035,     0,     0,     0,     0,  2228,  2229,
       0,     0,   108,     0,     0,     0,     0,     0,     0,  2044,
       0,     0,     0,     0,     0,  2232,  2233,     0,     0,   109,
    2235,  2236,     0,     0,  2049,     0,  2050,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2058,     0,     0,  2060,
       0,  2061,  2062,  2063,  2065,     0,     0,  2067,     0,     0,
    2068,     0,     0,  2069,  2071,     0,  2072,  2073,  2074,  2076,
    2279,  2077,  2078,  2283,  2284,   110,     0,  2080,  2081,  2082,
       0,  2288,  2083,  2084,     0,     0,     0,     0,  2085,  2086,
    1200,     0,     0,   111,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2648,     0,     0,     0,     0,
       0,     0,     0,     0,  2650,     0,  2298,     0,     0,     0,
       0,     0,     0,  2652,     0,     0,     0,     0,     0,  2655,
       0,   112,  2310,  2657,     0,     0,  2658,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2325,     0,     0,     0,     0,
    2329,     0,     0,     0,     0,     0,  2334,     0,     0,   113,
       0,  2338,     0,     0,     0,  2341,     0,   114,  2344,     0,
       0,  2347,     0,  2349,     0,   115,   116,     0,     0,     0,
       0,   117,     0,  2355,     0,     0,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2193,     0,     0,     0,  2196,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2201,     0,
       0,  2204,     0,  2387,  2388,  2389,  2390,  2391,     0,  2393,
    2394,     0,     0,     0,  2398,  2399,  2400,  2401,  2402,     0,
    2404,  2405,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,  2271,     0,     0,
       0,   149,     0,     0,     0,     0,   150,   151,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2289,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2486,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    64,    65,     0,  2498,     0,     0,     0,
       0,  2311,     0,     0,     0,     0,     0,     0,     0,   107,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,     0,     0,
       0,     0,     0,     0,  2342,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2526,     0,     0,  2528,
    2529,  2530,  2531,  2532,     0,  2534,  2535,     0,  2537,  2538,
    2539,  2540,  2541,     0,  2543,  2544,     0,  2546,  2547,  2548,
    2549,  2550,     0,  2552,  2553,     0,  2555,     0,     0,     0,
       0,     0,     0,   110,     0,     0,  2558,  2559,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2562,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   522,
       0,     0,     0,     0,     0,  2567,     0,     0,     0,     0,
       0,  2571,     0,     0,   107,  2573,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   112,
       0,  2579,     0,     0,     0,     0,     0,     0,     0,     0,
    2421,     0,     0,  2424,     0,     0,     0,     0,     0,     0,
       0,  2428,   109,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2441,     0,     0,
    2444,     0,     0,   348,     0,  2448,     0,     0,  2451,  2452,
     349,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   118,     0,     0,     0,   110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2649,     0,     0,     0,
       0,     0,     0,     0,     0,  2651,     0,     0,     0,     0,
       0,     0,     0,     0,  2653,     0,  2654,     0,     0,     0,
    2656,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2516,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2679,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   117,     0,     0,     0,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,  2715,     0,
    2716,     0,  2717,     0,     0,  2718,     0,  2719,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2568,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2742,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2587,     0,
    2755,     0,   350,     0,     0,   351,     0,     0,     0,  2598,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
       0,     0,     0,     0,     0,  2780,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   107,     0,     0,  2640,     0,
       0,     0,  2645,     0,     0,  2794,     0,     0,  2795,     0,
       0,     0,     0,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,     0,   495,   496,     0,     0,   497,     0,     0,   607,
     107,     0,     0,     0,     0,  2661,  2662,     0,  2664,     0,
       0,     0,     0,  2666,  2667,     0,     0,     0,  2669,   498,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   110,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     608,     0,     0,     0,     0,     0,     0,     0,     0,   982,
       0,  2691,     0,     0,   983,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2713,     0,     0,     0,
       0,     0,     0,     0,   110,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   499,   609,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   500,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   501,     0,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     118,     0,     0,     0,     0,     0,     0,   610,     0,     0,
    2758,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2767,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2778,     0,     0,  2781,     0,     0,     0,     0,
       0,     0,     0,   502,     0,   118,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     0,     0,     0,     0,     0,     0,
       0,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,   503,     0,     0,   611,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,  1004,  1005,  1006,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1007,  1008,   107,     0,  1009,     0,
       0,  1010,     0,     0,     0,     0,     0,     0,  1011,     0,
       0,     0,  1012,     0,     0,     0,     0,     0,     0,     0,
    1013,  1014,     0,     0,   107,     0,     0,     0,  1015,  1016,
       0,     0,     0,     0,   109,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1017,     0,     0,     0,
       0,     0,  1018,     0,     0,     0,  1019,  1020,     0,     0,
    1021,     0,   109,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   107,  1022,     0,     0,     0,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1023,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   110,     0,
       0,     0,     0,     0,     0,     0,   509,     0,     0,     0,
    1024,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   112,     0,     0,     0,
       0,     0,     0,  1025,     0,     0,   107,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   110,
       0,     0,     0,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,  1026,     0,  1027,     0,     0,     0,     0,
       0,  1028,  1029,     0,  1335,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   117,  1030,  1031,     0,
       0,   118,     0,     0,     0,     0,     0,     0,  1032,  1033,
       0,     0,     0,     0,     0,   112,     0,     0,     0,     0,
       0,     0,     0,     0,   117,     0,     0,     0,     0,   118,
     110,     0,     0,     0,  1034,     0,  1035,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1036,     0,
    1037,     0,     0,     0,     0,  1372,  1038,     0,     0,     0,
       0,     0,   513,     0,     0,     0,   107,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     118,     0,     0,     0,     0,     0,   112,     0,     0,     0,
    1039,     0,     0,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   510,
     110,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,     0,     0,     0,     0,     0,   112,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,  1373,     0,     0,     0,     0,
       0,     0,     0,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   118,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,     0,     0,     0,     0,     1,     0,     0,     2,     0,
       0,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     0,     0,     0,     0,     5,
       6,     0,     7,     8,     9,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,     0,    11,
       0,    12,    13,     0,     0,     0,     0,     0,     0,     0,
       0,    14,    15,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,    16,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    17,     0,     0,     0,    18,     0,
       0,    19,     0,     0,     0,    20,    21,     0,     0,     0,
       0,     0,    22,     0,     0,     0,     0,     0,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,     0,     0,    25,    26,    27,     0,     0,
      28,    29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,    32,    33,     0,     0,     0,     0,     0,     0,
     175,     0,     0,   176,     0,    34,   177,    35,     0,     0,
       0,     0,     0,     0,    36,     0,     0,     0,    37,     0,
       0,     0,    38,     0,    39,   178,    40,   179,   180,   181,
       0,    41,     0,     0,     0,     0,     0,   182,     0,   183,
       0,     0,     0,     0,   184,    42,   185,   186,   187,     0,
       0,    43,     0,     0,   188,     0,   189,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    44,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,     0,
      47,     0,     0,     0,     0,   190,    48,     0,     0,    49,
      50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   191,     0,     0,     0,     0,     0,     0,
       0,   192,     0,   193,   194,     0,     0,   195,     0,     0,
      51,   196,     0,   197,     0,     0,     0,    52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   198,   199,     0,     0,   200,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   201,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   202,   203,     0,     0,
       0,     0,     0,     0,   204,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   205,
       0,   206,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   207,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   208,   209,     0,     0,     0,     0,     0,     0,     0,
     210,     0,     0,     0,     0,     0,     0,   211,     0,     0,
       0,     0,     0,   212,     0,   213,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   214
};

static const yytype_int16 yycheck[] =
{
       3,  1005,    50,  1458,     4,   671,   486,  1659,    11,  1661,
     976,     5,     4,   979,   666,   667,     3,     4,     5,     4,
       5,     5,     5,     5,     0,     3,     4,   123,    17,    32,
     996,    62,  1157,    14,  1159,     3,     4,    40,     5,     3,
       4,    27,    32,     4,     5,    20,    49,     4,    62,    52,
      27,    55,    55,     3,     4,    21,    59,     3,     4,    62,
    1185,  1186,  1187,    66,    67,     3,     4,    70,     3,     4,
      73,    74,    49,     4,    77,    52,    17,    47,    81,   107,
      40,    62,    67,    86,     4,   136,    63,    91,    37,    13,
      32,    17,     5,     4,     5,    88,    99,   100,   101,   102,
     103,   104,     4,   123,    89,     3,     4,     6,   122,    86,
      44,    32,  2697,   170,    32,    79,     4,   120,   101,   159,
     196,    57,     5,     4,   107,    21,     5,   104,    17,   196,
       3,     4,   105,     5,     3,     4,   121,    67,    17,   143,
       4,    84,   884,   885,   886,   159,   242,   187,    31,   289,
       5,   167,   155,   113,    88,   216,    17,   142,   101,  2744,
     121,     3,     4,    36,    21,    62,   159,    36,   168,   141,
     198,   228,     3,     4,    33,   178,   147,   134,    21,    67,
     183,    12,     4,     3,     4,   261,    67,   254,     3,     4,
       3,     4,   267,     3,     4,   113,   234,     3,     4,   274,
     251,     4,    16,    67,    16,   947,   119,   179,   200,     4,
     121,   175,   193,     3,     4,   207,   208,   190,    60,   197,
     205,    36,   242,   122,   252,    40,   215,    40,   213,   214,
       3,     4,   143,   121,    21,   161,   230,   197,   295,   100,
     121,   137,   228,   246,   205,    67,   250,    60,   309,   198,
     298,   243,   213,   214,   270,   190,   287,   121,   924,   262,
     263,   195,   135,   238,   278,   183,   135,   185,   192,   187,
     188,   442,    21,    21,   215,   278,   242,   280,   196,   310,
     264,   452,   195,   219,    57,   288,   289,   268,   291,   292,
     254,   294,   190,   211,   205,     5,   286,   278,   113,   121,
     113,   304,   213,   214,    14,    15,   290,   277,   275,   298,
       4,   314,   315,   289,    27,   300,   316,   205,   121,   297,
     135,   306,   309,   306,   205,   213,   214,   309,   309,   297,
      14,    15,   213,   214,   337,   338,   339,   250,   341,   300,
     297,   205,   345,   346,   286,   306,   242,   297,   250,   213,
     214,   297,    62,   356,   357,   316,    64,   298,   350,   297,
     291,   364,   275,  1029,   349,   286,   369,   370,   353,   354,
     355,   291,   307,   291,   377,   264,   272,   380,    62,   356,
     252,  1047,   197,   205,   197,   242,    27,   199,   349,   300,
     287,   213,   214,   354,   355,   250,   399,   400,   106,   242,
     190,   196,   205,   406,   407,   408,   196,   410,   228,   307,
     213,   214,   300,   310,    40,  1419,   351,   352,   228,   300,
      27,   424,   228,  1389,   297,   428,  1392,   121,   297,  1081,
     433,   434,   435,   436,   437,   438,   300,   440,   349,   442,
     443,   444,  1446,   354,   355,   235,   219,    62,     5,   452,
     453,    37,   247,   351,   352,   242,   169,    14,    15,   254,
    1112,   349,    48,  1588,     4,  1469,   354,   355,   349,    40,
      37,   261,    40,   354,   355,    51,     3,     4,   300,    88,
     293,    48,   297,   193,   194,   349,    99,   113,   291,    75,
     354,   355,    26,   242,   242,   123,    67,   300,     0,    12,
      58,     4,     4,   506,   507,    62,  1248,   122,    75,   193,
     194,   205,    62,   171,  1256,    67,    34,   307,     4,   213,
     214,   524,   180,   441,     5,   101,     4,   349,   169,   242,
     101,   239,   354,   355,   110,     4,   107,    62,    79,   710,
     588,    54,   113,     4,     4,   113,   349,   255,   256,   552,
     159,   354,   355,    62,    57,     4,   264,    28,   268,    72,
     131,   351,   352,   139,   123,   234,   152,    89,   278,   279,
      30,   197,   122,   283,   287,   133,    27,    67,     0,    40,
     114,   152,   585,   631,   268,   152,   126,   274,    57,   102,
      62,   109,   126,   267,   278,   279,   167,   122,    62,   309,
     274,   242,   650,   189,     3,     4,   300,   120,     3,     4,
      62,   124,   530,   122,    27,     5,    14,    64,   123,   622,
     248,   228,   189,    21,   137,   309,   123,   198,    26,   197,
      62,  1297,     3,     4,   175,    33,   193,   194,    64,   347,
     348,   131,  1308,   269,     4,   648,   287,     3,     4,   567,
     122,     5,   113,   266,     5,   349,    54,  2309,   122,   106,
     354,   355,   665,   278,   123,   668,   237,   157,     5,   209,
     122,   229,   258,    71,   845,    40,   210,    14,    15,   126,
     106,   252,   153,   242,   211,     5,   244,    31,   206,   223,
     122,   258,   695,   264,    14,    15,   699,   700,   701,   702,
     250,   269,   705,   163,   707,   176,   709,   710,   711,   180,
     196,   268,    46,   254,     5,   152,   219,   888,     5,   170,
     291,   278,   279,   299,   310,    62,   283,   294,   278,    28,
     197,    65,   303,    67,   305,   306,   197,   242,   786,   132,
       4,     5,    62,   310,     4,   242,   119,   237,   113,   307,
     219,    67,   309,   278,   125,     5,   216,   170,   120,    62,
     289,   232,   160,   161,   162,   163,   164,   165,    30,   278,
     168,   169,   170,   171,   345,   778,   779,   228,   781,   782,
     783,   784,   242,   242,   297,   141,   141,   171,    62,   250,
      62,    30,   239,   796,   797,    42,    43,    61,  1764,   289,
     803,   804,   273,    67,    46,   200,   278,    57,   255,   256,
     281,   282,   211,   239,   278,   228,    66,    33,  1784,   122,
     823,   824,   825,   179,   179,    67,   278,   264,     5,   255,
     256,    67,   197,  1799,    96,   228,  1802,   840,   841,   842,
      82,   844,   845,   846,  1810,   848,   278,  1813,   122,    92,
     122,   185,   116,   107,   153,  1821,   193,   194,  1824,    90,
    1864,   132,   260,   261,     4,  1831,   869,   131,   871,  1994,
    1995,  1996,    12,   193,   194,    45,  1880,   176,   881,     3,
       4,   180,   146,     3,     4,   888,   889,    16,   152,    67,
      60,   894,   290,   157,   287,     3,     4,    17,    90,   170,
     347,   348,  1554,   165,     5,  1909,   235,   910,   911,   243,
       4,     5,    82,    14,    15,   918,   919,   920,    24,    25,
    1662,   347,   348,   926,   163,     6,   173,   174,   931,   172,
     206,   268,   102,   232,   982,   333,   334,   335,   288,   942,
      71,   278,   279,   185,   198,    67,   283,   211,   268,   119,
      84,   869,   122,   287,   201,   958,    73,   228,   278,   279,
      22,    62,   296,   283,    31,  1136,   230,   101,    83,   219,
       5,   235,   309,   237,   273,   278,     5,   216,    83,   149,
     150,     4,   281,   282,  2592,     3,     4,    99,    50,   309,
       4,    53,   254,    99,    56,     3,     4,   259,   252,   263,
     264,   243,  2610,   242,   278,    22,   278,   271,    89,  2013,
    2465,     5,     3,     4,    14,    15,   287,   125,     5,   262,
     152,    83,  1025,     4,     5,   289,    14,    15,     4,     3,
       4,     4,   202,    50,     4,     5,    53,   280,    12,   154,
     171,   122,   212,  1046,   178,   287,    14,    15,     5,   154,
     112,    26,  1055,   115,   296,     3,     4,     3,     4,     5,
       3,     4,    62,     3,     4,     4,    83,    89,  1071,    60,
    1073,    19,   348,     5,    62,  1078,  1079,  1080,   354,     5,
     356,   345,  1253,    44,     5,  1088,    47,   221,  1091,   221,
    1093,    39,   193,   194,    62,   112,   118,     4,   115,     4,
      40,     5,    14,    15,   274,   275,  1109,   125,  1111,    57,
       4,   226,   227,   122,  1117,  1118,    77,    60,   249,     3,
       4,   226,   227,   257,    85,  2733,   241,   258,     5,  1132,
    1133,  2739,   264,  1136,  1137,  1138,   241,     3,     4,   114,
       4,  1144,   275,  1146,     4,     5,  1149,     4,  1151,     4,
      62,   126,  1200,   190,  2120,   103,    14,    15,     4,   196,
       3,     4,     5,  2129,     7,     8,   188,   268,   230,   284,
     302,     5,  2138,   113,    40,   345,     4,   278,   279,   284,
       4,   203,   283,     4,   145,  1188,   161,   200,  2796,  1192,
    2798,  1194,     4,   193,   194,  1198,     3,     4,   235,     4,
       5,   263,    35,     4,    62,   193,   194,     4,   309,     5,
    1213,   159,  1215,   230,  1217,  1218,  1219,  1220,   616,   430,
     431,  1224,  1225,     5,   261,   193,   194,   289,     9,  1232,
       5,    11,  1974,    40,   195,   210,  1239,    14,    15,  2243,
    1243,  1244,  1245,   265,    95,     4,   263,   113,   223,   197,
    1253,  1254,   213,   214,  1257,  2259,   171,   197,   274,   220,
    2264,   222,   113,     4,  1267,   171,  1269,   180,   268,  1272,
     307,   219,   670,  2463,     4,   108,   224,   675,   278,   279,
     268,   193,   194,   199,   306,    62,     5,   235,   199,   250,
     278,   279,     5,     4,   316,  1213,   129,   130,   199,  2489,
     268,  2043,   191,     3,     4,   138,   113,     7,     8,   309,
     278,   279,  1315,   191,  1317,   352,    67,  1320,  1321,    67,
    1323,   309,  1325,   156,  2066,    67,  2457,     5,  1331,  2460,
    1333,  2462,   228,   166,   229,   193,   194,  1340,     5,   190,
       4,   309,  1260,     4,  2475,  2476,     3,     4,     4,   297,
     199,    88,     9,    10,    11,   316,   268,     5,  1276,    88,
       5,  2492,     3,     4,     5,     4,   278,   279,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,     4,   309,     5,     5,
    2590,  2591,     4,   101,  2594,     5,  2596,     3,     4,     5,
     268,     4,  1415,     5,  1417,  1418,   193,   194,  2608,  2609,
     278,   279,    17,  2613,  2614,     4,    17,  2617,     4,   827,
       4,     4,  2622,  2623,    99,     5,  1439,     3,     4,     5,
    1443,     7,     8,     3,     4,     5,     5,     7,     8,     4,
      88,   309,     5,     5,    67,    88,     5,  2461,     4,    62,
       5,     5,     4,     4,  1467,  1468,     5,     5,    81,     5,
    2474,     4,     4,     4,  1477,  2479,     5,    90,  1481,     4,
       4,  2671,    12,     4,  2674,  1488,    12,     4,   101,  2679,
       5,   268,     5,   168,     5,  2685,  1414,     4,     4,  1502,
    2690,   278,   279,     5,  1507,   159,   159,     4,  1511,   263,
    1513,  1514,   291,  1516,  1517,  1518,   119,  1520,   131,   122,
    1523,  1524,  1525,  1526,  1527,  1528,  1529,  1530,  1531,  1532,
    1533,   263,   309,  1536,  1537,  1538,  1539,  2279,     5,   152,
       4,   276,     5,  1546,  1547,     5,  2288,  1550,  1551,  1552,
       5,     5,     4,  1556,  1557,    54,   159,     4,   276,     5,
       5,     5,     5,     5,     4,     4,  1569,  1570,     5,  1572,
    1573,     5,  2762,    72,     5,  2765,     5,     5,     5,     4,
       4,    40,     5,     5,     4,   198,     5,     5,   107,     5,
      89,   242,   195,   242,   141,  2785,   242,   107,   107,  2341,
       5,   215,  2344,   102,    40,  2347,   248,  2349,     5,  2799,
     215,     4,  2802,  2803,     5,     5,   215,  1620,  1621,  1622,
       4,   120,  1625,     4,   237,   124,   215,  1630,  1631,     4,
    1633,  1634,  1635,     5,  1637,  1638,     5,  1640,   137,     5,
    1643,  1644,     5,   246,    20,    21,    22,   250,     5,  1652,
       4,   264,   113,     5,  1052,   113,     5,  1660,     5,     4,
      38,     5,  1665,  1666,     5,     4,    12,     5,     5,     4,
    1673,     5,   275,    49,    50,   278,     5,    53,   177,  1682,
       4,    12,     5,     5,    60,   288,     6,    63,     4,     4,
     303,    67,   305,     5,     4,     4,     4,     4,    38,    75,
      76,     5,     0,     5,   170,    93,   141,    83,   242,   123,
    1108,     4,  1630,   101,   242,  1718,   211,   252,   199,   107,
     242,     4,  1120,     4,     4,     4,  2730,     4,    19,     5,
       5,     5,     5,   276,     5,   111,   112,  1740,  1741,   115,
     128,     5,  1745,     4,     4,   313,     5,     4,  1751,     4,
      41,     4,   242,    44,  1925,   131,  2498,     5,     5,     5,
     242,     4,   242,   313,   152,     4,    56,     4,     4,     4,
       4,     4,   160,   313,     4,   228,   152,    67,     5,     5,
    1698,     5,     5,     4,     6,     5,   313,    78,     5,     4,
    1708,     5,     5,     4,    85,  1713,   228,     4,   228,   175,
       4,     4,   228,    93,    94,    96,    97,   228,   184,  1980,
     198,   101,   103,     5,     5,     4,     4,   107,   206,     5,
       5,     5,     5,     4,   309,     5,     4,     4,     4,     4,
    1228,  1229,     5,     5,     5,   126,     5,     5,   128,     4,
       4,   131,     5,     5,     5,     5,     4,     4,   289,     5,
       4,  2022,   228,   144,   230,  1858,     5,  1860,     5,  1862,
     236,   237,   152,     5,   252,     4,     4,   158,   159,     5,
     160,     5,   276,     5,   165,     5,   264,   253,  1881,  1882,
    1883,  1884,  1885,  1886,  1887,  1888,  1889,     4,   264,     5,
       4,   276,   280,     5,     5,   186,     5,     4,     4,   276,
       5,     5,  1905,     5,  1907,     5,     4,     4,   198,     5,
       5,     5,     5,   289,     4,   291,   206,    32,     4,     4,
     293,  1924,  1925,     5,     4,   301,     4,  1930,     4,    12,
       5,     5,     5,   224,     5,   311,  1939,  1940,  1941,  1942,
    1943,  1944,  1945,  1946,  1947,  1948,     5,     4,  1951,  1952,
    1953,  1954,  1955,  1956,  1957,  1958,  1959,  1960,  1961,  1962,
    2626,  1964,   252,  1966,  1967,  1968,     4,     6,     5,   345,
       4,     4,   289,     5,   264,     5,     4,  1980,  1981,   352,
       4,     4,     4,     4,   384,     5,   277,     5,     4,     4,
     280,     5,     5,     5,     5,     5,   287,     5,   113,   289,
       4,   291,     5,     4,     4,  2755,     5,     5,     5,     4,
       4,  2014,  1410,  2016,     5,  2018,     5,  2020,  1416,  2022,
    2023,     5,  2025,     5,     4,   316,     4,   357,     5,  2032,
    2033,     5,     5,  2699,     5,     4,  2039,     4,  2041,     5,
    1438,     4,  2045,  1441,     4,  2048,     4,  1445,     4,     4,
       4,     4,     4,     4,     4,   345,     4,  2228,  2229,     4,
    2231,  2232,     4,    19,  2235,  2236,     4,   182,  1466,   184,
     185,     4,   187,   188,  1472,   357,     4,   975,     4,   357,
       4,     4,  1480,     5,     5,  1483,     5,   357,   357,   357,
    2093,   357,   357,     4,  1492,  1493,     5,     4,     6,     5,
       5,   216,     5,     4,     4,  1503,     4,     4,     4,     4,
       4,     4,     4,     4,  2636,     5,     4,   357,     5,     5,
     235,   236,     5,     4,   429,     5,     5,  2298,     4,  2524,
       5,   504,     5,  2051,     4,  2254,     5,     4,   511,     4,
       4,   514,     5,  2191,     4,     4,   519,   103,     4,     4,
     523,     5,     5,     4,     4,     4,     4,  2624,     5,     4,
    2699,     5,     5,     4,   279,     4,     4,  2695,     5,     5,
       5,     4,  2090,     5,     5,     5,   291,     4,     4,    -1,
       5,     5,     5,   745,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2197,    -1,   311,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,  2208,  2209,  2210,  2211,  2212,
    2213,  2214,  2215,  2216,  2217,  2218,    -1,   590,    -1,    -1,
      -1,  2224,    -1,    -1,    -1,  2228,  2229,    -1,  2231,  2232,
    2710,  2711,  2235,  2236,  2237,  2238,  2239,  2240,  2241,  2242,
      -1,  2244,  2245,  2246,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2260,  2261,  2262,
    2263,    -1,  2265,  2266,  2267,  2268,  2269,  2270,   224,  2272,
      -1,    -1,  2275,  2276,    -1,  2446,    -1,    -1,    -1,  2450,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2295,    -1,    -1,  2298,  2299,    -1,    -1,    -1,
    2303,    -1,    -1,    -1,  2307,    -1,   421,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2486,    -1,   432,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   441,    -1,    -1,    -1,
      -1,    -1,    -1,   706,    -1,    -1,    -1,    -1,    -1,    -1,
     713,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2353,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,    -1,    -1,
      -1,    -1,    -1,    -1,   509,   510,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   522,    -1,    -1,
      -1,    -1,   527,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   536,  2425,    -1,    -1,    -1,  2429,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2439,  2440,    -1,    -1,
      -1,    -1,  2445,  2446,    -1,    -1,  2449,  2450,    -1,    -1,
      -1,    -1,  2455,    -1,    -1,  2458,  2459,   830,    -1,  1357,
      -1,    -1,    -1,    -1,   837,    -1,    -1,    -1,    -1,    -1,
      -1,  1369,    -1,    -1,  2477,  2478,  1874,  2480,  2481,  2482,
    2483,  2484,    -1,  2486,  2487,    -1,    -1,    -1,  2491,  1387,
    1388,    -1,    -1,   608,   609,   610,   611,    -1,    -1,    -1,
      -1,  2504,    -1,    -1,    -1,    -1,  2509,    -1,    -1,   882,
     883,    -1,  1910,    -1,   887,    -1,    -1,   890,    -1,    -1,
    2044,    -1,  2525,     4,     5,    -1,    -1,    -1,    -1,   902,
      -1,    -1,    -1,    -1,    -1,    -1,  2060,  2061,  2062,    -1,
      -1,  2065,    -1,  2067,  2068,    -1,    -1,  2071,  2072,  2073,
      -1,    -1,  2076,  2077,   669,    -1,  2080,    -1,  2082,  2083,
      -1,  2085,    -1,    -1,  2567,    -1,    -1,    -1,    -1,  2572,
      -1,  2574,    -1,    -1,    -1,    -1,    -1,  2580,    -1,    -1,
      61,    -1,    -1,   963,    -1,    -1,    67,    -1,    -1,    -1,
    2593,    -1,    -1,    74,    -1,    76,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    84,    -1,    -1,    -1,    -1,  2611,    90,
      -1,  2659,  2615,    -1,    -1,   995,    -1,    -1,    -1,    -1,
     101,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,
    1003,    -1,    -1,  2636,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2663,    -1,    -1,    -1,    -1,  2668,    -1,  2670,    -1,  2193,
      -1,   152,  2196,    -1,  2677,     3,     4,  2201,    -1,  2682,
    2204,    -1,    -1,    -1,  2687,    -1,   167,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,   177,   178,    -1,  2223,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2710,  2711,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   831,   198,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   843,    57,
      -1,  2734,    -1,    -1,  2737,    -1,    -1,  2740,    -1,    -1,
     221,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2751,  2752,
    2753,  2754,    -1,    -1,   235,    -1,   237,    -1,    -1,    -1,
    2763,    -1,    -1,  2766,    -1,   880,    -1,    -1,    -1,    -1,
    2773,   252,  2775,    -1,    -1,   103,   257,    -1,    -1,    -1,
      -1,    -1,    -1,   264,    -1,    -1,    -1,  2311,    -1,    -1,
     271,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2725,   289,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2342,    -1,
      -1,   302,   303,    -1,   305,    -1,    -1,    -1,  1201,    -1,
      -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,   953,  2757,
      -1,    -1,  2760,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1231,    -1,
      -1,    -1,    -1,  1236,   345,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1246,    -1,    -1,  1774,    -1,    -1,    -1,
      -1,    -1,  2280,    -1,  1782,  1783,    -1,    -1,    -1,    -1,
      -1,   219,    -1,    -1,    -1,    -1,   224,  2421,    -1,  1797,
    1798,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1808,  1809,    -1,  1028,    -1,    -1,    -1,  2441,    -1,    -1,
      -1,  1819,  1820,    -1,  2448,    -1,    -1,  2451,  2452,    -1,
      -1,  1829,  1830,    -1,    -1,    -1,    -1,  1835,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1845,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1341,  1342,  1343,    -1,    -1,    -1,  1082,    -1,    -1,
      -1,  1351,  1352,  1353,    -1,    -1,    -1,  1092,  1358,  1359,
    1360,    -1,    -1,  1363,  1364,    -1,  1366,  1367,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,  1396,  1397,    -1,    -1,
    1400,  1401,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2568,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    -1,    52,    53,    -1,    -1,
      -1,    -1,    -1,  2587,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2473,    -1,    -1,    -1,    75,
      76,  1196,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,  2493,    -1,    -1,  1213,  2497,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,  1482,
      -1,    -1,    -1,    -1,    -1,   111,   112,    -1,    -1,   115,
      -1,    -1,  1237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1247,    -1,    -1,    -1,    -1,  2661,  2662,    -1,
    2664,    -1,  2666,  2667,    -1,  2669,    -1,    -1,    -1,    -1,
      -1,  1266,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1276,    -1,    -1,    -1,    -1,  1281,    -1,    -1,  1542,
      -1,    -1,    -1,    -1,    -1,  1548,    -1,    -1,    -1,   175,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2720,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2114,    -1,    -1,    -1,
    2118,  2119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2127,
    2128,  2629,    -1,    -1,   230,    -1,    -1,    -1,  2136,  2137,
     236,    -1,    -1,  2767,  2142,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1626,  2152,  2153,    -1,   253,    -1,  1632,
      -1,    -1,    -1,    -1,    -1,  2163,  2164,   263,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2174,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1657,  2183,    -1,  2185,    -1,    -1,
    1663,    -1,    -1,    -1,   290,   291,    -1,    -1,    -1,  1414,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   311,    -1,    -1,    -1,  1692,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1700,    -1,  1444,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2746,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1473,    -1,
     356,  1476,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1486,  1487,    -1,    -1,  1755,    -1,    -1,    -1,  1494,
      -1,    -1,    -1,    -1,    -1,    -1,  1501,    -1,  1768,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1778,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1541,    -1,    -1,  1544,
    1545,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1553,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2357,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2367,
    1850,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2376,    -1,
      -1,    -1,  1855,    -1,    -1,    -1,    -1,  2385,    -1,    -1,
      -1,    -1,    -1,    -1,  2392,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1877,  2403,     4,    -1,    -1,    -1,
      -1,  2409,    -1,    -1,  2412,  1630,    -1,  2415,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1648,    -1,    -1,    -1,    -1,  1911,  1912,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,  1664,
      -1,    -1,    -1,    -1,    -1,  1928,  1929,    -1,    -1,    57,
    1933,  1934,    -1,    -1,  1679,    -1,  1681,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1691,    -1,    -1,  1694,
      -1,  1696,  1697,  1698,  1699,    -1,    -1,  1702,    -1,    -1,
    1705,    -1,    -1,  1708,  1709,    -1,  1711,  1712,  1713,  1714,
    1973,  1716,  1717,  1976,  1977,   103,    -1,  1722,  1723,  1724,
      -1,  1984,  1727,  1728,    -1,    -1,    -1,    -1,  1733,  1734,
       6,    -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2533,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2542,    -1,  2019,    -1,    -1,    -1,
      -1,    -1,    -1,  2551,    -1,    -1,    -1,    -1,    -1,  2557,
      -1,   159,  2035,  2561,    -1,    -1,  2564,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2058,    -1,    -1,    -1,    -1,
    2063,    -1,    -1,    -1,    -1,    -1,  2069,    -1,    -1,   197,
      -1,  2074,    -1,    -1,    -1,  2078,    -1,   205,  2081,    -1,
      -1,  2084,    -1,  2086,    -1,   213,   214,    -1,    -1,    -1,
      -1,   219,    -1,  2103,    -1,    -1,   224,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1857,    -1,    -1,    -1,  1861,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1873,    -1,
      -1,  1876,    -1,  2143,  2144,  2145,  2146,  2147,    -1,  2149,
    2150,    -1,    -1,    -1,  2154,  2155,  2156,  2157,  2158,    -1,
    2160,  2161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1906,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   300,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,    -1,  1962,    -1,    -1,
      -1,   349,    -1,    -1,    -1,    -1,   354,   355,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1985,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2271,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,  2289,    -1,    -1,    -1,
      -1,  2036,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,    -1,    -1,
      -1,    -1,    -1,    -1,  2079,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2356,    -1,    -1,  2359,
    2360,  2361,  2362,  2363,    -1,  2365,  2366,    -1,  2368,  2369,
    2370,  2371,  2372,    -1,  2374,  2375,    -1,  2377,  2378,  2379,
    2380,  2381,    -1,  2383,  2384,    -1,  2386,    -1,    -1,    -1,
      -1,    -1,    -1,   103,    -1,    -1,  2396,  2397,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2407,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,
      -1,    -1,    -1,    -1,    -1,  2418,    -1,    -1,    -1,    -1,
      -1,  2424,    -1,    -1,    19,  2428,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
      -1,  2444,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2195,    -1,    -1,  2198,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2206,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2222,    -1,    -1,
    2225,    -1,    -1,    16,    -1,  2230,    -1,    -1,  2233,  2234,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2536,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2545,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2554,    -1,  2556,    -1,    -1,    -1,
    2560,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2323,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2598,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   219,    -1,    -1,    -1,    -1,   224,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2648,    -1,
    2650,    -1,  2652,    -1,    -1,  2655,    -1,  2657,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2420,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2691,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2453,    -1,
    2713,    -1,   245,    -1,    -1,   248,    -1,    -1,    -1,  2464,
      -1,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,    -1,
      -1,    -1,    -1,    -1,    -1,  2758,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,  2513,    -1,
      -1,    -1,  2517,    -1,    -1,  2778,    -1,    -1,  2781,    -1,
      -1,    -1,    -1,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,    -1,    66,    67,    -1,    -1,    70,    -1,    -1,    18,
      19,    -1,    -1,    -1,    -1,  2570,  2571,    -1,  2573,    -1,
      -1,    -1,    -1,  2578,  2579,    -1,    -1,    -1,  2583,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
      -1,  2616,    -1,    -1,   164,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2641,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   103,   159,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   171,   117,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,
     159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     224,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,
    2725,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2742,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2757,    -1,    -1,  2760,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   277,    -1,   224,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
      -1,   345,    -1,    -1,   293,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    19,    -1,    53,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    -1,    -1,    19,    -1,    -1,    -1,    83,    84,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,    -1,   107,    -1,    -1,    -1,   111,   112,    -1,    -1,
     115,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,   131,    -1,    -1,    -1,
     103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,
     175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,
      -1,    -1,    -1,   198,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,
      -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   228,    -1,   230,    -1,    -1,    -1,    -1,
      -1,   236,   237,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   219,   252,   253,    -1,
      -1,   224,    -1,    -1,    -1,    -1,    -1,    -1,   263,   264,
      -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,   224,
     103,    -1,    -1,    -1,   289,    -1,   291,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   303,    -1,
     305,    -1,    -1,    -1,    -1,   164,   311,    -1,    -1,    -1,
      -1,    -1,   285,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     224,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,
     345,    -1,    -1,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   293,
     103,   224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
      -1,    -1,    -1,    -1,    -1,    -1,   159,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   224,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    44,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    97,    98,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   140,    -1,    -1,    -1,   144,    -1,
      -1,   147,    -1,    -1,    -1,   151,   152,    -1,    -1,    -1,
      -1,    -1,   158,    -1,    -1,    -1,    -1,    -1,   164,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   178,    -1,    -1,   181,   182,   183,    -1,    -1,
     186,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   217,   218,   219,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    44,    -1,   231,    47,   233,    -1,    -1,
      -1,    -1,    -1,    -1,   240,    -1,    -1,    -1,   244,    -1,
      -1,    -1,   248,    -1,   250,    66,   252,    68,    69,    70,
      -1,   257,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,
      -1,    -1,    -1,    -1,    85,   271,    87,    88,    89,    -1,
      -1,   277,    -1,    -1,    95,    -1,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   292,   293,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,
     306,    -1,    -1,    -1,    -1,   126,   312,    -1,    -1,   315,
     316,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   152,    -1,   154,   155,    -1,    -1,   158,    -1,    -1,
     346,   162,    -1,   164,    -1,    -1,    -1,   353,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   186,   187,    -1,    -1,   190,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   200,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   217,   218,    -1,    -1,
      -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   250,
      -1,   252,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   277,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   292,   293,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     301,    -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,
      -1,    -1,    -1,   314,    -1,   316,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   353
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
     229,   244,   307,   514,    46,    65,    67,   185,   243,   287,
     296,   534,    67,   206,   348,   354,   356,   535,    39,   197,
     235,   297,   360,   370,   372,   536,     5,   306,   316,   362,
     539,    71,   171,   249,   258,   540,     4,   541,    89,   514,
      62,   287,   310,   548,   197,   297,   360,   549,    26,   114,
     126,   210,   223,   551,    51,   101,   110,   139,   299,   566,
     567,     4,    37,    48,    75,   152,   189,   258,   294,   310,
     388,     4,   126,   209,   568,   297,   360,   570,    16,    23,
     245,   248,   371,   571,   234,   575,   297,   360,   576,     0,
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
       5,    66,   372,   444,    16,   514,    46,    67,    82,   185,
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
      40,   113,   360,   538,   362,   360,   370,   372,   537,   360,
     377,   360,     4,   371,    55,    91,   143,   250,   542,     4,
       4,   360,     4,   152,   264,   543,     5,   370,     4,    40,
     113,   360,   550,   360,    99,    62,   122,   250,   278,   552,
     122,   565,    62,   119,   122,   159,   195,   246,   250,   275,
     278,   288,   554,   555,    62,   122,   278,   564,     5,     4,
      34,   109,   206,   547,    67,   362,   389,    67,   362,   390,
      67,   362,   391,    13,   192,   546,   360,   360,   228,   360,
     392,   360,   275,     4,   360,   360,     4,   574,     4,   291,
     572,     4,   291,   573,     4,   377,   125,   360,   577,   360,
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
     508,   372,   191,   191,    67,   459,    67,   460,    67,   461,
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
     239,   255,   256,   347,   348,   507,   101,   499,    17,   264,
     505,    40,   113,   197,   506,     4,     5,    17,   215,   298,
     360,   264,   507,   515,   126,   507,   516,    36,    40,   113,
     135,   197,   297,   360,   517,   370,   362,    93,   101,   107,
     128,   152,   160,   198,   206,   252,   264,   280,   520,    40,
     113,   197,     5,   264,   290,   524,    17,   215,   298,   525,
     291,   362,   526,     5,   101,   107,   306,    17,    17,     4,
     360,   360,   360,   360,   360,   360,   377,   360,   360,   369,
     360,     4,   377,     4,    40,   113,   197,   269,   544,    40,
     113,   197,   269,   545,     4,    99,     5,     5,    88,     4,
       5,     5,    88,     5,   555,    62,   122,   159,   278,   559,
      62,   122,   278,   563,    88,   159,    62,   122,   278,   557,
       4,    62,   122,   278,   556,     5,     5,     4,     4,     5,
       5,     5,   360,   360,   360,     4,   360,   569,   360,   360,
       6,   371,     4,     5,     4,     4,     5,     4,    99,   266,
     378,   360,   360,    12,     5,    12,   360,   360,    12,     4,
      12,     4,     4,   360,   360,   360,     4,   362,     4,     4,
     377,   370,   377,   360,   360,   360,   370,   360,   369,   360,
     360,     5,     5,   360,   372,   360,   370,   360,   377,   377,
     378,   378,   378,   377,   369,   360,   377,   360,   136,   251,
     363,   451,   168,     5,     4,   377,   159,   159,     4,     5,
       4,     4,   360,   446,   360,    20,    21,    22,    49,    50,
      53,    60,    63,    67,    75,    76,    83,   111,   112,   115,
     131,   152,   175,   184,   228,   230,   236,   237,   253,   264,
     289,   291,   301,   311,   345,    67,   131,   157,   237,   289,
      30,   163,   216,   242,   509,   360,   211,   360,   510,    17,
     360,   263,   520,   263,   211,   360,   511,   291,   512,    17,
     100,   360,   360,     5,   378,    57,   370,     4,     5,   475,
     360,     5,     5,     5,   159,   187,   382,   382,   167,   270,
     380,     4,     4,     5,     5,   479,   276,   276,     5,     5,
       5,    17,   161,   381,   381,   380,     4,     4,   380,     5,
       5,   483,   164,   344,   371,   487,     5,   486,     5,     5,
     490,     5,   491,     5,    14,    15,    62,   193,   194,   268,
     278,   279,   283,   309,     4,     4,     5,     5,   382,   380,
       4,     5,     5,   377,    83,   154,   226,   227,   241,   284,
     385,     7,     8,   360,   365,   242,   123,   242,   242,   107,
      40,    67,   101,   107,   113,   131,   152,   167,   198,   237,
     252,   264,   291,   303,   305,   306,   345,   500,   123,   242,
       5,    27,   169,   242,   287,   141,   107,    22,    50,    53,
      83,   112,   115,   230,   263,    22,    50,    53,    56,    83,
     112,   115,   230,   263,   289,    40,   123,   242,   242,   107,
       5,   215,    27,   228,    36,   135,   297,   360,   267,   274,
     123,   248,   370,   520,    40,   132,   228,   287,   248,   215,
       5,     5,   252,    27,   228,     4,     5,     5,   215,    36,
     135,   297,   360,   520,   215,   362,     4,     4,   360,     5,
     309,    22,    27,    49,    50,    52,    53,    63,    75,    76,
      83,    86,   104,   111,   112,   115,   175,   230,   236,   253,
     263,   290,   291,   311,   356,   502,   360,   360,   360,   360,
     360,   507,   370,     5,     4,     5,   360,   360,   370,   360,
     362,   360,   360,   507,     5,     5,   360,   360,   362,     5,
      17,     5,     5,   360,   360,   369,   360,   360,     4,   360,
     360,   113,   360,   360,   113,     4,    42,    43,   173,   174,
     201,   387,   387,    62,   122,   278,   553,   387,     5,    62,
     122,   278,   558,     5,     5,    62,   122,   278,   560,     4,
       5,     5,     4,    62,   122,   278,   562,    62,   122,   278,
     561,     5,     5,     4,     5,     5,     4,   387,   387,   387,
     360,   360,   360,     4,   370,   360,   371,   377,     5,     5,
      12,   360,   370,   372,   360,    12,   360,   360,   360,    60,
     360,     6,     4,   360,   360,    47,   277,   414,     5,   362,
     362,   377,   360,     4,     4,     4,   377,   370,   360,   360,
     360,   360,   377,   370,   378,   369,   360,     4,   378,   360,
      38,    38,     4,   372,     5,    24,    25,    99,   379,     4,
     370,   360,   360,     4,   360,     5,    83,   154,   226,   227,
     241,   284,   370,   372,   242,   123,   242,   242,    21,   242,
     370,   123,   242,    27,   169,   242,   287,   141,    21,   242,
     123,   242,   242,    21,   242,    27,   170,   228,   170,   267,
     274,   123,   170,   228,   295,   520,   132,   170,   228,   287,
       4,   252,    27,   170,   228,   520,   211,   360,   360,   360,
     360,   360,   360,   199,   360,   360,    20,   238,   467,     4,
       4,   360,   382,   382,   382,     4,   382,   382,   382,    14,
      15,    62,   193,   194,   268,   278,   279,   309,   381,   382,
     382,   382,   382,   382,     4,   382,   382,     4,   381,    14,
      15,    62,   193,   194,   268,   278,   279,   309,     5,   485,
       5,   488,     5,     5,    14,    15,    62,   193,   194,   268,
     278,   279,   283,   309,     5,    14,    15,    62,   193,   194,
     268,   278,   279,   283,   309,     5,    14,    15,    62,   193,
     194,   268,   278,   279,   283,   309,    14,    15,    62,   193,
     194,   268,   278,   279,   309,   276,     5,     5,     5,   381,
     381,   380,     4,     4,   380,     5,     4,     4,   382,   382,
       4,   382,   382,     5,   362,   370,   372,     5,   360,   362,
     360,     5,   360,     5,   365,   107,   198,   252,   107,   198,
     252,     5,   362,   360,   362,     5,   360,   370,   362,     5,
     365,   242,   242,    21,   242,    21,   242,   242,    21,   242,
     313,   313,     4,     4,     4,   500,     4,     4,     4,   313,
     313,     4,     5,     4,   362,   360,     5,   360,     5,   365,
     362,   370,   370,   360,    27,    49,    52,    63,    86,   104,
     356,   383,     4,   362,   360,   377,   362,     5,   370,   370,
     360,   362,   362,   370,   370,   360,   362,   360,     5,   360,
     228,   228,   360,   360,   228,   360,   228,   360,   360,   513,
     521,   360,   228,   228,   360,   360,   360,   360,   360,   360,
     360,   360,     5,   309,   360,   503,   360,   360,   228,   360,
     360,   360,   360,   370,   377,     5,   370,   370,   360,   360,
     377,   360,   360,   360,   370,   507,   360,   360,     5,     4,
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
     131,   289,   291,   345,   518,   519,   520,   532,   533,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   370,     5,   360,   360,   360,   360,     4,     4,   377,
     378,     4,   504,   377,   377,   369,   360,     4,   377,   370,
       4,   387,   387,   387,   365,   360,   360,   360,   377,   360,
     369,   360,   360,    12,     5,     5,     4,   360,   360,     4,
     377,   370,   360,   360,   378,   379,   360,     5,   360,   372,
       5,     5,     5,     5,     5,   377,   379,   379,   379,   377,
     379,   378,   379,   379,   377,   379,   379,   379,   377,   379,
     379,   377,   370,   379,   377,   379,   379,   377,   379,   377,
       4,   372,     5,   360,     4,   382,   381,     4,   381,     5,
       5,     5,   381,   381,   380,     4,     4,     5,     5,     5,
       5,   381,   381,   380,     4,     4,     5,     5,     5,     5,
     381,   381,   380,     4,     4,     5,   381,   382,   382,   382,
     382,   382,     4,   382,   382,     4,   381,   381,   382,   382,
     382,   382,   382,     4,   382,   382,     4,   381,   381,     4,
       4,   381,     4,   381,   381,     4,     4,     4,   371,   379,
       4,   370,   379,   360,   370,     4,   379,   379,   370,     4,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   370,   379,   360,   370,     4,   369,   369,   370,   369,
     369,   370,   370,   369,   369,   360,   360,   360,   360,   360,
     360,   365,   360,   360,   360,   357,   357,   357,   357,   357,
     357,   357,   519,   357,   365,   360,   360,   360,   360,   365,
     360,   360,   360,   360,   360,   360,   377,   360,   309,   364,
     365,   360,   360,   378,   362,     4,     4,   378,   377,     4,
     360,   369,   360,    60,   360,     5,     5,   360,     4,   375,
     379,     5,     4,     5,     4,     5,   370,     5,   378,   379,
     378,   378,   378,     5,     4,   360,   382,   381,   382,   382,
     382,   382,   382,     4,   382,   382,   381,   382,   382,   382,
     382,   382,     4,   382,   382,   381,   382,   382,   382,   382,
     382,     4,   382,   382,   381,   382,   381,     4,   382,   382,
     381,     4,   382,   381,     4,   381,   381,   377,   370,   379,
       4,   377,   360,   377,   360,   360,   360,   379,     4,   377,
     360,   369,   379,   360,   369,   379,   379,   370,   360,     4,
     384,   384,   360,   360,   384,   365,   384,   521,   370,   500,
       5,     4,     5,     5,     5,     4,   362,   365,   384,   384,
     360,   360,   365,   360,   360,   360,   360,   360,   369,   360,
       5,   521,   360,   384,   362,   522,   523,     5,   362,   378,
       4,     5,   360,     5,     4,     6,   360,    32,   286,   421,
     370,     5,    32,   286,   386,   370,   421,   360,   381,   382,
     381,   382,   381,   382,   382,   381,   382,   381,   381,   360,
     379,   370,   370,   360,   370,   360,   370,   370,   360,   370,
     379,     4,   521,   521,   364,   360,   521,     4,   521,   377,
       5,     4,     4,   521,   521,   364,   360,     4,   521,   521,
     360,   370,   521,   521,   521,   522,   529,   530,   520,   527,
     528,   362,     4,     5,     5,     6,     4,   190,   307,   352,
     360,   412,     4,   370,     4,   382,   382,   382,   382,   382,
     371,   379,   379,   360,   379,     4,   379,   379,   360,   379,
     360,   521,   521,     4,   360,   521,     5,   360,   521,     4,
     360,   521,   377,   529,   531,   532,   357,   528,     5,     5,
       4,   360,   413,   360,   413,   377,   379,     4,   370,   372,
       4,   365,   364,   360,   360,   364,   360,   370,   532,   362,
       5,     5,   360,   360,   360,   360,   386,     5,   370,   372,
     377,   370,   372,   521,   360,     4,   521,   360,   379,     5,
       5,   360,     5,   360,   377,   377,     4,   521,     4,     5,
       5,     5,   364,   364,   521,   521,   521
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

  case 740:
#line 1754 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 741:
#line 1755 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 742:
#line 1757 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 743:
#line 1759 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 744:
#line 1761 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 745:
#line 1764 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 746:
#line 1766 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 747:
#line 1767 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 748:
#line 1769 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 749:
#line 1772 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 750:
#line 1775 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 751:
#line 1777 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 752:
#line 1780 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 753:
#line 1783 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 754:
#line 1786 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 755:
#line 1789 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 756:
#line 1793 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 757:
#line 1797 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 758:
#line 1802 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 759:
#line 1806 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 760:
#line 1807 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 761:
#line 1809 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 762:
#line 1810 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 763:
#line 1812 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 764:
#line 1814 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 765:
#line 1816 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 766:
#line 1818 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 767:
#line 1819 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 768:
#line 1821 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 769:
#line 1823 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 770:
#line 1826 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 771:
#line 1830 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 772:
#line 1834 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 773:
#line 1836 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 774:
#line 1838 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 775:
#line 1840 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 776:
#line 1842 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 777:
#line 1844 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 778:
#line 1846 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 779:
#line 1848 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 780:
#line 1850 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 781:
#line 1852 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 782:
#line 1854 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 783:
#line 1856 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 784:
#line 1858 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 785:
#line 1860 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 786:
#line 1861 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 787:
#line 1863 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 788:
#line 1865 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 789:
#line 1866 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 790:
#line 1867 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 791:
#line 1869 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 792:
#line 1871 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 793:
#line 1872 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 794:
#line 1873 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 795:
#line 1874 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 796:
#line 1876 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 797:
#line 1877 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 798:
#line 1879 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 799:
#line 1883 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 800:
#line 1886 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 801:
#line 1889 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 802:
#line 1893 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 803:
#line 1897 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 804:
#line 1902 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 805:
#line 1906 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 806:
#line 1907 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 807:
#line 1908 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 808:
#line 1910 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 809:
#line 1912 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 810:
#line 1916 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 811:
#line 1917 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 812:
#line 1918 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 813:
#line 1920 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 814:
#line 1923 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 815:
#line 1926 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 816:
#line 1929 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 817:
#line 1930 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 818:
#line 1932 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 819:
#line 1935 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 820:
#line 1939 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 821:
#line 1941 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 822:
#line 1942 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 823:
#line 1944 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 824:
#line 1947 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 825:
#line 1950 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 826:
#line 1951 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 827:
#line 1953 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 828:
#line 1954 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 829:
#line 1955 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 830:
#line 1957 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 831:
#line 1958 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 832:
#line 1960 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 833:
#line 1963 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 834:
#line 1966 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 835:
#line 1968 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 836:
#line 1969 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 840:
#line 1974 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 841:
#line 1975 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 842:
#line 1977 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 843:
#line 1979 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 844:
#line 1981 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 845:
#line 1982 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 849:
#line 1988 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 850:
#line 1989 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 851:
#line 1990 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 852:
#line 1991 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 853:
#line 1992 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 854:
#line 1993 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 855:
#line 1994 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 856:
#line 1995 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 857:
#line 1996 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 858:
#line 1997 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 859:
#line 1999 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 860:
#line 2001 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 861:
#line 2002 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 862:
#line 2003 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 863:
#line 2004 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 864:
#line 2005 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 865:
#line 2007 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 866:
#line 2008 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 867:
#line 2009 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 868:
#line 2010 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 869:
#line 2011 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 870:
#line 2013 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 871:
#line 2014 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 872:
#line 2015 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 873:
#line 2016 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 874:
#line 2017 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 875:
#line 2018 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 876:
#line 2021 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 877:
#line 2022 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 878:
#line 2023 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 879:
#line 2024 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 880:
#line 2025 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 881:
#line 2026 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 882:
#line 2027 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 883:
#line 2028 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 884:
#line 2029 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 885:
#line 2030 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 886:
#line 2031 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 887:
#line 2032 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 888:
#line 2033 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 889:
#line 2034 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 890:
#line 2035 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 891:
#line 2036 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 892:
#line 2037 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 893:
#line 2038 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 894:
#line 2039 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 895:
#line 2040 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 896:
#line 2041 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 897:
#line 2044 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 898:
#line 2045 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 899:
#line 2046 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 900:
#line 2047 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 901:
#line 2048 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 902:
#line 2050 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 903:
#line 2060 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 904:
#line 2068 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 905:
#line 2077 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 906:
#line 2085 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 907:
#line 2092 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 908:
#line 2099 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 909:
#line 2107 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 910:
#line 2115 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 911:
#line 2120 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 912:
#line 2125 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2130 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2135 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2140 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2145 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2150 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2159 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2169 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2179 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2188 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 922:
#line 2196 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 923:
#line 2206 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 924:
#line 2216 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 925:
#line 2226 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 926:
#line 2238 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 927:
#line 2247 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 929:
#line 2255 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 930:
#line 2257 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 931:
#line 2259 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 932:
#line 2264 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 933:
#line 2267 "frame/parser.Y"
    {(yyval.dash)[0] = (yyvsp[(1) - (2)].integer); (yyval.dash)[1] = (yyvsp[(2) - (2)].integer);;}
    break;

  case 934:
#line 2270 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 935:
#line 2271 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 936:
#line 2272 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 937:
#line 2279 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 938:
#line 2281 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 939:
#line 2282 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 940:
#line 2285 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 941:
#line 2286 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 942:
#line 2287 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 943:
#line 2288 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 944:
#line 2289 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 945:
#line 2290 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 946:
#line 2291 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 948:
#line 2295 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 949:
#line 2296 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 950:
#line 2297 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 951:
#line 2298 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 952:
#line 2299 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 953:
#line 2302 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 954:
#line 2304 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 955:
#line 2306 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 956:
#line 2308 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 957:
#line 2310 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 958:
#line 2312 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 959:
#line 2314 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 960:
#line 2315 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 961:
#line 2316 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 962:
#line 2318 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 963:
#line 2320 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 964:
#line 2322 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 965:
#line 2324 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 966:
#line 2326 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 967:
#line 2327 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 968:
#line 2328 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 969:
#line 2330 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 970:
#line 2332 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 971:
#line 2335 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 972:
#line 2337 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 973:
#line 2339 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 974:
#line 2340 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 975:
#line 2341 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 976:
#line 2342 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 977:
#line 2344 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 978:
#line 2345 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 979:
#line 2346 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 980:
#line 2347 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 981:
#line 2348 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 982:
#line 2350 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 983:
#line 2352 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 984:
#line 2353 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 985:
#line 2355 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 986:
#line 2357 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 987:
#line 2359 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 988:
#line 2360 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 989:
#line 2362 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 990:
#line 2364 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 991:
#line 2365 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 992:
#line 2366 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 993:
#line 2367 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 994:
#line 2369 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 995:
#line 2371 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 996:
#line 2374 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 997:
#line 2377 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 998:
#line 2378 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 999:
#line 2379 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1000:
#line 2381 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1001:
#line 2384 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1002:
#line 2387 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1003:
#line 2388 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1004:
#line 2389 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1005:
#line 2390 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1006:
#line 2392 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1007:
#line 2394 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1008:
#line 2396 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1009:
#line 2397 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1010:
#line 2399 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1011:
#line 2400 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1012:
#line 2401 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1013:
#line 2402 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1014:
#line 2403 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1015:
#line 2405 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1016:
#line 2407 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1017:
#line 2409 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1018:
#line 2411 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1020:
#line 2413 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1021:
#line 2414 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1022:
#line 2416 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1023:
#line 2418 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1024:
#line 2419 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1025:
#line 2420 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1027:
#line 2422 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1029:
#line 2426 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1030:
#line 2427 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1031:
#line 2428 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1032:
#line 2429 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1033:
#line 2430 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1034:
#line 2431 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1035:
#line 2433 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1036:
#line 2434 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1037:
#line 2436 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1038:
#line 2439 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1039:
#line 2440 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1040:
#line 2441 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1041:
#line 2442 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1042:
#line 2445 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1043:
#line 2446 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1044:
#line 2449 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1045:
#line 2450 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1046:
#line 2453 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1047:
#line 2454 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1048:
#line 2457 "frame/parser.Y"
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

  case 1049:
#line 2470 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1050:
#line 2471 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1051:
#line 2475 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1052:
#line 2476 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1053:
#line 2480 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1054:
#line 2481 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1055:
#line 2486 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1056:
#line 2490 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1057:
#line 2495 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1058:
#line 2497 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1059:
#line 2500 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1060:
#line 2502 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1061:
#line 2505 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].dash), (yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].str));;}
    break;

  case 1062:
#line 2508 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1063:
#line 2509 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1064:
#line 2510 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1065:
#line 2511 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1066:
#line 2512 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1067:
#line 2513 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1068:
#line 2515 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1071:
#line 2522 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1072:
#line 2523 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1073:
#line 2524 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1074:
#line 2525 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1075:
#line 2526 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1076:
#line 2527 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1079:
#line 2532 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1080:
#line 2533 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1081:
#line 2534 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1082:
#line 2535 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1083:
#line 2536 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1084:
#line 2537 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1085:
#line 2538 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1086:
#line 2539 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1087:
#line 2540 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1088:
#line 2541 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1089:
#line 2542 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1092:
#line 2549 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1093:
#line 2550 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1095:
#line 2554 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1096:
#line 2556 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1097:
#line 2557 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1098:
#line 2560 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1099:
#line 2561 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1100:
#line 2562 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1101:
#line 2563 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1102:
#line 2566 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1103:
#line 2567 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1106:
#line 2575 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1107:
#line 2578 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1108:
#line 2579 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1112:
#line 2586 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1113:
#line 2589 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1114:
#line 2593 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1115:
#line 2594 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1116:
#line 2595 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1117:
#line 2596 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1118:
#line 2597 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1119:
#line 2598 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1120:
#line 2599 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1121:
#line 2600 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1122:
#line 2606 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1123:
#line 2607 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1124:
#line 2608 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1125:
#line 2609 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1126:
#line 2613 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1127:
#line 2614 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1128:
#line 2616 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1129:
#line 2621 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1131:
#line 2623 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1133:
#line 2625 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1134:
#line 2628 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1135:
#line 2630 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1136:
#line 2635 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1137:
#line 2638 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1138:
#line 2639 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1139:
#line 2640 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1140:
#line 2643 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1141:
#line 2645 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1142:
#line 2649 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1143:
#line 2650 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1144:
#line 2654 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1145:
#line 2655 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1146:
#line 2656 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1147:
#line 2657 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1148:
#line 2663 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1149:
#line 2664 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1150:
#line 2670 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1151:
#line 2671 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1152:
#line 2672 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1153:
#line 2673 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1156:
#line 2681 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1157:
#line 2683 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1158:
#line 2684 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1159:
#line 2685 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1160:
#line 2689 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1161:
#line 2690 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1162:
#line 2691 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1163:
#line 2692 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1164:
#line 2695 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1165:
#line 2696 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1166:
#line 2699 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1167:
#line 2700 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1168:
#line 2701 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1169:
#line 2704 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1170:
#line 2705 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1171:
#line 2706 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1172:
#line 2709 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1173:
#line 2710 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1175:
#line 2712 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1176:
#line 2713 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1177:
#line 2716 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1178:
#line 2717 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1179:
#line 2718 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1184:
#line 2725 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1185:
#line 2729 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1186:
#line 2731 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1187:
#line 2733 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1189:
#line 2738 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1190:
#line 2740 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1191:
#line 2742 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1201:
#line 2755 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1202:
#line 2756 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1203:
#line 2757 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1204:
#line 2760 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1205:
#line 2761 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1206:
#line 2762 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1207:
#line 2765 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1208:
#line 2766 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1209:
#line 2767 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1210:
#line 2770 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1211:
#line 2771 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1212:
#line 2772 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1214:
#line 2776 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1215:
#line 2777 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1216:
#line 2778 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1217:
#line 2781 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1218:
#line 2782 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1219:
#line 2783 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1220:
#line 2786 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1221:
#line 2787 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1222:
#line 2788 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1223:
#line 2791 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1224:
#line 2792 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1225:
#line 2793 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1226:
#line 2796 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1227:
#line 2797 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1228:
#line 2798 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1229:
#line 2802 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1230:
#line 2804 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1231:
#line 2806 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1232:
#line 2810 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1233:
#line 2814 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1234:
#line 2816 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1235:
#line 2820 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1236:
#line 2823 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1237:
#line 2824 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1238:
#line 2825 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1239:
#line 2826 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1240:
#line 2829 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1241:
#line 2831 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1242:
#line 2832 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1243:
#line 2834 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1245:
#line 2838 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1246:
#line 2839 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1247:
#line 2840 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1248:
#line 2843 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1249:
#line 2844 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1250:
#line 2848 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1252:
#line 2850 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1255:
#line 2855 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1256:
#line 2856 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1257:
#line 2857 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1258:
#line 2860 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1259:
#line 2861 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1260:
#line 2862 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1261:
#line 2865 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1262:
#line 2867 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1263:
#line 2872 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1264:
#line 2875 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1265:
#line 2882 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1266:
#line 2884 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1267:
#line 2886 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1268:
#line 2891 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1270:
#line 2895 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1271:
#line 2896 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1272:
#line 2897 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1273:
#line 2899 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1274:
#line 2901 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1275:
#line 2906 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11055 "frame/parser.C"
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


#line 2910 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

