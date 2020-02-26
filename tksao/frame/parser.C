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
     RESET_ = 502,
     RESOLUTION_ = 503,
     RGB_ = 504,
     ROOT_ = 505,
     ROTATE_ = 506,
     RULER_ = 507,
     SAMPLE_ = 508,
     SAOIMAGE_ = 509,
     SAOTNG_ = 510,
     SAVE_ = 511,
     SCALE_ = 512,
     SCAN_ = 513,
     SCIENTIFIC_ = 514,
     SCOPE_ = 515,
     SCREEN_ = 516,
     SEGMENT_ = 517,
     SELECT_ = 518,
     SET_ = 519,
     SEXAGESIMAL_ = 520,
     SHAPE_ = 521,
     SHARED_ = 522,
     SHIFT_ = 523,
     SHMID_ = 524,
     SHOW_ = 525,
     SIGMA_ = 526,
     SINH_ = 527,
     SIZE_ = 528,
     SLICE_ = 529,
     SMMAP_ = 530,
     SMOOTH_ = 531,
     SOCKET_ = 532,
     SOCKETGZ_ = 533,
     SOURCE_ = 534,
     SQRT_ = 535,
     SQUARED_ = 536,
     SSHARED_ = 537,
     STATS_ = 538,
     STATUS_ = 539,
     SUM_ = 540,
     SYSTEM_ = 541,
     TABLE_ = 542,
     TAG_ = 543,
     TEMPLATE_ = 544,
     TEXT_ = 545,
     THREADS_ = 546,
     THREED_ = 547,
     THRESHOLD_ = 548,
     THICK_ = 549,
     TRANSPARENCY_ = 550,
     TO_ = 551,
     TOGGLE_ = 552,
     TOPHAT_ = 553,
     TRUE_ = 554,
     TYPE_ = 555,
     UNDO_ = 556,
     UNHIGHLITE_ = 557,
     UNLOAD_ = 558,
     UNSELECT_ = 559,
     UPDATE_ = 560,
     USER_ = 561,
     VALUE_ = 562,
     VAR_ = 563,
     VIEW_ = 564,
     VECTOR_ = 565,
     VERSION_ = 566,
     VERTEX_ = 567,
     VERTICAL_ = 568,
     WARP_ = 569,
     WCS_ = 570,
     WCSA_ = 571,
     WCSB_ = 572,
     WCSC_ = 573,
     WCSD_ = 574,
     WCSE_ = 575,
     WCSF_ = 576,
     WCSG_ = 577,
     WCSH_ = 578,
     WCSI_ = 579,
     WCSJ_ = 580,
     WCSK_ = 581,
     WCSL_ = 582,
     WCSM_ = 583,
     WCSN_ = 584,
     WCSO_ = 585,
     WCSP_ = 586,
     WCSQ_ = 587,
     WCSR_ = 588,
     WCSS_ = 589,
     WCST_ = 590,
     WCSU_ = 591,
     WCSV_ = 592,
     WCSW_ = 593,
     WCSX_ = 594,
     WCSY_ = 595,
     WCSZ_ = 596,
     WCS0_ = 597,
     WFPC2_ = 598,
     WIDTH_ = 599,
     WIN32_ = 600,
     XML_ = 601,
     XY_ = 602,
     YES_ = 603,
     ZERO_ = 604,
     ZMAX_ = 605,
     ZSCALE_ = 606,
     ZOOM_ = 607
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
#define RESET_ 502
#define RESOLUTION_ 503
#define RGB_ 504
#define ROOT_ 505
#define ROTATE_ 506
#define RULER_ 507
#define SAMPLE_ 508
#define SAOIMAGE_ 509
#define SAOTNG_ 510
#define SAVE_ 511
#define SCALE_ 512
#define SCAN_ 513
#define SCIENTIFIC_ 514
#define SCOPE_ 515
#define SCREEN_ 516
#define SEGMENT_ 517
#define SELECT_ 518
#define SET_ 519
#define SEXAGESIMAL_ 520
#define SHAPE_ 521
#define SHARED_ 522
#define SHIFT_ 523
#define SHMID_ 524
#define SHOW_ 525
#define SIGMA_ 526
#define SINH_ 527
#define SIZE_ 528
#define SLICE_ 529
#define SMMAP_ 530
#define SMOOTH_ 531
#define SOCKET_ 532
#define SOCKETGZ_ 533
#define SOURCE_ 534
#define SQRT_ 535
#define SQUARED_ 536
#define SSHARED_ 537
#define STATS_ 538
#define STATUS_ 539
#define SUM_ 540
#define SYSTEM_ 541
#define TABLE_ 542
#define TAG_ 543
#define TEMPLATE_ 544
#define TEXT_ 545
#define THREADS_ 546
#define THREED_ 547
#define THRESHOLD_ 548
#define THICK_ 549
#define TRANSPARENCY_ 550
#define TO_ 551
#define TOGGLE_ 552
#define TOPHAT_ 553
#define TRUE_ 554
#define TYPE_ 555
#define UNDO_ 556
#define UNHIGHLITE_ 557
#define UNLOAD_ 558
#define UNSELECT_ 559
#define UPDATE_ 560
#define USER_ 561
#define VALUE_ 562
#define VAR_ 563
#define VIEW_ 564
#define VECTOR_ 565
#define VERSION_ 566
#define VERTEX_ 567
#define VERTICAL_ 568
#define WARP_ 569
#define WCS_ 570
#define WCSA_ 571
#define WCSB_ 572
#define WCSC_ 573
#define WCSD_ 574
#define WCSE_ 575
#define WCSF_ 576
#define WCSG_ 577
#define WCSH_ 578
#define WCSI_ 579
#define WCSJ_ 580
#define WCSK_ 581
#define WCSL_ 582
#define WCSM_ 583
#define WCSN_ 584
#define WCSO_ 585
#define WCSP_ 586
#define WCSQ_ 587
#define WCSR_ 588
#define WCSS_ 589
#define WCST_ 590
#define WCSU_ 591
#define WCSV_ 592
#define WCSW_ 593
#define WCSX_ 594
#define WCSY_ 595
#define WCSZ_ 596
#define WCS0_ 597
#define WFPC2_ 598
#define WIDTH_ 599
#define WIN32_ 600
#define XML_ 601
#define XY_ 602
#define YES_ 603
#define ZERO_ 604
#define ZMAX_ 605
#define ZSCALE_ 606
#define ZOOM_ 607




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
#line 862 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 875 "frame/parser.C"

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
#define YYLAST   5532

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  357
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  218
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1266
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2789

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   607

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
       2,   356,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   354,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   355,   353,
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
     345,   346,   347,   348,   349,   350,   351,   352
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
     669,   671,   673,   675,   677,   680,   683,   686,   690,   693,
     696,   699,   706,   717,   719,   722,   724,   731,   742,   744,
     747,   750,   753,   756,   759,   762,   776,   790,   803,   816,
     818,   819,   821,   823,   828,   835,   837,   839,   841,   843,
     845,   847,   849,   851,   853,   858,   862,   867,   868,   875,
     884,   887,   891,   895,   899,   900,   905,   910,   915,   920,
     924,   928,   930,   934,   940,   945,   950,   954,   957,   958,
     960,   962,   966,   969,   972,   975,   978,   981,   984,   987,
     990,   993,   996,   999,  1002,  1005,  1008,  1010,  1013,  1016,
    1021,  1031,  1034,  1037,  1040,  1042,  1046,  1049,  1052,  1054,
    1057,  1066,  1069,  1071,  1074,  1076,  1079,  1081,  1086,  1096,
    1099,  1101,  1103,  1105,  1107,  1110,  1112,  1114,  1117,  1119,
    1120,  1123,  1126,  1128,  1129,  1132,  1135,  1137,  1139,  1142,
    1145,  1148,  1150,  1152,  1154,  1156,  1158,  1160,  1161,  1163,
    1166,  1168,  1173,  1179,  1180,  1183,  1185,  1191,  1194,  1197,
    1199,  1201,  1203,  1206,  1208,  1211,  1213,  1215,  1216,  1218,
    1220,  1221,  1223,  1229,  1236,  1240,  1247,  1251,  1253,  1257,
    1259,  1261,  1263,  1267,  1274,  1282,  1288,  1290,  1292,  1297,
    1303,  1305,  1309,  1310,  1312,  1315,  1317,  1322,  1324,  1327,
    1329,  1332,  1336,  1339,  1341,  1344,  1346,  1351,  1354,  1356,
    1358,  1362,  1364,  1367,  1371,  1374,  1375,  1377,  1379,  1384,
    1387,  1388,  1390,  1394,  1399,  1404,  1405,  1407,  1409,  1411,
    1413,  1415,  1417,  1419,  1421,  1423,  1425,  1427,  1429,  1431,
    1433,  1435,  1438,  1440,  1443,  1445,  1448,  1451,  1454,  1457,
    1459,  1461,  1463,  1464,  1466,  1467,  1469,  1470,  1472,  1473,
    1475,  1476,  1479,  1482,  1483,  1485,  1488,  1490,  1497,  1503,
    1505,  1507,  1509,  1512,  1515,  1517,  1519,  1521,  1523,  1526,
    1528,  1530,  1532,  1535,  1537,  1539,  1541,  1544,  1547,  1550,
    1551,  1553,  1554,  1556,  1558,  1560,  1562,  1564,  1566,  1568,
    1570,  1573,  1576,  1579,  1581,  1584,  1588,  1590,  1593,  1596,
    1601,  1608,  1610,  1621,  1623,  1626,  1630,  1634,  1637,  1640,
    1643,  1646,  1649,  1652,  1655,  1660,  1665,  1670,  1674,  1678,
    1684,  1689,  1694,  1699,  1703,  1707,  1711,  1715,  1718,  1721,
    1726,  1730,  1734,  1738,  1742,  1747,  1752,  1757,  1762,  1768,
    1773,  1780,  1788,  1793,  1798,  1804,  1807,  1811,  1815,  1819,
    1822,  1826,  1830,  1834,  1838,  1843,  1847,  1853,  1860,  1864,
    1868,  1873,  1877,  1881,  1885,  1889,  1893,  1899,  1903,  1907,
    1912,  1916,  1919,  1922,  1924,  1928,  1933,  1938,  1943,  1948,
    1953,  1960,  1965,  1970,  1976,  1981,  1986,  1991,  1996,  2002,
    2007,  2014,  2022,  2027,  2032,  2038,  2044,  2050,  2056,  2062,
    2068,  2076,  2082,  2088,  2095,  2100,  2105,  2110,  2115,  2120,
    2127,  2132,  2137,  2143,  2149,  2155,  2161,  2167,  2174,  2180,
    2188,  2197,  2203,  2209,  2216,  2220,  2224,  2228,  2232,  2237,
    2241,  2247,  2254,  2258,  2262,  2267,  2271,  2275,  2279,  2283,
    2287,  2293,  2297,  2301,  2306,  2311,  2316,  2320,  2326,  2331,
    2336,  2339,  2343,  2350,  2357,  2359,  2361,  2363,  2366,  2369,
    2372,  2376,  2380,  2383,  2396,  2399,  2402,  2404,  2408,  2413,
    2416,  2417,  2421,  2423,  2425,  2428,  2431,  2434,  2437,  2440,
    2445,  2450,  2455,  2459,  2464,  2470,  2479,  2486,  2491,  2501,
    2508,  2516,  2527,  2539,  2552,  2562,  2568,  2573,  2580,  2584,
    2590,  2596,  2603,  2609,  2614,  2624,  2635,  2647,  2657,  2664,
    2671,  2678,  2685,  2692,  2699,  2706,  2713,  2720,  2728,  2736,
    2739,  2744,  2749,  2754,  2759,  2765,  2770,  2775,  2781,  2787,
    2791,  2796,  2801,  2806,  2811,  2819,  2829,  2836,  2847,  2859,
    2872,  2882,  2886,  2889,  2893,  2899,  2907,  2912,  2916,  2920,
    2927,  2935,  2943,  2948,  2953,  2958,  2968,  2973,  2977,  2982,
    2990,  2998,  3001,  3005,  3009,  3013,  3018,  3021,  3024,  3029,
    3040,  3044,  3046,  3050,  3053,  3056,  3059,  3062,  3066,  3072,
    3077,  3083,  3086,  3094,  3098,  3101,  3104,  3108,  3111,  3114,
    3117,  3121,  3124,  3128,  3133,  3137,  3141,  3148,  3153,  3156,
    3160,  3163,  3166,  3171,  3175,  3179,  3182,  3186,  3188,  3191,
    3193,  3196,  3199,  3202,  3204,  3206,  3208,  3210,  3213,  3215,
    3218,  3221,  3223,  3226,  3229,  3231,  3234,  3236,  3238,  3240,
    3242,  3244,  3246,  3248,  3250,  3251,  3253,  3256,  3259,  3262,
    3266,  3272,  3280,  3288,  3295,  3302,  3309,  3316,  3322,  3329,
    3336,  3343,  3350,  3357,  3364,  3371,  3383,  3391,  3399,  3407,
    3417,  3427,  3438,  3451,  3464,  3467,  3470,  3474,  3479,  3484,
    3489,  3492,  3497,  3502,  3504,  3506,  3508,  3510,  3512,  3514,
    3516,  3518,  3521,  3523,  3525,  3527,  3531,  3535,  3544,  3551,
    3562,  3570,  3578,  3584,  3587,  3590,  3594,  3599,  3605,  3609,
    3615,  3621,  3625,  3630,  3636,  3642,  3648,  3652,  3658,  3661,
    3665,  3669,  3675,  3679,  3683,  3687,  3692,  3698,  3704,  3708,
    3714,  3720,  3724,  3729,  3735,  3741,  3744,  3747,  3751,  3757,
    3764,  3771,  3775,  3779,  3783,  3790,  3796,  3802,  3805,  3809,
    3813,  3819,  3826,  3830,  3833,  3836,  3840,  3843,  3847,  3850,
    3854,  3860,  3867,  3870,  3873,  3876,  3878,  3883,  3888,  3890,
    3893,  3896,  3899,  3902,  3905,  3908,  3911,  3915,  3918,  3922,
    3925,  3929,  3931,  3933,  3935,  3937,  3939,  3940,  3943,  3944,
    3947,  3948,  3950,  3951,  3952,  3954,  3956,  3958,  3960,  3962,
    3970,  3979,  3982,  3987,  3990,  3995,  4002,  4005,  4007,  4009,
    4013,  4017,  4019,  4024,  4027,  4029,  4033,  4037,  4042,  4046,
    4050,  4054,  4056,  4058,  4060,  4062,  4064,  4066,  4068,  4070,
    4072,  4074,  4076,  4078,  4080,  4082,  4085,  4086,  4087,  4090,
    4092,  4096,  4098,  4102,  4104,  4107,  4110,  4112,  4116,  4117,
    4118,  4121,  4124,  4126,  4130,  4136,  4138,  4141,  4144,  4148,
    4151,  4154,  4157,  4160,  4162,  4164,  4166,  4168,  4173,  4176,
    4180,  4184,  4187,  4191,  4194,  4197,  4200,  4204,  4208,  4212,
    4215,  4219,  4221,  4225,  4229,  4231,  4234,  4237,  4240,  4243,
    4253,  4260,  4262,  4264,  4266,  4268,  4271,  4274,  4278,  4282,
    4284,  4287,  4291,  4295,  4297,  4300,  4302,  4304,  4306,  4308,
    4310,  4313,  4316,  4321,  4323,  4326,  4329,  4332,  4336,  4338,
    4340,  4342,  4345,  4348,  4351,  4354,  4357,  4361,  4365,  4369,
    4373,  4377,  4381,  4385,  4387,  4390,  4393,  4396,  4400,  4403,
    4407,  4411,  4414,  4417,  4420,  4423,  4426,  4429,  4432,  4435,
    4438,  4441,  4444,  4447,  4450,  4453,  4457,  4461,  4465,  4468,
    4471,  4474,  4477,  4480,  4483,  4486,  4489,  4492,  4495,  4498,
    4501,  4505,  4509,  4513,  4518,  4525,  4528,  4530,  4532,  4534,
    4536,  4538,  4539,  4545,  4547,  4554,  4558,  4560,  4563,  4566,
    4569,  4573,  4577,  4580,  4583,  4586,  4589,  4592,  4595,  4599,
    4602,  4605,  4609,  4611,  4615,  4620,  4622,  4625,  4631,  4638,
    4645,  4648,  4650,  4653,  4656,  4662,  4669
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     358,     0,    -1,    98,   360,    -1,    44,   392,    -1,    41,
      67,     5,    -1,    41,    67,   143,    -1,    47,   397,    -1,
      60,    -1,    65,    -1,    66,   399,    -1,    68,   288,     5,
      -1,    69,   404,    -1,    70,   406,    -1,    78,   407,    -1,
      85,   416,    -1,    87,   418,    -1,    88,   419,    -1,    97,
     361,    -1,   127,   421,    -1,   140,   422,    -1,   144,   464,
      -1,   147,   467,    -1,   151,    -1,   152,   361,    -1,   158,
     473,    -1,   164,    16,     4,    -1,   178,   476,    -1,   181,
     494,    -1,   182,   495,    -1,   183,   496,    -1,   186,   512,
     497,    -1,   187,   531,    -1,   200,    67,     5,    -1,   217,
     532,    -1,   218,   533,    -1,   219,   536,    -1,   240,    89,
      -1,   233,   538,    -1,   231,   537,    -1,   247,    -1,   244,
     512,   540,    -1,   249,   545,    -1,   251,   546,    -1,   256,
     548,    -1,   270,    -1,   276,   563,    -1,   291,     4,    -1,
     292,   387,    -1,   303,    -1,   305,   565,    -1,   311,    -1,
     314,   567,    -1,   315,   568,    -1,   345,   572,    -1,   352,
     573,    -1,     3,    -1,     4,    -1,   214,    -1,   213,    -1,
     195,   361,    -1,   220,   361,    -1,   222,   361,    -1,   315,
     361,    -1,    44,   361,    -1,    47,   361,    -1,    77,   361,
      -1,    85,   361,    -1,   145,   361,    -1,   249,   361,    -1,
       4,    -1,   348,    -1,   353,    -1,   214,    -1,   299,    -1,
     205,    -1,   354,    -1,   213,    -1,   121,    -1,    -1,   250,
      38,    -1,   136,    38,    -1,   250,    -1,   136,    -1,    -1,
     364,    -1,   359,    -1,     7,    -1,     8,    -1,     9,    -1,
      10,    -1,    11,    -1,   365,   365,    -1,   366,   367,    -1,
     367,   367,    -1,   359,   359,    -1,   159,    -1,   224,    -1,
     103,    -1,    19,    -1,   370,    -1,   315,    -1,   316,    -1,
     317,    -1,   318,    -1,   319,    -1,   320,    -1,   321,    -1,
     322,    -1,   323,    -1,   324,    -1,   325,    -1,   326,    -1,
     327,    -1,   328,    -1,   329,    -1,   330,    -1,   331,    -1,
     332,    -1,   333,    -1,   334,    -1,   335,    -1,   336,    -1,
     337,    -1,   338,    -1,   339,    -1,   340,    -1,   341,    -1,
     342,    -1,    57,    -1,   219,    -1,    -1,   349,    -1,   208,
      -1,   200,    -1,   207,    -1,   243,    -1,    -1,   279,    -1,
     261,    -1,    92,    -1,   172,    -1,   176,    -1,   180,    -1,
     232,    -1,   280,    -1,   281,    -1,    28,    -1,   272,    -1,
     153,    -1,    30,    -1,   258,    -1,   253,    -1,    96,    -1,
     165,    -1,    -1,   129,    -1,    35,    -1,   130,    -1,   166,
      -1,   156,    -1,   138,    -1,   108,    -1,    -1,    99,    -1,
     265,    -1,    -1,    99,    -1,    24,    -1,    25,    -1,    -1,
     269,    -1,   167,    -1,    -1,    17,    -1,   161,    -1,    -1,
     159,    -1,   187,    -1,    -1,    63,    -1,    49,    -1,   104,
      -1,    86,    -1,   355,    -1,    27,    -1,    52,    -1,    -1,
       4,    -1,    83,    -1,   154,    -1,   226,    -1,   227,    -1,
     241,    -1,   283,    -1,    -1,    32,    -1,   285,    -1,    -1,
     201,    -1,    42,    -1,    43,    -1,   173,    -1,   174,    -1,
     309,   391,    -1,    48,   388,    -1,    75,   389,    -1,   152,
     390,    -1,   189,   543,    -1,    37,   544,    -1,   257,   359,
      -1,   293,   359,    -1,   361,    -1,    67,     5,    -1,   361,
      -1,    67,     5,    -1,   361,    -1,    67,     5,    -1,   359,
     359,    -1,   228,   359,   359,   359,   359,   359,    -1,    12,
     393,    -1,    72,     5,     5,     5,    -1,   102,     4,    -1,
     120,   394,    -1,   137,   395,    -1,    54,   273,     4,    -1,
     296,   396,    -1,   124,     5,    -1,    60,    -1,   359,   359,
      -1,   359,    -1,   359,   359,    -1,   359,    12,   359,   359,
      -1,   359,   359,    12,   359,   359,    -1,   296,   359,    -1,
     296,   359,   359,    -1,   296,   359,    12,   359,   359,    -1,
     296,   359,   359,    12,   359,   359,    -1,    32,    -1,   285,
      -1,   125,    -1,   359,   359,    12,    60,     5,     5,     5,
      -1,   359,   359,     4,   359,   359,    12,    60,     5,     5,
       5,     5,    -1,   359,   359,    12,   359,   359,     5,     5,
       5,    -1,   359,   359,     4,   359,   359,    12,   359,   359,
       5,     5,     5,     5,    -1,   359,    -1,   359,   359,    -1,
     296,   398,    -1,   125,    -1,   359,    -1,   359,   359,    -1,
     260,   400,    -1,   196,   401,    -1,   190,   402,    -1,   306,
     359,   359,    -1,   306,   200,   200,    -1,   351,   403,    -1,
     235,   361,    -1,   141,    -1,   179,    -1,   359,    -1,   190,
      -1,   351,    -1,   350,    -1,   306,    -1,     4,   375,    -1,
     196,   375,    -1,   253,     4,    -1,   359,     4,     4,    -1,
      79,   359,    -1,   253,     4,    -1,   175,     4,    -1,     4,
     359,   359,     4,     6,     4,    -1,   249,   359,   359,   359,
     359,   359,   359,     4,     6,     4,    -1,    40,    -1,   197,
     405,    -1,   113,    -1,     4,   359,   359,     4,     6,     4,
      -1,   249,   359,   359,   359,   359,   359,   359,     4,     6,
       4,    -1,   374,    -1,   180,   359,    -1,    84,   408,    -1,
     101,   409,    -1,   178,   410,    -1,   221,   414,    -1,   256,
     415,    -1,     5,     4,     4,   413,     4,     4,   374,   359,
     411,   412,   359,   359,     5,    -1,     5,     4,     4,   413,
       4,     4,   374,   359,   359,   412,   359,   359,     5,    -1,
       5,     4,     4,   413,     4,     4,   374,   359,   411,   359,
     359,     5,    -1,     5,     4,     4,   413,     4,     4,   374,
     359,   359,   359,   359,     5,    -1,   230,    -1,    -1,    31,
      -1,     5,    -1,     5,     5,     4,   361,    -1,     5,     4,
     361,     5,   369,   376,    -1,   190,    -1,   351,    -1,   350,
      -1,   306,    -1,   141,    -1,   179,    -1,   276,    -1,    47,
      -1,     5,    -1,     5,     5,     4,   361,    -1,     5,   369,
     376,    -1,    31,     5,   369,   376,    -1,    -1,   359,   359,
     359,   359,   369,   376,    -1,    60,   368,   369,   376,   359,
     359,   369,   378,    -1,   292,   417,    -1,    40,   359,   359,
      -1,   197,   359,   359,    -1,   113,   359,   359,    -1,    -1,
     359,   359,   369,   376,    -1,    40,   359,   359,     4,    -1,
     197,   359,   359,     4,    -1,   113,   359,   359,     4,    -1,
     371,   359,   359,    -1,   369,   376,   368,    -1,   361,    -1,
     314,   359,   359,    -1,    40,   197,   371,   359,   359,    -1,
     197,   371,   359,   359,    -1,    40,   197,   369,   368,    -1,
     197,   369,   368,    -1,    33,     4,    -1,    -1,    32,    -1,
     285,    -1,   147,   119,     5,    -1,    41,    67,    -1,    44,
     423,    -1,    47,   425,    -1,    66,   426,    -1,    69,   430,
      -1,    68,   429,    -1,    70,   432,    -1,    78,   434,    -1,
      80,   437,    -1,    85,   438,    -1,    87,   439,    -1,    89,
     441,    -1,    88,   440,    -1,    95,   442,    -1,    97,    -1,
     126,   446,    -1,   144,   452,    -1,   154,     5,     5,     4,
      -1,   155,    90,     5,     5,   359,   359,   371,     4,   420,
      -1,   158,   444,    -1,   162,   443,    -1,   164,    16,    -1,
     190,    -1,   186,   512,   506,    -1,   187,   453,    -1,   200,
      67,    -1,   217,    -1,   218,   454,    -1,   225,   287,   371,
     359,   359,     4,     4,     5,    -1,   249,   455,    -1,   251,
      -1,   276,   456,    -1,   291,    -1,   292,   457,    -1,   300,
      -1,   307,   371,   359,   359,    -1,   313,    90,     5,     5,
     359,   359,   371,     4,   420,    -1,   315,   462,    -1,   352,
      -1,   102,    -1,   120,    -1,   137,    -1,    54,   273,    -1,
      89,    -1,   124,    -1,    72,   424,    -1,   177,    -1,    -1,
     190,     5,    -1,   105,     5,    -1,   120,    -1,    -1,   411,
     412,    -1,   359,   412,    -1,   260,    -1,   196,    -1,   190,
     427,    -1,   306,   171,    -1,   351,   428,    -1,   235,    -1,
     196,    -1,   253,    -1,    79,    -1,   253,    -1,   175,    -1,
      -1,   288,    -1,   171,   431,    -1,     4,    -1,     4,   371,
     359,   359,    -1,     4,   359,   359,   374,   359,    -1,    -1,
     171,   433,    -1,   180,    -1,     4,   359,   359,   374,   359,
      -1,   369,   376,    -1,    66,   435,    -1,    67,    -1,    93,
      -1,   171,    -1,   211,   171,    -1,   189,    -1,    70,   436,
      -1,   276,    -1,   344,    -1,    -1,   196,    -1,   260,    -1,
      -1,   180,    -1,   359,   359,   369,   376,   377,    -1,   371,
     359,   359,   369,   376,   377,    -1,   369,   376,   377,    -1,
      60,   369,   376,   377,   369,   378,    -1,   292,   369,   376,
      -1,   371,    -1,   369,   376,   377,    -1,   284,    -1,    33,
      -1,   371,    -1,   369,   376,   377,    -1,   369,   376,   368,
     359,   359,     5,    -1,     4,   369,   376,   368,   359,   359,
       5,    -1,   371,   359,   359,     4,     4,    -1,     5,    -1,
      66,    -1,   371,   359,   359,     5,    -1,     6,     4,     4,
       4,     4,    -1,    89,    -1,   122,   199,   445,    -1,    -1,
       4,    -1,   359,   359,    -1,   202,    -1,    60,   369,   376,
     377,    -1,    82,    -1,   102,   449,    -1,    45,    -1,   119,
     447,    -1,   122,   199,   450,    -1,   149,   448,    -1,   150,
      -1,   212,   199,    -1,   273,    -1,   273,   369,   376,   378,
      -1,   274,   451,    -1,   344,    -1,     4,    -1,   371,   359,
     359,    -1,     4,    -1,   168,     5,    -1,     4,   168,     5,
      -1,   315,     4,    -1,    -1,     4,    -1,   362,    -1,   362,
     371,   359,   359,    -1,   362,     4,    -1,    -1,     4,    -1,
     134,   159,   369,    -1,   134,   159,     4,   369,    -1,   296,
     159,   359,   369,    -1,    -1,   216,    -1,   308,    -1,    67,
      -1,   185,    -1,   243,    -1,   286,    -1,   295,    -1,    82,
      -1,    46,    -1,   235,    -1,    62,    -1,   286,    -1,   309,
      -1,   137,    -1,   242,    -1,   242,   191,    -1,   271,    -1,
     271,   191,    -1,    21,    -1,   309,   461,    -1,    48,   458,
      -1,    75,   459,    -1,   152,   460,    -1,   189,    -1,    37,
      -1,   257,    -1,    -1,    67,    -1,    -1,    67,    -1,    -1,
      67,    -1,    -1,   228,    -1,    -1,    16,   463,    -1,   199,
     370,    -1,    -1,   229,    -1,    84,   465,    -1,   101,    -1,
     369,   376,   377,   466,     5,     5,    -1,   369,   376,   377,
     466,     5,    -1,    20,    -1,   238,    -1,    19,    -1,    44,
     468,    -1,    78,   469,    -1,    85,    -1,    96,    -1,    97,
      -1,   103,    -1,   126,   470,    -1,   144,    -1,   158,    -1,
     165,    -1,   186,   471,    -1,   224,    -1,   159,    -1,   276,
      -1,   286,   369,    -1,   315,   472,    -1,    73,     5,    -1,
      -1,    31,    -1,    -1,    44,    -1,    88,    -1,   195,    -1,
     152,    -1,   263,    -1,   221,    -1,   301,    -1,   369,    -1,
      59,   369,    -1,   117,   369,    -1,   176,   369,    -1,    18,
      -1,   292,   369,    -1,   203,     4,     4,    -1,   118,    -1,
     188,     5,    -1,    89,   475,    -1,   264,   122,   199,   474,
      -1,   264,     6,     4,     4,     4,     4,    -1,   305,    -1,
     315,   359,   359,   359,   359,   359,   359,   359,   359,     4,
      -1,     5,    -1,     5,     4,    -1,     4,     4,    57,    -1,
       4,     4,   369,    -1,   196,   361,    -1,    26,   477,    -1,
     114,   479,    -1,   126,   480,    -1,   161,   493,    -1,   210,
     491,    -1,   223,   492,    -1,     5,    14,     5,   381,    -1,
       5,    15,     5,   381,    -1,     5,    62,     5,   381,    -1,
       5,   193,   381,    -1,     5,   194,   381,    -1,     5,   267,
     379,     4,   381,    -1,     5,   277,     4,   381,    -1,     5,
     278,     4,   381,    -1,     5,   308,     5,   381,    -1,   249,
      88,   478,    -1,     5,    14,     5,    -1,     5,    15,     5,
      -1,     5,    62,     5,    -1,     5,   193,    -1,     5,   194,
      -1,     5,   267,   379,     4,    -1,     5,   277,     4,    -1,
       5,   278,     4,    -1,     5,   308,     5,    -1,     5,     5,
     275,    -1,     5,    14,     5,   381,    -1,     5,    15,     5,
     381,    -1,     5,    62,     5,   381,    -1,     5,   193,   380,
     381,    -1,     5,     5,   275,   380,   381,    -1,     5,   194,
     380,   381,    -1,     5,   267,   379,     4,   380,   381,    -1,
       5,   282,   379,     4,     4,   380,   381,    -1,     5,   277,
       4,   381,    -1,     5,   278,     4,   381,    -1,     5,   308,
       5,   380,   381,    -1,   274,   481,    -1,   119,    88,   482,
      -1,   249,   159,   490,    -1,   249,    88,   489,    -1,   195,
     483,    -1,     5,    14,     5,    -1,     5,    15,     5,    -1,
       5,    62,     5,    -1,     5,   193,   380,    -1,     5,     5,
     275,   380,    -1,     5,   194,   380,    -1,     5,   267,   379,
       4,   380,    -1,     5,   282,   379,     4,     4,   380,    -1,
       5,   277,     4,    -1,     5,   278,     4,    -1,     5,   308,
       5,   380,    -1,     5,    14,     5,    -1,     5,    15,     5,
      -1,     5,    62,     5,    -1,     5,   193,   380,    -1,     5,
     194,   380,    -1,     5,   267,   379,     4,   380,    -1,     5,
     277,     4,    -1,     5,   278,     4,    -1,     5,   308,     5,
     380,    -1,   159,   164,   484,    -1,   164,   485,    -1,   159,
     486,    -1,   488,    -1,   159,   343,   487,    -1,     5,    14,
       5,   381,    -1,     5,    15,     5,   381,    -1,     5,    62,
       5,   381,    -1,     5,   193,   380,   381,    -1,     5,   194,
     380,   381,    -1,     5,   267,   379,     4,   380,   381,    -1,
       5,   277,     4,   381,    -1,     5,   278,     4,   381,    -1,
       5,   308,     5,   380,   381,    -1,     5,    14,     5,   381,
      -1,     5,    15,     5,   381,    -1,     5,    62,     5,   381,
      -1,     5,   193,   380,   381,    -1,     5,     5,   275,   380,
     381,    -1,     5,   194,   380,   381,    -1,     5,   267,   379,
       4,   380,   381,    -1,     5,   282,   379,     4,     4,   380,
     381,    -1,     5,   277,     4,   381,    -1,     5,   278,     4,
     381,    -1,     5,   308,     5,   380,   381,    -1,   370,     5,
      14,     5,   381,    -1,   370,     5,    15,     5,   381,    -1,
     370,     5,    62,     5,   381,    -1,   370,     5,   193,   380,
     381,    -1,   370,     5,   194,   380,   381,    -1,   370,     5,
     267,   379,     4,   380,   381,    -1,   370,     5,   277,     4,
     381,    -1,   370,     5,   278,     4,   381,    -1,   370,     5,
     308,     5,   380,   381,    -1,     5,    14,     5,   381,    -1,
       5,    15,     5,   381,    -1,     5,    62,     5,   381,    -1,
       5,   193,   380,   381,    -1,     5,   194,   380,   381,    -1,
       5,   267,   379,     4,   380,   381,    -1,     5,   277,     4,
     381,    -1,     5,   278,     4,   381,    -1,     5,   308,     5,
     380,   381,    -1,   370,     5,    14,     5,   381,    -1,   370,
       5,    15,     5,   381,    -1,   370,     5,    62,     5,   381,
      -1,   370,     5,   193,   380,   381,    -1,   370,     5,     5,
     275,   380,   381,    -1,   370,     5,   194,   380,   381,    -1,
     370,     5,   267,   379,     4,   380,   381,    -1,   370,     5,
     282,   379,     4,     4,   380,   381,    -1,   370,     5,   277,
       4,   381,    -1,   370,     5,   278,     4,   381,    -1,   370,
       5,   308,     5,   380,   381,    -1,     5,    14,     5,    -1,
       5,    15,     5,    -1,     5,    62,     5,    -1,     5,   193,
     380,    -1,     5,     5,   275,   380,    -1,     5,   194,   380,
      -1,     5,   267,   379,     4,   380,    -1,     5,   282,   379,
       4,     4,   380,    -1,     5,   277,     4,    -1,     5,   278,
       4,    -1,     5,   308,     5,   380,    -1,     5,    14,     5,
      -1,     5,    15,     5,    -1,     5,    62,     5,    -1,     5,
     193,   380,    -1,     5,   194,   380,    -1,     5,   267,   379,
       4,   380,    -1,     5,   277,     4,    -1,     5,   278,     4,
      -1,     5,   308,     5,   380,    -1,     5,    14,     5,   381,
      -1,     5,    62,     5,   381,    -1,     5,   193,   381,    -1,
       5,   267,   379,     4,   381,    -1,     5,   277,     4,   381,
      -1,     5,   308,     5,   381,    -1,     5,     5,    -1,   274,
       5,     5,    -1,    95,     4,     4,     4,     4,     4,    -1,
     190,     4,     4,     4,     4,     4,    -1,   113,    -1,   234,
      -1,   361,    -1,   142,   361,    -1,    89,   361,    -1,    67,
       5,    -1,     5,     4,     4,    -1,   305,   359,   359,    -1,
     352,   359,    -1,     5,     5,   370,   376,     5,     5,   370,
     376,   359,   370,   378,     5,    -1,    61,   500,    -1,    67,
       5,    -1,    81,    -1,    74,   505,     5,    -1,    74,   505,
     308,     5,    -1,    76,   101,    -1,    -1,    84,   498,   501,
      -1,    90,    -1,   101,    -1,   101,    17,    -1,   107,   504,
      -1,   116,     4,    -1,   131,     5,    -1,   152,    17,    -1,
     152,   215,   359,   359,    -1,   152,   297,   359,   359,    -1,
       4,    20,   384,   361,    -1,     4,    21,   364,    -1,     4,
      21,   364,   371,    -1,     4,    21,   364,   369,   376,    -1,
       4,    22,   242,   359,   359,     4,   369,   378,    -1,     4,
      22,   242,     5,   369,   378,    -1,     4,    49,   123,   361,
      -1,     4,    50,   242,   359,   359,   359,     4,   369,   378,
      -1,     4,    50,   242,     5,   369,   378,    -1,     4,    49,
     242,   359,   359,   369,   378,    -1,     4,    53,   107,   364,
     364,     4,   359,   359,   359,     4,    -1,     4,    53,   107,
     364,   364,     4,   359,   359,   359,     4,   371,    -1,     4,
      53,   107,   364,   364,     4,   359,   359,   359,     4,   369,
     376,    -1,     4,    53,   107,     5,     5,   369,   376,   369,
     378,    -1,     4,    56,   499,     5,     5,    -1,     4,    63,
     123,   361,    -1,     4,    63,   242,   359,   369,   378,    -1,
       4,    67,     5,    -1,     4,    75,    27,   361,   361,    -1,
       4,    75,   169,     5,     5,    -1,     4,    75,   242,   359,
     369,   378,    -1,     4,    75,   286,   369,   376,    -1,     4,
      76,   141,   361,    -1,     4,    83,   107,   364,   364,     4,
     359,   359,     4,    -1,     4,    83,   107,   364,   364,     4,
     359,   359,     4,   371,    -1,     4,    83,   107,   364,   364,
       4,   359,   359,     4,   369,   376,    -1,     4,    83,   107,
       5,     5,   369,   376,   369,   378,    -1,     4,    84,    22,
     242,   359,   359,    -1,     4,    84,    50,   242,   359,   359,
      -1,     4,    84,    53,    21,   359,   359,    -1,     4,    84,
      53,   242,   359,   359,    -1,     4,    84,   112,   242,   359,
     359,    -1,     4,    84,   115,    21,   359,   359,    -1,     4,
      84,   115,   242,   359,   359,    -1,     4,    84,    83,    21,
     359,   359,    -1,     4,    84,    83,   242,   359,   359,    -1,
       4,    84,   230,   312,     4,   359,   359,    -1,     4,    84,
     262,   312,     4,   359,   359,    -1,     4,   101,    -1,     4,
     101,    22,     4,    -1,     4,   101,    50,     4,    -1,     4,
     101,    53,     4,    -1,     4,   101,   112,     4,    -1,     4,
     101,    56,   499,     5,    -1,     4,   101,   115,     4,    -1,
       4,   101,    83,     4,    -1,     4,   101,   230,   312,     4,
      -1,     4,   101,   262,   312,     4,    -1,     4,   101,   288,
      -1,     4,   101,   288,     5,    -1,     4,   101,   288,     4,
      -1,     4,   107,    40,     4,    -1,     4,   111,   123,   361,
      -1,     4,   111,   242,   359,   359,   369,   378,    -1,     4,
     112,   242,   359,   359,   359,     4,   369,   378,    -1,     4,
     112,   242,     5,   369,   378,    -1,     4,   115,   107,   364,
     364,     4,   359,   359,   359,     4,    -1,     4,   115,   107,
     364,   364,     4,   359,   359,   359,     4,   371,    -1,     4,
     115,   107,   364,   364,     4,   359,   359,   359,     4,   369,
     376,    -1,     4,   115,   107,     5,     5,   369,   376,   369,
     378,    -1,     4,   131,     5,    -1,     4,   152,    -1,     4,
     152,   215,    -1,     4,   175,    27,   361,   361,    -1,     4,
     175,   228,   369,   376,   368,   368,    -1,     4,   198,   359,
     359,    -1,     4,   198,   135,    -1,     4,   198,    36,    -1,
       4,   198,   296,   369,   376,   368,    -1,     4,   230,   247,
     359,   359,   369,   378,    -1,     4,   262,   247,   359,   359,
     369,   378,    -1,     4,   228,   266,   382,    -1,     4,   228,
     273,     4,    -1,     4,   230,   123,   361,    -1,     4,   236,
     369,   376,   368,   368,   359,   369,   378,    -1,     4,   237,
     518,   361,    -1,     4,   251,    40,    -1,     4,   252,   132,
       5,    -1,     4,   252,   228,   369,   376,   368,   368,    -1,
       4,   252,   286,   369,   376,   369,   378,    -1,     4,   263,
      -1,     4,   263,   215,    -1,     4,   288,     5,    -1,     4,
     290,     5,    -1,     4,   290,   251,   361,    -1,     4,   302,
      -1,     4,   304,    -1,     4,   310,    27,   361,    -1,     4,
     310,   228,   369,   376,   368,   369,   378,   359,   364,    -1,
       4,   344,     4,    -1,   167,    -1,   167,   359,   359,    -1,
     177,   513,    -1,   178,   514,    -1,   198,   515,    -1,   235,
     361,    -1,   237,   518,   361,    -1,   237,   518,   361,   359,
     359,    -1,   251,    40,   359,   359,    -1,   251,   197,   359,
     359,     4,    -1,   251,   113,    -1,   256,     5,   505,   369,
     376,   377,   361,    -1,   256,   289,     5,    -1,   263,   522,
      -1,   270,   523,    -1,     5,    67,     5,    -1,     5,    81,
      -1,     5,   101,    -1,     5,    90,    -1,     5,   131,     5,
      -1,     5,   152,    -1,     5,   152,   215,    -1,     5,   198,
     359,   359,    -1,     5,   198,   135,    -1,     5,   198,    36,
      -1,     5,   198,   296,   369,   376,   368,    -1,     5,   237,
     518,   361,    -1,     5,   263,    -1,     5,   263,   215,    -1,
       5,   302,    -1,     5,   304,    -1,   288,   107,     5,     5,
      -1,   288,   101,     5,    -1,   288,   101,    17,    -1,   288,
       5,    -1,   288,   305,     5,    -1,   221,    -1,   221,   369,
      -1,   301,    -1,   302,    17,    -1,   304,    17,    -1,   344,
       4,    -1,   263,    -1,   304,    -1,   152,    -1,   302,    -1,
      40,   198,    -1,   198,    -1,   113,   198,    -1,    40,   107,
      -1,   107,    -1,   113,   107,    -1,    40,   251,    -1,   251,
      -1,   113,   251,    -1,   101,    -1,   290,    -1,    67,    -1,
     344,    -1,   237,    -1,   131,    -1,   167,    -1,   305,    -1,
      -1,     4,    -1,    30,   361,    -1,   242,   359,    -1,   163,
       4,    -1,   216,     4,   359,    -1,    63,   359,   359,   359,
     519,    -1,   111,   359,   359,   359,   359,   363,   519,    -1,
      49,   359,   359,   359,   359,   363,   519,    -1,   230,   359,
     359,   359,   359,   519,    -1,   262,   359,   359,   359,   359,
     519,    -1,   175,   359,   359,   359,   359,   519,    -1,   310,
     359,   359,   359,   359,   519,    -1,   290,   359,   359,   363,
     519,    -1,    63,   228,   359,   359,   383,   519,    -1,    49,
     228,   359,   359,   383,   519,    -1,   104,   228,   359,   359,
     383,   519,    -1,    86,   228,   359,   359,   383,   519,    -1,
     355,   228,   359,   359,   383,   519,    -1,    27,   228,   359,
     359,   383,   519,    -1,    52,   228,   359,   359,   383,   519,
      -1,   252,   359,   359,   359,   359,   369,   376,   369,   378,
       5,   519,    -1,    75,   359,   359,   359,   369,   376,   519,
      -1,   236,   359,   359,   359,   359,   359,   519,    -1,    22,
     359,   359,   359,   359,     4,   519,    -1,   112,   359,   359,
     359,   359,   359,     4,   363,   519,    -1,    50,   359,   359,
     359,   359,   359,     4,   363,   519,    -1,    83,   359,   359,
     364,   364,     4,   359,   359,     4,   519,    -1,   115,   359,
     359,   364,   364,     4,   359,   359,   359,     4,   363,   519,
      -1,    53,   359,   359,   364,   364,     4,   359,   359,   359,
       4,   363,   519,    -1,    76,   519,    -1,   289,   502,    -1,
       5,   359,   359,    -1,   308,     5,   359,   359,    -1,   359,
     359,   308,     5,    -1,     5,   369,   376,   368,    -1,     4,
       4,    -1,    40,   359,   359,     4,    -1,   197,   359,   359,
       4,    -1,   113,    -1,   106,    -1,   346,    -1,    64,    -1,
     255,    -1,   254,    -1,   239,    -1,   347,    -1,    61,   507,
      -1,    67,    -1,   131,    -1,   116,    -1,   146,   359,   359,
      -1,   157,   359,   359,    -1,     4,    20,    83,     5,     5,
       5,   369,     4,    -1,     4,    20,   154,     5,     5,     4,
      -1,     4,    20,   226,     5,     5,     5,     5,   369,   376,
     385,    -1,     4,    20,   227,     5,     5,   369,   385,    -1,
       4,    20,   241,     5,     5,     5,   369,    -1,     4,    20,
     283,   369,   376,    -1,   157,    17,    -1,     4,    21,    -1,
       4,    21,   371,    -1,     4,    21,   369,   376,    -1,     4,
      22,   242,   369,   378,    -1,     4,    49,   123,    -1,     4,
      50,   242,   369,   378,    -1,     4,    49,   242,   369,   378,
      -1,     4,    53,    21,    -1,     4,    53,    21,   371,    -1,
       4,    53,    21,   369,   376,    -1,     4,    53,   242,   369,
     378,    -1,     4,    60,   369,   376,   377,    -1,     4,    63,
     123,    -1,     4,    63,   242,   369,   378,    -1,     4,    67,
      -1,     4,    75,    27,    -1,     4,    75,   169,    -1,     4,
      75,   242,   369,   378,    -1,     4,    75,   286,    -1,     4,
      76,   141,    -1,     4,    83,    21,    -1,     4,    83,    21,
     371,    -1,     4,    83,    21,   369,   376,    -1,     4,    83,
     242,   369,   378,    -1,     4,   111,   123,    -1,     4,   111,
     242,   369,   378,    -1,     4,   112,   242,   369,   378,    -1,
       4,   115,    21,    -1,     4,   115,    21,   371,    -1,     4,
     115,    21,   369,   376,    -1,     4,   115,   242,   369,   378,
      -1,     4,   131,    -1,     4,   152,    -1,     4,   175,    27,
      -1,     4,   175,   170,   369,   378,    -1,     4,   175,   228,
     369,   376,   377,    -1,     4,   184,   170,   359,   369,   378,
      -1,     4,   230,   123,    -1,     4,   228,   266,    -1,     4,
     228,   273,    -1,     4,   236,   228,   369,   376,   377,    -1,
       4,   236,   170,   369,   378,    -1,     4,   236,   294,   369,
     378,    -1,     4,   237,    -1,     4,   237,   518,    -1,     4,
     252,   132,    -1,     4,   252,   170,   369,   378,    -1,     4,
     252,   228,   369,   376,   377,    -1,     4,   252,   286,    -1,
       4,   263,    -1,     4,   288,    -1,     4,   288,     4,    -1,
       4,   290,    -1,     4,   290,   251,    -1,     4,   300,    -1,
       4,   310,    27,    -1,     4,   310,   170,   369,   378,    -1,
       4,   310,   228,   369,   376,   377,    -1,     4,   344,    -1,
     152,   508,    -1,   152,   211,    -1,   211,    -1,   230,   262,
     359,   359,    -1,   262,   262,   359,   359,    -1,   235,    -1,
     237,   518,    -1,   263,   509,    -1,   263,   211,    -1,   270,
     510,    -1,     5,    67,    -1,     5,   131,    -1,     5,   157,
      -1,     5,   237,   518,    -1,     5,   288,    -1,     5,   288,
     211,    -1,   288,    17,    -1,   288,   100,   199,    -1,   344,
      -1,    30,    -1,   242,    -1,   163,    -1,   216,    -1,    -1,
     359,   359,    -1,    -1,   359,   359,    -1,    -1,   290,    -1,
      -1,    -1,   229,    -1,   244,    -1,   306,    -1,    58,    -1,
     133,    -1,   505,   369,   376,   377,   361,   520,   526,    -1,
     263,   505,   369,   376,   377,   361,   520,   526,    -1,   505,
       5,    -1,   505,     5,   369,   376,    -1,   505,     4,    -1,
     505,     4,   369,   376,    -1,   126,     5,     5,   503,     4,
       5,    -1,   359,   359,    -1,   135,    -1,    36,    -1,    40,
     359,   359,    -1,   197,   359,   359,    -1,   113,    -1,   296,
     369,   376,   368,    -1,   516,   517,    -1,   517,    -1,   518,
     356,   361,    -1,    67,   356,     5,    -1,    94,   356,     4,
       4,    -1,   344,   356,     4,    -1,   131,   356,     5,    -1,
     290,   356,     5,    -1,   529,    -1,   530,    -1,   206,    -1,
     263,    -1,   152,    -1,    93,    -1,   128,    -1,   107,    -1,
     198,    -1,   251,    -1,   101,    -1,   160,    -1,   279,    -1,
     511,    -1,   511,   516,    -1,    -1,    -1,   521,   524,    -1,
      17,    -1,   215,   359,   359,    -1,   297,    -1,   297,   359,
     359,    -1,   361,    -1,   290,   361,    -1,   524,   525,    -1,
     525,    -1,   518,   356,   361,    -1,    -1,    -1,   527,   528,
      -1,   528,   529,    -1,   529,    -1,   288,   356,     5,    -1,
      56,   356,   499,     5,     5,    -1,    65,    -1,    67,     5,
      -1,   185,   372,    -1,   243,   359,   359,    -1,   286,   369,
      -1,   295,   359,    -1,    46,   373,    -1,   185,     4,    -1,
     355,    -1,   353,    -1,   347,    -1,   206,    -1,   359,   359,
     359,   359,    -1,   359,   359,    -1,   371,   359,   359,    -1,
     369,   376,   368,    -1,   296,   534,    -1,    39,   359,   359,
      -1,   197,   535,    -1,   235,   361,    -1,   359,   359,    -1,
     371,   359,   359,    -1,   369,   376,   368,    -1,    40,   359,
     359,    -1,   359,   359,    -1,   113,   359,   359,    -1,   361,
      -1,   315,   370,   376,    -1,     5,     4,     4,    -1,   305,
      -1,    71,   539,    -1,   171,     4,    -1,   248,     4,    -1,
     257,   359,    -1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,    -1,     4,     4,     4,     4,     4,     4,    -1,
      55,    -1,   143,    -1,   249,    -1,    91,    -1,   152,   541,
      -1,   263,   542,    -1,    40,   359,   359,    -1,   197,   359,
     359,    -1,   113,    -1,   268,   113,    -1,    40,   359,   359,
      -1,   197,   359,   359,    -1,   113,    -1,   268,   113,    -1,
     192,    -1,    13,    -1,   206,    -1,    34,    -1,   109,    -1,
      62,     5,    -1,   286,   369,    -1,   309,     4,     4,     4,
      -1,   359,    -1,   359,    99,    -1,   197,   547,    -1,   296,
     359,    -1,   296,   359,    99,    -1,    40,    -1,   359,    -1,
     113,    -1,    26,   549,    -1,   126,   551,    -1,   210,   561,
      -1,   114,   562,    -1,   223,     5,    -1,   122,     5,   386,
      -1,    62,     5,   386,    -1,   277,     4,   386,    -1,   249,
      88,   550,    -1,   122,     5,   386,    -1,    62,     5,   386,
      -1,   277,     4,   386,    -1,   552,    -1,   159,   552,    -1,
     287,   553,    -1,   274,   554,    -1,   119,    88,   555,    -1,
     195,   556,    -1,   249,   159,   558,    -1,   249,    88,   559,
      -1,   246,   560,    -1,   122,     5,    -1,    62,     5,    -1,
     277,     4,    -1,   122,     5,    -1,    62,     5,    -1,   277,
       4,    -1,   122,     5,    -1,    62,     5,    -1,   277,     4,
      -1,   122,     5,    -1,    62,     5,    -1,   277,     4,    -1,
     159,   557,    -1,   122,     5,     4,    -1,    62,     5,     4,
      -1,   277,     4,     4,    -1,   122,     5,    -1,    62,     5,
      -1,   277,     4,    -1,   122,     5,    -1,    62,     5,    -1,
     277,     4,    -1,   122,     5,    -1,    62,     5,    -1,   277,
       4,    -1,   122,     5,    -1,    62,     5,    -1,   277,     4,
      -1,   122,     5,   386,    -1,    62,     5,   386,    -1,   277,
       4,   386,    -1,   122,     5,     5,   386,    -1,   564,     4,
       4,   359,   359,   364,    -1,   564,     4,    -1,   101,    -1,
      51,    -1,   298,    -1,   139,    -1,   110,    -1,    -1,     4,
     359,   359,   359,   359,    -1,   209,    -1,   209,     4,   359,
     359,   359,   359,    -1,   126,   274,   566,    -1,     4,    -1,
       4,     4,    -1,   359,   369,    -1,   359,   359,    -1,   296,
     359,   359,    -1,   370,   376,   377,    -1,    16,   571,    -1,
     247,     4,    -1,   245,   570,    -1,    23,   569,    -1,     4,
       4,    -1,     4,     5,    -1,   290,     4,     5,    -1,     4,
       4,    -1,     4,     5,    -1,   290,     4,     5,    -1,     4,
      -1,     4,   370,   376,    -1,     4,     6,   370,   376,    -1,
     234,    -1,   359,   359,    -1,   359,   359,    12,   359,   359,
      -1,   359,   359,    12,   371,   359,   359,    -1,   359,   359,
      12,   369,   376,   368,    -1,   296,   574,    -1,   125,    -1,
     125,   359,    -1,   359,   359,    -1,   359,   359,    12,   359,
     359,    -1,   359,   359,    12,   371,   359,   359,    -1,   359,
     359,    12,   369,   376,   368,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   463,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   518,   519,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   536,
     538,   539,   540,   541,   543,   544,   545,   546,   549,   550,
     551,   552,   553,   556,   557,   560,   561,   562,   565,   568,
     571,   574,   586,   593,   600,   608,   609,   610,   611,   612,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,   627,   628,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   645,   646,
     649,   650,   651,   652,   653,   654,   657,   658,   659,   660,
     661,   664,   665,   666,   667,   668,   669,   670,   671,   674,
     675,   676,   677,   678,   681,   682,   683,   684,   685,   686,
     687,   688,   691,   692,   693,   696,   697,   698,   699,   702,
     703,   704,   707,   708,   709,   712,   713,   714,   717,   718,
     719,   720,   721,   722,   723,   724,   727,   728,   731,   732,
     733,   734,   735,   736,   739,   740,   741,   744,   745,   746,
     747,   748,   749,   752,   753,   754,   755,   756,   757,   758,
     759,   763,   764,   767,   768,   771,   772,   775,   776,   780,
     781,   782,   783,   784,   785,   786,   787,   790,   791,   794,
     795,   796,   798,   800,   801,   802,   804,   808,   809,   812,
     813,   815,   818,   820,   826,   827,   828,   831,   832,   833,
     836,   837,   838,   839,   840,   841,   842,   848,   849,   852,
     853,   854,   855,   856,   859,   860,   861,   864,   865,   870,
     875,   882,   884,   886,   887,   888,   891,   893,   896,   897,
     900,   901,   902,   903,   904,   907,   909,   911,   916,   921,
     924,   925,   928,   929,   930,   937,   938,   939,   940,   943,
     944,   947,   948,   951,   952,   955,   957,   961,   962,   965,
     967,   968,   969,   970,   973,   974,   976,   977,   978,   981,
     983,   985,   986,   988,   990,   992,   994,   998,  1001,  1002,
    1003,  1006,  1009,  1010,  1011,  1012,  1013,  1014,  1015,  1016,
    1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,
    1027,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,
    1038,  1040,  1041,  1042,  1043,  1044,  1045,  1046,  1048,  1050,
    1051,  1054,  1055,  1056,  1057,  1058,  1059,  1060,  1061,  1064,
    1065,  1066,  1069,  1072,  1073,  1075,  1077,  1078,  1079,  1080,
    1081,  1082,  1089,  1090,  1093,  1094,  1095,  1098,  1099,  1102,
    1105,  1106,  1108,  1112,  1113,  1114,  1117,  1121,  1123,  1124,
    1125,  1126,  1127,  1128,  1129,  1130,  1131,  1134,  1135,  1136,
    1139,  1140,  1143,  1145,  1153,  1155,  1157,  1161,  1162,  1164,
    1167,  1170,  1171,  1175,  1177,  1180,  1185,  1186,  1187,  1191,
    1192,  1193,  1196,  1197,  1198,  1201,  1202,  1204,  1205,  1206,
    1207,  1208,  1209,  1210,  1211,  1212,  1213,  1215,  1216,  1219,
    1220,  1223,  1224,  1225,  1226,  1229,  1230,  1233,  1235,  1238,
    1242,  1243,  1244,  1246,  1248,  1252,  1253,  1254,  1257,  1258,
    1259,  1260,  1261,  1262,  1263,  1266,  1269,  1270,  1271,  1274,
    1275,  1276,  1277,  1278,  1279,  1282,  1283,  1284,  1285,  1286,
    1287,  1288,  1291,  1292,  1295,  1296,  1299,  1300,  1303,  1304,
    1307,  1308,  1309,  1312,  1313,  1316,  1317,  1320,  1323,  1331,
    1332,  1335,  1336,  1337,  1338,  1339,  1340,  1341,  1342,  1343,
    1344,  1345,  1346,  1347,  1348,  1349,  1350,  1351,  1354,  1357,
    1358,  1361,  1362,  1363,  1364,  1367,  1368,  1369,  1370,  1373,
    1374,  1375,  1376,  1377,  1378,  1381,  1382,  1383,  1384,  1385,
    1386,  1388,  1389,  1394,  1395,  1398,  1400,  1402,  1405,  1406,
    1407,  1408,  1409,  1410,  1413,  1415,  1417,  1419,  1420,  1422,
    1424,  1426,  1428,  1430,  1433,  1434,  1435,  1436,  1437,  1438,
    1440,  1441,  1442,  1445,  1448,  1450,  1452,  1454,  1456,  1458,
    1460,  1462,  1465,  1467,  1469,  1471,  1472,  1473,  1474,  1475,
    1478,  1479,  1480,  1481,  1482,  1483,  1484,  1486,  1488,  1489,
    1490,  1493,  1494,  1495,  1496,  1497,  1498,  1500,  1501,  1502,
    1505,  1506,  1507,  1508,  1509,  1512,  1515,  1518,  1521,  1524,
    1527,  1530,  1533,  1536,  1541,  1544,  1547,  1550,  1553,  1556,
    1559,  1562,  1565,  1568,  1571,  1576,  1579,  1582,  1585,  1588,
    1591,  1594,  1597,  1600,  1605,  1607,  1609,  1611,  1613,  1615,
    1620,  1622,  1624,  1628,  1631,  1634,  1637,  1640,  1643,  1646,
    1649,  1652,  1655,  1658,  1663,  1664,  1665,  1666,  1667,  1668,
    1669,  1671,  1673,  1674,  1675,  1678,  1679,  1680,  1681,  1682,
    1683,  1685,  1686,  1687,  1690,  1692,  1694,  1695,  1697,  1699,
    1703,  1704,  1707,  1708,  1709,  1712,  1719,  1720,  1721,  1722,
    1723,  1724,  1725,  1728,  1736,  1737,  1738,  1739,  1741,  1743,
    1744,  1744,  1745,  1746,  1747,  1748,  1749,  1750,  1752,  1753,
    1755,  1758,  1761,  1762,  1763,  1766,  1769,  1772,  1773,  1777,
    1780,  1783,  1786,  1790,  1795,  1800,  1802,  1803,  1805,  1806,
    1808,  1810,  1812,  1814,  1815,  1817,  1819,  1823,  1828,  1830,
    1832,  1834,  1836,  1838,  1840,  1842,  1844,  1846,  1848,  1851,
    1852,  1854,  1856,  1857,  1859,  1861,  1862,  1863,  1865,  1867,
    1868,  1869,  1871,  1872,  1873,  1876,  1880,  1883,  1886,  1890,
    1895,  1901,  1902,  1903,  1905,  1906,  1910,  1912,  1913,  1914,
    1917,  1920,  1923,  1925,  1927,  1928,  1933,  1936,  1937,  1938,
    1941,  1945,  1946,  1948,  1949,  1950,  1952,  1953,  1955,  1956,
    1961,  1963,  1964,  1966,  1967,  1968,  1969,  1970,  1971,  1973,
    1975,  1977,  1978,  1980,  1981,  1983,  1985,  1986,  1987,  1988,
    1989,  1990,  1991,  1992,  1993,  1994,  1995,  1997,  1999,  2000,
    2001,  2002,  2004,  2005,  2006,  2007,  2008,  2010,  2011,  2012,
    2013,  2014,  2015,  2018,  2019,  2020,  2021,  2022,  2023,  2024,
    2025,  2026,  2027,  2028,  2029,  2030,  2031,  2032,  2033,  2034,
    2035,  2036,  2037,  2038,  2041,  2042,  2043,  2044,  2045,  2046,
    2054,  2061,  2070,  2079,  2086,  2093,  2101,  2109,  2116,  2121,
    2126,  2131,  2136,  2141,  2146,  2152,  2162,  2172,  2182,  2189,
    2199,  2209,  2218,  2230,  2243,  2248,  2251,  2253,  2255,  2260,
    2264,  2267,  2269,  2271,  2274,  2275,  2276,  2277,  2278,  2279,
    2280,  2283,  2284,  2285,  2286,  2287,  2288,  2290,  2292,  2294,
    2296,  2298,  2300,  2303,  2304,  2305,  2306,  2308,  2311,  2312,
    2314,  2316,  2317,  2318,  2320,  2323,  2326,  2327,  2329,  2330,
    2331,  2332,  2334,  2335,  2336,  2337,  2338,  2340,  2342,  2343,
    2345,  2348,  2349,  2350,  2352,  2354,  2355,  2356,  2357,  2359,
    2362,  2366,  2367,  2368,  2369,  2372,  2375,  2377,  2378,  2379,
    2380,  2382,  2385,  2386,  2388,  2389,  2390,  2391,  2392,  2394,
    2395,  2397,  2400,  2401,  2402,  2403,  2404,  2406,  2408,  2409,
    2410,  2411,  2413,  2415,  2416,  2417,  2418,  2419,  2420,  2422,
    2423,  2425,  2428,  2429,  2430,  2431,  2434,  2435,  2438,  2439,
    2442,  2443,  2446,  2459,  2460,  2464,  2465,  2469,  2470,  2473,
    2478,  2485,  2487,  2490,  2492,  2495,  2499,  2500,  2501,  2502,
    2503,  2504,  2505,  2509,  2510,  2513,  2514,  2515,  2516,  2517,
    2518,  2519,  2520,  2523,  2524,  2525,  2526,  2527,  2528,  2529,
    2530,  2531,  2532,  2533,  2536,  2537,  2540,  2541,  2541,  2544,
    2545,  2546,  2547,  2550,  2551,  2554,  2555,  2558,  2562,  2563,
    2563,  2566,  2567,  2570,  2573,  2577,  2578,  2579,  2580,  2581,
    2582,  2583,  2584,  2590,  2591,  2592,  2593,  2596,  2598,  2599,
    2604,  2606,  2607,  2608,  2609,  2612,  2613,  2618,  2622,  2623,
    2624,  2627,  2628,  2633,  2634,  2637,  2639,  2640,  2641,  2646,
    2648,  2654,  2655,  2656,  2657,  2660,  2661,  2664,  2666,  2668,
    2669,  2672,  2674,  2675,  2676,  2679,  2680,  2683,  2684,  2685,
    2688,  2689,  2690,  2693,  2694,  2695,  2696,  2697,  2700,  2701,
    2702,  2705,  2706,  2707,  2708,  2709,  2712,  2714,  2716,  2718,
    2721,  2723,  2725,  2728,  2729,  2730,  2731,  2732,  2733,  2734,
    2735,  2736,  2739,  2740,  2741,  2744,  2745,  2746,  2749,  2750,
    2751,  2754,  2755,  2756,  2759,  2760,  2761,  2762,  2765,  2766,
    2767,  2770,  2771,  2772,  2775,  2776,  2777,  2780,  2781,  2782,
    2785,  2787,  2789,  2793,  2797,  2799,  2804,  2807,  2808,  2809,
    2810,  2813,  2814,  2816,  2817,  2819,  2822,  2823,  2824,  2827,
    2828,  2831,  2833,  2834,  2835,  2836,  2839,  2840,  2841,  2844,
    2845,  2846,  2849,  2850,  2855,  2859,  2866,  2867,  2869,  2874,
    2876,  2879,  2880,  2881,  2882,  2884,  2889
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
  "RESAMPLE_", "RESET_", "RESOLUTION_", "RGB_", "ROOT_", "ROTATE_",
  "RULER_", "SAMPLE_", "SAOIMAGE_", "SAOTNG_", "SAVE_", "SCALE_", "SCAN_",
  "SCIENTIFIC_", "SCOPE_", "SCREEN_", "SEGMENT_", "SELECT_", "SET_",
  "SEXAGESIMAL_", "SHAPE_", "SHARED_", "SHIFT_", "SHMID_", "SHOW_",
  "SIGMA_", "SINH_", "SIZE_", "SLICE_", "SMMAP_", "SMOOTH_", "SOCKET_",
  "SOCKETGZ_", "SOURCE_", "SQRT_", "SQUARED_", "SSHARED_", "STATS_",
  "STATUS_", "SUM_", "SYSTEM_", "TABLE_", "TAG_", "TEMPLATE_", "TEXT_",
  "THREADS_", "THREED_", "THRESHOLD_", "THICK_", "TRANSPARENCY_", "TO_",
  "TOGGLE_", "TOPHAT_", "TRUE_", "TYPE_", "UNDO_", "UNHIGHLITE_",
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
     605,   606,   607,    89,    78,    88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   357,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   359,   359,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   362,   362,
     362,   362,   362,   363,   363,   364,   364,   364,   365,   366,
     367,   368,   368,   368,   368,   369,   369,   369,   369,   369,
     370,   370,   370,   370,   370,   370,   370,   370,   370,   370,
     370,   370,   370,   370,   370,   370,   370,   370,   370,   370,
     370,   370,   370,   370,   370,   370,   370,   370,   371,   371,
     372,   372,   372,   372,   372,   372,   373,   373,   373,   373,
     373,   374,   374,   374,   374,   374,   374,   374,   374,   375,
     375,   375,   375,   375,   376,   376,   376,   376,   376,   376,
     376,   376,   377,   377,   377,   378,   378,   378,   378,   379,
     379,   379,   380,   380,   380,   381,   381,   381,   382,   382,
     382,   382,   382,   382,   382,   382,   383,   383,   384,   384,
     384,   384,   384,   384,   385,   385,   385,   386,   386,   386,
     386,   386,   386,   387,   387,   387,   387,   387,   387,   387,
     387,   388,   388,   389,   389,   390,   390,   391,   391,   392,
     392,   392,   392,   392,   392,   392,   392,   393,   393,   394,
     394,   394,   394,   394,   394,   394,   394,   395,   395,   396,
     396,   396,   396,   396,   397,   397,   397,   398,   398,   398,
     399,   399,   399,   399,   399,   399,   399,   400,   400,   401,
     401,   401,   401,   401,   402,   402,   402,   403,   403,   403,
     403,   404,   404,   404,   404,   404,   405,   405,   406,   406,
     407,   407,   407,   407,   407,   408,   408,   408,   408,   408,
     409,   409,   410,   410,   410,   411,   411,   411,   411,   412,
     412,   413,   413,   414,   414,   415,   415,   416,   416,   416,
     416,   416,   416,   416,   417,   417,   417,   417,   417,   418,
     418,   418,   418,   418,   418,   418,   418,   419,   420,   420,
     420,   421,   422,   422,   422,   422,   422,   422,   422,   422,
     422,   422,   422,   422,   422,   422,   422,   422,   422,   422,
     422,   422,   422,   422,   422,   422,   422,   422,   422,   422,
     422,   422,   422,   422,   422,   422,   422,   422,   422,   422,
     422,   423,   423,   423,   423,   423,   423,   423,   423,   424,
     424,   424,   425,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   427,   427,   428,   428,   428,   429,   429,   430,
     431,   431,   431,   432,   432,   432,   433,   434,   434,   434,
     434,   434,   434,   434,   434,   434,   434,   435,   435,   435,
     436,   436,   437,   437,   438,   438,   438,   439,   439,   439,
     440,   441,   441,   442,   442,   442,   443,   443,   443,   444,
     444,   444,   445,   445,   445,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   447,
     447,   448,   448,   448,   448,   449,   449,   450,   450,   450,
     451,   451,   451,   451,   451,   452,   452,   452,   453,   453,
     453,   453,   453,   453,   453,   454,   455,   455,   455,   456,
     456,   456,   456,   456,   456,   457,   457,   457,   457,   457,
     457,   457,   458,   458,   459,   459,   460,   460,   461,   461,
     462,   462,   462,   463,   463,   464,   464,   465,   465,   466,
     466,   467,   467,   467,   467,   467,   467,   467,   467,   467,
     467,   467,   467,   467,   467,   467,   467,   467,   468,   469,
     469,   470,   470,   470,   470,   471,   471,   471,   471,   472,
     472,   472,   472,   472,   472,   473,   473,   473,   473,   473,
     473,   473,   473,   474,   474,   475,   475,   475,   476,   476,
     476,   476,   476,   476,   477,   477,   477,   477,   477,   477,
     477,   477,   477,   477,   478,   478,   478,   478,   478,   478,
     478,   478,   478,   479,   480,   480,   480,   480,   480,   480,
     480,   480,   480,   480,   480,   480,   480,   480,   480,   480,
     481,   481,   481,   481,   481,   481,   481,   481,   481,   481,
     481,   482,   482,   482,   482,   482,   482,   482,   482,   482,
     483,   483,   483,   483,   483,   484,   484,   484,   484,   484,
     484,   484,   484,   484,   485,   485,   485,   485,   485,   485,
     485,   485,   485,   485,   485,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   487,   487,   487,   487,   487,   487,
     487,   487,   487,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   491,   491,   491,   491,   491,   491,
     492,   492,   493,   493,   493,   494,   495,   495,   495,   495,
     495,   495,   495,   496,   497,   497,   497,   497,   497,   497,
     498,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   500,   500,   500,   500,   500,   500,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   502,   502,   502,   502,
     503,   504,   504,   504,   505,   505,   505,   505,   505,   505,
     505,   506,   506,   506,   506,   506,   506,   506,   506,   506,
     506,   506,   506,   506,   506,   506,   506,   506,   506,   506,
     506,   506,   506,   506,   506,   506,   506,   506,   506,   506,
     506,   506,   506,   506,   506,   506,   506,   506,   506,   506,
     506,   506,   506,   506,   506,   506,   506,   506,   506,   506,
     506,   506,   506,   506,   506,   506,   506,   506,   506,   506,
     506,   506,   506,   506,   506,   506,   506,   506,   506,   506,
     506,   506,   506,   506,   506,   506,   506,   506,   506,   506,
     506,   506,   506,   506,   506,   506,   506,   506,   506,   506,
     506,   506,   507,   507,   507,   507,   508,   508,   509,   509,
     510,   510,   511,   512,   512,   512,   512,   512,   512,   513,
     513,   514,   514,   514,   514,   514,   515,   515,   515,   515,
     515,   515,   515,   516,   516,   517,   517,   517,   517,   517,
     517,   517,   517,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   519,   519,   520,   521,   520,   522,
     522,   522,   522,   523,   523,   524,   524,   525,   526,   527,
     526,   528,   528,   529,   530,   531,   531,   531,   531,   531,
     531,   531,   531,   532,   532,   532,   532,   533,   533,   533,
     533,   533,   533,   533,   533,   534,   534,   534,   535,   535,
     535,   536,   536,   536,   536,   537,   537,   537,   537,   538,
     538,   539,   539,   539,   539,   540,   540,   541,   541,   541,
     541,   542,   542,   542,   542,   543,   543,   544,   544,   544,
     545,   545,   545,   546,   546,   546,   546,   546,   547,   547,
     547,   548,   548,   548,   548,   548,   549,   549,   549,   549,
     550,   550,   550,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   552,   552,   552,   553,   553,   553,   554,   554,
     554,   555,   555,   555,   556,   556,   556,   556,   557,   557,
     557,   558,   558,   558,   559,   559,   559,   560,   560,   560,
     561,   561,   561,   562,   563,   563,   563,   564,   564,   564,
     564,   565,   565,   565,   565,   565,   566,   566,   566,   567,
     567,   568,   568,   568,   568,   568,   569,   569,   569,   570,
     570,   570,   571,   571,   571,   572,   573,   573,   573,   573,
     573,   574,   574,   574,   574,   574,   574
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
       1,     1,     1,     1,     2,     2,     2,     3,     2,     2,
       2,     6,    10,     1,     2,     1,     6,    10,     1,     2,
       2,     2,     2,     2,     2,    13,    13,    12,    12,     1,
       0,     1,     1,     4,     6,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     3,     4,     0,     6,     8,
       2,     3,     3,     3,     0,     4,     4,     4,     4,     3,
       3,     1,     3,     5,     4,     4,     3,     2,     0,     1,
       1,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     2,     4,
       9,     2,     2,     2,     1,     3,     2,     2,     1,     2,
       8,     2,     1,     2,     1,     2,     1,     4,     9,     2,
       1,     1,     1,     1,     2,     1,     1,     2,     1,     0,
       2,     2,     1,     0,     2,     2,     1,     1,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     0,     1,     2,
       1,     4,     5,     0,     2,     1,     5,     2,     2,     1,
       1,     1,     2,     1,     2,     1,     1,     0,     1,     1,
       0,     1,     5,     6,     3,     6,     3,     1,     3,     1,
       1,     1,     3,     6,     7,     5,     1,     1,     4,     5,
       1,     3,     0,     1,     2,     1,     4,     1,     2,     1,
       2,     3,     2,     1,     2,     1,     4,     2,     1,     1,
       3,     1,     2,     3,     2,     0,     1,     1,     4,     2,
       0,     1,     3,     4,     4,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     1,     2,     2,     2,     2,     1,
       1,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     2,     2,     0,     1,     2,     1,     6,     5,     1,
       1,     1,     2,     2,     1,     1,     1,     1,     2,     1,
       1,     1,     2,     1,     1,     1,     2,     2,     2,     0,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     1,     2,     3,     1,     2,     2,     4,
       6,     1,    10,     1,     2,     3,     3,     2,     2,     2,
       2,     2,     2,     2,     4,     4,     4,     3,     3,     5,
       4,     4,     4,     3,     3,     3,     3,     2,     2,     4,
       3,     3,     3,     3,     4,     4,     4,     4,     5,     4,
       6,     7,     4,     4,     5,     2,     3,     3,     3,     2,
       3,     3,     3,     3,     4,     3,     5,     6,     3,     3,
       4,     3,     3,     3,     3,     3,     5,     3,     3,     4,
       3,     2,     2,     1,     3,     4,     4,     4,     4,     4,
       6,     4,     4,     5,     4,     4,     4,     4,     5,     4,
       6,     7,     4,     4,     5,     5,     5,     5,     5,     5,
       7,     5,     5,     6,     4,     4,     4,     4,     4,     6,
       4,     4,     5,     5,     5,     5,     5,     6,     5,     7,
       8,     5,     5,     6,     3,     3,     3,     3,     4,     3,
       5,     6,     3,     3,     4,     3,     3,     3,     3,     3,
       5,     3,     3,     4,     4,     4,     3,     5,     4,     4,
       2,     3,     6,     6,     1,     1,     1,     2,     2,     2,
       3,     3,     2,    12,     2,     2,     1,     3,     4,     2,
       0,     3,     1,     1,     2,     2,     2,     2,     2,     4,
       4,     4,     3,     4,     5,     8,     6,     4,     9,     6,
       7,    10,    11,    12,     9,     5,     4,     6,     3,     5,
       5,     6,     5,     4,     9,    10,    11,     9,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     7,     7,     2,
       4,     4,     4,     4,     5,     4,     4,     5,     5,     3,
       4,     4,     4,     4,     7,     9,     6,    10,    11,    12,
       9,     3,     2,     3,     5,     7,     4,     3,     3,     6,
       7,     7,     4,     4,     4,     9,     4,     3,     4,     7,
       7,     2,     3,     3,     3,     4,     2,     2,     4,    10,
       3,     1,     3,     2,     2,     2,     2,     3,     5,     4,
       5,     2,     7,     3,     2,     2,     3,     2,     2,     2,
       3,     2,     3,     4,     3,     3,     6,     4,     2,     3,
       2,     2,     4,     3,     3,     2,     3,     1,     2,     1,
       2,     2,     2,     1,     1,     1,     1,     2,     1,     2,
       2,     1,     2,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     2,     2,     2,     3,
       5,     7,     7,     6,     6,     6,     6,     5,     6,     6,
       6,     6,     6,     6,     6,    11,     7,     7,     7,     9,
       9,    10,    12,    12,     2,     2,     3,     4,     4,     4,
       2,     4,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     3,     3,     8,     6,    10,
       7,     7,     5,     2,     2,     3,     4,     5,     3,     5,
       5,     3,     4,     5,     5,     5,     3,     5,     2,     3,
       3,     5,     3,     3,     3,     4,     5,     5,     3,     5,
       5,     3,     4,     5,     5,     2,     2,     3,     5,     6,
       6,     3,     3,     3,     6,     5,     5,     2,     3,     3,
       5,     6,     3,     2,     2,     3,     2,     3,     2,     3,
       5,     6,     2,     2,     2,     1,     4,     4,     1,     2,
       2,     2,     2,     2,     2,     2,     3,     2,     3,     2,
       3,     1,     1,     1,     1,     1,     0,     2,     0,     2,
       0,     1,     0,     0,     1,     1,     1,     1,     1,     7,
       8,     2,     4,     2,     4,     6,     2,     1,     1,     3,
       3,     1,     4,     2,     1,     3,     3,     4,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     0,     0,     2,     1,
       3,     1,     3,     1,     2,     2,     1,     3,     0,     0,
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
       2,     3,     1,     3,     4,     1,     2,     5,     6,     6,
       2,     1,     2,     2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     7,     8,     0,     0,     0,     0,
       0,   307,     0,     0,     0,     0,     0,     0,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,  1043,     0,
       0,     0,     0,     0,     0,     0,     0,  1043,    39,     0,
       0,     0,    44,     0,     0,     0,    48,  1231,    50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,    55,    56,     0,   244,     6,     0,
       0,     0,     0,     0,     0,     9,     0,     0,   273,   275,
       0,     0,    11,   146,   148,   141,   142,   143,   147,   144,
     145,   278,    12,     0,   290,     0,     0,     0,    13,     0,
       0,     0,     0,   314,     0,    14,    69,    98,     0,   128,
      97,    77,    95,     0,    74,    76,    72,   129,    96,    73,
       0,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,    70,
      71,    75,   321,   154,    99,     0,    15,     0,    16,    17,
       0,     0,     0,     0,     0,     0,    58,    57,     0,     0,
       0,     0,     2,     0,    18,     0,     0,     0,   383,   397,
       0,   403,     0,     0,     0,     0,     0,     0,     0,   346,
       0,   475,     0,     0,     0,     0,     0,  1043,     0,   354,
       0,   358,     0,     0,     0,   362,     0,   364,     0,   366,
       0,     0,   510,   370,    19,     0,   516,    20,   521,     0,
     539,   524,   525,   526,   527,   541,   529,   530,   534,   531,
       0,   533,   535,     0,     0,    21,    23,     0,   556,     0,
       0,     0,   561,     0,    24,     0,     0,     0,     0,     0,
       0,     0,    26,   715,    27,     0,     0,     0,     0,     0,
       0,   716,    28,     0,    29,  1047,  1048,  1044,  1045,  1046,
       0,   136,  1105,     0,   130,     0,     0,     0,    31,     0,
    1116,  1115,  1114,  1113,    33,     0,     0,     0,     0,     0,
     154,     0,    34,     0,  1134,     0,  1131,    35,     0,     0,
       0,     0,    38,     0,    37,    36,     0,     0,     0,     0,
      41,     0,     0,  1163,    42,     0,     0,     0,     0,     0,
      43,  1227,  1226,  1230,  1229,  1228,    45,     0,    46,     0,
       0,     0,     0,     0,     0,     0,     0,    47,     0,     0,
    1233,    49,     0,     0,    51,     0,     0,     0,     0,   154,
      52,  1255,    53,     0,     0,    54,     1,     4,     5,   227,
       0,   219,     0,     0,   221,     0,   229,   222,   226,   237,
     238,   223,   239,     0,   225,   247,   248,   246,   245,     0,
       0,     0,   252,   260,   263,   262,   261,   259,   251,   256,
     257,   258,   250,     0,     0,     0,     0,     0,     0,   255,
      10,     0,     0,     0,   274,     0,   279,     0,   289,   280,
     291,   281,   292,   282,   303,   283,     0,     0,   284,     0,
      88,    89,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   310,     0,     0,     0,     0,     0,
     156,   161,   155,   157,   160,   159,   158,     0,     0,   327,
      63,    64,    65,    66,    67,    59,    60,    61,    68,    62,
       0,   332,     0,   379,   375,   371,   372,   376,   373,   378,
     333,   382,   334,   295,   387,   391,   386,   298,   297,   296,
       0,     0,   335,   398,   337,     0,   336,     0,   405,   338,
     417,   409,   420,   410,   411,   413,     0,   415,   416,   154,
     339,     0,     0,   340,     0,     0,   154,   341,   429,   154,
     427,   342,   430,   344,   154,   431,   343,     0,   154,     0,
     345,   449,     0,   447,   465,     0,     0,     0,   453,   445,
       0,   455,   470,   458,   347,   476,   477,   348,     0,     0,
       0,   440,     0,   351,   436,   437,     0,   352,   353,     0,
     484,   478,   483,   479,   480,   481,   482,   356,   357,   485,
     359,     0,   486,   487,   488,   361,   494,   489,   490,   492,
     363,   500,   502,   504,   506,   499,   501,   508,   365,     0,
       0,   513,     0,   369,   154,   515,     0,   522,   540,   523,
     542,   543,   544,   528,   545,   547,   546,   548,   532,   536,
     553,     0,     0,     0,     0,   549,   537,     0,     0,   558,
     557,     0,     0,     0,     0,    25,     0,     0,   568,     0,
     569,     0,     0,     0,     0,     0,   570,     0,   714,     0,
     571,     0,   572,     0,     0,   573,     0,   719,   718,   717,
       0,   722,     0,     0,     0,   894,     0,     0,     0,   726,
     730,   732,   733,     0,     0,     0,     0,   831,     0,     0,
       0,   867,     0,     0,     0,     0,     0,     0,     0,   869,
       0,     0,     0,    30,   139,   140,   138,   137,  1111,  1106,
    1112,   133,   134,   132,   135,   131,  1107,     0,  1109,  1110,
      32,     0,     0,     0,     0,  1123,  1124,     0,   154,     0,
    1121,  1118,     0,     0,     0,   154,  1141,  1144,  1142,  1143,
    1135,  1136,  1137,  1138,     0,     0,     0,    40,  1160,  1161,
       0,  1168,  1170,  1169,  1165,  1166,  1164,     0,     0,     0,
       0,  1171,     0,  1174,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1172,  1183,     0,     0,     0,  1173,
    1175,  1225,  1158,  1159,  1157,   208,     0,   211,   204,     0,
     213,   205,     0,   215,   206,  1156,  1155,   207,   209,   210,
       0,     0,   203,     0,     0,     0,     0,  1239,  1252,  1242,
       0,     0,  1245,     0,     0,  1244,  1243,   162,  1261,     0,
    1260,  1256,   228,   224,     0,   233,     0,   230,     0,   249,
     149,   152,   153,   151,   150,   264,   265,   266,   254,   253,
     268,   270,   269,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   154,     0,   311,    94,    91,    92,    93,   154,
     313,   312,     0,     0,     0,     0,     0,     0,     0,   326,
       0,   322,   320,   319,   331,   374,     0,     0,   377,   392,
     393,   388,   389,   394,   396,   395,   390,   299,   300,   385,
     384,   400,   399,     0,   404,   418,   419,   408,   421,   414,
     412,   407,     0,     0,   154,   154,   162,   162,   162,   154,
       0,     0,   154,   466,   448,   459,     0,   450,    78,   461,
       0,     0,   452,   454,   154,   471,     0,     0,   457,     0,
       0,     0,   442,     0,     0,     0,     0,   942,   944,   943,
       0,  1036,     0,  1015,     0,  1018,     0,     0,  1038,  1040,
       0,  1031,   355,     0,   491,   493,   503,   496,   505,   497,
     507,   498,   509,   495,     0,     0,   514,   511,   512,   162,
     538,   550,   551,   552,   554,     0,   567,   555,     0,     0,
       0,     0,     0,     0,   175,   175,   169,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   172,   172,   169,     0,
       0,   169,     0,     0,     0,     0,     0,   609,   633,     0,
       0,     0,   605,     0,     0,     0,     0,   175,   169,     0,
       0,   710,     0,   720,   721,   154,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   779,
       0,     0,     0,     0,     0,   802,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   821,     0,     0,   826,   827,
       0,     0,     0,   847,   849,   848,     0,   851,     0,     0,
     858,   860,   861,   895,     0,     0,     0,     0,   724,   725,
     936,   934,   939,   938,   937,   935,   940,     0,   729,     0,
     734,     0,   933,     0,   735,   736,   737,   738,     0,     0,
       0,     0,     0,   833,     0,     0,   834,  1058,     0,  1061,
    1057,     0,     0,     0,   835,   868,   836,  1076,  1081,  1078,
    1077,  1075,  1082,  1079,  1073,  1080,  1074,  1083,     0,     0,
     841,     0,     0,     0,  1089,     0,  1091,   844,     0,  1093,
     845,   865,     0,     0,     0,   870,   871,   872,  1108,  1122,
       0,     0,  1129,  1125,     0,     0,     0,  1120,  1119,  1133,
    1132,     0,     0,  1149,     0,     0,  1145,     0,  1153,     0,
       0,  1146,     0,  1167,   197,   197,     0,   197,     0,  1193,
       0,  1192,  1184,     0,     0,     0,     0,  1188,     0,     0,
       0,  1191,     0,     0,     0,     0,     0,  1186,  1194,     0,
       0,     0,  1185,   197,   197,   197,     0,   212,   214,   216,
       0,   217,     0,    56,     0,  1235,     0,  1240,     0,   154,
    1246,  1247,     0,  1249,  1250,     0,   163,   164,  1241,  1262,
    1263,     0,   220,     0,   234,     0,     0,     0,     0,   267,
       0,     0,     0,     0,     0,     0,     0,     0,   305,   154,
       0,     0,     0,     0,   154,     0,   325,     0,   324,   381,
     380,     0,     0,     0,   154,     0,   162,   426,   424,   428,
     432,     0,     0,     0,   162,     0,    82,    81,   467,   451,
       0,   462,   464,   165,     0,     0,   349,     0,     0,    56,
       0,   441,     0,     0,   954,     0,     0,     0,     0,     0,
       0,   968,     0,     0,     0,     0,     0,     0,   985,   986,
       0,     0,     0,     0,     0,   997,     0,  1003,  1004,  1006,
    1008,     0,  1012,  1023,  1024,  1025,     0,  1027,  1032,  1034,
    1035,  1033,   941,     0,  1014,     0,  1013,   953,     0,     0,
    1019,     0,  1021,     0,  1020,  1041,  1022,  1029,     0,     0,
     367,     0,     0,   565,   566,     0,   563,   559,     0,   175,
     175,   175,   176,   177,   577,   578,   171,   170,     0,   175,
     175,   175,     0,   583,   593,   172,   175,   175,   175,   173,
     174,   175,   175,     0,   175,   175,     0,   172,     0,   606,
       0,     0,     0,   632,     0,   631,     0,     0,   608,     0,
     607,     0,     0,     0,     0,   172,   172,   169,     0,     0,
     169,     0,     0,     0,   175,   175,   706,     0,   175,   175,
     711,     0,   188,   189,   190,   191,   192,   193,     0,    86,
      87,    85,   742,     0,     0,     0,     0,     0,     0,   888,
     886,   881,     0,   891,   875,   892,   878,   890,   884,   873,
     887,   876,   874,   893,   889,     0,     0,     0,   758,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   789,     0,     0,     0,     0,     0,   801,   803,
       0,     0,   808,   807,     0,     0,   178,     0,     0,     0,
     154,     0,   817,     0,     0,     0,     0,   822,   823,   824,
       0,     0,     0,   830,   846,   850,   852,   855,   854,     0,
       0,     0,   859,   896,   898,     0,   897,   727,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1042,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   731,     0,     0,     0,     0,   832,     0,
     154,     0,  1053,  1051,     0,     0,   154,  1056,   837,     0,
       0,     0,   843,     0,     0,  1094,   863,   864,     0,   866,
    1128,  1130,  1127,  1126,  1117,     0,     0,     0,  1150,     0,
       0,  1154,  1162,   199,   200,   201,   202,   198,  1177,  1176,
       0,     0,     0,  1179,  1178,   197,     0,     0,     0,  1187,
       0,     0,     0,     0,     0,  1204,     0,  1218,  1217,  1219,
       0,     0,     0,  1190,     0,     0,     0,  1189,  1199,  1198,
    1200,  1196,  1195,  1197,  1221,  1220,  1222,     0,     0,     0,
    1237,  1238,     0,   154,  1253,  1248,  1251,     0,     0,   154,
       0,     0,     0,   231,     0,     0,     0,     0,     0,     0,
       0,     0,   302,   301,     0,     0,   293,   304,   306,     0,
     316,   318,   317,   315,   154,   323,     0,     0,     0,   162,
     154,     0,     0,     0,     0,   446,   460,    80,    79,   469,
       0,   463,   167,   168,   166,   456,     0,   472,     0,     0,
       0,   444,   438,     0,     0,     0,     0,     0,     0,   154,
     955,     0,   958,     0,     0,   961,     0,   154,   966,     0,
     969,   970,     0,   972,   973,   974,     0,   978,     0,     0,
     981,     0,   987,     0,     0,     0,   992,   993,   991,     0,
       0,     0,   998,   999,     0,     0,  1002,  1005,  1007,  1009,
       0,     0,  1026,  1028,   945,  1037,   946,     0,     0,  1039,
    1030,     0,     0,   519,   520,     0,     0,   564,     0,   574,
     575,   576,   175,   580,   581,   582,     0,     0,     0,   587,
     588,   169,     0,     0,     0,   175,   594,   595,   596,   597,
     599,   172,   602,   603,     0,   175,     0,     0,     0,   172,
     172,   169,     0,     0,     0,     0,   630,     0,   634,     0,
       0,     0,     0,     0,   172,   172,   169,     0,     0,   169,
       0,     0,     0,     0,     0,   172,   172,   169,     0,     0,
     169,     0,     0,     0,     0,     0,   172,   172,   169,     0,
       0,   169,     0,     0,     0,     0,   172,   172,   169,     0,
       0,     0,   172,   610,   611,   612,   613,   615,     0,   618,
     619,     0,   172,     0,     0,   704,   705,   175,   708,   709,
       0,   741,   154,   743,     0,     0,   747,     0,     0,     0,
       0,     0,   880,   877,   883,   882,   879,   885,     0,   756,
       0,     0,     0,     0,   154,   763,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   780,
     781,   782,     0,   786,   783,   785,     0,     0,   791,   790,
     792,   793,     0,     0,     0,     0,     0,     0,   154,   154,
     806,   184,   180,   185,   179,   182,   181,   183,   812,   813,
     814,     0,     0,   816,   818,   154,   154,     0,   825,   828,
     154,   154,   853,   857,   899,   728,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1084,   924,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   925,     0,     0,     0,     0,     0,   739,   740,
     154,   162,     0,   154,   154,  1059,  1060,     0,     0,   839,
       0,   154,  1090,  1092,   862,     0,  1147,  1148,  1151,  1152,
     197,   197,   197,  1223,  1202,  1201,  1203,  1206,  1205,  1209,
    1208,  1210,  1207,  1215,  1214,  1216,  1212,  1211,  1213,     0,
       0,  1232,     0,  1254,     0,   154,     0,  1257,     0,     0,
     235,     0,   232,     0,     0,     0,   271,     0,     0,     0,
       0,   154,     0,   308,   142,     0,   401,     0,   422,   162,
     165,     0,     0,   435,     0,   473,   474,     0,   439,     0,
       0,     0,     0,     0,   154,   956,   165,   165,   165,   154,
     962,   165,   162,   165,   165,   154,   975,   165,   165,   165,
     154,   982,   165,   165,   154,     0,   165,   154,   165,   165,
     154,   165,   154,  1016,  1017,     0,     0,   518,   560,     0,
     579,   584,   585,   586,     0,   590,   591,   592,   598,   175,
     172,   604,   621,   622,   623,   624,   625,     0,   627,   628,
     172,     0,     0,     0,   172,   172,   169,     0,     0,     0,
       0,     0,     0,   172,   172,   169,     0,     0,     0,     0,
       0,     0,   172,   172,   169,     0,     0,     0,   172,   175,
     175,   175,   175,   175,     0,   175,   175,     0,   172,   172,
     175,   175,   175,   175,   175,     0,   175,   175,     0,   172,
     172,   684,   685,   686,   687,   689,     0,   692,   693,     0,
     172,   695,   696,   697,   698,   699,     0,   701,   702,   172,
     614,   172,     0,   620,     0,     0,   707,     0,   744,   165,
       0,     0,   165,     0,     0,     0,   755,   165,   759,   760,
     165,   762,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   784,   787,   788,     0,   165,
       0,     0,     0,   804,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1085,  1064,     0,  1071,  1072,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   154,     0,     0,
      83,     0,     0,   931,   932,   162,     0,     0,     0,  1054,
    1052,  1062,   838,   840,   162,  1140,  1181,  1180,  1182,  1224,
       0,  1234,  1264,     0,     0,  1259,  1258,   236,     0,     0,
       0,   276,     0,     0,     0,   294,   165,   402,   406,   423,
     425,     0,   433,   468,     0,     0,     0,     0,     0,     0,
     952,   957,   960,   959,   963,   964,   965,   967,   971,   976,
     977,   979,   980,   983,   984,   988,   162,   165,   995,   162,
     996,  1000,   162,  1010,   162,     0,     0,   517,     0,   589,
     600,   175,   172,   629,   175,   175,   175,   175,   175,     0,
     175,   175,   172,   175,   175,   175,   175,   175,     0,   175,
     175,   172,   175,   175,   175,   175,   175,     0,   175,   175,
     172,   175,   644,   645,   646,   647,   649,   172,   652,   653,
       0,   175,   175,   673,   674,   675,   676,   678,   172,   681,
     682,     0,   175,   688,   172,     0,   694,   172,   703,   616,
     172,   712,   713,   154,   746,     0,   165,   749,     0,   154,
       0,   757,   761,   154,     0,   768,   769,   770,   771,   775,
     776,   772,   773,   774,     0,     0,   165,   796,     0,   154,
       0,     0,   809,   165,     0,     0,   165,   165,     0,   856,
       0,   186,   186,     0,     0,   186,     0,   186,  1042,     0,
       0,     0,     0,     0,     0,     0,     0,  1063,     0,     0,
     186,   186,     0,     0,     0,     0,     0,     0,     0,     0,
     926,     0,     0,     0,  1042,    84,     0,   186,     0,  1087,
     930,     0,     0,     0,   218,  1266,  1265,     0,     0,   240,
       0,     0,     0,     0,   309,   434,   328,     0,   948,     0,
     194,     0,   989,   990,   994,  1001,  1011,   360,   328,     0,
     601,   626,   635,   636,   637,   638,   639,   172,   641,   642,
     175,   664,   665,   666,   667,   668,   172,   670,   671,   175,
     655,   656,   657,   658,   659,   172,   661,   662,   175,   648,
     175,   172,   654,   677,   175,   172,   683,   690,   172,   700,
     617,     0,   165,   750,     0,     0,     0,     0,     0,   777,
     778,   794,     0,     0,     0,   805,   810,     0,   819,   820,
     811,   165,     0,   187,  1042,  1042,    83,     0,  1042,     0,
    1042,   900,   154,     0,  1066,     0,  1069,  1103,  1070,  1068,
    1065,     0,  1042,  1042,    83,     0,     0,  1042,  1042,     0,
       0,  1042,   929,   927,   928,   907,  1042,  1042,  1087,  1098,
       0,  1055,   842,     0,     0,     0,   242,     0,     0,     0,
     329,   330,   350,     0,     0,   195,   196,   950,   951,   368,
       0,   175,   643,   175,   672,   175,   663,   650,   175,   679,
     175,   691,     0,   745,   165,   165,     0,   165,     0,   165,
     165,     0,   165,     0,  1042,   913,   909,  1042,     0,   914,
       0,   908,  1042,     0,  1067,     0,   911,   910,  1042,     0,
       0,   905,   903,  1042,   154,   904,   906,   912,  1098,  1049,
       0,     0,  1088,  1096,  1139,     0,     0,     0,   272,   295,
     298,   296,     0,     0,   947,   154,   562,   640,   669,   660,
     651,   680,   165,   748,   754,     0,   767,   764,   795,   800,
       0,   815,     0,   918,   902,    83,     0,   916,  1104,     0,
     901,    83,     0,   917,     0,  1050,  1100,  1102,     0,  1095,
       0,     0,   277,     0,     0,     0,     0,   194,     0,   751,
     154,   765,   797,   829,  1042,     0,     0,  1042,     0,   165,
    1101,  1097,   241,     0,     0,     0,     0,     0,   949,   723,
     154,   752,   766,   154,   798,   920,     0,  1042,   919,     0,
       0,   243,   288,     0,   287,     0,   753,   799,    83,   921,
      83,  1042,   286,   285,  1042,  1042,   915,   923,   922
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,  1401,   172,   152,  1248,  2474,  2475,   424,   425,
     426,   427,   153,   154,   155,   686,   678,    91,   805,   447,
    1198,  1665,  1338,  1351,  1334,  1908,  2574,  1398,  2627,  1568,
     337,   758,   761,   764,   772,    63,   361,   367,   371,   374,
      68,   377,    75,   392,   388,   382,   399,    82,   404,    92,
      98,   409,   411,   413,   481,   859,  1634,   415,   418,   105,
     434,   156,   158,  2622,   174,   214,   470,   848,   472,   482,
     851,   856,   484,   486,   862,   489,   864,   500,   867,   869,
     503,   507,   511,   513,   516,   520,   547,   543,  1261,   534,
     887,   892,   884,  1249,   898,   537,   557,   560,   565,   570,
     578,   927,   929,   931,   933,   583,   937,   217,   585,  1735,
     235,   587,   589,   593,   598,   606,   244,  1327,   609,   252,
     618,  1343,   620,   626,   982,  1359,   977,  1776,  1365,  1363,
    1778,   978,  1368,  1370,   632,   635,   630,   254,   262,   264,
     673,  1059,  1425,  1048,  1523,  1952,  2268,  1064,  1057,   922,
    1302,  1306,  1314,  1316,  1936,   270,  1073,  1076,  1084,  2240,
    2241,  2242,  1937,  2609,  2610,  1107,  1110,  2682,  2683,  2679,
    2680,  2726,  2243,  2244,   278,   284,   292,   700,   695,   297,
     302,   304,   710,   717,  1136,  1141,   767,   755,   310,   314,
     724,   320,   731,  1573,   744,   745,  1172,  1167,  1579,  1157,
    1585,  1597,  1593,  1161,   749,   733,   326,   327,   341,  1185,
     344,   350,   782,   785,   779,   352,   355,   790
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2528
static const yytype_int16 yypact[] =
{
    4942,    63,   544,    62, -2528, -2528,  1183,  -174,   647,   604,
    1006,   132,  3557,   124,   296,  1495,    64,  5180,    61,  2169,
   -2528,   296,  1037,   220,  1424,     7,   172,   260,   -39,   555,
     401,   463,  3756,   174,   -32,   280,   403,   -39, -2528,    94,
      47,  1036, -2528,   109,   547,   976, -2528,   337, -2528,    65,
    3677,   314,    76,   553,    43,   147,   298,   598,   611,    78,
     655,    -4,   720, -2528, -2528, -2528,   884,   179, -2528,    34,
      32,   296,    14,   581,    54, -2528,   681,   179, -2528, -2528,
      26,   179, -2528, -2528, -2528, -2528,   179, -2528, -2528, -2528,
   -2528, -2528, -2528,   129,   672,   692,   706,   133, -2528,   179,
    1564,   179,   179,   963,   179, -2528, -2528, -2528,   389, -2528,
   -2528, -2528, -2528,  4485, -2528, -2528, -2528, -2528, -2528, -2528,
     179, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528,
   -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528,
   -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528,
   -2528, -2528, -2528,  1531, -2528,   179, -2528,   712, -2528, -2528,
     296,   296,   296,   296,   296,   296, -2528, -2528,   296,   296,
     296,   296, -2528,   618, -2528,   665,  1617,   622,   323,   478,
     606,   870,  4035,    83,  4538,  4457,   736,  4485,  3317, -2528,
     392,   -88,   782,   707,   833,   613,   793,   -39,   676, -2528,
     744, -2528,   588,   561,   104, -2528,   217, -2528,   701, -2528,
     412,   752,    60, -2528, -2528,  4726, -2528, -2528, -2528,   818,
     864, -2528, -2528, -2528, -2528,   718, -2528, -2528, -2528, -2528,
     794, -2528, -2528,  4726,  4101, -2528, -2528,   254, -2528,   893,
     914,   523, -2528,   179, -2528,   919,    87,   921,   285,    52,
     932,    15, -2528, -2528, -2528,   998,  1000,   296,   296,   179,
     179, -2528, -2528,  1007, -2528, -2528, -2528, -2528, -2528, -2528,
    2421,   380, -2528,  1015,    27,   179,  4726,   179, -2528,  1017,
   -2528, -2528, -2528, -2528, -2528,   179,  1186,   296,  2966,   179,
    1531,   179, -2528,  1025, -2528,  3846, -2528, -2528,   476,  1044,
    1048,   179, -2528,  1055, -2528, -2528,   -67,  1056,  4726,  1066,
   -2528,  1247,   179,   975, -2528,   444,   955,  1406,    46,  1103,
   -2528, -2528, -2528, -2528, -2528, -2528, -2528,  1107, -2528,   470,
     107,   196,   364,   483,   179,   179,   100, -2528,   179,   839,
    1110, -2528,   179,   179, -2528,  1112,    13,    23,  1116,  1531,
   -2528, -2528, -2528,   907,   179, -2528, -2528, -2528, -2528, -2528,
     179, -2528,  1120,  1122, -2528,   179,  1182, -2528, -2528, -2528,
   -2528, -2528, -2528,   179, -2528, -2528,   179, -2528, -2528,    95,
      95,  1121, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528,
   -2528, -2528, -2528,   930,   179,   179,  1131,  1142,  1152, -2528,
   -2528,   179,   179,   179, -2528,   179, -2528,  1155, -2528, -2528,
   -2528, -2528,   778, -2528,  1136, -2528,  4726,  1161, -2528,   179,
   -2528, -2528, -2528,   179,  1148,  1158,  1158,  4726,   179,   179,
     179,   179,   179,   179, -2528,   179,  4485,  1564,   179,   179,
   -2528, -2528, -2528, -2528, -2528, -2528, -2528,  1564,   179, -2528,
   -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528,
    1167, -2528,   902,   318, -2528, -2528, -2528, -2528, -2528, -2528,
   -2528, -2528, -2528,   -72, -2528, -2528, -2528,  1005, -2528,   414,
     361,   361, -2528, -2528, -2528,  1174, -2528,  1178, -2528, -2528,
     -23, -2528,  1008, -2528, -2528, -2528,  1021, -2528, -2528,  1531,
   -2528,   179,   179, -2528,  4726,  4726,  1531, -2528, -2528,  1531,
   -2528, -2528, -2528, -2528,  1531, -2528, -2528,  4726,  1531,   179,
   -2528, -2528,  4726, -2528,  1189,   511,   996,     3, -2528, -2528,
    1032,  4726,    10, -2528, -2528, -2528, -2528, -2528,  1202,  1209,
    1212, -2528,  1035, -2528, -2528, -2528,   179, -2528, -2528,   471,
   -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528,
   -2528,   412, -2528, -2528, -2528, -2528, -2528, -2528,  1046,  1054,
   -2528, -2528,  1191,  1194,  1199, -2528, -2528,  1042, -2528,   179,
    1244,  1024,  3846, -2528,  1531, -2528,  1268, -2528, -2528, -2528,
   -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528,
   -2528,  4726,  4726,  4726,  4726, -2528, -2528,  1270,   296, -2528,
   -2528,  1276,  1277,  1085,   179, -2528,   585,  1200, -2528,  1281,
   -2528,   739,  1205,  4572,   519,  1292, -2528,  1303, -2528,  1311,
   -2528,   443, -2528,  1319,  1343, -2528,  1345, -2528, -2528, -2528,
     179, -2528,  3846,  2727,  1080,   248,  1348,   967,  1255, -2528,
   -2528, -2528,  1341,   530,  1357,  1359,    28,   179,   417,   791,
     118,  4726,   296,  1558,   542,    21,    58,   273,    19, -2528,
    1349,  1350,  1367, -2528, -2528, -2528, -2528, -2528, -2528, -2528,
   -2528, -2528, -2528, -2528, -2528, -2528, -2528,   179, -2528, -2528,
   -2528,   179,   179,   179,   179, -2528, -2528,   179,  1531,   179,
   -2528,   179,  1564,   179,  1373,  1531, -2528, -2528, -2528, -2528,
   -2528, -2528, -2528, -2528,  1376,   357,   451, -2528, -2528, -2528,
    1377, -2528, -2528, -2528, -2528,  1284, -2528,  1383,  1384,  1302,
    1389, -2528,  1392, -2528,  1402,  1306,  1404,   468,   438,   518,
     526,   666,  1418,   686, -2528, -2528,  1427,  1431,  1425, -2528,
   -2528,  1434, -2528, -2528, -2528, -2528,  1435, -2528, -2528,  1441,
   -2528, -2528,  1443, -2528, -2528, -2528, -2528, -2528, -2528, -2528,
     179,   179, -2528,   179,   824,   179,   179, -2528,  1768, -2528,
     946,  1445, -2528,  1029,  1447, -2528, -2528,   368,   179,   179,
   -2528,  1446, -2528, -2528,  1452,  1232,   179,  1448,   155, -2528,
   -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528,
   -2528, -2528, -2528,  1455,  1459,   179,   179,   179,  1463,   296,
    1465,  1466,  1531,  4726, -2528, -2528, -2528, -2528, -2528,  1531,
   -2528, -2528,   179,   179,   179,  4726,   179,  1564,   179, -2528,
     179, -2528, -2528, -2528, -2528, -2528,  1467,  1475, -2528, -2528,
   -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528,
   -2528,    83, -2528,   179, -2528, -2528, -2528, -2528, -2528, -2528,
   -2528, -2528,  4726,   179,  1531,  1531,   368,   368,   368,  1531,
    1564,   179,  1531, -2528, -2528, -2528,   179, -2528,   -89,  1271,
    1479,  1481, -2528, -2528,  1531, -2528,  1327,  1338, -2528,  1487,
    1499,  1496,  1078,   179,  4425,   416,   467, -2528, -2528, -2528,
     179,    85,  1068, -2528,  1264, -2528,  1558,  1265,   184,  1239,
      89, -2528, -2528,   179, -2528, -2528, -2528, -2528, -2528, -2528,
   -2528, -2528, -2528, -2528,   179,  1525, -2528, -2528, -2528,   368,
   -2528, -2528, -2528, -2528, -2528,  4607, -2528, -2528,  1529,  1538,
     179,  1543,  1550,  1554,   -18,   -18,   -74,  1566,  1567,  1571,
    1572,  1307,  1312,  1573,  1576,  1583,    93,    93,   -74,  1585,
    1588,   -74,  1589,  1590,  5181,  1591,  1594, -2528, -2528,  1598,
    1602,   741, -2528,  1593,  1604,  1606,  1607,   -18,   -74,  1609,
    1611, -2528,  1615, -2528, -2528,  1531,  1172,  1260,  1381,   333,
    1387,  1518,  1256,   489,  1621,    80,  1489,  1524,  1226,  1322,
    1595,   582,  1390,  1526,  1632,  1423,   119,    69,   593,     4,
    4726,  1558,  1608,   615,  1407,  1438,  1651,    50, -2528, -2528,
     143,  1654,  1657, -2528, -2528, -2528,  1662,  1457,   112,  1558,
    1458, -2528, -2528, -2528,   296,  1666,  1670,   179, -2528, -2528,
   -2528, -2528, -2528, -2528, -2528, -2528, -2528,    11, -2528,   853,
   -2528,   179, -2528,   179, -2528, -2528, -2528, -2528,   179,   179,
     179,   967,  4726, -2528,  1672,  1059, -2528, -2528,   179, -2528,
   -2528,   179,  4726,   179, -2528, -2528, -2528, -2528, -2528, -2528,
   -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528,   296,   179,
   -2528,   179,   967,  1674, -2528,   179,   179, -2528,   296, -2528,
   -2528, -2528,   540,  1676,  1679, -2528, -2528, -2528, -2528, -2528,
     179,   179, -2528, -2528,  1564,   179,   179, -2528, -2528, -2528,
   -2528,  1671,   179, -2528,   179,  1575, -2528,   179, -2528,   179,
    1578, -2528,  1681, -2528,   918,   918,   727,   918,  1687, -2528,
     734, -2528, -2528,  1689,  1690,   759,  1692, -2528,  1694,  1695,
    1697, -2528,   792,   802,  1698,  1700,  1708, -2528, -2528,  1709,
    1711,  1717, -2528,   918,   918,   918,   179, -2528, -2528, -2528,
     179, -2528,   179,   503,  4726, -2528,   179, -2528,  3846,  1531,
   -2528, -2528,  1718, -2528, -2528,  1728, -2528, -2528, -2528, -2528,
    1701,  2966, -2528,   179,  1710,   179,   179,   179,   635, -2528,
    1730,  1735,   179,   179,   -14,  1729,   296,   296, -2528,  1531,
     179,  1736,  1738,  1739,  1531,  4726, -2528,   179, -2528, -2528,
   -2528,   179,   179,   179,  1531,  4726,   368, -2528, -2528, -2528,
   -2528,  1564,   179,  1741,   368,   179,  1712,  1713,   601, -2528,
    1742, -2528, -2528,   849,  2937,   179, -2528,   179,  1744,  1752,
     179, -2528,  1748,  1437,  4485,  1513,   629,  1515,   102,  4726,
     702, -2528,   110,  1620,   142,   798,  1520,   163, -2528, -2528,
     205,  1597,   599,  1640,   -79,  1558,   464, -2528,  1761,  1517,
   -2528,   385, -2528, -2528, -2528, -2528,  1558,  1559, -2528, -2528,
   -2528, -2528, -2528,   179, -2528,   179, -2528, -2528,   179,   179,
   -2528,   179, -2528,   179, -2528, -2528, -2528, -2528,  1574,   179,
   -2528,   179,    33, -2528, -2528,  1771,  1773, -2528,   179,   -18,
     -18,   -18, -2528, -2528, -2528, -2528, -2528, -2528,  1774,   -18,
     -18,   -18,   776, -2528, -2528,    93,   -18,   -18,   -18, -2528,
   -2528,   -18,   -18,  1775,   -18,   -18,  1776,    93,   832, -2528,
    1767,  1778,  1779, -2528,   760, -2528,  1139,  1153, -2528,  1118,
   -2528,  1510,  1781,  1782,  1783,    93,    93,   -74,  1786,  1787,
     -74,  1796,  1798,  1799,   -18,   -18, -2528,  1800,   -18,   -18,
   -2528,  1801, -2528, -2528, -2528, -2528, -2528, -2528,   296, -2528,
   -2528, -2528,  4485,  1083,   296,   179,  1215,  1332,   286, -2528,
   -2528, -2528,   628, -2528, -2528, -2528, -2528, -2528, -2528, -2528,
   -2528, -2528, -2528, -2528, -2528,  1802,   296,   179, -2528,   296,
    1803,   179,  4726,   296,  1638,  1570,  1577,   176,   177,  1580,
     212,  1501,  1502,  1811,  1812,  1814,  1256,  1816,  1819,  1820,
    1514,  1516,  1089,  1821,   296,   179,  1316,  1723, -2528, -2528,
     296,  4726, -2528, -2528,  4726,   179,    -9,  1823,   296,   179,
    1531,   296, -2528,  1824,  4726,  4726,   179, -2528, -2528, -2528,
     296,   296,  4726, -2528, -2528, -2528, -2528, -2528, -2528,  4726,
     179,   296, -2528, -2528, -2528,   179, -2528, -2528,  1825,   179,
    1603,   128,   179,  1605,   179,   139,   179, -2528,   179,  1610,
    1612,   179,   179,   179,   179,   179,   179,   179,   179,     8,
     179,   179,  1613, -2528,   179,   179,   179,   179, -2528,  4726,
    1531,  1829,  4726,  4726,   179,   179,  1531, -2528,   179,   179,
     179,  4726, -2528,   179,   179, -2528, -2528, -2528,  1831, -2528,
   -2528, -2528, -2528, -2528, -2528,  1835,   179,   179, -2528,   179,
     179, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528,
    1838,  1840,  1843, -2528, -2528,   918,  1844,  1845,  1847, -2528,
    1849,  1850,  1852,  1853,  1851, -2528,  1855, -2528, -2528, -2528,
    1857,  1858,  1856, -2528,  1869,  1870,  1872, -2528, -2528, -2528,
   -2528, -2528, -2528, -2528, -2528, -2528, -2528,   179,   179,   179,
   -2528, -2528,   179,  1531, -2528, -2528, -2528,  2966,   179,  1531,
     179,   179,   179, -2528,   179,   179,  1873,   179,  1875,  1842,
     179,   179, -2528, -2528,  1877,  4726, -2528, -2528, -2528,   179,
   -2528, -2528, -2528, -2528,  1531, -2528,  1011,   179,  1011,   368,
    1531,  4726,   179,   179,  1878, -2528, -2528, -2528, -2528, -2528,
     179, -2528, -2528, -2528, -2528, -2528,  4726, -2528,  4726,   179,
    1879, -2528, -2528,  1880,  1881,  1882,  1883,  1885,  4726,  1531,
   -2528,  4726, -2528,  4726,  4726,  4485,  4726,  1531, -2528,  4726,
   -2528, -2528,  4726, -2528, -2528,  4485,  4726, -2528,  4726,  4726,
    4485,  4726, -2528,  4726,  4726,   179, -2528, -2528, -2528,  4726,
    4726,  4726, -2528, -2528,  4726,  4726, -2528, -2528, -2528, -2528,
    4726,  4726, -2528, -2528, -2528, -2528, -2528,   179,   179, -2528,
   -2528,  1888,   179, -2528, -2528,  1889,  1891, -2528,   179, -2528,
   -2528, -2528,   -18, -2528, -2528, -2528,  1892,  1893,  1894, -2528,
   -2528,   -74,  1896,  1897,  1898,   -18, -2528, -2528, -2528, -2528,
   -2528,    93, -2528, -2528,  1900,   -18,  1902,  1906,  1907,    93,
      93,   -74,  1901,  1911,  1912,  1134, -2528,  1137, -2528,  1198,
    1618,  1913,  1914,  1915,    93,    93,   -74,  1917,  1918,   -74,
    1928,  1641,  1929,  1942,  1948,    93,    93,   -74,  1950,  1952,
     -74,  1955,  1682,  1957,  1963,  1964,    93,    93,   -74,  1966,
    1967,   -74,  1968,  1969,  1970,  1971,    93,    93,   -74,  1973,
    1975,  1976,    93, -2528, -2528, -2528, -2528, -2528,  1978, -2528,
   -2528,  1980,    93,  1981,  1982, -2528, -2528,   -18, -2528, -2528,
    1983, -2528,  1531, -2528,  4726,   179, -2528,   179,  4726,   179,
    1984,  1260, -2528, -2528, -2528, -2528, -2528, -2528,  1985, -2528,
    4726,   296,  1986,  4726,  1531, -2528,  1988,  1260,   179,   179,
     179,   179,   179,   179,   179,   179,   179,  1991,  1992, -2528,
   -2528, -2528,  1993, -2528, -2528, -2528,  1996,  1998, -2528, -2528,
   -2528, -2528,   179,  4726,   179,  1999,  1260,   296,  1531,  1531,
   -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528,
   -2528,   179,  1564, -2528, -2528,  1531,  1531,   179, -2528, -2528,
    1531,  1531, -2528, -2528, -2528, -2528,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,  1704, -2528,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   658,
    2002,   179, -2528,   179,   179,   179,  2006,  2007, -2528, -2528,
    1531,   368,  2008,  1531,  1531, -2528, -2528,  1564,   179, -2528,
    2010,  1531, -2528, -2528, -2528,  2013, -2528, -2528, -2528, -2528,
     918,   918,   918, -2528, -2528, -2528, -2528, -2528, -2528, -2528,
   -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528,  1260,
     179, -2528,   179, -2528,   179,  1531,   179, -2528,  1564,   179,
   -2528,   179, -2528,  1865,  2014,  2015, -2528,  2019,   179,   179,
    2021,  1531,  4726, -2528, -2528,   179, -2528,   179, -2528,   368,
     849,   179,  2024, -2528,   179, -2528, -2528,   412, -2528,  2029,
    2032,  2033,  2034,  2035,  1531, -2528,   849,   849,   849,  1531,
   -2528,   849,   368,   849,   849,  1531, -2528,   849,   849,   849,
    1531, -2528,   849,   849,  1531,  4726,   849,  1531,   849,   849,
    1531,   849,  1531, -2528, -2528,  2022,   412,  2036, -2528,   179,
   -2528, -2528, -2528, -2528,  2038, -2528, -2528, -2528, -2528,   -18,
      93, -2528, -2528, -2528, -2528, -2528, -2528,  2039, -2528, -2528,
      93,  2040,  2041,  2042,    93,    93,   -74,  2046,  2047,  2048,
    2049,  2050,  2051,    93,    93,   -74,  2053,  2054,  2055,  2056,
    2057,  2059,    93,    93,   -74,  2061,  2062,  2063,    93,   -18,
     -18,   -18,   -18,   -18,  2065,   -18,   -18,  2066,    93,    93,
     -18,   -18,   -18,   -18,   -18,  2067,   -18,   -18,  2068,    93,
      93, -2528, -2528, -2528, -2528, -2528,  2069, -2528, -2528,  2070,
      93, -2528, -2528, -2528, -2528, -2528,  2071, -2528, -2528,    93,
   -2528,    93,  2073, -2528,  2074,  2076, -2528,  3846, -2528,   849,
    2107,  4726,   849,   179,  4726,  2108, -2528,   849, -2528, -2528,
     849, -2528,  4726,  2109,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   179, -2528, -2528, -2528,  4726,   849,
     179,  4726,  2110, -2528,  1564,  1564,  4726,  1564,  1564,  4726,
    4726,  1564,  1564,   179,   179,   179,   179,   179,   179,  1260,
     179,   179,   179,  1528,  1540,  1616,  1624,  1631,  1688,  1696,
    1704, -2528,  1703, -2528, -2528,  1260,   179,   179,   179,   179,
    1260,   179,   179,   179,   179,   179,   179,  1531,   179,  1544,
    1260,   179,   179, -2528, -2528,   368,   296,  2111,  2112, -2528,
   -2528, -2528, -2528, -2528,   368,  2113, -2528, -2528, -2528, -2528,
     179, -2528, -2528,  1564,   179, -2528, -2528, -2528,  1052,  2114,
    2115, -2528,   179,  2117,  1011, -2528,   849, -2528, -2528, -2528,
   -2528,  2118, -2528, -2528,  2121,  2122,  2125,  2126,  4726,  2127,
   -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528,
   -2528, -2528, -2528, -2528, -2528, -2528,   368,   849, -2528,   368,
   -2528, -2528,   368, -2528,   368,  2128,  2130, -2528,   179, -2528,
   -2528,   -18,    93, -2528,   -18,   -18,   -18,   -18,   -18,  2131,
     -18,   -18,    93,   -18,   -18,   -18,   -18,   -18,  2133,   -18,
     -18,    93,   -18,   -18,   -18,   -18,   -18,  2134,   -18,   -18,
      93,   -18, -2528, -2528, -2528, -2528, -2528,    93, -2528, -2528,
    2136,   -18,   -18, -2528, -2528, -2528, -2528, -2528,    93, -2528,
   -2528,  2137,   -18, -2528,    93,  2138, -2528,    93, -2528, -2528,
      93, -2528, -2528,  1531, -2528,  4726,   849, -2528,  2139,  1531,
     179, -2528, -2528,  1531,   179, -2528, -2528, -2528, -2528, -2528,
   -2528, -2528, -2528, -2528,   179,   179,   849, -2528,  2140,  1531,
     179,  1564, -2528,   849,   179,  1564,   849,   849,  4726, -2528,
     179,  2141,  2141,   179,   179,  2141,  1260,  2141, -2528,  4726,
    1256,  2142,  2144,  2145,  2146,  2147,  2149, -2528,   296,  1260,
    2141,  2141,   179,   179,  1260,   179,   179,   179,   179,   179,
   -2528,  1564,   179,  2150, -2528, -2528,   179,  2141,   296,    42,
   -2528,  2153,   296,  2155, -2528, -2528, -2528,  2156,   179, -2528,
    2157,  2159,  2012,   179, -2528, -2528,     9,  4726, -2528,  2160,
      12,  4726, -2528, -2528, -2528, -2528, -2528, -2528,     9,   179,
   -2528, -2528, -2528, -2528, -2528, -2528, -2528,    93, -2528, -2528,
     -18, -2528, -2528, -2528, -2528, -2528,    93, -2528, -2528,   -18,
   -2528, -2528, -2528, -2528, -2528,    93, -2528, -2528,   -18, -2528,
     -18,    93, -2528, -2528,   -18,    93, -2528, -2528,    93, -2528,
   -2528,   179,   849, -2528,  4726,  4726,   179,  4726,   179, -2528,
   -2528, -2528,  4726,  4726,   179, -2528, -2528,  4726, -2528, -2528,
   -2528,   849,  2162, -2528, -2528, -2528,  1260,   179, -2528,  2163,
   -2528, -2528,  1531,  2164, -2528,  2166, -2528, -2528, -2528, -2528,
   -2528,  2167, -2528, -2528,  1260,   179,  2168, -2528, -2528,   179,
    4726, -2528, -2528, -2528, -2528, -2528, -2528, -2528,    42,  1834,
    1558, -2528, -2528,  2170,  2171,  2172, -2528,  2120,  2174,   115,
   -2528, -2528, -2528,  2175,  4726, -2528, -2528, -2528, -2528, -2528,
    2177,   -18, -2528,   -18, -2528,   -18, -2528, -2528,   -18, -2528,
     -18, -2528,  3846, -2528,   849,   849,   179,   849,  2178,   849,
     849,   179,   849,   179, -2528, -2528, -2528, -2528,  2179, -2528,
     179, -2528, -2528,  2180, -2528,   179, -2528, -2528, -2528,  2182,
     179, -2528, -2528, -2528,  1531, -2528, -2528, -2528,  1834, -2528,
    1861,  1790,  1558, -2528, -2528,  2184,  2185,  2183, -2528, -2528,
   -2528, -2528,   710,   710, -2528,  1531, -2528, -2528, -2528, -2528,
   -2528, -2528,   849, -2528, -2528,  2198, -2528,  4485, -2528, -2528,
    2199, -2528,  1260, -2528, -2528,  1260,   179, -2528, -2528,   179,
   -2528,  1260,   179, -2528,  4726, -2528,  1861, -2528,   296, -2528,
    2200,  2201, -2528,   179,   179,   179,   179,    12,  2203,  4485,
    1531, -2528,  4485, -2528, -2528,   179,  2205, -2528,   179,   849,
   -2528, -2528, -2528,  2221,  2225,   179,  2226,   179, -2528, -2528,
    1531, -2528, -2528,  1531, -2528, -2528,  2206, -2528, -2528,  2228,
    2229, -2528, -2528,  2230, -2528,  2231, -2528, -2528,  1260, -2528,
    1260, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2528, -2528,    -3, -2528,   278, -2528, -1353,  -895,  1643, -2528,
     675,  -422,  1848,   -49,    81, -2528, -2528, -1642,  1750,  1084,
    -855, -1845,  -859,  1060,  1592, -2528,  -898, -2528,  -583, -1113,
   -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528,
   -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528,
   -2528, -2528, -2528, -2528,  -459,  -476, -2528, -2528, -2528, -2528,
   -2528, -2528, -2528,  -344, -2528, -2528, -2528, -2528, -2528, -2528,
   -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528,
   -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528,
   -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528,
   -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528,
   -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528,
   -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528,
   -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528,
   -2528, -2528, -1443, -2528, -2528, -2528, -2528, -2528,  -649, -2528,
   -2528, -2528, -2528, -2528, -2528,    53, -2528, -2528, -2528, -2528,
     -56,  -661, -1303,  -440, -2528, -2528, -2528, -2528,  -509,  -474,
   -2528, -2528, -2527, -2528, -2528, -2528, -2528, -2528, -2528, -2528,
   -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528,
   -2528, -2528, -2528, -2528, -2528,  1500, -2528, -2528, -2528, -2528,
   -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528,
   -2528, -2528, -2528, -2528, -2528, -2528, -2528, -2528
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1237
static const yytype_int16 yytable[] =
{
      67,   349,  1098,  1882,  2025,   860,  2027,   889,   104,  1072,
    1075,    64,    65,  1949,   895,   839,  1497,   780,  1901,   265,
     633,  1238,  1239,  1240,  1111,   842,  1102,   783,   369,   289,
     402,   680,  1569,  1632,  1574,    64,    65,   313,   379,   298,
    1902,  2620, -1086,  1903,  2625,  1067,   343,  1246,   357,   354,
      64,    65,   360,  1733,  1904,  1479,   366,    64,    65,   373,
    1604,  1605,  1606,   376,   378,    64,    65,   387,    64,    65,
     394,   398,    64,    65,   401,  1104,   581,  1905,   405,    64,
      65,    64,    65,   406,  1322,   715,    64,    65,    64,    65,
     306,  1709,   616,  1336,   266,  1906,   419,   423,   428,   429,
     433,   435,  1402,    64,    65,  1462,  1317,  1429,   746,  1353,
    1349,   106,  1356,   291,    76,    64,    65,   439,    64,    65,
    1112,    64,    65,  1685,   849,   800,  1113,  1468,   535,  1387,
      54,    64,    65,   395,   407,    64,    65,  1690,   416,   299,
     109,  1332,    64,    65,   896,   215,  1460,   627,  1487,  1710,
      64,    65,   448,  2727,  1077,   390,   307,   157,  1078,  1207,
     321,  1247,   216,  1695,   417,   628,   562,  1208,   747,  1333,
    1481,   890,    99,   865,   756,   480,   106,   255,   106,   293,
     501,   850,    64,    65,  1700,  2300,   358,    64,    65,  1318,
     267,   801,   100,   391,   438,  1337,   716,  1870,  1872,  2750,
     106,  2311,  2312,  2313,  1463,   268,  2315,   359,  2317,  2318,
     322,   173,  2320,  2321,  2322,  1711,   300,  2324,  2325,   323,
     536,  2328,   383,  2330,  2331,   301,  2333,   681,   111,   396,
     380,  1079,  1702,  1875,   682,   683,   245,   866,   566,   256,
     614,   253,   629,  1068,   311,   101,   705,  1488,   324,  1430,
     549,  1469,  1043,  1080,  1350,  1310,   640,   641,   607,   582,
     802,   257,  1633,   759,   502,   263,   510,   269,   515,   519,
     684,  1734,   687,  1105,   689,   403,   546,   106,  1044,  1691,
    1127,   370,   691,   694,   303,   697,   701,   381,   703,   634,
     621,   579,   159,   111,  2621,   111,  1304,  2626,   713,   236,
     106,  1480,   117,   781,   261,  2689,   897,   397,   723,   725,
    1103,   296,   114,   784,   258,  1081,  1950,   111,   891,  1498,
     115,   116,  1431,   748,  1114,  1069,    64,    65,   770,   102,
   -1086,   768,   769,   771,  2404,   773,   617,  2407,   384,   776,
     777,   338,  2411,   312,  1686,  2412,  1907,  1461,   803,   389,
     789,   791,  1692,   804,   567,  1106,  1928,   792,    66,   408,
    1471,   342,   795,   797,  2427,  1464,  1432,  1933,   106,   699,
     798,  1482,   353,   799,   365,  1703,   685,   114,  1491,   114,
     308,  1651,   385,   386,  1696,   115,   116,   115,   116,  1655,
     563,   809,   810,  1852,   111,  1312,  1693,  1132,   814,   815,
     816,   114,   817,   309,   622,  1701,   119,   325,  1489,   115,
     116,  1045,  1719,   564,  1082,  1226,   824,   111,  1871,  1873,
     825,  2690,  1529,   846,   103,   830,   831,   832,   833,   834,
     835,   762,   836,  1704,   423,   840,   841,   521,   450,   451,
     452,   453,   454,   455,   423,   843,   456,   457,   458,   459,
     608,  2494,   522,  1541,  1876,   149,  1404,   985,  1242,   568,
     150,   151,  1983,   339,  1046,   478,  2691,  1196,   279,   109,
    1133,   119,   674,   119,   523,   904,   905,   259,   114,   294,
     623,  1050,  2503,  1293,  1853,   111,   115,   116,   569,   295,
    1047,  1137,   305,   853,   524,   119,   765,  1298,   872,   873,
    1153,   114,   857, -1236,   752,   986,   727,  1610,   847,   115,
     116,   525,  1851,   473,   526,   885,   881,   838,  1828,   474,
     149,  1831,   149,  1051,   260,   150,   151,   150,   151,   612,
     734,   706,   906,   938,   624,   638,   639,  1854,   907,  1867,
     858,   527,   528,   903,   149,  1546,   340,  1294,   351,   150,
     151,   328,   675,   356,  1134,  1720,    55,  1547,   475,   625,
    1154,  2553,  1896,  1108,  1138,   696,   728,   707,   109,   114,
    1061,   362,   119,  1295,   976,  1405,   934,   115,   116,   753,
    1158,  2561,  1099,   476,    64,    65,   436,   908,  2566,   854,
     736,  2569,  2570,   995,   529,   119,  1713,  1155,    56,   951,
     952,   271,   909,   363,   530,  1659,   886,   979,   757,   760,
     763,   950,  1426,  1721,  1162,   364,    57,   910,   544,   708,
     272,   149,   273,   911,  1712,  1135,   150,   151,   912,   477,
    1299,   117,    83,  1197,  1714,  1722,   987,   994,    64,    65,
    1159,   676,   923,  1062,   149,   613,    58,   953,  1139,   150,
     151,    77,  2493,  1296,  1070,  1100,  1052,  1083,   109,   677,
     368,    64,    65,   119,    59,   531,   532,   855,    60,   280,
     109,  1053,  1054,   478,   479,   766,   754,   107,   980,   545,
    1071,    61,   913,  1300,  1118,  1163,   400,    78,  1119,  1120,
    1121,  1122,  1715,   729,  1123,  1626,  1125,   412,  1126,   423,
    1128,   914,  1552,   410,  1297,  1454,   915,  2643,   916,  1301,
     988,   414,   149,    64,    65,  1156,   449,   150,   151,  1140,
     989,   730,   550,    64,    65,   709,  2653,  1063,  1164,  1189,
     117,  1427,   461,   917,   918,  1855,   533,   460,   571,  1101,
     274,   919,   471,   551,   962,   742,  1371,  1473,  1169,   572,
    1716,   990,  1682,   963,   964,  1372,  1373,    84,   552,   920,
      79,   110,   590,  1055,  1056,  1780,   483,  1180,  1181,   512,
    1182,  1184,  1186,  1187,  1781,  1782,   573,   485,   954,   955,
      85,   393,   819,   820,    86,  1199,  1200,   538,  1165,  1570,
    1746,  1747,  1204,  1205,  2028,  1160,  1576,   539,   275,  2703,
    2704,   965,  2706,  1374,  2708,  2709,   591,  2711,  1170,   548,
     281,   558,  1211,  1212,  1213,   921,   282,   112,   283,  1652,
     117,  1582,  1783,   559,  1455,  1688,  1856,    64,  1183,  1221,
    1222,  1223,   117,  1225,   423,  1227,    87,  1228,  1748,   540,
      62,   276,   580,  1474,    80,   372,  1766,  1767,   561,  1571,
     277,   857,   956,   574,  1590,  1050,  1577,  2738,  1231,  1466,
    1233,   553,   957,   958,  1594,  1706,  1467,  2276,  2277,  2278,
    1235,  1683,  1707,  1662,  1663,  1499,    88,   423,  1243,  1857,
    1500,  1583,   118,  1245,    89,    90,   946,    64,    65,   858,
     575,   586,  2084,   959,  1768,   588,    81,  1051,   610,  1260,
    1262,  1475,  1501,  1502,  2770,  1503,  1504,  1303,  1305,  1308,
      64,    65,  2097,   592,  1591,  1313,  1505,  1074,   611,   554,
    1319,  1697,   541,   615,  1595,  1362,   619,  2134,  1506,  1507,
    2137,  1320,   966,   967,  1375,  1376,  1508,   631,  2145,  1509,
    1086,  2148,  1232,  1166,  1689,  1109,   594,  1328,  1664,  2156,
    1190,  1191,  2159,  1784,  1785,   542,  2185,  1510,   576,  2166,
    1563,  1564,   555,  1171,  1511,  1512,    64,    65,  1513,  1749,
    1750,   556,  2193,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,  2212,   636,   430,  1572,   637,   968,  2583,  1377,   375,
     577,  1578,   642,   329,  1465,   595,   969,   970,  1378,  1379,
     679,   971,   690,  1380,   330,  1769,  1770,  1786,  1514,   704,
    1052,  1050,   788,  1193,  1194,  1490,  1584,  1787,  1788,    83,
    1698,   487,  1789,  1751,  1496,  1053,  1054,   972,   711,  1381,
     488,   331,   712,  1752,  1753,    64,    65,   596,  1524,   714,
    1525,   718,   315,  1532,  1533,  1526,  1527,  1528,  1790,  1592,
     720,    64,    65,  1051,   726,  1534,   431,   732,  1535,  1596,
    1537,    64,  1259,  1515,  1754,  1307,    64,    65,  1844,  1516,
      93,  1565,  1566,  1888,  1889,   597,  1539,  1215,  1540,  1771,
     827,   828,  1543,  1544,  2279,  1517,  2266,    94,   750,  1772,
    1773,   751,  2487,   774,   775,  1518,   778,  1550,  1551,  1567,
     786,   423,  1553,  1554,   793,   807,   237,   794,   332,  1556,
     808,  1557,  1813,  1814,  1559,   811,  1560,  1055,  1056,  1613,
    1774,   821,  1519,  1520,  1791,  2581,   812,  1032,  2101,  2102,
     316,  2110,  2111,  1792,  1793,   238,   813,   420,  1802,   818,
     432,  1033,   317,  1521,    84,   333,   823,  1803,  1804,   422,
    1034,  2605,   844,  1607,  2299,   845,   852,  1608,   861,  1609,
    1815,  1035,   863,  1612,    95,    64,    65,    85,   868,    64,
      65,  2024,   870,   883,   796,   888,  2103,  2316,  1618,  2112,
    1621,  1794,  1623,  1624,  1625,  1627,  1052,   899,  1522,  1630,
    1631,  1036,  2119,  2120,   900,  1805,   901,  1639,    64,    65,
    1848,  1053,  1054,  2657,  1645,   239,   692,    96,  1646,  1647,
    1648,   893,  1037,   334,   902,    64,    65,   924,   423,  1653,
     240,  2668,  1656,    87,  1203,   925,   318,  2349,  1435,   935,
      64,    65,  1668,   936,  1669,  1392,  2358,  1671,   926,   319,
    2121,   928,    97,    64,    65,  2367,   930,  1399,  1400,   335,
     932,  2655,  2656,   940,   945,  2659,  1436,  2661,  1038,  1437,
     947,   948,  1620,    88,   949,   336,   961,   721,   960,  2666,
    2667,    89,    90,   973,  2671,  2672,  1408,   981,  2675,   693,
    1724,   241,  1725,  2676,  2677,  1726,  1727,   983,  1728,  1438,
    1729,  1816,  1817,  1055,  1056,   984,  1731,  1039,  1732,    64,
      65,  1893,  1493,  1409,   991,  1738,  1393,  2104,  2105,  1660,
    2113,  2114,  1795,  1796,  2446,    64,    65,  1850,  1439,  1399,
    1400,  1440,   242,  1040,  1443,  1680,  1806,  1807,   992,   993,
    2459,  2713,   243,  1049,  2714,  2464,  1058,  1410,  1060,  2717,
     722,  1065,  2744,  1411,  1066,  2720,  1115,  1116,  2747,  1412,
    2723,  1117,  1444,    69,   702,  1445,  1538,  1129,  1446,    70,
    1131,  1142,  1041,  1143,  1042,  1818,  1545,  1413,  1144,  1145,
    1146,  2122,  2123,  1147,  1150,  1819,  1820,  1148,  1394,  1395,
    1845,  2106,  1847,  1849,  2115,  1447,  1797,  1149,  1414,  1151,
    2478,  2107,  2108,  1396,  2116,  2117,  1798,  1799,    71,  2482,
    1808,  1800,  1168,  1415,  1860,  2784,  1821,  2785,  1863,  1175,
    1809,  1810,  1173,   787,  1448,  1811,  1174,  1449,  1176,  1250,
    1177,  2765,  2109,    72,  2768,  2118,  1178,  1801,  1179,  1192,
     246,  1195,  1892,  1894,  1416,  1397,  1441,  1202,  1201,  1209,
    1206,  1812,  1900,  1210,  2779,  2124,  1911,  1214,   734,  1216,
    1217,  2502,  1229,  1917,  2504,  2125,  2126,  2505,  2786,  2506,
    1230,  2787,  2788,  1843,  1251,  1252,  1254,  1922,  1442,    73,
    2217,  1256,  1924,  1417,  1636,  1637,  1926,  1255,  1929,  1930,
    1258,  1932,  1934,  1935,  1257,  1938,  2127,  1418,  1941,  1942,
    1943,  1944,  1945,  1946,  1947,  1948,  1951,  1953,  1954,  1419,
    1673,  1956,  1957,  1958,  1959,   735,  1309,  1311,   736,  1315,
    1321,  1965,  1966,  1325,    74,  1968,  1969,  1970,   247,   160,
    1972,  1973,   161,  1326,  2575,  2271,  1420,  2578,  1329,  2580,
     248,  2579,  1450,  1976,  1977,  1330,  1978,  1979,  1421,  1331,
    1422,  1423,  2592,  2593,  2591,   737,   440,    64,    65,  2596,
    1339,  1340,   162,   420,   421,   422,  1341,  1342,  1346,  2607,
     163,  1347,  1344,   871,  1451,   249,  2285,  1345,  1348,  1354,
     876,  1674,  1355,   877,  1357,  1358,  1364,  1382,   878,  1366,
    1424,   738,   880,  1367,  1999,  2000,  2001,  1369,  1383,  2002,
    1452,  1384,  1385,  1388,  2004,  2007,  1389,  2009,  2010,  2011,
    1390,  2012,  2013,  1403,  2015,  1407,  1428,  2018,  2019,  1406,
    1433,  1434,  1456,  1457,   250,  1453,  2022,  1458,  1459,   441,
     164,    64,    65,  1866,  2026,  1399,  1400,   251,  1472,  2031,
    2032,  1087,   739,  1477,  1476,   740,  1478,  2034,  1483,  1088,
     442,   443,  1484,  1675,  1676,  1089,  2037,  1485,   939,   444,
    1494,   462,  1486,  1492,  1495,  1555,  1841,  1531,  1677,  1542,
     741,  1548,  1846,   742,  1549,  1562,  1090,   445,  1558,   463,
     165,  1561,  1575,   743,  1580,  1581,  1586,   446,  2006,  1587,
    1588,  1589,  2065,  1598,  1859,  1599,   464,  1861,   166,   167,
    1091,  1865,  1600,  1617,  1601,   168,  1602,   169,  1092,   465,
    1678,  1603,  1622,  1615,  2073,  2074,    64,    65,  1895,  2076,
    1399,  1400,  1891,  1616,  1635,  2079,  1628,   466,  1897,  1629,
    1640,   467,  1641,  1642,   170,  1654,  1910,  1661,  1670,  1913,
    1657,  1658,  -443,  1672,   468,  1681,  1093,  1684,  1918,  1919,
    2233,  1694,  1699,  1708,  1094,  1717,  2050,  1705,  1718,  1923,
    1723,  2234,  1775,  1730,  1188,  1736,  2056,  1737,  1742,  1761,
    1764,  2061,  1124,  1777,  1779,  1822,  1823,  1824,  1825,  1130,
    1829,  1830,  2431,  2432,   469,  2434,  2435,  1087,  2235,  2438,
    2439,  1832,  1833,  1834,  1837,  1088,  1840,  1858,  1862,  1095,
     171,  1089,  1868,  1877,  1878,  1879,  1880,  2743,  1881,  1869,
    1883,  1096,  1874,  1884,  1885,  1890,  1886,  1909,  1887,  1914,
    1925,  1927,  1090,  1931,  1962,  2236,  1974,  1097,  1939,  1975,
    1940,  1955,  2180,  1980,  2181,  1981,  2183,  1982,  2017,  1984,
    1985,  1986,  2473,  1987,  1988,  1991,  1091,  1989,  1990,  1992,
    1995,  2485,  1993,  1994,  1092,  2194,  2195,  2196,  2197,  2198,
    2199,  2200,  2201,  2202,  1996,  1997,  1998,  2288,  2014,  2016,
     290,  2020,  2033,  2038,  2450,  2039,  2040,  2041,  2042,  2208,
    2043,  2210,  2075,  2128,  2077,  2078,  2451,  2081,  2082,  2083,
    2085,  2086,  1093,  2087,  2090,  2098,  1218,  2092,  2216,   423,
    1094,  2093,  2094,  1220,  2220,  2099,  2139,  2100,  2129,  2130,
    2131,  2135,  2136,  2223,  2224,  2225,  2226,  2227,  2228,  2229,
    2230,  2231,  2232,  2138,  2140,  2245,  2246,  2247,  2248,  2249,
    2250,  2251,  2252,  2253,  2254,  2255,  2256,  2141,  2259,  2681,
    2260,  2261,  2262,  2142,  2146,  1095,  2147,  2150,  1236,  1237,
    2149,   437,  2151,  1241,   423,  2272,  1244,  1096,  2152,  2153,
    2157,  2158,  2452,  2160,  2161,  2162,  2163,  2167,  1253,  2168,
    2453,  2169,  2171,  1097,  2172,  2174,  2175,  2454,  2177,  2184,
    2186,  2189,  2237,  2192,  2238,  2203,  2204,  2280,  2205,  2281,
    2206,  2282,  2207,  2284,  2211,   423,  2286,  2258,  2287,  2565,
    2263,  2264,  2267,  2568,  2273,  2292,  2293,  2275,  2618,  2289,
    2290,  2681,  2297,  2291,  2298,  2294,  2335,  1352,  2301,  2302,
     499,  2303,   506,   509,  2305,   514,   518,  2306,  2307,  2308,
    2309,  2337,  2339,  2342,  2455,  2344,  2345,  2346,  2239,  2602,
    2350,  2351,  2456,  2352,  2353,  2354,  2355,  2359,  2360,  2458,
    2361,  2362,  2363,   584,  2364,  2368,  2369,   826,  2370,  2377,
    2380,  2388,  2391,  2394,  2395,  2397,  2338,  2400,  2401,  1391,
    2402,   599,   605,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,  2405,  2410,  2414,  2430,  2480,  2481,  2483,  2304,  2489,
    2490,  2492, -1099,  2495,   688,  2496,  2687,  2497,  2403,  2498,
     806,  2499,  2501,  2507,  2508,  2517,   698,  2526,  2535,  2188,
    2541,  2545,  2548,  2554,  2562,  2573,  2728,  2584,  2585,  2237,
    2586,  2587,  2588,  2589,  2758,  2604,   719,  2336,  2611,  2613,
    2693,  2614,  2616,  2617,  2629,  2624,  2654,  2660,  2678,  2663,
    2664,  2665,  2670,  2729,  2684,  2213,  2685,  2686,  2688,  2694,
    2408,  2696,  2707,  2715,  2457,  2718,  2721,  2732,   218,  2730,
    2731,  2415,  2416,  2417,  2418,  2419,  2420,  2421,  2422,  2423,
    2424,  2425,  2739,  2742,  2725,  2752,  2753,  2428,  2759,  2767,
    2778,   423,   423,   219,   423,   423,  2734,  2736,   423,   423,
    2440,  2441,  2442,  2443,  2444,  2445,  2771,  2447,  2448,  2449,
    2772,  2774,  2780,     0,  2781,  2782,  2783,  1152,     0,     0,
       0,     0,     0,  2460,  2461,  2462,  2463,   220,  2465,  2466,
    2467,  2468,  2469,  2470,   221,  2472,     0,     0,  2476,  2477,
       0,     0,     0,     0,   822,   222,   223,     0,     0,     0,
       0,     0,   224,  1614,     0,   829,     0,  2484,     0,     0,
     423,  2486,     0,     0,   837,  2488,     0,     0,     0,  2491,
       0,     0,     0,     0,     0,   225,     0,     0,     0,     0,
       0,     0,     0,  1638,     0,     0,     0,     0,  1643,     0,
       0,     0,     0,   226,     0,     0,     0,     0,  1649,     0,
       0,     0,     0,     0,     0,     0,     0,   227,   228,     0,
       0,     0,     0,     0,   229,  2509,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   874,   875,     0,   230,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   879,     0,     0,     0,     0,
     882,     0,     0,     0,     0,     0,     0,     0,     0,   894,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   231,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1755,     0,  2556,     0,     0,
       0,  2558,     0,     0,     0,     0,     0,  1765,     0,     0,
       0,  2559,  2560,     0,     0,   643,   644,  2564,   423,     0,
       0,  2567,   423,     0,     0,  1826,  1827,  2572,     0,     0,
    2576,  2577,     0,     0,     0,   232,     0,     0,     0,   941,
     942,   943,   944,     0,     0,   233,     0,     0,     0,  2594,
    2595,     0,  2597,  2598,  2599,  2600,  2601,     0,   423,  2603,
       0,     0,     0,  2606,     0,     0,     0,     0,     0,     0,
       0,     0,   645,     0,   234,  2615,     0,     0,   646,     0,
    2619,     0,     0,     0,     0,   647,     0,   648,     0,     0,
       0,     0,   649,     0,     0,   650,  2630,     0,     0,  1085,
       0,   651,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   652,     0,     0,     0,     0,     0,   653,     0,
       0,     0,     0,     0,     0,     0,     0,   654,     0,     0,
       0,     0,     0,     0,  2479,     0,     0,  1335,  2642,     0,
       0,     0,   655,  2646,  1912,  2648,     0,     0,     0,     0,
       0,  2651,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   656,  2658,     0,     0,     0,     0,  1386,
       0,     0,     0,     0,     0,     0,     0,     0,   657,     0,
       0,     0,  2669,  2702,     0,     0,  2673,     0,   658,   659,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1961,     0,  2692,     0,     0,   660,
    1967,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   661,  2705,     0,     0,     0,     0,  2710,     0,
    2712,     0,     0,     0,     0,     0,   662,  2716,   663,     0,
       0,     0,  2719,     0,     0,     0,     0,  2722,     0,     0,
       0,  1219,   664,     0,     0,     0,     0,   665,     0,     0,
       0,     0,     0,  1224,   666,     0,     0,     0,     0,  2733,
    2735,   667,     0,     0,     0,     0,     0,  2003,     0,     0,
       0,     0,     0,  2008,     0,     0,     0,     0,     0,   668,
       0,     0,     0,  2745,     0,     0,  2746,     0,     0,  2748,
    1234,     0,   669,   670,     0,   671,     0,     0,  2023,     0,
    2754,  2755,  2756,  2757,  2029,     0,  2590,     0,     0,     0,
       0,     0,  2766,     0,     0,  2769,     0,   996,   997,   998,
       0,     0,  2773,     0,  2775,     0,  2608,     0,     0,     0,
    2612,     0,     0,  2045,     0,   672,     0,     0,     0,     0,
       0,  2052,     0,     0,     0,     0,   999,  1000,     0,     0,
    1001,     0,     0,  1002,     0,     0,     0,     0,  2741,     0,
    1003,     0,     0,  1324,  1004,     0,     0,     0,     0,     0,
       0,     0,  1005,  1006,     0,     0,     0,     0,     0,     0,
    1007,  1008,     0,     0,     0,     0,     0,     0,     0,     0,
    2761,  2089,     0,  2764,     0,     0,     0,     0,  1009,  2095,
    2096,     0,     0,     0,  1010,     0,     0,     0,  1011,  1012,
       0,     0,  1013,     0,  2132,  2133,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2143,  2144,     0,  1014,     0,
       0,     0,     0,     0,     0,     0,  2154,  2155,  1470,     0,
       0,     0,     0,     0,     0,     0,  2164,  2165,     0,  1015,
       0,     0,  2170,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2173,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1016,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1530,  1739,  1740,  1741,     0,  1017,  2178,     0,     0,     0,
    1536,  1743,  1744,  1745,     0,     0,     0,     0,  1756,  1757,
    1758,  1666,     0,  1759,  1760,     0,  1762,  1763,  2191,     0,
       0,     0,     0,     0,     0,  1018,   107,  1019,     0,     0,
       0,     0,     0,  1020,  1021,     0,     0,     0,     0,    64,
      65,     0,     0,     0,     0,     0,  1835,  1836,  1022,  1023,
    1838,  1839,  2214,  2215,     0,   107,     0,     0,     0,  1024,
    1025,     0,     0,     0,     0,     0,     0,     0,     0,  2218,
    2219,     0,     0,     0,  2221,  2222,  2751,     0,     0,     0,
       0,     0,     0,     0,     0,  1026,     0,  1027,     0,     0,
       0,     0,     0,   109,     0,     0,     0,     0,     0,  1028,
       0,  1029,  1611,     0,     0,     0,     0,  1030,     0,     0,
     110,     0,     0,     0,  2265,     0,     0,  2269,  2270,  1619,
       0,     0,     0,     0,     0,  2274,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   110,
       0,  1031,     0,  1644,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1650,     0,     0,     0,     0,     0,  2283,
       0,     0,     0,     0,     0,     0,   112,     0,     0,     0,
       0,     0,  1667,     0,     0,  2295,     0,     0,     0,     0,
       0,     0,  1679,     0,     0,     0,     0,  1687,     0,     0,
       0,     0,     0,     0,     0,   112,     0,     0,  2310,     0,
       0,     0,     0,  2314,     0,     0,     0,     0,     0,  2319,
       0,     0,     0,     0,  2323,     0,     0,     0,  2326,     0,
    2341,  2329,     0,     0,  2332,     0,  2334,     0,     0,     0,
    2343,   118,     0,     0,  2347,  2348,     0,     0,     0,     0,
       0,     0,     0,  2356,  2357,     0,     0,     0,     0,     0,
       0,     0,  2365,  2366,     0,   117,     0,     0,  2371,     0,
     118,     0,     0,     0,     0,     0,     0,     0,  2381,  2382,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2392,
    2393,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2396,     0,     0,     0,     0,     0,     0,     0,     0,  2398,
       0,  2399,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1842,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
    1864,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,  1898,
       0,     0,  1899,     0,     0,     0,     0,     0,     0,     0,
       0,   517,  1915,  1916,     0,     0,     0,     0,     0,     0,
    1920,     0,     0,     0,  2080,     0,   107,  1921,     0,     0,
       0,  2471,     0,     0,     0,     0,     0,  2088,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2091,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   109,     0,     0,  1960,     0,     0,
    1963,  1964,     0,     0,     0,     0,     0,     0,     0,  1971,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2511,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2520,     0,     0,     0,     0,     0,     0,     0,
     110,  2529,     0,     0,     0,     0,     0,     0,     0,  2176,
    2538,     0,     0,     0,     0,     0,     0,  2540,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2544,     0,
       0,     0,     0,     0,  2547,     0,     0,  2549,     0,     0,
    2550,     0,     0,     0,     0,  2005,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   112,     0,     0,     0,
       0,     0,     0,  2021,     0,     0,     0,  2551,     0,     0,
       0,     0,     0,  2555,     0,     0,     0,  2557,     0,  2030,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2563,  2035,     0,  2036,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2044,     0,     0,  2046,
       0,  2047,  2048,  2049,  2051,     0,   117,  2053,     0,     0,
    2054,   118,     0,  2055,  2057,     0,  2058,  2059,  2060,  2062,
       0,  2063,  2064,     0,     0,     0,     0,  2066,  2067,  2068,
       0,   106,  2069,  2070,     0,     0,     0,     0,  2071,  2072,
       0,     0,     0,     0,     0,     0,   107,  2631,     0,     0,
       0,     0,     0,     0,     0,     0,  2633,     0,     0,     0,
       0,     0,     0,     0,     0,  2635,     0,   108,     0,     0,
       0,  2638,     0,     0,     0,  2640,     0,     0,  2641,     0,
       0,     0,     0,     0,   109,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     110,     0,     0,     0,     0,     0,  2662,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   111,     0,
       0,  2340,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2179,   345,     0,     0,  2182,     0,     0,     0,
     346,     0,     0,     0,     0,     0,     0,     0,  2187,     0,
       0,  2190,     0,     0,     0,     0,   112,     0,     0,     0,
       0,  2372,  2373,  2374,  2375,  2376,     0,  2378,  2379,     0,
       0,     0,  2383,  2384,  2385,  2386,  2387,     0,  2389,  2390,
       0,  2209,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,     0,     0,     0,  2724,    64,
      65,     0,   114,     0,     0,     0,     0,     0,     0,     0,
     115,   116,     0,     0,     0,   107,   117,     0,     0,  2737,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   285,     0,  2257,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   109,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2762,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2776,     0,     0,  2777,     0,     0,
       0,     0,     0,     0,     0,     0,   119,     0,     0,   110,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2296,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,     0,     0,     0,     0,   149,     0,     0,     0,     0,
     150,   151,     0,  2327,     0,   112,     0,     0,     0,     0,
       0,     0,   347,     0,   348,     0,     0,     0,     0,     0,
       0,     0,     0,  2510,     0,     0,  2512,  2513,  2514,  2515,
    2516,     0,  2518,  2519,     0,  2521,  2522,  2523,  2524,  2525,
       0,  2527,  2528,   286,  2530,  2531,  2532,  2533,  2534,     0,
    2536,  2537,     0,  2539,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2542,  2543,   117,     0,     0,     0,     0,
     118,     0,     0,     0,  2546,     0,     0,     0,     0,     0,
       0,   287,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2406,
       0,     0,  2409,     0,     0,     0,     0,     0,     0,     0,
    2413,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   288,     0,   107,     0,  2426,     0,     0,  2429,
       0,     0,     0,     0,  2433,     0,     0,  2436,  2437,     0,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
       0,   490,   491,     0,     0,   492,     0,     0,     0,     0,
       0,     0,  2632,     0,     0,     0,     0,     0,     0,   600,
     107,  2634,     0,     0,     0,     0,     0,     0,   493,     0,
    2636,     0,  2637,     0,     0,     0,  2639,     0,   110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2500,     0,     0,     0,
     601,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
       0,     0,     0,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   110,     0,   494,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   602,     0,
       0,     0,     0,  2697,   495,  2698,     0,  2699,     0,     0,
    2700,     0,  2701,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   496,     0,     0,     0,
       0,     0,     0,  2552,     0,     0,     0,     0,     0,   118,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   603,     0,     0,
       0,     0,     0,     0,     0,     0,  2571,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2582,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   497,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2623,     0,     0,     0,  2628,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,     0,   498,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   604,     0,     0,     0,     0,     0,     0,
       0,     0,  2644,  2645,     0,  2647,     0,     0,     0,     0,
    2649,  2650,     0,     0,     0,  2652,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     0,  1263,  1264,  1265,  2674,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2695,     0,  1266,  1267,   107,     0,  1268,     0,
       0,     0,     0,     0,     0,  1269,     0,     0,  1270,     0,
       0,     0,  1271,     0,     0,     0,     0,     0,     0,     0,
    1272,  1273,     0,     0,   107,     0,     0,     0,  1274,     0,
       0,     0,     0,     0,   109,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1275,  1276,     0,     0,
    1277,     0,   109,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2740,  1278,   107,     0,     0,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2749,     0,     0,     0,     0,  1279,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2760,   110,     0,
    2763,     0,     0,     0,     0,     0,     0,     0,   504,     0,
    1280,     0,     0,     0,     0,     0,     0,     0,     0,  1281,
       0,     0,     0,     0,     0,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   110,     0,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,  1282,     0,  1283,     0,     0,     0,     0,
       0,  1284,  1285,     0,  1323,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   117,  1286,     0,     0,
       0,   118,     0,     0,     0,     0,     0,     0,  1287,     0,
       0,     0,     0,     0,     0,     0,     0,   112,     0,     0,
       0,     0,     0,     0,   117,     0,     0,     0,     0,   118,
     110,     0,     0,  1288,     0,  1289,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1290,     0,     0,     0,     0,
       0,   974,     0,     0,     0,  1291,   975,     0,     0,     0,
       0,   508,     0,     0,     0,   107,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   118,     0,     0,     0,   112,     0,     0,  1292,
       0,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,     0,   110,
     505,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,     0,     0,     0,     0,   112,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,     0,     0,     0,     0,
       0,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     0,     2,     0,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     0,     0,     0,     0,     5,     6,     0,
       7,     8,     9,     0,     0,     0,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,     0,    11,     0,    12,
      13,     0,     0,     0,     0,     0,     0,     0,     0,    14,
      15,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,    16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    17,     0,     0,     0,    18,     0,     0,    19,
       0,     0,     0,    20,    21,     0,     0,     0,     0,     0,
      22,     0,     0,     0,     0,     0,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,     0,     0,    25,    26,    27,     0,     0,    28,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,     0,    35,     0,     0,     0,     0,
       0,     0,    36,     0,     0,     0,    37,     0,     0,    38,
       0,    39,     0,    40,     0,     0,     0,     0,    41,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    42,     0,     0,     0,     0,     0,    43,     0,
       0,   175,     0,     0,   176,     0,     0,   177,     0,     0,
       0,     0,     0,    44,    45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,   178,    47,   179,   180,
     181,     0,     0,    48,     0,     0,    49,    50,   182,     0,
     183,     0,     0,     0,     0,   184,     0,   185,   186,   187,
       0,     0,     0,     0,     0,   188,     0,   189,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,     0,     0,
       0,     0,     0,     0,    52,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   190,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   191,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   192,   193,     0,     0,   194,     0,
       0,     0,   195,     0,   196,  1360,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   197,   198,     0,     0,
     199,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     200,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   201,   202,     0,
       0,     0,     0,     0,     0,   203,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   204,
       0,   205,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   206,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   207,   208,     0,     0,     0,     0,     0,     0,     0,
     209,     0,     0,     0,     0,     0,     0,   210,     0,     0,
       0,     0,     0,   211,     0,   212,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,  1361,     0,     0,     0,     0,     0,
       0,     0,   213
};

static const yytype_int16 yycheck[] =
{
       3,    50,   663,  1446,  1646,   481,  1648,     4,    11,   658,
     659,     3,     4,     5,     4,   437,     5,     4,    27,    58,
       5,   876,   877,   878,     5,   447,     5,     4,    32,    32,
       4,     4,  1145,    47,  1147,     3,     4,    40,     4,    71,
      49,    32,     0,    52,    32,    17,    49,   136,     5,    52,
       3,     4,    55,    20,    63,     5,    59,     3,     4,    62,
    1173,  1174,  1175,    66,    67,     3,     4,    70,     3,     4,
      73,    74,     3,     4,    77,    17,    16,    86,    81,     3,
       4,     3,     4,    86,   939,   152,     3,     4,     3,     4,
      37,   170,     5,   167,   133,   104,    99,   100,   101,   102,
     103,   104,   997,     3,     4,    36,    17,    27,    62,   968,
      17,     4,   971,    32,   288,     3,     4,   120,     3,     4,
     101,     3,     4,    21,   196,    30,   107,   123,   216,   988,
      67,     3,     4,    79,     5,     3,     4,    27,     5,   171,
      57,   159,     3,     4,   134,    84,    27,    95,    36,   228,
       3,     4,   155,  2680,    36,   141,    62,    33,    40,     4,
      51,   250,   101,    21,    31,   113,    62,    12,   122,   187,
      27,   168,    40,   196,    67,   178,     4,     5,     4,     5,
     183,   253,     3,     4,    21,  2030,   143,     3,     4,   100,
     229,    96,    60,   179,   113,   269,   263,    21,    21,  2726,
       4,  2046,  2047,  2048,   135,   244,  2051,    60,  2053,  2054,
     101,   147,  2057,  2058,  2059,   294,   248,  2062,  2063,   110,
     308,  2066,   190,  2068,  2069,   257,  2071,   200,   121,   175,
     196,   113,    27,    21,   207,   208,    16,   260,    21,    67,
     243,   234,   190,   215,   197,   113,   295,   135,   139,   169,
     197,   247,     4,   135,   161,   916,   259,   260,     4,   199,
     165,    89,   276,    67,   183,     5,   185,   306,   187,   188,
     243,   238,   275,   215,   277,   249,   195,     4,    30,   169,
     702,   285,   285,   286,     4,   288,   289,   253,   291,   274,
       5,   210,    14,   121,   285,   121,   211,   285,   301,    21,
       4,   251,   219,   290,    26,   190,   296,   253,   311,   312,
     289,    33,   205,   290,   142,   197,   308,   121,   315,   308,
     213,   214,   242,   277,   305,   297,     3,     4,   228,   197,
     288,   334,   335,   336,  2179,   338,   249,  2182,   306,   342,
     343,     4,  2187,   296,   242,  2190,   355,   228,   253,    71,
     353,   354,   242,   258,   137,   297,   228,   360,   296,   230,
    1021,   296,   365,   366,  2209,   296,   286,   228,     4,   288,
     373,   228,   296,   376,   296,   170,   349,   205,  1039,   205,
     286,  1236,   350,   351,   242,   213,   214,   213,   214,  1244,
     286,   394,   395,   107,   121,   211,   286,    40,   401,   402,
     403,   205,   405,   309,   119,   242,   299,   298,   296,   213,
     214,   163,    27,   309,   296,   837,   419,   121,   242,   242,
     423,   306,  1071,   105,   292,   428,   429,   430,   431,   432,
     433,    67,   435,   228,   437,   438,   439,    45,   160,   161,
     162,   163,   164,   165,   447,   448,   168,   169,   170,   171,
     196,  2296,    60,  1102,   242,   348,   123,    14,   880,   242,
     353,   354,  1575,   126,   216,   350,   351,    99,    67,    57,
     113,   299,    92,   299,    82,     4,     5,   305,   205,   305,
     195,    64,  2327,    67,   198,   121,   213,   214,   271,   315,
     242,    40,    89,    79,   102,   299,    13,    30,   501,   502,
      62,   205,   141,     0,    34,    62,    62,     4,   190,   213,
     214,   119,  1407,   190,   122,     4,   519,   436,  1377,   196,
     348,  1380,   348,   106,   352,   353,   354,   353,   354,     6,
      62,    55,    61,   582,   249,   257,   258,   251,    67,  1434,
     179,   149,   150,   546,   348,     5,   209,   131,   234,   353,
     354,     4,   172,     0,   197,   170,    12,    17,   235,   274,
     122,  2406,  1457,   290,   113,   287,   122,    91,    57,   205,
      40,   273,   299,   157,   623,   242,   579,   213,   214,   109,
      62,  2426,    40,   260,     3,     4,   197,   116,  2433,   175,
     122,  2436,  2437,   642,   202,   299,   132,   159,    54,    14,
      15,    46,   131,     5,   212,     4,   525,    88,   330,   331,
     332,   614,   123,   228,    88,     4,    72,   146,     5,   143,
      65,   348,    67,   152,  1285,   268,   353,   354,   157,   306,
     163,   219,    28,   265,   170,  1296,   193,   640,     3,     4,
     122,   261,   561,   113,   348,   122,   102,    62,   197,   353,
     354,     4,  2294,   237,   657,   113,   239,   660,    57,   279,
       5,     3,     4,   299,   120,   273,   274,   253,   124,   206,
      57,   254,   255,   350,   351,   192,   206,    19,   159,    66,
     263,   137,   211,   216,   687,   159,     5,    40,   691,   692,
     693,   694,   228,   249,   697,    60,   699,     5,   701,   702,
     703,   230,  1124,    31,   288,   123,   235,  2552,   237,   242,
     267,     5,   348,     3,     4,   277,     4,   353,   354,   268,
     277,   277,    46,     3,     4,   249,  2571,   197,    62,   778,
     219,   242,    67,   262,   263,   107,   344,   119,    37,   197,
     185,   270,   120,    67,     5,   277,     5,   132,    62,    48,
     286,   308,   123,    14,    15,    14,    15,   153,    82,   288,
     113,   103,    44,   346,   347,     5,   288,   770,   771,    33,
     773,   774,   775,   776,    14,    15,    75,   171,   193,   194,
     176,   200,     4,     5,   180,   788,   789,     5,   122,    62,
      14,    15,   795,   796,  1649,   277,    62,    90,   243,  2644,
    2645,    62,  2647,    62,  2649,  2650,    88,  2652,   122,    16,
     347,    67,   815,   816,   817,   344,   353,   159,   355,  1241,
     219,    62,    62,   235,   242,   123,   198,     3,     4,   832,
     833,   834,   219,   836,   837,   838,   232,   840,    62,     6,
     296,   286,    90,   228,   197,   125,    14,    15,   287,   122,
     295,   141,   267,   152,    62,    64,   122,  2702,   861,   266,
     863,   185,   277,   278,    62,   266,   273,  1980,  1981,  1982,
     873,   242,   273,    24,    25,    22,   272,   880,   881,   251,
      27,   122,   224,   886,   280,   281,   608,     3,     4,   179,
     189,    73,  1751,   308,    62,    31,   249,   106,     5,   902,
     903,   286,    49,    50,  2749,    52,    53,   910,   911,   912,
       3,     4,  1771,   195,   122,   918,    63,   126,     4,   243,
     923,   123,    89,     4,   122,   974,     5,  1786,    75,    76,
    1789,   934,   193,   194,   193,   194,    83,     5,  1797,    86,
     662,  1800,   861,   277,   242,   667,   152,   950,    99,  1808,
       4,     5,  1811,   193,   194,   122,  1851,   104,   257,  1818,
      42,    43,   286,   277,   111,   112,     3,     4,   115,   193,
     194,   295,  1867,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,  1896,     4,    40,   277,     5,   267,  2450,   267,   125,
     309,   277,     5,    37,  1017,   221,   277,   278,   277,   278,
       5,   282,     5,   282,    48,   193,   194,   267,   175,     4,
     239,    64,   125,     4,     5,  1038,   277,   277,   278,    28,
     242,   171,   282,   267,  1047,   254,   255,   308,     4,   308,
     180,    75,     4,   277,   278,     3,     4,   263,  1061,     4,
    1063,     5,    26,     4,     5,  1068,  1069,  1070,   308,   277,
       4,     3,     4,   106,    99,  1078,   113,   122,  1081,   277,
    1083,     3,     4,   230,   308,    17,     3,     4,     5,   236,
      84,   173,   174,     4,     5,   301,  1099,   819,  1101,   267,
     425,   426,  1105,  1106,  1999,   252,  1961,   101,     5,   277,
     278,     4,    60,   274,     4,   262,     4,  1120,  1121,   201,
       4,  1124,  1125,  1126,     4,     4,    89,     5,   152,  1132,
     200,  1134,    14,    15,  1137,     4,  1139,   346,   347,  1188,
     308,     5,   289,   290,     5,  2448,     4,    67,    14,    15,
     114,    14,    15,    14,    15,   118,     4,     9,     5,     4,
     197,    81,   126,   310,   153,   189,     5,    14,    15,    11,
      90,  2474,     5,  1176,  2029,   273,   171,  1180,     4,  1182,
      62,   101,     4,  1186,   178,     3,     4,   176,   180,     3,
       4,   180,   171,     4,    12,   199,    62,  2052,  1201,    62,
    1203,    62,  1205,  1206,  1207,  1208,   239,     5,   355,  1212,
    1213,   131,    14,    15,     5,    62,     4,  1220,     3,     4,
       5,   254,   255,  2576,  1227,   188,    40,   221,  1231,  1232,
    1233,   199,   152,   257,   199,     3,     4,   191,  1241,  1242,
     203,  2594,  1245,   232,    12,   191,   210,  2106,    22,     5,
       3,     4,  1255,   229,  1257,    83,  2115,  1260,    67,   223,
      62,    67,   256,     3,     4,  2124,    67,     7,     8,   293,
     228,  2574,  2575,     5,     4,  2578,    50,  2580,   198,    53,
       4,     4,  1201,   272,   199,   309,     5,    40,    88,  2592,
    2593,   280,   281,    88,  2597,  2598,    40,     5,  2601,   113,
    1303,   264,  1305,  2606,  2607,  1308,  1309,     4,  1311,    83,
    1313,   193,   194,   346,   347,     4,  1319,   237,  1321,     3,
       4,     5,  1044,    67,     5,  1328,   154,   193,   194,  1248,
     193,   194,   193,   194,  2229,     3,     4,     5,   112,     7,
       8,   115,   305,   263,    22,  1264,   193,   194,     5,     4,
    2245,  2654,   315,     5,  2657,  2250,   101,   101,    17,  2662,
     113,     4,  2715,   107,     5,  2668,    17,    17,  2721,   113,
    2673,     4,    50,   190,   290,    53,  1098,     4,    56,   196,
       4,     4,   302,    99,   304,   267,  1108,   131,     5,     5,
      88,   193,   194,     4,    88,   277,   278,     5,   226,   227,
    1403,   267,  1405,  1406,   267,    83,   267,     5,   152,     5,
    2265,   277,   278,   241,   277,   278,   277,   278,   235,  2274,
     267,   282,     4,   167,  1427,  2778,   308,  2780,  1431,     4,
     277,   278,     5,   349,   112,   282,     5,   115,     4,   168,
       5,  2744,   308,   260,  2747,   308,     5,   308,     5,     4,
      26,     4,  1455,  1456,   198,   283,   230,     5,    12,     4,
      12,   308,  1465,     4,  2767,   267,  1469,     4,    62,     4,
       4,  2326,     5,  1476,  2329,   277,   278,  2332,  2781,  2334,
       5,  2784,  2785,  1402,     5,     4,   159,  1490,   262,   306,
    1912,     4,  1495,   237,  1216,  1217,  1499,   159,  1501,  1502,
       4,  1504,  1505,  1506,     5,  1508,   308,   251,  1511,  1512,
    1513,  1514,  1515,  1516,  1517,  1518,  1519,  1520,  1521,   263,
      83,  1524,  1525,  1526,  1527,   119,   262,   262,   122,   290,
       5,  1534,  1535,     4,   351,  1538,  1539,  1540,   114,    44,
    1543,  1544,    47,     5,  2442,  1967,   290,  2445,     5,  2447,
     126,  2446,   230,  1556,  1557,     5,  1559,  1560,   302,     5,
     304,   305,  2460,  2461,  2459,   159,    35,     3,     4,  2464,
       4,     4,    77,     9,    10,    11,     5,     5,     5,  2477,
      85,     5,   275,   499,   262,   161,  2008,   275,     5,     4,
     506,   154,     4,   509,     5,     5,     5,     4,   514,     5,
     344,   195,   518,     5,  1607,  1608,  1609,     5,     4,  1612,
     288,     5,     5,     4,  1617,  1618,     5,  1620,  1621,  1622,
       5,  1624,  1625,   242,  1627,   107,     5,  1630,  1631,   242,
     141,   107,   242,   107,   210,    40,  1639,     5,   215,   108,
     145,     3,     4,     5,  1647,     7,     8,   223,    40,  1652,
    1653,    93,   246,   215,   247,   249,     5,  1660,     4,   101,
     129,   130,     5,   226,   227,   107,  1669,     5,   584,   138,
       4,    54,   215,   215,     4,     4,  1398,     5,   241,     5,
     274,     5,  1404,   277,     5,     4,   128,   156,   113,    72,
     195,   113,     5,   287,     5,     5,     4,   166,  1617,     5,
       5,     4,  1705,     5,  1426,     5,    89,  1429,   213,   214,
     152,  1433,     4,    12,     5,   220,     5,   222,   160,   102,
     283,     4,    12,     5,  1727,  1728,     3,     4,     5,  1732,
       7,     8,  1454,     5,     5,  1738,     6,   120,  1460,     4,
       4,   124,     4,     4,   249,     4,  1468,     5,     4,  1471,
      38,    38,     0,     5,   137,   242,   198,   242,  1480,  1481,
      56,   141,   242,   123,   206,     4,  1685,   170,   251,  1491,
     211,    67,     5,   199,     6,     4,  1695,     4,     4,     4,
       4,  1700,   698,     5,     5,   275,     5,     5,     5,   705,
       4,     4,  2214,  2215,   177,  2217,  2218,    93,    94,  2221,
    2222,     5,     4,     4,     4,   101,     5,     5,     5,   251,
     315,   107,   242,   312,   312,     4,     4,  2712,     4,   242,
       4,   263,   242,     4,     4,     4,   312,     4,   312,     5,
       5,   228,   128,   228,     5,   131,     5,   279,   228,     4,
     228,   228,  1845,     5,  1847,     5,  1849,     4,     6,     5,
       5,     4,   308,     4,     4,     4,   152,     5,     5,     4,
       4,  2283,     5,     5,   160,  1868,  1869,  1870,  1871,  1872,
    1873,  1874,  1875,  1876,     5,     5,     4,    12,     5,     4,
      32,     4,     4,     4,   356,     5,     5,     5,     5,  1892,
       5,  1894,     4,   275,     5,     4,   356,     5,     5,     5,
       4,     4,   198,     5,     4,     4,   822,     5,  1911,  1912,
     206,     5,     5,   829,  1917,     4,   275,     5,     5,     5,
       5,     4,     4,  1926,  1927,  1928,  1929,  1930,  1931,  1932,
    1933,  1934,  1935,     5,     5,  1938,  1939,  1940,  1941,  1942,
    1943,  1944,  1945,  1946,  1947,  1948,  1949,     5,  1951,  2610,
    1953,  1954,  1955,     5,     4,   251,     4,   275,   874,   875,
       5,   113,     5,   879,  1967,  1968,   882,   263,     5,     5,
       4,     4,   356,     5,     5,     5,     5,     4,   894,     4,
     356,     5,     4,   279,     4,     4,     4,   356,     5,     5,
       5,     5,   288,     5,   290,     4,     4,  2000,     5,  2002,
       4,  2004,     4,  2006,     5,  2008,  2009,     5,  2011,  2431,
       4,     4,     4,  2435,     4,  2018,  2019,     4,     6,     5,
       5,  2682,  2025,     4,  2027,     4,     4,   967,  2031,     5,
     182,  2034,   184,   185,     5,   187,   188,     5,     5,     5,
       5,     5,     4,     4,   356,     5,     5,     5,   344,  2471,
       4,     4,   356,     5,     5,     5,     5,     4,     4,   356,
       5,     5,     5,   215,     5,     4,     4,   424,     5,     4,
       4,     4,     4,     4,     4,     4,  2079,     4,     4,   995,
       4,   233,   234,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,     4,     4,     4,     4,     4,     4,     4,  2037,     5,
       5,     4,   288,     5,   276,     4,     6,     5,  2177,     4,
     380,     5,     5,     5,     4,     4,   288,     4,     4,  1861,
       4,     4,     4,     4,     4,     4,   356,     5,     4,   288,
       5,     5,     5,     4,  2737,     5,   308,  2076,     5,     4,
    2619,     5,     5,     4,  2508,     5,     4,     4,  2608,     5,
       4,     4,     4,  2682,     4,  1897,     5,     5,     4,     4,
    2183,     4,     4,     4,  2240,     5,     4,     4,    19,     5,
       5,  2194,  2195,  2196,  2197,  2198,  2199,  2200,  2201,  2202,
    2203,  2204,     4,     4,  2678,     5,     5,  2210,     5,     4,
       4,  2214,  2215,    44,  2217,  2218,  2692,  2693,  2221,  2222,
    2223,  2224,  2225,  2226,  2227,  2228,     5,  2230,  2231,  2232,
       5,     5,     4,    -1,     5,     5,     5,   737,    -1,    -1,
      -1,    -1,    -1,  2246,  2247,  2248,  2249,    78,  2251,  2252,
    2253,  2254,  2255,  2256,    85,  2258,    -1,    -1,  2261,  2262,
      -1,    -1,    -1,    -1,   416,    96,    97,    -1,    -1,    -1,
      -1,    -1,   103,  1189,    -1,   427,    -1,  2280,    -1,    -1,
    2283,  2284,    -1,    -1,   436,  2288,    -1,    -1,    -1,  2292,
      -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1219,    -1,    -1,    -1,    -1,  1224,    -1,
      -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,  1234,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,   159,    -1,
      -1,    -1,    -1,    -1,   165,  2338,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   504,   505,    -1,   186,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   517,    -1,    -1,    -1,    -1,
     522,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   531,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   224,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1345,    -1,  2410,    -1,    -1,
      -1,  2414,    -1,    -1,    -1,    -1,    -1,  1357,    -1,    -1,
      -1,  2424,  2425,    -1,    -1,     4,     5,  2430,  2431,    -1,
      -1,  2434,  2435,    -1,    -1,  1375,  1376,  2440,    -1,    -1,
    2443,  2444,    -1,    -1,    -1,   276,    -1,    -1,    -1,   601,
     602,   603,   604,    -1,    -1,   286,    -1,    -1,    -1,  2462,
    2463,    -1,  2465,  2466,  2467,  2468,  2469,    -1,  2471,  2472,
      -1,    -1,    -1,  2476,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    -1,   315,  2488,    -1,    -1,    67,    -1,
    2493,    -1,    -1,    -1,    -1,    74,    -1,    76,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    84,  2509,    -1,    -1,   661,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,   107,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,  2266,    -1,    -1,   955,  2551,    -1,
      -1,    -1,   131,  2556,  1470,  2558,    -1,    -1,    -1,    -1,
      -1,  2564,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   152,  2577,    -1,    -1,    -1,    -1,   987,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,
      -1,    -1,  2595,  2642,    -1,    -1,  2599,    -1,   177,   178,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1530,    -1,  2619,    -1,    -1,   198,
    1536,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   221,  2646,    -1,    -1,    -1,    -1,  2651,    -1,
    2653,    -1,    -1,    -1,    -1,    -1,   235,  2660,   237,    -1,
      -1,    -1,  2665,    -1,    -1,    -1,    -1,  2670,    -1,    -1,
      -1,   823,   251,    -1,    -1,    -1,    -1,   256,    -1,    -1,
      -1,    -1,    -1,   835,   263,    -1,    -1,    -1,    -1,  2692,
    2693,   270,    -1,    -1,    -1,    -1,    -1,  1613,    -1,    -1,
      -1,    -1,    -1,  1619,    -1,    -1,    -1,    -1,    -1,   288,
      -1,    -1,    -1,  2716,    -1,    -1,  2719,    -1,    -1,  2722,
     872,    -1,   301,   302,    -1,   304,    -1,    -1,  1644,    -1,
    2733,  2734,  2735,  2736,  1650,    -1,  2458,    -1,    -1,    -1,
      -1,    -1,  2745,    -1,    -1,  2748,    -1,    20,    21,    22,
      -1,    -1,  2755,    -1,  2757,    -1,  2478,    -1,    -1,    -1,
    2482,    -1,    -1,  1679,    -1,   344,    -1,    -1,    -1,    -1,
      -1,  1687,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,
      53,    -1,    -1,    56,    -1,    -1,    -1,    -1,  2707,    -1,
      63,    -1,    -1,   945,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2739,  1761,    -1,  2742,    -1,    -1,    -1,    -1,   101,  1769,
    1770,    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,   112,
      -1,    -1,   115,    -1,  1784,  1785,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1795,  1796,    -1,   131,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1806,  1807,  1020,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1816,  1817,    -1,   152,
      -1,    -1,  1822,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1832,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1072,  1329,  1330,  1331,    -1,   198,  1842,    -1,    -1,    -1,
    1082,  1339,  1340,  1341,    -1,    -1,    -1,    -1,  1346,  1347,
    1348,     4,    -1,  1351,  1352,    -1,  1354,  1355,  1864,    -1,
      -1,    -1,    -1,    -1,    -1,   228,    19,   230,    -1,    -1,
      -1,    -1,    -1,   236,   237,    -1,    -1,    -1,    -1,     3,
       4,    -1,    -1,    -1,    -1,    -1,  1384,  1385,   251,   252,
    1388,  1389,  1898,  1899,    -1,    19,    -1,    -1,    -1,   262,
     263,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1915,
    1916,    -1,    -1,    -1,  1920,  1921,  2728,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   288,    -1,   290,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,   302,
      -1,   304,  1184,    -1,    -1,    -1,    -1,   310,    -1,    -1,
     103,    -1,    -1,    -1,  1960,    -1,    -1,  1963,  1964,  1201,
      -1,    -1,    -1,    -1,    -1,  1971,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,
      -1,   344,    -1,  1225,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1235,    -1,    -1,    -1,    -1,    -1,  2005,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,
      -1,    -1,  1254,    -1,    -1,  2021,    -1,    -1,    -1,    -1,
      -1,    -1,  1264,    -1,    -1,    -1,    -1,  1269,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,  2044,    -1,
      -1,    -1,    -1,  2049,    -1,    -1,    -1,    -1,    -1,  2055,
      -1,    -1,    -1,    -1,  2060,    -1,    -1,    -1,  2064,    -1,
    2090,  2067,    -1,    -1,  2070,    -1,  2072,    -1,    -1,    -1,
    2100,   224,    -1,    -1,  2104,  2105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2113,  2114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2122,  2123,    -1,   219,    -1,    -1,  2128,    -1,
     224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2138,  2139,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2149,
    2150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2169,
      -1,  2171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1402,    -1,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
    1432,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,  1461,
      -1,    -1,  1464,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,  1474,  1475,    -1,    -1,    -1,    -1,    -1,    -1,
    1482,    -1,    -1,    -1,  1742,    -1,    19,  1489,    -1,    -1,
      -1,  2257,    -1,    -1,    -1,    -1,    -1,  1755,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1765,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    -1,  1529,    -1,    -1,
    1532,  1533,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1541,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2342,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2352,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     103,  2361,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1837,
    2370,    -1,    -1,    -1,    -1,    -1,    -1,  2377,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2388,    -1,
      -1,    -1,    -1,    -1,  2394,    -1,    -1,  2397,    -1,    -1,
    2400,    -1,    -1,    -1,    -1,  1617,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,
      -1,    -1,    -1,  1635,    -1,    -1,    -1,  2403,    -1,    -1,
      -1,    -1,    -1,  2409,    -1,    -1,    -1,  2413,    -1,  1651,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2429,  1666,    -1,  1668,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1678,    -1,    -1,  1681,
      -1,  1683,  1684,  1685,  1686,    -1,   219,  1689,    -1,    -1,
    1692,   224,    -1,  1695,  1696,    -1,  1698,  1699,  1700,  1701,
      -1,  1703,  1704,    -1,    -1,    -1,    -1,  1709,  1710,  1711,
      -1,     4,  1714,  1715,    -1,    -1,    -1,    -1,  1720,  1721,
      -1,    -1,    -1,    -1,    -1,    -1,    19,  2517,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2526,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2535,    -1,    40,    -1,    -1,
      -1,  2541,    -1,    -1,    -1,  2545,    -1,    -1,  2548,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     103,    -1,    -1,    -1,    -1,    -1,  2582,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,    -1,
      -1,  2089,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1844,    16,    -1,    -1,  1848,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1860,    -1,
      -1,  1863,    -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,
      -1,  2129,  2130,  2131,  2132,  2133,    -1,  2135,  2136,    -1,
      -1,    -1,  2140,  2141,  2142,  2143,  2144,    -1,  2146,  2147,
      -1,  1893,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   197,    -1,    -1,    -1,  2674,     3,
       4,    -1,   205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     213,   214,    -1,    -1,    -1,    19,   219,    -1,    -1,  2695,
      -1,   224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,  1949,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2740,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2760,    -1,    -1,  2763,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   299,    -1,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2022,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
      -1,    -1,    -1,    -1,    -1,   348,    -1,    -1,    -1,    -1,
     353,   354,    -1,  2065,    -1,   159,    -1,    -1,    -1,    -1,
      -1,    -1,   245,    -1,   247,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2341,    -1,    -1,  2344,  2345,  2346,  2347,
    2348,    -1,  2350,  2351,    -1,  2353,  2354,  2355,  2356,  2357,
      -1,  2359,  2360,   197,  2362,  2363,  2364,  2365,  2366,    -1,
    2368,  2369,    -1,  2371,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2381,  2382,   219,    -1,    -1,    -1,    -1,
     224,    -1,    -1,    -1,  2392,    -1,    -1,    -1,    -1,    -1,
      -1,   235,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2181,
      -1,    -1,  2184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2192,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   296,    -1,    19,    -1,  2208,    -1,    -1,  2211,
      -1,    -1,    -1,    -1,  2216,    -1,    -1,  2219,  2220,    -1,
      -1,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,    -1,
      -1,    66,    67,    -1,    -1,    70,    -1,    -1,    -1,    -1,
      -1,    -1,  2520,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      19,  2529,    -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,
    2538,    -1,  2540,    -1,    -1,    -1,  2544,    -1,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2308,    -1,    -1,    -1,
      59,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,    -1,
      -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   103,    -1,   171,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,
      -1,    -1,    -1,  2631,   189,  2633,    -1,  2635,    -1,    -1,
    2638,    -1,  2640,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,
      -1,    -1,    -1,  2405,    -1,    -1,    -1,    -1,    -1,   224,
     159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2438,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2449,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   276,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2497,    -1,    -1,    -1,  2501,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,    -1,   344,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   292,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2554,  2555,    -1,  2557,    -1,    -1,    -1,    -1,
    2562,  2563,    -1,    -1,    -1,  2567,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,    -1,    20,    21,    22,  2600,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2624,    -1,    49,    50,    19,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    -1,    -1,    19,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,   112,    -1,    -1,
     115,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2707,   131,    19,    -1,    -1,
     103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2724,    -1,    -1,    -1,    -1,   152,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2739,   103,    -1,
    2742,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,
     175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    -1,    -1,   159,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   228,    -1,   230,    -1,    -1,    -1,    -1,
      -1,   236,   237,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   219,   252,    -1,    -1,
      -1,   224,    -1,    -1,    -1,    -1,    -1,    -1,   263,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,
      -1,    -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,   224,
     103,    -1,    -1,   288,    -1,   290,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   300,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,    -1,   310,   164,    -1,    -1,    -1,
      -1,   284,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   224,    -1,    -1,    -1,   159,    -1,    -1,   344,
      -1,    -1,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,    -1,   103,
     292,   224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,    -1,    -1,    -1,    -1,   159,    -1,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,
      98,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   127,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   140,    -1,    -1,    -1,   144,    -1,    -1,   147,
      -1,    -1,    -1,   151,   152,    -1,    -1,    -1,    -1,    -1,
     158,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     178,    -1,    -1,   181,   182,   183,    -1,    -1,   186,   187,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,
     218,   219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   231,    -1,   233,    -1,    -1,    -1,    -1,
      -1,    -1,   240,    -1,    -1,    -1,   244,    -1,    -1,   247,
      -1,   249,    -1,   251,    -1,    -1,    -1,    -1,   256,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   270,    -1,    -1,    -1,    -1,    -1,   276,    -1,
      -1,    41,    -1,    -1,    44,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,   291,   292,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   303,    66,   305,    68,    69,
      70,    -1,    -1,   311,    -1,    -1,   314,   315,    78,    -1,
      80,    -1,    -1,    -1,    -1,    85,    -1,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,    95,    -1,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   345,    -1,    -1,
      -1,    -1,    -1,    -1,   352,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   154,   155,    -1,    -1,   158,    -1,
      -1,    -1,   162,    -1,   164,   164,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   186,   187,    -1,    -1,
     190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     200,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,   218,    -1,
      -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   249,
      -1,   251,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   276,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   291,   292,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     300,    -1,    -1,    -1,    -1,    -1,    -1,   307,    -1,    -1,
      -1,    -1,    -1,   313,    -1,   315,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   352
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    41,    44,    47,    60,    65,    66,    68,    69,    70,
      78,    85,    87,    88,    97,    98,   127,   140,   144,   147,
     151,   152,   158,   164,   178,   181,   182,   183,   186,   187,
     200,   217,   218,   219,   231,   233,   240,   244,   247,   249,
     251,   256,   270,   276,   291,   292,   303,   305,   311,   314,
     315,   345,   352,   358,    67,    12,    54,    72,   102,   120,
     124,   137,   296,   392,     3,     4,   296,   359,   397,   190,
     196,   235,   260,   306,   351,   399,   288,     4,    40,   113,
     197,   249,   404,    28,   153,   176,   180,   232,   272,   280,
     281,   374,   406,    84,   101,   178,   221,   256,   407,    40,
      60,   113,   197,   292,   359,   416,     4,    19,    40,    57,
     103,   121,   159,   197,   205,   213,   214,   219,   224,   299,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   348,
     353,   354,   361,   369,   370,   371,   418,    33,   419,   361,
      44,    47,    77,    85,   145,   195,   213,   214,   220,   222,
     249,   315,   360,   147,   421,    41,    44,    47,    66,    68,
      69,    70,    78,    80,    85,    87,    88,    89,    95,    97,
     126,   144,   154,   155,   158,   162,   164,   186,   187,   190,
     200,   217,   218,   225,   249,   251,   276,   291,   292,   300,
     307,   313,   315,   352,   422,    84,   101,   464,    19,    44,
      78,    85,    96,    97,   103,   126,   144,   158,   159,   165,
     186,   224,   276,   286,   315,   467,   361,    89,   118,   188,
     203,   264,   305,   315,   473,    16,    26,   114,   126,   161,
     210,   223,   476,   234,   494,     5,    67,    89,   142,   305,
     352,   361,   495,     5,   496,    58,   133,   229,   244,   306,
     512,    46,    65,    67,   185,   243,   286,   295,   531,    67,
     206,   347,   353,   355,   532,    39,   197,   235,   296,   359,
     369,   371,   533,     5,   305,   315,   361,   536,    71,   171,
     248,   257,   537,     4,   538,    89,   512,    62,   286,   309,
     545,   197,   296,   359,   546,    26,   114,   126,   210,   223,
     548,    51,   101,   110,   139,   298,   563,   564,     4,    37,
      48,    75,   152,   189,   257,   293,   309,   387,     4,   126,
     209,   565,   296,   359,   567,    16,    23,   245,   247,   370,
     568,   234,   572,   296,   359,   573,     0,     5,   143,    60,
     359,   393,   273,     5,     4,   296,   359,   394,     5,    32,
     285,   395,   125,   359,   396,   125,   359,   398,   359,     4,
     196,   253,   402,   190,   306,   350,   351,   359,   401,   361,
     141,   179,   400,   200,   359,    79,   175,   253,   359,   403,
       5,   359,     4,   249,   405,   359,   359,     5,   230,   408,
      31,   409,     5,   410,     5,   414,     5,    31,   415,   359,
       9,    10,    11,   359,   365,   366,   367,   368,   359,   359,
      40,   113,   197,   359,   417,   359,   197,   369,   371,   359,
      35,   108,   129,   130,   138,   156,   166,   376,   359,     4,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     119,    67,    54,    72,    89,   102,   120,   124,   137,   177,
     423,   120,   425,   190,   196,   235,   260,   306,   350,   351,
     359,   411,   426,   288,   429,   171,   430,   171,   180,   432,
      66,    67,    70,    93,   171,   189,   211,   276,   344,   369,
     434,   359,   371,   437,    60,   292,   369,   438,   284,   369,
     371,   439,    33,   440,   369,   371,   441,     4,   369,   371,
     442,    45,    60,    82,   102,   119,   122,   149,   150,   202,
     212,   273,   274,   344,   446,   216,   308,   452,     5,    90,
       6,    89,   122,   444,     5,    66,   371,   443,    16,   512,
      46,    67,    82,   185,   243,   286,   295,   453,    67,   235,
     454,   287,    62,   286,   309,   455,    21,   137,   242,   271,
     456,    37,    48,    75,   152,   189,   257,   309,   457,   371,
      90,    16,   199,   462,   369,   465,    73,   468,    31,   469,
      44,    88,   195,   470,   152,   221,   263,   301,   471,   369,
      18,    59,   117,   176,   292,   369,   472,     4,   196,   475,
       5,     4,     6,   122,   359,     4,     5,   249,   477,     5,
     479,     5,   119,   195,   249,   274,   480,    95,   113,   190,
     493,     5,   491,     5,   274,   492,     4,     5,   361,   361,
     359,   359,     5,     4,     5,    61,    67,    74,    76,    81,
      84,    90,   101,   107,   116,   131,   152,   167,   177,   178,
     198,   221,   235,   237,   251,   256,   263,   270,   288,   301,
     302,   304,   344,   497,    92,   172,   261,   279,   373,     5,
       4,   200,   207,   208,   243,   349,   372,   359,   369,   359,
       5,   359,    40,   113,   359,   535,   361,   359,   369,   371,
     534,   359,   376,   359,     4,   370,    55,    91,   143,   249,
     539,     4,     4,   359,     4,   152,   263,   540,     5,   369,
       4,    40,   113,   359,   547,   359,    99,    62,   122,   249,
     277,   549,   122,   562,    62,   119,   122,   159,   195,   246,
     249,   274,   277,   287,   551,   552,    62,   122,   277,   561,
       5,     4,    34,   109,   206,   544,    67,   361,   388,    67,
     361,   389,    67,   361,   390,    13,   192,   543,   359,   359,
     228,   359,   391,   359,   274,     4,   359,   359,     4,   571,
       4,   290,   569,     4,   290,   570,     4,   376,   125,   359,
     574,   359,   359,     4,     5,   359,    12,   359,   359,   359,
      30,    96,   165,   253,   258,   375,   375,     4,   200,   359,
     359,     4,     4,     4,   359,   359,   359,   359,     4,     4,
       5,     5,   369,     5,   359,   359,   365,   367,   367,   369,
     359,   359,   359,   359,   359,   359,   359,   369,   371,   368,
     359,   359,   368,   359,     5,   273,   105,   190,   424,   196,
     253,   427,   171,    79,   175,   253,   428,   141,   179,   412,
     412,     4,   431,     4,   433,   196,   260,   435,   180,   436,
     171,   376,   359,   359,   369,   369,   376,   376,   376,   369,
     376,   359,   369,     4,   449,     4,   371,   447,   199,     4,
     168,   315,   448,   199,   369,     4,   134,   296,   451,     5,
       5,     4,   199,   359,     4,     5,    61,    67,   116,   131,
     146,   152,   157,   211,   230,   235,   237,   262,   263,   270,
     288,   344,   506,   371,   191,   191,    67,   458,    67,   459,
      67,   460,   228,   461,   359,     5,   229,   463,   370,   376,
       5,   369,   369,   369,   369,     4,   361,     4,     4,   199,
     359,    14,    15,    62,   193,   194,   267,   277,   278,   308,
      88,     5,     5,    14,    15,    62,   193,   194,   267,   277,
     278,   282,   308,    88,   159,   164,   370,   483,   488,    88,
     159,     5,   481,     4,     4,    14,    62,   193,   267,   277,
     308,     5,     5,     4,   359,   370,    20,    21,    22,    49,
      50,    53,    56,    63,    67,    75,    76,    83,    84,   101,
     107,   111,   112,   115,   131,   152,   175,   198,   228,   230,
     236,   237,   251,   252,   262,   263,   288,   290,   302,   304,
     310,   344,    67,    81,    90,   101,   131,   152,   198,   237,
     263,   302,   304,     4,    30,   163,   216,   242,   500,     5,
      64,   106,   239,   254,   255,   346,   347,   505,   101,   498,
      17,    40,   113,   197,   504,     4,     5,    17,   215,   297,
     359,   263,   505,   513,   126,   505,   514,    36,    40,   113,
     135,   197,   296,   359,   515,   369,   361,    93,   101,   107,
     128,   152,   160,   198,   206,   251,   263,   279,   518,    40,
     113,   197,     5,   289,    17,   215,   297,   522,   290,   361,
     523,     5,   101,   107,   305,    17,    17,     4,   359,   359,
     359,   359,   359,   359,   376,   359,   359,   368,   359,     4,
     376,     4,    40,   113,   197,   268,   541,    40,   113,   197,
     268,   542,     4,    99,     5,     5,    88,     4,     5,     5,
      88,     5,   552,    62,   122,   159,   277,   556,    62,   122,
     277,   560,    88,   159,    62,   122,   277,   554,     4,    62,
     122,   277,   553,     5,     5,     4,     4,     5,     5,     5,
     359,   359,   359,     4,   359,   566,   359,   359,     6,   370,
       4,     5,     4,     4,     5,     4,    99,   265,   377,   359,
     359,    12,     5,    12,   359,   359,    12,     4,    12,     4,
       4,   359,   359,   359,     4,   361,     4,     4,   376,   369,
     376,   359,   359,   359,   369,   359,   368,   359,   359,     5,
       5,   359,   371,   359,   369,   359,   376,   376,   377,   377,
     377,   376,   368,   359,   376,   359,   136,   250,   362,   450,
     168,     5,     4,   376,   159,   159,     4,     5,     4,     4,
     359,   445,   359,    20,    21,    22,    49,    50,    53,    60,
      63,    67,    75,    76,    83,   111,   112,   115,   131,   152,
     175,   184,   228,   230,   236,   237,   252,   263,   288,   290,
     300,   310,   344,    67,   131,   157,   237,   288,    30,   163,
     216,   242,   507,   359,   211,   359,   508,    17,   359,   262,
     518,   262,   211,   359,   509,   290,   510,    17,   100,   359,
     359,     5,   377,    57,   369,     4,     5,   474,   359,     5,
       5,     5,   159,   187,   381,   381,   167,   269,   379,     4,
       4,     5,     5,   478,   275,   275,     5,     5,     5,    17,
     161,   380,   380,   379,     4,     4,   379,     5,     5,   482,
     164,   343,   370,   486,     5,   485,     5,     5,   489,     5,
     490,     5,    14,    15,    62,   193,   194,   267,   277,   278,
     282,   308,     4,     4,     5,     5,   381,   379,     4,     5,
       5,   376,    83,   154,   226,   227,   241,   283,   384,     7,
       8,   359,   364,   242,   123,   242,   242,   107,    40,    67,
     101,   107,   113,   131,   152,   167,   198,   237,   251,   263,
     290,   302,   304,   305,   344,   499,   123,   242,     5,    27,
     169,   242,   286,   141,   107,    22,    50,    53,    83,   112,
     115,   230,   262,    22,    50,    53,    56,    83,   112,   115,
     230,   262,   288,    40,   123,   242,   242,   107,     5,   215,
      27,   228,    36,   135,   296,   359,   266,   273,   123,   247,
     369,   518,    40,   132,   228,   286,   247,   215,     5,     5,
     251,    27,   228,     4,     5,     5,   215,    36,   135,   296,
     359,   518,   215,   361,     4,     4,   359,     5,   308,    22,
      27,    49,    50,    52,    53,    63,    75,    76,    83,    86,
     104,   111,   112,   115,   175,   230,   236,   252,   262,   289,
     290,   310,   355,   501,   359,   359,   359,   359,   359,   505,
     369,     5,     4,     5,   359,   359,   369,   359,   361,   359,
     359,   505,     5,   359,   359,   361,     5,    17,     5,     5,
     359,   359,   368,   359,   359,     4,   359,   359,   113,   359,
     359,   113,     4,    42,    43,   173,   174,   201,   386,   386,
      62,   122,   277,   550,   386,     5,    62,   122,   277,   555,
       5,     5,    62,   122,   277,   557,     4,     5,     5,     4,
      62,   122,   277,   559,    62,   122,   277,   558,     5,     5,
       4,     5,     5,     4,   386,   386,   386,   359,   359,   359,
       4,   369,   359,   370,   376,     5,     5,    12,   359,   369,
     371,   359,    12,   359,   359,   359,    60,   359,     6,     4,
     359,   359,    47,   276,   413,     5,   361,   361,   376,   359,
       4,     4,     4,   376,   369,   359,   359,   359,   359,   376,
     369,   377,   368,   359,     4,   377,   359,    38,    38,     4,
     371,     5,    24,    25,    99,   378,     4,   369,   359,   359,
       4,   359,     5,    83,   154,   226,   227,   241,   283,   369,
     371,   242,   123,   242,   242,    21,   242,   369,   123,   242,
      27,   169,   242,   286,   141,    21,   242,   123,   242,   242,
      21,   242,    27,   170,   228,   170,   266,   273,   123,   170,
     228,   294,   518,   132,   170,   228,   286,     4,   251,    27,
     170,   228,   518,   211,   359,   359,   359,   359,   359,   359,
     199,   359,   359,    20,   238,   466,     4,     4,   359,   381,
     381,   381,     4,   381,   381,   381,    14,    15,    62,   193,
     194,   267,   277,   278,   308,   380,   381,   381,   381,   381,
     381,     4,   381,   381,     4,   380,    14,    15,    62,   193,
     194,   267,   277,   278,   308,     5,   484,     5,   487,     5,
       5,    14,    15,    62,   193,   194,   267,   277,   278,   282,
     308,     5,    14,    15,    62,   193,   194,   267,   277,   278,
     282,   308,     5,    14,    15,    62,   193,   194,   267,   277,
     278,   282,   308,    14,    15,    62,   193,   194,   267,   277,
     278,   308,   275,     5,     5,     5,   380,   380,   379,     4,
       4,   379,     5,     4,     4,   381,   381,     4,   381,   381,
       5,   361,   369,   371,     5,   359,   361,   359,     5,   359,
       5,   364,   107,   198,   251,   107,   198,   251,     5,   361,
     359,   361,     5,   359,   369,   361,     5,   364,   242,   242,
      21,   242,    21,   242,   242,    21,   242,   312,   312,     4,
       4,     4,   499,     4,     4,     4,   312,   312,     4,     5,
       4,   361,   359,     5,   359,     5,   364,   361,   369,   369,
     359,    27,    49,    52,    63,    86,   104,   355,   382,     4,
     361,   359,   376,   361,     5,   369,   369,   359,   361,   361,
     369,   369,   359,   361,   359,     5,   359,   228,   228,   359,
     359,   228,   359,   228,   359,   359,   511,   519,   359,   228,
     228,   359,   359,   359,   359,   359,   359,   359,   359,     5,
     308,   359,   502,   359,   359,   228,   359,   359,   359,   359,
     369,   376,     5,   369,   369,   359,   359,   376,   359,   359,
     359,   369,   359,   359,     5,     4,   359,   359,   359,   359,
       5,     5,     4,   386,     5,     5,     4,     4,     4,     5,
       5,     4,     4,     5,     5,     4,     5,     5,     4,   359,
     359,   359,   359,   376,   359,   369,   371,   359,   376,   359,
     359,   359,   359,   359,     5,   359,     4,     6,   359,   359,
       4,   369,   359,   376,   180,   374,   359,   374,   377,   376,
     369,   359,   359,     4,   359,   369,   369,   359,     4,     5,
       5,     5,     5,     5,   369,   376,   369,   369,   369,   369,
     371,   369,   376,   369,   369,   369,   371,   369,   369,   369,
     369,   371,   369,   369,   369,   359,   369,   369,   369,   369,
     369,   369,   369,   359,   359,     4,   359,     5,     4,   359,
     381,     5,     5,     5,   379,     4,     4,     5,   381,   380,
       4,   381,     5,     5,     5,   380,   380,   379,     4,     4,
       5,    14,    15,    62,   193,   194,   267,   277,   278,   308,
      14,    15,    62,   193,   194,   267,   277,   278,   308,    14,
      15,    62,   193,   194,   267,   277,   278,   308,   275,     5,
       5,     5,   380,   380,   379,     4,     4,   379,     5,   275,
       5,     5,     5,   380,   380,   379,     4,     4,   379,     5,
     275,     5,     5,     5,   380,   380,   379,     4,     4,   379,
       5,     5,     5,     5,   380,   380,   379,     4,     4,     5,
     380,     4,     4,   380,     4,     4,   381,     5,   376,   369,
     359,   359,   369,   359,     5,   364,     5,   369,   361,     5,
     369,   376,     5,   364,   359,   359,   359,   359,   359,   359,
     359,   359,   359,     4,     4,     5,     4,     4,   359,   369,
     359,     5,   364,   361,   376,   376,   359,   368,   376,   376,
     359,   376,   376,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,    56,    67,    94,   131,   288,   290,   344,
     516,   517,   518,   529,   530,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   369,     5,   359,
     359,   359,   359,     4,     4,   376,   377,     4,   503,   376,
     376,   368,   359,     4,   376,     4,   386,   386,   386,   364,
     359,   359,   359,   376,   359,   368,   359,   359,    12,     5,
       5,     4,   359,   359,     4,   376,   369,   359,   359,   377,
     378,   359,     5,   359,   371,     5,     5,     5,     5,     5,
     376,   378,   378,   378,   376,   378,   377,   378,   378,   376,
     378,   378,   378,   376,   378,   378,   376,   369,   378,   376,
     378,   378,   376,   378,   376,     4,   371,     5,   359,     4,
     381,   380,     4,   380,     5,     5,     5,   380,   380,   379,
       4,     4,     5,     5,     5,     5,   380,   380,   379,     4,
       4,     5,     5,     5,     5,   380,   380,   379,     4,     4,
       5,   380,   381,   381,   381,   381,   381,     4,   381,   381,
       4,   380,   380,   381,   381,   381,   381,   381,     4,   381,
     381,     4,   380,   380,     4,     4,   380,     4,   380,   380,
       4,     4,     4,   370,   378,     4,   369,   378,   359,   369,
       4,   378,   378,   369,     4,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   369,   378,   359,   369,
       4,   368,   368,   369,   368,   368,   369,   369,   368,   368,
     359,   359,   359,   359,   359,   359,   364,   359,   359,   359,
     356,   356,   356,   356,   356,   356,   356,   517,   356,   364,
     359,   359,   359,   359,   364,   359,   359,   359,   359,   359,
     359,   376,   359,   308,   363,   364,   359,   359,   377,   361,
       4,     4,   377,     4,   359,   368,   359,    60,   359,     5,
       5,   359,     4,   374,   378,     5,     4,     5,     4,     5,
     369,     5,   377,   378,   377,   377,   377,     5,     4,   359,
     381,   380,   381,   381,   381,   381,   381,     4,   381,   381,
     380,   381,   381,   381,   381,   381,     4,   381,   381,   380,
     381,   381,   381,   381,   381,     4,   381,   381,   380,   381,
     380,     4,   381,   381,   380,     4,   381,   380,     4,   380,
     380,   376,   369,   378,     4,   376,   359,   376,   359,   359,
     359,   378,     4,   376,   359,   368,   378,   359,   368,   378,
     378,   369,   359,     4,   383,   383,   359,   359,   383,   364,
     383,   519,   369,   499,     5,     4,     5,     5,     5,     4,
     361,   364,   383,   383,   359,   359,   364,   359,   359,   359,
     359,   359,   368,   359,     5,   519,   359,   383,   361,   520,
     521,     5,   361,     4,     5,   359,     5,     4,     6,   359,
      32,   285,   420,   369,     5,    32,   285,   385,   369,   420,
     359,   380,   381,   380,   381,   380,   381,   381,   380,   381,
     380,   380,   359,   378,   369,   369,   359,   369,   359,   369,
     369,   359,   369,   378,     4,   519,   519,   363,   359,   519,
       4,   519,   376,     5,     4,     4,   519,   519,   363,   359,
       4,   519,   519,   359,   369,   519,   519,   519,   520,   526,
     527,   518,   524,   525,     4,     5,     5,     6,     4,   190,
     306,   351,   359,   411,     4,   369,     4,   381,   381,   381,
     381,   381,   370,   378,   378,   359,   378,     4,   378,   378,
     359,   378,   359,   519,   519,     4,   359,   519,     5,   359,
     519,     4,   359,   519,   376,   526,   528,   529,   356,   525,
       5,     5,     4,   359,   412,   359,   412,   376,   378,     4,
     369,   371,     4,   364,   363,   359,   359,   363,   359,   369,
     529,   361,     5,     5,   359,   359,   359,   359,   385,     5,
     369,   371,   376,   369,   371,   519,   359,     4,   519,   359,
     378,     5,     5,   359,     5,   359,   376,   376,     4,   519,
       4,     5,     5,     5,   363,   363,   519,   519,   519
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

  case 7:
#line 468 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 469 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 471 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 478 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 22:
#line 483 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 23:
#line 484 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 486 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 32:
#line 493 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 36:
#line 497 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 39:
#line 500 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 44:
#line 505 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 46:
#line 507 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 48:
#line 509 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 50:
#line 511 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 55:
#line 518 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 56:
#line 519 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 57:
#line 522 "frame/parser.Y"
    {yydebug=1;;}
    break;

  case 58:
#line 523 "frame/parser.Y"
    {yydebug=0;;}
    break;

  case 59:
#line 524 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 60:
#line 525 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 61:
#line 526 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 62:
#line 527 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 528 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 529 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 530 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 531 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 532 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 533 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 536 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 70:
#line 538 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 71:
#line 539 "frame/parser.Y"
    {(yyval.integer)=1;;}
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
#line 543 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 75:
#line 544 "frame/parser.Y"
    {(yyval.integer)=0;;}
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
#line 549 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 79:
#line 550 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 80:
#line 551 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 81:
#line 552 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 82:
#line 553 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 83:
#line 556 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 84:
#line 557 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 85:
#line 560 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 86:
#line 561 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 87:
#line 562 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 88:
#line 565 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 89:
#line 568 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 90:
#line 571 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 91:
#line 575 "frame/parser.Y"
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
#line 587 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 93:
#line 594 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 94:
#line 601 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 95:
#line 608 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 96:
#line 609 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 97:
#line 610 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 98:
#line 611 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 99:
#line 612 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 100:
#line 615 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 101:
#line 616 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 102:
#line 617 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 103:
#line 618 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 104:
#line 619 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 105:
#line 620 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 106:
#line 621 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 107:
#line 622 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 108:
#line 623 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 109:
#line 624 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 110:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 111:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 112:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 113:
#line 628 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 114:
#line 629 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 115:
#line 630 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 116:
#line 631 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 117:
#line 632 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 118:
#line 633 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 119:
#line 634 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 120:
#line 635 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 121:
#line 636 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 122:
#line 637 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 123:
#line 638 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 124:
#line 639 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 125:
#line 640 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 126:
#line 641 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 127:
#line 642 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 128:
#line 645 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 129:
#line 646 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 130:
#line 649 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 131:
#line 650 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 132:
#line 651 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 133:
#line 652 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 134:
#line 653 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 135:
#line 654 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 136:
#line 657 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 137:
#line 658 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 138:
#line 659 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 139:
#line 660 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 140:
#line 661 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 141:
#line 664 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 142:
#line 665 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 143:
#line 666 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 144:
#line 667 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 145:
#line 668 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 146:
#line 669 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 147:
#line 670 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 148:
#line 671 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 149:
#line 674 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 150:
#line 675 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 151:
#line 676 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 152:
#line 677 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 153:
#line 678 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 154:
#line 681 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 155:
#line 682 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 156:
#line 683 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 157:
#line 684 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 158:
#line 685 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 159:
#line 686 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 160:
#line 687 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 161:
#line 688 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 162:
#line 691 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 163:
#line 692 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 164:
#line 693 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 165:
#line 696 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 166:
#line 697 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 167:
#line 698 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 168:
#line 699 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 169:
#line 702 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 170:
#line 703 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 171:
#line 704 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 172:
#line 707 "frame/parser.Y"
    {;}
    break;

  case 173:
#line 708 "frame/parser.Y"
    {;}
    break;

  case 174:
#line 709 "frame/parser.Y"
    {;}
    break;

  case 175:
#line 712 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 176:
#line 713 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 177:
#line 714 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 178:
#line 717 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 179:
#line 718 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 180:
#line 719 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 181:
#line 720 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 182:
#line 721 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 183:
#line 722 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 184:
#line 723 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 185:
#line 724 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 186:
#line 727 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 187:
#line 728 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 188:
#line 731 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 189:
#line 732 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 190:
#line 733 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 191:
#line 734 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 192:
#line 735 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 193:
#line 736 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 194:
#line 739 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 195:
#line 740 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 196:
#line 741 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 197:
#line 744 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 198:
#line 745 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 199:
#line 746 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 200:
#line 747 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 201:
#line 748 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 202:
#line 749 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 207:
#line 756 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 208:
#line 757 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 209:
#line 758 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 210:
#line 760 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 211:
#line 763 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 212:
#line 764 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 213:
#line 767 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 214:
#line 768 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 215:
#line 771 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 216:
#line 772 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 217:
#line 775 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 218:
#line 777 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 220:
#line 781 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 221:
#line 782 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 224:
#line 785 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 226:
#line 787 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 227:
#line 790 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 228:
#line 791 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 229:
#line 794 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 230:
#line 795 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 231:
#line 797 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 232:
#line 799 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 233:
#line 800 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 234:
#line 801 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 235:
#line 803 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 236:
#line 805 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 237:
#line 808 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 238:
#line 809 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 239:
#line 812 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 240:
#line 814 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 241:
#line 817 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 242:
#line 819 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 243:
#line 822 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 244:
#line 826 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 245:
#line 827 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 247:
#line 831 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 248:
#line 832 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 249:
#line 833 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 253:
#line 839 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 254:
#line 840 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 256:
#line 843 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 257:
#line 848 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 258:
#line 849 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 259:
#line 852 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 260:
#line 853 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 261:
#line 854 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 262:
#line 855 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 263:
#line 856 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 264:
#line 859 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 265:
#line 860 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 266:
#line 861 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 267:
#line 864 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 268:
#line 866 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 269:
#line 871 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 270:
#line 876 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 271:
#line 883 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 272:
#line 885 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 273:
#line 886 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 275:
#line 888 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 276:
#line 892 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 277:
#line 894 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 278:
#line 896 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 279:
#line 897 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 285:
#line 908 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 286:
#line 910 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 287:
#line 912 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 288:
#line 917 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 289:
#line 921 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 290:
#line 924 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 291:
#line 925 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 292:
#line 928 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 293:
#line 929 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 294:
#line 931 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 295:
#line 937 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 296:
#line 938 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 297:
#line 939 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 298:
#line 940 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 299:
#line 943 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 300:
#line 944 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 301:
#line 947 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 302:
#line 948 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 303:
#line 951 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 304:
#line 952 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 305:
#line 956 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 306:
#line 958 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 307:
#line 961 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 308:
#line 963 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 309:
#line 966 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 311:
#line 968 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 312:
#line 969 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 313:
#line 970 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 314:
#line 973 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 315:
#line 975 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 316:
#line 976 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 317:
#line 977 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 318:
#line 978 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 319:
#line 982 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 320:
#line 984 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 321:
#line 985 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 322:
#line 986 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 323:
#line 989 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 324:
#line 991 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 325:
#line 993 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 326:
#line 995 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 327:
#line 998 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 328:
#line 1001 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 329:
#line 1002 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 330:
#line 1003 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 331:
#line 1006 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 332:
#line 1009 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 346:
#line 1023 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 349:
#line 1026 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 350:
#line 1028 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 353:
#line 1031 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 354:
#line 1032 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 357:
#line 1035 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 358:
#line 1036 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 360:
#line 1039 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 362:
#line 1041 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 364:
#line 1043 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 366:
#line 1045 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 367:
#line 1047 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 368:
#line 1049 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 370:
#line 1051 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 371:
#line 1054 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 372:
#line 1055 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 373:
#line 1056 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 374:
#line 1057 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 375:
#line 1058 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 376:
#line 1059 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 378:
#line 1061 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 379:
#line 1064 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 380:
#line 1065 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 381:
#line 1066 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 382:
#line 1069 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 383:
#line 1072 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 384:
#line 1074 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 385:
#line 1076 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 386:
#line 1077 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 387:
#line 1078 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 389:
#line 1080 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 391:
#line 1083 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 392:
#line 1089 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 393:
#line 1090 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 394:
#line 1093 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 395:
#line 1094 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 396:
#line 1095 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 397:
#line 1098 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 398:
#line 1099 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 400:
#line 1105 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 401:
#line 1107 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 402:
#line 1109 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 403:
#line 1112 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 405:
#line 1114 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 406:
#line 1118 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 407:
#line 1122 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 409:
#line 1124 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 410:
#line 1125 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 411:
#line 1126 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 412:
#line 1127 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 413:
#line 1128 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 415:
#line 1130 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 416:
#line 1131 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 417:
#line 1134 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 418:
#line 1135 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 419:
#line 1136 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 420:
#line 1139 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 421:
#line 1140 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 422:
#line 1144 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 423:
#line 1146 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 424:
#line 1154 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 425:
#line 1156 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 426:
#line 1158 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 427:
#line 1161 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 428:
#line 1163 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 429:
#line 1164 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 430:
#line 1167 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 431:
#line 1170 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 432:
#line 1172 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 433:
#line 1176 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 434:
#line 1178 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 435:
#line 1181 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 436:
#line 1185 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 437:
#line 1186 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 438:
#line 1188 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)), (Coord::InternalSystem)(yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 439:
#line 1191 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 440:
#line 1192 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 442:
#line 1196 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 443:
#line 1197 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 444:
#line 1198 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 445:
#line 1201 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 446:
#line 1203 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 447:
#line 1204 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 449:
#line 1206 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 453:
#line 1210 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 454:
#line 1211 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 455:
#line 1212 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 456:
#line 1214 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 458:
#line 1216 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 459:
#line 1219 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 460:
#line 1221 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 461:
#line 1223 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 462:
#line 1224 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 463:
#line 1225 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 464:
#line 1226 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 465:
#line 1229 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 466:
#line 1230 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 467:
#line 1234 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 468:
#line 1236 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 469:
#line 1239 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 470:
#line 1242 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 471:
#line 1243 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 472:
#line 1245 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 473:
#line 1247 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 474:
#line 1249 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 475:
#line 1252 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 476:
#line 1253 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 477:
#line 1254 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 478:
#line 1257 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 479:
#line 1258 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 480:
#line 1259 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 481:
#line 1260 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 482:
#line 1261 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 483:
#line 1262 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 484:
#line 1263 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 485:
#line 1266 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 486:
#line 1269 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 487:
#line 1270 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 488:
#line 1271 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 489:
#line 1274 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 490:
#line 1275 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 491:
#line 1276 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 492:
#line 1277 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 493:
#line 1278 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 494:
#line 1279 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 499:
#line 1286 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 500:
#line 1287 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 501:
#line 1288 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 502:
#line 1291 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 503:
#line 1292 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 504:
#line 1295 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 505:
#line 1296 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 506:
#line 1299 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 507:
#line 1300 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 508:
#line 1303 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 509:
#line 1304 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 510:
#line 1307 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 512:
#line 1309 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 513:
#line 1312 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 514:
#line 1313 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 516:
#line 1317 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 517:
#line 1321 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 518:
#line 1324 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 519:
#line 1331 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 520:
#line 1332 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 521:
#line 1335 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 524:
#line 1338 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 525:
#line 1339 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 526:
#line 1340 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 527:
#line 1341 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 529:
#line 1343 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 530:
#line 1344 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 531:
#line 1345 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 533:
#line 1347 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 534:
#line 1348 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 535:
#line 1349 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 536:
#line 1350 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 538:
#line 1354 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 539:
#line 1357 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 540:
#line 1358 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 541:
#line 1361 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 542:
#line 1362 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 543:
#line 1363 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 544:
#line 1364 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 545:
#line 1367 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 546:
#line 1368 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 547:
#line 1369 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 548:
#line 1370 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 549:
#line 1373 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 550:
#line 1374 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 551:
#line 1375 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 552:
#line 1376 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 553:
#line 1377 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 554:
#line 1378 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 555:
#line 1381 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 556:
#line 1382 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 557:
#line 1383 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 560:
#line 1387 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 561:
#line 1388 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 562:
#line 1391 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 563:
#line 1394 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 564:
#line 1395 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 565:
#line 1399 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 566:
#line 1401 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 567:
#line 1402 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 574:
#line 1414 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 575:
#line 1416 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 576:
#line 1418 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 577:
#line 1419 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 578:
#line 1421 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 579:
#line 1423 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 580:
#line 1425 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 581:
#line 1427 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 582:
#line 1429 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 584:
#line 1433 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 585:
#line 1434 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 586:
#line 1435 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 587:
#line 1436 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 588:
#line 1437 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 589:
#line 1439 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 590:
#line 1440 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 591:
#line 1441 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 592:
#line 1442 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 593:
#line 1445 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 594:
#line 1449 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 595:
#line 1451 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 596:
#line 1453 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 597:
#line 1455 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 598:
#line 1457 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 599:
#line 1459 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 600:
#line 1461 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 601:
#line 1463 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 602:
#line 1466 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 603:
#line 1468 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 604:
#line 1470 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 610:
#line 1478 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 611:
#line 1479 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 612:
#line 1480 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 613:
#line 1481 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 614:
#line 1482 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 615:
#line 1483 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 616:
#line 1485 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 617:
#line 1487 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 618:
#line 1488 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 619:
#line 1489 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 620:
#line 1490 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 621:
#line 1493 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 622:
#line 1494 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 623:
#line 1495 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 624:
#line 1496 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 625:
#line 1497 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 626:
#line 1499 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 627:
#line 1500 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 628:
#line 1501 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 629:
#line 1502 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 635:
#line 1513 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 636:
#line 1516 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 637:
#line 1519 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 638:
#line 1522 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 639:
#line 1525 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 640:
#line 1528 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 641:
#line 1531 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 642:
#line 1534 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 643:
#line 1537 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 644:
#line 1542 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 645:
#line 1545 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 646:
#line 1548 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 647:
#line 1551 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 648:
#line 1554 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 649:
#line 1557 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 650:
#line 1560 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 651:
#line 1563 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 652:
#line 1566 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 653:
#line 1569 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 654:
#line 1572 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 655:
#line 1577 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 656:
#line 1580 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 657:
#line 1583 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 658:
#line 1586 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 659:
#line 1589 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 660:
#line 1592 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 661:
#line 1595 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 662:
#line 1598 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 663:
#line 1601 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 664:
#line 1606 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 665:
#line 1608 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 666:
#line 1610 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 667:
#line 1612 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 668:
#line 1614 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 669:
#line 1616 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 670:
#line 1621 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 671:
#line 1623 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 672:
#line 1625 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 673:
#line 1629 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 674:
#line 1632 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 675:
#line 1635 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 676:
#line 1638 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 677:
#line 1641 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 678:
#line 1644 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 679:
#line 1647 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 680:
#line 1650 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 681:
#line 1653 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 682:
#line 1656 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 683:
#line 1659 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 684:
#line 1663 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 685:
#line 1664 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 686:
#line 1665 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 687:
#line 1666 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 688:
#line 1667 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 689:
#line 1668 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 690:
#line 1670 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 691:
#line 1672 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 692:
#line 1673 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 693:
#line 1674 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 694:
#line 1675 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 695:
#line 1678 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 696:
#line 1679 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 697:
#line 1680 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 698:
#line 1681 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 699:
#line 1682 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 700:
#line 1684 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 701:
#line 1685 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 702:
#line 1686 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 703:
#line 1687 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 704:
#line 1691 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 705:
#line 1693 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 706:
#line 1694 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 707:
#line 1696 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 708:
#line 1698 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 709:
#line 1700 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 710:
#line 1703 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 711:
#line 1704 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 712:
#line 1707 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 713:
#line 1708 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 714:
#line 1709 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 715:
#line 1712 "frame/parser.Y"
    {
#ifdef MAC_OSX_TK
	  fr->macosxPrintCmd();
#endif
	;}
    break;

  case 716:
#line 1719 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 717:
#line 1720 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 718:
#line 1721 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 719:
#line 1722 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 720:
#line 1723 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 721:
#line 1724 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 722:
#line 1725 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 723:
#line 1729 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 725:
#line 1737 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 726:
#line 1738 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 727:
#line 1740 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 728:
#line 1742 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 729:
#line 1743 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 730:
#line 1744 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 732:
#line 1745 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 733:
#line 1746 "frame/parser.Y"
    {fr->markerDeleteCmd();;}
    break;

  case 734:
#line 1747 "frame/parser.Y"
    {fr->markerDeleteAllCmd();;}
    break;

  case 736:
#line 1749 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 737:
#line 1750 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 738:
#line 1752 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 739:
#line 1754 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 740:
#line 1756 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 741:
#line 1759 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 742:
#line 1761 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 743:
#line 1762 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 744:
#line 1764 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 745:
#line 1767 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 746:
#line 1770 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 747:
#line 1772 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 748:
#line 1775 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 749:
#line 1778 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 750:
#line 1781 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 751:
#line 1784 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 752:
#line 1788 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 753:
#line 1792 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 754:
#line 1797 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 755:
#line 1801 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 756:
#line 1802 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 757:
#line 1804 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 758:
#line 1805 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 759:
#line 1807 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 760:
#line 1809 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 761:
#line 1811 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 762:
#line 1813 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 763:
#line 1814 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 764:
#line 1816 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 765:
#line 1818 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 766:
#line 1821 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 767:
#line 1825 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 768:
#line 1829 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 769:
#line 1831 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 770:
#line 1833 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 771:
#line 1835 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 772:
#line 1837 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 773:
#line 1839 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 774:
#line 1841 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 775:
#line 1843 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 776:
#line 1845 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 777:
#line 1847 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 778:
#line 1849 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 779:
#line 1851 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 780:
#line 1853 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 781:
#line 1855 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 782:
#line 1856 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 783:
#line 1858 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 784:
#line 1860 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 785:
#line 1861 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 786:
#line 1862 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 787:
#line 1864 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 788:
#line 1866 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 789:
#line 1867 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 790:
#line 1868 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 791:
#line 1869 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 792:
#line 1871 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 793:
#line 1872 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 794:
#line 1874 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 795:
#line 1878 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 796:
#line 1881 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 797:
#line 1884 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 798:
#line 1888 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 799:
#line 1892 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 800:
#line 1897 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 801:
#line 1901 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 802:
#line 1902 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 803:
#line 1903 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 804:
#line 1905 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 805:
#line 1907 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 806:
#line 1911 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 807:
#line 1912 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 808:
#line 1913 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 809:
#line 1915 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 810:
#line 1918 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 811:
#line 1921 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 812:
#line 1924 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 813:
#line 1925 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 814:
#line 1927 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 815:
#line 1930 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 816:
#line 1934 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 817:
#line 1936 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 818:
#line 1937 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 819:
#line 1939 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 820:
#line 1942 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 821:
#line 1945 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 822:
#line 1946 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 823:
#line 1948 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 824:
#line 1949 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 825:
#line 1950 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 826:
#line 1952 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 827:
#line 1953 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 828:
#line 1955 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 829:
#line 1958 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 830:
#line 1961 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 831:
#line 1963 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 832:
#line 1964 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 836:
#line 1969 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 837:
#line 1970 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 838:
#line 1972 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 839:
#line 1974 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 840:
#line 1976 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 841:
#line 1977 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 842:
#line 1979 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer));;}
    break;

  case 843:
#line 1980 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 846:
#line 1985 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 847:
#line 1986 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 848:
#line 1987 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 849:
#line 1988 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 850:
#line 1989 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 851:
#line 1990 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 852:
#line 1991 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 853:
#line 1992 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 854:
#line 1993 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 855:
#line 1994 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 856:
#line 1996 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 857:
#line 1998 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 858:
#line 1999 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 859:
#line 2000 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 860:
#line 2001 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 861:
#line 2002 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 862:
#line 2004 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 863:
#line 2005 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 864:
#line 2006 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 865:
#line 2007 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 866:
#line 2008 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 867:
#line 2010 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 868:
#line 2011 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 869:
#line 2012 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 870:
#line 2013 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 871:
#line 2014 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 872:
#line 2015 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 873:
#line 2018 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 874:
#line 2019 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 875:
#line 2020 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 876:
#line 2021 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 877:
#line 2022 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 878:
#line 2023 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 879:
#line 2024 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 880:
#line 2025 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 881:
#line 2026 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 882:
#line 2027 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 883:
#line 2028 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 884:
#line 2029 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 885:
#line 2030 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 886:
#line 2031 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 887:
#line 2032 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 888:
#line 2033 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 889:
#line 2034 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 890:
#line 2035 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 891:
#line 2036 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 892:
#line 2037 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 893:
#line 2038 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 894:
#line 2041 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 895:
#line 2042 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 896:
#line 2043 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 897:
#line 2044 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 898:
#line 2045 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 899:
#line 2047 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 900:
#line 2057 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 901:
#line 2065 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 902:
#line 2074 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 903:
#line 2082 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 904:
#line 2089 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 905:
#line 2096 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 906:
#line 2104 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 907:
#line 2112 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 908:
#line 2117 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 909:
#line 2122 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 910:
#line 2127 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 911:
#line 2132 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 912:
#line 2137 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2142 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2147 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2156 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2166 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2176 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2185 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2193 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2203 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2213 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 922:
#line 2223 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 923:
#line 2235 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 924:
#line 2244 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 926:
#line 2252 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 927:
#line 2254 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 928:
#line 2256 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 929:
#line 2261 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 930:
#line 2264 "frame/parser.Y"
    {(yyval.dash)[0] = (yyvsp[(1) - (2)].integer); (yyval.dash)[1] = (yyvsp[(2) - (2)].integer);;}
    break;

  case 931:
#line 2268 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 932:
#line 2270 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 933:
#line 2271 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 934:
#line 2274 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 935:
#line 2275 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 936:
#line 2276 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 937:
#line 2277 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 938:
#line 2278 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 939:
#line 2279 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 940:
#line 2280 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 942:
#line 2284 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 943:
#line 2285 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 944:
#line 2286 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 945:
#line 2287 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 946:
#line 2288 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 947:
#line 2291 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 948:
#line 2293 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 949:
#line 2295 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 950:
#line 2297 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 951:
#line 2299 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 952:
#line 2301 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 953:
#line 2303 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 954:
#line 2304 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 955:
#line 2305 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 956:
#line 2307 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 957:
#line 2309 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 958:
#line 2311 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 959:
#line 2313 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 960:
#line 2315 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 961:
#line 2316 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 962:
#line 2317 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 963:
#line 2319 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 964:
#line 2321 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 965:
#line 2324 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 966:
#line 2326 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 967:
#line 2328 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 968:
#line 2329 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 969:
#line 2330 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 970:
#line 2331 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 971:
#line 2333 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 972:
#line 2334 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 973:
#line 2335 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 974:
#line 2336 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 975:
#line 2337 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 976:
#line 2339 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 977:
#line 2341 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 978:
#line 2342 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 979:
#line 2344 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 980:
#line 2346 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 981:
#line 2348 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 982:
#line 2349 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 983:
#line 2351 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 984:
#line 2353 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 985:
#line 2354 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 986:
#line 2355 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 987:
#line 2356 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 988:
#line 2358 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 989:
#line 2360 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 990:
#line 2363 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 991:
#line 2366 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 992:
#line 2367 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 993:
#line 2368 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 994:
#line 2370 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 995:
#line 2373 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 996:
#line 2376 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 997:
#line 2377 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 998:
#line 2378 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 999:
#line 2379 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1000:
#line 2381 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1001:
#line 2383 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1002:
#line 2385 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1003:
#line 2386 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1004:
#line 2388 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1005:
#line 2389 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1006:
#line 2390 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1007:
#line 2391 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1008:
#line 2392 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1009:
#line 2394 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1010:
#line 2396 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1011:
#line 2398 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1012:
#line 2400 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1014:
#line 2402 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1015:
#line 2403 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1016:
#line 2405 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1017:
#line 2407 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1018:
#line 2408 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1019:
#line 2409 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1021:
#line 2411 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1023:
#line 2415 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1024:
#line 2416 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1025:
#line 2417 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1026:
#line 2418 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1027:
#line 2419 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1028:
#line 2420 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1029:
#line 2422 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1030:
#line 2423 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1031:
#line 2425 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1032:
#line 2428 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1033:
#line 2429 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1034:
#line 2430 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1035:
#line 2431 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1036:
#line 2434 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1037:
#line 2435 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1038:
#line 2438 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1039:
#line 2439 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1040:
#line 2442 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1041:
#line 2443 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1042:
#line 2446 "frame/parser.Y"
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

  case 1043:
#line 2459 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1044:
#line 2460 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1045:
#line 2464 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1046:
#line 2465 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1047:
#line 2469 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1048:
#line 2470 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1049:
#line 2475 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer),
	    0, propQMask, propQValue, taglist);;}
    break;

  case 1050:
#line 2480 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer),
	    1, propQMask, propQValue, taglist);;}
    break;

  case 1051:
#line 2486 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1052:
#line 2488 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1053:
#line 2491 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1054:
#line 2493 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1055:
#line 2496 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].dash), (yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].str));;}
    break;

  case 1056:
#line 2499 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1057:
#line 2500 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1058:
#line 2501 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1059:
#line 2502 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1060:
#line 2503 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1061:
#line 2504 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1062:
#line 2506 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1065:
#line 2513 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1066:
#line 2514 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1067:
#line 2515 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1068:
#line 2516 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1069:
#line 2517 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1070:
#line 2518 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1073:
#line 2523 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1074:
#line 2524 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1075:
#line 2525 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1076:
#line 2526 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1077:
#line 2527 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1078:
#line 2528 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1079:
#line 2529 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1080:
#line 2530 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1081:
#line 2531 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1082:
#line 2532 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1083:
#line 2533 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1086:
#line 2540 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1087:
#line 2541 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1089:
#line 2544 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1090:
#line 2545 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1091:
#line 2546 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1092:
#line 2547 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1093:
#line 2550 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1094:
#line 2551 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1097:
#line 2559 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1098:
#line 2562 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1099:
#line 2563 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1103:
#line 2570 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1104:
#line 2573 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1105:
#line 2577 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1106:
#line 2578 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1107:
#line 2579 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1108:
#line 2580 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1109:
#line 2581 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1110:
#line 2582 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1111:
#line 2583 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1112:
#line 2584 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1113:
#line 2590 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1114:
#line 2591 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1115:
#line 2592 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1116:
#line 2593 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1117:
#line 2597 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1118:
#line 2598 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1119:
#line 2600 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1120:
#line 2605 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1122:
#line 2607 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1124:
#line 2609 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1125:
#line 2612 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1126:
#line 2614 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1127:
#line 2619 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1128:
#line 2622 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1129:
#line 2623 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1130:
#line 2624 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1131:
#line 2627 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1132:
#line 2629 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1133:
#line 2633 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1134:
#line 2634 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1135:
#line 2638 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1136:
#line 2639 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1137:
#line 2640 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1138:
#line 2641 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1139:
#line 2647 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1140:
#line 2648 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1141:
#line 2654 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1142:
#line 2655 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1143:
#line 2656 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1144:
#line 2657 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1147:
#line 2665 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1148:
#line 2667 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1149:
#line 2668 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1150:
#line 2669 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1151:
#line 2673 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1152:
#line 2674 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1153:
#line 2675 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1154:
#line 2676 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1155:
#line 2679 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1156:
#line 2680 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1157:
#line 2683 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1158:
#line 2684 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1159:
#line 2685 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1160:
#line 2688 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1161:
#line 2689 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1162:
#line 2690 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1163:
#line 2693 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1164:
#line 2694 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1166:
#line 2696 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1167:
#line 2697 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1168:
#line 2700 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1169:
#line 2701 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1170:
#line 2702 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1175:
#line 2709 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1176:
#line 2713 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1177:
#line 2715 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1178:
#line 2717 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1180:
#line 2722 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1181:
#line 2724 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1182:
#line 2726 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1192:
#line 2739 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1193:
#line 2740 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1194:
#line 2741 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1195:
#line 2744 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1196:
#line 2745 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1197:
#line 2746 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1198:
#line 2749 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1199:
#line 2750 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1200:
#line 2751 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1201:
#line 2754 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1202:
#line 2755 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1203:
#line 2756 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1205:
#line 2760 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1206:
#line 2761 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1207:
#line 2762 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1208:
#line 2765 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1209:
#line 2766 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1210:
#line 2767 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1211:
#line 2770 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1212:
#line 2771 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1213:
#line 2772 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1214:
#line 2775 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1215:
#line 2776 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1216:
#line 2777 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1217:
#line 2780 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1218:
#line 2781 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1219:
#line 2782 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1220:
#line 2786 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1221:
#line 2788 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1222:
#line 2790 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1223:
#line 2794 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1224:
#line 2798 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1225:
#line 2800 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1226:
#line 2804 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1227:
#line 2807 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1228:
#line 2808 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1229:
#line 2809 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1230:
#line 2810 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1231:
#line 2813 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1232:
#line 2815 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1233:
#line 2816 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1234:
#line 2818 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1236:
#line 2822 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1237:
#line 2823 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1238:
#line 2824 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1239:
#line 2827 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1240:
#line 2828 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1241:
#line 2832 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1243:
#line 2834 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1246:
#line 2839 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1247:
#line 2840 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1248:
#line 2841 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1249:
#line 2844 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1250:
#line 2845 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1251:
#line 2846 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1252:
#line 2849 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1253:
#line 2851 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1254:
#line 2856 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1255:
#line 2859 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1256:
#line 2866 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1257:
#line 2868 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1258:
#line 2870 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1259:
#line 2875 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1261:
#line 2879 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1262:
#line 2880 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1263:
#line 2881 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1264:
#line 2883 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1265:
#line 2885 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1266:
#line 2890 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 10948 "frame/parser.C"
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


#line 2894 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

