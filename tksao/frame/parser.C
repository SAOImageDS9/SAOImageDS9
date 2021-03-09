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
#define YYLAST   5772

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  358
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  219
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1275
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2806

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
    3479,  3484,  3489,  3494,  3495,  3497,  3499,  3504,  3509,  3511,
    3513,  3515,  3517,  3519,  3521,  3523,  3525,  3528,  3530,  3532,
    3534,  3538,  3542,  3551,  3558,  3569,  3577,  3585,  3591,  3594,
    3597,  3601,  3606,  3612,  3616,  3622,  3628,  3632,  3637,  3643,
    3649,  3655,  3659,  3665,  3668,  3672,  3676,  3682,  3686,  3690,
    3694,  3699,  3705,  3711,  3715,  3721,  3727,  3731,  3736,  3742,
    3748,  3751,  3754,  3758,  3764,  3771,  3778,  3782,  3786,  3790,
    3797,  3803,  3809,  3812,  3816,  3820,  3826,  3833,  3837,  3840,
    3843,  3847,  3850,  3854,  3857,  3861,  3867,  3874,  3877,  3880,
    3883,  3885,  3890,  3895,  3897,  3900,  3903,  3906,  3909,  3912,
    3915,  3918,  3922,  3925,  3929,  3932,  3936,  3938,  3940,  3942,
    3944,  3946,  3947,  3950,  3951,  3954,  3955,  3957,  3958,  3959,
    3961,  3963,  3965,  3967,  3969,  3977,  3986,  3989,  3996,  3999,
    4006,  4009,  4013,  4016,  4018,  4020,  4024,  4028,  4030,  4035,
    4038,  4040,  4044,  4048,  4053,  4057,  4061,  4065,  4067,  4069,
    4071,  4073,  4075,  4077,  4079,  4081,  4083,  4085,  4087,  4089,
    4091,  4093,  4096,  4097,  4098,  4101,  4108,  4116,  4119,  4121,
    4125,  4127,  4131,  4133,  4136,  4139,  4141,  4145,  4146,  4147,
    4150,  4153,  4155,  4159,  4165,  4167,  4170,  4173,  4177,  4180,
    4183,  4186,  4189,  4191,  4193,  4195,  4197,  4202,  4205,  4209,
    4213,  4216,  4220,  4223,  4226,  4229,  4233,  4237,  4241,  4244,
    4248,  4250,  4254,  4258,  4260,  4263,  4266,  4269,  4272,  4282,
    4289,  4291,  4293,  4295,  4297,  4300,  4303,  4307,  4311,  4313,
    4316,  4320,  4324,  4326,  4329,  4331,  4333,  4335,  4337,  4339,
    4342,  4345,  4350,  4352,  4355,  4358,  4361,  4365,  4367,  4369,
    4371,  4374,  4377,  4380,  4383,  4386,  4390,  4394,  4398,  4402,
    4406,  4410,  4414,  4416,  4419,  4422,  4425,  4429,  4432,  4436,
    4440,  4443,  4446,  4449,  4452,  4455,  4458,  4461,  4464,  4467,
    4470,  4473,  4476,  4479,  4482,  4486,  4490,  4494,  4497,  4500,
    4503,  4506,  4509,  4512,  4515,  4518,  4521,  4524,  4527,  4530,
    4534,  4538,  4542,  4547,  4554,  4557,  4559,  4561,  4563,  4565,
    4567,  4568,  4574,  4576,  4583,  4587,  4589,  4592,  4595,  4598,
    4602,  4606,  4609,  4612,  4615,  4618,  4621,  4624,  4628,  4631,
    4634,  4638,  4640,  4644,  4649,  4651,  4654,  4660,  4667,  4674,
    4677,  4679,  4682,  4685,  4691,  4698
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
     187,   533,    -1,   200,    67,     5,    -1,   217,   534,    -1,
     218,   535,    -1,   219,   538,    -1,   240,    89,    -1,   233,
     540,    -1,   231,   539,    -1,   248,    -1,   244,   513,   542,
      -1,   250,   547,    -1,   252,   548,    -1,   257,   550,    -1,
     271,    -1,   277,   565,    -1,   292,     4,    -1,   293,   388,
      -1,   304,    -1,   306,   567,    -1,   312,    -1,   315,   569,
      -1,   316,   570,    -1,   346,   574,    -1,   353,   575,    -1,
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
     189,   545,    -1,    37,   546,    -1,   258,   360,    -1,   294,
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
     504,    -1,   107,   505,    -1,   116,     4,    -1,   131,     5,
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
     379,    -1,     4,   237,   519,   362,    -1,     4,   252,    40,
      -1,     4,   253,   132,     5,    -1,     4,   253,   228,   370,
     377,   369,   369,    -1,     4,   253,   287,   370,   377,   370,
     379,    -1,     4,   264,    -1,     4,   264,   215,    -1,     4,
     289,     5,    -1,     4,   291,     5,    -1,     4,   291,   252,
     362,    -1,     4,   303,    -1,     4,   305,    -1,     4,   311,
      27,   362,    -1,     4,   311,   228,   370,   377,   369,   370,
     379,   360,   365,    -1,     4,   345,     4,    -1,   167,    -1,
     167,   360,   360,    -1,   177,   514,    -1,   178,   515,    -1,
     198,   516,    -1,   235,   362,    -1,   237,   519,   362,    -1,
     237,   519,   362,   360,   360,    -1,   252,    40,   360,   360,
      -1,   252,   197,   360,   360,     4,    -1,   252,   113,    -1,
     257,   523,    -1,   264,   524,    -1,   271,   525,    -1,     5,
      67,     5,    -1,     5,    81,    -1,     5,   101,    -1,     5,
      90,    -1,     5,   131,     5,    -1,     5,   152,    -1,     5,
     152,   215,    -1,     5,   198,   360,   360,    -1,     5,   198,
     135,    -1,     5,   198,    36,    -1,     5,   198,   297,   370,
     377,   369,    -1,     5,   237,   519,   362,    -1,     5,   264,
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
      -1,    63,   360,   360,   360,   520,    -1,   111,   360,   360,
     360,   360,   364,   520,    -1,    49,   360,   360,   360,   360,
     364,   520,    -1,   230,   360,   360,   360,   360,   520,    -1,
     263,   360,   360,   360,   360,   520,    -1,   175,   360,   360,
     360,   360,   520,    -1,   311,   360,   360,   360,   360,   520,
      -1,   291,   360,   360,   364,   520,    -1,    63,   228,   360,
     360,   384,   520,    -1,    49,   228,   360,   360,   384,   520,
      -1,   104,   228,   360,   360,   384,   520,    -1,    86,   228,
     360,   360,   384,   520,    -1,   356,   228,   360,   360,   384,
     520,    -1,    27,   228,   360,   360,   384,   520,    -1,    52,
     228,   360,   360,   384,   520,    -1,   253,   360,   360,   360,
     360,   370,   377,   370,   379,     5,   520,    -1,    75,   360,
     360,   360,   370,   377,   520,    -1,   236,   360,   360,   360,
     360,   360,   520,    -1,    22,   360,   360,   360,   360,     4,
     520,    -1,   112,   360,   360,   360,   360,   360,     4,   364,
     520,    -1,    50,   360,   360,   360,   360,   360,     4,   364,
     520,    -1,    83,   360,   360,   365,   365,     4,   360,   360,
       4,   520,    -1,   115,   360,   360,   365,   365,     4,   360,
     360,   360,     4,   364,   520,    -1,    53,   360,   360,   365,
     365,     4,   360,   360,   360,     4,   364,   520,    -1,    76,
     520,    -1,   290,   503,    -1,     5,   360,   360,    -1,   309,
       5,   360,   360,    -1,   360,   360,   309,     5,    -1,     5,
     370,   377,   369,    -1,    -1,   264,    -1,    17,    -1,    40,
     360,   360,     4,    -1,   197,   360,   360,     4,    -1,   113,
      -1,   106,    -1,   347,    -1,    64,    -1,   256,    -1,   255,
      -1,   239,    -1,   348,    -1,    61,   508,    -1,    67,    -1,
     131,    -1,   116,    -1,   146,   360,   360,    -1,   157,   360,
     360,    -1,     4,    20,    83,     5,     5,     5,   370,     4,
      -1,     4,    20,   154,     5,     5,     4,    -1,     4,    20,
     226,     5,     5,     5,     5,   370,   377,   386,    -1,     4,
      20,   227,     5,     5,   370,   386,    -1,     4,    20,   241,
       5,     5,     5,   370,    -1,     4,    20,   284,   370,   377,
      -1,   157,    17,    -1,     4,    21,    -1,     4,    21,   372,
      -1,     4,    21,   370,   377,    -1,     4,    22,   242,   370,
     379,    -1,     4,    49,   123,    -1,     4,    50,   242,   370,
     379,    -1,     4,    49,   242,   370,   379,    -1,     4,    53,
      21,    -1,     4,    53,    21,   372,    -1,     4,    53,    21,
     370,   377,    -1,     4,    53,   242,   370,   379,    -1,     4,
      60,   370,   377,   378,    -1,     4,    63,   123,    -1,     4,
      63,   242,   370,   379,    -1,     4,    67,    -1,     4,    75,
      27,    -1,     4,    75,   169,    -1,     4,    75,   242,   370,
     379,    -1,     4,    75,   287,    -1,     4,    76,   141,    -1,
       4,    83,    21,    -1,     4,    83,    21,   372,    -1,     4,
      83,    21,   370,   377,    -1,     4,    83,   242,   370,   379,
      -1,     4,   111,   123,    -1,     4,   111,   242,   370,   379,
      -1,     4,   112,   242,   370,   379,    -1,     4,   115,    21,
      -1,     4,   115,    21,   372,    -1,     4,   115,    21,   370,
     377,    -1,     4,   115,   242,   370,   379,    -1,     4,   131,
      -1,     4,   152,    -1,     4,   175,    27,    -1,     4,   175,
     170,   370,   379,    -1,     4,   175,   228,   370,   377,   378,
      -1,     4,   184,   170,   360,   370,   379,    -1,     4,   230,
     123,    -1,     4,   228,   267,    -1,     4,   228,   274,    -1,
       4,   236,   228,   370,   377,   378,    -1,     4,   236,   170,
     370,   379,    -1,     4,   236,   295,   370,   379,    -1,     4,
     237,    -1,     4,   237,   519,    -1,     4,   253,   132,    -1,
       4,   253,   170,   370,   379,    -1,     4,   253,   228,   370,
     377,   378,    -1,     4,   253,   287,    -1,     4,   264,    -1,
       4,   289,    -1,     4,   289,     4,    -1,     4,   291,    -1,
       4,   291,   252,    -1,     4,   301,    -1,     4,   311,    27,
      -1,     4,   311,   170,   370,   379,    -1,     4,   311,   228,
     370,   377,   378,    -1,     4,   345,    -1,   152,   509,    -1,
     152,   211,    -1,   211,    -1,   230,   263,   360,   360,    -1,
     263,   263,   360,   360,    -1,   235,    -1,   237,   519,    -1,
     264,   510,    -1,   264,   211,    -1,   271,   511,    -1,     5,
      67,    -1,     5,   131,    -1,     5,   157,    -1,     5,   237,
     519,    -1,     5,   289,    -1,     5,   289,   211,    -1,   289,
      17,    -1,   289,   100,   199,    -1,   345,    -1,    30,    -1,
     242,    -1,   163,    -1,   216,    -1,    -1,   360,   360,    -1,
      -1,   360,   360,    -1,    -1,   291,    -1,    -1,    -1,   229,
      -1,   244,    -1,   307,    -1,    58,    -1,   133,    -1,   506,
     370,   377,   378,   362,   521,   528,    -1,   264,   506,   370,
     377,   378,   362,   521,   528,    -1,   506,     5,    -1,   506,
       5,     4,     5,   370,   377,    -1,   506,     4,    -1,   506,
       4,     4,     5,   370,   377,    -1,   126,     5,    -1,   126,
       5,     5,    -1,   360,   360,    -1,   135,    -1,    36,    -1,
      40,   360,   360,    -1,   197,   360,   360,    -1,   113,    -1,
     297,   370,   377,   369,    -1,   517,   518,    -1,   518,    -1,
     519,   357,   362,    -1,    67,   357,     5,    -1,    94,   357,
       4,     4,    -1,   345,   357,     4,    -1,   131,   357,     5,
      -1,   291,   357,     5,    -1,   531,    -1,   532,    -1,   206,
      -1,   264,    -1,   152,    -1,    93,    -1,   128,    -1,   107,
      -1,   198,    -1,   252,    -1,   101,    -1,   160,    -1,   280,
      -1,   512,    -1,   512,   517,    -1,    -1,    -1,   522,   526,
      -1,     5,   506,   370,   377,   378,   362,    -1,   264,     5,
     506,   370,   377,   378,   362,    -1,   290,     5,    -1,    17,
      -1,   215,   360,   360,    -1,   298,    -1,   298,   360,   360,
      -1,   362,    -1,   291,   362,    -1,   526,   527,    -1,   527,
      -1,   519,   357,   362,    -1,    -1,    -1,   529,   530,    -1,
     530,   531,    -1,   531,    -1,   289,   357,     5,    -1,    56,
     357,   500,     5,     5,    -1,    65,    -1,    67,     5,    -1,
     185,   373,    -1,   243,   360,   360,    -1,   287,   370,    -1,
     296,   360,    -1,    46,   374,    -1,   185,     4,    -1,   356,
      -1,   354,    -1,   348,    -1,   206,    -1,   360,   360,   360,
     360,    -1,   360,   360,    -1,   372,   360,   360,    -1,   370,
     377,   369,    -1,   297,   536,    -1,    39,   360,   360,    -1,
     197,   537,    -1,   235,   362,    -1,   360,   360,    -1,   372,
     360,   360,    -1,   370,   377,   369,    -1,    40,   360,   360,
      -1,   360,   360,    -1,   113,   360,   360,    -1,   362,    -1,
     316,   371,   377,    -1,     5,     4,     4,    -1,   306,    -1,
      71,   541,    -1,   171,     4,    -1,   249,     4,    -1,   258,
     360,    -1,     4,     4,     4,     4,     4,     4,     4,     4,
       4,    -1,     4,     4,     4,     4,     4,     4,    -1,    55,
      -1,   143,    -1,   250,    -1,    91,    -1,   152,   543,    -1,
     264,   544,    -1,    40,   360,   360,    -1,   197,   360,   360,
      -1,   113,    -1,   269,   113,    -1,    40,   360,   360,    -1,
     197,   360,   360,    -1,   113,    -1,   269,   113,    -1,   192,
      -1,    13,    -1,   206,    -1,    34,    -1,   109,    -1,    62,
       5,    -1,   287,   370,    -1,   310,     4,     4,     4,    -1,
     360,    -1,   360,    99,    -1,   197,   549,    -1,   297,   360,
      -1,   297,   360,    99,    -1,    40,    -1,   360,    -1,   113,
      -1,    26,   551,    -1,   126,   553,    -1,   210,   563,    -1,
     114,   564,    -1,   223,     5,    -1,   122,     5,   387,    -1,
      62,     5,   387,    -1,   278,     4,   387,    -1,   250,    88,
     552,    -1,   122,     5,   387,    -1,    62,     5,   387,    -1,
     278,     4,   387,    -1,   554,    -1,   159,   554,    -1,   288,
     555,    -1,   275,   556,    -1,   119,    88,   557,    -1,   195,
     558,    -1,   250,   159,   560,    -1,   250,    88,   561,    -1,
     246,   562,    -1,   122,     5,    -1,    62,     5,    -1,   278,
       4,    -1,   122,     5,    -1,    62,     5,    -1,   278,     4,
      -1,   122,     5,    -1,    62,     5,    -1,   278,     4,    -1,
     122,     5,    -1,    62,     5,    -1,   278,     4,    -1,   159,
     559,    -1,   122,     5,     4,    -1,    62,     5,     4,    -1,
     278,     4,     4,    -1,   122,     5,    -1,    62,     5,    -1,
     278,     4,    -1,   122,     5,    -1,    62,     5,    -1,   278,
       4,    -1,   122,     5,    -1,    62,     5,    -1,   278,     4,
      -1,   122,     5,    -1,    62,     5,    -1,   278,     4,    -1,
     122,     5,   387,    -1,    62,     5,   387,    -1,   278,     4,
     387,    -1,   122,     5,     5,   387,    -1,   566,     4,     4,
     360,   360,   365,    -1,   566,     4,    -1,   101,    -1,    51,
      -1,   299,    -1,   139,    -1,   110,    -1,    -1,     4,   360,
     360,   360,   360,    -1,   209,    -1,   209,     4,   360,   360,
     360,   360,    -1,   126,   275,   568,    -1,     4,    -1,     4,
       4,    -1,   360,   370,    -1,   360,   360,    -1,   297,   360,
     360,    -1,   371,   377,   378,    -1,    16,   573,    -1,   248,
       4,    -1,   245,   572,    -1,    23,   571,    -1,     4,     4,
      -1,     4,     5,    -1,   291,     4,     5,    -1,     4,     4,
      -1,     4,     5,    -1,   291,     4,     5,    -1,     4,    -1,
       4,   371,   377,    -1,     4,     6,   371,   377,    -1,   234,
      -1,   360,   360,    -1,   360,   360,    12,   360,   360,    -1,
     360,   360,    12,   372,   360,   360,    -1,   360,   360,    12,
     370,   377,   369,    -1,   297,   576,    -1,   125,    -1,   125,
     360,    -1,   360,   360,    -1,   360,   360,    12,   360,   360,
      -1,   360,   360,    12,   372,   360,   360,    -1,   360,   360,
      12,   370,   377,   369,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   463,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   516,   517,   520,   521,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   538,   540,   541,   542,   543,   545,   546,   547,   548,
     551,   552,   553,   554,   555,   558,   559,   562,   563,   564,
     567,   570,   573,   576,   588,   595,   602,   610,   611,   612,
     613,   614,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,   627,   628,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     647,   648,   651,   652,   653,   654,   655,   656,   659,   660,
     661,   662,   663,   666,   667,   668,   669,   670,   671,   672,
     673,   676,   677,   678,   679,   680,   683,   684,   685,   686,
     687,   688,   689,   690,   693,   694,   695,   698,   699,   700,
     701,   704,   705,   706,   709,   710,   711,   714,   715,   716,
     719,   720,   721,   722,   723,   724,   725,   726,   729,   730,
     733,   734,   735,   736,   737,   738,   741,   742,   743,   746,
     747,   748,   749,   750,   751,   754,   755,   756,   757,   758,
     759,   760,   761,   765,   766,   769,   770,   773,   774,   777,
     778,   782,   783,   784,   785,   786,   787,   788,   789,   792,
     793,   796,   797,   798,   800,   802,   803,   804,   806,   810,
     811,   814,   815,   817,   820,   822,   828,   829,   830,   833,
     834,   835,   838,   839,   840,   841,   842,   843,   844,   850,
     851,   854,   855,   856,   857,   858,   861,   862,   863,   864,
     867,   868,   873,   878,   885,   887,   889,   890,   891,   894,
     896,   899,   900,   903,   904,   905,   906,   907,   910,   912,
     914,   919,   924,   927,   928,   931,   932,   933,   940,   941,
     942,   943,   946,   947,   950,   951,   954,   955,   958,   960,
     964,   965,   968,   970,   971,   972,   973,   976,   977,   979,
     980,   981,   984,   986,   988,   989,   991,   993,   995,   997,
    1001,  1004,  1005,  1006,  1009,  1012,  1013,  1014,  1015,  1016,
    1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,
    1027,  1028,  1029,  1030,  1031,  1033,  1034,  1035,  1036,  1037,
    1038,  1039,  1040,  1041,  1042,  1044,  1045,  1046,  1047,  1048,
    1049,  1050,  1052,  1054,  1055,  1058,  1059,  1060,  1061,  1062,
    1063,  1064,  1065,  1068,  1069,  1070,  1073,  1076,  1077,  1079,
    1081,  1082,  1083,  1084,  1085,  1086,  1093,  1094,  1097,  1098,
    1099,  1102,  1103,  1106,  1109,  1110,  1112,  1116,  1117,  1118,
    1121,  1125,  1127,  1128,  1129,  1130,  1131,  1132,  1133,  1134,
    1135,  1138,  1139,  1140,  1143,  1144,  1147,  1149,  1157,  1159,
    1161,  1165,  1166,  1168,  1171,  1174,  1175,  1179,  1181,  1184,
    1189,  1190,  1191,  1195,  1196,  1197,  1200,  1201,  1202,  1205,
    1206,  1208,  1209,  1210,  1211,  1212,  1213,  1214,  1215,  1216,
    1217,  1219,  1220,  1223,  1224,  1227,  1228,  1229,  1230,  1233,
    1234,  1237,  1239,  1242,  1246,  1247,  1248,  1250,  1252,  1256,
    1257,  1258,  1261,  1262,  1263,  1264,  1265,  1266,  1267,  1270,
    1273,  1274,  1275,  1278,  1279,  1280,  1281,  1282,  1283,  1286,
    1287,  1288,  1289,  1290,  1291,  1292,  1295,  1296,  1299,  1300,
    1303,  1304,  1307,  1308,  1311,  1312,  1313,  1316,  1317,  1320,
    1321,  1324,  1327,  1335,  1336,  1339,  1340,  1341,  1342,  1343,
    1344,  1345,  1346,  1347,  1348,  1349,  1350,  1351,  1352,  1353,
    1354,  1355,  1356,  1359,  1362,  1363,  1366,  1367,  1368,  1369,
    1372,  1373,  1374,  1375,  1378,  1379,  1380,  1381,  1382,  1383,
    1386,  1387,  1388,  1389,  1390,  1391,  1393,  1394,  1399,  1400,
    1403,  1405,  1407,  1410,  1411,  1412,  1413,  1414,  1415,  1418,
    1420,  1422,  1424,  1425,  1427,  1429,  1431,  1433,  1435,  1438,
    1439,  1440,  1441,  1442,  1443,  1445,  1446,  1447,  1450,  1453,
    1455,  1457,  1459,  1461,  1463,  1465,  1467,  1470,  1472,  1474,
    1476,  1477,  1478,  1479,  1480,  1483,  1484,  1485,  1486,  1487,
    1488,  1489,  1491,  1493,  1494,  1495,  1498,  1499,  1500,  1501,
    1502,  1503,  1505,  1506,  1507,  1510,  1511,  1512,  1513,  1514,
    1517,  1520,  1523,  1526,  1529,  1532,  1535,  1538,  1541,  1546,
    1549,  1552,  1555,  1558,  1561,  1564,  1567,  1570,  1573,  1576,
    1581,  1584,  1587,  1590,  1593,  1596,  1599,  1602,  1605,  1610,
    1612,  1614,  1616,  1618,  1620,  1625,  1627,  1629,  1633,  1636,
    1639,  1642,  1645,  1648,  1651,  1654,  1657,  1660,  1663,  1668,
    1669,  1670,  1671,  1672,  1673,  1674,  1676,  1678,  1679,  1680,
    1683,  1684,  1685,  1686,  1687,  1688,  1690,  1691,  1692,  1695,
    1697,  1699,  1700,  1702,  1704,  1708,  1709,  1712,  1713,  1714,
    1717,  1720,  1721,  1722,  1723,  1724,  1725,  1726,  1729,  1737,
    1738,  1739,  1740,  1742,  1744,  1745,  1745,  1746,  1747,  1748,
    1749,  1750,  1752,  1753,  1755,  1758,  1761,  1762,  1763,  1766,
    1769,  1772,  1773,  1777,  1780,  1783,  1786,  1790,  1795,  1800,
    1802,  1803,  1805,  1806,  1808,  1810,  1812,  1814,  1815,  1817,
    1819,  1823,  1828,  1830,  1832,  1834,  1836,  1838,  1840,  1842,
    1844,  1846,  1848,  1851,  1852,  1854,  1856,  1857,  1859,  1861,
    1862,  1863,  1865,  1867,  1868,  1869,  1871,  1872,  1873,  1876,
    1880,  1883,  1886,  1890,  1895,  1901,  1902,  1903,  1905,  1906,
    1910,  1912,  1913,  1914,  1917,  1920,  1923,  1925,  1927,  1928,
    1933,  1936,  1937,  1938,  1941,  1945,  1946,  1948,  1949,  1950,
    1952,  1953,  1955,  1956,  1961,  1963,  1964,  1966,  1967,  1968,
    1969,  1970,  1971,  1973,  1975,  1977,  1978,  1979,  1981,  1983,
    1984,  1985,  1986,  1987,  1988,  1989,  1990,  1991,  1992,  1993,
    1995,  1997,  1998,  1999,  2000,  2002,  2003,  2004,  2005,  2006,
    2008,  2009,  2010,  2011,  2012,  2013,  2016,  2017,  2018,  2019,
    2020,  2021,  2022,  2023,  2024,  2025,  2026,  2027,  2028,  2029,
    2030,  2031,  2032,  2033,  2034,  2035,  2036,  2039,  2040,  2041,
    2042,  2043,  2044,  2052,  2059,  2068,  2077,  2084,  2091,  2099,
    2107,  2114,  2119,  2124,  2129,  2134,  2139,  2144,  2150,  2160,
    2170,  2180,  2187,  2197,  2207,  2216,  2228,  2241,  2246,  2249,
    2251,  2253,  2258,  2262,  2263,  2264,  2270,  2272,  2274,  2277,
    2278,  2279,  2280,  2281,  2282,  2283,  2286,  2287,  2288,  2289,
    2290,  2291,  2293,  2295,  2297,  2299,  2301,  2303,  2306,  2307,
    2308,  2309,  2311,  2314,  2315,  2317,  2319,  2320,  2321,  2323,
    2326,  2329,  2330,  2332,  2333,  2334,  2335,  2337,  2338,  2339,
    2340,  2341,  2343,  2345,  2346,  2348,  2351,  2352,  2353,  2355,
    2357,  2358,  2359,  2360,  2362,  2365,  2369,  2370,  2371,  2372,
    2375,  2378,  2380,  2381,  2382,  2383,  2385,  2388,  2389,  2391,
    2392,  2393,  2394,  2395,  2397,  2398,  2400,  2403,  2404,  2405,
    2406,  2407,  2409,  2411,  2412,  2413,  2414,  2416,  2418,  2419,
    2420,  2421,  2422,  2423,  2425,  2426,  2428,  2431,  2432,  2433,
    2434,  2437,  2438,  2441,  2442,  2445,  2446,  2449,  2462,  2463,
    2467,  2468,  2472,  2473,  2476,  2480,  2486,  2488,  2491,  2493,
    2496,  2498,  2502,  2503,  2504,  2505,  2506,  2507,  2508,  2512,
    2513,  2516,  2517,  2518,  2519,  2520,  2521,  2522,  2523,  2526,
    2527,  2528,  2529,  2530,  2531,  2532,  2533,  2534,  2535,  2536,
    2539,  2540,  2543,  2544,  2544,  2547,  2549,  2551,  2554,  2555,
    2556,  2557,  2560,  2561,  2564,  2565,  2568,  2572,  2573,  2573,
    2576,  2577,  2580,  2583,  2587,  2588,  2589,  2590,  2591,  2592,
    2593,  2594,  2600,  2601,  2602,  2603,  2606,  2608,  2609,  2614,
    2616,  2617,  2618,  2619,  2622,  2623,  2628,  2632,  2633,  2634,
    2637,  2638,  2643,  2644,  2647,  2649,  2650,  2651,  2656,  2658,
    2664,  2665,  2666,  2667,  2670,  2671,  2674,  2676,  2678,  2679,
    2682,  2684,  2685,  2686,  2689,  2690,  2693,  2694,  2695,  2698,
    2699,  2700,  2703,  2704,  2705,  2706,  2707,  2710,  2711,  2712,
    2715,  2716,  2717,  2718,  2719,  2722,  2724,  2726,  2728,  2731,
    2733,  2735,  2738,  2739,  2740,  2741,  2742,  2743,  2744,  2745,
    2746,  2749,  2750,  2751,  2754,  2755,  2756,  2759,  2760,  2761,
    2764,  2765,  2766,  2769,  2770,  2771,  2772,  2775,  2776,  2777,
    2780,  2781,  2782,  2785,  2786,  2787,  2790,  2791,  2792,  2795,
    2797,  2799,  2803,  2807,  2809,  2814,  2817,  2818,  2819,  2820,
    2823,  2824,  2826,  2827,  2829,  2832,  2833,  2834,  2837,  2838,
    2841,  2843,  2844,  2845,  2846,  2849,  2850,  2851,  2854,  2855,
    2856,  2859,  2860,  2865,  2869,  2876,  2877,  2879,  2884,  2886,
    2889,  2890,  2891,  2892,  2894,  2899
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
  "markerCreateTemplate", "markerDelete", "markerEdit", "markerFormat",
  "markerGet", "markerGetCentroid", "markerGetHighlite", "markerGetSelect",
  "markerGetShow", "markerInitProp", "markerLayer", "markerList",
  "markerLoad", "markerMoveSelected", "markerProps", "markerProp",
  "markerProperty", "markerProperties", "markerQuery", "@2", "markerSave",
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
     498,   498,   498,   498,   498,   498,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   501,   501,   501,
     501,   501,   501,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   503,
     503,   503,   503,   504,   504,   504,   505,   505,   505,   506,
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
     515,   515,   516,   516,   516,   516,   516,   516,   516,   517,
     517,   518,   518,   518,   518,   518,   518,   518,   518,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     520,   520,   521,   522,   521,   523,   523,   523,   524,   524,
     524,   524,   525,   525,   526,   526,   527,   528,   529,   528,
     530,   530,   531,   532,   533,   533,   533,   533,   533,   533,
     533,   533,   534,   534,   534,   534,   535,   535,   535,   535,
     535,   535,   535,   535,   536,   536,   536,   537,   537,   537,
     538,   538,   538,   538,   539,   539,   539,   539,   540,   540,
     541,   541,   541,   541,   542,   542,   543,   543,   543,   543,
     544,   544,   544,   544,   545,   545,   546,   546,   546,   547,
     547,   547,   548,   548,   548,   548,   548,   549,   549,   549,
     550,   550,   550,   550,   550,   551,   551,   551,   551,   552,
     552,   552,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   554,   554,   554,   555,   555,   555,   556,   556,   556,
     557,   557,   557,   558,   558,   558,   558,   559,   559,   559,
     560,   560,   560,   561,   561,   561,   562,   562,   562,   563,
     563,   563,   564,   565,   565,   565,   566,   566,   566,   566,
     567,   567,   567,   567,   567,   568,   568,   568,   569,   569,
     570,   570,   570,   570,   570,   571,   571,   571,   572,   572,
     572,   573,   573,   573,   574,   575,   575,   575,   575,   575,
     576,   576,   576,   576,   576,   576
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
       4,     4,     4,     0,     1,     1,     4,     4,     1,     1,
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
       1,     1,     1,     1,     7,     8,     2,     6,     2,     6,
       2,     3,     2,     1,     1,     3,     3,     1,     4,     2,
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
      23,     0,     0,     0,     0,     0,     0,     0,  1048,     0,
       0,     0,     0,     0,     0,     0,     0,  1048,    41,     0,
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
       0,   479,     0,     0,     0,     0,     0,     0,  1048,     0,
     358,     0,   362,     0,     0,     0,   366,     0,   368,     0,
     370,     0,     0,   514,   374,    20,     0,   520,    21,   525,
       0,     0,   544,   529,   530,   531,   532,   546,   534,   535,
     539,   536,     0,   538,   540,     0,     0,    22,     0,    24,
       0,   561,     0,     0,     0,   566,     0,    26,     0,     0,
       0,     0,     0,     0,     0,    28,   720,    29,     0,     0,
       0,     0,     0,     0,   721,    30,     0,    31,  1052,  1053,
    1049,  1050,  1051,     0,   138,  1114,     0,   132,     0,     0,
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
     933,     0,     0,     0,     0,   835,     0,     0,     0,   870,
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
       0,     0,     0,     0,     0,     0,     0,   783,     0,     0,
       0,     0,     0,   806,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   825,     0,     0,   830,   831,     0,     0,
       0,   850,   852,   851,     0,   854,     0,     0,   861,   863,
     864,   898,     0,     0,     0,     0,   729,   730,   941,   939,
     944,   943,   942,   940,   945,     0,   734,     0,   935,   934,
     738,     0,   938,     0,   739,   740,   741,   742,     0,     0,
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
       0,    58,     0,   445,     0,     0,   959,     0,     0,     0,
       0,     0,     0,   973,     0,     0,     0,     0,     0,     0,
     990,   991,     0,     0,     0,     0,     0,  1002,     0,  1008,
    1009,  1011,  1013,     0,  1017,  1028,  1029,  1030,     0,  1032,
    1037,  1039,  1040,  1038,   946,     0,  1019,     0,  1018,   958,
       0,     0,  1024,     0,  1026,     0,  1025,  1046,  1027,  1034,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1047,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   736,     0,     0,     0,     0,
     836,     0,   156,  1060,  1058,  1056,     0,     0,   156,  1062,
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
       0,     0,   156,   960,     0,   963,     0,     0,   966,     0,
     156,   971,     0,   974,   975,     0,   977,   978,   979,     0,
     983,     0,     0,   986,     0,   992,     0,     0,     0,   997,
     998,   996,     0,     0,     0,  1003,  1004,     0,     0,  1007,
    1010,  1012,  1014,     0,     0,  1031,  1033,   950,  1042,   951,
       0,     0,  1044,  1035,     0,     0,   523,   524,     0,     0,
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
       0,   743,   744,   156,   164,  1061,     0,     0,  1065,  1066,
       0,     0,   843,     0,   156,     0,  1099,  1101,   865,     0,
    1156,  1157,  1160,  1161,   199,   199,   199,  1232,  1211,  1210,
    1212,  1215,  1214,  1218,  1217,  1219,  1216,  1224,  1223,  1225,
    1221,  1220,  1222,     0,     0,  1241,     0,  1263,     0,   156,
       0,  1266,     0,     0,   237,     0,   234,     0,     0,     0,
     274,     0,     0,     0,     0,   156,     0,   311,   144,     0,
     405,     0,   426,   164,   167,     0,     0,   439,     0,   477,
     478,     0,   443,     0,     0,     0,     0,     0,   156,   961,
     167,   167,   167,   156,   967,   167,   164,   167,   167,   156,
     980,   167,   167,   167,   156,   987,   167,   167,   156,     0,
     167,   156,   167,   167,   156,   167,   156,  1021,  1022,     0,
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
       0,   156,     0,     0,    85,     0,     0,   936,   937,   164,
       0,     0,     0,  1068,   842,   844,   164,   156,  1149,  1190,
    1189,  1191,  1233,     0,  1243,  1273,     0,     0,  1268,  1267,
     238,     0,     0,     0,   279,     0,     0,     0,   297,   167,
     406,   410,   427,   429,     0,   437,   472,     0,     0,     0,
       0,     0,     0,   957,   962,   965,   964,   968,   969,   970,
     972,   976,   981,   982,   984,   985,   988,   989,   993,   164,
     167,  1000,   164,  1001,  1005,   164,  1015,   164,     0,     0,
     521,     0,   594,   605,   177,   174,   634,   177,   177,   177,
     177,   177,     0,   177,   177,   174,   177,   177,   177,   177,
     177,     0,   177,   177,   174,   177,   177,   177,   177,   177,
       0,   177,   177,   174,   177,   649,   650,   651,   652,   654,
     174,   657,   658,     0,   177,   177,   678,   679,   680,   681,
     683,   174,   686,   687,     0,   177,   693,   174,     0,   699,
     174,   708,   621,   174,   717,   718,   156,   750,     0,   167,
     753,     0,   156,     0,   761,   765,   156,     0,   772,   773,
     774,   775,   779,   780,   776,   777,   778,     0,     0,   167,
     800,     0,   156,     0,     0,   813,   167,     0,     0,   167,
     167,     0,   859,     0,   188,   188,     0,     0,   188,     0,
     188,  1047,     0,     0,     0,     0,     0,     0,     0,     0,
    1069,     0,     0,   188,   188,     0,     0,     0,     0,     0,
       0,     0,     0,   929,     0,     0,     0,  1047,    86,     0,
     188,     0,  1093,   156,   156,     0,   164,     0,   220,  1275,
    1274,     0,     0,   242,     0,     0,     0,     0,   312,   438,
     331,     0,   953,     0,   196,     0,   994,   995,   999,  1006,
    1016,   364,   331,     0,   606,   631,   640,   641,   642,   643,
     644,   174,   646,   647,   177,   669,   670,   671,   672,   673,
     174,   675,   676,   177,   660,   661,   662,   663,   664,   174,
     666,   667,   177,   653,   177,   174,   659,   682,   177,   174,
     688,   695,   174,   705,   622,     0,   167,   754,     0,     0,
       0,     0,     0,   781,   782,   798,     0,     0,     0,   809,
     814,     0,   823,   824,   815,   167,     0,   189,  1047,  1047,
      85,     0,  1047,     0,  1047,   903,   156,     0,  1072,     0,
    1075,  1112,  1076,  1074,  1071,     0,  1047,  1047,    85,     0,
       0,  1047,  1047,     0,     0,  1047,   932,   930,   931,   910,
    1047,  1047,  1093,  1107,     0,  1059,  1057,  1095,     0,     0,
       0,     0,   244,     0,     0,     0,   332,   333,   354,     0,
       0,   197,   198,   955,   956,   372,     0,   177,   648,   177,
     677,   177,   668,   655,   177,   684,   177,   696,     0,   749,
     167,   167,     0,   167,     0,   167,   167,     0,   167,     0,
    1047,   916,   912,  1047,     0,   917,     0,   911,  1047,     0,
    1073,     0,   914,   913,  1047,     0,     0,   908,   906,  1047,
     156,   907,   909,   915,  1107,  1054,     0,     0,  1094,  1105,
    1096,  1148,     0,     0,     0,   275,   298,   301,   299,     0,
       0,   952,   156,   567,   645,   674,   665,   656,   685,   167,
     752,   758,     0,   771,   768,   799,   804,     0,   819,     0,
     921,   905,    85,     0,   919,  1113,     0,   904,    85,     0,
     920,     0,  1055,  1109,  1111,     0,  1104,     0,     0,   280,
       0,     0,     0,     0,   196,     0,   755,   156,   769,   801,
     833,  1047,     0,     0,  1047,     0,   167,  1110,  1106,   243,
       0,     0,     0,     0,     0,   954,   728,   156,   756,   770,
     156,   802,   923,     0,  1047,   922,     0,     0,   245,   291,
       0,   290,     0,   757,   803,    85,   924,    85,  1047,   289,
     288,  1047,  1047,   918,   926,   925
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,  1413,   172,   152,  1260,  2487,  2488,   429,   430,
     431,   432,   153,   154,   155,   694,   686,    91,   813,   452,
    1210,  1678,  1350,  1363,  1346,  1921,  2588,  1410,  2643,  1581,
     340,   766,   769,   772,   780,    63,   365,   371,   375,   378,
      68,   381,    75,   397,   393,   387,   404,    82,   409,    92,
      98,   414,   416,   418,   486,   867,  1647,   420,   423,   105,
     439,   156,   158,  2638,   174,   215,   475,   856,   477,   487,
     859,   864,   489,   491,   870,   494,   872,   505,   875,   877,
     508,   512,   516,   518,   521,   525,   553,   549,  1273,   539,
     895,   900,   892,  1261,   906,   542,   563,   566,   571,   576,
     584,   935,   937,   939,   941,   589,   945,   218,   591,  1748,
     237,   594,   596,   600,   605,   613,   247,  1339,   617,   255,
     626,  1355,   628,   634,   990,  1371,   985,  1789,  1377,  1375,
    1791,   986,  1380,  1382,   640,   643,   638,   257,   265,   267,
     681,  1067,  1437,  1056,  1535,  1965,  1070,  1074,  1065,   930,
    1314,  1318,  1326,  1328,  1949,   273,  1083,  1086,  1094,  2254,
    2255,  2256,  1950,  2623,  2624,  1115,  1119,  1122,  2698,  2699,
    2695,  2696,  2743,  2257,  2258,   281,   287,   295,   708,   703,
     300,   305,   307,   718,   725,  1148,  1153,   775,   763,   313,
     317,   732,   323,   739,  1586,   752,   753,  1184,  1179,  1592,
    1169,  1598,  1610,  1606,  1173,   757,   741,   329,   330,   344,
    1197,   347,   353,   790,   793,   787,   355,   358,   798
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2563
static const yytype_int16 yypact[] =
{
    5234,    68,   459,    82, -2563, -2563,   806,  -139,   566,   525,
     747,    99,  3371,   120,   263,  1364,    62,  5419,    71,  2305,
   -2563,     8,   743,   168,  1025,   219,    15,   495,   279,   501,
     182,   808,  1052,    39,   731,   474,   148,   279, -2563,   108,
      35,   967, -2563,   497,   513,  1144, -2563,   565, -2563,    86,
    3909,   311,    88,   554,    26,   128,   282,   571,   581,   104,
     637,    30,   175, -2563, -2563, -2563,   686,   619, -2563,   152,
      65,   263,   379,    84,   190, -2563,   639,   619, -2563, -2563,
     110,   619, -2563, -2563, -2563, -2563,   619, -2563, -2563, -2563,
   -2563, -2563, -2563,   275,   640,   677,   705,   603, -2563,   619,
    1337,   619,   619,   973,   619, -2563, -2563, -2563,   551, -2563,
   -2563, -2563, -2563,  4809, -2563, -2563, -2563, -2563, -2563, -2563,
     619, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563,
   -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563,
   -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563,
   -2563, -2563, -2563,  1290, -2563,   619, -2563,   751, -2563, -2563,
     263,   263,   263,   263,   263,   263, -2563, -2563,   263,   263,
     263,   263, -2563,   670, -2563,   767,  1553,   729,   258,   529,
     694,   -29,  4195,   523,  4860,  4658,   824,  4809,  4110, -2563,
    1018,   -90,   813,   878,   816,   119,   847,   882,   279,   416,
   -2563,   836, -2563,   679,   636,   192, -2563,   203, -2563,   922,
   -2563,   105,   839,    18, -2563, -2563,  4931, -2563, -2563, -2563,
     869,   881,   920, -2563, -2563, -2563, -2563,   649, -2563, -2563,
   -2563, -2563,   701, -2563, -2563,  4931,  4450, -2563,   959, -2563,
      37, -2563,   978,   974,   385, -2563,   619, -2563,   982,    42,
     990,   289,   868,   994,    23, -2563, -2563, -2563,  1002,  1007,
     263,   263,   619,   619, -2563, -2563,  1035, -2563, -2563, -2563,
   -2563, -2563, -2563,  3808,   720, -2563,  1037,   144,   619,  4931,
     619, -2563,  1043, -2563, -2563, -2563, -2563, -2563,   619,  1114,
     263,  2611,   619,  1290,   619, -2563,  1011, -2563,  5017, -2563,
   -2563,   744,  1049,  1058,   619, -2563,  1061, -2563, -2563,   -37,
    1074,  4931,  1085, -2563,  1291,   619,  1000, -2563,   473,   981,
    1438,   453,  1100, -2563, -2563, -2563, -2563, -2563, -2563, -2563,
    1103, -2563,   750,   109,   136,   197,   125,   619,   619,   170,
   -2563,   619,   837,  1117, -2563,   619,   619, -2563,  1120,    29,
      38,  1132,  1290, -2563, -2563, -2563,   970,   619, -2563, -2563,
   -2563, -2563, -2563, -2563,   619, -2563,  1134,  1137, -2563,   619,
     183, -2563, -2563, -2563, -2563, -2563, -2563,   619, -2563, -2563,
     619, -2563, -2563,   160,   160, -2563,  1143, -2563, -2563, -2563,
   -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563,   950,   619,
     619,  1148,  1159,  1162, -2563, -2563,   619,   619,   619, -2563,
     619, -2563,  1165, -2563, -2563, -2563, -2563,   683, -2563,  1179,
   -2563,  4931,  1204, -2563,   619, -2563, -2563, -2563,   619,  1209,
    1217,  1217,  4931,   619,   619,   619,   619,   619,   619, -2563,
     619,  4809,  1337,   619,   619, -2563, -2563, -2563, -2563, -2563,
   -2563, -2563,  1337,   619, -2563, -2563, -2563, -2563, -2563, -2563,
   -2563, -2563, -2563, -2563, -2563,  1226, -2563,   963,    25, -2563,
   -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563,   -91, -2563,
   -2563, -2563,  1062, -2563,   698,   381,   381, -2563, -2563, -2563,
    1243, -2563,  1257, -2563, -2563,   -38, -2563,  1095, -2563, -2563,
   -2563,  1094, -2563, -2563,  1290, -2563,   619,   619, -2563,  4931,
    4931,  1290, -2563, -2563,  1290, -2563, -2563, -2563, -2563,  1290,
   -2563, -2563,  4931,  1290,   619, -2563, -2563,  4931, -2563,  1275,
     476,  1086,     3, -2563, -2563,  1091,  4931,     7, -2563, -2563,
   -2563, -2563, -2563, -2563,  1294,  1298,  1297, -2563,  1106, -2563,
   -2563, -2563,   619, -2563, -2563,   483, -2563, -2563, -2563, -2563,
   -2563, -2563, -2563, -2563, -2563, -2563, -2563,   105, -2563, -2563,
   -2563, -2563, -2563, -2563,  1115,  1122, -2563, -2563,  1254,  1256,
    1259, -2563, -2563,  1096, -2563,   619,  1302,  1098,  5017, -2563,
    1290, -2563, -2563,  1324, -2563, -2563, -2563, -2563, -2563, -2563,
   -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563,  4931,  4931,
    4931,  4931, -2563, -2563, -2563,  1330,   263, -2563, -2563,  1331,
    1334,  1145,   619, -2563,   755,  1262, -2563,  1340, -2563,   233,
    1264,  4775,    33,  1348, -2563,  1350, -2563,  1352, -2563,     4,
   -2563,  1356,  1357, -2563,  1360, -2563, -2563, -2563,   619, -2563,
    5017,  4774,  1571,   598,  1392,   461,  1300, -2563, -2563, -2563,
      94,    93,  1395,  1398,    48,   619,   393,   527,    76,  4931,
     263,  1666,   449,    43,    78,   238,    21, -2563,  1388,  1389,
    1406, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563,
   -2563, -2563, -2563, -2563, -2563,   619, -2563, -2563, -2563,   619,
     619,   619,   619, -2563, -2563,   619,  1290,   619, -2563,   619,
    1337,   619,  1409,  1290, -2563, -2563, -2563, -2563, -2563, -2563,
   -2563, -2563,  1413,   484,   517, -2563, -2563, -2563,  1414, -2563,
   -2563, -2563, -2563,  1325, -2563,  1422,  1427,  1347,  1433, -2563,
    1434, -2563,  1437,  1355,  1439,   472,    32,   493,   122,   509,
    1441,   558, -2563, -2563,  1442,  1443,  1446, -2563, -2563,  1447,
   -2563, -2563, -2563, -2563,  1448, -2563, -2563,  1452, -2563, -2563,
    1453, -2563, -2563, -2563, -2563, -2563, -2563, -2563,   619,   619,
   -2563,   619,  1128,   619,   619, -2563,  2691, -2563,  1140,  1455,
   -2563,  1189,  1456, -2563, -2563,   -48,   619,   619, -2563,  1440,
   -2563, -2563,  1457,  1057,   619,  1451,   133, -2563, -2563, -2563,
   -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563,
   -2563,  1462,  1463,   619,   619,   619,  1466,   263,  1467,  1472,
    1290,  4931, -2563, -2563, -2563, -2563, -2563,  1290, -2563, -2563,
     619,   619,   619,  4931,   619,  1337,   619, -2563,   619, -2563,
   -2563, -2563, -2563, -2563,  1474,  1475, -2563, -2563, -2563, -2563,
   -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563,   523,
   -2563,   619, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563,
    4931,   619,  1290,  1290,   -48,   -48,   -48,  1290,  1337,   619,
    1290, -2563, -2563, -2563,   619, -2563,   -55,  1313,  1477,  1482,
   -2563, -2563,  1290, -2563,  1328,  1332, -2563,  1488,  1489,  1491,
    1202,   619,  4572,   447,   695, -2563, -2563, -2563,   619,    54,
    1079, -2563,  1230, -2563,  1666,  1233,   179,  1206,   511, -2563,
   -2563,   619, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563,
   -2563, -2563,   619,  1493, -2563, -2563, -2563,   -48, -2563, -2563,
   -2563, -2563, -2563,  4900, -2563, -2563,  1497,  1498,   619,  1501,
    1502,  1507,   -10,   -10,  -106,  1512,  1515,  1526,  1527,  1265,
    1270,  1540,  1545,  1546,    55,    55,  -106,  1548,  1551,  -106,
    1556,  1557,  5420,  1558,  1560, -2563, -2563,  1563,  1566,   481,
   -2563,  1552,  1554,  1567,  1574,   -10,  -106,  1572,  1575, -2563,
    1577, -2563, -2563,  1290,   669,  1255,  1260,   467,  1343,  1480,
    1543,   490,  1583,   187,  1450,  1485,  1004,   712,  1555,   549,
    1351,  1492,  1591,  1383,   241,   162,   307,   -63,  4931,  1666,
    1561,   -82,  1354,  1385,  1598,    31, -2563, -2563,   244,  1600,
    1601, -2563, -2563, -2563,  1603,  1394,   164,  1666,  1396, -2563,
   -2563, -2563,   263,  1608,  1612,   619, -2563, -2563, -2563, -2563,
   -2563, -2563, -2563, -2563, -2563,     0, -2563,   935, -2563, -2563,
   -2563,   619, -2563,   619, -2563, -2563, -2563, -2563,   619,   619,
     619,   461,  4931, -2563,  1615,  1248, -2563, -2563,   619, -2563,
   -2563,   619,  4931,   619, -2563, -2563, -2563, -2563, -2563, -2563,
   -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563,   263,   619,
   -2563,   619,   461,  1616,  1624, -2563, -2563,   619,   619, -2563,
     263, -2563, -2563, -2563,   572,  1631,  1634, -2563, -2563, -2563,
   -2563, -2563,   619,   619, -2563, -2563,  1337,   619,   619, -2563,
   -2563, -2563, -2563,  1639,   619, -2563,   619,  1532, -2563,   619,
   -2563,   619,  1533, -2563,  1643, -2563,  1083,  1083,   589,  1083,
    1646, -2563,   604, -2563, -2563,  1648,  1653,   606,  1644, -2563,
    1654,  1655,  1660, -2563,   621,   623,  1661,  1662,  1664, -2563,
   -2563,  1671,  1673,  1665, -2563,  1083,  1083,  1083,   619, -2563,
   -2563, -2563,   619, -2563,   619,  1080,  4931, -2563,   619, -2563,
    5017,  1290, -2563, -2563,  1676, -2563, -2563,  1677, -2563, -2563,
   -2563, -2563,  1659,  2611, -2563,   619,  1674,   619,   619,   619,
     866, -2563,  1679,  1683,   619,   619,    -7,  1678,   263,   263,
   -2563,  1290,   619,  1685,  1687,  1688,  1290,  4931, -2563,   619,
   -2563, -2563, -2563,   619,   619,   619,  1290,  4931,   -48, -2563,
   -2563, -2563, -2563,  1337,   619,  1689,   -48,   619,  1627,  1658,
     502, -2563,  1692, -2563, -2563,   995,  4165,   619, -2563,   619,
    1694,  1699,   619, -2563,  1695,  1116,  4809,  1459,   612,  1461,
      89,  4931,   635, -2563,   231,  1564,   178,   692,  1464,   181,
   -2563, -2563,   545,  1534,   552,  1584,   435,  1666,   360, -2563,
    1704,  1460, -2563,   597, -2563, -2563, -2563, -2563,  1666,  1500,
   -2563, -2563, -2563, -2563, -2563,   619, -2563,   619, -2563, -2563,
     619,   619, -2563,   619, -2563,   619, -2563, -2563, -2563, -2563,
    1510,   619, -2563,   619,    12, -2563, -2563,  1710,  1713, -2563,
     619,   -10,   -10,   -10, -2563, -2563, -2563, -2563, -2563, -2563,
    1714,   -10,   -10,   -10,   929, -2563, -2563,    55,   -10,   -10,
     -10, -2563, -2563,   -10,   -10,  1715,   -10,   -10,  1716,    55,
    1010, -2563,  1719,  1722,  1723, -2563,   611, -2563,   662,   904,
   -2563,  1030, -2563,  1458,  1724,  1726,  1727,    55,    55,  -106,
    1729,  1731,  -106,  1734,  1732,  1736,   -10,   -10, -2563,  1739,
     -10,   -10, -2563,  1740, -2563, -2563, -2563, -2563, -2563, -2563,
     263, -2563, -2563, -2563,  4809,  1156,   263,   619,  1240,  1171,
     375, -2563, -2563, -2563,   402, -2563, -2563, -2563, -2563, -2563,
   -2563, -2563, -2563, -2563, -2563, -2563, -2563,  1746,   263,   619,
   -2563,   263,  1747,   619,  4931,   263,  1418,  1511,  1513,   186,
     204,  1514,   205,  1444,  1445,  1756,  1757,  1758,  1543,  1759,
    1761,  1762,  1468,  1469,  1278,  1764,   263,   619,  1269,  1426,
   -2563, -2563,   263,  4931, -2563, -2563,  4931,   619,    57,  1766,
     263,   619,  1290,   263, -2563,  1767,  4931,  4931,   619, -2563,
   -2563, -2563,   263,   263,  4931, -2563, -2563, -2563, -2563, -2563,
   -2563,  4931,   619,   263, -2563, -2563, -2563,   619, -2563, -2563,
    1769,   619,  1549,   232,   619,  1559,   619,   242,   619, -2563,
     619,  1565,  1568,   619,   619,   619,   619,   619,   619,   619,
     619,    19,   619,   619,  1578, -2563,   619,   619,   619,   619,
   -2563,  4931,  1290,  1771,  1775,  1779,   619,   619,  1290, -2563,
     619,   619,   619,  4931,   461, -2563,   619,   619, -2563, -2563,
   -2563,  1780, -2563, -2563, -2563, -2563, -2563, -2563,  1782,   619,
     619, -2563,   619,   619, -2563, -2563, -2563, -2563, -2563, -2563,
   -2563, -2563, -2563,  1783,  1785,  1787, -2563, -2563,  1083,  1795,
    1798,  1788, -2563,  1801,  1806,  1807,  1808,  1810, -2563,  1812,
   -2563, -2563, -2563,  1814,  1815,  1813, -2563,  1818,  1822,  1826,
   -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563,
     619,   619,   619, -2563, -2563,   619,  1290, -2563, -2563, -2563,
    2611,   619,  1290,   619,   619,   619, -2563,   619,   619,  1827,
     619,  1829,  1765,   619,   619, -2563, -2563,  1833,  4931, -2563,
   -2563, -2563,   619, -2563, -2563, -2563, -2563,  1290, -2563,  1308,
     619,  1308,   -48,  1290,  4931,   619,   619,  1834, -2563, -2563,
   -2563, -2563, -2563,   619, -2563, -2563, -2563, -2563, -2563,  4931,
   -2563,  4931,   619,  1836, -2563, -2563,  1837,  1838,  1839,  1840,
    1842,  4931,  1290, -2563,  4931, -2563,  4931,  4931,  4809,  4931,
    1290, -2563,  4931, -2563, -2563,  4931, -2563, -2563,  4809,  4931,
   -2563,  4931,  4931,  4809,  4931, -2563,  4931,  4931,   619, -2563,
   -2563, -2563,  4931,  4931,  4931, -2563, -2563,  4931,  4931, -2563,
   -2563, -2563, -2563,  4931,  4931, -2563, -2563, -2563, -2563, -2563,
     619,   619, -2563, -2563,  1846,   619, -2563, -2563,  1847,  1850,
   -2563,   619, -2563, -2563, -2563,   -10, -2563, -2563, -2563,  1851,
    1853,  1856, -2563, -2563,  -106,  1858,  1859,  1860,   -10, -2563,
   -2563, -2563, -2563, -2563,    55, -2563, -2563,  1862,   -10,  1864,
    1865,  1866,    55,    55,  -106,  1863,  1871,  1872,  1087, -2563,
    1296, -2563,  1345,  1508,  1882,  1885,  1886,    55,    55,  -106,
    1888,  1889,  -106,  1890,  1535,  1891,  1892,  1893,    55,    55,
    -106,  1895,  1896,  -106,  1898,  1618,  1900,  1902,  1903,    55,
      55,  -106,  1897,  1905,  -106,  1906,  1907,  1908,  1910,    55,
      55,  -106,  1912,  1913,  1915,    55, -2563, -2563, -2563, -2563,
   -2563,  1919, -2563, -2563,  1920,    55,  1921,  1922, -2563, -2563,
     -10, -2563, -2563,  1923, -2563,  1290, -2563,  4931,   619, -2563,
     619,  4931,   619,  1924,  1255, -2563, -2563, -2563, -2563, -2563,
   -2563,  1926, -2563,  4931,   263,  1927,  4931,  1290, -2563,  1928,
    1255,   619,   619,   619,   619,   619,   619,   619,   619,   619,
    1930,  1931, -2563, -2563, -2563,  1942, -2563, -2563, -2563,  1958,
    1963, -2563, -2563, -2563, -2563,   619,  4931,   619,  1964,  1255,
     263,  1290,  1290, -2563, -2563, -2563, -2563, -2563, -2563, -2563,
   -2563, -2563, -2563, -2563,   619,  1337, -2563, -2563,  1290,  1290,
     619, -2563, -2563,  1290,  1290, -2563, -2563, -2563, -2563,   619,
     619,   619,   619,   619,   619,   619,   619,   619,   619,  1708,
   -2563,   619,   619,   619,   619,   619,   619,   619,   619,   619,
     619,   619,  3413,  1965,   619, -2563,   619,   619,   619,  1967,
    1969, -2563, -2563,  1290,   -48, -2563,  1971,  1974, -2563, -2563,
    1337,   619, -2563,  1970,  1290,  4931, -2563, -2563, -2563,  1976,
   -2563, -2563, -2563, -2563,  1083,  1083,  1083, -2563, -2563, -2563,
   -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563,
   -2563, -2563, -2563,  1255,   619, -2563,   619, -2563,   619,  1290,
     619, -2563,  1337,   619, -2563,   619, -2563,  1819,  1977,  1979,
   -2563,  1981,   619,   619,  1982,  1290,  4931, -2563, -2563,   619,
   -2563,   619, -2563,   -48,   995,   619,  1984, -2563,   619, -2563,
   -2563,   105, -2563,  1985,  1986,  1987,  1988,  1990,  1290, -2563,
     995,   995,   995,  1290, -2563,   995,   -48,   995,   995,  1290,
   -2563,   995,   995,   995,  1290, -2563,   995,   995,  1290,  4931,
     995,  1290,   995,   995,  1290,   995,  1290, -2563, -2563,  1992,
     105,  1993, -2563,   619, -2563, -2563, -2563, -2563,  1996, -2563,
   -2563, -2563, -2563,   -10,    55, -2563, -2563, -2563, -2563, -2563,
   -2563,  1997, -2563, -2563,    55,  1999,  2000,  2001,    55,    55,
    -106,  1998,  2003,  2004,  2005,  2007,  2009,    55,    55,  -106,
    2012,  2014,  2016,  2018,  2019,  2020,    55,    55,  -106,  2022,
    2023,  2026,    55,   -10,   -10,   -10,   -10,   -10,  2024,   -10,
     -10,  2028,    55,    55,   -10,   -10,   -10,   -10,   -10,  2029,
     -10,   -10,  2030,    55,    55, -2563, -2563, -2563, -2563, -2563,
    2031, -2563, -2563,  2035,    55, -2563, -2563, -2563, -2563, -2563,
    2039, -2563, -2563,    55, -2563,    55,  2040, -2563,  2042,  2043,
   -2563,  5017, -2563,   995,  2044,  4931,   995,   619,  4931,  2045,
   -2563,   995, -2563, -2563,   995, -2563,  4931,  2046,   619,   619,
     619,   619,   619,   619,   619,   619,   619,   619,   619, -2563,
   -2563, -2563,  4931,   995,   619,  4931,  2047, -2563,  1337,  1337,
    4931,  1337,  1337,  4931,  4931,  1337,  1337,   619,   619,   619,
     619,   619,   619,  1255,   619,   619,   619,  1494,  1611,  1651,
    1697,  1698,  1700,  1701,  1708, -2563,  1702, -2563, -2563,  1255,
     619,   619,   619,   619,  1255,   619,   619,   619,   619,   619,
     619,  1290,   619,  1672,  1255,   619,   619, -2563, -2563,   -48,
     263,  4931,  4931, -2563, -2563, -2563,   -48,  1290,  2048, -2563,
   -2563, -2563, -2563,   619, -2563, -2563,  1337,   619, -2563, -2563,
   -2563,  1013,  2051,  2055, -2563,   619,  2057,  1308, -2563,   995,
   -2563, -2563, -2563, -2563,  2058, -2563, -2563,  2060,  2061,  2063,
    2064,  4931,  2065, -2563, -2563, -2563, -2563, -2563, -2563, -2563,
   -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563,   -48,
     995, -2563,   -48, -2563, -2563,   -48, -2563,   -48,  2068,  2070,
   -2563,   619, -2563, -2563,   -10,    55, -2563,   -10,   -10,   -10,
     -10,   -10,  2071,   -10,   -10,    55,   -10,   -10,   -10,   -10,
     -10,  2072,   -10,   -10,    55,   -10,   -10,   -10,   -10,   -10,
    2074,   -10,   -10,    55,   -10, -2563, -2563, -2563, -2563, -2563,
      55, -2563, -2563,  2075,   -10,   -10, -2563, -2563, -2563, -2563,
   -2563,    55, -2563, -2563,  2076,   -10, -2563,    55,  2077, -2563,
      55, -2563, -2563,    55, -2563, -2563,  1290, -2563,  4931,   995,
   -2563,  2078,  1290,   619, -2563, -2563,  1290,   619, -2563, -2563,
   -2563, -2563, -2563, -2563, -2563, -2563, -2563,   619,   619,   995,
   -2563,  2079,  1290,   619,  1337, -2563,   995,   619,  1337,   995,
     995,  4931, -2563,   619,  2081,  2081,   619,   619,  2081,  1255,
    2081, -2563,  4931,  1543,  2082,  2084,  2086,  2087,  2088,  2090,
   -2563,   263,  1255,  2081,  2081,   619,   619,  1255,   619,   619,
     619,   619,   619, -2563,  1337,   619,  2092, -2563, -2563,   619,
    2081,   263,    17,  1290,  1290,   263,   -48,  2095, -2563, -2563,
   -2563,  2098,   619, -2563,  2099,  2101,  1904,   619, -2563, -2563,
      44,  4931, -2563,  2102,    61,  4931, -2563, -2563, -2563, -2563,
   -2563, -2563,    44,   619, -2563, -2563, -2563, -2563, -2563, -2563,
   -2563,    55, -2563, -2563,   -10, -2563, -2563, -2563, -2563, -2563,
      55, -2563, -2563,   -10, -2563, -2563, -2563, -2563, -2563,    55,
   -2563, -2563,   -10, -2563,   -10,    55, -2563, -2563,   -10,    55,
   -2563, -2563,    55, -2563, -2563,   619,   995, -2563,  4931,  4931,
     619,  4931,   619, -2563, -2563, -2563,  4931,  4931,   619, -2563,
   -2563,  4931, -2563, -2563, -2563,   995,  2104, -2563, -2563, -2563,
    1255,   619, -2563,  2105, -2563, -2563,  1290,  2108, -2563,  2110,
   -2563, -2563, -2563, -2563, -2563,  2111, -2563, -2563,  1255,   619,
    2112, -2563, -2563,   619,  4931, -2563, -2563, -2563, -2563, -2563,
   -2563, -2563,    17,  1773,  1666, -2563, -2563, -2563,   263,  2116,
    2119,  2122, -2563,  2059,  2117,   115, -2563, -2563, -2563,  2124,
    4931, -2563, -2563, -2563, -2563, -2563,  2125,   -10, -2563,   -10,
   -2563,   -10, -2563, -2563,   -10, -2563,   -10, -2563,  5017, -2563,
     995,   995,   619,   995,  2126,   995,   995,   619,   995,   619,
   -2563, -2563, -2563, -2563,  2127, -2563,   619, -2563, -2563,  2128,
   -2563,   619, -2563, -2563, -2563,  2130,   619, -2563, -2563, -2563,
    1290, -2563, -2563, -2563,  1773, -2563,  1797,  1711,  1666, -2563,
   -2563, -2563,  2131,  2132,  2134, -2563, -2563, -2563, -2563,   826,
     826, -2563,  1290, -2563, -2563, -2563, -2563, -2563, -2563,   995,
   -2563, -2563,  2135, -2563,  4809, -2563, -2563,  2136, -2563,  1255,
   -2563, -2563,  1255,   619, -2563, -2563,   619, -2563,  1255,   619,
   -2563,  4931, -2563,  1797, -2563,   263, -2563,  2138,  2140, -2563,
     619,   619,   619,   619,    61,  2141,  4809,  1290, -2563,  4809,
   -2563, -2563,   619,  2137, -2563,   619,   995, -2563, -2563, -2563,
    2142,  2143,   619,  2144,   619, -2563, -2563,  1290, -2563, -2563,
    1290, -2563, -2563,  2146, -2563, -2563,  2147,  2148, -2563, -2563,
    2149, -2563,  2152, -2563, -2563,  1255, -2563,  1255, -2563, -2563,
   -2563, -2563, -2563, -2563, -2563, -2563
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2563, -2563,    -3, -2563,   867, -2563, -1805, -1004,  1703, -2563,
     441,  -407,  1562,   -47,    91, -2563, -2563, -1655,  1751,  1983,
    -870,   655,  -852,  1809,   759, -2563, -1158, -2563,  -648, -1132,
   -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563,
   -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563,
   -2563, -2563, -2563, -2563,  -483,  -465, -2563, -2563, -2563, -2563,
   -2563, -2563, -2563,  -364, -2563, -2563, -2563, -2563, -2563, -2563,
   -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563,
   -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563,
   -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563,
   -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563,
   -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563,
   -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563,
   -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563,
   -2563, -2563, -1456, -2563, -2563, -2563, -2563, -2563,  -657, -2563,
   -2563, -2563, -2563, -2563, -2563,    36, -2563, -2563, -2563, -2563,
     -93,  -658, -1951,  -460, -2563, -2563, -2563, -2563, -2563,  -535,
    -530, -2563, -2563, -2562, -2563, -2563, -2563, -2563, -2563, -2563,
   -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563,
   -2563, -2563, -2563, -2563, -2563, -2563,  1420, -2563, -2563, -2563,
   -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563,
   -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563, -2563
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1246
static const yytype_int16 yytable[] =
{
      67,  1414,  1895,   352,  2039,  1509,  2041,   897,   104,  1082,
    1085,   903,   106,  1108,  1250,  1251,  1252, -1092,   993,   106,
     258,   868,    64,    65,  1962,  1582,  1123,  1587,   641,   292,
     106,   360,  1746,   788,   587,   847,  1491,   316,    64,    65,
    1645,   615,   791,   106,   296,   850,   346,   624,  1112,   357,
    1485,  1208,   364,  1617,  1618,  1619,   370,    64,    65,   377,
    1480,  1348,   373,   380,   382,  1077,   994,   392,    64,    65,
     399,   403,  1361,   309,   406,   238,  2636,  1334,   410,    64,
      65,  1258,   259,   411,  1914,    64,    65,    64,    65,    64,
      65,    64,    65,  2641,  1165,  1116,   424,   428,   433,   434,
     438,   440,    64,    65,   260,   857,  1915,    64,    65,  1916,
    1698,  1068,  1087,   106,   407,   723,  1088,   444,    64,    65,
    1917,   987,  1124,   294,  1365,   546,   540,  1368,  1125,   111,
     854,    64,    65,  1071,  2744,    54,   111,  1219,   773,    99,
     106,   904,   492,  1918,  1399,  1220,  1486,   111,   688,  1344,
      76,   493,   453,   157,  1166,   216,   383,   261,   873,   100,
     111,  1919,   109,   858,  1349,    64,    65,    64,    65,   361,
     310,   898,   217,    64,    65,   485,   764,  1345,    64,    65,
     506,  2767,    64,    65,   248,  1481,    64,    65,   363,  1089,
     808,  1167,   988,    64,    65,   804,  1259,   995,  1474,  1708,
    1499,   106,  1713,   767,   443,  1487,  1072,  1883,   547,   173,
    1174,  1090,   101,   114,  1441,   855,  1362,   588,  1209,   541,
     114,   115,   116,   874,   572,  1885,  1888,   724,   115,   116,
     111,   114,   314,   616,   555,    64,    65,   308,   970,   115,
     116,   548,   106,   622,   114,    64,    65,   971,   972,   282,
    1747,   713,   115,   116,   568,   388,   809,   111,  1703,   648,
     649,    64,    65,  1078,   770,  1316,  1322,   106,  1472,   400,
    1646,  1493,   996,  1091,   507,   695,   515,   697,   520,   524,
     412,  1175,   997,  1492,   398,   699,   702,   552,   705,   709,
    1073,   711,   625,  1117,   629,   973,   102,  1475,   642,  1500,
     376,   721,   585,  1139,   905,  2706, -1092,  1113,   119,  1510,
    1168,   731,   733,   998,   114,   119,   374,   774,   111,   899,
     789,   262,   115,   116,   117,   810,   119,  1126,  1963,   792,
    2637,  1699,   315,  1114,   776,   777,   779,   268,   781,   119,
     573,   114,   784,   785,   689,   297,  1079,  2642,   384,   115,
     116,   690,   691,   797,   799,   298,  1442,   149,  1069,   111,
     408,   800,   150,   151,   149,   401,   803,   805,   263,   150,
     151,  1483,   389,  1092,   806,   149,  1118,   807,  1664,    66,
     150,   151,   707,   345,   111,   356,  1668,   692,   149,  1503,
    1324,   620,   103,   150,   151,   311,   817,   818,   778,   385,
    1704,   369,   114,   822,   823,   824,   386,   825,   630,   119,
     115,   116,   269,  1920,   811,  1864,   390,   391,   312,   812,
    1709,   832,  2707,  1714,  1541,   833,   974,   975,  1884,  1443,
     838,   839,   840,   841,   842,   843,   119,   844,  1238,   428,
     848,   849,  1880,   114,   402,   574,  1886,  1889,   478,   428,
     851,   115,   116,   256,   479,  1553,  1997,  1058,   149,  1476,
    1941,  1501,   556,   150,   151,  1909,   483,  2708,   114,  1473,
    1946,    55,  1494,  1705,  1444,   575,   115,   116,   306,   569,
     893,  1254,  1865,   557,   631,   149,  1383,   912,   913,  1109,
     150,   151,  1726,   480,   693,  1384,  1385,   119,   558,  1059,
     266,   976,   570,   880,   881,   413,  1672,   621,   270,  1868,
    2595,   977,   978,    56,  1305,   754,   979,   331,  1706,   481,
     395,   889,   865,   271,  1144,  1058,    64,    65,  1329,  1120,
    1727,    57,   846,   109,   742,   735,  2619,  1841,   119,   632,
    1844,   946,   980,  1386,   914,   354,   149,   274,   324,   911,
     915,   150,   151,    83,   359,  1170,   366,  1149,   396,   109,
     866,    58,  1110,   119,   633,   482,   275,  1059,   276,   341,
      77,  1176,  1715,  1866,  1478,   755,   367,  1559,  1306,    59,
     109,  1479,   942,    60,   984,   368,   272,   149,  1728,  1560,
    1416,  1058,   150,   151,   744,   736,    61,  1145,   325,   916,
    1869,   559,  1051,  1003,  1307,  1722,    78,   326,   421,   483,
     484,  1330,   149,  1438,   917,  1171,  1793,   150,   151,   958,
    1181,   894,    64,    65,  1732,  1794,  1795,  1867,  1052,   918,
    1150,  1177,  1060,  1059,   422,   919,   327,  2671,  2672,  1725,
     920,  2675,   372,  2677,   405,  1002,  1111,  1729,  1061,  1062,
    1735,  1583,  2507,  1084,  1870,  2682,  2683,  1081,   931,   560,
    2687,  2688,  1080,  1723,  2691,  1093,  1589,  1804,  1595,  2692,
    2693,   415,  1466,  1796,  1387,  1388,  1805,  1806,    84,    79,
    1182,  1146,   417,  1603,  1308,  1607,   277,   827,   828,    64,
      65,   342,  1130,   597,   921,   117,  1131,  1132,  1133,  1134,
    1060,    85,  1135,   561,  1137,    86,  1138,   428,  1140,  1417,
     419,  1584,   562,   922,  1151,  1716,  1061,  1062,   923,  2730,
     924,   117,  2731,   737,  1807,  1310,  1590,  2734,  1596,  1565,
    1724,   756,  1439,  2737,  1455,  1695,  1309,   598,  2740,  1201,
    1063,  1064,   117,  1604,   278,  1608,   925,   926,   441,  1389,
     750,   738,  1404,  1147,   927,   454,    62,    87,  1701,  1390,
    1391,  1053,  1456,    80,  1392,  1457,  1060,  1733,  1458,   959,
     960,  1172,   928,  1717,   343,  1192,  1193,   861,  1194,  1196,
    1198,  1199,  1061,  1062,   760,  2673,  1152,  1178,   279,   465,
    1393,  1467,  2042,  1211,  1212,  1459,   328,   280,    88,   714,
    1216,  1217,   301,  2684,  1797,  1798,    89,    90,  1063,  1064,
    2782,   379,   682,  2785,  1054,  1710,    81,   961,   488,  1719,
    1223,  1224,  1225,  1405,  1460,  1734,  1720,  1461,   929,    64,
      65,    93,   240,  2796,   466,   715,  1183,  1233,  1234,  1235,
    1055,  1237,   428,  1239,   599,  1240,  1665,  2803,    94,   476,
    2804,  2805,   550,   601,  1696,  1808,  1809,   517,  1311,   761,
    2199,   241,  2289,  2290,  2291,   490,  1243,  1585,  1245,    64,
      65,   835,   836,   862,  1063,  1064,  2207,  1702,  1247,  1799,
     543,   159,  1591,   544,  1597,   428,  1255,   716,   239,  1800,
    1801,  1257,   683,   264,  1802,  1406,  1407,  1985,   554,  1605,
     299,  1609,   302,   564,   109,  2226,   545,  1272,  1274,  1815,
    1408,  1312,  2098,   551,   565,  1315,  1317,  1320,  1816,  1817,
    1803,   362,   602,  1325,   567,    95,  1639,  2761,  1331,   586,
    1810,   242,  2111,  2764,  1711,  1374,   592,  1313,   394,  1332,
    1811,  1812,  1462,  1759,  1760,  1813,   243,  2148,   962,   963,
    2151,   595,   863,  1409,   593,  1340,   762,  1511,  2159,   577,
    1244,  2162,  1512,   635,   614,   603,  1818,   865,    96,  2170,
     578,  1814,  2173,    64,    65,  1463,    64,    65,   619,  2180,
     303,   636,   684,   618,  1513,  1514,   623,  1515,  1516,   304,
    2801,  1761,  2802,   318,   717,   627,    69,   579,  1517,   639,
     685,  1464,    70,   604,    97,   866,   644,  2597,   244,  2292,
    1518,  1519,   645,   435,   283,   712,    64,    65,  1520,  1675,
    1676,  1521,  1477,   964,  1779,  1780,  1447,   455,   456,   457,
     458,   459,   460,   965,   966,   461,   462,   463,   464,  1522,
     650,    71,   687,  1502,  1826,  1827,  1523,  1524,   698,   245,
    1525,   249,  1508,   719,  1448,    64,    65,  1449,   637,   246,
      64,    65,   720,   526,   967,   722,   117,    72,  1536,  1215,
    1537,   107,  1781,  2501,   580,  1538,  1539,  1540,   527,   726,
   -1245,   319,    64,    65,  1623,  1546,   436,  1450,  1547,   728,
    1549,   288,  1828,   320,  1677,   796,  1319,  1819,  1820,   734,
     528,  2115,  2116,   740,  2280,   758,  1551,   759,  1552,   109,
    1526,   581,   782,    73,  1556,  1557,  1451,    64,    65,  1452,
     529,   783,  1762,  1763,   786,  1576,  1577,   646,   647,  1563,
    1564,    64,  1195,   428,  1566,  1567,   794,   530,   801,   250,
     531,  1569,   802,  1570,  1202,  1203,  1572,   815,  1573,  2117,
     816,   251,   819,  1626,   700,   110,   284,   704,    74,    64,
      65,  1857,   285,   820,   286,  1527,   821,   532,   533,   826,
     437,  1528,  1821,  2312,    64,    65,  1863,   321,  1411,  1412,
     582,   332,  1822,  1823,   829,  1620,   252,  1824,  1529,  1621,
     322,  1622,   333,  1205,  1206,  1625,  2329,  1764,  1530,  1686,
     765,   768,   771,  1782,  1783,    64,  1271,  1765,  1766,   831,
    1631,   112,  1634,  1825,  1636,  1637,  1638,  1640,   425,   334,
     534,  1643,  1644,  1829,  1830,  1531,  1532,   701,   427,  1652,
     535,   852,   583,   860,  1453,   253,  1658,   853,  1767,  2459,
    1659,  1660,  1661,    64,    65,  1861,  1533,   869,   254,   289,
     428,  1666,  1544,  1545,  1669,  2472,  1578,  1579,    64,    65,
    2477,   871,  1411,  1412,  1681,   878,  1682,  1454,  2362,  1684,
    1687,   117,    64,    65,  1906,   876,   118,  2371,  1784,   891,
    2118,  2119,  1901,  1902,  1580,   896,  2380,   290,  1785,  1786,
     901,  1534,   536,   537,    64,    65,   335,  2589,  1831,   907,
    2592,   909,  2594,   908,  1633,   910,   932,   943,  1832,  1833,
    2124,  2125,  1737,   933,  1738,  2606,  2607,  1739,  1740,  1787,
    1741,   934,  1742,   936,   940,   445,   938,   944,  1744,   948,
    1745,   729,  2621,   336,   953,   955,    83,  1751,   956,  1834,
      64,    65,  1688,  1689,   957,   969,   425,   426,   427,   291,
     968,  1673,   981,   989,   991,  2120,   992,  1690,  2126,  2133,
    2134,   999,  1000,   538,  1001,  2121,  2122,  1693,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,  2123,  1057,   446,  1075,
    1691,  1066,   337,  1076,   730,  1127,  1128,  2135,   160,  2491,
    1129,   161,  1858,  1141,  1860,  1862,  2495,  1143,  1154,   447,
     448,    64,    65,  1879,  1155,  1411,  1412,  1156,   449,    64,
      65,  1908,  1157,  1411,  1412,  1158,  1873,  1159,   338,  1160,
    1876,   162,  1161,  1162,  1163,  1180,   450,  1185,  1186,   163,
    1187,  1188,  1213,  1189,   339,  2593,   451,  1190,  1191,  1204,
    1207,    84,  1214,  1218,  1905,  1907,  1221,  1222,  2605,  2516,
    1226,  1228,  2518,  2610,  1913,  2519,  1229,  2520,  1924,  1241,
    1242,  1262,  1263,   954,    85,  1930,  1264,  1266,  2038,  2127,
    2128,  1267,  1268,  1321,  1269,  1270,  1323,  1327,  1333,  1935,
     742,  1337,  1415,  1338,  1937,  1856,  1341,  1342,  1939,   164,
    1942,  1943,  1343,  1945,  1947,  1948,  1351,  1951,  2231,  1352,
    1954,  1955,  1956,  1957,  1958,  1959,  1960,  1961,  1964,  1966,
    1967,  1353,  1354,  1969,  1970,  1971,  1972,  1096,  2136,  2137,
      87,  1356,  1121,  1978,  1979,  1358,  1357,  1981,  1982,  1983,
    1359,  1360,  1366,  1986,  1987,  1367,  1394,   743,  1395,   165,
     744,  1369,  1370,  1376,  2129,  1378,  1990,  1991,  1379,  1992,
    1993,  1381,  1396,  2283,  2130,  2131,  1400,   166,   167,  1397,
    1401,    88,  1402,  1420,   168,  1418,   169,  1419,  1440,    89,
      90,  1445,  1446,  1468,   293,  1465,  1470,   745,  1471,  1469,
    1489,  1484,  1488,  1490,  1495,  2132,  1496,   467,  1497,  1498,
    1421,  1504,  1506,  2138,   170,  2298,  1507,  2013,  2014,  2015,
    1543,  1554,  2016,  2139,  2140,   468,  2628,  2018,  2021,  1555,
    2023,  2024,  2025,   746,  2026,  2027,  1561,  2029,  1040,  1562,
    2032,  2033,   469,  1568,  1422,  1571,  1574,  1575,  1599,  2036,
    1423,  1588,  1041,  1593,  2141,   470,  1424,  2040,  1594,  1600,
    1601,  1042,  2045,  2046,  1602,  1670,  1611,  1612,  1613,  1616,
    2048,  1630,  1043,   471,  1425,   442,  1614,   472,  1615,  2051,
     171,  1628,  1629,  1648,   747,  1641,  1635,  1642,   748,  1653,
     473,  1654,  1655,  1667,  1227,  1426,  1671,  1674,  1683,  -447,
    1685,  1694,  1044,  1697,  1718,  1707,  1712,  1721,  1730,  1743,
    1427,  1736,  1731,   749,  1749,  2079,   750,  1750,  1755,  1774,
    1777,  2020,  1347,  1045,  1788,  2760,   751,  1790,  1792,  1836,
     474,  1837,  1838,  1842,  1835,  1843,  1846,  2087,  2088,  1845,
    1847,  1428,  2090,  1850,   504,  1853,   511,   514,  2093,   519,
     523,  1871,  1875,  1881,  1398,  1882,  1887,  1890,  1891,  1097,
    1892,  1893,  1894,  1896,  2247,  1897,  1898,  1098,  1903,  1046,
    1922,  2031,  1927,  1099,  1938,  2248,  1975,  1940,   590,  1976,
    1429,  1899,  1900,  1977,  2142,  1988,  1989,  1944,  1994,  2064,
    1995,  1996,  2000,  1952,  1100,  1430,  1953,   606,   612,  2070,
    1998,  1097,  2249,  1999,  2075,  2001,  1968,  1431,  1047,  1098,
    2002,  2153,  2003,  2004,  2005,  1099,  2006,  2009,  1101,  2007,
    2008,  2444,  2445,  2010,  2447,  2448,  1102,  2011,  2451,  2452,
    2012,  2301,  2028,  2030,  1432,  1048,  1100,  2034,  2047,  2250,
    2052,   696,  2053,  2054,  2055,  2056,  1433,  2057,  1434,  1435,
    2089,  2463,  2091,   706,  2092,  2194,  2095,  2195,  2096,  2197,
    1101,  2097,  2099,  2100,  1103,  2101,  2104,  2112,  1102,  2106,
    2107,  2108,  1104,   727,  1049,  2113,  1050,  2114,  2208,  2209,
    2210,  2211,  2212,  2213,  2214,  2215,  2216,  2143,  1436,  2499,
    2144,  2145,  2149,  2150,  2164,  2152,  2154,  2155,  2156,  2160,
    2161,  2171,  2222,  2163,  2224,  2165,  1103,  2166,  2167,  2172,
    2634,  2174,  2175,  2176,  1104,  2177,  2181,  2182,  1105,  1505,
    2183,  2230,   428,  2185,  2186,  2188,  2189,  2234,  2191,  2198,
    1106,  2200,  2203,  2206,  2217,  2218,  2237,  2238,  2239,  2240,
    2241,  2242,  2243,  2244,  2245,  2246,  1107,  2219,  2259,  2260,
    2261,  2262,  2263,  2264,  2265,  2266,  2267,  2268,  2269,  2270,
    1105,  2273,  2220,  2274,  2275,  2276,  2697,  2221,  2464,  2225,
    2272,  2277,  1106,  2278,  2285,  1550,  2281,   428,  2284,  2282,
    2288,  2486,  2302,   830,  2303,  2304,  2307,  1558,  1107,  2315,
    2318,  2319,  2320,  2321,   837,  2322,  2348,  2251,  2350,  2252,
    2352,  2355,  2363,   845,  2357,  2358,  2359,  2364,  2465,  2365,
    2366,  2293,  2367,  2294,  2368,  2295,  2372,  2297,  2373,   428,
    2299,  2374,  2300,  2375,  2376,  2377,  2381,  2382,  2390,  2305,
    2306,  2383,  2393,  2401,  2404,  2407,  2310,  2579,  2311,  2408,
    2697,  2582,  2314,  2410,  2413,  2316,  2414,  2415,  2418,  2423,
    2427,  2443,  2497,  2253,  2466,  2467,  2503,  2468,  2469,  2471,
    2504,  2506, -1108,  2509,  2510,  2704,  2511,  2512,  2745,  2513,
    2515,   882,   883,  2521,  2522,  2531,  2540,  2616,  2549,  2555,
    2559,  2562,  2568,  2576,   887,  2587,  2251,  2598,  2599,   890,
    2351,  2600,  2601,  2602,  2603,  1649,  1650,  2618,   902,  2629,
    1752,  1753,  1754,  2630,  2632,  2633,  2775,  2640,  2670,  2676,
    1756,  1757,  1758,  2679,  2680,  2681,  2686,  1769,  1770,  1771,
    2701,  2705,  1772,  1773,  2702,  1775,  1776,  2703,  2711,  2713,
    2724,  2732,   834,  2735,  2738,   814,  2747,  2748,  2749,  2756,
    2759,  2784,  2317,  2769,  2416,  2770,  2776,  2788,  2789,  2791,
    2795,  2797,  2710,  2798,  2799,  1848,  1849,  2800,  2645,  1851,
    1852,  2470,  2694,  2746,  2742,  1164,     0,     0,     0,     0,
     949,   950,   951,   952,     0,     0,     0,     0,     0,     0,
       0,  2349,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2421,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2428,  2429,  2430,  2431,  2432,
    2433,  2434,  2435,  2436,  2437,  2438,     0,     0,     0,     0,
       0,  2441,     0,     0,     0,   428,   428,     0,   428,   428,
       0,  1095,   428,   428,  2453,  2454,  2455,  2456,  2457,  2458,
       0,  2460,  2461,  2462,  2751,  2753,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2473,  2474,  2475,
    2476,     0,  2478,  2479,  2480,  2481,  2482,  2483,     0,  2485,
       0,     0,  2489,  2490,     0,     0,   710,  1854,     0,     0,
       0,     0,     0,  1859,     0,     0,     0,     0,     0,     0,
    2498,     0,     0,   428,  2500,     0,     0,     0,  2502,     0,
       0,     0,  2505,     0,     0,  1872,     0,     0,  1874,     0,
       0,     0,  1878,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   219,     0,     0,     0,     0,     0,
       0,     0,     0,  1904,     0,   795,     0,     0,     0,  1910,
       0,     0,     0,     0,     0,     0,   220,  1923,  2523,   221,
    1926,     0,     0,     0,     0,     0,     0,     0,     0,  1931,
    1932,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1936,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   222,     0,     0,     0,     0,     0,     0,
     223,     0,     0,  1231,     0,     0,     0,     0,     0,     0,
       0,   224,   225,     0,     0,  1236,     0,     0,   226,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2570,     0,     0,     0,  2572,     0,     0,     0,     0,     0,
       0,   227,     0,     0,  2573,  2574,     0,     0,     0,     0,
    2578,   428,  1246,     0,  2581,   428,     0,     0,     0,   228,
    2586,     0,     0,  2590,  2591,     0,     0,     0,     0,     0,
       0,     0,     0,   229,   230,     0,     0,     0,     0,     0,
     231,     0,  2608,  2609,     0,  2611,  2612,  2613,  2614,  2615,
       0,   428,  2617,     0,     0,     0,  2620,   879,     0,     0,
       0,   232,     0,     0,   884,     0,     0,   885,     0,  2631,
       0,     0,   886,     0,  2635,     0,   888,     0,     0,     0,
       0,     0,     0,     0,  2094,  1336,     0,     0,     0,     0,
    2646,     0,     0,     0,     0,     0,     0,  2102,     0,   233,
       0,     0,     0,     0,     0,     0,     0,  2105,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2658,     0,     0,     0,     0,  2662,     0,  2664,
       0,     0,     0,   947,     0,  2667,     0,     0,     0,     0,
       0,     0,   234,     0,     0,     0,     0,     0,  2674,     0,
    1482,     0,   235,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2685,     0,     0,  2190,
    2689,  2719,     0,     0,    64,    65,     0,     0,     0,     0,
       0,   236,     0,     0,     0,     0,     0,     0,     0,     0,
     107,     0,  2709,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1542,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1548,     0,     0,     0,     0,  2722,
       0,     0,     0,     0,  2727,     0,  2729,     0,   109,     0,
       0,     0,     0,  2733,     0,     0,     0,     0,  2736,     0,
       0,     0,     0,  2739,     0,     0,     0,     0,     0,  1136,
       0,     0,     0,     0,     0,     0,  1142,  1200,     0,  2313,
       0,     0,     0,     0,     0,     0,  2750,  2752,     0,     0,
       0,     0,     0,     0,   110,  2324,  2325,  2326,     0,     0,
    2328,     0,  2330,  2331,     0,     0,  2333,  2334,  2335,     0,
    2762,  2337,  2338,  2763,     0,  2341,  2765,  2343,  2344,     0,
    2346,  2202,     0,     0,     0,     0,     0,  2771,  2772,  2773,
    2774,     0,     0,     0,     0,     0,     0,     0,  1624,  2783,
       0,     0,  2786,     0,     0,     0,     0,     0,     0,  2790,
     112,  2792,     0,     0,     0,  1632,     0,  2227,     0,     0,
       0,     0,     0,     0,  1364,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1657,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1663,
       0,     0,     0,  1230,     0,  2758,     0,     0,     0,     0,
    1232,     0,     0,     0,     0,     0,     0,     0,  1680,     0,
     117,     0,     0,     0,     0,   118,     0,     0,  1692,     0,
       0,     0,     0,  1700,     0,     0,     0,  2778,  2417,     0,
    2781,  2420,     0,     0,     0,     0,  2424,     0,     0,  2425,
       0,     0,  2353,     0,     0,  1248,  1249,     0,     0,     0,
    1253,     0,     0,  1256,     0,     0,     0,     0,  2440,     0,
       0,     0,     0,     0,     0,  1265,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2385,  2386,  2387,  2388,  2389,     0,  2391,  2392,
       0,     0,     0,  2396,  2397,  2398,  2399,  2400,     0,  2402,
    2403,     0,     0,     0,     0,     0,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2508,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1855,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1403,     0,     0,     0,
       0,     0,     0,     0,     0,  2517,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1877,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,  1911,     0,     0,  1912,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1928,  1929,
       0,     0,     0,     0,     0,     0,  1933,     0,     0,     0,
       0,     0,     0,  1934,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2567,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2575,     0,     0,     0,     0,     0,
       0,  2580,     0,  1973,  2583,  2584,     0,     0,     0,     0,
       0,     0,     0,  2524,     0,  1984,  2526,  2527,  2528,  2529,
    2530,     0,  2532,  2533,     0,  2535,  2536,  2537,  2538,  2539,
       0,  2541,  2542,     0,  2544,  2545,  2546,  2547,  2548,     0,
    2550,  2551,     0,  2553,     0,     0,     0,  2492,     0,     0,
       0,     0,     0,  2556,  2557,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2560,     0,  1768,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1778,     0,
       0,     0,     0,     0,  1627,     0,     0,     0,     0,     0,
       0,     0,  2019,     0,     0,     0,  1839,  1840,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2035,     0,     0,     0,  1651,     0,     0,     0,     0,  1656,
       0,  2659,     0,     0,     0,     0,  2044,     0,     0,  1662,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2669,  2049,     0,  2050,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2058,     0,     0,  2060,     0,  2061,  2062,
    2063,  2065,     0,     0,  2067,     0,     0,  2068,     0,     0,
    2069,  2071,     0,  2072,  2073,  2074,  2076,     0,  2077,  2078,
       0,     0,     0,     0,  2080,  2081,  2082,     0,     0,  2083,
    2084,     0,     0,  2648,     0,  2085,  2086,     0,     0,     0,
       0,     0,  2650,     0,     0,     0,     0,     0,     0,     0,
       0,  2652,     0,  2653,     0,  2720,  2721,  2655,  2723,     0,
    2725,  2726,     0,  2728,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2604,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2622,     0,
       0,     0,  2627,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2755,   106,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2714,     0,  2715,     0,
    2716,   108,     0,  2717,     0,  2718,    64,    65,     0,  2193,
       0,  2787,     0,  2196,     0,     0,     0,     0,   109,     0,
       0,     0,   107,     0,     0,  2201,     0,     0,  2204,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1925,     0,     0,  2223,     0,
       0,     0,     0,     0,   110,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   111,     0,     0,  2700,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   110,     0,     0,     0,
       0,     0,     0,     0,  2271,  1974,     0,     0,     0,     0,
     112,  1980,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2287,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,     0,
       0,     0,   112,     0,     0,     0,   114,     0,     0,     0,
       0,     0,     0,  2103,   115,   116,     0,     0,     0,     0,
     117,  2109,  2110,     0,     0,   118,     0,     0,  2309,     0,
       0,     0,     0,     0,     0,     0,  2146,  2147,     0,  2017,
       0,     0,  2768,     0,     0,  2022,     0,  2157,  2158,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2168,  2169,
       0,     0,     0,     0,     0,     0,     0,   118,  2178,  2179,
    2037,  2340,     0,     0,  2184,     0,  2043,     0,     0,     0,
       0,     0,     0,     0,  2187,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,     0,     0,     0,  2059,     0,     0,     0,     0,
       0,     0,     0,  2066,     0,     0,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,     0,     0,     0,     0,
     149,     0,     0,     0,     0,   150,   151,     0,     0,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,  2419,     0,     0,
    2422,     0,     0,     0,     0,     0,     0,     0,  2426,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2439,     0,     0,  2442,     0,     0,
       0,     0,  2446,     0,     0,  2449,  2450,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   651,   652,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2192,     0,
       0,     0,     0,  2493,  2494,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2205,     0,     0,     0,     0,     0,     0,     0,     0,   653,
       0,     0,     0,     0,     0,   654,     0,     0,     0,     0,
       0,     0,   655,  2514,   656,     0,     0,     0,     0,   657,
       0,     0,   658,     0,  2228,  2229,     0,     0,   659,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   660,
       0,  2232,  2233,  2354,     0,   661,  2235,  2236,     0,     0,
       0,     0,     0,  2356,   662,   348,     0,  2360,  2361,     0,
       0,     0,   349,     0,     0,     0,  2369,  2370,     0,   663,
       0,     0,     0,     0,     0,  2378,  2379,     0,     0,     0,
       0,  2384,     0,     0,     0,     0,  2279,     0,     0,     0,
     664,  2394,  2395,     0,     0,     0,     0,  2286,     0,     0,
       0,     0,  2405,  2406,     0,   665,     0,     0,     0,     0,
    2566,     0,     0,  2409,     0,   666,   667,     0,     0,     0,
       0,     0,  2411,     0,  2412,     0,     0,     0,     0,     0,
       0,     0,  2296,     0,     0,     0,   668,     0,     0,     0,
       0,     0,     0,  2585,     0,     0,     0,     0,  2308,     0,
       0,     0,     0,     0,  2596,     0,     0,     0,     0,   669,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2323,     0,   670,     0,   671,  2327,     0,     0,     0,
       0,     0,  2332,     0,     0,     0,     0,  2336,     0,     0,
     672,  2339,     0,     0,  2342,   673,     0,  2345,     0,  2347,
       0,     0,   674,  2639,     0,     0,     0,  2644,     0,   675,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   676,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     677,   678,     0,   679,   522,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   107,
    2660,  2661,     0,  2663,     0,     0,     0,     0,  2665,  2666,
       0,     0,     0,  2668,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   680,   350,     0,     0,   351,     0,     0,
       0,     0,     0,     0,  2525,     0,     0,   109,     0,  1679,
       0,     0,     0,     0,  2534,     0,  2690,     0,     0,     0,
       0,     0,     0,  2543,   107,     0,     0,     0,     0,     0,
       0,     0,  2552,     0,     0,     0,     0,     0,     0,  2554,
       0,     0,  2712,     0,     0,     0,     0,     0,     0,     0,
    2558,     0,     0,   110,   107,     0,  2561,     0,     0,  2563,
       0,     0,  2564,     0,     0,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,  2484,     0,     0,     0,     0,     0,
       0,   495,   496,     0,     0,   497,     0,     0,   110,   112,
    2496,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2757,     0,   498,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   110,     0,
       0,     0,     0,  2766,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2777,     0,
       0,  2780,     0,     0,   112,     0,     0,     0,     0,   117,
       0,     0,     0,     0,   118,     0,     0,     0,     0,     0,
    2647,     0,     0,     0,     0,     0,     0,     0,     0,  2649,
       0,     0,     0,     0,   112,     0,     0,     0,  2651,     0,
       0,     0,     0,     0,  2654,     0,   499,     0,  2656,     0,
       0,  2657,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   500,     0,     0,     0,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2565,
       0,     0,     0,     0,     0,  2569,   501,     0,     0,  2571,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
       0,     0,     0,     0,     0,  2577,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   607,   107,
       0,     0,   502,     0,     0,     0,  2625,  2626,     0,     0,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   608,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
     503,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   609,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2678,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1275,  1276,  1277,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1278,  1279,     0,     0,  1280,   610,     0,     0,     0,
       0,     0,  1281,     0,     0,  1282,     0,     0,     0,  1283,
       0,     0,     0,     0,     0,     0,     0,  1284,  1285,     0,
       0,     0,     0,     0,     0,  1286,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2741,   118,     0,     0,   107,     0,     0,
       0,     0,     0,  1287,  1288,     0,     0,  1289,     0,     0,
       0,     0,     0,     0,     0,  2754,     0,     0,     0,     0,
       0,     0,     0,  1290,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   109,     0,     0,     0,     0,
       0,     0,     0,     0,  1291,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2779,     0,     0,   611,     0,     0,     0,  1292,     0,     0,
       0,     0,     0,     0,     0,     0,  1293,     0,     0,     0,
    2793,   110,     0,  2794,     0,     0,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,  1004,  1005,  1006,     0,     0,     0,
    1294,     0,  1295,     0,     0,     0,     0,     0,  1296,  1297,
       0,     0,     0,     0,     0,     0,     0,   112,     0,     0,
       0,     0,     0,  1007,  1008,  1298,     0,  1009,   107,     0,
    1010,     0,     0,     0,     0,     0,  1299,  1011,     0,     0,
       0,  1012,     0,     0,     0,     0,     0,     0,     0,  1013,
    1014,     0,     0,     0,     0,     0,     0,  1015,  1016,     0,
       0,  1300,     0,  1301,     0,     0,   109,     0,     0,     0,
       0,     0,     0,  1302,     0,  1017,     0,   117,     0,   107,
       0,  1018,   118,  1303,     0,  1019,  1020,     0,     0,  1021,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1022,     0,     0,     0,     0,
       0,     0,   110,     0,     0,     0,     0,  1304,     0,   107,
     509,     0,     0,     0,     0,     0,  1023,     0,     0,     0,
       0,     0,     0,     0,   982,     0,     0,     0,     0,   983,
       0,     0,     0,   513,     0,     0,     0,     0,     0,  1024,
     107,     0,     0,     0,     0,     0,     0,  1335,     0,     0,
       0,     0,     0,   110,     0,     0,     0,     0,   112,     0,
       0,     0,  1025,     0,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,  1026,   110,  1027,     0,     0,     0,     0,     0,
    1028,  1029,     0,     0,     0,     0,     0,     0,     0,   112,
       0,     0,     0,     0,     0,     0,  1030,  1031,   117,     0,
       0,     0,     0,   118,   110,     0,     0,  1032,  1033,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   112,
       0,     0,     0,  1034,     0,  1035,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1036,     0,  1037,
       0,     0,     0,     0,   118,  1038,     0,     0,     0,     0,
     112,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,  1039,
       0,     0,     0,     0,   118,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   510,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     0,     0,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     1,     0,     0,     2,     0,
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
      51,   196,     0,   197,  1372,     0,     0,    52,     0,     0,
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
       0,     0,     0,   212,     0,   213,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,  1373,     0,     0,     0,     0,     0,
       0,     0,   214
};

static const yytype_int16 yycheck[] =
{
       3,  1005,  1458,    50,  1659,     5,  1661,     4,    11,   666,
     667,     4,     4,   671,   884,   885,   886,     0,    14,     4,
       5,   486,     3,     4,     5,  1157,     5,  1159,     5,    32,
       4,     5,    20,     4,    16,   442,     5,    40,     3,     4,
      47,     4,     4,     4,     5,   452,    49,     5,     5,    52,
     132,    99,    55,  1185,  1186,  1187,    59,     3,     4,    62,
     123,   167,    32,    66,    67,    17,    62,    70,     3,     4,
      73,    74,    17,    37,    77,    67,    32,   947,    81,     3,
       4,   136,    67,    86,    27,     3,     4,     3,     4,     3,
       4,     3,     4,    32,    62,    17,    99,   100,   101,   102,
     103,   104,     3,     4,    89,   196,    49,     3,     4,    52,
      21,    17,    36,     4,     4,   152,    40,   120,     3,     4,
      63,    88,   101,    32,   976,     6,   216,   979,   107,   121,
     105,     3,     4,    40,  2696,    67,   121,     4,    13,    40,
       4,   134,   171,    86,   996,    12,   228,   121,     4,   159,
     289,   180,   155,    33,   122,    84,     4,   142,   196,    60,
     121,   104,    57,   254,   270,     3,     4,     3,     4,   143,
      62,   168,   101,     3,     4,   178,    67,   187,     3,     4,
     183,  2743,     3,     4,    16,   248,     3,     4,    60,   113,
      30,   159,   159,     3,     4,    12,   251,   193,    36,    21,
      36,     4,    21,    67,   113,   287,   113,    21,    89,   147,
      88,   135,   113,   205,    27,   190,   161,   199,   266,   309,
     205,   213,   214,   261,    21,    21,    21,   264,   213,   214,
     121,   205,   197,   196,   198,     3,     4,    89,     5,   213,
     214,   122,     4,   246,   205,     3,     4,    14,    15,    67,
     238,   298,   213,   214,    62,   190,    96,   121,    27,   262,
     263,     3,     4,   215,    67,   211,   924,     4,    27,    79,
     277,    27,   268,   197,   183,   278,   185,   280,   187,   188,
       5,   159,   278,   252,   200,   288,   289,   196,   291,   292,
     197,   294,   250,   215,     5,    62,   197,   135,   275,   135,
     125,   304,   211,   710,   297,   190,   289,   264,   300,   309,
     278,   314,   315,   309,   205,   300,   286,   192,   121,   316,
     291,   306,   213,   214,   219,   165,   300,   306,   309,   291,
     286,   242,   297,   290,   337,   338,   339,    58,   341,   300,
     137,   205,   345,   346,   200,   306,   298,   286,   196,   213,
     214,   207,   208,   356,   357,   316,   169,   349,   264,   121,
     250,   364,   354,   355,   349,   175,   369,   370,   353,   354,
     355,  1029,   307,   297,   377,   349,   298,   380,  1248,   297,
     354,   355,   291,   297,   121,   297,  1256,   243,   349,  1047,
     211,     6,   293,   354,   355,   287,   399,   400,   228,   247,
     169,   297,   205,   406,   407,   408,   254,   410,   119,   300,
     213,   214,   133,   356,   254,  1419,   351,   352,   310,   259,
     242,   424,   307,   242,  1081,   428,   193,   194,   242,   242,
     433,   434,   435,   436,   437,   438,   300,   440,   845,   442,
     443,   444,  1446,   205,   254,   242,   242,   242,   190,   452,
     453,   213,   214,   234,   196,  1112,  1588,    64,   349,   297,
     228,   297,    46,   354,   355,  1469,   351,   352,   205,   228,
     228,    12,   228,   242,   287,   272,   213,   214,     4,   287,
       4,   888,   107,    67,   195,   349,     5,     4,     5,    40,
     354,   355,   132,   235,   350,    14,    15,   300,    82,   106,
       5,   268,   310,   506,   507,   230,     4,   122,   229,   107,
    2461,   278,   279,    54,    67,    62,   283,     4,   287,   261,
     141,   524,   141,   244,    40,    64,     3,     4,    17,   291,
     170,    72,   441,    57,    62,    62,  2487,  1389,   300,   250,
    1392,   588,   309,    62,    61,   234,   349,    46,    51,   552,
      67,   354,   355,    28,     0,    62,   274,    40,   179,    57,
     179,   102,   113,   300,   275,   307,    65,   106,    67,     4,
       4,    62,    27,   198,   267,   122,     5,     5,   131,   120,
      57,   274,   585,   124,   631,     4,   307,   349,   228,    17,
     123,    64,   354,   355,   122,   122,   137,   113,   101,   116,
     198,   185,     4,   650,   157,   170,    40,   110,     5,   351,
     352,   100,   349,   123,   131,   122,     5,   354,   355,   622,
      62,   530,     3,     4,    27,    14,    15,   252,    30,   146,
     113,   122,   239,   106,    31,   152,   139,  2588,  2589,  1297,
     157,  2592,     5,  2594,     5,   648,   197,   287,   255,   256,
    1308,    62,  2307,   126,   252,  2606,  2607,   264,   567,   243,
    2611,  2612,   665,   228,  2615,   668,    62,     5,    62,  2620,
    2621,    31,   123,    62,   193,   194,    14,    15,   153,   113,
     122,   197,     5,    62,   237,    62,   185,     4,     5,     3,
       4,   126,   695,    44,   211,   219,   699,   700,   701,   702,
     239,   176,   705,   287,   707,   180,   709,   710,   711,   242,
       5,   122,   296,   230,   197,   170,   255,   256,   235,  2670,
     237,   219,  2673,   250,    62,    30,   122,  2678,   122,  1136,
     295,   278,   242,  2684,    22,   123,   289,    88,  2689,   786,
     347,   348,   219,   122,   243,   122,   263,   264,   197,   268,
     278,   278,    83,   269,   271,     4,   297,   232,   123,   278,
     279,   163,    50,   197,   283,    53,   239,   170,    56,    14,
      15,   278,   289,   228,   209,   778,   779,    79,   781,   782,
     783,   784,   255,   256,    34,  2590,   269,   278,   287,   119,
     309,   242,  1662,   796,   797,    83,   299,   296,   273,    55,
     803,   804,    71,  2608,   193,   194,   281,   282,   347,   348,
    2761,   125,    92,  2764,   216,   123,   250,    62,   289,   267,
     823,   824,   825,   154,   112,   228,   274,   115,   345,     3,
       4,    84,    89,  2784,    67,    91,   278,   840,   841,   842,
     242,   844,   845,   846,   195,   848,  1253,  2798,   101,   120,
    2801,  2802,     5,   152,   242,   193,   194,    33,   163,   109,
    1864,   118,  1994,  1995,  1996,   171,   869,   278,   871,     3,
       4,   430,   431,   175,   347,   348,  1880,   242,   881,   268,
      67,    14,   278,     5,   278,   888,   889,   143,    21,   278,
     279,   894,   172,    26,   283,   226,   227,  1554,    16,   278,
      33,   278,   171,    67,    57,  1909,    90,   910,   911,     5,
     241,   216,  1764,    66,   235,   918,   919,   920,    14,    15,
     309,    54,   221,   926,   288,   178,    60,  2732,   931,    90,
     268,   188,  1784,  2738,   242,   982,    67,   242,    71,   942,
     278,   279,   230,    14,    15,   283,   203,  1799,   193,   194,
    1802,    31,   254,   284,    73,   958,   206,    22,  1810,    37,
     869,  1813,    27,    95,     5,   264,    62,   141,   221,  1821,
      48,   309,  1824,     3,     4,   263,     3,     4,     4,  1831,
     249,   113,   262,     5,    49,    50,     4,    52,    53,   258,
    2795,    62,  2797,    26,   250,     5,   190,    75,    63,     5,
     280,   289,   196,   302,   257,   179,     4,  2463,   265,  2013,
      75,    76,     5,    40,   206,     4,     3,     4,    83,    24,
      25,    86,  1025,   268,    14,    15,    22,   160,   161,   162,
     163,   164,   165,   278,   279,   168,   169,   170,   171,   104,
       5,   235,     5,  1046,    14,    15,   111,   112,     5,   306,
     115,    26,  1055,     4,    50,     3,     4,    53,   190,   316,
       3,     4,     4,    45,   309,     4,   219,   261,  1071,    12,
    1073,    19,    62,    60,   152,  1078,  1079,  1080,    60,     5,
       0,   114,     3,     4,     4,  1088,   113,    83,  1091,     4,
    1093,    39,    62,   126,    99,   125,    17,   193,   194,    99,
      82,    14,    15,   122,  1974,     5,  1109,     4,  1111,    57,
     175,   189,   275,   307,  1117,  1118,   112,     3,     4,   115,
     102,     4,   193,   194,     4,    42,    43,   260,   261,  1132,
    1133,     3,     4,  1136,  1137,  1138,     4,   119,     4,   114,
     122,  1144,     5,  1146,     4,     5,  1149,     4,  1151,    62,
     200,   126,     4,  1200,    40,   103,   348,   290,   352,     3,
       4,     5,   354,     4,   356,   230,     4,   149,   150,     4,
     197,   236,   268,  2043,     3,     4,     5,   210,     7,     8,
     258,    37,   278,   279,     5,  1188,   161,   283,   253,  1192,
     223,  1194,    48,     4,     5,  1198,  2066,   268,   263,    83,
     333,   334,   335,   193,   194,     3,     4,   278,   279,     5,
    1213,   159,  1215,   309,  1217,  1218,  1219,  1220,     9,    75,
     202,  1224,  1225,   193,   194,   290,   291,   113,    11,  1232,
     212,     5,   310,   171,   230,   210,  1239,   274,   309,  2243,
    1243,  1244,  1245,     3,     4,     5,   311,     4,   223,   197,
    1253,  1254,     4,     5,  1257,  2259,   173,   174,     3,     4,
    2264,     4,     7,     8,  1267,   171,  1269,   263,  2120,  1272,
     154,   219,     3,     4,     5,   180,   224,  2129,   268,     4,
     193,   194,     4,     5,   201,   199,  2138,   235,   278,   279,
     199,   356,   274,   275,     3,     4,   152,  2455,   268,     5,
    2458,     4,  2460,     5,  1213,   199,   191,     5,   278,   279,
      14,    15,  1315,   191,  1317,  2473,  2474,  1320,  1321,   309,
    1323,    67,  1325,    67,   228,    35,    67,   229,  1331,     5,
    1333,    40,  2490,   189,     4,     4,    28,  1340,     4,   309,
       3,     4,   226,   227,   199,     5,     9,    10,    11,   297,
      88,  1260,    88,     5,     4,   268,     4,   241,    62,    14,
      15,     5,     5,   345,     4,   278,   279,  1276,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   309,     5,   108,     4,
     284,   101,   258,     5,   113,    17,    17,    62,    44,  2279,
       4,    47,  1415,     4,  1417,  1418,  2286,     4,     4,   129,
     130,     3,     4,     5,    99,     7,     8,     5,   138,     3,
       4,     5,     5,     7,     8,    88,  1439,     4,   294,     5,
    1443,    77,     5,    88,     5,     4,   156,     5,     5,    85,
       4,     4,    12,     5,   310,  2459,   166,     5,     5,     4,
       4,   153,     5,    12,  1467,  1468,     4,     4,  2472,  2339,
       4,     4,  2342,  2477,  1477,  2345,     4,  2347,  1481,     5,
       5,   168,     5,   616,   176,  1488,     4,   159,   180,   193,
     194,   159,     4,   263,     5,     4,   263,   291,     5,  1502,
      62,     4,   242,     5,  1507,  1414,     5,     5,  1511,   145,
    1513,  1514,     5,  1516,  1517,  1518,     4,  1520,  1925,     4,
    1523,  1524,  1525,  1526,  1527,  1528,  1529,  1530,  1531,  1532,
    1533,     5,     5,  1536,  1537,  1538,  1539,   670,   193,   194,
     232,   276,   675,  1546,  1547,     5,   276,  1550,  1551,  1552,
       5,     5,     4,  1556,  1557,     4,     4,   119,     4,   195,
     122,     5,     5,     5,   268,     5,  1569,  1570,     5,  1572,
    1573,     5,     5,  1980,   278,   279,     4,   213,   214,     5,
       5,   273,     5,    40,   220,   242,   222,   107,     5,   281,
     282,   141,   107,   242,    32,    40,     5,   159,   215,   107,
     215,    40,   248,     5,     4,   309,     5,    54,     5,   215,
      67,   215,     4,   268,   250,  2022,     4,  1620,  1621,  1622,
       5,     5,  1625,   278,   279,    72,  2496,  1630,  1631,     5,
    1633,  1634,  1635,   195,  1637,  1638,     5,  1640,    67,     5,
    1643,  1644,    89,     4,   101,   113,   113,     4,     4,  1652,
     107,     5,    81,     5,   309,   102,   113,  1660,     5,     5,
       5,    90,  1665,  1666,     4,    38,     5,     5,     4,     4,
    1673,    12,   101,   120,   131,   113,     5,   124,     5,  1682,
     316,     5,     5,     5,   246,     6,    12,     4,   250,     4,
     137,     4,     4,     4,   827,   152,    38,     5,     4,     0,
       5,   242,   131,   242,   170,   141,   242,   123,     4,   199,
     167,   211,   252,   275,     4,  1718,   278,     4,     4,     4,
       4,  1630,   963,   152,     5,  2729,   288,     5,     5,     5,
     177,     5,     5,     4,   276,     4,     4,  1740,  1741,     5,
       4,   198,  1745,     4,   182,     5,   184,   185,  1751,   187,
     188,     5,     5,   242,   995,   242,   242,   313,   313,    93,
       4,     4,     4,     4,    56,     4,     4,   101,     4,   198,
       4,     6,     5,   107,     5,    67,     5,   228,   216,     4,
     237,   313,   313,     4,   276,     5,     4,   228,     5,  1698,
       5,     4,     4,   228,   128,   252,   228,   235,   236,  1708,
       5,    93,    94,     5,  1713,     4,   228,   264,   237,   101,
       4,   276,     5,     5,     4,   107,     4,     4,   152,     5,
       5,  2228,  2229,     5,  2231,  2232,   160,     5,  2235,  2236,
       4,    12,     5,     4,   291,   264,   128,     4,     4,   131,
       4,   279,     5,     5,     5,     5,   303,     5,   305,   306,
       4,   357,     5,   291,     4,  1858,     5,  1860,     5,  1862,
     152,     5,     4,     4,   198,     5,     4,     4,   160,     5,
       5,     5,   206,   311,   303,     4,   305,     5,  1881,  1882,
    1883,  1884,  1885,  1886,  1887,  1888,  1889,     5,   345,  2296,
       5,     5,     4,     4,   276,     5,     5,     5,     5,     4,
       4,     4,  1905,     5,  1907,     5,   198,     5,     5,     4,
       6,     5,     5,     5,   206,     5,     4,     4,   252,  1052,
       5,  1924,  1925,     4,     4,     4,     4,  1930,     5,     5,
     264,     5,     5,     5,     4,     4,  1939,  1940,  1941,  1942,
    1943,  1944,  1945,  1946,  1947,  1948,   280,     5,  1951,  1952,
    1953,  1954,  1955,  1956,  1957,  1958,  1959,  1960,  1961,  1962,
     252,  1964,     4,  1966,  1967,  1968,  2624,     4,   357,     5,
       5,     4,   264,     4,     4,  1108,     5,  1980,  1981,     5,
       4,   309,     5,   421,     5,     4,     4,  1120,   280,     5,
       5,     5,     5,     5,   432,     5,     4,   289,     5,   291,
       4,     4,     4,   441,     5,     5,     5,     4,   357,     5,
       5,  2014,     5,  2016,     5,  2018,     4,  2020,     4,  2022,
    2023,     5,  2025,     5,     5,     5,     4,     4,     4,  2032,
    2033,     5,     4,     4,     4,     4,  2039,  2444,  2041,     4,
    2698,  2448,  2045,     4,     4,  2048,     4,     4,     4,     4,
       4,     4,     4,   345,   357,   357,     5,   357,   357,   357,
       5,     4,   289,     5,     4,     6,     5,     4,   357,     5,
       5,   509,   510,     5,     4,     4,     4,  2484,     4,     4,
       4,     4,     4,     4,   522,     4,   289,     5,     4,   527,
    2093,     5,     5,     5,     4,  1228,  1229,     5,   536,     4,
    1341,  1342,  1343,     5,     5,     4,  2754,     5,     4,     4,
    1351,  1352,  1353,     5,     4,     4,     4,  1358,  1359,  1360,
       4,     4,  1363,  1364,     5,  1366,  1367,     5,     4,     4,
       4,     4,   429,     5,     4,   384,     5,     5,     4,     4,
       4,     4,  2051,     5,  2191,     5,     5,     5,     5,     5,
       4,     4,  2635,     5,     5,  1396,  1397,     5,  2522,  1400,
    1401,  2254,  2622,  2698,  2694,   745,    -1,    -1,    -1,    -1,
     608,   609,   610,   611,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2090,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2197,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2208,  2209,  2210,  2211,  2212,
    2213,  2214,  2215,  2216,  2217,  2218,    -1,    -1,    -1,    -1,
      -1,  2224,    -1,    -1,    -1,  2228,  2229,    -1,  2231,  2232,
      -1,   669,  2235,  2236,  2237,  2238,  2239,  2240,  2241,  2242,
      -1,  2244,  2245,  2246,  2709,  2710,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2260,  2261,  2262,
    2263,    -1,  2265,  2266,  2267,  2268,  2269,  2270,    -1,  2272,
      -1,    -1,  2275,  2276,    -1,    -1,   293,  1410,    -1,    -1,
      -1,    -1,    -1,  1416,    -1,    -1,    -1,    -1,    -1,    -1,
    2293,    -1,    -1,  2296,  2297,    -1,    -1,    -1,  2301,    -1,
      -1,    -1,  2305,    -1,    -1,  1438,    -1,    -1,  1441,    -1,
      -1,    -1,  1445,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1466,    -1,   352,    -1,    -1,    -1,  1472,
      -1,    -1,    -1,    -1,    -1,    -1,    41,  1480,  2351,    44,
    1483,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1492,
    1493,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1503,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,   831,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    97,    -1,    -1,   843,    -1,    -1,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2423,    -1,    -1,    -1,  2427,    -1,    -1,    -1,    -1,    -1,
      -1,   126,    -1,    -1,  2437,  2438,    -1,    -1,    -1,    -1,
    2443,  2444,   880,    -1,  2447,  2448,    -1,    -1,    -1,   144,
    2453,    -1,    -1,  2456,  2457,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   158,   159,    -1,    -1,    -1,    -1,    -1,
     165,    -1,  2475,  2476,    -1,  2478,  2479,  2480,  2481,  2482,
      -1,  2484,  2485,    -1,    -1,    -1,  2489,   504,    -1,    -1,
      -1,   186,    -1,    -1,   511,    -1,    -1,   514,    -1,  2502,
      -1,    -1,   519,    -1,  2507,    -1,   523,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1755,   953,    -1,    -1,    -1,    -1,
    2523,    -1,    -1,    -1,    -1,    -1,    -1,  1768,    -1,   224,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1778,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2565,    -1,    -1,    -1,    -1,  2570,    -1,  2572,
      -1,    -1,    -1,   590,    -1,  2578,    -1,    -1,    -1,    -1,
      -1,    -1,   277,    -1,    -1,    -1,    -1,    -1,  2591,    -1,
    1028,    -1,   287,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2609,    -1,    -1,  1850,
    2613,  2658,    -1,    -1,     3,     4,    -1,    -1,    -1,    -1,
      -1,   316,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,  2635,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1082,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1092,    -1,    -1,    -1,    -1,  2662,
      -1,    -1,    -1,    -1,  2667,    -1,  2669,    -1,    57,    -1,
      -1,    -1,    -1,  2676,    -1,    -1,    -1,    -1,  2681,    -1,
      -1,    -1,    -1,  2686,    -1,    -1,    -1,    -1,    -1,   706,
      -1,    -1,    -1,    -1,    -1,    -1,   713,     6,    -1,  2044,
      -1,    -1,    -1,    -1,    -1,    -1,  2709,  2710,    -1,    -1,
      -1,    -1,    -1,    -1,   103,  2060,  2061,  2062,    -1,    -1,
    2065,    -1,  2067,  2068,    -1,    -1,  2071,  2072,  2073,    -1,
    2733,  2076,  2077,  2736,    -1,  2080,  2739,  2082,  2083,    -1,
    2085,  1874,    -1,    -1,    -1,    -1,    -1,  2750,  2751,  2752,
    2753,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1196,  2762,
      -1,    -1,  2765,    -1,    -1,    -1,    -1,    -1,    -1,  2772,
     159,  2774,    -1,    -1,    -1,  1213,    -1,  1910,    -1,    -1,
      -1,    -1,    -1,    -1,   975,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1237,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1247,
      -1,    -1,    -1,   830,    -1,  2724,    -1,    -1,    -1,    -1,
     837,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1266,    -1,
     219,    -1,    -1,    -1,    -1,   224,    -1,    -1,  1276,    -1,
      -1,    -1,    -1,  1281,    -1,    -1,    -1,  2756,  2193,    -1,
    2759,  2196,    -1,    -1,    -1,    -1,  2201,    -1,    -1,  2204,
      -1,    -1,  2103,    -1,    -1,   882,   883,    -1,    -1,    -1,
     887,    -1,    -1,   890,    -1,    -1,    -1,    -1,  2223,    -1,
      -1,    -1,    -1,    -1,    -1,   902,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2143,  2144,  2145,  2146,  2147,    -1,  2149,  2150,
      -1,    -1,    -1,  2154,  2155,  2156,  2157,  2158,    -1,  2160,
    2161,    -1,    -1,    -1,    -1,    -1,    -1,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2309,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1414,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1003,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2340,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1444,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,  1473,    -1,    -1,  1476,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1486,  1487,
      -1,    -1,    -1,    -1,    -1,    -1,  1494,    -1,    -1,    -1,
      -1,    -1,    -1,  1501,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2419,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2439,    -1,    -1,    -1,    -1,    -1,
      -1,  2446,    -1,  1541,  2449,  2450,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2354,    -1,  1553,  2357,  2358,  2359,  2360,
    2361,    -1,  2363,  2364,    -1,  2366,  2367,  2368,  2369,  2370,
      -1,  2372,  2373,    -1,  2375,  2376,  2377,  2378,  2379,    -1,
    2381,  2382,    -1,  2384,    -1,    -1,    -1,  2280,    -1,    -1,
      -1,    -1,    -1,  2394,  2395,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2405,    -1,  1357,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1369,    -1,
      -1,    -1,    -1,    -1,  1201,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1630,    -1,    -1,    -1,  1387,  1388,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1648,    -1,    -1,    -1,  1231,    -1,    -1,    -1,    -1,  1236,
      -1,  2566,    -1,    -1,    -1,    -1,  1664,    -1,    -1,  1246,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2585,  1679,    -1,  1681,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1691,    -1,    -1,  1694,    -1,  1696,  1697,
    1698,  1699,    -1,    -1,  1702,    -1,    -1,  1705,    -1,    -1,
    1708,  1709,    -1,  1711,  1712,  1713,  1714,    -1,  1716,  1717,
      -1,    -1,    -1,    -1,  1722,  1723,  1724,    -1,    -1,  1727,
    1728,    -1,    -1,  2534,    -1,  1733,  1734,    -1,    -1,    -1,
      -1,    -1,  2543,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2552,    -1,  2554,    -1,  2660,  2661,  2558,  2663,    -1,
    2665,  2666,    -1,  2668,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2471,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2491,    -1,
      -1,    -1,  2495,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2719,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2647,    -1,  2649,    -1,
    2651,    40,    -1,  2654,    -1,  2656,     3,     4,    -1,  1857,
      -1,  2766,    -1,  1861,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    19,    -1,    -1,  1873,    -1,    -1,  1876,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1482,    -1,    -1,  1906,    -1,
      -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,    -1,    -1,  2628,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1962,  1542,    -1,    -1,    -1,    -1,
     159,  1548,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1985,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,    -1,
      -1,    -1,   159,    -1,    -1,    -1,   205,    -1,    -1,    -1,
      -1,    -1,    -1,  1774,   213,   214,    -1,    -1,    -1,    -1,
     219,  1782,  1783,    -1,    -1,   224,    -1,    -1,  2036,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1797,  1798,    -1,  1626,
      -1,    -1,  2745,    -1,    -1,  1632,    -1,  1808,  1809,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1819,  1820,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   224,  1829,  1830,
    1657,  2079,    -1,    -1,  1835,    -1,  1663,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1845,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   300,    -1,    -1,    -1,  1692,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1700,    -1,    -1,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,    -1,    -1,    -1,    -1,    -1,
     349,    -1,    -1,    -1,    -1,   354,   355,    -1,    -1,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,  2195,    -1,    -1,
    2198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2206,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2222,    -1,    -1,  2225,    -1,    -1,
      -1,    -1,  2230,    -1,    -1,  2233,  2234,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1855,    -1,
      -1,    -1,    -1,  2281,  2282,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1877,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    74,  2321,    76,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    84,    -1,  1911,  1912,    -1,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
      -1,  1928,  1929,  2104,    -1,   107,  1933,  1934,    -1,    -1,
      -1,    -1,    -1,  2114,   116,    16,    -1,  2118,  2119,    -1,
      -1,    -1,    23,    -1,    -1,    -1,  2127,  2128,    -1,   131,
      -1,    -1,    -1,    -1,    -1,  2136,  2137,    -1,    -1,    -1,
      -1,  2142,    -1,    -1,    -1,    -1,  1973,    -1,    -1,    -1,
     152,  2152,  2153,    -1,    -1,    -1,    -1,  1984,    -1,    -1,
      -1,    -1,  2163,  2164,    -1,   167,    -1,    -1,    -1,    -1,
    2418,    -1,    -1,  2174,    -1,   177,   178,    -1,    -1,    -1,
      -1,    -1,  2183,    -1,  2185,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2019,    -1,    -1,    -1,   198,    -1,    -1,    -1,
      -1,    -1,    -1,  2451,    -1,    -1,    -1,    -1,  2035,    -1,
      -1,    -1,    -1,    -1,  2462,    -1,    -1,    -1,    -1,   221,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2058,    -1,   235,    -1,   237,  2063,    -1,    -1,    -1,
      -1,    -1,  2069,    -1,    -1,    -1,    -1,  2074,    -1,    -1,
     252,  2078,    -1,    -1,  2081,   257,    -1,  2084,    -1,  2086,
      -1,    -1,   264,  2511,    -1,    -1,    -1,  2515,    -1,   271,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   289,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     302,   303,    -1,   305,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
    2568,  2569,    -1,  2571,    -1,    -1,    -1,    -1,  2576,  2577,
      -1,    -1,    -1,  2581,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   345,   245,    -1,    -1,   248,    -1,    -1,
      -1,    -1,    -1,    -1,  2355,    -1,    -1,    57,    -1,     4,
      -1,    -1,    -1,    -1,  2365,    -1,  2614,    -1,    -1,    -1,
      -1,    -1,    -1,  2374,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2383,    -1,    -1,    -1,    -1,    -1,    -1,  2390,
      -1,    -1,  2640,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2401,    -1,    -1,   103,    19,    -1,  2407,    -1,    -1,  2410,
      -1,    -1,  2413,    -1,    -1,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,    -1,  2271,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    -1,    -1,    70,    -1,    -1,   103,   159,
    2287,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2724,    -1,    93,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,    -1,  2741,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2756,    -1,
      -1,  2759,    -1,    -1,   159,    -1,    -1,    -1,    -1,   219,
      -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,    -1,    -1,
    2531,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2540,
      -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,  2549,    -1,
      -1,    -1,    -1,    -1,  2555,    -1,   171,    -1,  2559,    -1,
      -1,  2562,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,   224,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2416,
      -1,    -1,    -1,    -1,    -1,  2422,   211,    -1,    -1,  2426,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   224,
      -1,    -1,    -1,    -1,    -1,  2442,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      -1,    -1,   277,    -1,    -1,    -1,  2493,  2494,    -1,    -1,
      -1,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,    59,
      -1,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,    -1,
     345,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2596,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    -1,    53,   176,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    63,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2690,   224,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,   111,   112,    -1,    -1,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2712,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   131,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2757,    -1,    -1,   293,    -1,    -1,    -1,   175,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   184,    -1,    -1,    -1,
    2777,   103,    -1,  2780,    -1,    -1,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,    20,    21,    22,    -1,    -1,    -1,
     228,    -1,   230,    -1,    -1,    -1,    -1,    -1,   236,   237,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,
      -1,    -1,    -1,    49,    50,   253,    -1,    53,    19,    -1,
      56,    -1,    -1,    -1,    -1,    -1,   264,    63,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    -1,
      -1,   289,    -1,   291,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,   301,    -1,   101,    -1,   219,    -1,    19,
      -1,   107,   224,   311,    -1,   111,   112,    -1,    -1,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   131,    -1,    -1,    -1,    -1,
      -1,    -1,   103,    -1,    -1,    -1,    -1,   345,    -1,    19,
      60,    -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,    -1,   164,
      -1,    -1,    -1,   285,    -1,    -1,    -1,    -1,    -1,   175,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,   159,    -1,
      -1,    -1,   198,    -1,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   228,   103,   230,    -1,    -1,    -1,    -1,    -1,
     236,   237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
      -1,    -1,    -1,    -1,    -1,    -1,   252,   253,   219,    -1,
      -1,    -1,    -1,   224,   103,    -1,    -1,   263,   264,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
      -1,    -1,    -1,   289,    -1,   291,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   303,    -1,   305,
      -1,    -1,    -1,    -1,   224,   311,    -1,    -1,    -1,    -1,
     159,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   345,
      -1,    -1,    -1,    -1,   224,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   293,    -1,   224,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,    -1,    -1,    -1,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,    41,    -1,    -1,    44,    -1,
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
     346,   162,    -1,   164,   164,    -1,    -1,   353,    -1,    -1,
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
      -1,    -1,    -1,   314,    -1,   316,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,    -1,    -1,    -1,    -1,    -1,
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
     229,   244,   307,   513,    46,    65,    67,   185,   243,   287,
     296,   533,    67,   206,   348,   354,   356,   534,    39,   197,
     235,   297,   360,   370,   372,   535,     5,   306,   316,   362,
     538,    71,   171,   249,   258,   539,     4,   540,    89,   513,
      62,   287,   310,   547,   197,   297,   360,   548,    26,   114,
     126,   210,   223,   550,    51,   101,   110,   139,   299,   565,
     566,     4,    37,    48,    75,   152,   189,   258,   294,   310,
     388,     4,   126,   209,   567,   297,   360,   569,    16,    23,
     245,   248,   371,   570,   234,   574,   297,   360,   575,     0,
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
      40,   113,   360,   537,   362,   360,   370,   372,   536,   360,
     377,   360,     4,   371,    55,    91,   143,   250,   541,     4,
       4,   360,     4,   152,   264,   542,     5,   370,     4,    40,
     113,   360,   549,   360,    99,    62,   122,   250,   278,   551,
     122,   564,    62,   119,   122,   159,   195,   246,   250,   275,
     278,   288,   553,   554,    62,   122,   278,   563,     5,     4,
      34,   109,   206,   546,    67,   362,   389,    67,   362,   390,
      67,   362,   391,    13,   192,   545,   360,   360,   228,   360,
     392,   360,   275,     4,   360,   360,     4,   573,     4,   291,
     571,     4,   291,   572,     4,   377,   125,   360,   576,   360,
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
     239,   255,   256,   347,   348,   506,   101,   499,    17,   264,
     504,    40,   113,   197,   505,     4,     5,    17,   215,   298,
     360,   264,   506,   514,   126,   506,   515,    36,    40,   113,
     135,   197,   297,   360,   516,   370,   362,    93,   101,   107,
     128,   152,   160,   198,   206,   252,   264,   280,   519,    40,
     113,   197,     5,   264,   290,   523,    17,   215,   298,   524,
     291,   362,   525,     5,   101,   107,   306,    17,    17,     4,
     360,   360,   360,   360,   360,   360,   377,   360,   360,   369,
     360,     4,   377,     4,    40,   113,   197,   269,   543,    40,
     113,   197,   269,   544,     4,    99,     5,     5,    88,     4,
       5,     5,    88,     5,   554,    62,   122,   159,   278,   558,
      62,   122,   278,   562,    88,   159,    62,   122,   278,   556,
       4,    62,   122,   278,   555,     5,     5,     4,     4,     5,
       5,     5,   360,   360,   360,     4,   360,   568,   360,   360,
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
      30,   163,   216,   242,   508,   360,   211,   360,   509,    17,
     360,   263,   519,   263,   211,   360,   510,   291,   511,    17,
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
     123,   248,   370,   519,    40,   132,   228,   287,   248,   215,
       5,     5,   252,    27,   228,     4,     5,     5,   215,    36,
     135,   297,   360,   519,   215,   362,     4,     4,   360,     5,
     309,    22,    27,    49,    50,    52,    53,    63,    75,    76,
      83,    86,   104,   111,   112,   115,   175,   230,   236,   253,
     263,   290,   291,   311,   356,   502,   360,   360,   360,   360,
     360,   506,   370,     5,     4,     5,   360,   360,   370,   360,
     362,   360,   360,   506,     5,     5,   360,   360,   362,     5,
      17,     5,     5,   360,   360,   369,   360,   360,     4,   360,
     360,   113,   360,   360,   113,     4,    42,    43,   173,   174,
     201,   387,   387,    62,   122,   278,   552,   387,     5,    62,
     122,   278,   557,     5,     5,    62,   122,   278,   559,     4,
       5,     5,     4,    62,   122,   278,   561,    62,   122,   278,
     560,     5,     5,     4,     5,     5,     4,   387,   387,   387,
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
     274,   123,   170,   228,   295,   519,   132,   170,   228,   287,
       4,   252,    27,   170,   228,   519,   211,   360,   360,   360,
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
     228,   228,   360,   360,   228,   360,   228,   360,   360,   512,
     520,   360,   228,   228,   360,   360,   360,   360,   360,   360,
     360,   360,     5,   309,   360,   503,   360,   360,   228,   360,
     360,   360,   360,   370,   377,     5,     4,     4,   360,   360,
     377,   360,   360,   360,   370,   506,   360,   360,     5,     4,
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
     131,   289,   291,   345,   517,   518,   519,   531,   532,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   370,     5,   360,   360,   360,   360,     4,     4,   377,
     378,     5,     5,   369,   360,     4,   377,   370,     4,   387,
     387,   387,   365,   360,   360,   360,   377,   360,   369,   360,
     360,    12,     5,     5,     4,   360,   360,     4,   377,   370,
     360,   360,   378,   379,   360,     5,   360,   372,     5,     5,
       5,     5,     5,   377,   379,   379,   379,   377,   379,   378,
     379,   379,   377,   379,   379,   379,   377,   379,   379,   377,
     370,   379,   377,   379,   379,   377,   379,   377,     4,   372,
       5,   360,     4,   382,   381,     4,   381,     5,     5,     5,
     381,   381,   380,     4,     4,     5,     5,     5,     5,   381,
     381,   380,     4,     4,     5,     5,     5,     5,   381,   381,
     380,     4,     4,     5,   381,   382,   382,   382,   382,   382,
       4,   382,   382,     4,   381,   381,   382,   382,   382,   382,
     382,     4,   382,   382,     4,   381,   381,     4,     4,   381,
       4,   381,   381,     4,     4,     4,   371,   379,     4,   370,
     379,   360,   370,     4,   379,   379,   370,     4,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   370,
     379,   360,   370,     4,   369,   369,   370,   369,   369,   370,
     370,   369,   369,   360,   360,   360,   360,   360,   360,   365,
     360,   360,   360,   357,   357,   357,   357,   357,   357,   357,
     518,   357,   365,   360,   360,   360,   360,   365,   360,   360,
     360,   360,   360,   360,   377,   360,   309,   364,   365,   360,
     360,   378,   362,   370,   370,   378,   377,     4,   360,   369,
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
     360,   384,   362,   521,   522,   377,   377,   362,   378,     4,
       5,   360,     5,     4,     6,   360,    32,   286,   421,   370,
       5,    32,   286,   386,   370,   421,   360,   381,   382,   381,
     382,   381,   382,   382,   381,   382,   381,   381,   360,   379,
     370,   370,   360,   370,   360,   370,   370,   360,   370,   379,
       4,   520,   520,   364,   360,   520,     4,   520,   377,     5,
       4,     4,   520,   520,   364,   360,     4,   520,   520,   360,
     370,   520,   520,   520,   521,   528,   529,   519,   526,   527,
     362,     4,     5,     5,     6,     4,   190,   307,   352,   360,
     412,     4,   370,     4,   382,   382,   382,   382,   382,   371,
     379,   379,   360,   379,     4,   379,   379,   360,   379,   360,
     520,   520,     4,   360,   520,     5,   360,   520,     4,   360,
     520,   377,   528,   530,   531,   357,   527,     5,     5,     4,
     360,   413,   360,   413,   377,   379,     4,   370,   372,     4,
     365,   364,   360,   360,   364,   360,   370,   531,   362,     5,
       5,   360,   360,   360,   360,   386,     5,   370,   372,   377,
     370,   372,   520,   360,     4,   520,   360,   379,     5,     5,
     360,     5,   360,   377,   377,     4,   520,     4,     5,     5,
       5,   364,   364,   520,   520,   520
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
#line 465 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 466 "frame/parser.Y"
    {fr->bgColorCmd("gray");;}
    break;

  case 6:
#line 467 "frame/parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 8:
#line 469 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 9:
#line 470 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 11:
#line 472 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 18:
#line 479 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 23:
#line 484 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 24:
#line 485 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 486 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 27:
#line 488 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 34:
#line 495 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 38:
#line 499 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 41:
#line 502 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 46:
#line 507 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 48:
#line 509 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 50:
#line 511 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 52:
#line 513 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 57:
#line 520 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 58:
#line 521 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 59:
#line 524 "frame/parser.Y"
    {yydebug=1;;}
    break;

  case 60:
#line 525 "frame/parser.Y"
    {yydebug=0;;}
    break;

  case 61:
#line 526 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 62:
#line 527 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 528 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 529 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 530 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 531 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 532 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 533 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 534 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 535 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 538 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 72:
#line 540 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 73:
#line 541 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 74:
#line 542 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 75:
#line 543 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 76:
#line 545 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 77:
#line 546 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 78:
#line 547 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 79:
#line 548 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 80:
#line 551 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 81:
#line 552 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 82:
#line 553 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 83:
#line 554 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 84:
#line 555 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 85:
#line 558 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 86:
#line 559 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 87:
#line 562 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 88:
#line 563 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 89:
#line 564 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 90:
#line 567 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 91:
#line 570 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 92:
#line 573 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 93:
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

  case 94:
#line 589 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
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
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 97:
#line 610 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 98:
#line 611 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 99:
#line 612 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 100:
#line 613 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 101:
#line 614 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 102:
#line 617 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 103:
#line 618 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 104:
#line 619 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 105:
#line 620 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 106:
#line 621 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 107:
#line 622 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 108:
#line 623 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 109:
#line 624 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 110:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 111:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 112:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 113:
#line 628 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 114:
#line 629 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 115:
#line 630 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 116:
#line 631 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 117:
#line 632 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 118:
#line 633 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 119:
#line 634 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 120:
#line 635 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 121:
#line 636 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 122:
#line 637 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 123:
#line 638 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 124:
#line 639 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 125:
#line 640 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 126:
#line 641 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 127:
#line 642 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 128:
#line 643 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 129:
#line 644 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 130:
#line 647 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 131:
#line 648 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 132:
#line 651 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 133:
#line 652 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 134:
#line 653 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 135:
#line 654 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 136:
#line 655 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 137:
#line 656 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 138:
#line 659 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 139:
#line 660 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 140:
#line 661 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 141:
#line 662 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 142:
#line 663 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 143:
#line 666 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 144:
#line 667 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 145:
#line 668 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 146:
#line 669 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 147:
#line 670 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 148:
#line 671 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 149:
#line 672 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 150:
#line 673 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 151:
#line 676 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 152:
#line 677 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 153:
#line 678 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 154:
#line 679 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 155:
#line 680 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 156:
#line 683 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 157:
#line 684 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 158:
#line 685 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 159:
#line 686 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 160:
#line 687 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 161:
#line 688 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 162:
#line 689 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 163:
#line 690 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 164:
#line 693 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 165:
#line 694 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 166:
#line 695 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 167:
#line 698 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 168:
#line 699 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 169:
#line 700 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 170:
#line 701 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 171:
#line 704 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 172:
#line 705 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 173:
#line 706 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 174:
#line 709 "frame/parser.Y"
    {;}
    break;

  case 175:
#line 710 "frame/parser.Y"
    {;}
    break;

  case 176:
#line 711 "frame/parser.Y"
    {;}
    break;

  case 177:
#line 714 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 178:
#line 715 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 179:
#line 716 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 180:
#line 719 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 181:
#line 720 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 182:
#line 721 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 183:
#line 722 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 184:
#line 723 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 185:
#line 724 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 186:
#line 725 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 187:
#line 726 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 188:
#line 729 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 189:
#line 730 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 190:
#line 733 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 191:
#line 734 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 192:
#line 735 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 193:
#line 736 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 194:
#line 737 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 195:
#line 738 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 196:
#line 741 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 197:
#line 742 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 198:
#line 743 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 199:
#line 746 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 200:
#line 747 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 201:
#line 748 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 202:
#line 749 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 203:
#line 750 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 204:
#line 751 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 209:
#line 758 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 210:
#line 759 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 211:
#line 760 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 212:
#line 762 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 213:
#line 765 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 214:
#line 766 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 215:
#line 769 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 216:
#line 770 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 217:
#line 773 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 218:
#line 774 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 219:
#line 777 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 220:
#line 779 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 222:
#line 783 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 223:
#line 784 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 226:
#line 787 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 228:
#line 789 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 229:
#line 792 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 230:
#line 793 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 231:
#line 796 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 232:
#line 797 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 233:
#line 799 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 234:
#line 801 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 235:
#line 802 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 236:
#line 803 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 237:
#line 805 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 238:
#line 807 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 239:
#line 810 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 240:
#line 811 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 241:
#line 814 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 242:
#line 816 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 243:
#line 819 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 244:
#line 821 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 245:
#line 824 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 246:
#line 828 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 247:
#line 829 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 249:
#line 833 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 250:
#line 834 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 251:
#line 835 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 255:
#line 841 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 256:
#line 842 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 258:
#line 845 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 259:
#line 850 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 260:
#line 851 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 261:
#line 854 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 262:
#line 855 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 263:
#line 856 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 264:
#line 857 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 265:
#line 858 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 266:
#line 861 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 267:
#line 862 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 268:
#line 863 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 269:
#line 864 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 270:
#line 867 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 271:
#line 869 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 272:
#line 874 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 273:
#line 879 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 274:
#line 886 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 275:
#line 888 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 276:
#line 889 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 278:
#line 891 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 279:
#line 895 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 280:
#line 897 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 281:
#line 899 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 282:
#line 900 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 288:
#line 911 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 289:
#line 913 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 290:
#line 915 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 291:
#line 920 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 292:
#line 924 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 293:
#line 927 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 294:
#line 928 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 295:
#line 931 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 296:
#line 932 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 297:
#line 934 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 298:
#line 940 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 299:
#line 941 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 300:
#line 942 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 301:
#line 943 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 302:
#line 946 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 303:
#line 947 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 304:
#line 950 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 305:
#line 951 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 306:
#line 954 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 307:
#line 955 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 308:
#line 959 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 309:
#line 961 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 310:
#line 964 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 311:
#line 966 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 312:
#line 969 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 314:
#line 971 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 315:
#line 972 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 316:
#line 973 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 317:
#line 976 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 318:
#line 978 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 319:
#line 979 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 320:
#line 980 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 321:
#line 981 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 322:
#line 985 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 323:
#line 987 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 324:
#line 988 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 325:
#line 989 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 326:
#line 992 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 327:
#line 994 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 328:
#line 996 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 329:
#line 998 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 330:
#line 1001 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 331:
#line 1004 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 332:
#line 1005 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 333:
#line 1006 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 334:
#line 1009 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 335:
#line 1012 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 349:
#line 1026 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 352:
#line 1029 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 353:
#line 1030 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 354:
#line 1032 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 357:
#line 1035 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 358:
#line 1036 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 361:
#line 1039 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 362:
#line 1040 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 364:
#line 1043 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 366:
#line 1045 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 368:
#line 1047 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 370:
#line 1049 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 371:
#line 1051 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 372:
#line 1053 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 374:
#line 1055 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 375:
#line 1058 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 376:
#line 1059 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 377:
#line 1060 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 378:
#line 1061 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 379:
#line 1062 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 380:
#line 1063 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 382:
#line 1065 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 383:
#line 1068 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 384:
#line 1069 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 385:
#line 1070 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 386:
#line 1073 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 387:
#line 1076 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 388:
#line 1078 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 389:
#line 1080 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 390:
#line 1081 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 391:
#line 1082 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 393:
#line 1084 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 395:
#line 1087 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 396:
#line 1093 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 397:
#line 1094 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 398:
#line 1097 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 399:
#line 1098 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 400:
#line 1099 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 401:
#line 1102 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 402:
#line 1103 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 404:
#line 1109 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 405:
#line 1111 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 406:
#line 1113 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 407:
#line 1116 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 409:
#line 1118 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 410:
#line 1122 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 411:
#line 1126 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 413:
#line 1128 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 414:
#line 1129 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 415:
#line 1130 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 416:
#line 1131 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 417:
#line 1132 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 419:
#line 1134 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 420:
#line 1135 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 421:
#line 1138 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 422:
#line 1139 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 423:
#line 1140 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 424:
#line 1143 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 425:
#line 1144 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 426:
#line 1148 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 427:
#line 1150 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 428:
#line 1158 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 429:
#line 1160 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 430:
#line 1162 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 431:
#line 1165 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 432:
#line 1167 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 433:
#line 1168 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 434:
#line 1171 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 435:
#line 1174 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 436:
#line 1176 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 437:
#line 1180 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 438:
#line 1182 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 439:
#line 1185 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 440:
#line 1189 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 441:
#line 1190 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 442:
#line 1192 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)), (Coord::InternalSystem)(yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 443:
#line 1195 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 444:
#line 1196 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 446:
#line 1200 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 447:
#line 1201 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 448:
#line 1202 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 449:
#line 1205 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 450:
#line 1207 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 451:
#line 1208 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 453:
#line 1210 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 457:
#line 1214 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 458:
#line 1215 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 459:
#line 1216 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 460:
#line 1218 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 462:
#line 1220 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 463:
#line 1223 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 464:
#line 1225 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 465:
#line 1227 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 466:
#line 1228 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 467:
#line 1229 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 468:
#line 1230 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 469:
#line 1233 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 470:
#line 1234 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 471:
#line 1238 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 472:
#line 1240 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 473:
#line 1243 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 474:
#line 1246 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 475:
#line 1247 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 476:
#line 1249 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 477:
#line 1251 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 478:
#line 1253 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 479:
#line 1256 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 480:
#line 1257 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 481:
#line 1258 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 482:
#line 1261 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 483:
#line 1262 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 484:
#line 1263 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 485:
#line 1264 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 486:
#line 1265 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 487:
#line 1266 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 488:
#line 1267 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 489:
#line 1270 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 490:
#line 1273 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 491:
#line 1274 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 492:
#line 1275 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 493:
#line 1278 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 494:
#line 1279 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 495:
#line 1280 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 496:
#line 1281 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 497:
#line 1282 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 498:
#line 1283 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 503:
#line 1290 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 504:
#line 1291 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 505:
#line 1292 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 506:
#line 1295 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 507:
#line 1296 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 508:
#line 1299 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 509:
#line 1300 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 510:
#line 1303 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 511:
#line 1304 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 512:
#line 1307 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 513:
#line 1308 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 514:
#line 1311 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 516:
#line 1313 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 517:
#line 1316 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 518:
#line 1317 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 520:
#line 1321 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 521:
#line 1325 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 522:
#line 1328 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 523:
#line 1335 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 524:
#line 1336 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 525:
#line 1339 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 526:
#line 1340 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 529:
#line 1343 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 530:
#line 1344 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 531:
#line 1345 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 532:
#line 1346 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 534:
#line 1348 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 535:
#line 1349 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 536:
#line 1350 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 538:
#line 1352 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 539:
#line 1353 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 540:
#line 1354 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 541:
#line 1355 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 543:
#line 1359 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 544:
#line 1362 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 545:
#line 1363 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 546:
#line 1366 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 547:
#line 1367 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 548:
#line 1368 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 549:
#line 1369 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 550:
#line 1372 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 551:
#line 1373 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 552:
#line 1374 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 553:
#line 1375 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 554:
#line 1378 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 555:
#line 1379 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 556:
#line 1380 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 557:
#line 1381 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 558:
#line 1382 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 559:
#line 1383 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 560:
#line 1386 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 561:
#line 1387 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 562:
#line 1388 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 565:
#line 1392 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 566:
#line 1393 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 567:
#line 1396 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 568:
#line 1399 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 569:
#line 1400 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 570:
#line 1404 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 571:
#line 1406 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 572:
#line 1407 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 579:
#line 1419 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 580:
#line 1421 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 581:
#line 1423 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 582:
#line 1424 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 583:
#line 1426 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 584:
#line 1428 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 585:
#line 1430 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 586:
#line 1432 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 587:
#line 1434 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 589:
#line 1438 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 590:
#line 1439 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 591:
#line 1440 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 592:
#line 1441 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 593:
#line 1442 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 594:
#line 1444 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 595:
#line 1445 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 596:
#line 1446 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 597:
#line 1447 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 598:
#line 1450 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 599:
#line 1454 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 600:
#line 1456 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 601:
#line 1458 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 602:
#line 1460 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 603:
#line 1462 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 604:
#line 1464 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 605:
#line 1466 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 606:
#line 1468 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 607:
#line 1471 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 608:
#line 1473 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 609:
#line 1475 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 615:
#line 1483 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 616:
#line 1484 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 617:
#line 1485 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 618:
#line 1486 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 619:
#line 1487 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 620:
#line 1488 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 621:
#line 1490 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 622:
#line 1492 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 623:
#line 1493 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 624:
#line 1494 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 625:
#line 1495 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 626:
#line 1498 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 627:
#line 1499 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 628:
#line 1500 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 629:
#line 1501 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 630:
#line 1502 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 631:
#line 1504 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 632:
#line 1505 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 633:
#line 1506 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 634:
#line 1507 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 640:
#line 1518 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 641:
#line 1521 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 642:
#line 1524 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 643:
#line 1527 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 644:
#line 1530 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 645:
#line 1533 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 646:
#line 1536 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 647:
#line 1539 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 648:
#line 1542 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 649:
#line 1547 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 650:
#line 1550 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 651:
#line 1553 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 652:
#line 1556 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 653:
#line 1559 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 654:
#line 1562 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 655:
#line 1565 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 656:
#line 1568 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 657:
#line 1571 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 658:
#line 1574 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 659:
#line 1577 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 660:
#line 1582 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 661:
#line 1585 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 662:
#line 1588 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 663:
#line 1591 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 664:
#line 1594 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 665:
#line 1597 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 666:
#line 1600 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 667:
#line 1603 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 668:
#line 1606 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 669:
#line 1611 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 670:
#line 1613 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 671:
#line 1615 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 672:
#line 1617 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 673:
#line 1619 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 674:
#line 1621 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 675:
#line 1626 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 676:
#line 1628 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 677:
#line 1630 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 678:
#line 1634 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 679:
#line 1637 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 680:
#line 1640 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 681:
#line 1643 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 682:
#line 1646 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 683:
#line 1649 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 684:
#line 1652 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 685:
#line 1655 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 686:
#line 1658 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 687:
#line 1661 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 688:
#line 1664 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 689:
#line 1668 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 690:
#line 1669 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1670 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 692:
#line 1671 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 693:
#line 1672 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 694:
#line 1673 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 695:
#line 1675 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 696:
#line 1677 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 697:
#line 1678 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 698:
#line 1679 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 699:
#line 1680 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 700:
#line 1683 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 701:
#line 1684 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 702:
#line 1685 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 703:
#line 1686 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 704:
#line 1687 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 705:
#line 1689 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 706:
#line 1690 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 707:
#line 1691 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 708:
#line 1692 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 709:
#line 1696 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 710:
#line 1698 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 711:
#line 1699 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 712:
#line 1701 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 713:
#line 1703 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 714:
#line 1705 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 715:
#line 1708 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 716:
#line 1709 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 717:
#line 1712 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 718:
#line 1713 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 719:
#line 1714 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 720:
#line 1717 "frame/parser.Y"
    {;}
    break;

  case 721:
#line 1720 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 722:
#line 1721 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 723:
#line 1722 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 724:
#line 1723 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 725:
#line 1724 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 726:
#line 1725 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 727:
#line 1726 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 728:
#line 1730 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 730:
#line 1738 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 731:
#line 1739 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 732:
#line 1741 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 733:
#line 1743 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 734:
#line 1744 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 735:
#line 1745 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 737:
#line 1746 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 740:
#line 1749 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 741:
#line 1750 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 742:
#line 1752 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 743:
#line 1754 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 744:
#line 1756 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 745:
#line 1759 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 746:
#line 1761 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 747:
#line 1762 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 748:
#line 1764 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 749:
#line 1767 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 750:
#line 1770 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 751:
#line 1772 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 752:
#line 1775 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 753:
#line 1778 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 754:
#line 1781 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 755:
#line 1784 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 756:
#line 1788 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 757:
#line 1792 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 758:
#line 1797 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 759:
#line 1801 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 760:
#line 1802 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 761:
#line 1804 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 762:
#line 1805 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 763:
#line 1807 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 764:
#line 1809 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 765:
#line 1811 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 766:
#line 1813 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 767:
#line 1814 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 768:
#line 1816 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 769:
#line 1818 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 770:
#line 1821 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 771:
#line 1825 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 772:
#line 1829 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 773:
#line 1831 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 774:
#line 1833 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 775:
#line 1835 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 776:
#line 1837 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 777:
#line 1839 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 778:
#line 1841 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 779:
#line 1843 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 780:
#line 1845 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 781:
#line 1847 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 782:
#line 1849 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 783:
#line 1851 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 784:
#line 1853 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 785:
#line 1855 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 786:
#line 1856 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 787:
#line 1858 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 788:
#line 1860 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 789:
#line 1861 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 790:
#line 1862 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 791:
#line 1864 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 792:
#line 1866 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 793:
#line 1867 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 794:
#line 1868 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 795:
#line 1869 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 796:
#line 1871 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 797:
#line 1872 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 798:
#line 1874 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 799:
#line 1878 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 800:
#line 1881 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 801:
#line 1884 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 802:
#line 1888 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 803:
#line 1892 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 804:
#line 1897 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 805:
#line 1901 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 806:
#line 1902 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 807:
#line 1903 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 808:
#line 1905 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 809:
#line 1907 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 810:
#line 1911 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 811:
#line 1912 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 812:
#line 1913 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 813:
#line 1915 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 814:
#line 1918 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 815:
#line 1921 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 816:
#line 1924 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 817:
#line 1925 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 818:
#line 1927 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 819:
#line 1930 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 820:
#line 1934 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 821:
#line 1936 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 822:
#line 1937 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 823:
#line 1939 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 824:
#line 1942 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 825:
#line 1945 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 826:
#line 1946 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 827:
#line 1948 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 828:
#line 1949 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 829:
#line 1950 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 830:
#line 1952 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 831:
#line 1953 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 832:
#line 1955 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 833:
#line 1958 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 834:
#line 1961 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 835:
#line 1963 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 836:
#line 1964 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 840:
#line 1969 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 841:
#line 1970 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 842:
#line 1972 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 843:
#line 1974 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 844:
#line 1976 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 845:
#line 1977 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 849:
#line 1983 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 850:
#line 1984 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 851:
#line 1985 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 852:
#line 1986 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 853:
#line 1987 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 854:
#line 1988 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 855:
#line 1989 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 856:
#line 1990 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 857:
#line 1991 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 858:
#line 1992 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 859:
#line 1994 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 860:
#line 1996 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 861:
#line 1997 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 862:
#line 1998 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 863:
#line 1999 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 864:
#line 2000 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 865:
#line 2002 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 866:
#line 2003 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 867:
#line 2004 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 868:
#line 2005 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 869:
#line 2006 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 870:
#line 2008 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 871:
#line 2009 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 872:
#line 2010 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 873:
#line 2011 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 874:
#line 2012 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 875:
#line 2013 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 876:
#line 2016 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 877:
#line 2017 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 878:
#line 2018 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 879:
#line 2019 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 880:
#line 2020 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 881:
#line 2021 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 882:
#line 2022 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 883:
#line 2023 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 884:
#line 2024 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 885:
#line 2025 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 886:
#line 2026 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 887:
#line 2027 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 888:
#line 2028 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 889:
#line 2029 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 890:
#line 2030 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 891:
#line 2031 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 892:
#line 2032 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 893:
#line 2033 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 894:
#line 2034 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 895:
#line 2035 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 896:
#line 2036 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 897:
#line 2039 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 898:
#line 2040 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 899:
#line 2041 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 900:
#line 2042 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 901:
#line 2043 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 902:
#line 2045 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 903:
#line 2055 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 904:
#line 2063 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 905:
#line 2072 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 906:
#line 2080 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 907:
#line 2087 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 908:
#line 2094 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 909:
#line 2102 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 910:
#line 2110 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 911:
#line 2115 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 912:
#line 2120 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2125 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2130 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2135 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2140 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2145 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2154 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2164 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2174 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2183 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 922:
#line 2191 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 923:
#line 2201 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 924:
#line 2211 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 925:
#line 2221 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 926:
#line 2233 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 927:
#line 2242 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 929:
#line 2250 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 930:
#line 2252 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 931:
#line 2254 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 932:
#line 2259 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 933:
#line 2262 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 934:
#line 2263 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 935:
#line 2264 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 936:
#line 2271 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 937:
#line 2273 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 938:
#line 2274 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 939:
#line 2277 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 940:
#line 2278 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 941:
#line 2279 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 942:
#line 2280 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 943:
#line 2281 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 944:
#line 2282 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 945:
#line 2283 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 947:
#line 2287 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 948:
#line 2288 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 949:
#line 2289 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 950:
#line 2290 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 951:
#line 2291 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 952:
#line 2294 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 953:
#line 2296 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 954:
#line 2298 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 955:
#line 2300 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 956:
#line 2302 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 957:
#line 2304 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 958:
#line 2306 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 959:
#line 2307 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 960:
#line 2308 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 961:
#line 2310 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 962:
#line 2312 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 963:
#line 2314 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 964:
#line 2316 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 965:
#line 2318 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 966:
#line 2319 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 967:
#line 2320 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 968:
#line 2322 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 969:
#line 2324 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 970:
#line 2327 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 971:
#line 2329 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 972:
#line 2331 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 973:
#line 2332 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 974:
#line 2333 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 975:
#line 2334 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 976:
#line 2336 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 977:
#line 2337 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 978:
#line 2338 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 979:
#line 2339 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 980:
#line 2340 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 981:
#line 2342 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 982:
#line 2344 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 983:
#line 2345 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 984:
#line 2347 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 985:
#line 2349 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 986:
#line 2351 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 987:
#line 2352 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 988:
#line 2354 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 989:
#line 2356 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 990:
#line 2357 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 991:
#line 2358 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 992:
#line 2359 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 993:
#line 2361 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 994:
#line 2363 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 995:
#line 2366 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 996:
#line 2369 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 997:
#line 2370 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 998:
#line 2371 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 999:
#line 2373 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1000:
#line 2376 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1001:
#line 2379 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1002:
#line 2380 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1003:
#line 2381 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1004:
#line 2382 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1005:
#line 2384 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1006:
#line 2386 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1007:
#line 2388 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1008:
#line 2389 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1009:
#line 2391 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1010:
#line 2392 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1011:
#line 2393 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1012:
#line 2394 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1013:
#line 2395 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1014:
#line 2397 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1015:
#line 2399 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1016:
#line 2401 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1017:
#line 2403 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1019:
#line 2405 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1020:
#line 2406 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1021:
#line 2408 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1022:
#line 2410 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1023:
#line 2411 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1024:
#line 2412 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1026:
#line 2414 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1028:
#line 2418 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1029:
#line 2419 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1030:
#line 2420 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1031:
#line 2421 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1032:
#line 2422 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1033:
#line 2423 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1034:
#line 2425 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1035:
#line 2426 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1036:
#line 2428 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1037:
#line 2431 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1038:
#line 2432 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1039:
#line 2433 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1040:
#line 2434 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1041:
#line 2437 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1042:
#line 2438 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1043:
#line 2441 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1044:
#line 2442 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1045:
#line 2445 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1046:
#line 2446 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1047:
#line 2449 "frame/parser.Y"
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
#line 2462 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1049:
#line 2463 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1050:
#line 2467 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1051:
#line 2468 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1052:
#line 2472 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1053:
#line 2473 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1054:
#line 2478 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1055:
#line 2482 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1056:
#line 2487 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1057:
#line 2489 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1058:
#line 2492 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1059:
#line 2494 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1060:
#line 2497 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1061:
#line 2499 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1062:
#line 2502 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1063:
#line 2503 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1064:
#line 2504 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1065:
#line 2505 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1066:
#line 2506 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1067:
#line 2507 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1068:
#line 2509 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1071:
#line 2516 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1072:
#line 2517 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1073:
#line 2518 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1074:
#line 2519 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1075:
#line 2520 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1076:
#line 2521 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1079:
#line 2526 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1080:
#line 2527 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1081:
#line 2528 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1082:
#line 2529 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1083:
#line 2530 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1084:
#line 2531 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1085:
#line 2532 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1086:
#line 2533 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1087:
#line 2534 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1088:
#line 2535 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1089:
#line 2536 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1092:
#line 2543 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1093:
#line 2544 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1095:
#line 2548 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1096:
#line 2550 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1097:
#line 2551 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1098:
#line 2554 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1099:
#line 2555 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1100:
#line 2556 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1101:
#line 2557 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1102:
#line 2560 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1103:
#line 2561 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1106:
#line 2569 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1107:
#line 2572 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1108:
#line 2573 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1112:
#line 2580 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1113:
#line 2583 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1114:
#line 2587 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1115:
#line 2588 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1116:
#line 2589 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1117:
#line 2590 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1118:
#line 2591 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1119:
#line 2592 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1120:
#line 2593 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1121:
#line 2594 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1122:
#line 2600 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1123:
#line 2601 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1124:
#line 2602 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1125:
#line 2603 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1126:
#line 2607 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1127:
#line 2608 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1128:
#line 2610 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1129:
#line 2615 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1131:
#line 2617 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1133:
#line 2619 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1134:
#line 2622 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1135:
#line 2624 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1136:
#line 2629 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1137:
#line 2632 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1138:
#line 2633 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1139:
#line 2634 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1140:
#line 2637 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1141:
#line 2639 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1142:
#line 2643 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1143:
#line 2644 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1144:
#line 2648 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1145:
#line 2649 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1146:
#line 2650 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1147:
#line 2651 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1148:
#line 2657 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1149:
#line 2658 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1150:
#line 2664 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1151:
#line 2665 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1152:
#line 2666 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1153:
#line 2667 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1156:
#line 2675 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1157:
#line 2677 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1158:
#line 2678 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1159:
#line 2679 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1160:
#line 2683 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1161:
#line 2684 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1162:
#line 2685 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1163:
#line 2686 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1164:
#line 2689 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1165:
#line 2690 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1166:
#line 2693 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1167:
#line 2694 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1168:
#line 2695 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1169:
#line 2698 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1170:
#line 2699 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1171:
#line 2700 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1172:
#line 2703 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1173:
#line 2704 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1175:
#line 2706 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1176:
#line 2707 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1177:
#line 2710 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1178:
#line 2711 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1179:
#line 2712 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1184:
#line 2719 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1185:
#line 2723 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1186:
#line 2725 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1187:
#line 2727 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1189:
#line 2732 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1190:
#line 2734 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1191:
#line 2736 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1201:
#line 2749 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1202:
#line 2750 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1203:
#line 2751 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1204:
#line 2754 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1205:
#line 2755 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1206:
#line 2756 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1207:
#line 2759 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1208:
#line 2760 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1209:
#line 2761 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1210:
#line 2764 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1211:
#line 2765 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1212:
#line 2766 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1214:
#line 2770 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1215:
#line 2771 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1216:
#line 2772 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1217:
#line 2775 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1218:
#line 2776 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1219:
#line 2777 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1220:
#line 2780 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1221:
#line 2781 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1222:
#line 2782 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1223:
#line 2785 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1224:
#line 2786 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1225:
#line 2787 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1226:
#line 2790 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1227:
#line 2791 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1228:
#line 2792 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1229:
#line 2796 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1230:
#line 2798 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1231:
#line 2800 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1232:
#line 2804 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1233:
#line 2808 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1234:
#line 2810 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1235:
#line 2814 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1236:
#line 2817 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1237:
#line 2818 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1238:
#line 2819 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1239:
#line 2820 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1240:
#line 2823 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1241:
#line 2825 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1242:
#line 2826 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1243:
#line 2828 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1245:
#line 2832 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1246:
#line 2833 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1247:
#line 2834 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1248:
#line 2837 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1249:
#line 2838 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1250:
#line 2842 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1252:
#line 2844 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1255:
#line 2849 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1256:
#line 2850 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1257:
#line 2851 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1258:
#line 2854 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1259:
#line 2855 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1260:
#line 2856 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1261:
#line 2859 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1262:
#line 2861 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1263:
#line 2866 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1264:
#line 2869 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1265:
#line 2876 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1266:
#line 2878 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1267:
#line 2880 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1268:
#line 2885 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1270:
#line 2889 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1271:
#line 2890 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1272:
#line 2891 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1273:
#line 2893 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1274:
#line 2895 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1275:
#line 2900 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11043 "frame/parser.C"
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


#line 2904 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

